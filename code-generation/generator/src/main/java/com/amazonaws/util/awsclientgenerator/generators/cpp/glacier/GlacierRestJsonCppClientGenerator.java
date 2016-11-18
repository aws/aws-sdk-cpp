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

package com.amazonaws.util.awsclientgenerator.generators.cpp.glacier;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;

import java.util.HashMap;
import java.util.Map;

public class GlacierRestJsonCppClientGenerator extends JsonCppClientGenerator {

    public GlacierRestJsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        Map<String, String> customHeaders = new HashMap<>();
        customHeaders.put("x-amz-glacier-version", serviceModel.getMetadata().getApiVersion());
        serviceModel.getMetadata().setAdditionalHeaders(customHeaders);

        return super.generateSourceFiles(serviceModel);
    }
}
