/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ConfigureLogsAsync(...)  SubmitAsync(&MediaPackageClient::ConfigureLogs, __VA_ARGS__)
#define ConfigureLogsCallable(REQUEST)  SubmitCallable(&MediaPackageClient::ConfigureLogs, REQUEST)

#define CreateChannelAsync(...)  SubmitAsync(&MediaPackageClient::CreateChannel, __VA_ARGS__)
#define CreateChannelCallable(REQUEST)  SubmitCallable(&MediaPackageClient::CreateChannel, REQUEST)

#define CreateHarvestJobAsync(...)  SubmitAsync(&MediaPackageClient::CreateHarvestJob, __VA_ARGS__)
#define CreateHarvestJobCallable(REQUEST)  SubmitCallable(&MediaPackageClient::CreateHarvestJob, REQUEST)

#define CreateOriginEndpointAsync(...)  SubmitAsync(&MediaPackageClient::CreateOriginEndpoint, __VA_ARGS__)
#define CreateOriginEndpointCallable(REQUEST)  SubmitCallable(&MediaPackageClient::CreateOriginEndpoint, REQUEST)

#define DeleteChannelAsync(...)  SubmitAsync(&MediaPackageClient::DeleteChannel, __VA_ARGS__)
#define DeleteChannelCallable(REQUEST)  SubmitCallable(&MediaPackageClient::DeleteChannel, REQUEST)

#define DeleteOriginEndpointAsync(...)  SubmitAsync(&MediaPackageClient::DeleteOriginEndpoint, __VA_ARGS__)
#define DeleteOriginEndpointCallable(REQUEST)  SubmitCallable(&MediaPackageClient::DeleteOriginEndpoint, REQUEST)

#define DescribeChannelAsync(...)  SubmitAsync(&MediaPackageClient::DescribeChannel, __VA_ARGS__)
#define DescribeChannelCallable(REQUEST)  SubmitCallable(&MediaPackageClient::DescribeChannel, REQUEST)

#define DescribeHarvestJobAsync(...)  SubmitAsync(&MediaPackageClient::DescribeHarvestJob, __VA_ARGS__)
#define DescribeHarvestJobCallable(REQUEST)  SubmitCallable(&MediaPackageClient::DescribeHarvestJob, REQUEST)

#define DescribeOriginEndpointAsync(...)  SubmitAsync(&MediaPackageClient::DescribeOriginEndpoint, __VA_ARGS__)
#define DescribeOriginEndpointCallable(REQUEST)  SubmitCallable(&MediaPackageClient::DescribeOriginEndpoint, REQUEST)

#define ListChannelsAsync(...)  SubmitAsync(&MediaPackageClient::ListChannels, __VA_ARGS__)
#define ListChannelsCallable(REQUEST)  SubmitCallable(&MediaPackageClient::ListChannels, REQUEST)

#define ListHarvestJobsAsync(...)  SubmitAsync(&MediaPackageClient::ListHarvestJobs, __VA_ARGS__)
#define ListHarvestJobsCallable(REQUEST)  SubmitCallable(&MediaPackageClient::ListHarvestJobs, REQUEST)

#define ListOriginEndpointsAsync(...)  SubmitAsync(&MediaPackageClient::ListOriginEndpoints, __VA_ARGS__)
#define ListOriginEndpointsCallable(REQUEST)  SubmitCallable(&MediaPackageClient::ListOriginEndpoints, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MediaPackageClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MediaPackageClient::ListTagsForResource, REQUEST)

#define RotateIngestEndpointCredentialsAsync(...)  SubmitAsync(&MediaPackageClient::RotateIngestEndpointCredentials, __VA_ARGS__)
#define RotateIngestEndpointCredentialsCallable(REQUEST)  SubmitCallable(&MediaPackageClient::RotateIngestEndpointCredentials, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MediaPackageClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MediaPackageClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MediaPackageClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MediaPackageClient::UntagResource, REQUEST)

#define UpdateChannelAsync(...)  SubmitAsync(&MediaPackageClient::UpdateChannel, __VA_ARGS__)
#define UpdateChannelCallable(REQUEST)  SubmitCallable(&MediaPackageClient::UpdateChannel, REQUEST)

#define UpdateOriginEndpointAsync(...)  SubmitAsync(&MediaPackageClient::UpdateOriginEndpoint, __VA_ARGS__)
#define UpdateOriginEndpointCallable(REQUEST)  SubmitCallable(&MediaPackageClient::UpdateOriginEndpoint, REQUEST)

