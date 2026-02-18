/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/config/model/DescribeAggregateComplianceByConfigRulesPaginationTraits.h>
#include <aws/config/model/DescribeAggregateComplianceByConformancePacksPaginationTraits.h>
#include <aws/config/model/DescribeAggregationAuthorizationsPaginationTraits.h>
#include <aws/config/model/DescribeComplianceByConfigRulePaginationTraits.h>
#include <aws/config/model/DescribeComplianceByResourcePaginationTraits.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusPaginationTraits.h>
#include <aws/config/model/DescribeConfigRulesPaginationTraits.h>
#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusPaginationTraits.h>
#include <aws/config/model/DescribeConfigurationAggregatorsPaginationTraits.h>
#include <aws/config/model/DescribeConformancePackCompliancePaginationTraits.h>
#include <aws/config/model/DescribeConformancePackStatusPaginationTraits.h>
#include <aws/config/model/DescribeConformancePacksPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConfigRuleStatusesPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConfigRulesPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConformancePackStatusesPaginationTraits.h>
#include <aws/config/model/DescribeOrganizationConformancePacksPaginationTraits.h>
#include <aws/config/model/DescribePendingAggregationRequestsPaginationTraits.h>
#include <aws/config/model/DescribeRemediationExceptionsPaginationTraits.h>
#include <aws/config/model/DescribeRemediationExecutionStatusPaginationTraits.h>
#include <aws/config/model/DescribeRetentionConfigurationsPaginationTraits.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRulePaginationTraits.h>
#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryPaginationTraits.h>
#include <aws/config/model/GetAggregateConformancePackComplianceSummaryPaginationTraits.h>
#include <aws/config/model/GetAggregateDiscoveredResourceCountsPaginationTraits.h>
#include <aws/config/model/GetComplianceDetailsByConfigRulePaginationTraits.h>
#include <aws/config/model/GetComplianceDetailsByResourcePaginationTraits.h>
#include <aws/config/model/GetConformancePackComplianceDetailsPaginationTraits.h>
#include <aws/config/model/GetConformancePackComplianceSummaryPaginationTraits.h>
#include <aws/config/model/GetDiscoveredResourceCountsPaginationTraits.h>
#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusPaginationTraits.h>
#include <aws/config/model/GetOrganizationConformancePackDetailedStatusPaginationTraits.h>
#include <aws/config/model/GetResourceConfigHistoryPaginationTraits.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesPaginationTraits.h>
#include <aws/config/model/ListConfigurationRecordersPaginationTraits.h>
#include <aws/config/model/ListConformancePackComplianceScoresPaginationTraits.h>
#include <aws/config/model/ListDiscoveredResourcesPaginationTraits.h>
#include <aws/config/model/ListResourceEvaluationsPaginationTraits.h>
#include <aws/config/model/ListStoredQueriesPaginationTraits.h>
#include <aws/config/model/ListTagsForResourcePaginationTraits.h>
#include <aws/config/model/SelectAggregateResourceConfigPaginationTraits.h>
#include <aws/config/model/SelectResourceConfigPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ConfigService {

class ConfigServiceClient;

