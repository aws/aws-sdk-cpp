/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloudtrail/model/GetQueryResultsPaginationTraits.h>
#include <aws/cloudtrail/model/ListChannelsPaginationTraits.h>
#include <aws/cloudtrail/model/ListEventDataStoresPaginationTraits.h>
#include <aws/cloudtrail/model/ListImportFailuresPaginationTraits.h>
#include <aws/cloudtrail/model/ListImportsPaginationTraits.h>
#include <aws/cloudtrail/model/ListInsightsDataPaginationTraits.h>
#include <aws/cloudtrail/model/ListInsightsMetricDataPaginationTraits.h>
#include <aws/cloudtrail/model/ListPublicKeysPaginationTraits.h>
#include <aws/cloudtrail/model/ListQueriesPaginationTraits.h>
#include <aws/cloudtrail/model/ListTagsPaginationTraits.h>
#include <aws/cloudtrail/model/ListTrailsPaginationTraits.h>
#include <aws/cloudtrail/model/LookupEventsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudTrail {

class CloudTrailClient;

template <typename DerivedClient>
class CloudTrailPaginationBase {
 public:
  /**
   * Create a paginator for GetQueryResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                    Pagination::GetQueryResultsPaginationTraits<DerivedClient>>
  GetQueryResultsPaginator(const Model::GetQueryResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                             Pagination::GetQueryResultsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<DerivedClient>>
  ListChannelsPaginator(const Model::ListChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest,
                                             Pagination::ListChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEventDataStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventDataStoresRequest,
                                    Pagination::ListEventDataStoresPaginationTraits<DerivedClient>>
  ListEventDataStoresPaginator(const Model::ListEventDataStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventDataStoresRequest,
                                             Pagination::ListEventDataStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImportFailures operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportFailuresRequest,
                                    Pagination::ListImportFailuresPaginationTraits<DerivedClient>>
  ListImportFailuresPaginator(const Model::ListImportFailuresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportFailuresRequest,
                                             Pagination::ListImportFailuresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<DerivedClient>>
  ListImportsPaginator(const Model::ListImportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportsRequest,
                                             Pagination::ListImportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListInsightsData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsDataRequest,
                                    Pagination::ListInsightsDataPaginationTraits<DerivedClient>>
  ListInsightsDataPaginator(const Model::ListInsightsDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsDataRequest,
                                             Pagination::ListInsightsDataPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListInsightsMetricData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsMetricDataRequest,
                                    Pagination::ListInsightsMetricDataPaginationTraits<DerivedClient>>
  ListInsightsMetricDataPaginator(const Model::ListInsightsMetricDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsMetricDataRequest,
                                             Pagination::ListInsightsMetricDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPublicKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublicKeysRequest, Pagination::ListPublicKeysPaginationTraits<DerivedClient>>
  ListPublicKeysPaginator(const Model::ListPublicKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublicKeysRequest,
                                             Pagination::ListPublicKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListQueries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueriesRequest, Pagination::ListQueriesPaginationTraits<DerivedClient>>
  ListQueriesPaginator(const Model::ListQueriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueriesRequest,
                                             Pagination::ListQueriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>
  ListTagsPaginator(const Model::ListTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrailsRequest, Pagination::ListTrailsPaginationTraits<DerivedClient>>
  ListTrailsPaginator(const Model::ListTrailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrailsRequest,
                                             Pagination::ListTrailsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for LookupEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::LookupEventsRequest, Pagination::LookupEventsPaginationTraits<DerivedClient>>
  LookupEventsPaginator(const Model::LookupEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::LookupEventsRequest,
                                             Pagination::LookupEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace CloudTrail
}  // namespace Aws
