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
 * Base class for all excpetions that can be thrown by the Lambda function.
 */
public abstract class SdkGenerationException extends RuntimeException{

    protected SdkGenerationException(String message) {
        super(message);
    }

    protected SdkGenerationException(Throwable cause) {
        super(cause);
    }

    protected SdkGenerationException(String message, Throwable cause) {
        super(message, cause);
    }

    /**
     * Enum indicating the cause of a {@link SdkGenerationException}
     */
    public enum Fault {
        CUSTOMER,
        API_GATEWAY,
        INTERNAL;

        /**
         * @return True if the exception is the callers' fault, false if it's a problem with the function.
         */
        public boolean isCallerFault() {
            switch (this) {
                case CUSTOMER:
                case API_GATEWAY:
                    return true;
                case INTERNAL:
                    return false;
                default:
                    throw new IllegalArgumentException("Unsupported Fault Type");
            }
        }
    }

    /**
     * @return Fault of this exception type.
     */
    public abstract Fault getFault();

    /**
     * @return An enum indicating which stage generation failed on.
     */
    public abstract GenerationStage getFailedStage();
}
