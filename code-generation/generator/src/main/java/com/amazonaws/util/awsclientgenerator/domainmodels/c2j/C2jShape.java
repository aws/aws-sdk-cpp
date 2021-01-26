/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import com.google.gson.annotations.SerializedName;
import lombok.Data;

import java.util.List;
import java.util.Map;

@Data
public class C2jShape {
    private String type;
    private List<String> required;
    @SerializedName(value = "enum")
    private List<String> enums;
    private Map<String, C2jShapeMember> members;
    private C2jShapeMember member;
    private C2jShapeMember key;
    private C2jShapeMember value;
    private C2jXmlNamespace xmlNamespace;
    private String max;
    private String min;
    private String documentation;
    private String locationName;
    private String payload;
    private boolean flattened;
    private C2jErrorInfo error;
    private boolean exception;
    private String timestampFormat;
    private boolean eventstream;
    private boolean event;
    private boolean sensitive;
}
