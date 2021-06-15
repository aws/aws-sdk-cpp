/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.s3;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.RestXmlCppClientGenerator;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;

public class S3RestXmlCppClientGenerator  extends RestXmlCppClientGenerator {

    private static Set<String> opsThatDoNotSupportVirtualAddressing = new HashSet<>();
    private static Set<String> opsThatDoNotSupportArnEndpoint = new HashSet<>();
    private static Set<String> opsThatDoNotSupportFutureInS3CRT = new HashSet<>();
    private static Set<String> bucketLocationConstraints = new HashSet<>();

    static {
        opsThatDoNotSupportVirtualAddressing.add("CreateBucket");
        opsThatDoNotSupportVirtualAddressing.add("ListBuckets");
        opsThatDoNotSupportVirtualAddressing.add("WriteGetObjectResponse");

        opsThatDoNotSupportArnEndpoint.add("CreateBucket");
        opsThatDoNotSupportArnEndpoint.add("ListBuckets");
        opsThatDoNotSupportArnEndpoint.add("WriteGetObjectResponse");

        opsThatDoNotSupportFutureInS3CRT.add("GetObject");
        opsThatDoNotSupportFutureInS3CRT.add("PutObject");

        bucketLocationConstraints.add("us-east-1");
        bucketLocationConstraints.add("us-east-2");
        bucketLocationConstraints.add("us-west-1");
        bucketLocationConstraints.add("us-west-2");
        bucketLocationConstraints.add("eu-west-1");
        bucketLocationConstraints.add("eu-west-2");
        bucketLocationConstraints.add("eu-west-3");
        bucketLocationConstraints.add("eu-central-1");
        bucketLocationConstraints.add("ap-southeast-1");
        bucketLocationConstraints.add("ap-southeast-2");
        bucketLocationConstraints.add("ap-northeast-1");
        bucketLocationConstraints.add("ap-northeast-2");
        bucketLocationConstraints.add("ap-south-1");
        bucketLocationConstraints.add("sa-east-1");
        bucketLocationConstraints.add("cn-north-1");
        bucketLocationConstraints.add("cn-northwest-1");
        bucketLocationConstraints.add("ca-central-1");
        bucketLocationConstraints.add("us-gov-west-1");
        bucketLocationConstraints.add("eu-north-1");
    }

    public S3RestXmlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        // Add ID2 and RequestId to GetObjectResult
        hackGetObjectOutputResponse(serviceModel);

        //size and content length should ALWAYS be 64 bit integers, if they aren't set them as that now.
        serviceModel.getShapes().entrySet().stream().filter(shapeEntry -> shapeEntry.getKey().toLowerCase().equals("contentlength") || shapeEntry.getKey().toLowerCase().equals("size"))
                .forEach(shapeEntry -> shapeEntry.getValue().setType("long"));

        serviceModel.getOperations().values().stream()
                .filter(operationEntry ->
                        !opsThatDoNotSupportVirtualAddressing.contains(operationEntry.getName()))
                .forEach(operationEntry -> {
                    operationEntry.setVirtualAddressAllowed(true);
                    operationEntry.setVirtualAddressMemberName("Bucket");
                });

