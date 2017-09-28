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

package com.amazonaws.util.awssdkgeneratorlambda.exceptions;

import com.amazonaws.util.awssdkgeneratorlambda.GenerationStage;

/**
 * Thrown when the function fails unexpectedly.
 */
public class InternalGenerationException extends SdkGenerationException {

    private final GenerationStage stage;

    public InternalGenerationException(String message) {
        super(message);
        this.stage = null;
    }

    public InternalGenerationException(GenerationStage stage, Throwable cause) {
        this(stage, null, cause);
    }

    public InternalGenerationException(GenerationStage stage, String message, Throwable cause) {
        super(getMessage(stage, message), cause);
        this.stage = stage;
    }

    @Override
    public Fault getFault() {
        return Fault.INTERNAL;
    }

    @Override
    public GenerationStage getFailedStage() {
        return stage;
    }

    private static String getMessage(GenerationStage stage, String message) {
        return String.format("SDK generation failed at the %s stage. %s", stage, getNonNullOrEmpty(message));
    }

    private static String getNonNullOrEmpty(String str) {
        return str == null ? "" : str;
    }
}
