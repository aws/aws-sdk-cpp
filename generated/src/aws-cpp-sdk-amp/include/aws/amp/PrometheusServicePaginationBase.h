/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/amp/model/ListAnomalyDetectorsPaginationTraits.h>
#include <aws/amp/model/ListRuleGroupsNamespacesPaginationTraits.h>
#include <aws/amp/model/ListScrapersPaginationTraits.h>
#include <aws/amp/model/ListWorkspacesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace PrometheusService {

class PrometheusServiceClient;

template <typename DerivedClient>
class PrometheusServicePaginationBase {
 public:
  /**
   * Create a paginator for ListAnomalyDetectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomalyDetectorsRequest,
                                    Pagination::ListAnomalyDetectorsPaginationTraits<DerivedClient>>
  ListAnomalyDetectorsPaginator(const Model::ListAnomalyDetectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomalyDetectorsRequest,
                                             Pagination::ListAnomalyDetectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRuleGroupsNamespaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleGroupsNamespacesRequest,
                                    Pagination::ListRuleGroupsNamespacesPaginationTraits<DerivedClient>>
  ListRuleGroupsNamespacesPaginator(const Model::ListRuleGroupsNamespacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleGroupsNamespacesRequest,
                                             Pagination::ListRuleGroupsNamespacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScrapers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScrapersRequest, Pagination::ListScrapersPaginationTraits<DerivedClient>>
  ListScrapersPaginator(const Model::ListScrapersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScrapersRequest,
                                             Pagination::ListScrapersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest, Pagination::ListWorkspacesPaginationTraits<DerivedClient>>
  ListWorkspacesPaginator(const Model::ListWorkspacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest,
                                             Pagination::ListWorkspacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace PrometheusService
}  // namespace Aws
