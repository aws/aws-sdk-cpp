/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListConnectorsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListCustomPluginsPaginationTraits.h>
#include <aws/kafkaconnect/model/ListWorkerConfigurationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace KafkaConnect {

template <typename DerivedClient>
class KafkaConnectPaginationBase {
 public:
  /**
   * Create a paginator for ListConnectorOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorOperationsRequest,
                                    Pagination::ListConnectorOperationsPaginationTraits<DerivedClient>>
  ListConnectorOperationsPaginator(const Model::ListConnectorOperationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorOperationsRequest,
                                             Pagination::ListConnectorOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest, Pagination::ListConnectorsPaginationTraits<DerivedClient>>
  ListConnectorsPaginator(const Model::ListConnectorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorsRequest,
                                             Pagination::ListConnectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListCustomPlugins operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomPluginsRequest,
                                    Pagination::ListCustomPluginsPaginationTraits<DerivedClient>>
  ListCustomPluginsPaginator(const Model::ListCustomPluginsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomPluginsRequest,
                                             Pagination::ListCustomPluginsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkerConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkerConfigurationsRequest,
                                    Pagination::ListWorkerConfigurationsPaginationTraits<DerivedClient>>
  ListWorkerConfigurationsPaginator(const Model::ListWorkerConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkerConfigurationsRequest,
                                             Pagination::ListWorkerConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace KafkaConnect
}  // namespace Aws
