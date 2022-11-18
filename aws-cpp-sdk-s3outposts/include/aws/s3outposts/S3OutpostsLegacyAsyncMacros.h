/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateEndpointAsync(...)  SubmitAsync(&S3OutpostsClient::CreateEndpoint, __VA_ARGS__)
#define CreateEndpointCallable(REQUEST)  SubmitCallable(&S3OutpostsClient::CreateEndpoint, REQUEST)

#define DeleteEndpointAsync(...)  SubmitAsync(&S3OutpostsClient::DeleteEndpoint, __VA_ARGS__)
#define DeleteEndpointCallable(REQUEST)  SubmitCallable(&S3OutpostsClient::DeleteEndpoint, REQUEST)

#define ListEndpointsAsync(...)  SubmitAsync(&S3OutpostsClient::ListEndpoints, __VA_ARGS__)
#define ListEndpointsCallable(REQUEST)  SubmitCallable(&S3OutpostsClient::ListEndpoints, REQUEST)

#define ListSharedEndpointsAsync(...)  SubmitAsync(&S3OutpostsClient::ListSharedEndpoints, __VA_ARGS__)
#define ListSharedEndpointsCallable(REQUEST)  SubmitCallable(&S3OutpostsClient::ListSharedEndpoints, REQUEST)

