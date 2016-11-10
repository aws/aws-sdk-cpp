/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

package com.amazonaws.util.awsclientgenerator.generators.cpp.s3;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
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

    private static Set<String> opsThatNeedMd5 = new HashSet<>();

    static {
        opsThatNeedMd5.add("DeleteObjects");
        opsThatNeedMd5.add("PutBucketCors");
        opsThatNeedMd5.add("PutBucketLifecycle");
        opsThatNeedMd5.add("PutBucketLifecycleConfiguration");
        opsThatNeedMd5.add("PutBucketPolicy");
        opsThatNeedMd5.add("PutBucketTagging");
    }

    public S3RestXmlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        //if an operation should precompute md5, make sure it is added here.
        serviceModel.getOperations().values().stream()
                .filter(operationEntry ->
                        opsThatNeedMd5.contains(operationEntry.getName()))
                .forEach(operationEntry -> operationEntry.getRequest().getShape().setComputeContentMd5(true));

        //size and content length should ALWAYS be 64 bit integers, if they aren't set them as that now.
        serviceModel.getShapes().entrySet().stream().filter(shapeEntry -> shapeEntry.getKey().toLowerCase().equals("contentlength") || shapeEntry.getKey().toLowerCase().equals("size"))
                .forEach(shapeEntry -> shapeEntry.getValue().setType("long"));

        return super.generateSourceFiles(serviceModel);
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
        switch(shapeEntry.getKey()) {
            case "GetBucketLocationResult": {
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/GetBucketLocationResult.vm", StandardCharsets.UTF_8.name());
                return makeFile(template, createContext(serviceModel), "source/model/GetBucketLocationResult.cpp", true);
            }
            default:
                return super.generateModelSourceFile(serviceModel, shapeEntry);
        }
    }
    

    protected Map<String, String> computeRegionEndpointsForService(final ServiceModel serviceModel) {
        Map<String, String> endpoints = new LinkedHashMap<>();
        endpoints.put("us-east-1", serviceModel.getMetadata().getGlobalEndpoint());
        endpoints.put("us-west-1", "s3-us-west-1.amazonaws.com");
        endpoints.put("us-west-2", "s3-us-west-2.amazonaws.com");
        endpoints.put("eu-west-1", "s3-eu-west-1.amazonaws.com");
        endpoints.put("ap-southeast-1", "s3-ap-southeast-1.amazonaws.com");
        endpoints.put("ap-southeast-2", "s3-ap-southeast-2.amazonaws.com");
        endpoints.put("ap-northeast-1", "s3-ap-northeast-1.amazonaws.com");
        endpoints.put("sa-east-1", "s3-sa-east-1.amazonaws.com");

        return endpoints;
    }
}

