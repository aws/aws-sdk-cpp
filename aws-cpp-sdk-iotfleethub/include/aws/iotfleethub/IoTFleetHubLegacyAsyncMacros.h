/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApplicationAsync(...)  SubmitAsync(&IoTFleetHubClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::CreateApplication, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&IoTFleetHubClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::DeleteApplication, REQUEST)

#define DescribeApplicationAsync(...)  SubmitAsync(&IoTFleetHubClient::DescribeApplication, __VA_ARGS__)
#define DescribeApplicationCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::DescribeApplication, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&IoTFleetHubClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::ListApplications, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTFleetHubClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTFleetHubClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTFleetHubClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&IoTFleetHubClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&IoTFleetHubClient::UpdateApplication, REQUEST)

