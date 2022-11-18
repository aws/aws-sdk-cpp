/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJobRunAsync(...)  SubmitAsync(&EMRContainersClient::CancelJobRun, __VA_ARGS__)
#define CancelJobRunCallable(REQUEST)  SubmitCallable(&EMRContainersClient::CancelJobRun, REQUEST)

#define CreateJobTemplateAsync(...)  SubmitAsync(&EMRContainersClient::CreateJobTemplate, __VA_ARGS__)
#define CreateJobTemplateCallable(REQUEST)  SubmitCallable(&EMRContainersClient::CreateJobTemplate, REQUEST)

#define CreateManagedEndpointAsync(...)  SubmitAsync(&EMRContainersClient::CreateManagedEndpoint, __VA_ARGS__)
#define CreateManagedEndpointCallable(REQUEST)  SubmitCallable(&EMRContainersClient::CreateManagedEndpoint, REQUEST)

#define CreateVirtualClusterAsync(...)  SubmitAsync(&EMRContainersClient::CreateVirtualCluster, __VA_ARGS__)
#define CreateVirtualClusterCallable(REQUEST)  SubmitCallable(&EMRContainersClient::CreateVirtualCluster, REQUEST)

#define DeleteJobTemplateAsync(...)  SubmitAsync(&EMRContainersClient::DeleteJobTemplate, __VA_ARGS__)
#define DeleteJobTemplateCallable(REQUEST)  SubmitCallable(&EMRContainersClient::DeleteJobTemplate, REQUEST)

#define DeleteManagedEndpointAsync(...)  SubmitAsync(&EMRContainersClient::DeleteManagedEndpoint, __VA_ARGS__)
#define DeleteManagedEndpointCallable(REQUEST)  SubmitCallable(&EMRContainersClient::DeleteManagedEndpoint, REQUEST)

#define DeleteVirtualClusterAsync(...)  SubmitAsync(&EMRContainersClient::DeleteVirtualCluster, __VA_ARGS__)
#define DeleteVirtualClusterCallable(REQUEST)  SubmitCallable(&EMRContainersClient::DeleteVirtualCluster, REQUEST)

#define DescribeJobRunAsync(...)  SubmitAsync(&EMRContainersClient::DescribeJobRun, __VA_ARGS__)
#define DescribeJobRunCallable(REQUEST)  SubmitCallable(&EMRContainersClient::DescribeJobRun, REQUEST)

#define DescribeJobTemplateAsync(...)  SubmitAsync(&EMRContainersClient::DescribeJobTemplate, __VA_ARGS__)
#define DescribeJobTemplateCallable(REQUEST)  SubmitCallable(&EMRContainersClient::DescribeJobTemplate, REQUEST)

#define DescribeManagedEndpointAsync(...)  SubmitAsync(&EMRContainersClient::DescribeManagedEndpoint, __VA_ARGS__)
#define DescribeManagedEndpointCallable(REQUEST)  SubmitCallable(&EMRContainersClient::DescribeManagedEndpoint, REQUEST)

#define DescribeVirtualClusterAsync(...)  SubmitAsync(&EMRContainersClient::DescribeVirtualCluster, __VA_ARGS__)
#define DescribeVirtualClusterCallable(REQUEST)  SubmitCallable(&EMRContainersClient::DescribeVirtualCluster, REQUEST)

#define ListJobRunsAsync(...)  SubmitAsync(&EMRContainersClient::ListJobRuns, __VA_ARGS__)
#define ListJobRunsCallable(REQUEST)  SubmitCallable(&EMRContainersClient::ListJobRuns, REQUEST)

#define ListJobTemplatesAsync(...)  SubmitAsync(&EMRContainersClient::ListJobTemplates, __VA_ARGS__)
#define ListJobTemplatesCallable(REQUEST)  SubmitCallable(&EMRContainersClient::ListJobTemplates, REQUEST)

#define ListManagedEndpointsAsync(...)  SubmitAsync(&EMRContainersClient::ListManagedEndpoints, __VA_ARGS__)
#define ListManagedEndpointsCallable(REQUEST)  SubmitCallable(&EMRContainersClient::ListManagedEndpoints, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&EMRContainersClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&EMRContainersClient::ListTagsForResource, REQUEST)

#define ListVirtualClustersAsync(...)  SubmitAsync(&EMRContainersClient::ListVirtualClusters, __VA_ARGS__)
#define ListVirtualClustersCallable(REQUEST)  SubmitCallable(&EMRContainersClient::ListVirtualClusters, REQUEST)

#define StartJobRunAsync(...)  SubmitAsync(&EMRContainersClient::StartJobRun, __VA_ARGS__)
#define StartJobRunCallable(REQUEST)  SubmitCallable(&EMRContainersClient::StartJobRun, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&EMRContainersClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&EMRContainersClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&EMRContainersClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&EMRContainersClient::UntagResource, REQUEST)

