/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iotsitewise/IoTSiteWiseClient.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesPaginationTraits.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryPaginationTraits.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValuePaginationTraits.h>
#include <aws/iotsitewise/model/DescribePipelineExecutionPaginationTraits.h>
#include <aws/iotsitewise/model/ExecuteQueryPaginationTraits.h>
#include <aws/iotsitewise/model/GetAssetPropertyAggregatesPaginationTraits.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueHistoryPaginationTraits.h>
#include <aws/iotsitewise/model/GetInterpolatedAssetPropertyValuesPaginationTraits.h>
#include <aws/iotsitewise/model/GetQueryResultsPaginationTraits.h>
#include <aws/iotsitewise/model/GetSearchResultsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAccessPoliciesPaginationTraits.h>
#include <aws/iotsitewise/model/ListActionsPaginationTraits.h>
#include <aws/iotsitewise/model/ListApplicationsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetModelCompositeModelsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetModelPropertiesPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetModelsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetPropertiesPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetRelationshipsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssociatedAssetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListBulkImportJobsPaginationTraits.h>
#include <aws/iotsitewise/model/ListCompositionRelationshipsPaginationTraits.h>
#include <aws/iotsitewise/model/ListComputationModelDataBindingUsagesPaginationTraits.h>
#include <aws/iotsitewise/model/ListComputationModelResolveToResourcesPaginationTraits.h>
#include <aws/iotsitewise/model/ListComputationModelsPaginationTraits.h>
#include <aws/iotsitewise/model/ListDashboardsPaginationTraits.h>
#include <aws/iotsitewise/model/ListDatasetDataSegmentRelationshipsPaginationTraits.h>
#include <aws/iotsitewise/model/ListDatasetDataSegmentsPaginationTraits.h>
#include <aws/iotsitewise/model/ListDatasetExportJobsPaginationTraits.h>
#include <aws/iotsitewise/model/ListDatasetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListEnrichmentJobsPaginationTraits.h>
#include <aws/iotsitewise/model/ListExecutionsPaginationTraits.h>
#include <aws/iotsitewise/model/ListGatewaysPaginationTraits.h>
#include <aws/iotsitewise/model/ListInterfaceRelationshipsPaginationTraits.h>
#include <aws/iotsitewise/model/ListPipelineExecutionsPaginationTraits.h>
#include <aws/iotsitewise/model/ListPipelinesPaginationTraits.h>
#include <aws/iotsitewise/model/ListPortalsPaginationTraits.h>
#include <aws/iotsitewise/model/ListProjectAssetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListProjectsPaginationTraits.h>
#include <aws/iotsitewise/model/ListQueriesPaginationTraits.h>
#include <aws/iotsitewise/model/ListSearchesPaginationTraits.h>
#include <aws/iotsitewise/model/ListTasksPaginationTraits.h>
#include <aws/iotsitewise/model/ListTimeSeriesPaginationTraits.h>
#include <aws/iotsitewise/model/ListWorkspacesPaginationTraits.h>

