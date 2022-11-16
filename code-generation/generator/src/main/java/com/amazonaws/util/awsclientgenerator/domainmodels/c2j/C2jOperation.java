/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.c2j;

import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValue;
import lombok.Data;

import java.lang.*;
import java.util.List;
import java.util.Map;

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
    private Map<String, Map<String, EndpointParameterValue>> staticContextParams;
    private boolean deprecated;
    private boolean httpChecksumRequired;
    private C2jHttpChecksum httpChecksum;
    // For HostPrefixInjection
    private C2jEndpoint endpoint; // endpoint trait

    // For Cellular Request Routing
    private boolean endpointoperation; // endpointoperation trait
    private C2jEndpointDiscovery endpointdiscovery; //endpointdiscovery trait
}
