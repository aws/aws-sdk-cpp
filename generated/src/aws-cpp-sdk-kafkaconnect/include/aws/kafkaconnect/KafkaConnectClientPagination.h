/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kafkaconnect/KafkaConnectClient.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListConnectorsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListCustomPluginsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsPaginationTraits.h>

namespace Aws {
namespace KafkaConnect {

using ListConnectorOperationsPaginator =
    Aws::Utils::Pagination::Paginator<KafkaConnectClient, Model::ListConnectorOperationsRequest,
                                      Pagination::ListConnectorOperationsPaginationTraits<KafkaConnectClient>>;
using ListConnectorsPaginator = Aws::Utils::Pagination::Paginator<KafkaConnectClient, Model::ListConnectorsRequest,
                                                                  Pagination::ListConnectorsPaginationTraits<KafkaConnectClient>>;
using ListCustomPluginsPaginator = Aws::Utils::Pagination::Paginator<KafkaConnectClient, Model::ListCustomPluginsRequest,
                                                                     Pagination::ListCustomPluginsPaginationTraits<KafkaConnectClient>>;
using ListWorkerConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<KafkaConnectClient, Model::ListWorkerConfigurationsRequest,
                                      Pagination::ListWorkerConfigurationsPaginationTraits<KafkaConnectClient>>;

}  // namespace KafkaConnect
}  // namespace Aws
