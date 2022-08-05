/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;

import java.util.Map;

@Data
public class C2jShapeMember {
    String shape;
    boolean idempotencyToken;
    boolean streaming;
    String documentation;
    String location;
    String locationName;
    String queryName;
    Map<String, String> contextParam;
    C2jXmlNamespace xmlNamespace;
    boolean deprecated;
    boolean flattened;
    boolean eventpayload;
    boolean eventheader;
    boolean hostLabel;
    boolean endpointdiscoveryid;
    boolean xmlAttribute;
}
