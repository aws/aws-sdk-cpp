/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchAssociateScramSecretAsync(...)  SubmitAsync(&KafkaClient::BatchAssociateScramSecret, __VA_ARGS__)
#define BatchAssociateScramSecretCallable(REQUEST)  SubmitCallable(&KafkaClient::BatchAssociateScramSecret, REQUEST)

#define CreateClusterAsync(...)  SubmitAsync(&KafkaClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&KafkaClient::CreateCluster, REQUEST)

#define CreateClusterV2Async(...)  SubmitAsync(&KafkaClient::CreateClusterV2, __VA_ARGS__)
#define CreateClusterV2Callable(REQUEST)  SubmitCallable(&KafkaClient::CreateClusterV2, REQUEST)

#define CreateConfigurationAsync(...)  SubmitAsync(&KafkaClient::CreateConfiguration, __VA_ARGS__)
#define CreateConfigurationCallable(REQUEST)  SubmitCallable(&KafkaClient::CreateConfiguration, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&KafkaClient::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&KafkaClient::DeleteCluster, REQUEST)

#define DeleteConfigurationAsync(...)  SubmitAsync(&KafkaClient::DeleteConfiguration, __VA_ARGS__)
#define DeleteConfigurationCallable(REQUEST)  SubmitCallable(&KafkaClient::DeleteConfiguration, REQUEST)

#define DescribeClusterAsync(...)  SubmitAsync(&KafkaClient::DescribeCluster, __VA_ARGS__)
#define DescribeClusterCallable(REQUEST)  SubmitCallable(&KafkaClient::DescribeCluster, REQUEST)

#define DescribeClusterV2Async(...)  SubmitAsync(&KafkaClient::DescribeClusterV2, __VA_ARGS__)
#define DescribeClusterV2Callable(REQUEST)  SubmitCallable(&KafkaClient::DescribeClusterV2, REQUEST)

#define DescribeClusterOperationAsync(...)  SubmitAsync(&KafkaClient::DescribeClusterOperation, __VA_ARGS__)
#define DescribeClusterOperationCallable(REQUEST)  SubmitCallable(&KafkaClient::DescribeClusterOperation, REQUEST)

#define DescribeConfigurationAsync(...)  SubmitAsync(&KafkaClient::DescribeConfiguration, __VA_ARGS__)
#define DescribeConfigurationCallable(REQUEST)  SubmitCallable(&KafkaClient::DescribeConfiguration, REQUEST)

#define DescribeConfigurationRevisionAsync(...)  SubmitAsync(&KafkaClient::DescribeConfigurationRevision, __VA_ARGS__)
#define DescribeConfigurationRevisionCallable(REQUEST)  SubmitCallable(&KafkaClient::DescribeConfigurationRevision, REQUEST)

#define BatchDisassociateScramSecretAsync(...)  SubmitAsync(&KafkaClient::BatchDisassociateScramSecret, __VA_ARGS__)
#define BatchDisassociateScramSecretCallable(REQUEST)  SubmitCallable(&KafkaClient::BatchDisassociateScramSecret, REQUEST)

#define GetBootstrapBrokersAsync(...)  SubmitAsync(&KafkaClient::GetBootstrapBrokers, __VA_ARGS__)
#define GetBootstrapBrokersCallable(REQUEST)  SubmitCallable(&KafkaClient::GetBootstrapBrokers, REQUEST)

#define GetCompatibleKafkaVersionsAsync(...)  SubmitAsync(&KafkaClient::GetCompatibleKafkaVersions, __VA_ARGS__)
#define GetCompatibleKafkaVersionsCallable(REQUEST)  SubmitCallable(&KafkaClient::GetCompatibleKafkaVersions, REQUEST)

#define ListClusterOperationsAsync(...)  SubmitAsync(&KafkaClient::ListClusterOperations, __VA_ARGS__)
#define ListClusterOperationsCallable(REQUEST)  SubmitCallable(&KafkaClient::ListClusterOperations, REQUEST)

#define ListClustersAsync(...)  SubmitAsync(&KafkaClient::ListClusters, __VA_ARGS__)
#define ListClustersCallable(REQUEST)  SubmitCallable(&KafkaClient::ListClusters, REQUEST)

