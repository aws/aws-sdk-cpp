/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateCliTokenAsync(...)  SubmitAsync(&MWAAClient::CreateCliToken, __VA_ARGS__)
#define CreateCliTokenCallable(REQUEST)  SubmitCallable(&MWAAClient::CreateCliToken, REQUEST)

#define CreateEnvironmentAsync(...)  SubmitAsync(&MWAAClient::CreateEnvironment, __VA_ARGS__)
#define CreateEnvironmentCallable(REQUEST)  SubmitCallable(&MWAAClient::CreateEnvironment, REQUEST)

#define CreateWebLoginTokenAsync(...)  SubmitAsync(&MWAAClient::CreateWebLoginToken, __VA_ARGS__)
#define CreateWebLoginTokenCallable(REQUEST)  SubmitCallable(&MWAAClient::CreateWebLoginToken, REQUEST)

#define DeleteEnvironmentAsync(...)  SubmitAsync(&MWAAClient::DeleteEnvironment, __VA_ARGS__)
#define DeleteEnvironmentCallable(REQUEST)  SubmitCallable(&MWAAClient::DeleteEnvironment, REQUEST)

#define GetEnvironmentAsync(...)  SubmitAsync(&MWAAClient::GetEnvironment, __VA_ARGS__)
#define GetEnvironmentCallable(REQUEST)  SubmitCallable(&MWAAClient::GetEnvironment, REQUEST)

#define ListEnvironmentsAsync(...)  SubmitAsync(&MWAAClient::ListEnvironments, __VA_ARGS__)
#define ListEnvironmentsCallable(REQUEST)  SubmitCallable(&MWAAClient::ListEnvironments, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MWAAClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MWAAClient::ListTagsForResource, REQUEST)

#define PublishMetricsAsync(...)  SubmitAsync(&MWAAClient::PublishMetrics, __VA_ARGS__)
#define PublishMetricsCallable(REQUEST)  SubmitCallable(&MWAAClient::PublishMetrics, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MWAAClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MWAAClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MWAAClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MWAAClient::UntagResource, REQUEST)

#define UpdateEnvironmentAsync(...)  SubmitAsync(&MWAAClient::UpdateEnvironment, __VA_ARGS__)
#define UpdateEnvironmentCallable(REQUEST)  SubmitCallable(&MWAAClient::UpdateEnvironment, REQUEST)

