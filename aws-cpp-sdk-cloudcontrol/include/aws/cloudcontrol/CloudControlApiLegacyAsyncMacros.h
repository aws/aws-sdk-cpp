/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelResourceRequestAsync(...)  SubmitAsync(&CloudControlApiClient::CancelResourceRequest, __VA_ARGS__)
#define CancelResourceRequestCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::CancelResourceRequest, REQUEST)

#define CreateResourceAsync(...)  SubmitAsync(&CloudControlApiClient::CreateResource, __VA_ARGS__)
#define CreateResourceCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::CreateResource, REQUEST)

#define DeleteResourceAsync(...)  SubmitAsync(&CloudControlApiClient::DeleteResource, __VA_ARGS__)
#define DeleteResourceCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::DeleteResource, REQUEST)

#define GetResourceAsync(...)  SubmitAsync(&CloudControlApiClient::GetResource, __VA_ARGS__)
#define GetResourceCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::GetResource, REQUEST)

#define GetResourceRequestStatusAsync(...)  SubmitAsync(&CloudControlApiClient::GetResourceRequestStatus, __VA_ARGS__)
#define GetResourceRequestStatusCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::GetResourceRequestStatus, REQUEST)

#define ListResourceRequestsAsync(...)  SubmitAsync(&CloudControlApiClient::ListResourceRequests, __VA_ARGS__)
#define ListResourceRequestsCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::ListResourceRequests, REQUEST)

#define ListResourcesAsync(...)  SubmitAsync(&CloudControlApiClient::ListResources, __VA_ARGS__)
#define ListResourcesCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::ListResources, REQUEST)

#define UpdateResourceAsync(...)  SubmitAsync(&CloudControlApiClient::UpdateResource, __VA_ARGS__)
#define UpdateResourceCallable(REQUEST)  SubmitCallable(&CloudControlApiClient::UpdateResource, REQUEST)

