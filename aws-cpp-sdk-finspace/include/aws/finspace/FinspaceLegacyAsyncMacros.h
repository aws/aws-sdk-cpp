/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateEnvironmentAsync(...)  SubmitAsync(&FinspaceClient::CreateEnvironment, __VA_ARGS__)
#define CreateEnvironmentCallable(REQUEST)  SubmitCallable(&FinspaceClient::CreateEnvironment, REQUEST)

#define DeleteEnvironmentAsync(...)  SubmitAsync(&FinspaceClient::DeleteEnvironment, __VA_ARGS__)
#define DeleteEnvironmentCallable(REQUEST)  SubmitCallable(&FinspaceClient::DeleteEnvironment, REQUEST)

#define GetEnvironmentAsync(...)  SubmitAsync(&FinspaceClient::GetEnvironment, __VA_ARGS__)
#define GetEnvironmentCallable(REQUEST)  SubmitCallable(&FinspaceClient::GetEnvironment, REQUEST)

#define ListEnvironmentsAsync(...)  SubmitAsync(&FinspaceClient::ListEnvironments, __VA_ARGS__)
#define ListEnvironmentsCallable(REQUEST)  SubmitCallable(&FinspaceClient::ListEnvironments, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&FinspaceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&FinspaceClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&FinspaceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&FinspaceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&FinspaceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&FinspaceClient::UntagResource, REQUEST)

#define UpdateEnvironmentAsync(...)  SubmitAsync(&FinspaceClient::UpdateEnvironment, __VA_ARGS__)
#define UpdateEnvironmentCallable(REQUEST)  SubmitCallable(&FinspaceClient::UpdateEnvironment, REQUEST)

