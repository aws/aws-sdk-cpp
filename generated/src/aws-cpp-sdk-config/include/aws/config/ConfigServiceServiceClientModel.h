/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/config/ConfigServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/config/ConfigServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConfigServiceClient header */
#include <aws/config/model/BatchGetAggregateResourceConfigResult.h>
#include <aws/config/model/BatchGetResourceConfigResult.h>
#include <aws/config/model/DeleteEvaluationResultsResult.h>
#include <aws/config/model/DeleteRemediationConfigurationResult.h>
#include <aws/config/model/DeleteRemediationExceptionsResult.h>
#include <aws/config/model/DeleteStoredQueryResult.h>
#include <aws/config/model/DeliverConfigSnapshotResult.h>
#include <aws/config/model/DescribeAggregateComplianceByConfigRulesResult.h>
#include <aws/config/model/DescribeAggregateComplianceByConformancePacksResult.h>
#include <aws/config/model/DescribeAggregationAuthorizationsResult.h>
#include <aws/config/model/DescribeComplianceByConfigRuleResult.h>
#include <aws/config/model/DescribeComplianceByResourceResult.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusResult.h>
#include <aws/config/model/DescribeConfigRulesResult.h>
#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusResult.h>
#include <aws/config/model/DescribeConfigurationAggregatorsResult.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusResult.h>
#include <aws/config/model/DescribeConfigurationRecordersResult.h>
#include <aws/config/model/DescribeConformancePackComplianceResult.h>
#include <aws/config/model/DescribeConformancePackStatusResult.h>
#include <aws/config/model/DescribeConformancePacksResult.h>
#include <aws/config/model/DescribeDeliveryChannelStatusResult.h>
#include <aws/config/model/DescribeDeliveryChannelsResult.h>
#include <aws/config/model/DescribeOrganizationConfigRuleStatusesResult.h>
#include <aws/config/model/DescribeOrganizationConfigRulesResult.h>
#include <aws/config/model/DescribeOrganizationConformancePackStatusesResult.h>
#include <aws/config/model/DescribeOrganizationConformancePacksResult.h>
#include <aws/config/model/DescribePendingAggregationRequestsResult.h>
#include <aws/config/model/DescribeRemediationConfigurationsResult.h>
#include <aws/config/model/DescribeRemediationExceptionsResult.h>
#include <aws/config/model/DescribeRemediationExecutionStatusResult.h>
#include <aws/config/model/DescribeRetentionConfigurationsResult.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleResult.h>
#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryResult.h>
#include <aws/config/model/GetAggregateConformancePackComplianceSummaryResult.h>
#include <aws/config/model/GetAggregateDiscoveredResourceCountsResult.h>
#include <aws/config/model/GetAggregateResourceConfigResult.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleResult.h>
#include <aws/config/model/GetComplianceDetailsByResourceResult.h>
#include <aws/config/model/GetComplianceSummaryByConfigRuleResult.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeResult.h>
#include <aws/config/model/GetConformancePackComplianceDetailsResult.h>
#include <aws/config/model/GetConformancePackComplianceSummaryResult.h>
#include <aws/config/model/GetCustomRulePolicyResult.h>
#include <aws/config/model/GetDiscoveredResourceCountsResult.h>
#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusResult.h>
#include <aws/config/model/GetOrganizationConformancePackDetailedStatusResult.h>
#include <aws/config/model/GetOrganizationCustomRulePolicyResult.h>
#include <aws/config/model/GetResourceConfigHistoryResult.h>
#include <aws/config/model/GetResourceEvaluationSummaryResult.h>
#include <aws/config/model/GetStoredQueryResult.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesResult.h>
#include <aws/config/model/ListConformancePackComplianceScoresResult.h>
#include <aws/config/model/ListDiscoveredResourcesResult.h>
#include <aws/config/model/ListResourceEvaluationsResult.h>
#include <aws/config/model/ListStoredQueriesResult.h>
#include <aws/config/model/ListTagsForResourceResult.h>
#include <aws/config/model/PutAggregationAuthorizationResult.h>
#include <aws/config/model/PutConfigurationAggregatorResult.h>
#include <aws/config/model/PutConformancePackResult.h>
#include <aws/config/model/PutEvaluationsResult.h>
#include <aws/config/model/PutExternalEvaluationResult.h>
#include <aws/config/model/PutOrganizationConfigRuleResult.h>
#include <aws/config/model/PutOrganizationConformancePackResult.h>
#include <aws/config/model/PutRemediationConfigurationsResult.h>
#include <aws/config/model/PutRemediationExceptionsResult.h>
#include <aws/config/model/PutRetentionConfigurationResult.h>
#include <aws/config/model/PutStoredQueryResult.h>
#include <aws/config/model/SelectAggregateResourceConfigResult.h>
#include <aws/config/model/SelectResourceConfigResult.h>
#include <aws/config/model/StartConfigRulesEvaluationResult.h>
#include <aws/config/model/StartRemediationExecutionResult.h>
#include <aws/config/model/StartResourceEvaluationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ConfigServiceClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace ConfigService
  {
    using ConfigServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ConfigServiceEndpointProviderBase = Aws::ConfigService::Endpoint::ConfigServiceEndpointProviderBase;
    using ConfigServiceEndpointProvider = Aws::ConfigService::Endpoint::ConfigServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConfigServiceClient header */
      class BatchGetAggregateResourceConfigRequest;
      class BatchGetResourceConfigRequest;
      class DeleteAggregationAuthorizationRequest;
      class DeleteConfigRuleRequest;
      class DeleteConfigurationAggregatorRequest;
      class DeleteConfigurationRecorderRequest;
      class DeleteConformancePackRequest;
      class DeleteDeliveryChannelRequest;
      class DeleteEvaluationResultsRequest;
      class DeleteOrganizationConfigRuleRequest;
      class DeleteOrganizationConformancePackRequest;
      class DeletePendingAggregationRequestRequest;
      class DeleteRemediationConfigurationRequest;
      class DeleteRemediationExceptionsRequest;
      class DeleteResourceConfigRequest;
      class DeleteRetentionConfigurationRequest;
      class DeleteStoredQueryRequest;
      class DeliverConfigSnapshotRequest;
      class DescribeAggregateComplianceByConfigRulesRequest;
      class DescribeAggregateComplianceByConformancePacksRequest;
      class DescribeAggregationAuthorizationsRequest;
      class DescribeComplianceByConfigRuleRequest;
      class DescribeComplianceByResourceRequest;
      class DescribeConfigRuleEvaluationStatusRequest;
      class DescribeConfigRulesRequest;
      class DescribeConfigurationAggregatorSourcesStatusRequest;
      class DescribeConfigurationAggregatorsRequest;
      class DescribeConfigurationRecorderStatusRequest;
      class DescribeConfigurationRecordersRequest;
      class DescribeConformancePackComplianceRequest;
      class DescribeConformancePackStatusRequest;
      class DescribeConformancePacksRequest;
      class DescribeDeliveryChannelStatusRequest;
      class DescribeDeliveryChannelsRequest;
      class DescribeOrganizationConfigRuleStatusesRequest;
      class DescribeOrganizationConfigRulesRequest;
      class DescribeOrganizationConformancePackStatusesRequest;
      class DescribeOrganizationConformancePacksRequest;
      class DescribePendingAggregationRequestsRequest;
      class DescribeRemediationConfigurationsRequest;
      class DescribeRemediationExceptionsRequest;
      class DescribeRemediationExecutionStatusRequest;
      class DescribeRetentionConfigurationsRequest;
      class GetAggregateComplianceDetailsByConfigRuleRequest;
      class GetAggregateConfigRuleComplianceSummaryRequest;
      class GetAggregateConformancePackComplianceSummaryRequest;
      class GetAggregateDiscoveredResourceCountsRequest;
      class GetAggregateResourceConfigRequest;
      class GetComplianceDetailsByConfigRuleRequest;
      class GetComplianceDetailsByResourceRequest;
      class GetComplianceSummaryByResourceTypeRequest;
      class GetConformancePackComplianceDetailsRequest;
      class GetConformancePackComplianceSummaryRequest;
      class GetCustomRulePolicyRequest;
      class GetDiscoveredResourceCountsRequest;
      class GetOrganizationConfigRuleDetailedStatusRequest;
      class GetOrganizationConformancePackDetailedStatusRequest;
      class GetOrganizationCustomRulePolicyRequest;
      class GetResourceConfigHistoryRequest;
      class GetResourceEvaluationSummaryRequest;
      class GetStoredQueryRequest;
      class ListAggregateDiscoveredResourcesRequest;
      class ListConformancePackComplianceScoresRequest;
      class ListDiscoveredResourcesRequest;
      class ListResourceEvaluationsRequest;
      class ListStoredQueriesRequest;
      class ListTagsForResourceRequest;
      class PutAggregationAuthorizationRequest;
      class PutConfigRuleRequest;
      class PutConfigurationAggregatorRequest;
      class PutConfigurationRecorderRequest;
      class PutConformancePackRequest;
      class PutDeliveryChannelRequest;
      class PutEvaluationsRequest;
      class PutExternalEvaluationRequest;
      class PutOrganizationConfigRuleRequest;
      class PutOrganizationConformancePackRequest;
      class PutRemediationConfigurationsRequest;
      class PutRemediationExceptionsRequest;
      class PutResourceConfigRequest;
      class PutRetentionConfigurationRequest;
      class PutStoredQueryRequest;
      class SelectAggregateResourceConfigRequest;
      class SelectResourceConfigRequest;
      class StartConfigRulesEvaluationRequest;
      class StartConfigurationRecorderRequest;
      class StartRemediationExecutionRequest;
      class StartResourceEvaluationRequest;
      class StopConfigurationRecorderRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in ConfigServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetAggregateResourceConfigResult, ConfigServiceError> BatchGetAggregateResourceConfigOutcome;
      typedef Aws::Utils::Outcome<BatchGetResourceConfigResult, ConfigServiceError> BatchGetResourceConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteAggregationAuthorizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteConfigRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteConfigurationAggregatorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteConfigurationRecorderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteConformancePackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteDeliveryChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteEvaluationResultsResult, ConfigServiceError> DeleteEvaluationResultsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteOrganizationConfigRuleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteOrganizationConformancePackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeletePendingAggregationRequestOutcome;
      typedef Aws::Utils::Outcome<DeleteRemediationConfigurationResult, ConfigServiceError> DeleteRemediationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteRemediationExceptionsResult, ConfigServiceError> DeleteRemediationExceptionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteResourceConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> DeleteRetentionConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteStoredQueryResult, ConfigServiceError> DeleteStoredQueryOutcome;
      typedef Aws::Utils::Outcome<DeliverConfigSnapshotResult, ConfigServiceError> DeliverConfigSnapshotOutcome;
      typedef Aws::Utils::Outcome<DescribeAggregateComplianceByConfigRulesResult, ConfigServiceError> DescribeAggregateComplianceByConfigRulesOutcome;
      typedef Aws::Utils::Outcome<DescribeAggregateComplianceByConformancePacksResult, ConfigServiceError> DescribeAggregateComplianceByConformancePacksOutcome;
      typedef Aws::Utils::Outcome<DescribeAggregationAuthorizationsResult, ConfigServiceError> DescribeAggregationAuthorizationsOutcome;
      typedef Aws::Utils::Outcome<DescribeComplianceByConfigRuleResult, ConfigServiceError> DescribeComplianceByConfigRuleOutcome;
      typedef Aws::Utils::Outcome<DescribeComplianceByResourceResult, ConfigServiceError> DescribeComplianceByResourceOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigRuleEvaluationStatusResult, ConfigServiceError> DescribeConfigRuleEvaluationStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigRulesResult, ConfigServiceError> DescribeConfigRulesOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationAggregatorSourcesStatusResult, ConfigServiceError> DescribeConfigurationAggregatorSourcesStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationAggregatorsResult, ConfigServiceError> DescribeConfigurationAggregatorsOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationRecorderStatusResult, ConfigServiceError> DescribeConfigurationRecorderStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationRecordersResult, ConfigServiceError> DescribeConfigurationRecordersOutcome;
      typedef Aws::Utils::Outcome<DescribeConformancePackComplianceResult, ConfigServiceError> DescribeConformancePackComplianceOutcome;
      typedef Aws::Utils::Outcome<DescribeConformancePackStatusResult, ConfigServiceError> DescribeConformancePackStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeConformancePacksResult, ConfigServiceError> DescribeConformancePacksOutcome;
      typedef Aws::Utils::Outcome<DescribeDeliveryChannelStatusResult, ConfigServiceError> DescribeDeliveryChannelStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeDeliveryChannelsResult, ConfigServiceError> DescribeDeliveryChannelsOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigRuleStatusesResult, ConfigServiceError> DescribeOrganizationConfigRuleStatusesOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigRulesResult, ConfigServiceError> DescribeOrganizationConfigRulesOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConformancePackStatusesResult, ConfigServiceError> DescribeOrganizationConformancePackStatusesOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConformancePacksResult, ConfigServiceError> DescribeOrganizationConformancePacksOutcome;
      typedef Aws::Utils::Outcome<DescribePendingAggregationRequestsResult, ConfigServiceError> DescribePendingAggregationRequestsOutcome;
      typedef Aws::Utils::Outcome<DescribeRemediationConfigurationsResult, ConfigServiceError> DescribeRemediationConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeRemediationExceptionsResult, ConfigServiceError> DescribeRemediationExceptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeRemediationExecutionStatusResult, ConfigServiceError> DescribeRemediationExecutionStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeRetentionConfigurationsResult, ConfigServiceError> DescribeRetentionConfigurationsOutcome;
      typedef Aws::Utils::Outcome<GetAggregateComplianceDetailsByConfigRuleResult, ConfigServiceError> GetAggregateComplianceDetailsByConfigRuleOutcome;
      typedef Aws::Utils::Outcome<GetAggregateConfigRuleComplianceSummaryResult, ConfigServiceError> GetAggregateConfigRuleComplianceSummaryOutcome;
      typedef Aws::Utils::Outcome<GetAggregateConformancePackComplianceSummaryResult, ConfigServiceError> GetAggregateConformancePackComplianceSummaryOutcome;
      typedef Aws::Utils::Outcome<GetAggregateDiscoveredResourceCountsResult, ConfigServiceError> GetAggregateDiscoveredResourceCountsOutcome;
      typedef Aws::Utils::Outcome<GetAggregateResourceConfigResult, ConfigServiceError> GetAggregateResourceConfigOutcome;
      typedef Aws::Utils::Outcome<GetComplianceDetailsByConfigRuleResult, ConfigServiceError> GetComplianceDetailsByConfigRuleOutcome;
      typedef Aws::Utils::Outcome<GetComplianceDetailsByResourceResult, ConfigServiceError> GetComplianceDetailsByResourceOutcome;
      typedef Aws::Utils::Outcome<GetComplianceSummaryByConfigRuleResult, ConfigServiceError> GetComplianceSummaryByConfigRuleOutcome;
      typedef Aws::Utils::Outcome<GetComplianceSummaryByResourceTypeResult, ConfigServiceError> GetComplianceSummaryByResourceTypeOutcome;
      typedef Aws::Utils::Outcome<GetConformancePackComplianceDetailsResult, ConfigServiceError> GetConformancePackComplianceDetailsOutcome;
      typedef Aws::Utils::Outcome<GetConformancePackComplianceSummaryResult, ConfigServiceError> GetConformancePackComplianceSummaryOutcome;
      typedef Aws::Utils::Outcome<GetCustomRulePolicyResult, ConfigServiceError> GetCustomRulePolicyOutcome;
      typedef Aws::Utils::Outcome<GetDiscoveredResourceCountsResult, ConfigServiceError> GetDiscoveredResourceCountsOutcome;
      typedef Aws::Utils::Outcome<GetOrganizationConfigRuleDetailedStatusResult, ConfigServiceError> GetOrganizationConfigRuleDetailedStatusOutcome;
      typedef Aws::Utils::Outcome<GetOrganizationConformancePackDetailedStatusResult, ConfigServiceError> GetOrganizationConformancePackDetailedStatusOutcome;
      typedef Aws::Utils::Outcome<GetOrganizationCustomRulePolicyResult, ConfigServiceError> GetOrganizationCustomRulePolicyOutcome;
      typedef Aws::Utils::Outcome<GetResourceConfigHistoryResult, ConfigServiceError> GetResourceConfigHistoryOutcome;
      typedef Aws::Utils::Outcome<GetResourceEvaluationSummaryResult, ConfigServiceError> GetResourceEvaluationSummaryOutcome;
      typedef Aws::Utils::Outcome<GetStoredQueryResult, ConfigServiceError> GetStoredQueryOutcome;
      typedef Aws::Utils::Outcome<ListAggregateDiscoveredResourcesResult, ConfigServiceError> ListAggregateDiscoveredResourcesOutcome;
      typedef Aws::Utils::Outcome<ListConformancePackComplianceScoresResult, ConfigServiceError> ListConformancePackComplianceScoresOutcome;
      typedef Aws::Utils::Outcome<ListDiscoveredResourcesResult, ConfigServiceError> ListDiscoveredResourcesOutcome;
      typedef Aws::Utils::Outcome<ListResourceEvaluationsResult, ConfigServiceError> ListResourceEvaluationsOutcome;
      typedef Aws::Utils::Outcome<ListStoredQueriesResult, ConfigServiceError> ListStoredQueriesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConfigServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutAggregationAuthorizationResult, ConfigServiceError> PutAggregationAuthorizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> PutConfigRuleOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationAggregatorResult, ConfigServiceError> PutConfigurationAggregatorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> PutConfigurationRecorderOutcome;
      typedef Aws::Utils::Outcome<PutConformancePackResult, ConfigServiceError> PutConformancePackOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> PutDeliveryChannelOutcome;
      typedef Aws::Utils::Outcome<PutEvaluationsResult, ConfigServiceError> PutEvaluationsOutcome;
      typedef Aws::Utils::Outcome<PutExternalEvaluationResult, ConfigServiceError> PutExternalEvaluationOutcome;
      typedef Aws::Utils::Outcome<PutOrganizationConfigRuleResult, ConfigServiceError> PutOrganizationConfigRuleOutcome;
      typedef Aws::Utils::Outcome<PutOrganizationConformancePackResult, ConfigServiceError> PutOrganizationConformancePackOutcome;
      typedef Aws::Utils::Outcome<PutRemediationConfigurationsResult, ConfigServiceError> PutRemediationConfigurationsOutcome;
      typedef Aws::Utils::Outcome<PutRemediationExceptionsResult, ConfigServiceError> PutRemediationExceptionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> PutResourceConfigOutcome;
      typedef Aws::Utils::Outcome<PutRetentionConfigurationResult, ConfigServiceError> PutRetentionConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutStoredQueryResult, ConfigServiceError> PutStoredQueryOutcome;
      typedef Aws::Utils::Outcome<SelectAggregateResourceConfigResult, ConfigServiceError> SelectAggregateResourceConfigOutcome;
      typedef Aws::Utils::Outcome<SelectResourceConfigResult, ConfigServiceError> SelectResourceConfigOutcome;
      typedef Aws::Utils::Outcome<StartConfigRulesEvaluationResult, ConfigServiceError> StartConfigRulesEvaluationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> StartConfigurationRecorderOutcome;
      typedef Aws::Utils::Outcome<StartRemediationExecutionResult, ConfigServiceError> StartRemediationExecutionOutcome;
      typedef Aws::Utils::Outcome<StartResourceEvaluationResult, ConfigServiceError> StartResourceEvaluationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> StopConfigurationRecorderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConfigServiceError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetAggregateResourceConfigOutcome> BatchGetAggregateResourceConfigOutcomeCallable;
      typedef std::future<BatchGetResourceConfigOutcome> BatchGetResourceConfigOutcomeCallable;
      typedef std::future<DeleteAggregationAuthorizationOutcome> DeleteAggregationAuthorizationOutcomeCallable;
      typedef std::future<DeleteConfigRuleOutcome> DeleteConfigRuleOutcomeCallable;
      typedef std::future<DeleteConfigurationAggregatorOutcome> DeleteConfigurationAggregatorOutcomeCallable;
      typedef std::future<DeleteConfigurationRecorderOutcome> DeleteConfigurationRecorderOutcomeCallable;
      typedef std::future<DeleteConformancePackOutcome> DeleteConformancePackOutcomeCallable;
      typedef std::future<DeleteDeliveryChannelOutcome> DeleteDeliveryChannelOutcomeCallable;
      typedef std::future<DeleteEvaluationResultsOutcome> DeleteEvaluationResultsOutcomeCallable;
      typedef std::future<DeleteOrganizationConfigRuleOutcome> DeleteOrganizationConfigRuleOutcomeCallable;
      typedef std::future<DeleteOrganizationConformancePackOutcome> DeleteOrganizationConformancePackOutcomeCallable;
      typedef std::future<DeletePendingAggregationRequestOutcome> DeletePendingAggregationRequestOutcomeCallable;
      typedef std::future<DeleteRemediationConfigurationOutcome> DeleteRemediationConfigurationOutcomeCallable;
      typedef std::future<DeleteRemediationExceptionsOutcome> DeleteRemediationExceptionsOutcomeCallable;
      typedef std::future<DeleteResourceConfigOutcome> DeleteResourceConfigOutcomeCallable;
      typedef std::future<DeleteRetentionConfigurationOutcome> DeleteRetentionConfigurationOutcomeCallable;
      typedef std::future<DeleteStoredQueryOutcome> DeleteStoredQueryOutcomeCallable;
      typedef std::future<DeliverConfigSnapshotOutcome> DeliverConfigSnapshotOutcomeCallable;
      typedef std::future<DescribeAggregateComplianceByConfigRulesOutcome> DescribeAggregateComplianceByConfigRulesOutcomeCallable;
      typedef std::future<DescribeAggregateComplianceByConformancePacksOutcome> DescribeAggregateComplianceByConformancePacksOutcomeCallable;
      typedef std::future<DescribeAggregationAuthorizationsOutcome> DescribeAggregationAuthorizationsOutcomeCallable;
      typedef std::future<DescribeComplianceByConfigRuleOutcome> DescribeComplianceByConfigRuleOutcomeCallable;
      typedef std::future<DescribeComplianceByResourceOutcome> DescribeComplianceByResourceOutcomeCallable;
      typedef std::future<DescribeConfigRuleEvaluationStatusOutcome> DescribeConfigRuleEvaluationStatusOutcomeCallable;
      typedef std::future<DescribeConfigRulesOutcome> DescribeConfigRulesOutcomeCallable;
      typedef std::future<DescribeConfigurationAggregatorSourcesStatusOutcome> DescribeConfigurationAggregatorSourcesStatusOutcomeCallable;
      typedef std::future<DescribeConfigurationAggregatorsOutcome> DescribeConfigurationAggregatorsOutcomeCallable;
      typedef std::future<DescribeConfigurationRecorderStatusOutcome> DescribeConfigurationRecorderStatusOutcomeCallable;
      typedef std::future<DescribeConfigurationRecordersOutcome> DescribeConfigurationRecordersOutcomeCallable;
      typedef std::future<DescribeConformancePackComplianceOutcome> DescribeConformancePackComplianceOutcomeCallable;
      typedef std::future<DescribeConformancePackStatusOutcome> DescribeConformancePackStatusOutcomeCallable;
      typedef std::future<DescribeConformancePacksOutcome> DescribeConformancePacksOutcomeCallable;
      typedef std::future<DescribeDeliveryChannelStatusOutcome> DescribeDeliveryChannelStatusOutcomeCallable;
      typedef std::future<DescribeDeliveryChannelsOutcome> DescribeDeliveryChannelsOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigRuleStatusesOutcome> DescribeOrganizationConfigRuleStatusesOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigRulesOutcome> DescribeOrganizationConfigRulesOutcomeCallable;
      typedef std::future<DescribeOrganizationConformancePackStatusesOutcome> DescribeOrganizationConformancePackStatusesOutcomeCallable;
      typedef std::future<DescribeOrganizationConformancePacksOutcome> DescribeOrganizationConformancePacksOutcomeCallable;
      typedef std::future<DescribePendingAggregationRequestsOutcome> DescribePendingAggregationRequestsOutcomeCallable;
      typedef std::future<DescribeRemediationConfigurationsOutcome> DescribeRemediationConfigurationsOutcomeCallable;
      typedef std::future<DescribeRemediationExceptionsOutcome> DescribeRemediationExceptionsOutcomeCallable;
      typedef std::future<DescribeRemediationExecutionStatusOutcome> DescribeRemediationExecutionStatusOutcomeCallable;
      typedef std::future<DescribeRetentionConfigurationsOutcome> DescribeRetentionConfigurationsOutcomeCallable;
      typedef std::future<GetAggregateComplianceDetailsByConfigRuleOutcome> GetAggregateComplianceDetailsByConfigRuleOutcomeCallable;
      typedef std::future<GetAggregateConfigRuleComplianceSummaryOutcome> GetAggregateConfigRuleComplianceSummaryOutcomeCallable;
      typedef std::future<GetAggregateConformancePackComplianceSummaryOutcome> GetAggregateConformancePackComplianceSummaryOutcomeCallable;
      typedef std::future<GetAggregateDiscoveredResourceCountsOutcome> GetAggregateDiscoveredResourceCountsOutcomeCallable;
      typedef std::future<GetAggregateResourceConfigOutcome> GetAggregateResourceConfigOutcomeCallable;
      typedef std::future<GetComplianceDetailsByConfigRuleOutcome> GetComplianceDetailsByConfigRuleOutcomeCallable;
      typedef std::future<GetComplianceDetailsByResourceOutcome> GetComplianceDetailsByResourceOutcomeCallable;
      typedef std::future<GetComplianceSummaryByConfigRuleOutcome> GetComplianceSummaryByConfigRuleOutcomeCallable;
      typedef std::future<GetComplianceSummaryByResourceTypeOutcome> GetComplianceSummaryByResourceTypeOutcomeCallable;
      typedef std::future<GetConformancePackComplianceDetailsOutcome> GetConformancePackComplianceDetailsOutcomeCallable;
      typedef std::future<GetConformancePackComplianceSummaryOutcome> GetConformancePackComplianceSummaryOutcomeCallable;
      typedef std::future<GetCustomRulePolicyOutcome> GetCustomRulePolicyOutcomeCallable;
      typedef std::future<GetDiscoveredResourceCountsOutcome> GetDiscoveredResourceCountsOutcomeCallable;
      typedef std::future<GetOrganizationConfigRuleDetailedStatusOutcome> GetOrganizationConfigRuleDetailedStatusOutcomeCallable;
      typedef std::future<GetOrganizationConformancePackDetailedStatusOutcome> GetOrganizationConformancePackDetailedStatusOutcomeCallable;
      typedef std::future<GetOrganizationCustomRulePolicyOutcome> GetOrganizationCustomRulePolicyOutcomeCallable;
      typedef std::future<GetResourceConfigHistoryOutcome> GetResourceConfigHistoryOutcomeCallable;
      typedef std::future<GetResourceEvaluationSummaryOutcome> GetResourceEvaluationSummaryOutcomeCallable;
      typedef std::future<GetStoredQueryOutcome> GetStoredQueryOutcomeCallable;
      typedef std::future<ListAggregateDiscoveredResourcesOutcome> ListAggregateDiscoveredResourcesOutcomeCallable;
      typedef std::future<ListConformancePackComplianceScoresOutcome> ListConformancePackComplianceScoresOutcomeCallable;
      typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
      typedef std::future<ListResourceEvaluationsOutcome> ListResourceEvaluationsOutcomeCallable;
      typedef std::future<ListStoredQueriesOutcome> ListStoredQueriesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutAggregationAuthorizationOutcome> PutAggregationAuthorizationOutcomeCallable;
      typedef std::future<PutConfigRuleOutcome> PutConfigRuleOutcomeCallable;
      typedef std::future<PutConfigurationAggregatorOutcome> PutConfigurationAggregatorOutcomeCallable;
      typedef std::future<PutConfigurationRecorderOutcome> PutConfigurationRecorderOutcomeCallable;
      typedef std::future<PutConformancePackOutcome> PutConformancePackOutcomeCallable;
      typedef std::future<PutDeliveryChannelOutcome> PutDeliveryChannelOutcomeCallable;
      typedef std::future<PutEvaluationsOutcome> PutEvaluationsOutcomeCallable;
      typedef std::future<PutExternalEvaluationOutcome> PutExternalEvaluationOutcomeCallable;
      typedef std::future<PutOrganizationConfigRuleOutcome> PutOrganizationConfigRuleOutcomeCallable;
      typedef std::future<PutOrganizationConformancePackOutcome> PutOrganizationConformancePackOutcomeCallable;
      typedef std::future<PutRemediationConfigurationsOutcome> PutRemediationConfigurationsOutcomeCallable;
      typedef std::future<PutRemediationExceptionsOutcome> PutRemediationExceptionsOutcomeCallable;
      typedef std::future<PutResourceConfigOutcome> PutResourceConfigOutcomeCallable;
      typedef std::future<PutRetentionConfigurationOutcome> PutRetentionConfigurationOutcomeCallable;
      typedef std::future<PutStoredQueryOutcome> PutStoredQueryOutcomeCallable;
      typedef std::future<SelectAggregateResourceConfigOutcome> SelectAggregateResourceConfigOutcomeCallable;
      typedef std::future<SelectResourceConfigOutcome> SelectResourceConfigOutcomeCallable;
      typedef std::future<StartConfigRulesEvaluationOutcome> StartConfigRulesEvaluationOutcomeCallable;
      typedef std::future<StartConfigurationRecorderOutcome> StartConfigurationRecorderOutcomeCallable;
      typedef std::future<StartRemediationExecutionOutcome> StartRemediationExecutionOutcomeCallable;
      typedef std::future<StartResourceEvaluationOutcome> StartResourceEvaluationOutcomeCallable;
      typedef std::future<StopConfigurationRecorderOutcome> StopConfigurationRecorderOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConfigServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConfigServiceClient*, const Model::BatchGetAggregateResourceConfigRequest&, const Model::BatchGetAggregateResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetAggregateResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::BatchGetResourceConfigRequest&, const Model::BatchGetResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteAggregationAuthorizationRequest&, const Model::DeleteAggregationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAggregationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigRuleRequest&, const Model::DeleteConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigurationAggregatorRequest&, const Model::DeleteConfigurationAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationAggregatorResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigurationRecorderRequest&, const Model::DeleteConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConformancePackRequest&, const Model::DeleteConformancePackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConformancePackResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteDeliveryChannelRequest&, const Model::DeleteDeliveryChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryChannelResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteEvaluationResultsRequest&, const Model::DeleteEvaluationResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEvaluationResultsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteOrganizationConfigRuleRequest&, const Model::DeleteOrganizationConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteOrganizationConformancePackRequest&, const Model::DeleteOrganizationConformancePackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationConformancePackResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeletePendingAggregationRequestRequest&, const Model::DeletePendingAggregationRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePendingAggregationRequestResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteRemediationConfigurationRequest&, const Model::DeleteRemediationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRemediationConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteRemediationExceptionsRequest&, const Model::DeleteRemediationExceptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRemediationExceptionsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteResourceConfigRequest&, const Model::DeleteResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteRetentionConfigurationRequest&, const Model::DeleteRetentionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetentionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteStoredQueryRequest&, const Model::DeleteStoredQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStoredQueryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeliverConfigSnapshotRequest&, const Model::DeliverConfigSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeliverConfigSnapshotResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeAggregateComplianceByConfigRulesRequest&, const Model::DescribeAggregateComplianceByConfigRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAggregateComplianceByConfigRulesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeAggregateComplianceByConformancePacksRequest&, const Model::DescribeAggregateComplianceByConformancePacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAggregateComplianceByConformancePacksResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeAggregationAuthorizationsRequest&, const Model::DescribeAggregationAuthorizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAggregationAuthorizationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeComplianceByConfigRuleRequest&, const Model::DescribeComplianceByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComplianceByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeComplianceByResourceRequest&, const Model::DescribeComplianceByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComplianceByResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigRuleEvaluationStatusRequest&, const Model::DescribeConfigRuleEvaluationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigRuleEvaluationStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigRulesRequest&, const Model::DescribeConfigRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigRulesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationAggregatorSourcesStatusRequest&, const Model::DescribeConfigurationAggregatorSourcesStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationAggregatorsRequest&, const Model::DescribeConfigurationAggregatorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationAggregatorsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationRecorderStatusRequest&, const Model::DescribeConfigurationRecorderStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRecorderStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationRecordersRequest&, const Model::DescribeConfigurationRecordersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRecordersResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConformancePackComplianceRequest&, const Model::DescribeConformancePackComplianceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConformancePackComplianceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConformancePackStatusRequest&, const Model::DescribeConformancePackStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConformancePackStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConformancePacksRequest&, const Model::DescribeConformancePacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConformancePacksResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeDeliveryChannelStatusRequest&, const Model::DescribeDeliveryChannelStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryChannelStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeDeliveryChannelsRequest&, const Model::DescribeDeliveryChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryChannelsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeOrganizationConfigRuleStatusesRequest&, const Model::DescribeOrganizationConfigRuleStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigRuleStatusesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeOrganizationConfigRulesRequest&, const Model::DescribeOrganizationConfigRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigRulesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeOrganizationConformancePackStatusesRequest&, const Model::DescribeOrganizationConformancePackStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConformancePackStatusesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeOrganizationConformancePacksRequest&, const Model::DescribeOrganizationConformancePacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConformancePacksResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribePendingAggregationRequestsRequest&, const Model::DescribePendingAggregationRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingAggregationRequestsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeRemediationConfigurationsRequest&, const Model::DescribeRemediationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRemediationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeRemediationExceptionsRequest&, const Model::DescribeRemediationExceptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRemediationExceptionsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeRemediationExecutionStatusRequest&, const Model::DescribeRemediationExecutionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRemediationExecutionStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeRetentionConfigurationsRequest&, const Model::DescribeRetentionConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRetentionConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateComplianceDetailsByConfigRuleRequest&, const Model::GetAggregateComplianceDetailsByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateConfigRuleComplianceSummaryRequest&, const Model::GetAggregateConfigRuleComplianceSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateConformancePackComplianceSummaryRequest&, const Model::GetAggregateConformancePackComplianceSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateConformancePackComplianceSummaryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateDiscoveredResourceCountsRequest&, const Model::GetAggregateDiscoveredResourceCountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateDiscoveredResourceCountsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateResourceConfigRequest&, const Model::GetAggregateResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceDetailsByConfigRuleRequest&, const Model::GetComplianceDetailsByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailsByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceDetailsByResourceRequest&, const Model::GetComplianceDetailsByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailsByResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceSummaryByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceSummaryByResourceTypeRequest&, const Model::GetComplianceSummaryByResourceTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryByResourceTypeResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetConformancePackComplianceDetailsRequest&, const Model::GetConformancePackComplianceDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConformancePackComplianceDetailsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetConformancePackComplianceSummaryRequest&, const Model::GetConformancePackComplianceSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConformancePackComplianceSummaryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetCustomRulePolicyRequest&, const Model::GetCustomRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomRulePolicyResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetDiscoveredResourceCountsRequest&, const Model::GetDiscoveredResourceCountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiscoveredResourceCountsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetOrganizationConfigRuleDetailedStatusRequest&, const Model::GetOrganizationConfigRuleDetailedStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetOrganizationConformancePackDetailedStatusRequest&, const Model::GetOrganizationConformancePackDetailedStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrganizationConformancePackDetailedStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetOrganizationCustomRulePolicyRequest&, const Model::GetOrganizationCustomRulePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrganizationCustomRulePolicyResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetResourceConfigHistoryRequest&, const Model::GetResourceConfigHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceConfigHistoryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetResourceEvaluationSummaryRequest&, const Model::GetResourceEvaluationSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceEvaluationSummaryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetStoredQueryRequest&, const Model::GetStoredQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStoredQueryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListAggregateDiscoveredResourcesRequest&, const Model::ListAggregateDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAggregateDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListConformancePackComplianceScoresRequest&, const Model::ListConformancePackComplianceScoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConformancePackComplianceScoresResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListDiscoveredResourcesRequest&, const Model::ListDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListResourceEvaluationsRequest&, const Model::ListResourceEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceEvaluationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListStoredQueriesRequest&, const Model::ListStoredQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStoredQueriesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutAggregationAuthorizationRequest&, const Model::PutAggregationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAggregationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigRuleRequest&, const Model::PutConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigurationAggregatorRequest&, const Model::PutConfigurationAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationAggregatorResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigurationRecorderRequest&, const Model::PutConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConformancePackRequest&, const Model::PutConformancePackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConformancePackResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutDeliveryChannelRequest&, const Model::PutDeliveryChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliveryChannelResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutEvaluationsRequest&, const Model::PutEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEvaluationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutExternalEvaluationRequest&, const Model::PutExternalEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutExternalEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutOrganizationConfigRuleRequest&, const Model::PutOrganizationConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOrganizationConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutOrganizationConformancePackRequest&, const Model::PutOrganizationConformancePackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOrganizationConformancePackResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutRemediationConfigurationsRequest&, const Model::PutRemediationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRemediationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutRemediationExceptionsRequest&, const Model::PutRemediationExceptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRemediationExceptionsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutResourceConfigRequest&, const Model::PutResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutRetentionConfigurationRequest&, const Model::PutRetentionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutStoredQueryRequest&, const Model::PutStoredQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutStoredQueryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::SelectAggregateResourceConfigRequest&, const Model::SelectAggregateResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SelectAggregateResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::SelectResourceConfigRequest&, const Model::SelectResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SelectResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartConfigRulesEvaluationRequest&, const Model::StartConfigRulesEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigRulesEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartConfigurationRecorderRequest&, const Model::StartConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartRemediationExecutionRequest&, const Model::StartRemediationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRemediationExecutionResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartResourceEvaluationRequest&, const Model::StartResourceEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartResourceEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StopConfigurationRecorderRequest&, const Model::StopConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ConfigService
} // namespace Aws
