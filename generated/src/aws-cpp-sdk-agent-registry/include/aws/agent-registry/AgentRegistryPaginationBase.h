/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AgentRegistry {

template <typename DerivedClient>
class AgentRegistryPaginationBase {
 public:
  /**
   * Create a paginator for ListDiscoverableRegistryRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoverableRegistryRecordsRequest,
                                    Pagination::ListDiscoverableRegistryRecordsPaginationTraits<DerivedClient>>
  ListDiscoverableRegistryRecordsPaginator(const Model::ListDiscoverableRegistryRecordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoverableRegistryRecordsRequest,
                                             Pagination::ListDiscoverableRegistryRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AgentRegistry
}  // namespace Aws