#define ListClustersV2Async(...)  SubmitAsync(&KafkaClient::ListClustersV2, __VA_ARGS__)
#define ListClustersV2Callable(REQUEST)  SubmitCallable(&KafkaClient::ListClustersV2, REQUEST)

#define ListConfigurationRevisionsAsync(...)  SubmitAsync(&KafkaClient::ListConfigurationRevisions, __VA_ARGS__)
#define ListConfigurationRevisionsCallable(REQUEST)  SubmitCallable(&KafkaClient::ListConfigurationRevisions, REQUEST)

#define ListConfigurationsAsync(...)  SubmitAsync(&KafkaClient::ListConfigurations, __VA_ARGS__)
#define ListConfigurationsCallable(REQUEST)  SubmitCallable(&KafkaClient::ListConfigurations, REQUEST)

#define ListKafkaVersionsAsync(...)  SubmitAsync(&KafkaClient::ListKafkaVersions, __VA_ARGS__)
#define ListKafkaVersionsCallable(REQUEST)  SubmitCallable(&KafkaClient::ListKafkaVersions, REQUEST)

#define ListNodesAsync(...)  SubmitAsync(&KafkaClient::ListNodes, __VA_ARGS__)
#define ListNodesCallable(REQUEST)  SubmitCallable(&KafkaClient::ListNodes, REQUEST)

#define ListScramSecretsAsync(...)  SubmitAsync(&KafkaClient::ListScramSecrets, __VA_ARGS__)
#define ListScramSecretsCallable(REQUEST)  SubmitCallable(&KafkaClient::ListScramSecrets, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&KafkaClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&KafkaClient::ListTagsForResource, REQUEST)

#define RebootBrokerAsync(...)  SubmitAsync(&KafkaClient::RebootBroker, __VA_ARGS__)
#define RebootBrokerCallable(REQUEST)  SubmitCallable(&KafkaClient::RebootBroker, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&KafkaClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&KafkaClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&KafkaClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&KafkaClient::UntagResource, REQUEST)

#define UpdateBrokerCountAsync(...)  SubmitAsync(&KafkaClient::UpdateBrokerCount, __VA_ARGS__)
#define UpdateBrokerCountCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateBrokerCount, REQUEST)

#define UpdateBrokerTypeAsync(...)  SubmitAsync(&KafkaClient::UpdateBrokerType, __VA_ARGS__)
#define UpdateBrokerTypeCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateBrokerType, REQUEST)

#define UpdateBrokerStorageAsync(...)  SubmitAsync(&KafkaClient::UpdateBrokerStorage, __VA_ARGS__)
#define UpdateBrokerStorageCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateBrokerStorage, REQUEST)

#define UpdateConfigurationAsync(...)  SubmitAsync(&KafkaClient::UpdateConfiguration, __VA_ARGS__)
#define UpdateConfigurationCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateConfiguration, REQUEST)

#define UpdateConnectivityAsync(...)  SubmitAsync(&KafkaClient::UpdateConnectivity, __VA_ARGS__)
#define UpdateConnectivityCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateConnectivity, REQUEST)

#define UpdateClusterConfigurationAsync(...)  SubmitAsync(&KafkaClient::UpdateClusterConfiguration, __VA_ARGS__)
#define UpdateClusterConfigurationCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateClusterConfiguration, REQUEST)

#define UpdateClusterKafkaVersionAsync(...)  SubmitAsync(&KafkaClient::UpdateClusterKafkaVersion, __VA_ARGS__)
#define UpdateClusterKafkaVersionCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateClusterKafkaVersion, REQUEST)

#define UpdateMonitoringAsync(...)  SubmitAsync(&KafkaClient::UpdateMonitoring, __VA_ARGS__)
#define UpdateMonitoringCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateMonitoring, REQUEST)

#define UpdateSecurityAsync(...)  SubmitAsync(&KafkaClient::UpdateSecurity, __VA_ARGS__)
#define UpdateSecurityCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateSecurity, REQUEST)

#define UpdateStorageAsync(...)  SubmitAsync(&KafkaClient::UpdateStorage, __VA_ARGS__)
#define UpdateStorageCallable(REQUEST)  SubmitCallable(&KafkaClient::UpdateStorage, REQUEST)

