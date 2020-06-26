/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import lombok.Data;

import java.lang.*;
import java.util.List;

@Data
public class C2jOperation {
    private String name;
    private String authtype;
    private String authorizer;
    private C2jHttp http;
    private C2jShapeMember input;
    private C2jShapeMember output;
    private List<C2jError> errors;
    private String documentation;
    private boolean deprecated;
    private boolean httpChecksumRequired;
    // For HostPrefixInjection
    private C2jEndpoint endpoint; // endpoint trait

    // For Cellular Request Routing
    private boolean endpointoperation; // endpointoperation trait
    private C2jEndpointDiscovery endpointdiscovery; //endpointdiscovery trait
}
