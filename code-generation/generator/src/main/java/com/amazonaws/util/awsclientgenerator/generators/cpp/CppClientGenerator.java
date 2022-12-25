/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Error;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.EnumModel;
import com.amazonaws.util.awsclientgenerator.generators.ClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import java.io.IOException;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
import java.util.*;

public abstract class CppClientGenerator implements ClientGenerator {

    protected final VelocityEngine velocityEngine;

    public CppClientGenerator() throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());

        velocityEngine.init();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        //for c++, the way serialization works, we want to remove all required fields so we can do a value has been set
        //check on all fields.
        serviceModel.getShapes().values().stream().filter(hasMembers -> hasMembers.getMembers() != null).forEach(shape ->
                shape.getMembers().values().stream().filter(shapeMember ->
                        shapeMember.isRequired()).forEach( member -> member.setRequired(false)));

        getOperationsToRemove().stream().forEach(operation ->
        {
          serviceModel.getOperations().remove(operation);
        });
        List<SdkFileEntry> fileList = new ArrayList<>();
        fileList.addAll(generateModelHeaderFiles(serviceModel));
        fileList.addAll(generateModelSourceFiles(serviceModel));
        fileList.add(generateClientHeaderFile(serviceModel));
        fileList.add(generateServiceClientModelInclude(serviceModel));
        fileList.add(generateClientSourceFile(serviceModel));
        if (serviceModel.getEndpointRules() == null) {
            fileList.add(generateARNHeaderFile(serviceModel));
            fileList.add(generateARNSourceFile(serviceModel));
        }
        fileList.add(generateClientConfigurationFile(serviceModel));
        if (serviceModel.getEndpointRules() != null) {
            fileList.add(generateEndpointRulesHeaderFile(serviceModel));
            fileList.add(generateEndpointRulesSourceFile(serviceModel));
            fileList.add(generateEndpointProviderHeaderFile(serviceModel));
            fileList.add(generateEndpointProviderSourceFile(serviceModel));

            if (serviceModel.getMetadata().getServiceId().equalsIgnoreCase("S3") ||
                  serviceModel.getMetadata().getServiceId().equalsIgnoreCase("S3-CRT") ||
                  serviceModel.getMetadata().getServiceId().equalsIgnoreCase("S3 Control")) {
                fileList.add(generateServiceClientConfigurationHeaderFile(serviceModel));
                fileList.add(generateServiceClientConfigurationSourceFile(serviceModel));
            }
        } else {
            fileList.add(generateRegionHeaderFile(serviceModel));
            fileList.add(generateRegionSourceFile(serviceModel));
        }
        fileList.add(generateErrorsHeaderFile(serviceModel));
        fileList.add(generateErrorMarshallerHeaderFile(serviceModel));
        fileList.add(generateErrorSourceFile(serviceModel));
        fileList.add(generateErrorMarshallingSourceFile(serviceModel));
        fileList.add(generateServiceRequestHeader(serviceModel));
        if (serviceModel.getEndpointRules() != null) {
            fileList.add(generateServiceRequestSource(serviceModel));
        }
        fileList.add(generateExportHeader(serviceModel));
        fileList.add(generateCmakeFile(serviceModel));

        SdkFileEntry[] retArray = new SdkFileEntry[fileList.size()];
        return fileList.toArray(retArray);
    }

    protected final VelocityContext createContext(final ServiceModel serviceModel) {
        VelocityContext context = new VelocityContext();
        context.put("nl", System.lineSeparator());
        context.put("serviceModel", serviceModel);
        context.put("input.encoding", StandardCharsets.UTF_8.name());
        context.put("output.encoding", StandardCharsets.UTF_8.name());
        return context;
    }

    protected List<SdkFileEntry> generateModelHeaderFiles(final ServiceModel serviceModel) throws Exception {
        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();

        for (Map.Entry<String, Shape> shapeEntry : serviceModel.getShapes().entrySet()) {
            SdkFileEntry sdkFileEntry = generateModelHeaderFile(serviceModel, shapeEntry);
            if (sdkFileEntry != null) {
                sdkFileEntries.add(sdkFileEntry);
            }

            sdkFileEntry = generateEventStreamHandlerHeaderFile(serviceModel, shapeEntry);
            if (sdkFileEntry != null) {
                sdkFileEntries.add(sdkFileEntry);
            }
        }

        return sdkFileEntries;
    }

    protected SdkFileEntry generateModelHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Shape shape = shapeEntry.getValue();
        if (!(shape.isRequest() || shape.isEnum() || shape.hasEventPayloadMembers() && shape.hasBlobMembers())) {
            return null;
        }

        Template template = null;
        VelocityContext context = createContext(serviceModel);

        if (shape.isRequest()) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/RequestHeader.vm", StandardCharsets.UTF_8.name());
            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                String key = opEntry.getKey();
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName()) {
                    context.put("operation", op);
                    context.put("operationName", key);
                    break;
                }
            }
        }
        else if (shape.isEnum()) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ModelEnumHeader.vm", StandardCharsets.UTF_8.name());
            EnumModel enumModel = new EnumModel(serviceModel.getMetadata().getNamespace(), shapeEntry.getKey(), shape.getEnumValues());
            context.put("enumModel", enumModel);
        }
        else if (shape.isEvent() && shape.getEventPayloadType().equals("blob")) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EventHeader.vm", StandardCharsets.UTF_8.name());
            shape.getMembers().entrySet().stream().filter(memberEntry -> memberEntry.getKey().equals(shape.getEventPayloadMemberName())).forEach(blobMemberEntry -> context.put("blobMember", blobMemberEntry));
        }
        context.put("shape", shape);
        context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/model/%s.h", serviceModel.getMetadata().getProjectName(),
                shapeEntry.getKey());
        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateEventStreamHandlerHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Shape shape = shapeEntry.getValue();
        if (shape.isRequest()) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/RequestEventStreamHandlerHeader.vm", StandardCharsets.UTF_8.name());
            VelocityContext context = createContext(serviceModel);

            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                String key = opEntry.getKey();
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName() && op.getResult() != null) {
                    if (op.getResult().getShape().hasEventStreamMembers()) {
                        for (Map.Entry<String, ShapeMember> shapeMemberEntry : op.getResult().getShape().getMembers().entrySet()) {
                            if (shapeMemberEntry.getValue().getShape().isEventStream()) {
                                context.put("eventStreamShape", shapeMemberEntry.getValue().getShape());
                                context.put("operation", op);
                                context.put("shape", shape);
                                context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
                                context.put("CppViewHelper", CppViewHelper.class);

                                String fileName = String.format("include/aws/%s/model/%sHandler.h", serviceModel.getMetadata().getProjectName(), key);
                                return makeFile(template, context, fileName, true);
                            }
                        }
                    }
                }
            }
        }

        return null;
    }

    protected List<SdkFileEntry> generateModelSourceFiles(final ServiceModel serviceModel) throws Exception {

        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();

        for (Map.Entry<String, Shape> shapeEntry : serviceModel.getShapes().entrySet()) {

            SdkFileEntry sdkFileEntry = generateModelSourceFile(serviceModel, shapeEntry);
            if (sdkFileEntry != null)
            {
                sdkFileEntries.add(sdkFileEntry);
            }

            sdkFileEntry = generateEventStreamHandlerSourceFile(serviceModel, shapeEntry);
            if (sdkFileEntry != null)
            {
                sdkFileEntries.add(sdkFileEntry);
            }
        }

        return sdkFileEntries;
    }

    protected abstract SdkFileEntry generateErrorMarshallerHeaderFile(ServiceModel serviceModel) throws Exception;

    //these probably don't need to be abstract, since xml and json implementations are not considered here.
    protected abstract SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception;

    protected SdkFileEntry generateServiceClientModelInclude(ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/common/model/ServiceClientModelHeaderInclude.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sServiceClientModel.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected abstract SdkFileEntry generateClientSourceFile(final ServiceModel serviceModel) throws Exception;

    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Shape shape = shapeEntry.getValue();
        Template template;
        VelocityContext context = createContext(serviceModel);

        if (shape.isEnum()) {
            template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EnumSource.vm", StandardCharsets.UTF_8.name());
            EnumModel enumModel = new EnumModel(serviceModel.getMetadata().getNamespace(), shapeEntry.getKey(), shape.getEnumValues());
            context.put("enumModel", enumModel);

            context.put("shape", shape);
            context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
            context.put("CppViewHelper", CppViewHelper.class);

            String fileName = String.format("source/model/%s.cpp", shapeEntry.getKey());
            return makeFile(template, context, fileName, true);
        }

        if (shape.isRequest()) {
            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName()) {
                    context.put("operation", op);
                    break;
                }
            }
        }

        return null;
    }

    protected SdkFileEntry generateEventStreamHandlerSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Shape shape = shapeEntry.getValue();
        if (shape.isRequest()) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/xml/XmlRequestEventStreamHandlerSource.vm", StandardCharsets.UTF_8.name());
            VelocityContext context = createContext(serviceModel);

            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                String key = opEntry.getKey();
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName() && op.getResult() != null) {
                    if (op.getResult().getShape().hasEventStreamMembers()) {
                        for (Map.Entry<String, ShapeMember> shapeMemberEntry : op.getResult().getShape().getMembers().entrySet()) {
                            if (shapeMemberEntry.getValue().getShape().isEventStream()) {
                                context.put("eventStreamShape", shapeMemberEntry.getValue().getShape());
                                context.put("operation", op);
                                context.put("shape", shape);
                                context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
                                context.put("CppViewHelper", CppViewHelper.class);

                                String fileName = String.format("source/model/%sHandler.cpp", key);
                                return makeFile(template, context, fileName, true);
                            }
                        }
                    }
                }
            }
        }

        return null;
    }

    protected SdkFileEntry generateErrorSourceFile(final ServiceModel serviceModel) throws Exception {

        Set<String> retryableErrors = getRetryableErrors();
        for(Error error : serviceModel.getServiceErrors()) {
           if(retryableErrors.contains(error.getName())) {
               error.setRetryable(true);
           }
        }

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ServiceErrorsSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("ErrorFormatter", ErrorFormatter.class);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/%sErrors.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    protected Set<String> getRetryableErrors() {
        HashSet<String> exceptions = new HashSet<>();
        exceptions.add("Throttling");
        exceptions.add("ThrottlingException");
        exceptions.add("ThrottledException");
        exceptions.add("RequestThrottledException");
        exceptions.add("TooManyRequestsException");
        exceptions.add("ProvisionedThroughputExceededException");
        exceptions.add("TransactionInProgressException");
        exceptions.add("RequestLimitExceeded");
        exceptions.add("BandwidthLimitExceeded");
        exceptions.add("LimitExceededException");
        exceptions.add("RequestThrottled");
        exceptions.add("SlowDown");
        exceptions.add("PriorRequestNotComplete");
        exceptions.add("EC2ThrottledException");
        return exceptions;
    }

    protected SdkFileEntry generateErrorMarshallingSourceFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ServiceErrorMarshallerSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sErrorMarshaller.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateErrorsHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/ErrorsHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        ErrorFormatter errorFormatter = new ErrorFormatter();
        context.put("errorConstNames", errorFormatter.formatErrorConstNames(serviceModel.getNonCoreServiceErrors()));
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sErrors.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateARNHeaderFile(final ServiceModel serviceModel) throws Exception {
        // no-op for services other than S3.
        return null;
    }

    protected SdkFileEntry generateARNSourceFile(final ServiceModel serviceModel) throws Exception {
        // no-op for services other than S3.
        return null;
    }

    protected SdkFileEntry generateClientConfigurationFile(final ServiceModel serviceModel) throws Exception {
        // no-op for services other than S3Crt.
        return null;
    }

    private SdkFileEntry generateServiceRequestHeader(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/AbstractServiceRequestHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sRequest.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    private SdkFileEntry generateServiceRequestSource(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/AbstractServiceRequestSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/%sRequest.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateRegionHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EndpointEnumHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sEndpoint.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateRegionSourceFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/EndpointEnumSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("endpointMapping", computeEndpointMappingForService(serviceModel));

        String fileName = String.format("source/%sEndpoint.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    protected SdkFileEntry generateEndpointRulesHeaderFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointRulesHeader.vm";
        String fileName = String.format("include/aws/%s/%sEndpointRules.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateEndpointRulesSourceFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointRulesSource.vm";
        String fileName = String.format("source/%sEndpointRules.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateEndpointProviderHeaderFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointProviderHeader.vm";
        String fileName = String.format("include/aws/%s/%sEndpointProvider.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateEndpointProviderSourceFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/endpoint/EndpointProviderSource.vm";
        String fileName = String.format("source/%sEndpointProvider.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateServiceClientConfigurationHeaderFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/common/ServiceClientConfigurationHeader.vm";
        String fileName = String.format("include/aws/%s/%sClientConfiguration.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected SdkFileEntry generateServiceClientConfigurationSourceFile(ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/common/ServiceClientConfigurationSource.vm";
        String fileName = String.format("source/%sClientConfiguration.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    protected Map<String, String> computeEndpointMappingForService(ServiceModel serviceModel) {
        Map<String, String> endpoints = new HashMap<>();

        if (serviceModel.getServiceName().equals("budgets") ||
            serviceModel.getServiceName().equals("cloudfront") ||
            serviceModel.getServiceName().equals("importexport") ||
            serviceModel.getServiceName().equals("savingsplans") ||
            serviceModel.getServiceName().equals("waf"))
        {
            serviceModel.getMetadata().setGlobalEndpoint(serviceModel.getServiceName() + ".amazonaws.com");

        } else if (serviceModel.getServiceName().equals("ce")) {
            serviceModel.getMetadata().setGlobalEndpoint("ce.us-east-1.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("chime")) {
            serviceModel.getMetadata().setGlobalEndpoint("chime.us-east-1.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("iam")) {
            endpoints.put("cn-north-1", "iam.cn-north-1.amazonaws.com.cn");
            endpoints.put("cn-northwest-1", "iam.cn-north-1.amazonaws.com.cn");
            endpoints.put("us-gov-east-1", "iam.us-gov.amazonaws.com");
            endpoints.put("us-gov-west-1", "iam.us-gov.amazonaws.com");
            endpoints.put("us-iso-east-1", "iam.us-iso-east-1.c2s.ic.gov");
            endpoints.put("us-isob-east-1", "iam.us-isob-east-1.sc2s.sgov.gov");
            serviceModel.getMetadata().setGlobalEndpoint("iam.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("kms")) {
            endpoints.put("us-iso-east-1", "kms-fips.us-iso-east-1.c2s.ic.gov");
            endpoints.put("us-isob-east-1", "kms-fips.us-isob-east-1.sc2s.sgov.gov");
            endpoints.put("us-iso-west-1", "kms-fips.us-iso-west-1.c2s.ic.gov");

        } else if (serviceModel.getServiceName().equals("organizations")) {
            endpoints.put("us-gov-west-1", "organizations.us-gov-west-1.amazonaws.com");
            endpoints.put("fips-aws-global", "organizations-fips.us-east-1.amazonaws.com");
            serviceModel.getMetadata().setGlobalEndpoint("organizations.us-east-1.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("route53")) {
            endpoints.put("us-gov-west-1", "route53.us-gov.amazonaws.com");
            endpoints.put("us-iso-east-1", "route53.c2s.ic.gov");
            endpoints.put("fips-aws-global", "route53-fips.amazonaws.com");
            serviceModel.getMetadata().setGlobalEndpoint("route53.amazonaws.com");

        } else if (serviceModel.getServiceName().equals("shield")) {
            endpoints.put("fips-aws-global", "shield-fips.us-east-1.amazonaws.com");
        }

        else if (serviceModel.getServiceName().equals("sts")) {
             serviceModel.getMetadata().setGlobalEndpoint(null);
        }

        return endpoints;
    }

    private SdkFileEntry generateExportHeader(final ServiceModel serviceModel) throws Exception {
        String templateName = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/ServiceExportHeader.vm";
        String fileName = String.format("include/aws/%s/%s_EXPORTS.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());
        return generateSingleSourceFile(serviceModel, templateName, fileName);
    }

    private SdkFileEntry generateCmakeFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/CMakeFile.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        return makeFile(template, context, "CMakeLists.txt", false);
    }

    private SdkFileEntry generateSingleSourceFile(final ServiceModel serviceModel, final String templatePath, final String dstFileName) throws IOException {
        Template template = velocityEngine.getTemplate(templatePath, StandardCharsets.UTF_8.name());
        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));
        return makeFile(template, context, dstFileName, true);
    }

    protected final SdkFileEntry makeFile(Template template, VelocityContext context, String path, boolean needsBOM) throws IOException {
        StringWriter sw = new StringWriter();
        template.merge(context, sw);

        try {
            sw.close();
        } catch (IOException e) {
            throw new SourceGenerationFailedException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
        sw.flush();
        StringBuffer sb = new StringBuffer();
        sb.append(sw.toString());

        SdkFileEntry file = new SdkFileEntry();
        file.setPathRelativeToRoot(path);
        file.setSdkFile(sb);
        file.setNeedsByteOrderMark(needsBOM);
        return file;
    }

    protected Set<String> getOperationsToRemove(){
        return new HashSet<String>();
    }
}