namespace Aws {
namespace IoTSiteWise {

using BatchGetAssetPropertyAggregatesPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::BatchGetAssetPropertyAggregatesRequest,
                                      Pagination::BatchGetAssetPropertyAggregatesPaginationTraits<IoTSiteWiseClient>>;
using BatchGetAssetPropertyValuePaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::BatchGetAssetPropertyValueRequest,
                                      Pagination::BatchGetAssetPropertyValuePaginationTraits<IoTSiteWiseClient>>;
using BatchGetAssetPropertyValueHistoryPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::BatchGetAssetPropertyValueHistoryRequest,
                                      Pagination::BatchGetAssetPropertyValueHistoryPaginationTraits<IoTSiteWiseClient>>;
using DescribePipelineExecutionPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::DescribePipelineExecutionRequest,
                                      Pagination::DescribePipelineExecutionPaginationTraits<IoTSiteWiseClient>>;
using ExecuteQueryPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ExecuteQueryRequest,
                                                                Pagination::ExecuteQueryPaginationTraits<IoTSiteWiseClient>>;
using GetAssetPropertyAggregatesPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::GetAssetPropertyAggregatesRequest,
                                      Pagination::GetAssetPropertyAggregatesPaginationTraits<IoTSiteWiseClient>>;
using GetAssetPropertyValueHistoryPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::GetAssetPropertyValueHistoryRequest,
                                      Pagination::GetAssetPropertyValueHistoryPaginationTraits<IoTSiteWiseClient>>;
using GetInterpolatedAssetPropertyValuesPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::GetInterpolatedAssetPropertyValuesRequest,
                                      Pagination::GetInterpolatedAssetPropertyValuesPaginationTraits<IoTSiteWiseClient>>;
using GetQueryResultsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::GetQueryResultsRequest,
                                                                   Pagination::GetQueryResultsPaginationTraits<IoTSiteWiseClient>>;
using GetSearchResultsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::GetSearchResultsRequest,
                                                                    Pagination::GetSearchResultsPaginationTraits<IoTSiteWiseClient>>;
using ListAccessPoliciesPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAccessPoliciesRequest,
                                                                      Pagination::ListAccessPoliciesPaginationTraits<IoTSiteWiseClient>>;
using ListActionsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListActionsRequest,
                                                               Pagination::ListActionsPaginationTraits<IoTSiteWiseClient>>;
using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<IoTSiteWiseClient>>;
using ListAssetModelCompositeModelsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAssetModelCompositeModelsRequest,
                                      Pagination::ListAssetModelCompositeModelsPaginationTraits<IoTSiteWiseClient>>;
using ListAssetModelPropertiesPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAssetModelPropertiesRequest,
                                      Pagination::ListAssetModelPropertiesPaginationTraits<IoTSiteWiseClient>>;
using ListAssetModelsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAssetModelsRequest,
                                                                   Pagination::ListAssetModelsPaginationTraits<IoTSiteWiseClient>>;
using ListAssetPropertiesPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAssetPropertiesRequest,
                                                                       Pagination::ListAssetPropertiesPaginationTraits<IoTSiteWiseClient>>;
using ListAssetRelationshipsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAssetRelationshipsRequest,
                                      Pagination::ListAssetRelationshipsPaginationTraits<IoTSiteWiseClient>>;
using ListAssetsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAssetsRequest,
                                                              Pagination::ListAssetsPaginationTraits<IoTSiteWiseClient>>;
using ListAssociatedAssetsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListAssociatedAssetsRequest,
                                      Pagination::ListAssociatedAssetsPaginationTraits<IoTSiteWiseClient>>;
using ListBulkImportJobsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListBulkImportJobsRequest,
                                                                      Pagination::ListBulkImportJobsPaginationTraits<IoTSiteWiseClient>>;
using ListCompositionRelationshipsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListCompositionRelationshipsRequest,
                                      Pagination::ListCompositionRelationshipsPaginationTraits<IoTSiteWiseClient>>;
using ListComputationModelDataBindingUsagesPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListComputationModelDataBindingUsagesRequest,
                                      Pagination::ListComputationModelDataBindingUsagesPaginationTraits<IoTSiteWiseClient>>;
using ListComputationModelResolveToResourcesPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListComputationModelResolveToResourcesRequest,
                                      Pagination::ListComputationModelResolveToResourcesPaginationTraits<IoTSiteWiseClient>>;
using ListComputationModelsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListComputationModelsRequest,
                                      Pagination::ListComputationModelsPaginationTraits<IoTSiteWiseClient>>;
using ListDashboardsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListDashboardsRequest,
                                                                  Pagination::ListDashboardsPaginationTraits<IoTSiteWiseClient>>;
using ListDatasetDataSegmentRelationshipsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListDatasetDataSegmentRelationshipsRequest,
                                      Pagination::ListDatasetDataSegmentRelationshipsPaginationTraits<IoTSiteWiseClient>>;
using ListDatasetDataSegmentsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListDatasetDataSegmentsRequest,
                                      Pagination::ListDatasetDataSegmentsPaginationTraits<IoTSiteWiseClient>>;
using ListDatasetExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListDatasetExportJobsRequest,
                                      Pagination::ListDatasetExportJobsPaginationTraits<IoTSiteWiseClient>>;
using ListDatasetsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListDatasetsRequest,
                                                                Pagination::ListDatasetsPaginationTraits<IoTSiteWiseClient>>;
using ListEnrichmentJobsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListEnrichmentJobsRequest,
                                                                      Pagination::ListEnrichmentJobsPaginationTraits<IoTSiteWiseClient>>;
using ListExecutionsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListExecutionsRequest,
                                                                  Pagination::ListExecutionsPaginationTraits<IoTSiteWiseClient>>;
using ListGatewaysPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListGatewaysRequest,
                                                                Pagination::ListGatewaysPaginationTraits<IoTSiteWiseClient>>;
using ListInterfaceRelationshipsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListInterfaceRelationshipsRequest,
                                      Pagination::ListInterfaceRelationshipsPaginationTraits<IoTSiteWiseClient>>;
using ListPipelineExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListPipelineExecutionsRequest,
                                      Pagination::ListPipelineExecutionsPaginationTraits<IoTSiteWiseClient>>;
using ListPipelinesPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListPipelinesRequest,
                                                                 Pagination::ListPipelinesPaginationTraits<IoTSiteWiseClient>>;
using ListPortalsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListPortalsRequest,
                                                               Pagination::ListPortalsPaginationTraits<IoTSiteWiseClient>>;
using ListProjectAssetsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListProjectAssetsRequest,
                                                                     Pagination::ListProjectAssetsPaginationTraits<IoTSiteWiseClient>>;
using ListProjectsPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListProjectsRequest,
                                                                Pagination::ListProjectsPaginationTraits<IoTSiteWiseClient>>;
using ListQueriesPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListQueriesRequest,
                                                               Pagination::ListQueriesPaginationTraits<IoTSiteWiseClient>>;
using ListSearchesPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListSearchesRequest,
                                                                Pagination::ListSearchesPaginationTraits<IoTSiteWiseClient>>;
using ListTasksPaginator =
    Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<IoTSiteWiseClient>>;
using ListTimeSeriesPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListTimeSeriesRequest,
                                                                  Pagination::ListTimeSeriesPaginationTraits<IoTSiteWiseClient>>;
using ListWorkspacesPaginator = Aws::Utils::Pagination::Paginator<IoTSiteWiseClient, Model::ListWorkspacesRequest,
                                                                  Pagination::ListWorkspacesPaginationTraits<IoTSiteWiseClient>>;

}  // namespace IoTSiteWise
}  // namespace Aws