template <typename DerivedClient>
class ConfigServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeAggregateComplianceByConfigRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAggregateComplianceByConfigRulesRequest,
                                    Pagination::DescribeAggregateComplianceByConfigRulesPaginationTraits<DerivedClient>>
  DescribeAggregateComplianceByConfigRulesPaginator(const Model::DescribeAggregateComplianceByConfigRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAggregateComplianceByConfigRulesRequest,
                                             Pagination::DescribeAggregateComplianceByConfigRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAggregateComplianceByConformancePacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAggregateComplianceByConformancePacksRequest,
                                    Pagination::DescribeAggregateComplianceByConformancePacksPaginationTraits<DerivedClient>>
  DescribeAggregateComplianceByConformancePacksPaginator(const Model::DescribeAggregateComplianceByConformancePacksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAggregateComplianceByConformancePacksRequest,
                                             Pagination::DescribeAggregateComplianceByConformancePacksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAggregationAuthorizations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAggregationAuthorizationsRequest,
                                    Pagination::DescribeAggregationAuthorizationsPaginationTraits<DerivedClient>>
  DescribeAggregationAuthorizationsPaginator(const Model::DescribeAggregationAuthorizationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAggregationAuthorizationsRequest,
                                             Pagination::DescribeAggregationAuthorizationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeComplianceByConfigRule operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeComplianceByConfigRuleRequest,
                                    Pagination::DescribeComplianceByConfigRulePaginationTraits<DerivedClient>>
  DescribeComplianceByConfigRulePaginator(const Model::DescribeComplianceByConfigRuleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeComplianceByConfigRuleRequest,
                                             Pagination::DescribeComplianceByConfigRulePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeComplianceByResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeComplianceByResourceRequest,
                                    Pagination::DescribeComplianceByResourcePaginationTraits<DerivedClient>>
  DescribeComplianceByResourcePaginator(const Model::DescribeComplianceByResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeComplianceByResourceRequest,
                                             Pagination::DescribeComplianceByResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConfigRuleEvaluationStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigRuleEvaluationStatusRequest,
                                    Pagination::DescribeConfigRuleEvaluationStatusPaginationTraits<DerivedClient>>
  DescribeConfigRuleEvaluationStatusPaginator(const Model::DescribeConfigRuleEvaluationStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigRuleEvaluationStatusRequest,
                                             Pagination::DescribeConfigRuleEvaluationStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConfigRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigRulesRequest,
                                    Pagination::DescribeConfigRulesPaginationTraits<DerivedClient>>
  DescribeConfigRulesPaginator(const Model::DescribeConfigRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigRulesRequest,
                                             Pagination::DescribeConfigRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConfigurationAggregators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationAggregatorsRequest,
                                    Pagination::DescribeConfigurationAggregatorsPaginationTraits<DerivedClient>>
  DescribeConfigurationAggregatorsPaginator(const Model::DescribeConfigurationAggregatorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationAggregatorsRequest,
                                             Pagination::DescribeConfigurationAggregatorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConfigurationAggregatorSourcesStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationAggregatorSourcesStatusRequest,
                                    Pagination::DescribeConfigurationAggregatorSourcesStatusPaginationTraits<DerivedClient>>
  DescribeConfigurationAggregatorSourcesStatusPaginator(const Model::DescribeConfigurationAggregatorSourcesStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationAggregatorSourcesStatusRequest,
                                             Pagination::DescribeConfigurationAggregatorSourcesStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConformancePackCompliance operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConformancePackComplianceRequest,
                                    Pagination::DescribeConformancePackCompliancePaginationTraits<DerivedClient>>
  DescribeConformancePackCompliancePaginator(const Model::DescribeConformancePackComplianceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConformancePackComplianceRequest,
                                             Pagination::DescribeConformancePackCompliancePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConformancePacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConformancePacksRequest,
                                    Pagination::DescribeConformancePacksPaginationTraits<DerivedClient>>
  DescribeConformancePacksPaginator(const Model::DescribeConformancePacksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConformancePacksRequest,
                                             Pagination::DescribeConformancePacksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConformancePackStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConformancePackStatusRequest,
                                    Pagination::DescribeConformancePackStatusPaginationTraits<DerivedClient>>
  DescribeConformancePackStatusPaginator(const Model::DescribeConformancePackStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConformancePackStatusRequest,
                                             Pagination::DescribeConformancePackStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrganizationConfigRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConfigRulesRequest,
                                    Pagination::DescribeOrganizationConfigRulesPaginationTraits<DerivedClient>>
  DescribeOrganizationConfigRulesPaginator(const Model::DescribeOrganizationConfigRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConfigRulesRequest,
                                             Pagination::DescribeOrganizationConfigRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrganizationConfigRuleStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConfigRuleStatusesRequest,
                                    Pagination::DescribeOrganizationConfigRuleStatusesPaginationTraits<DerivedClient>>
  DescribeOrganizationConfigRuleStatusesPaginator(const Model::DescribeOrganizationConfigRuleStatusesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConfigRuleStatusesRequest,
                                             Pagination::DescribeOrganizationConfigRuleStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrganizationConformancePacks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConformancePacksRequest,
                                    Pagination::DescribeOrganizationConformancePacksPaginationTraits<DerivedClient>>
  DescribeOrganizationConformancePacksPaginator(const Model::DescribeOrganizationConformancePacksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConformancePacksRequest,
                                             Pagination::DescribeOrganizationConformancePacksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrganizationConformancePackStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConformancePackStatusesRequest,
                                    Pagination::DescribeOrganizationConformancePackStatusesPaginationTraits<DerivedClient>>
  DescribeOrganizationConformancePackStatusesPaginator(const Model::DescribeOrganizationConformancePackStatusesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConformancePackStatusesRequest,
                                             Pagination::DescribeOrganizationConformancePackStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePendingAggregationRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingAggregationRequestsRequest,
                                    Pagination::DescribePendingAggregationRequestsPaginationTraits<DerivedClient>>
  DescribePendingAggregationRequestsPaginator(const Model::DescribePendingAggregationRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingAggregationRequestsRequest,
                                             Pagination::DescribePendingAggregationRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRemediationExceptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRemediationExceptionsRequest,
                                    Pagination::DescribeRemediationExceptionsPaginationTraits<DerivedClient>>
  DescribeRemediationExceptionsPaginator(const Model::DescribeRemediationExceptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRemediationExceptionsRequest,
                                             Pagination::DescribeRemediationExceptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRemediationExecutionStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRemediationExecutionStatusRequest,
                                    Pagination::DescribeRemediationExecutionStatusPaginationTraits<DerivedClient>>
  DescribeRemediationExecutionStatusPaginator(const Model::DescribeRemediationExecutionStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRemediationExecutionStatusRequest,
                                             Pagination::DescribeRemediationExecutionStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRetentionConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRetentionConfigurationsRequest,
                                    Pagination::DescribeRetentionConfigurationsPaginationTraits<DerivedClient>>
  DescribeRetentionConfigurationsPaginator(const Model::DescribeRetentionConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRetentionConfigurationsRequest,
                                             Pagination::DescribeRetentionConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAggregateComplianceDetailsByConfigRule operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateComplianceDetailsByConfigRuleRequest,
                                    Pagination::GetAggregateComplianceDetailsByConfigRulePaginationTraits<DerivedClient>>
  GetAggregateComplianceDetailsByConfigRulePaginator(const Model::GetAggregateComplianceDetailsByConfigRuleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateComplianceDetailsByConfigRuleRequest,
                                             Pagination::GetAggregateComplianceDetailsByConfigRulePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAggregateConfigRuleComplianceSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateConfigRuleComplianceSummaryRequest,
                                    Pagination::GetAggregateConfigRuleComplianceSummaryPaginationTraits<DerivedClient>>
  GetAggregateConfigRuleComplianceSummaryPaginator(const Model::GetAggregateConfigRuleComplianceSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateConfigRuleComplianceSummaryRequest,
                                             Pagination::GetAggregateConfigRuleComplianceSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAggregateConformancePackComplianceSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateConformancePackComplianceSummaryRequest,
                                    Pagination::GetAggregateConformancePackComplianceSummaryPaginationTraits<DerivedClient>>
  GetAggregateConformancePackComplianceSummaryPaginator(const Model::GetAggregateConformancePackComplianceSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateConformancePackComplianceSummaryRequest,
                                             Pagination::GetAggregateConformancePackComplianceSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAggregateDiscoveredResourceCounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateDiscoveredResourceCountsRequest,
                                    Pagination::GetAggregateDiscoveredResourceCountsPaginationTraits<DerivedClient>>
  GetAggregateDiscoveredResourceCountsPaginator(const Model::GetAggregateDiscoveredResourceCountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAggregateDiscoveredResourceCountsRequest,
                                             Pagination::GetAggregateDiscoveredResourceCountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetComplianceDetailsByConfigRule operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetComplianceDetailsByConfigRuleRequest,
                                    Pagination::GetComplianceDetailsByConfigRulePaginationTraits<DerivedClient>>
  GetComplianceDetailsByConfigRulePaginator(const Model::GetComplianceDetailsByConfigRuleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetComplianceDetailsByConfigRuleRequest,
                                             Pagination::GetComplianceDetailsByConfigRulePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetComplianceDetailsByResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetComplianceDetailsByResourceRequest,
                                    Pagination::GetComplianceDetailsByResourcePaginationTraits<DerivedClient>>
  GetComplianceDetailsByResourcePaginator(const Model::GetComplianceDetailsByResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetComplianceDetailsByResourceRequest,
                                             Pagination::GetComplianceDetailsByResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetConformancePackComplianceDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConformancePackComplianceDetailsRequest,
                                    Pagination::GetConformancePackComplianceDetailsPaginationTraits<DerivedClient>>
  GetConformancePackComplianceDetailsPaginator(const Model::GetConformancePackComplianceDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConformancePackComplianceDetailsRequest,
                                             Pagination::GetConformancePackComplianceDetailsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetConformancePackComplianceSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConformancePackComplianceSummaryRequest,
                                    Pagination::GetConformancePackComplianceSummaryPaginationTraits<DerivedClient>>
  GetConformancePackComplianceSummaryPaginator(const Model::GetConformancePackComplianceSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConformancePackComplianceSummaryRequest,
                                             Pagination::GetConformancePackComplianceSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetDiscoveredResourceCounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDiscoveredResourceCountsRequest,
                                    Pagination::GetDiscoveredResourceCountsPaginationTraits<DerivedClient>>
  GetDiscoveredResourceCountsPaginator(const Model::GetDiscoveredResourceCountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDiscoveredResourceCountsRequest,
                                             Pagination::GetDiscoveredResourceCountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetOrganizationConfigRuleDetailedStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOrganizationConfigRuleDetailedStatusRequest,
                                    Pagination::GetOrganizationConfigRuleDetailedStatusPaginationTraits<DerivedClient>>
  GetOrganizationConfigRuleDetailedStatusPaginator(const Model::GetOrganizationConfigRuleDetailedStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOrganizationConfigRuleDetailedStatusRequest,
                                             Pagination::GetOrganizationConfigRuleDetailedStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetOrganizationConformancePackDetailedStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOrganizationConformancePackDetailedStatusRequest,
                                    Pagination::GetOrganizationConformancePackDetailedStatusPaginationTraits<DerivedClient>>
  GetOrganizationConformancePackDetailedStatusPaginator(const Model::GetOrganizationConformancePackDetailedStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOrganizationConformancePackDetailedStatusRequest,
                                             Pagination::GetOrganizationConformancePackDetailedStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourceConfigHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceConfigHistoryRequest,
                                    Pagination::GetResourceConfigHistoryPaginationTraits<DerivedClient>>
  GetResourceConfigHistoryPaginator(const Model::GetResourceConfigHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceConfigHistoryRequest,
                                             Pagination::GetResourceConfigHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAggregateDiscoveredResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregateDiscoveredResourcesRequest,
                                    Pagination::ListAggregateDiscoveredResourcesPaginationTraits<DerivedClient>>
  ListAggregateDiscoveredResourcesPaginator(const Model::ListAggregateDiscoveredResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregateDiscoveredResourcesRequest,
                                             Pagination::ListAggregateDiscoveredResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurationRecorders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationRecordersRequest,
                                    Pagination::ListConfigurationRecordersPaginationTraits<DerivedClient>>
  ListConfigurationRecordersPaginator(const Model::ListConfigurationRecordersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationRecordersRequest,
                                             Pagination::ListConfigurationRecordersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConformancePackComplianceScores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConformancePackComplianceScoresRequest,
                                    Pagination::ListConformancePackComplianceScoresPaginationTraits<DerivedClient>>
  ListConformancePackComplianceScoresPaginator(const Model::ListConformancePackComplianceScoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConformancePackComplianceScoresRequest,
                                             Pagination::ListConformancePackComplianceScoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDiscoveredResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredResourcesRequest,
                                    Pagination::ListDiscoveredResourcesPaginationTraits<DerivedClient>>
  ListDiscoveredResourcesPaginator(const Model::ListDiscoveredResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredResourcesRequest,
                                             Pagination::ListDiscoveredResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceEvaluations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceEvaluationsRequest,
                                    Pagination::ListResourceEvaluationsPaginationTraits<DerivedClient>>
  ListResourceEvaluationsPaginator(const Model::ListResourceEvaluationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceEvaluationsRequest,
                                             Pagination::ListResourceEvaluationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStoredQueries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStoredQueriesRequest,
                                    Pagination::ListStoredQueriesPaginationTraits<DerivedClient>>
  ListStoredQueriesPaginator(const Model::ListStoredQueriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStoredQueriesRequest,
                                             Pagination::ListStoredQueriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SelectAggregateResourceConfig operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SelectAggregateResourceConfigRequest,
                                    Pagination::SelectAggregateResourceConfigPaginationTraits<DerivedClient>>
  SelectAggregateResourceConfigPaginator(const Model::SelectAggregateResourceConfigRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SelectAggregateResourceConfigRequest,
                                             Pagination::SelectAggregateResourceConfigPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SelectResourceConfig operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SelectResourceConfigRequest,
                                    Pagination::SelectResourceConfigPaginationTraits<DerivedClient>>
  SelectResourceConfigPaginator(const Model::SelectResourceConfigRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SelectResourceConfigRequest,
                                             Pagination::SelectResourceConfigPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ConfigService
}  // namespace Aws
