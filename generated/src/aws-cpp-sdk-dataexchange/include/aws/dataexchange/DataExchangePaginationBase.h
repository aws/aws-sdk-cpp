/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dataexchange/model/ListDataGrantsPaginationTraits.h>
#include <aws/dataexchange/model/ListDataSetRevisionsPaginationTraits.h>
#include <aws/dataexchange/model/ListDataSetsPaginationTraits.h>
#include <aws/dataexchange/model/ListEventActionsPaginationTraits.h>
#include <aws/dataexchange/model/ListJobsPaginationTraits.h>
#include <aws/dataexchange/model/ListReceivedDataGrantsPaginationTraits.h>
#include <aws/dataexchange/model/ListRevisionAssetsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DataExchange {

class DataExchangeClient;

template <typename DerivedClient>
class DataExchangePaginationBase {
 public:
  /**
   * Create a paginator for ListDataGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataGrantsRequest, Pagination::ListDataGrantsPaginationTraits<DerivedClient>>
  ListDataGrantsPaginator(const Model::ListDataGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataGrantsRequest,
                                             Pagination::ListDataGrantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDataSetRevisions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetRevisionsRequest,
                                    Pagination::ListDataSetRevisionsPaginationTraits<DerivedClient>>
  ListDataSetRevisionsPaginator(const Model::ListDataSetRevisionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetRevisionsRequest,
                                             Pagination::ListDataSetRevisionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetsRequest, Pagination::ListDataSetsPaginationTraits<DerivedClient>>
  ListDataSetsPaginator(const Model::ListDataSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetsRequest,
                                             Pagination::ListDataSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEventActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventActionsRequest,
                                    Pagination::ListEventActionsPaginationTraits<DerivedClient>>
  ListEventActionsPaginator(const Model::ListEventActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventActionsRequest,
                                             Pagination::ListEventActionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReceivedDataGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReceivedDataGrantsRequest,
                                    Pagination::ListReceivedDataGrantsPaginationTraits<DerivedClient>>
  ListReceivedDataGrantsPaginator(const Model::ListReceivedDataGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReceivedDataGrantsRequest,
                                             Pagination::ListReceivedDataGrantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRevisionAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRevisionAssetsRequest,
                                    Pagination::ListRevisionAssetsPaginationTraits<DerivedClient>>
  ListRevisionAssetsPaginator(const Model::ListRevisionAssetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRevisionAssetsRequest,
                                             Pagination::ListRevisionAssetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DataExchange
}  // namespace Aws
