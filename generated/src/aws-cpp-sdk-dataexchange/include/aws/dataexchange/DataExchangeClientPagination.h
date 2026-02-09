/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dataexchange/DataExchangeClient.h>
#include <aws/dataexchange/model/ListDataGrantsPaginationTraits.h>
#include <aws/dataexchange/model/ListDataSetRevisionsPaginationTraits.h>
#include <aws/dataexchange/model/ListDataSetsPaginationTraits.h>
#include <aws/dataexchange/model/ListEventActionsPaginationTraits.h>
#include <aws/dataexchange/model/ListJobsPaginationTraits.h>
#include <aws/dataexchange/model/ListReceivedDataGrantsPaginationTraits.h>
#include <aws/dataexchange/model/ListRevisionAssetsPaginationTraits.h>

namespace Aws {
namespace DataExchange {

using ListDataGrantsPaginator = Aws::Utils::Pagination::Paginator<DataExchangeClient, Model::ListDataGrantsRequest,
                                                                  Pagination::ListDataGrantsPaginationTraits<DataExchangeClient>>;
using ListDataSetRevisionsPaginator =
    Aws::Utils::Pagination::Paginator<DataExchangeClient, Model::ListDataSetRevisionsRequest,
                                      Pagination::ListDataSetRevisionsPaginationTraits<DataExchangeClient>>;
using ListDataSetsPaginator = Aws::Utils::Pagination::Paginator<DataExchangeClient, Model::ListDataSetsRequest,
                                                                Pagination::ListDataSetsPaginationTraits<DataExchangeClient>>;
using ListEventActionsPaginator = Aws::Utils::Pagination::Paginator<DataExchangeClient, Model::ListEventActionsRequest,
                                                                    Pagination::ListEventActionsPaginationTraits<DataExchangeClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<DataExchangeClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DataExchangeClient>>;
using ListReceivedDataGrantsPaginator =
    Aws::Utils::Pagination::Paginator<DataExchangeClient, Model::ListReceivedDataGrantsRequest,
                                      Pagination::ListReceivedDataGrantsPaginationTraits<DataExchangeClient>>;
using ListRevisionAssetsPaginator = Aws::Utils::Pagination::Paginator<DataExchangeClient, Model::ListRevisionAssetsRequest,
                                                                      Pagination::ListRevisionAssetsPaginationTraits<DataExchangeClient>>;

}  // namespace DataExchange
}  // namespace Aws
