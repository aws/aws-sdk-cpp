/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTests;
import lombok.AccessLevel;
import lombok.Data;
import lombok.Getter;
import lombok.Setter;

import java.util.*;
import java.util.stream.Collectors;

@Data
public class ServiceModel {
    String version;
    String runtimeMajorVersion;
    String runtimeMajorVersionUpperBound;
    String runtimeMinorVersion;
    String namespace;
    String serviceName;
    Metadata metadata;
    String documentation;
    String licenseText;
    Map<String, Shape> shapes;
    Map<String, Operation> operations;
    boolean enableVirtualOperations;
    Collection<Error> serviceErrors;

    @Getter(AccessLevel.PRIVATE)
    @Setter(AccessLevel.PRIVATE)
    Set<String> inputShapes = new HashSet<>();

    @Getter(AccessLevel.PRIVATE)
    @Setter(AccessLevel.PRIVATE)
    Set<String> outputShapes = new HashSet<>();

    public boolean hasStreamingRequestShapes() {
        return shapes.values().parallelStream().anyMatch(shape -> shape.isRequest() && (shape.hasStreamMembers() || shape.hasEventStreamMembers()));
    }

    public Collection<Error> getNonCoreServiceErrors() {
        return serviceErrors.stream().filter(e -> !e.isCoreError()).collect(Collectors.toSet());
    }

    public boolean hasSigV4Auth() {
        if(metadata.getSignatureVersion().equals("v4") || metadata.getSignatureVersion().equals("s3v4")) {
            return true;
        }
        return operations.values().parallelStream().anyMatch(operation -> operation.getSignerName().equals("Aws::Auth::SIGV4_SIGNER"));
    }

    public boolean hasBearerAuth() {
        if(metadata.getSignatureVersion().equals("bearer")) {
            return true;
        }
        return operations.values().parallelStream().anyMatch(operation -> operation.getSignerName().equals("Aws::Auth::BEARER_SIGNER"));
    }

    public boolean hasOnlyBearerAuth() {
        if(!metadata.getSignatureVersion().equals("bearer")) {
            return false;
        }
        return operations.values().parallelStream().allMatch(operation -> operation.getSignerName().equals("Aws::Auth::BEARER_SIGNER"));
    }

    String endpointRules;
    EndpointTests endpointTests;
    ClientContextParams clientContextParams;
}
