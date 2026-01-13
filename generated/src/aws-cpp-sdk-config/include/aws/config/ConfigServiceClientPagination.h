/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceClient.h>
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

namespace Aws {
namespace ConfigService {

using DescribeAggregateComplianceByConfigRulesPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeAggregateComplianceByConfigRulesRequest,
                                      Pagination::DescribeAggregateComplianceByConfigRulesPaginationTraits<ConfigServiceClient>>;
using DescribeAggregateComplianceByConformancePacksPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeAggregateComplianceByConformancePacksRequest,
                                      Pagination::DescribeAggregateComplianceByConformancePacksPaginationTraits<ConfigServiceClient>>;
using DescribeAggregationAuthorizationsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeAggregationAuthorizationsRequest,
                                      Pagination::DescribeAggregationAuthorizationsPaginationTraits<ConfigServiceClient>>;
using DescribeComplianceByConfigRulePaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeComplianceByConfigRuleRequest,
                                      Pagination::DescribeComplianceByConfigRulePaginationTraits<ConfigServiceClient>>;
using DescribeComplianceByResourcePaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeComplianceByResourceRequest,
                                      Pagination::DescribeComplianceByResourcePaginationTraits<ConfigServiceClient>>;
using DescribeConfigRuleEvaluationStatusPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeConfigRuleEvaluationStatusRequest,
                                      Pagination::DescribeConfigRuleEvaluationStatusPaginationTraits<ConfigServiceClient>>;
using DescribeConfigRulesPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeConfigRulesRequest,
                                      Pagination::DescribeConfigRulesPaginationTraits<ConfigServiceClient>>;
using DescribeConfigurationAggregatorsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeConfigurationAggregatorsRequest,
                                      Pagination::DescribeConfigurationAggregatorsPaginationTraits<ConfigServiceClient>>;
using DescribeConfigurationAggregatorSourcesStatusPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeConfigurationAggregatorSourcesStatusRequest,
                                      Pagination::DescribeConfigurationAggregatorSourcesStatusPaginationTraits<ConfigServiceClient>>;
using DescribeConformancePackCompliancePaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeConformancePackComplianceRequest,
                                      Pagination::DescribeConformancePackCompliancePaginationTraits<ConfigServiceClient>>;
using DescribeConformancePacksPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeConformancePacksRequest,
                                      Pagination::DescribeConformancePacksPaginationTraits<ConfigServiceClient>>;
using DescribeConformancePackStatusPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeConformancePackStatusRequest,
                                      Pagination::DescribeConformancePackStatusPaginationTraits<ConfigServiceClient>>;
using DescribeOrganizationConfigRulesPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeOrganizationConfigRulesRequest,
                                      Pagination::DescribeOrganizationConfigRulesPaginationTraits<ConfigServiceClient>>;
using DescribeOrganizationConfigRuleStatusesPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeOrganizationConfigRuleStatusesRequest,
                                      Pagination::DescribeOrganizationConfigRuleStatusesPaginationTraits<ConfigServiceClient>>;
using DescribeOrganizationConformancePacksPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeOrganizationConformancePacksRequest,
                                      Pagination::DescribeOrganizationConformancePacksPaginationTraits<ConfigServiceClient>>;
using DescribeOrganizationConformancePackStatusesPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeOrganizationConformancePackStatusesRequest,
                                      Pagination::DescribeOrganizationConformancePackStatusesPaginationTraits<ConfigServiceClient>>;
using DescribePendingAggregationRequestsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribePendingAggregationRequestsRequest,
                                      Pagination::DescribePendingAggregationRequestsPaginationTraits<ConfigServiceClient>>;
using DescribeRemediationExceptionsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeRemediationExceptionsRequest,
                                      Pagination::DescribeRemediationExceptionsPaginationTraits<ConfigServiceClient>>;
using DescribeRemediationExecutionStatusPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeRemediationExecutionStatusRequest,
                                      Pagination::DescribeRemediationExecutionStatusPaginationTraits<ConfigServiceClient>>;
using DescribeRetentionConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::DescribeRetentionConfigurationsRequest,
                                      Pagination::DescribeRetentionConfigurationsPaginationTraits<ConfigServiceClient>>;
using GetAggregateComplianceDetailsByConfigRulePaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetAggregateComplianceDetailsByConfigRuleRequest,
                                      Pagination::GetAggregateComplianceDetailsByConfigRulePaginationTraits<ConfigServiceClient>>;
using GetAggregateConfigRuleComplianceSummaryPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetAggregateConfigRuleComplianceSummaryRequest,
                                      Pagination::GetAggregateConfigRuleComplianceSummaryPaginationTraits<ConfigServiceClient>>;
using GetAggregateConformancePackComplianceSummaryPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetAggregateConformancePackComplianceSummaryRequest,
                                      Pagination::GetAggregateConformancePackComplianceSummaryPaginationTraits<ConfigServiceClient>>;
using GetAggregateDiscoveredResourceCountsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetAggregateDiscoveredResourceCountsRequest,
                                      Pagination::GetAggregateDiscoveredResourceCountsPaginationTraits<ConfigServiceClient>>;
using GetComplianceDetailsByConfigRulePaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetComplianceDetailsByConfigRuleRequest,
                                      Pagination::GetComplianceDetailsByConfigRulePaginationTraits<ConfigServiceClient>>;
using GetComplianceDetailsByResourcePaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetComplianceDetailsByResourceRequest,
                                      Pagination::GetComplianceDetailsByResourcePaginationTraits<ConfigServiceClient>>;
using GetConformancePackComplianceDetailsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetConformancePackComplianceDetailsRequest,
                                      Pagination::GetConformancePackComplianceDetailsPaginationTraits<ConfigServiceClient>>;
using GetConformancePackComplianceSummaryPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetConformancePackComplianceSummaryRequest,
                                      Pagination::GetConformancePackComplianceSummaryPaginationTraits<ConfigServiceClient>>;
using GetDiscoveredResourceCountsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetDiscoveredResourceCountsRequest,
                                      Pagination::GetDiscoveredResourceCountsPaginationTraits<ConfigServiceClient>>;
using GetOrganizationConfigRuleDetailedStatusPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetOrganizationConfigRuleDetailedStatusRequest,
                                      Pagination::GetOrganizationConfigRuleDetailedStatusPaginationTraits<ConfigServiceClient>>;
using GetOrganizationConformancePackDetailedStatusPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetOrganizationConformancePackDetailedStatusRequest,
                                      Pagination::GetOrganizationConformancePackDetailedStatusPaginationTraits<ConfigServiceClient>>;
using GetResourceConfigHistoryPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::GetResourceConfigHistoryRequest,
                                      Pagination::GetResourceConfigHistoryPaginationTraits<ConfigServiceClient>>;
using ListAggregateDiscoveredResourcesPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::ListAggregateDiscoveredResourcesRequest,
                                      Pagination::ListAggregateDiscoveredResourcesPaginationTraits<ConfigServiceClient>>;
using ListConfigurationRecordersPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::ListConfigurationRecordersRequest,
                                      Pagination::ListConfigurationRecordersPaginationTraits<ConfigServiceClient>>;
using ListConformancePackComplianceScoresPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::ListConformancePackComplianceScoresRequest,
                                      Pagination::ListConformancePackComplianceScoresPaginationTraits<ConfigServiceClient>>;
using ListDiscoveredResourcesPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::ListDiscoveredResourcesRequest,
                                      Pagination::ListDiscoveredResourcesPaginationTraits<ConfigServiceClient>>;
using ListResourceEvaluationsPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::ListResourceEvaluationsRequest,
                                      Pagination::ListResourceEvaluationsPaginationTraits<ConfigServiceClient>>;
using ListStoredQueriesPaginator = Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::ListStoredQueriesRequest,
                                                                     Pagination::ListStoredQueriesPaginationTraits<ConfigServiceClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<ConfigServiceClient>>;
using SelectAggregateResourceConfigPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::SelectAggregateResourceConfigRequest,
                                      Pagination::SelectAggregateResourceConfigPaginationTraits<ConfigServiceClient>>;
using SelectResourceConfigPaginator =
    Aws::Utils::Pagination::Paginator<ConfigServiceClient, Model::SelectResourceConfigRequest,
                                      Pagination::SelectResourceConfigPaginationTraits<ConfigServiceClient>>;

}  // namespace ConfigService
}  // namespace Aws
