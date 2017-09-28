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

import lombok.Data;
import java.util.Map;

/**
 * POJO representing the input of the GenerateCppSdk lambda function
 */
@Data
public class SdkGeneratorInput {

    /**
     * Base64 encoded ZIP file of the API model.
     */
    private String model;

    /**
     * Pre-signed URL created by Api Gateway to upload the generated (and zipped) code.
     */
    private String presignedUrl;

    /**
     * Parameters for CPP SDK Generation, including:
     * <p><ul>
     * <li>service.name
     * <li>cpp.namespace
     * <li>cpp.license-text //TODO: optional parameters will come later.
     * </ul></p>
     */
    private Map<String, String> sdkParameters;

}
