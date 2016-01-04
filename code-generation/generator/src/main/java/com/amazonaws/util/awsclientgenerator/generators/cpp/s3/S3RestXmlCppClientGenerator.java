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
import com.amazonaws.util.awsclientgenerator.regions.RegionEndpointMapper;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.util.Map;

public class S3RestXmlCppClientGenerator  extends RestXmlCppClientGenerator {

    public S3RestXmlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ClientHeader.vm");

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName);
    }

    @Override
    protected SdkFileEntry generateClientSourceFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/S3ClientSource.vm");

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/%sClient.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName);
    }

    @Override
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        switch(shapeEntry.getKey()) {
            case "GetBucketLocationResult": {
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3/GetBucketLocationResult.vm");
                return makeFile(template, createContext(serviceModel), "source/model/GetBucketLocationResult.cpp");
            }
            default:
                return super.generateModelSourceFile(serviceModel, shapeEntry);
        }
    }
    

    protected Map<String, String> computeRegionEndpointsForService(final ServiceModel serviceModel) {
        Map<String, String> endpoints = RegionEndpointMapper.GetRegionMappingForService(serviceModel.getMetadata().getEndpointPrefix(), "%s-%s");
        endpoints.put("US_EAST_1", serviceModel.getMetadata().getGlobalEndpoint());

        return endpoints;
    }
}

