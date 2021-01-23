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
    private String authtype;
    private String authorizer;
    private boolean eventStream;
    private boolean supportsChunkedEncoding;

    // ARN supports.
    private boolean arnEndpointAllowed;
    private String arnLocation; // uri | querystring | body
    private String arnEndpointMemberName;

    // For S3 Control.
    private boolean hasAccountIdMember;
    private String accountIdMemberName;
    private boolean hasAccountIdInArn;

    // For S3 Outposts.
    private boolean hasOutpostIdMember;
    private String outpostIdMemberName;
    private boolean outpostUseNonArnEndpoint;
    private boolean hasOutpostIdInArn;

    // For S3 Object Lambda.
    private boolean requiresServiceNameOverride;
    private String serviceNameOverride;

    // For Host Prefix Injection.
    private boolean hasEndpointTrait;
    private Endpoint endpoint;

    // For Cellular Request Routing
    private boolean isEndpointOperation;
    private boolean hasEndpointDiscoveryTrait;
    private boolean requireEndpointDiscovery;

    // For pre-signed URL generation
    private boolean hasPreSignedUrl;
}
