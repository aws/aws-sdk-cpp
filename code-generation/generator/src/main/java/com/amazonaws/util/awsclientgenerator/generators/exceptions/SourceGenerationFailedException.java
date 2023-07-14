/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.exceptions;

public class SourceGenerationFailedException extends RuntimeException {
    public SourceGenerationFailedException(String s) {
        super(s);
    }

    public SourceGenerationFailedException(String s, Throwable throwable) {
        super(s, throwable);
    }
}
