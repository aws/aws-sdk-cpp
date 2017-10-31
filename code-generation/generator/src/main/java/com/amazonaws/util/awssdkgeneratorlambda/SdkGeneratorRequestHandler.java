/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

package com.amazonaws.util.awssdkgeneratorlambda;

import com.amazonaws.services.lambda.runtime.Context;
import com.amazonaws.services.lambda.runtime.RequestHandler;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;

import java.io.File;

public class SdkGeneratorRequestHandler implements RequestHandler<SdkGeneratorInput, SdkGeneratorOutput> {

    private Workspace workspace;

    public SdkGeneratorOutput handleRequest(SdkGeneratorInput input, Context context) {
        try {
            SdkGeneratorInputWrapper inputWrapper = new SdkGeneratorInputWrapper(input);

            // Setup a temporary workspace.
            workspace = new Workspace();
            // Load and deserialize the service model.
            C2jServiceModel model = new ServiceModelLoader(inputWrapper, workspace).loadServiceModel();
            // Generate the CPP code from the API model.
            File sdkZip = new CodeGenerator(inputWrapper, workspace).generateCode(model);
            // Upload the artifact to S3 using the presigned URL given by API Gateway.
            new SdkArtifactUploader(input.getPresignedUrl()).upload(sdkZip);

            return new SdkGeneratorOutput(true, null);
        } catch (Exception e) {
            e.printStackTrace();
            String errorMessage = String.format("%s exception encountered. Message: %s",
                    e.getClass().getSimpleName(), e.getMessage());

            return new SdkGeneratorOutput(false, errorMessage);
        } finally {
            // Clean up the temporary workspace.
            workspace.delete();
        }
    }
}
