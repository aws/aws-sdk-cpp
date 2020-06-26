/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.List;

@Data
public class Operation {
    private String name;
    private Http http;
    private ShapeMember request;
    private ShapeMember result;
    private List<Error> errors;
    private String documentation;
    private boolean supportsPresigning;
    private boolean virtualAddressAllowed;
    private String virtualAddressMemberName;
    private boolean arnEndpointAllowed;
    private String arnEndpointMemberName;
    private boolean hasAccountIdInHostname;
    private String accountIdMemberName;
    private String authtype;
    private String authorizer;
    private boolean eventStream;

    // For Host Prefix Injection.
    private boolean hasEndpointTrait;
    private Endpoint endpoint;

    // For Cellular Request Routing
    private boolean isEndpointOperation;
    private boolean hasEndpointDiscoveryTrait;
    private boolean requireEndpointDiscovery;

    public boolean hasEndpointDiscoveryTrait() {
        return hasEndpointDiscoveryTrait;
    }
}
