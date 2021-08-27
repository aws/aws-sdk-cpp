/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;

@Data
public class C2jErrorInfo {
    private String code;
    private int httpStatusCode;
    private boolean senderFault;
}
