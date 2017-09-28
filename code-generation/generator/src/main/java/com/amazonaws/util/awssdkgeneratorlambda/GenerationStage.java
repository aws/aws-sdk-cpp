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

/**
 * Enum indicating a particular stage of SDK generation
 */
public enum GenerationStage {

    /**
     * Validating input parameters.
     */
    VALIDATION,

    /**
     * Setting up required resources, workspace, etc.
     */
    SETUP,

    /**
     * Loading and deserializing the service model from input.
     */
    MODEL_LOAD,

    /**
     * Running the code generator to produce the source code.
     */
    CODE_GEN,

    /**
     * Uploading the generated ZIP file of source code to the given pre-signed URL.
     */
    UPLOAD,

    /**
     * Cleaning up resources in the Lambda function.
     */
    CLEANUP,

    /**
     * Unhandled exception from an unknown step in the SDK generation process.
     */
    UNKNOWN;
}
