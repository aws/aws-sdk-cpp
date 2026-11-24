/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/agent-discovery/model/SearchPublicRecordsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AgentDiscovery {

template <typename DerivedClient>
class AgentDiscoveryPaginationBase {
 public:
  /**
   * Create a paginator for SearchPublicRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPublicRecordsRequest,
                                    Pagination::SearchPublicRecordsPaginationTraits<DerivedClient>>
  SearchPublicRecordsPaginator(const Model::SearchPublicRecordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPublicRecordsRequest,
                                             Pagination::SearchPublicRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AgentDiscovery
}  // namespace Aws
