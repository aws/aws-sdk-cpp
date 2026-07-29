/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace IoTSiteWise {

template <typename DerivedClient>
class IoTSiteWisePaginationBase {
 public:
  /**
   * Create a paginator for BatchGetAssetPropertyAggregates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetAssetPropertyAggregatesRequest,
                                    Pagination::BatchGetAssetPropertyAggregatesPaginationTraits<DerivedClient>>
  BatchGetAssetPropertyAggregatesPaginator(const Model::BatchGetAssetPropertyAggregatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetAssetPropertyAggregatesRequest,
                                             Pagination::BatchGetAssetPropertyAggregatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for BatchGetAssetPropertyValue operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetAssetPropertyValueRequest,
                                    Pagination::BatchGetAssetPropertyValuePaginationTraits<DerivedClient>>
  BatchGetAssetPropertyValuePaginator(const Model::BatchGetAssetPropertyValueRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetAssetPropertyValueRequest,
                                             Pagination::BatchGetAssetPropertyValuePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for BatchGetAssetPropertyValueHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetAssetPropertyValueHistoryRequest,
                                    Pagination::BatchGetAssetPropertyValueHistoryPaginationTraits<DerivedClient>>
  BatchGetAssetPropertyValueHistoryPaginator(const Model::BatchGetAssetPropertyValueHistoryRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetAssetPropertyValueHistoryRequest,
                                             Pagination::BatchGetAssetPropertyValueHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePipelineExecution operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePipelineExecutionRequest,
                                    Pagination::DescribePipelineExecutionPaginationTraits<DerivedClient>>
  DescribePipelineExecutionPaginator(const Model::DescribePipelineExecutionRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePipelineExecutionRequest,
                                             Pagination::DescribePipelineExecutionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ExecuteQuery operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExecuteQueryRequest, Pagination::ExecuteQueryPaginationTraits<DerivedClient>>
  ExecuteQueryPaginator(const Model::ExecuteQueryRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExecuteQueryRequest,
                                             Pagination::ExecuteQueryPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetAssetPropertyAggregates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAssetPropertyAggregatesRequest,
                                    Pagination::GetAssetPropertyAggregatesPaginationTraits<DerivedClient>>
  GetAssetPropertyAggregatesPaginator(const Model::GetAssetPropertyAggregatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAssetPropertyAggregatesRequest,
                                             Pagination::GetAssetPropertyAggregatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAssetPropertyValueHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAssetPropertyValueHistoryRequest,
                                    Pagination::GetAssetPropertyValueHistoryPaginationTraits<DerivedClient>>
  GetAssetPropertyValueHistoryPaginator(const Model::GetAssetPropertyValueHistoryRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAssetPropertyValueHistoryRequest,
                                             Pagination::GetAssetPropertyValueHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetInterpolatedAssetPropertyValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInterpolatedAssetPropertyValuesRequest,
                                    Pagination::GetInterpolatedAssetPropertyValuesPaginationTraits<DerivedClient>>
  GetInterpolatedAssetPropertyValuesPaginator(const Model::GetInterpolatedAssetPropertyValuesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInterpolatedAssetPropertyValuesRequest,
                                             Pagination::GetInterpolatedAssetPropertyValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetQueryResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                    Pagination::GetQueryResultsPaginationTraits<DerivedClient>>
  GetQueryResultsPaginator(const Model::GetQueryResultsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                             Pagination::GetQueryResultsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetSearchResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSearchResultsRequest,
                                    Pagination::GetSearchResultsPaginationTraits<DerivedClient>>
  GetSearchResultsPaginator(const Model::GetSearchResultsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSearchResultsRequest,
                                             Pagination::GetSearchResultsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccessPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPoliciesRequest,
                                    Pagination::ListAccessPoliciesPaginationTraits<DerivedClient>>
  ListAccessPoliciesPaginator(const Model::ListAccessPoliciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPoliciesRequest,
                                             Pagination::ListAccessPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest, Pagination::ListActionsPaginationTraits<DerivedClient>>
  ListActionsPaginator(const Model::ListActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest,
                                             Pagination::ListActionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAssetModelCompositeModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetModelCompositeModelsRequest,
                                    Pagination::ListAssetModelCompositeModelsPaginationTraits<DerivedClient>>
  ListAssetModelCompositeModelsPaginator(const Model::ListAssetModelCompositeModelsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetModelCompositeModelsRequest,
                                             Pagination::ListAssetModelCompositeModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssetModelProperties operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetModelPropertiesRequest,
                                    Pagination::ListAssetModelPropertiesPaginationTraits<DerivedClient>>
  ListAssetModelPropertiesPaginator(const Model::ListAssetModelPropertiesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetModelPropertiesRequest,
                                             Pagination::ListAssetModelPropertiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssetModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetModelsRequest,
                                    Pagination::ListAssetModelsPaginationTraits<DerivedClient>>
  ListAssetModelsPaginator(const Model::ListAssetModelsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetModelsRequest,
                                             Pagination::ListAssetModelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListAssetProperties operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetPropertiesRequest,
                                    Pagination::ListAssetPropertiesPaginationTraits<DerivedClient>>
  ListAssetPropertiesPaginator(const Model::ListAssetPropertiesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetPropertiesRequest,
                                             Pagination::ListAssetPropertiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssetRelationships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetRelationshipsRequest,
                                    Pagination::ListAssetRelationshipsPaginationTraits<DerivedClient>>
  ListAssetRelationshipsPaginator(const Model::ListAssetRelationshipsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetRelationshipsRequest,
                                             Pagination::ListAssetRelationshipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest, Pagination::ListAssetsPaginationTraits<DerivedClient>>
  ListAssetsPaginator(const Model::ListAssetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest,
                                             Pagination::ListAssetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListAssociatedAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedAssetsRequest,
                                    Pagination::ListAssociatedAssetsPaginationTraits<DerivedClient>>
  ListAssociatedAssetsPaginator(const Model::ListAssociatedAssetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedAssetsRequest,
                                             Pagination::ListAssociatedAssetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBulkImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBulkImportJobsRequest,
                                    Pagination::ListBulkImportJobsPaginationTraits<DerivedClient>>
  ListBulkImportJobsPaginator(const Model::ListBulkImportJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBulkImportJobsRequest,
                                             Pagination::ListBulkImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCompositionRelationships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompositionRelationshipsRequest,
                                    Pagination::ListCompositionRelationshipsPaginationTraits<DerivedClient>>
  ListCompositionRelationshipsPaginator(const Model::ListCompositionRelationshipsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompositionRelationshipsRequest,
                                             Pagination::ListCompositionRelationshipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComputationModelDataBindingUsages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputationModelDataBindingUsagesRequest,
                                    Pagination::ListComputationModelDataBindingUsagesPaginationTraits<DerivedClient>>
  ListComputationModelDataBindingUsagesPaginator(const Model::ListComputationModelDataBindingUsagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputationModelDataBindingUsagesRequest,
                                             Pagination::ListComputationModelDataBindingUsagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComputationModelResolveToResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputationModelResolveToResourcesRequest,
                                    Pagination::ListComputationModelResolveToResourcesPaginationTraits<DerivedClient>>
  ListComputationModelResolveToResourcesPaginator(const Model::ListComputationModelResolveToResourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputationModelResolveToResourcesRequest,
                                             Pagination::ListComputationModelResolveToResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComputationModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputationModelsRequest,
                                    Pagination::ListComputationModelsPaginationTraits<DerivedClient>>
  ListComputationModelsPaginator(const Model::ListComputationModelsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComputationModelsRequest,
                                             Pagination::ListComputationModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDashboards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest, Pagination::ListDashboardsPaginationTraits<DerivedClient>>
  ListDashboardsPaginator(const Model::ListDashboardsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest,
                                             Pagination::ListDashboardsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDatasetDataSegmentRelationships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetDataSegmentRelationshipsRequest,
                                    Pagination::ListDatasetDataSegmentRelationshipsPaginationTraits<DerivedClient>>
  ListDatasetDataSegmentRelationshipsPaginator(const Model::ListDatasetDataSegmentRelationshipsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetDataSegmentRelationshipsRequest,
                                             Pagination::ListDatasetDataSegmentRelationshipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasetDataSegments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetDataSegmentsRequest,
                                    Pagination::ListDatasetDataSegmentsPaginationTraits<DerivedClient>>
  ListDatasetDataSegmentsPaginator(const Model::ListDatasetDataSegmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetDataSegmentsRequest,
                                             Pagination::ListDatasetDataSegmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasetExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetExportJobsRequest,
                                    Pagination::ListDatasetExportJobsPaginationTraits<DerivedClient>>
  ListDatasetExportJobsPaginator(const Model::ListDatasetExportJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetExportJobsRequest,
                                             Pagination::ListDatasetExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest, Pagination::ListDatasetsPaginationTraits<DerivedClient>>
  ListDatasetsPaginator(const Model::ListDatasetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest,
                                             Pagination::ListDatasetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEnrichmentJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnrichmentJobsRequest,
                                    Pagination::ListEnrichmentJobsPaginationTraits<DerivedClient>>
  ListEnrichmentJobsPaginator(const Model::ListEnrichmentJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnrichmentJobsRequest,
                                             Pagination::ListEnrichmentJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest, Pagination::ListExecutionsPaginationTraits<DerivedClient>>
  ListExecutionsPaginator(const Model::ListExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutionsRequest,
                                             Pagination::ListExecutionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest, Pagination::ListGatewaysPaginationTraits<DerivedClient>>
  ListGatewaysPaginator(const Model::ListGatewaysRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest,
                                             Pagination::ListGatewaysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListInterfaceRelationships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInterfaceRelationshipsRequest,
                                    Pagination::ListInterfaceRelationshipsPaginationTraits<DerivedClient>>
  ListInterfaceRelationshipsPaginator(const Model::ListInterfaceRelationshipsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInterfaceRelationshipsRequest,
                                             Pagination::ListInterfaceRelationshipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelineExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionsRequest,
                                    Pagination::ListPipelineExecutionsPaginationTraits<DerivedClient>>
  ListPipelineExecutionsPaginator(const Model::ListPipelineExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelineExecutionsRequest,
                                             Pagination::ListPipelineExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest, Pagination::ListPipelinesPaginationTraits<DerivedClient>>
  ListPipelinesPaginator(const Model::ListPipelinesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest,
                                             Pagination::ListPipelinesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListPortals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortalsRequest, Pagination::ListPortalsPaginationTraits<DerivedClient>>
  ListPortalsPaginator(const Model::ListPortalsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPortalsRequest,
                                             Pagination::ListPortalsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListProjectAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectAssetsRequest,
                                    Pagination::ListProjectAssetsPaginationTraits<DerivedClient>>
  ListProjectAssetsPaginator(const Model::ListProjectAssetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectAssetsRequest,
                                             Pagination::ListProjectAssetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DerivedClient>>
  ListProjectsPaginator(const Model::ListProjectsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest,
                                             Pagination::ListProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListQueries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueriesRequest, Pagination::ListQueriesPaginationTraits<DerivedClient>>
  ListQueriesPaginator(const Model::ListQueriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueriesRequest,
                                             Pagination::ListQueriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSearches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchesRequest, Pagination::ListSearchesPaginationTraits<DerivedClient>>
  ListSearchesPaginator(const Model::ListSearchesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchesRequest,
                                             Pagination::ListSearchesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>
  ListTasksPaginator(const Model::ListTasksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTimeSeries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTimeSeriesRequest, Pagination::ListTimeSeriesPaginationTraits<DerivedClient>>
  ListTimeSeriesPaginator(const Model::ListTimeSeriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTimeSeriesRequest,
                                             Pagination::ListTimeSeriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest, Pagination::ListWorkspacesPaginationTraits<DerivedClient>>
  ListWorkspacesPaginator(const Model::ListWorkspacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest,
                                             Pagination::ListWorkspacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace IoTSiteWise
}  // namespace Aws