        serviceModel.getOperations().values().stream()
                .filter(operationEntry ->
                        !opsThatDoNotSupportArnEndpoint.contains(operationEntry.getName()))
                .forEach(operationEntry -> {
                    operationEntry.setArnEndpointAllowed(true);
                    operationEntry.setArnEndpointMemberName("Bucket");
                });

        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> operationEntry.getName().equals("WriteGetObjectResponse"))
                .forEach(operationEntry -> {
                    operationEntry.setRequiresServiceNameOverride(true);
                    operationEntry.setServiceNameOverride("s3-object-lambda");
                    operationEntry.setSupportsChunkedEncoding(true);
                });



        serviceModel.getOperations().values().stream()
                .filter(operationEntry ->
                        serviceModel.getMetadata().getNamespace().equals("S3Crt") && opsThatDoNotSupportFutureInS3CRT.contains(operationEntry.getName()))
                .forEach(operationEntry -> operationEntry.setS3CrtSpecific(true));

        Shape locationConstraints = serviceModel.getShapes().get("BucketLocationConstraint");

        if (locationConstraints != null) {
            bucketLocationConstraints.stream()
                    .filter(enumEntry -> !locationConstraints.getEnumValues().contains(enumEntry))
                    .forEach(enumEntry -> locationConstraints.getEnumValues().add(enumEntry));
        }

        // Fix the typo of enum: "COMPLETE" for ReplicationStatus in API description, and "COMPLETED" is expected defined by S3 service.
        // https://github.com/aws/aws-sdk-cpp/issues/859
        Shape replicationStatus = serviceModel.getShapes().get("ReplicationStatus");
        int indexOfComplete = replicationStatus.getEnumValues().indexOf("COMPLETE");
        if (indexOfComplete != -1) {
            replicationStatus.getEnumValues().set(indexOfComplete, "COMPLETED");
        }

        // Customized Log Information
        Shape logTagKeyShape = new Shape();
        logTagKeyShape.setName("customizedAccessLogTagKey");
        logTagKeyShape.setType("string");
        logTagKeyShape.setReferenced(true);
        HashSet<String> keyReferencedBy = new HashSet<String>();
        logTagKeyShape.setReferencedBy(keyReferencedBy);
        ShapeMember shapeMemberKey = new ShapeMember();
        shapeMemberKey.setShape(logTagKeyShape);

        Shape logTagValShape = new Shape();
        logTagValShape.setName("customizedAccessLogTagVal");
        logTagValShape.setType("string");
        logTagValShape.setReferenced(true);
        HashSet<String> valReferencedBy = new HashSet<String>();
        logTagValShape.setReferencedBy(valReferencedBy);
        ShapeMember shapeMemberVal = new ShapeMember();
        shapeMemberVal.setShape(logTagValShape);

        Shape logTagShape = new Shape();
        logTagShape.setName("customizedAccessLogTag");
        logTagShape.setType("map");
        logTagShape.setReferenced(true);
        HashSet<String> tagReferencedBy = new HashSet<String>();
        logTagShape.setReferencedBy(tagReferencedBy);
        logTagKeyShape.getReferencedBy().add(logTagShape.getName());
        logTagValShape.getReferencedBy().add(logTagShape.getName());
        logTagShape.setMapKey(shapeMemberKey);
        logTagShape.setMapValue(shapeMemberVal);

        ShapeMember shapeMemberTag = new ShapeMember();
        shapeMemberTag.setLocation("querystring");
        shapeMemberTag.setCustomizedQuery(true);
        shapeMemberTag.setShape(logTagShape);

        serviceModel.getOperations().values().forEach(operationEntry -> {
            if (operationEntry.getRequest() != null) {
                operationEntry.getRequest().getShape().getMembers().put(logTagShape.getName(), shapeMemberTag);
                operationEntry.getRequest().getShape().setCustomizedQuery(shapeMemberTag);
                logTagShape.getReferencedBy().add(operationEntry.getRequest().getShape().getName());
            }
        });

        return super.generateSourceFiles(serviceModel);
    }

    protected void hackGetObjectOutputResponse(ServiceModel serviceModel) {
        Shape getObjectResult  = serviceModel.getShapes().get("GetObjectResult");
        if (getObjectResult == null) return;

        Shape id2 = new Shape();
        id2.setName("ObjectId2");
        id2.setType("string");
        if (serviceModel.getShapes().get("ObjectId2") == null) {
            serviceModel.getShapes().put("ObjectId2", id2);
        } else {
            id2 = serviceModel.getShapes().get("ObjectId2");
        }

        Shape requestId = new Shape();
        requestId.setName("ObjectRequestId");
        requestId.setType("string");
        if (serviceModel.getShapes().get("ObjectRequestId") == null) {
            serviceModel.getShapes().put("ObjectRequestId", requestId);
        } else {
            requestId = serviceModel.getShapes().get("ObjectRequestId");
        }

        ShapeMember id2ShapeMember = new ShapeMember();
        id2ShapeMember.setShape(id2);
        id2ShapeMember.setLocation("header");
        id2ShapeMember.setLocationName("x-amz-id-2");

        ShapeMember requestIdShapeMember = new ShapeMember();
        requestIdShapeMember.setShape(requestId);
        requestIdShapeMember.setLocation("header");
        requestIdShapeMember.setLocationName("x-amz-request-id");


        if (getObjectResult.getMembers().get("Id2") == null) {
            getObjectResult.getMembers().put("Id2", id2ShapeMember);
        }
        if (getObjectResult.getMembers().get("RequestId") == null) {
            getObjectResult.getMembers().put("RequestId", requestIdShapeMember);
        }
	}

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ClientHeader.vm");

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateClientSourceFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ClientSource.vm");

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/%sClient.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Template template = null;
        String fileName = "";

        switch(shapeEntry.getKey()) {
            case "GetBucketLocationResult": {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/GetBucketLocationResult.vm", StandardCharsets.UTF_8.name());
                fileName = "source/model/GetBucketLocationResult.cpp";
                break;
            }
            case "PutBucketNotificationConfigurationRequest": {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/PutBucketNotificationConfigurationRequest.vm", StandardCharsets.UTF_8.name());
                fileName = "source/model/PutBucketNotificationConfigurationRequest.cpp";
                break;
            }
            default:
                return super.generateModelSourceFile(serviceModel, shapeEntry);
        }

        Shape shape = shapeEntry.getValue();
        VelocityContext context = createContext(serviceModel);
        context.put("shape", shape);
        context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
        context.put("CppViewHelper", CppViewHelper.class);
        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateErrorMarshallerHeaderFile(ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ErrorMarshallerHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sErrorMarshaller.h",
                serviceModel.getMetadata().getProjectName(), serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateErrorMarshallingSourceFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ErrorMarshallerSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sErrorMarshaller.cpp", serviceModel.getMetadata().getClassNamePrefix());
        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateRegionHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3EndpointEnumHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sEndpoint.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateRegionSourceFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3EndpointEnumSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sEndpoint.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateARNHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ARNHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sARN.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateARNSourceFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ARNSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sARN.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateClientConfigurationFile(final ServiceModel serviceModel) throws Exception {
        if ("S3-CRT".equalsIgnoreCase(serviceModel.getMetadata().getProjectName())) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/s3-crt/S3CrtClientConfig.vm", StandardCharsets.UTF_8.name());

            VelocityContext context = createContext(serviceModel);
            context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

            String fileName = String.format("include/aws/%s/ClientConfiguration.h", serviceModel.getMetadata().getProjectName());

            return makeFile(template, context, fileName, true);
        }

        return null;
    }
}
