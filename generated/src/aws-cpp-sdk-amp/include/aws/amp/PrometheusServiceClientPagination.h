/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceClient.h>
#include <aws/amp/model/ListAnomalyDetectorsPaginationTraits.h>
#include <aws/amp/model/ListRuleGroupsNamespacesPaginationTraits.h>
#include <aws/amp/model/ListScrapersPaginationTraits.h>
#include <aws/amp/model/ListWorkspacesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace PrometheusService {

using ListAnomalyDetectorsPaginator =
    Aws::Utils::Pagination::Paginator<PrometheusServiceClient, Model::ListAnomalyDetectorsRequest,
                                      Pagination::ListAnomalyDetectorsPaginationTraits<PrometheusServiceClient>>;
using ListRuleGroupsNamespacesPaginator =
    Aws::Utils::Pagination::Paginator<PrometheusServiceClient, Model::ListRuleGroupsNamespacesRequest,
                                      Pagination::ListRuleGroupsNamespacesPaginationTraits<PrometheusServiceClient>>;
using ListScrapersPaginator = Aws::Utils::Pagination::Paginator<PrometheusServiceClient, Model::ListScrapersRequest,
                                                                Pagination::ListScrapersPaginationTraits<PrometheusServiceClient>>;
using ListWorkspacesPaginator = Aws::Utils::Pagination::Paginator<PrometheusServiceClient, Model::ListWorkspacesRequest,
                                                                  Pagination::ListWorkspacesPaginationTraits<PrometheusServiceClient>>;

}  // namespace PrometheusService
}  // namespace Aws
