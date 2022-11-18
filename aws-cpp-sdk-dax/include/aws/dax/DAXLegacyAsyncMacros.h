/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateClusterAsync(...)  SubmitAsync(&DAXClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&DAXClient::CreateCluster, REQUEST)

#define CreateParameterGroupAsync(...)  SubmitAsync(&DAXClient::CreateParameterGroup, __VA_ARGS__)
#define CreateParameterGroupCallable(REQUEST)  SubmitCallable(&DAXClient::CreateParameterGroup, REQUEST)

#define CreateSubnetGroupAsync(...)  SubmitAsync(&DAXClient::CreateSubnetGroup, __VA_ARGS__)
#define CreateSubnetGroupCallable(REQUEST)  SubmitCallable(&DAXClient::CreateSubnetGroup, REQUEST)

#define DecreaseReplicationFactorAsync(...)  SubmitAsync(&DAXClient::DecreaseReplicationFactor, __VA_ARGS__)
#define DecreaseReplicationFactorCallable(REQUEST)  SubmitCallable(&DAXClient::DecreaseReplicationFactor, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&DAXClient::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&DAXClient::DeleteCluster, REQUEST)

#define DeleteParameterGroupAsync(...)  SubmitAsync(&DAXClient::DeleteParameterGroup, __VA_ARGS__)
#define DeleteParameterGroupCallable(REQUEST)  SubmitCallable(&DAXClient::DeleteParameterGroup, REQUEST)

#define DeleteSubnetGroupAsync(...)  SubmitAsync(&DAXClient::DeleteSubnetGroup, __VA_ARGS__)
#define DeleteSubnetGroupCallable(REQUEST)  SubmitCallable(&DAXClient::DeleteSubnetGroup, REQUEST)

#define DescribeClustersAsync(...)  SubmitAsync(&DAXClient::DescribeClusters, __VA_ARGS__)
#define DescribeClustersCallable(REQUEST)  SubmitCallable(&DAXClient::DescribeClusters, REQUEST)

#define DescribeDefaultParametersAsync(...)  SubmitAsync(&DAXClient::DescribeDefaultParameters, __VA_ARGS__)
#define DescribeDefaultParametersCallable(REQUEST)  SubmitCallable(&DAXClient::DescribeDefaultParameters, REQUEST)

#define DescribeEventsAsync(...)  SubmitAsync(&DAXClient::DescribeEvents, __VA_ARGS__)
#define DescribeEventsCallable(REQUEST)  SubmitCallable(&DAXClient::DescribeEvents, REQUEST)

#define DescribeParameterGroupsAsync(...)  SubmitAsync(&DAXClient::DescribeParameterGroups, __VA_ARGS__)
#define DescribeParameterGroupsCallable(REQUEST)  SubmitCallable(&DAXClient::DescribeParameterGroups, REQUEST)

#define DescribeParametersAsync(...)  SubmitAsync(&DAXClient::DescribeParameters, __VA_ARGS__)
#define DescribeParametersCallable(REQUEST)  SubmitCallable(&DAXClient::DescribeParameters, REQUEST)

#define DescribeSubnetGroupsAsync(...)  SubmitAsync(&DAXClient::DescribeSubnetGroups, __VA_ARGS__)
#define DescribeSubnetGroupsCallable(REQUEST)  SubmitCallable(&DAXClient::DescribeSubnetGroups, REQUEST)

#define IncreaseReplicationFactorAsync(...)  SubmitAsync(&DAXClient::IncreaseReplicationFactor, __VA_ARGS__)
#define IncreaseReplicationFactorCallable(REQUEST)  SubmitCallable(&DAXClient::IncreaseReplicationFactor, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&DAXClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&DAXClient::ListTags, REQUEST)

#define RebootNodeAsync(...)  SubmitAsync(&DAXClient::RebootNode, __VA_ARGS__)
#define RebootNodeCallable(REQUEST)  SubmitCallable(&DAXClient::RebootNode, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DAXClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DAXClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DAXClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DAXClient::UntagResource, REQUEST)

#define UpdateClusterAsync(...)  SubmitAsync(&DAXClient::UpdateCluster, __VA_ARGS__)
#define UpdateClusterCallable(REQUEST)  SubmitCallable(&DAXClient::UpdateCluster, REQUEST)

#define UpdateParameterGroupAsync(...)  SubmitAsync(&DAXClient::UpdateParameterGroup, __VA_ARGS__)
#define UpdateParameterGroupCallable(REQUEST)  SubmitCallable(&DAXClient::UpdateParameterGroup, REQUEST)

#define UpdateSubnetGroupAsync(...)  SubmitAsync(&DAXClient::UpdateSubnetGroup, __VA_ARGS__)
#define UpdateSubnetGroupCallable(REQUEST)  SubmitCallable(&DAXClient::UpdateSubnetGroup, REQUEST)

