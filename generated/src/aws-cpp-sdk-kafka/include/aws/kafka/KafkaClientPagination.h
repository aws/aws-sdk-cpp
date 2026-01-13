/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kafka/KafkaClient.h>
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

namespace Aws {
namespace Kafka {

using DescribeTopicPartitionsPaginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::DescribeTopicPartitionsRequest,
                                      Pagination::DescribeTopicPartitionsPaginationTraits<KafkaClient>>;
using ListClientVpcConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListClientVpcConnectionsRequest,
                                      Pagination::ListClientVpcConnectionsPaginationTraits<KafkaClient>>;
using ListClusterOperationsPaginator = Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListClusterOperationsRequest,
                                                                         Pagination::ListClusterOperationsPaginationTraits<KafkaClient>>;
using ListClusterOperationsV2Paginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListClusterOperationsV2Request,
                                      Pagination::ListClusterOperationsV2PaginationTraits<KafkaClient>>;
using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<KafkaClient>>;
using ListClustersV2Paginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListClustersV2Request, Pagination::ListClustersV2PaginationTraits<KafkaClient>>;
using ListConfigurationRevisionsPaginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListConfigurationRevisionsRequest,
                                      Pagination::ListConfigurationRevisionsPaginationTraits<KafkaClient>>;
using ListConfigurationsPaginator = Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListConfigurationsRequest,
                                                                      Pagination::ListConfigurationsPaginationTraits<KafkaClient>>;
using ListKafkaVersionsPaginator = Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListKafkaVersionsRequest,
                                                                     Pagination::ListKafkaVersionsPaginationTraits<KafkaClient>>;
using ListNodesPaginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<KafkaClient>>;
using ListReplicatorsPaginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListReplicatorsRequest, Pagination::ListReplicatorsPaginationTraits<KafkaClient>>;
using ListScramSecretsPaginator = Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListScramSecretsRequest,
                                                                    Pagination::ListScramSecretsPaginationTraits<KafkaClient>>;
using ListTopicsPaginator =
    Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListTopicsRequest, Pagination::ListTopicsPaginationTraits<KafkaClient>>;
using ListVpcConnectionsPaginator = Aws::Utils::Pagination::Paginator<KafkaClient, Model::ListVpcConnectionsRequest,
                                                                      Pagination::ListVpcConnectionsPaginationTraits<KafkaClient>>;

}  // namespace Kafka
}  // namespace Aws
