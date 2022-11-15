/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.eventbridge;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Map;

/**
 * Template specialization for EventBridge PutEvents API multi-regional endpoint support
 */
public class EventBridgeCppClientGenerator  extends JsonCppClientGenerator {

    public EventBridgeCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        return super.generateSourceFiles(serviceModel);
    }

    @Override
    protected SdkFileEntry generateClientSourceFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonServiceClientSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        if (serviceModel.getEndpointRules() != null) {
            // Store the flag of endpoint being overwritten in the config
            context.put("customEndpointUsed", true);
            // Instruct code gen to use DefaultAuthSignerProvider with SigV4A instead of default AWSAuthV4Signer
            context.put("multiRegionAccessPointSupported", true);
        } else {
            if (serviceModel.getOperations().get("PutEvents").getRequest().getShape().getMembers().containsKey("EndpointId")) {
                // Override PutEvents function body
                Map<String, String> templateOverride = new HashMap<>();
                String putEventsTemplateKey = new StringBuilder(serviceModel.getServiceName()).append("_PutEvents_OperationOutcome").toString();
                String putEventsTemplateVal = "com/amazonaws/util/awsclientgenerator/velocity/cpp/eventbridge/PutEvents_OperationOutcome.vm";
                templateOverride.put(putEventsTemplateKey, putEventsTemplateVal);
                context.put("TemplateOverride", templateOverride);

                // Store the flag of endpoint being overwritten in the config
                context.put("customEndpointUsed", true);
                // Instruct code gen to use DefaultAuthSignerProvider with SigV4A instead of default AWSAuthV4Signer
                context.put("multiRegionAccessPointSupported", true);
            }
        }

        String fileName = String.format("source/%sClient.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonServiceClientHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        if (serviceModel.getOperations().get("PutEvents").getRequest().getShape().getMembers().containsKey("EndpointId")) {
            // Store the flag of endpoint being overwritten in the config
            context.put("customEndpointUsed", true);
            // Instruct code gen to use DefaultAuthSignerProvider with SigV4A instead of default AWSAuthV4Signer
            context.put("multiRegionAccessPointSupported", true);
        }

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateRegionHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/eventbridge/EndpointEnumHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sEndpoint.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateRegionSourceFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/eventbridge/EndpointEnumSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("endpointMapping", computeEndpointMappingForService(serviceModel));

        String fileName = String.format("source/%sEndpoint.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }
}
