/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailClient.h>
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

namespace Aws {
namespace CloudTrail {

using GetQueryResultsPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::GetQueryResultsRequest,
                                                                   Pagination::GetQueryResultsPaginationTraits<CloudTrailClient>>;
using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<CloudTrailClient>>;
using ListEventDataStoresPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListEventDataStoresRequest,
                                                                       Pagination::ListEventDataStoresPaginationTraits<CloudTrailClient>>;
using ListImportFailuresPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListImportFailuresRequest,
                                                                      Pagination::ListImportFailuresPaginationTraits<CloudTrailClient>>;
using ListImportsPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListImportsRequest,
                                                               Pagination::ListImportsPaginationTraits<CloudTrailClient>>;
using ListInsightsDataPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListInsightsDataRequest,
                                                                    Pagination::ListInsightsDataPaginationTraits<CloudTrailClient>>;
using ListInsightsMetricDataPaginator =
    Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListInsightsMetricDataRequest,
                                      Pagination::ListInsightsMetricDataPaginationTraits<CloudTrailClient>>;
using ListPublicKeysPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListPublicKeysRequest,
                                                                  Pagination::ListPublicKeysPaginationTraits<CloudTrailClient>>;
using ListQueriesPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListQueriesRequest,
                                                               Pagination::ListQueriesPaginationTraits<CloudTrailClient>>;
using ListTagsPaginator =
    Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<CloudTrailClient>>;
using ListTrailsPaginator =
    Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::ListTrailsRequest, Pagination::ListTrailsPaginationTraits<CloudTrailClient>>;
using LookupEventsPaginator = Aws::Utils::Pagination::Paginator<CloudTrailClient, Model::LookupEventsRequest,
                                                                Pagination::LookupEventsPaginationTraits<CloudTrailClient>>;

}  // namespace CloudTrail
}  // namespace Aws
