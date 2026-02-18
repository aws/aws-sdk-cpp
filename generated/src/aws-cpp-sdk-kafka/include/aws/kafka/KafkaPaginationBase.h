/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kafka/model/DescribeTopicPartitionsPaginationTraits.h>
#include <aws/kafka/model/ListClientVpcConnectionsPaginationTraits.h>
#include <aws/kafka/model/ListClusterOperationsPaginationTraits.h>
#include <aws/kafka/model/ListClusterOperationsV2PaginationTraits.h>
#include <aws/kafka/model/ListClustersPaginationTraits.h>
#include <aws/kafka/model/ListClustersV2PaginationTraits.h>
#include <aws/kafka/model/ListConfigurationRevisionsPaginationTraits.h>
#include <aws/kafka/model/ListConfigurationsPaginationTraits.h>
#include <aws/kafka/model/ListKafkaVersionsPaginationTraits.h>
#include <aws/kafka/model/ListNodesPaginationTraits.h>
#include <aws/kafka/model/ListReplicatorsPaginationTraits.h>
#include <aws/kafka/model/ListScramSecretsPaginationTraits.h>
#include <aws/kafka/model/ListTopicsPaginationTraits.h>
#include <aws/kafka/model/ListVpcConnectionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Kafka {

class KafkaClient;

template <typename DerivedClient>
class KafkaPaginationBase {
 public:
  /**
   * Create a paginator for DescribeTopicPartitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTopicPartitionsRequest,
                                    Pagination::DescribeTopicPartitionsPaginationTraits<DerivedClient>>
  DescribeTopicPartitionsPaginator(const Model::DescribeTopicPartitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTopicPartitionsRequest,
                                             Pagination::DescribeTopicPartitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClientVpcConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClientVpcConnectionsRequest,
                                    Pagination::ListClientVpcConnectionsPaginationTraits<DerivedClient>>
  ListClientVpcConnectionsPaginator(const Model::ListClientVpcConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClientVpcConnectionsRequest,
                                             Pagination::ListClientVpcConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusterOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterOperationsRequest,
                                    Pagination::ListClusterOperationsPaginationTraits<DerivedClient>>
  ListClusterOperationsPaginator(const Model::ListClusterOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterOperationsRequest,
                                             Pagination::ListClusterOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusterOperationsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterOperationsV2Request,
                                    Pagination::ListClusterOperationsV2PaginationTraits<DerivedClient>>
  ListClusterOperationsV2Paginator(const Model::ListClusterOperationsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClusterOperationsV2Request,
                                             Pagination::ListClusterOperationsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListClustersV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersV2Request, Pagination::ListClustersV2PaginationTraits<DerivedClient>>
  ListClustersV2Paginator(const Model::ListClustersV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersV2Request,
                                             Pagination::ListClustersV2PaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListConfigurationRevisions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationRevisionsRequest,
                                    Pagination::ListConfigurationRevisionsPaginationTraits<DerivedClient>>
  ListConfigurationRevisionsPaginator(const Model::ListConfigurationRevisionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationRevisionsRequest,
                                             Pagination::ListConfigurationRevisionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationsRequest,
                                    Pagination::ListConfigurationsPaginationTraits<DerivedClient>>
  ListConfigurationsPaginator(const Model::ListConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationsRequest,
                                             Pagination::ListConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListKafkaVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKafkaVersionsRequest,
                                    Pagination::ListKafkaVersionsPaginationTraits<DerivedClient>>
  ListKafkaVersionsPaginator(const Model::ListKafkaVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKafkaVersionsRequest,
                                             Pagination::ListKafkaVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>
  ListNodesPaginator(const Model::ListNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReplicators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReplicatorsRequest,
                                    Pagination::ListReplicatorsPaginationTraits<DerivedClient>>
  ListReplicatorsPaginator(const Model::ListReplicatorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReplicatorsRequest,
                                             Pagination::ListReplicatorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListScramSecrets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScramSecretsRequest,
                                    Pagination::ListScramSecretsPaginationTraits<DerivedClient>>
  ListScramSecretsPaginator(const Model::ListScramSecretsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScramSecretsRequest,
                                             Pagination::ListScramSecretsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListTopics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsRequest, Pagination::ListTopicsPaginationTraits<DerivedClient>>
  ListTopicsPaginator(const Model::ListTopicsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsRequest,
                                             Pagination::ListTopicsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListVpcConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcConnectionsRequest,
                                    Pagination::ListVpcConnectionsPaginationTraits<DerivedClient>>
  ListVpcConnectionsPaginator(const Model::ListVpcConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcConnectionsRequest,
                                             Pagination::ListVpcConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Kafka
}  // namespace Aws
