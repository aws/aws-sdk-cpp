/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/config/model/BatchGetAggregateResourceConfigResult.h>
#include <aws/config/model/BatchGetResourceConfigResult.h>
#include <aws/config/model/DeleteEvaluationResultsResult.h>
#include <aws/config/model/DeleteRemediationConfigurationResult.h>
#include <aws/config/model/DeliverConfigSnapshotResult.h>
#include <aws/config/model/DescribeAggregateComplianceByConfigRulesResult.h>
#include <aws/config/model/DescribeAggregationAuthorizationsResult.h>
#include <aws/config/model/DescribeComplianceByConfigRuleResult.h>
#include <aws/config/model/DescribeComplianceByResourceResult.h>
#include <aws/config/model/DescribeConfigRuleEvaluationStatusResult.h>
#include <aws/config/model/DescribeConfigRulesResult.h>
#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusResult.h>
#include <aws/config/model/DescribeConfigurationAggregatorsResult.h>
#include <aws/config/model/DescribeConfigurationRecorderStatusResult.h>
#include <aws/config/model/DescribeConfigurationRecordersResult.h>
#include <aws/config/model/DescribeDeliveryChannelStatusResult.h>
#include <aws/config/model/DescribeDeliveryChannelsResult.h>
#include <aws/config/model/DescribeOrganizationConfigRuleStatusesResult.h>
#include <aws/config/model/DescribeOrganizationConfigRulesResult.h>
#include <aws/config/model/DescribePendingAggregationRequestsResult.h>
#include <aws/config/model/DescribeRemediationConfigurationsResult.h>
#include <aws/config/model/DescribeRemediationExecutionStatusResult.h>
#include <aws/config/model/DescribeRetentionConfigurationsResult.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleResult.h>
#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryResult.h>
#include <aws/config/model/GetAggregateDiscoveredResourceCountsResult.h>
#include <aws/config/model/GetAggregateResourceConfigResult.h>
#include <aws/config/model/GetComplianceDetailsByConfigRuleResult.h>
#include <aws/config/model/GetComplianceDetailsByResourceResult.h>
#include <aws/config/model/GetComplianceSummaryByConfigRuleResult.h>
#include <aws/config/model/GetComplianceSummaryByResourceTypeResult.h>
#include <aws/config/model/GetDiscoveredResourceCountsResult.h>
#include <aws/config/model/GetOrganizationConfigRuleDetailedStatusResult.h>
#include <aws/config/model/GetResourceConfigHistoryResult.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesResult.h>
#include <aws/config/model/ListDiscoveredResourcesResult.h>
#include <aws/config/model/ListTagsForResourceResult.h>
#include <aws/config/model/PutAggregationAuthorizationResult.h>
#include <aws/config/model/PutConfigurationAggregatorResult.h>
#include <aws/config/model/PutEvaluationsResult.h>
#include <aws/config/model/PutOrganizationConfigRuleResult.h>
#include <aws/config/model/PutRemediationConfigurationsResult.h>
#include <aws/config/model/PutRetentionConfigurationResult.h>
#include <aws/config/model/SelectResourceConfigResult.h>
#include <aws/config/model/StartConfigRulesEvaluationResult.h>
#include <aws/config/model/StartRemediationExecutionResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
        class BatchGetAggregateResourceConfigRequest;
        class BatchGetResourceConfigRequest;
        class DeleteAggregationAuthorizationRequest;
        class DeleteConfigRuleRequest;
        class DeleteConfigurationAggregatorRequest;
        class DeleteConfigurationRecorderRequest;
        class DeleteDeliveryChannelRequest;
        class DeleteEvaluationResultsRequest;
        class DeleteOrganizationConfigRuleRequest;
        class DeletePendingAggregationRequestRequest;
        class DeleteRemediationConfigurationRequest;
        class DeleteRetentionConfigurationRequest;
        class DeliverConfigSnapshotRequest;
        class DescribeAggregateComplianceByConfigRulesRequest;
        class DescribeAggregationAuthorizationsRequest;
        class DescribeComplianceByConfigRuleRequest;
        class DescribeComplianceByResourceRequest;
        class DescribeConfigRuleEvaluationStatusRequest;
        class DescribeConfigRulesRequest;
        class DescribeConfigurationAggregatorSourcesStatusRequest;
        class DescribeConfigurationAggregatorsRequest;
        class DescribeConfigurationRecorderStatusRequest;
        class DescribeConfigurationRecordersRequest;
        class DescribeDeliveryChannelStatusRequest;
        class DescribeDeliveryChannelsRequest;
        class DescribeOrganizationConfigRuleStatusesRequest;
        class DescribeOrganizationConfigRulesRequest;
        class DescribePendingAggregationRequestsRequest;
        class DescribeRemediationConfigurationsRequest;
        class DescribeRemediationExecutionStatusRequest;
        class DescribeRetentionConfigurationsRequest;
        class GetAggregateComplianceDetailsByConfigRuleRequest;
        class GetAggregateConfigRuleComplianceSummaryRequest;
        class GetAggregateDiscoveredResourceCountsRequest;
        class GetAggregateResourceConfigRequest;
        class GetComplianceDetailsByConfigRuleRequest;
        class GetComplianceDetailsByResourceRequest;
        class GetComplianceSummaryByResourceTypeRequest;
        class GetDiscoveredResourceCountsRequest;
        class GetOrganizationConfigRuleDetailedStatusRequest;
        class GetResourceConfigHistoryRequest;
        class ListAggregateDiscoveredResourcesRequest;
        class ListDiscoveredResourcesRequest;
        class ListTagsForResourceRequest;
        class PutAggregationAuthorizationRequest;
        class PutConfigRuleRequest;
        class PutConfigurationAggregatorRequest;
        class PutConfigurationRecorderRequest;
        class PutDeliveryChannelRequest;
        class PutEvaluationsRequest;
        class PutOrganizationConfigRuleRequest;
        class PutRemediationConfigurationsRequest;
        class PutRetentionConfigurationRequest;
        class SelectResourceConfigRequest;
        class StartConfigRulesEvaluationRequest;
        class StartConfigurationRecorderRequest;
        class StartRemediationExecutionRequest;
        class StopConfigurationRecorderRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<BatchGetAggregateResourceConfigResult, Aws::Client::AWSError<ConfigServiceErrors>> BatchGetAggregateResourceConfigOutcome;
        typedef Aws::Utils::Outcome<BatchGetResourceConfigResult, Aws::Client::AWSError<ConfigServiceErrors>> BatchGetResourceConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteAggregationAuthorizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteConfigRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteConfigurationAggregatorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteConfigurationRecorderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteDeliveryChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteEvaluationResultsResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteEvaluationResultsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteOrganizationConfigRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeletePendingAggregationRequestOutcome;
        typedef Aws::Utils::Outcome<DeleteRemediationConfigurationResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteRemediationConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> DeleteRetentionConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeliverConfigSnapshotResult, Aws::Client::AWSError<ConfigServiceErrors>> DeliverConfigSnapshotOutcome;
        typedef Aws::Utils::Outcome<DescribeAggregateComplianceByConfigRulesResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeAggregateComplianceByConfigRulesOutcome;
        typedef Aws::Utils::Outcome<DescribeAggregationAuthorizationsResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeAggregationAuthorizationsOutcome;
        typedef Aws::Utils::Outcome<DescribeComplianceByConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeComplianceByConfigRuleOutcome;
        typedef Aws::Utils::Outcome<DescribeComplianceByResourceResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeComplianceByResourceOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigRuleEvaluationStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigRuleEvaluationStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigRulesResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigRulesOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationAggregatorSourcesStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigurationAggregatorSourcesStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationAggregatorsResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigurationAggregatorsOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationRecorderStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigurationRecorderStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationRecordersResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeConfigurationRecordersOutcome;
        typedef Aws::Utils::Outcome<DescribeDeliveryChannelStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeDeliveryChannelStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeDeliveryChannelsResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeDeliveryChannelsOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationConfigRuleStatusesResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeOrganizationConfigRuleStatusesOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationConfigRulesResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeOrganizationConfigRulesOutcome;
        typedef Aws::Utils::Outcome<DescribePendingAggregationRequestsResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribePendingAggregationRequestsOutcome;
        typedef Aws::Utils::Outcome<DescribeRemediationConfigurationsResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeRemediationConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribeRemediationExecutionStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeRemediationExecutionStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeRetentionConfigurationsResult, Aws::Client::AWSError<ConfigServiceErrors>> DescribeRetentionConfigurationsOutcome;
        typedef Aws::Utils::Outcome<GetAggregateComplianceDetailsByConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> GetAggregateComplianceDetailsByConfigRuleOutcome;
        typedef Aws::Utils::Outcome<GetAggregateConfigRuleComplianceSummaryResult, Aws::Client::AWSError<ConfigServiceErrors>> GetAggregateConfigRuleComplianceSummaryOutcome;
        typedef Aws::Utils::Outcome<GetAggregateDiscoveredResourceCountsResult, Aws::Client::AWSError<ConfigServiceErrors>> GetAggregateDiscoveredResourceCountsOutcome;
        typedef Aws::Utils::Outcome<GetAggregateResourceConfigResult, Aws::Client::AWSError<ConfigServiceErrors>> GetAggregateResourceConfigOutcome;
        typedef Aws::Utils::Outcome<GetComplianceDetailsByConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceDetailsByConfigRuleOutcome;
        typedef Aws::Utils::Outcome<GetComplianceDetailsByResourceResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceDetailsByResourceOutcome;
        typedef Aws::Utils::Outcome<GetComplianceSummaryByConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceSummaryByConfigRuleOutcome;
        typedef Aws::Utils::Outcome<GetComplianceSummaryByResourceTypeResult, Aws::Client::AWSError<ConfigServiceErrors>> GetComplianceSummaryByResourceTypeOutcome;
        typedef Aws::Utils::Outcome<GetDiscoveredResourceCountsResult, Aws::Client::AWSError<ConfigServiceErrors>> GetDiscoveredResourceCountsOutcome;
        typedef Aws::Utils::Outcome<GetOrganizationConfigRuleDetailedStatusResult, Aws::Client::AWSError<ConfigServiceErrors>> GetOrganizationConfigRuleDetailedStatusOutcome;
        typedef Aws::Utils::Outcome<GetResourceConfigHistoryResult, Aws::Client::AWSError<ConfigServiceErrors>> GetResourceConfigHistoryOutcome;
        typedef Aws::Utils::Outcome<ListAggregateDiscoveredResourcesResult, Aws::Client::AWSError<ConfigServiceErrors>> ListAggregateDiscoveredResourcesOutcome;
        typedef Aws::Utils::Outcome<ListDiscoveredResourcesResult, Aws::Client::AWSError<ConfigServiceErrors>> ListDiscoveredResourcesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<ConfigServiceErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutAggregationAuthorizationResult, Aws::Client::AWSError<ConfigServiceErrors>> PutAggregationAuthorizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> PutConfigRuleOutcome;
        typedef Aws::Utils::Outcome<PutConfigurationAggregatorResult, Aws::Client::AWSError<ConfigServiceErrors>> PutConfigurationAggregatorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> PutConfigurationRecorderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> PutDeliveryChannelOutcome;
        typedef Aws::Utils::Outcome<PutEvaluationsResult, Aws::Client::AWSError<ConfigServiceErrors>> PutEvaluationsOutcome;
        typedef Aws::Utils::Outcome<PutOrganizationConfigRuleResult, Aws::Client::AWSError<ConfigServiceErrors>> PutOrganizationConfigRuleOutcome;
        typedef Aws::Utils::Outcome<PutRemediationConfigurationsResult, Aws::Client::AWSError<ConfigServiceErrors>> PutRemediationConfigurationsOutcome;
        typedef Aws::Utils::Outcome<PutRetentionConfigurationResult, Aws::Client::AWSError<ConfigServiceErrors>> PutRetentionConfigurationOutcome;
        typedef Aws::Utils::Outcome<SelectResourceConfigResult, Aws::Client::AWSError<ConfigServiceErrors>> SelectResourceConfigOutcome;
        typedef Aws::Utils::Outcome<StartConfigRulesEvaluationResult, Aws::Client::AWSError<ConfigServiceErrors>> StartConfigRulesEvaluationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> StartConfigurationRecorderOutcome;
        typedef Aws::Utils::Outcome<StartRemediationExecutionResult, Aws::Client::AWSError<ConfigServiceErrors>> StartRemediationExecutionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> StopConfigurationRecorderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ConfigServiceErrors>> UntagResourceOutcome;

        typedef std::future<BatchGetAggregateResourceConfigOutcome> BatchGetAggregateResourceConfigOutcomeCallable;
        typedef std::future<BatchGetResourceConfigOutcome> BatchGetResourceConfigOutcomeCallable;
        typedef std::future<DeleteAggregationAuthorizationOutcome> DeleteAggregationAuthorizationOutcomeCallable;
        typedef std::future<DeleteConfigRuleOutcome> DeleteConfigRuleOutcomeCallable;
        typedef std::future<DeleteConfigurationAggregatorOutcome> DeleteConfigurationAggregatorOutcomeCallable;
        typedef std::future<DeleteConfigurationRecorderOutcome> DeleteConfigurationRecorderOutcomeCallable;
        typedef std::future<DeleteDeliveryChannelOutcome> DeleteDeliveryChannelOutcomeCallable;
        typedef std::future<DeleteEvaluationResultsOutcome> DeleteEvaluationResultsOutcomeCallable;
        typedef std::future<DeleteOrganizationConfigRuleOutcome> DeleteOrganizationConfigRuleOutcomeCallable;
        typedef std::future<DeletePendingAggregationRequestOutcome> DeletePendingAggregationRequestOutcomeCallable;
        typedef std::future<DeleteRemediationConfigurationOutcome> DeleteRemediationConfigurationOutcomeCallable;
        typedef std::future<DeleteRetentionConfigurationOutcome> DeleteRetentionConfigurationOutcomeCallable;
        typedef std::future<DeliverConfigSnapshotOutcome> DeliverConfigSnapshotOutcomeCallable;
        typedef std::future<DescribeAggregateComplianceByConfigRulesOutcome> DescribeAggregateComplianceByConfigRulesOutcomeCallable;
        typedef std::future<DescribeAggregationAuthorizationsOutcome> DescribeAggregationAuthorizationsOutcomeCallable;
        typedef std::future<DescribeComplianceByConfigRuleOutcome> DescribeComplianceByConfigRuleOutcomeCallable;
        typedef std::future<DescribeComplianceByResourceOutcome> DescribeComplianceByResourceOutcomeCallable;
        typedef std::future<DescribeConfigRuleEvaluationStatusOutcome> DescribeConfigRuleEvaluationStatusOutcomeCallable;
        typedef std::future<DescribeConfigRulesOutcome> DescribeConfigRulesOutcomeCallable;
        typedef std::future<DescribeConfigurationAggregatorSourcesStatusOutcome> DescribeConfigurationAggregatorSourcesStatusOutcomeCallable;
        typedef std::future<DescribeConfigurationAggregatorsOutcome> DescribeConfigurationAggregatorsOutcomeCallable;
        typedef std::future<DescribeConfigurationRecorderStatusOutcome> DescribeConfigurationRecorderStatusOutcomeCallable;
        typedef std::future<DescribeConfigurationRecordersOutcome> DescribeConfigurationRecordersOutcomeCallable;
        typedef std::future<DescribeDeliveryChannelStatusOutcome> DescribeDeliveryChannelStatusOutcomeCallable;
        typedef std::future<DescribeDeliveryChannelsOutcome> DescribeDeliveryChannelsOutcomeCallable;
        typedef std::future<DescribeOrganizationConfigRuleStatusesOutcome> DescribeOrganizationConfigRuleStatusesOutcomeCallable;
        typedef std::future<DescribeOrganizationConfigRulesOutcome> DescribeOrganizationConfigRulesOutcomeCallable;
        typedef std::future<DescribePendingAggregationRequestsOutcome> DescribePendingAggregationRequestsOutcomeCallable;
        typedef std::future<DescribeRemediationConfigurationsOutcome> DescribeRemediationConfigurationsOutcomeCallable;
        typedef std::future<DescribeRemediationExecutionStatusOutcome> DescribeRemediationExecutionStatusOutcomeCallable;
        typedef std::future<DescribeRetentionConfigurationsOutcome> DescribeRetentionConfigurationsOutcomeCallable;
        typedef std::future<GetAggregateComplianceDetailsByConfigRuleOutcome> GetAggregateComplianceDetailsByConfigRuleOutcomeCallable;
        typedef std::future<GetAggregateConfigRuleComplianceSummaryOutcome> GetAggregateConfigRuleComplianceSummaryOutcomeCallable;
        typedef std::future<GetAggregateDiscoveredResourceCountsOutcome> GetAggregateDiscoveredResourceCountsOutcomeCallable;
        typedef std::future<GetAggregateResourceConfigOutcome> GetAggregateResourceConfigOutcomeCallable;
        typedef std::future<GetComplianceDetailsByConfigRuleOutcome> GetComplianceDetailsByConfigRuleOutcomeCallable;
        typedef std::future<GetComplianceDetailsByResourceOutcome> GetComplianceDetailsByResourceOutcomeCallable;
        typedef std::future<GetComplianceSummaryByConfigRuleOutcome> GetComplianceSummaryByConfigRuleOutcomeCallable;
        typedef std::future<GetComplianceSummaryByResourceTypeOutcome> GetComplianceSummaryByResourceTypeOutcomeCallable;
        typedef std::future<GetDiscoveredResourceCountsOutcome> GetDiscoveredResourceCountsOutcomeCallable;
        typedef std::future<GetOrganizationConfigRuleDetailedStatusOutcome> GetOrganizationConfigRuleDetailedStatusOutcomeCallable;
        typedef std::future<GetResourceConfigHistoryOutcome> GetResourceConfigHistoryOutcomeCallable;
        typedef std::future<ListAggregateDiscoveredResourcesOutcome> ListAggregateDiscoveredResourcesOutcomeCallable;
        typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutAggregationAuthorizationOutcome> PutAggregationAuthorizationOutcomeCallable;
        typedef std::future<PutConfigRuleOutcome> PutConfigRuleOutcomeCallable;
        typedef std::future<PutConfigurationAggregatorOutcome> PutConfigurationAggregatorOutcomeCallable;
        typedef std::future<PutConfigurationRecorderOutcome> PutConfigurationRecorderOutcomeCallable;
        typedef std::future<PutDeliveryChannelOutcome> PutDeliveryChannelOutcomeCallable;
        typedef std::future<PutEvaluationsOutcome> PutEvaluationsOutcomeCallable;
        typedef std::future<PutOrganizationConfigRuleOutcome> PutOrganizationConfigRuleOutcomeCallable;
        typedef std::future<PutRemediationConfigurationsOutcome> PutRemediationConfigurationsOutcomeCallable;
        typedef std::future<PutRetentionConfigurationOutcome> PutRetentionConfigurationOutcomeCallable;
        typedef std::future<SelectResourceConfigOutcome> SelectResourceConfigOutcomeCallable;
        typedef std::future<StartConfigRulesEvaluationOutcome> StartConfigRulesEvaluationOutcomeCallable;
        typedef std::future<StartConfigurationRecorderOutcome> StartConfigurationRecorderOutcomeCallable;
        typedef std::future<StartRemediationExecutionOutcome> StartRemediationExecutionOutcomeCallable;
        typedef std::future<StopConfigurationRecorderOutcome> StopConfigurationRecorderOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class ConfigServiceClient;

    typedef std::function<void(const ConfigServiceClient*, const Model::BatchGetAggregateResourceConfigRequest&, const Model::BatchGetAggregateResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetAggregateResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::BatchGetResourceConfigRequest&, const Model::BatchGetResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteAggregationAuthorizationRequest&, const Model::DeleteAggregationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAggregationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigRuleRequest&, const Model::DeleteConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigurationAggregatorRequest&, const Model::DeleteConfigurationAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationAggregatorResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteConfigurationRecorderRequest&, const Model::DeleteConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteDeliveryChannelRequest&, const Model::DeleteDeliveryChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryChannelResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteEvaluationResultsRequest&, const Model::DeleteEvaluationResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEvaluationResultsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteOrganizationConfigRuleRequest&, const Model::DeleteOrganizationConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeletePendingAggregationRequestRequest&, const Model::DeletePendingAggregationRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePendingAggregationRequestResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteRemediationConfigurationRequest&, const Model::DeleteRemediationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRemediationConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeleteRetentionConfigurationRequest&, const Model::DeleteRetentionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetentionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DeliverConfigSnapshotRequest&, const Model::DeliverConfigSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeliverConfigSnapshotResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeAggregateComplianceByConfigRulesRequest&, const Model::DescribeAggregateComplianceByConfigRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAggregateComplianceByConfigRulesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeAggregationAuthorizationsRequest&, const Model::DescribeAggregationAuthorizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAggregationAuthorizationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeComplianceByConfigRuleRequest&, const Model::DescribeComplianceByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComplianceByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeComplianceByResourceRequest&, const Model::DescribeComplianceByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComplianceByResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigRuleEvaluationStatusRequest&, const Model::DescribeConfigRuleEvaluationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigRuleEvaluationStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigRulesRequest&, const Model::DescribeConfigRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigRulesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationAggregatorSourcesStatusRequest&, const Model::DescribeConfigurationAggregatorSourcesStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationAggregatorsRequest&, const Model::DescribeConfigurationAggregatorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationAggregatorsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationRecorderStatusRequest&, const Model::DescribeConfigurationRecorderStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRecorderStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeConfigurationRecordersRequest&, const Model::DescribeConfigurationRecordersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRecordersResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeDeliveryChannelStatusRequest&, const Model::DescribeDeliveryChannelStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryChannelStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeDeliveryChannelsRequest&, const Model::DescribeDeliveryChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryChannelsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeOrganizationConfigRuleStatusesRequest&, const Model::DescribeOrganizationConfigRuleStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigRuleStatusesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeOrganizationConfigRulesRequest&, const Model::DescribeOrganizationConfigRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigRulesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribePendingAggregationRequestsRequest&, const Model::DescribePendingAggregationRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingAggregationRequestsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeRemediationConfigurationsRequest&, const Model::DescribeRemediationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRemediationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeRemediationExecutionStatusRequest&, const Model::DescribeRemediationExecutionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRemediationExecutionStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::DescribeRetentionConfigurationsRequest&, const Model::DescribeRetentionConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRetentionConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateComplianceDetailsByConfigRuleRequest&, const Model::GetAggregateComplianceDetailsByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateConfigRuleComplianceSummaryRequest&, const Model::GetAggregateConfigRuleComplianceSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateDiscoveredResourceCountsRequest&, const Model::GetAggregateDiscoveredResourceCountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateDiscoveredResourceCountsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetAggregateResourceConfigRequest&, const Model::GetAggregateResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAggregateResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceDetailsByConfigRuleRequest&, const Model::GetComplianceDetailsByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailsByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceDetailsByResourceRequest&, const Model::GetComplianceDetailsByResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceDetailsByResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceSummaryByConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryByConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetComplianceSummaryByResourceTypeRequest&, const Model::GetComplianceSummaryByResourceTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryByResourceTypeResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetDiscoveredResourceCountsRequest&, const Model::GetDiscoveredResourceCountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiscoveredResourceCountsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetOrganizationConfigRuleDetailedStatusRequest&, const Model::GetOrganizationConfigRuleDetailedStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::GetResourceConfigHistoryRequest&, const Model::GetResourceConfigHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceConfigHistoryResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListAggregateDiscoveredResourcesRequest&, const Model::ListAggregateDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAggregateDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListDiscoveredResourcesRequest&, const Model::ListDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutAggregationAuthorizationRequest&, const Model::PutAggregationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAggregationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigRuleRequest&, const Model::PutConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigurationAggregatorRequest&, const Model::PutConfigurationAggregatorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationAggregatorResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutConfigurationRecorderRequest&, const Model::PutConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutDeliveryChannelRequest&, const Model::PutDeliveryChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliveryChannelResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutEvaluationsRequest&, const Model::PutEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEvaluationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutOrganizationConfigRuleRequest&, const Model::PutOrganizationConfigRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOrganizationConfigRuleResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutRemediationConfigurationsRequest&, const Model::PutRemediationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRemediationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::PutRetentionConfigurationRequest&, const Model::PutRetentionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::SelectResourceConfigRequest&, const Model::SelectResourceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SelectResourceConfigResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartConfigRulesEvaluationRequest&, const Model::StartConfigRulesEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigRulesEvaluationResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartConfigurationRecorderRequest&, const Model::StartConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StartRemediationExecutionRequest&, const Model::StartRemediationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRemediationExecutionResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::StopConfigurationRecorderRequest&, const Model::StopConfigurationRecorderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopConfigurationRecorderResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConfigServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <fullname>AWS Config</fullname> <p>AWS Config provides a way to keep track of
   * the configurations of all the AWS resources associated with your AWS account.
   * You can use AWS Config to get the current and historical configurations of each
   * AWS resource and also to get information about the relationship between the
   * resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance,
   * an Elastic Block Store (EBS) volume, an elastic network Interface (ENI), or a
   * security group. For a complete list of resources currently supported by AWS
   * Config, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
   * AWS Resources</a>.</p> <p>You can access and manage AWS Config through the AWS
   * Management Console, the AWS Command Line Interface (AWS CLI), the AWS Config
   * API, or the AWS SDKs for AWS Config. This reference guide contains documentation
   * for the AWS Config API and the AWS CLI commands that you can use to manage AWS
   * Config. The AWS Config API uses the Signature Version 4 protocol for signing
   * requests. For more information about how to sign a request with this protocol,
   * see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a>. For detailed information about AWS Config
   * features and their associated actions or commands, as well as how to work with
   * AWS Management Console, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What
   * Is AWS Config</a> in the <i>AWS Config Developer Guide</i>.</p>
   */
  class AWS_CONFIGSERVICE_API ConfigServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConfigServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ConfigServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Config Service"; }


        /**
         * <p>Returns the current configuration items for resources that are present in
         * your AWS Config aggregator. The operation also returns a list of resources that
         * are not processed in the current request. If there are no unprocessed resources,
         * the operation returns an empty <code>unprocessedResourceIdentifiers</code> list.
         * </p> <note> <ul> <li> <p>The API does not return results for deleted
         * resources.</p> </li> <li> <p> The API does not return tags and
         * relationships.</p> </li> </ul> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetAggregateResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAggregateResourceConfigOutcome BatchGetAggregateResourceConfig(const Model::BatchGetAggregateResourceConfigRequest& request) const;

        /**
         * <p>Returns the current configuration items for resources that are present in
         * your AWS Config aggregator. The operation also returns a list of resources that
         * are not processed in the current request. If there are no unprocessed resources,
         * the operation returns an empty <code>unprocessedResourceIdentifiers</code> list.
         * </p> <note> <ul> <li> <p>The API does not return results for deleted
         * resources.</p> </li> <li> <p> The API does not return tags and
         * relationships.</p> </li> </ul> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetAggregateResourceConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetAggregateResourceConfigOutcomeCallable BatchGetAggregateResourceConfigCallable(const Model::BatchGetAggregateResourceConfigRequest& request) const;

        /**
         * <p>Returns the current configuration items for resources that are present in
         * your AWS Config aggregator. The operation also returns a list of resources that
         * are not processed in the current request. If there are no unprocessed resources,
         * the operation returns an empty <code>unprocessedResourceIdentifiers</code> list.
         * </p> <note> <ul> <li> <p>The API does not return results for deleted
         * resources.</p> </li> <li> <p> The API does not return tags and
         * relationships.</p> </li> </ul> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetAggregateResourceConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetAggregateResourceConfigAsync(const Model::BatchGetAggregateResourceConfigRequest& request, const BatchGetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current configuration for one or more requested resources. The
         * operation also returns a list of resources that are not processed in the current
         * request. If there are no unprocessed resources, the operation returns an empty
         * unprocessedResourceKeys list. </p> <note> <ul> <li> <p>The API does not return
         * results for deleted resources.</p> </li> <li> <p> The API does not return any
         * tags for the requested resources. This information is filtered out of the
         * supplementaryConfiguration section of the API response.</p> </li> </ul>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetResourceConfigOutcome BatchGetResourceConfig(const Model::BatchGetResourceConfigRequest& request) const;

        /**
         * <p>Returns the current configuration for one or more requested resources. The
         * operation also returns a list of resources that are not processed in the current
         * request. If there are no unprocessed resources, the operation returns an empty
         * unprocessedResourceKeys list. </p> <note> <ul> <li> <p>The API does not return
         * results for deleted resources.</p> </li> <li> <p> The API does not return any
         * tags for the requested resources. This information is filtered out of the
         * supplementaryConfiguration section of the API response.</p> </li> </ul>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetResourceConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetResourceConfigOutcomeCallable BatchGetResourceConfigCallable(const Model::BatchGetResourceConfigRequest& request) const;

        /**
         * <p>Returns the current configuration for one or more requested resources. The
         * operation also returns a list of resources that are not processed in the current
         * request. If there are no unprocessed resources, the operation returns an empty
         * unprocessedResourceKeys list. </p> <note> <ul> <li> <p>The API does not return
         * results for deleted resources.</p> </li> <li> <p> The API does not return any
         * tags for the requested resources. This information is filtered out of the
         * supplementaryConfiguration section of the API response.</p> </li> </ul>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetResourceConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetResourceConfigAsync(const Model::BatchGetResourceConfigRequest& request, const BatchGetResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the authorization granted to the specified configuration aggregator
         * account in a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteAggregationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAggregationAuthorizationOutcome DeleteAggregationAuthorization(const Model::DeleteAggregationAuthorizationRequest& request) const;

        /**
         * <p>Deletes the authorization granted to the specified configuration aggregator
         * account in a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteAggregationAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAggregationAuthorizationOutcomeCallable DeleteAggregationAuthorizationCallable(const Model::DeleteAggregationAuthorizationRequest& request) const;

        /**
         * <p>Deletes the authorization granted to the specified configuration aggregator
         * account in a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteAggregationAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAggregationAuthorizationAsync(const Model::DeleteAggregationAuthorizationRequest& request, const DeleteAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified AWS Config rule and all of its evaluation results.</p>
         * <p>AWS Config sets the state of a rule to <code>DELETING</code> until the
         * deletion is complete. You cannot update a rule while it is in this state. If you
         * make a <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for
         * the rule, you will receive a <code>ResourceInUseException</code>.</p> <p>You can
         * check the state of a rule by using the <code>DescribeConfigRules</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigRuleOutcome DeleteConfigRule(const Model::DeleteConfigRuleRequest& request) const;

        /**
         * <p>Deletes the specified AWS Config rule and all of its evaluation results.</p>
         * <p>AWS Config sets the state of a rule to <code>DELETING</code> until the
         * deletion is complete. You cannot update a rule while it is in this state. If you
         * make a <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for
         * the rule, you will receive a <code>ResourceInUseException</code>.</p> <p>You can
         * check the state of a rule by using the <code>DescribeConfigRules</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigRuleOutcomeCallable DeleteConfigRuleCallable(const Model::DeleteConfigRuleRequest& request) const;

        /**
         * <p>Deletes the specified AWS Config rule and all of its evaluation results.</p>
         * <p>AWS Config sets the state of a rule to <code>DELETING</code> until the
         * deletion is complete. You cannot update a rule while it is in this state. If you
         * make a <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for
         * the rule, you will receive a <code>ResourceInUseException</code>.</p> <p>You can
         * check the state of a rule by using the <code>DescribeConfigRules</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigRuleAsync(const Model::DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified configuration aggregator and the aggregated data
         * associated with the aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationAggregatorOutcome DeleteConfigurationAggregator(const Model::DeleteConfigurationAggregatorRequest& request) const;

        /**
         * <p>Deletes the specified configuration aggregator and the aggregated data
         * associated with the aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationAggregator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationAggregatorOutcomeCallable DeleteConfigurationAggregatorCallable(const Model::DeleteConfigurationAggregatorRequest& request) const;

        /**
         * <p>Deletes the specified configuration aggregator and the aggregated data
         * associated with the aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationAggregator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationAggregatorAsync(const Model::DeleteConfigurationAggregatorRequest& request, const DeleteConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the configuration recorder.</p> <p>After the configuration recorder
         * is deleted, AWS Config will not record resource configuration changes until you
         * create a new configuration recorder.</p> <p>This action does not delete the
         * configuration information that was previously recorded. You will be able to
         * access the previously recorded information by using the
         * <code>GetResourceConfigHistory</code> action, but you will not be able to access
         * this information in the AWS Config console until you create a new configuration
         * recorder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationRecorderOutcome DeleteConfigurationRecorder(const Model::DeleteConfigurationRecorderRequest& request) const;

        /**
         * <p>Deletes the configuration recorder.</p> <p>After the configuration recorder
         * is deleted, AWS Config will not record resource configuration changes until you
         * create a new configuration recorder.</p> <p>This action does not delete the
         * configuration information that was previously recorded. You will be able to
         * access the previously recorded information by using the
         * <code>GetResourceConfigHistory</code> action, but you will not be able to access
         * this information in the AWS Config console until you create a new configuration
         * recorder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationRecorderOutcomeCallable DeleteConfigurationRecorderCallable(const Model::DeleteConfigurationRecorderRequest& request) const;

        /**
         * <p>Deletes the configuration recorder.</p> <p>After the configuration recorder
         * is deleted, AWS Config will not record resource configuration changes until you
         * create a new configuration recorder.</p> <p>This action does not delete the
         * configuration information that was previously recorded. You will be able to
         * access the previously recorded information by using the
         * <code>GetResourceConfigHistory</code> action, but you will not be able to access
         * this information in the AWS Config console until you create a new configuration
         * recorder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationRecorderAsync(const Model::DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteDeliveryChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeliveryChannelOutcome DeleteDeliveryChannel(const Model::DeleteDeliveryChannelRequest& request) const;

        /**
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteDeliveryChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeliveryChannelOutcomeCallable DeleteDeliveryChannelCallable(const Model::DeleteDeliveryChannelRequest& request) const;

        /**
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteDeliveryChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeliveryChannelAsync(const Model::DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the evaluation results for the specified AWS Config rule. You can
         * specify one AWS Config rule per request. After you delete the evaluation
         * results, you can call the <a>StartConfigRulesEvaluation</a> API to start
         * evaluating your AWS resources against the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteEvaluationResults">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEvaluationResultsOutcome DeleteEvaluationResults(const Model::DeleteEvaluationResultsRequest& request) const;

        /**
         * <p>Deletes the evaluation results for the specified AWS Config rule. You can
         * specify one AWS Config rule per request. After you delete the evaluation
         * results, you can call the <a>StartConfigRulesEvaluation</a> API to start
         * evaluating your AWS resources against the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteEvaluationResults">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEvaluationResultsOutcomeCallable DeleteEvaluationResultsCallable(const Model::DeleteEvaluationResultsRequest& request) const;

        /**
         * <p>Deletes the evaluation results for the specified AWS Config rule. You can
         * specify one AWS Config rule per request. After you delete the evaluation
         * results, you can call the <a>StartConfigRulesEvaluation</a> API to start
         * evaluating your AWS resources against the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteEvaluationResults">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEvaluationResultsAsync(const Model::DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteOrganizationConfigRuleOutcome DeleteOrganizationConfigRule(const Model::DeleteOrganizationConfigRuleRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOrganizationConfigRuleOutcomeCallable DeleteOrganizationConfigRuleCallable(const Model::DeleteOrganizationConfigRuleRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOrganizationConfigRuleAsync(const Model::DeleteOrganizationConfigRuleRequest& request, const DeleteOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes pending authorization requests for a specified aggregator account in
         * a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeletePendingAggregationRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePendingAggregationRequestOutcome DeletePendingAggregationRequest(const Model::DeletePendingAggregationRequestRequest& request) const;

        /**
         * <p>Deletes pending authorization requests for a specified aggregator account in
         * a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeletePendingAggregationRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePendingAggregationRequestOutcomeCallable DeletePendingAggregationRequestCallable(const Model::DeletePendingAggregationRequestRequest& request) const;

        /**
         * <p>Deletes pending authorization requests for a specified aggregator account in
         * a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeletePendingAggregationRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePendingAggregationRequestAsync(const Model::DeletePendingAggregationRequestRequest& request, const DeletePendingAggregationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the remediation configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRemediationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRemediationConfigurationOutcome DeleteRemediationConfiguration(const Model::DeleteRemediationConfigurationRequest& request) const;

        /**
         * <p>Deletes the remediation configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRemediationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRemediationConfigurationOutcomeCallable DeleteRemediationConfigurationCallable(const Model::DeleteRemediationConfigurationRequest& request) const;

        /**
         * <p>Deletes the remediation configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRemediationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRemediationConfigurationAsync(const Model::DeleteRemediationConfigurationRequest& request, const DeleteRemediationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the retention configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRetentionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionConfigurationOutcome DeleteRetentionConfiguration(const Model::DeleteRetentionConfigurationRequest& request) const;

        /**
         * <p>Deletes the retention configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRetentionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRetentionConfigurationOutcomeCallable DeleteRetentionConfigurationCallable(const Model::DeleteRetentionConfigurationRequest& request) const;

        /**
         * <p>Deletes the retention configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRetentionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRetentionConfigurationAsync(const Model::DeleteRetentionConfigurationRequest& request, const DeleteRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the
         * specified delivery channel. After the delivery has started, AWS Config sends the
         * following notifications using an Amazon SNS topic that you have specified.</p>
         * <ul> <li> <p>Notification of the start of the delivery.</p> </li> <li>
         * <p>Notification of the completion of the delivery, if the delivery was
         * successfully completed.</p> </li> <li> <p>Notification of delivery failure, if
         * the delivery failed.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliverConfigSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeliverConfigSnapshotOutcome DeliverConfigSnapshot(const Model::DeliverConfigSnapshotRequest& request) const;

        /**
         * <p>Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the
         * specified delivery channel. After the delivery has started, AWS Config sends the
         * following notifications using an Amazon SNS topic that you have specified.</p>
         * <ul> <li> <p>Notification of the start of the delivery.</p> </li> <li>
         * <p>Notification of the completion of the delivery, if the delivery was
         * successfully completed.</p> </li> <li> <p>Notification of delivery failure, if
         * the delivery failed.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliverConfigSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeliverConfigSnapshotOutcomeCallable DeliverConfigSnapshotCallable(const Model::DeliverConfigSnapshotRequest& request) const;

        /**
         * <p>Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the
         * specified delivery channel. After the delivery has started, AWS Config sends the
         * following notifications using an Amazon SNS topic that you have specified.</p>
         * <ul> <li> <p>Notification of the start of the delivery.</p> </li> <li>
         * <p>Notification of the completion of the delivery, if the delivery was
         * successfully completed.</p> </li> <li> <p>Notification of delivery failure, if
         * the delivery failed.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliverConfigSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeliverConfigSnapshotAsync(const Model::DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of compliant and noncompliant rules with the number of
         * resources for compliant and noncompliant rules. </p> <note> <p>The results can
         * return an empty result page, but if you have a nextToken, the results are
         * displayed on the next page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregateComplianceByConfigRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAggregateComplianceByConfigRulesOutcome DescribeAggregateComplianceByConfigRules(const Model::DescribeAggregateComplianceByConfigRulesRequest& request) const;

        /**
         * <p>Returns a list of compliant and noncompliant rules with the number of
         * resources for compliant and noncompliant rules. </p> <note> <p>The results can
         * return an empty result page, but if you have a nextToken, the results are
         * displayed on the next page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregateComplianceByConfigRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAggregateComplianceByConfigRulesOutcomeCallable DescribeAggregateComplianceByConfigRulesCallable(const Model::DescribeAggregateComplianceByConfigRulesRequest& request) const;

        /**
         * <p>Returns a list of compliant and noncompliant rules with the number of
         * resources for compliant and noncompliant rules. </p> <note> <p>The results can
         * return an empty result page, but if you have a nextToken, the results are
         * displayed on the next page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregateComplianceByConfigRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAggregateComplianceByConfigRulesAsync(const Model::DescribeAggregateComplianceByConfigRulesRequest& request, const DescribeAggregateComplianceByConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of authorizations granted to various aggregator accounts and
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregationAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAggregationAuthorizationsOutcome DescribeAggregationAuthorizations(const Model::DescribeAggregationAuthorizationsRequest& request) const;

        /**
         * <p>Returns a list of authorizations granted to various aggregator accounts and
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregationAuthorizations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAggregationAuthorizationsOutcomeCallable DescribeAggregationAuthorizationsCallable(const Model::DescribeAggregationAuthorizationsRequest& request) const;

        /**
         * <p>Returns a list of authorizations granted to various aggregator accounts and
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregationAuthorizations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAggregationAuthorizationsAsync(const Model::DescribeAggregationAuthorizationsRequest& request, const DescribeAggregationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates whether the specified AWS Config rules are compliant. If a rule is
         * noncompliant, this action returns the number of AWS resources that do not comply
         * with the rule.</p> <p>A rule is compliant if all of the evaluated resources
         * comply with it. It is noncompliant if any of these resources do not comply.</p>
         * <p>If AWS Config has no current evaluation results for the rule, it returns
         * <code>INSUFFICIENT_DATA</code>. This result might indicate one of the following
         * conditions:</p> <ul> <li> <p>AWS Config has never invoked an evaluation for the
         * rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComplianceByConfigRuleOutcome DescribeComplianceByConfigRule(const Model::DescribeComplianceByConfigRuleRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS Config rules are compliant. If a rule is
         * noncompliant, this action returns the number of AWS resources that do not comply
         * with the rule.</p> <p>A rule is compliant if all of the evaluated resources
         * comply with it. It is noncompliant if any of these resources do not comply.</p>
         * <p>If AWS Config has no current evaluation results for the rule, it returns
         * <code>INSUFFICIENT_DATA</code>. This result might indicate one of the following
         * conditions:</p> <ul> <li> <p>AWS Config has never invoked an evaluation for the
         * rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComplianceByConfigRuleOutcomeCallable DescribeComplianceByConfigRuleCallable(const Model::DescribeComplianceByConfigRuleRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS Config rules are compliant. If a rule is
         * noncompliant, this action returns the number of AWS resources that do not comply
         * with the rule.</p> <p>A rule is compliant if all of the evaluated resources
         * comply with it. It is noncompliant if any of these resources do not comply.</p>
         * <p>If AWS Config has no current evaluation results for the rule, it returns
         * <code>INSUFFICIENT_DATA</code>. This result might indicate one of the following
         * conditions:</p> <ul> <li> <p>AWS Config has never invoked an evaluation for the
         * rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComplianceByConfigRuleAsync(const Model::DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates whether the specified AWS resources are compliant. If a resource is
         * noncompliant, this action returns the number of AWS Config rules that the
         * resource does not comply with.</p> <p>A resource is compliant if it complies
         * with all the AWS Config rules that evaluate it. It is noncompliant if it does
         * not comply with one or more of these rules.</p> <p>If AWS Config has no current
         * evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>.
         * This result might indicate one of the following conditions about the rules that
         * evaluate the resource:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComplianceByResourceOutcome DescribeComplianceByResource(const Model::DescribeComplianceByResourceRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS resources are compliant. If a resource is
         * noncompliant, this action returns the number of AWS Config rules that the
         * resource does not comply with.</p> <p>A resource is compliant if it complies
         * with all the AWS Config rules that evaluate it. It is noncompliant if it does
         * not comply with one or more of these rules.</p> <p>If AWS Config has no current
         * evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>.
         * This result might indicate one of the following conditions about the rules that
         * evaluate the resource:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComplianceByResourceOutcomeCallable DescribeComplianceByResourceCallable(const Model::DescribeComplianceByResourceRequest& request) const;

        /**
         * <p>Indicates whether the specified AWS resources are compliant. If a resource is
         * noncompliant, this action returns the number of AWS Config rules that the
         * resource does not comply with.</p> <p>A resource is compliant if it complies
         * with all the AWS Config rules that evaluate it. It is noncompliant if it does
         * not comply with one or more of these rules.</p> <p>If AWS Config has no current
         * evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>.
         * This result might indicate one of the following conditions about the rules that
         * evaluate the resource:</p> <ul> <li> <p>AWS Config has never invoked an
         * evaluation for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's AWS Lambda
         * function is failing to send evaluation results to AWS Config. Verify that the
         * role that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the AWS Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's AWS
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComplianceByResourceAsync(const Model::DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns status information for each of your AWS managed Config rules. The
         * status includes information such as the last time AWS Config invoked the rule,
         * the last time AWS Config failed to invoke the rule, and the related error for
         * the last failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigRuleEvaluationStatusOutcome DescribeConfigRuleEvaluationStatus(const Model::DescribeConfigRuleEvaluationStatusRequest& request) const;

        /**
         * <p>Returns status information for each of your AWS managed Config rules. The
         * status includes information such as the last time AWS Config invoked the rule,
         * the last time AWS Config failed to invoke the rule, and the related error for
         * the last failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigRuleEvaluationStatusOutcomeCallable DescribeConfigRuleEvaluationStatusCallable(const Model::DescribeConfigRuleEvaluationStatusRequest& request) const;

        /**
         * <p>Returns status information for each of your AWS managed Config rules. The
         * status includes information such as the last time AWS Config invoked the rule,
         * the last time AWS Config failed to invoke the rule, and the related error for
         * the last failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigRuleEvaluationStatusAsync(const Model::DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about your AWS Config rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigRulesOutcome DescribeConfigRules(const Model::DescribeConfigRulesRequest& request) const;

        /**
         * <p>Returns details about your AWS Config rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigRulesOutcomeCallable DescribeConfigRulesCallable(const Model::DescribeConfigRulesRequest& request) const;

        /**
         * <p>Returns details about your AWS Config rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigRulesAsync(const Model::DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns status information for sources within an aggregator. The status
         * includes information about the last time AWS Config verified authorization
         * between the source account and an aggregator account. In case of a failure, the
         * status contains the related error code or message. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregatorSourcesStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationAggregatorSourcesStatusOutcome DescribeConfigurationAggregatorSourcesStatus(const Model::DescribeConfigurationAggregatorSourcesStatusRequest& request) const;

        /**
         * <p>Returns status information for sources within an aggregator. The status
         * includes information about the last time AWS Config verified authorization
         * between the source account and an aggregator account. In case of a failure, the
         * status contains the related error code or message. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregatorSourcesStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationAggregatorSourcesStatusOutcomeCallable DescribeConfigurationAggregatorSourcesStatusCallable(const Model::DescribeConfigurationAggregatorSourcesStatusRequest& request) const;

        /**
         * <p>Returns status information for sources within an aggregator. The status
         * includes information about the last time AWS Config verified authorization
         * between the source account and an aggregator account. In case of a failure, the
         * status contains the related error code or message. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregatorSourcesStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationAggregatorSourcesStatusAsync(const Model::DescribeConfigurationAggregatorSourcesStatusRequest& request, const DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of one or more configuration aggregators. If the
         * configuration aggregator is not specified, this action returns the details for
         * all the configuration aggregators associated with the account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregators">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationAggregatorsOutcome DescribeConfigurationAggregators(const Model::DescribeConfigurationAggregatorsRequest& request) const;

        /**
         * <p>Returns the details of one or more configuration aggregators. If the
         * configuration aggregator is not specified, this action returns the details for
         * all the configuration aggregators associated with the account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationAggregatorsOutcomeCallable DescribeConfigurationAggregatorsCallable(const Model::DescribeConfigurationAggregatorsRequest& request) const;

        /**
         * <p>Returns the details of one or more configuration aggregators. If the
         * configuration aggregator is not specified, this action returns the details for
         * all the configuration aggregators associated with the account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationAggregatorsAsync(const Model::DescribeConfigurationAggregatorsRequest& request, const DescribeConfigurationAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of the specified configuration recorder. If a
         * configuration recorder is not specified, this action returns the status of all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorderStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRecorderStatusOutcome DescribeConfigurationRecorderStatus(const Model::DescribeConfigurationRecorderStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified configuration recorder. If a
         * configuration recorder is not specified, this action returns the status of all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorderStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRecorderStatusOutcomeCallable DescribeConfigurationRecorderStatusCallable(const Model::DescribeConfigurationRecorderStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified configuration recorder. If a
         * configuration recorder is not specified, this action returns the status of all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorderStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRecorderStatusAsync(const Model::DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRecordersOutcome DescribeConfigurationRecorders(const Model::DescribeConfigurationRecordersRequest& request) const;

        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRecordersOutcomeCallable DescribeConfigurationRecordersCallable(const Model::DescribeConfigurationRecordersRequest& request) const;

        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p> <note> <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRecordersAsync(const Model::DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of the specified delivery channel. If a delivery
         * channel is not specified, this action returns the current status of all delivery
         * channels associated with the account.</p> <note> <p>Currently, you can specify
         * only one delivery channel per region in your account.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeliveryChannelStatusOutcome DescribeDeliveryChannelStatus(const Model::DescribeDeliveryChannelStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified delivery channel. If a delivery
         * channel is not specified, this action returns the current status of all delivery
         * channels associated with the account.</p> <note> <p>Currently, you can specify
         * only one delivery channel per region in your account.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeliveryChannelStatusOutcomeCallable DescribeDeliveryChannelStatusCallable(const Model::DescribeDeliveryChannelStatusRequest& request) const;

        /**
         * <p>Returns the current status of the specified delivery channel. If a delivery
         * channel is not specified, this action returns the current status of all delivery
         * channels associated with the account.</p> <note> <p>Currently, you can specify
         * only one delivery channel per region in your account.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeliveryChannelStatusAsync(const Model::DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about the specified delivery channel. If a delivery channel
         * is not specified, this action returns the details of all delivery channels
         * associated with the account.</p> <note> <p>Currently, you can specify only one
         * delivery channel per region in your account.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeliveryChannelsOutcome DescribeDeliveryChannels(const Model::DescribeDeliveryChannelsRequest& request) const;

        /**
         * <p>Returns details about the specified delivery channel. If a delivery channel
         * is not specified, this action returns the details of all delivery channels
         * associated with the account.</p> <note> <p>Currently, you can specify only one
         * delivery channel per region in your account.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeliveryChannelsOutcomeCallable DescribeDeliveryChannelsCallable(const Model::DescribeDeliveryChannelsRequest& request) const;

        /**
         * <p>Returns details about the specified delivery channel. If a delivery channel
         * is not specified, this action returns the details of all delivery channels
         * associated with the account.</p> <note> <p>Currently, you can specify only one
         * delivery channel per region in your account.</p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeliveryChannelsAsync(const Model::DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeOrganizationConfigRuleStatusesOutcome DescribeOrganizationConfigRuleStatuses(const Model::DescribeOrganizationConfigRuleStatusesRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigRuleStatusesOutcomeCallable DescribeOrganizationConfigRuleStatusesCallable(const Model::DescribeOrganizationConfigRuleStatusesRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigRuleStatusesAsync(const Model::DescribeOrganizationConfigRuleStatusesRequest& request, const DescribeOrganizationConfigRuleStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DescribeOrganizationConfigRulesOutcome DescribeOrganizationConfigRules(const Model::DescribeOrganizationConfigRulesRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigRulesOutcomeCallable DescribeOrganizationConfigRulesCallable(const Model::DescribeOrganizationConfigRulesRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigRulesAsync(const Model::DescribeOrganizationConfigRulesRequest& request, const DescribeOrganizationConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all pending aggregation requests.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribePendingAggregationRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingAggregationRequestsOutcome DescribePendingAggregationRequests(const Model::DescribePendingAggregationRequestsRequest& request) const;

        /**
         * <p>Returns a list of all pending aggregation requests.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribePendingAggregationRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePendingAggregationRequestsOutcomeCallable DescribePendingAggregationRequestsCallable(const Model::DescribePendingAggregationRequestsRequest& request) const;

        /**
         * <p>Returns a list of all pending aggregation requests.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribePendingAggregationRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePendingAggregationRequestsAsync(const Model::DescribePendingAggregationRequestsRequest& request, const DescribePendingAggregationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of one or more remediation configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRemediationConfigurationsOutcome DescribeRemediationConfigurations(const Model::DescribeRemediationConfigurationsRequest& request) const;

        /**
         * <p>Returns the details of one or more remediation configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRemediationConfigurationsOutcomeCallable DescribeRemediationConfigurationsCallable(const Model::DescribeRemediationConfigurationsRequest& request) const;

        /**
         * <p>Returns the details of one or more remediation configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRemediationConfigurationsAsync(const Model::DescribeRemediationConfigurationsRequest& request, const DescribeRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a detailed view of a Remediation Execution for a set of resources
         * including state, timestamps for when steps for the remediation execution occur,
         * and any error messages for steps that have failed. When you specify the limit
         * and the next token, you receive a paginated response.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationExecutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRemediationExecutionStatusOutcome DescribeRemediationExecutionStatus(const Model::DescribeRemediationExecutionStatusRequest& request) const;

        /**
         * <p>Provides a detailed view of a Remediation Execution for a set of resources
         * including state, timestamps for when steps for the remediation execution occur,
         * and any error messages for steps that have failed. When you specify the limit
         * and the next token, you receive a paginated response.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationExecutionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRemediationExecutionStatusOutcomeCallable DescribeRemediationExecutionStatusCallable(const Model::DescribeRemediationExecutionStatusRequest& request) const;

        /**
         * <p>Provides a detailed view of a Remediation Execution for a set of resources
         * including state, timestamps for when steps for the remediation execution occur,
         * and any error messages for steps that have failed. When you specify the limit
         * and the next token, you receive a paginated response.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationExecutionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRemediationExecutionStatusAsync(const Model::DescribeRemediationExecutionStatusRequest& request, const DescribeRemediationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of one or more retention configurations. If the retention
         * configuration name is not specified, this action returns the details for all the
         * retention configurations for that account.</p> <note> <p>Currently, AWS Config
         * supports only one retention configuration per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRetentionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRetentionConfigurationsOutcome DescribeRetentionConfigurations(const Model::DescribeRetentionConfigurationsRequest& request) const;

        /**
         * <p>Returns the details of one or more retention configurations. If the retention
         * configuration name is not specified, this action returns the details for all the
         * retention configurations for that account.</p> <note> <p>Currently, AWS Config
         * supports only one retention configuration per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRetentionConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRetentionConfigurationsOutcomeCallable DescribeRetentionConfigurationsCallable(const Model::DescribeRetentionConfigurationsRequest& request) const;

        /**
         * <p>Returns the details of one or more retention configurations. If the retention
         * configuration name is not specified, this action returns the details for all the
         * retention configurations for that account.</p> <note> <p>Currently, AWS Config
         * supports only one retention configuration per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRetentionConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRetentionConfigurationsAsync(const Model::DescribeRetentionConfigurationsRequest& request, const DescribeRetentionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule for a
         * specific resource in a rule. The results indicate which AWS resources were
         * evaluated by the rule, when each resource was last evaluated, and whether each
         * resource complies with the rule. </p> <note> <p>The results can return an empty
         * result page. But if you have a nextToken, the results are displayed on the next
         * page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateComplianceDetailsByConfigRuleOutcome GetAggregateComplianceDetailsByConfigRule(const Model::GetAggregateComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule for a
         * specific resource in a rule. The results indicate which AWS resources were
         * evaluated by the rule, when each resource was last evaluated, and whether each
         * resource complies with the rule. </p> <note> <p>The results can return an empty
         * result page. But if you have a nextToken, the results are displayed on the next
         * page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAggregateComplianceDetailsByConfigRuleOutcomeCallable GetAggregateComplianceDetailsByConfigRuleCallable(const Model::GetAggregateComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule for a
         * specific resource in a rule. The results indicate which AWS resources were
         * evaluated by the rule, when each resource was last evaluated, and whether each
         * resource complies with the rule. </p> <note> <p>The results can return an empty
         * result page. But if you have a nextToken, the results are displayed on the next
         * page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAggregateComplianceDetailsByConfigRuleAsync(const Model::GetAggregateComplianceDetailsByConfigRuleRequest& request, const GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of compliant and noncompliant rules for one or more
         * accounts and regions in an aggregator.</p> <note> <p>The results can return an
         * empty result page, but if you have a nextToken, the results are displayed on the
         * next page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateConfigRuleComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateConfigRuleComplianceSummaryOutcome GetAggregateConfigRuleComplianceSummary(const Model::GetAggregateConfigRuleComplianceSummaryRequest& request) const;

        /**
         * <p>Returns the number of compliant and noncompliant rules for one or more
         * accounts and regions in an aggregator.</p> <note> <p>The results can return an
         * empty result page, but if you have a nextToken, the results are displayed on the
         * next page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateConfigRuleComplianceSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAggregateConfigRuleComplianceSummaryOutcomeCallable GetAggregateConfigRuleComplianceSummaryCallable(const Model::GetAggregateConfigRuleComplianceSummaryRequest& request) const;

        /**
         * <p>Returns the number of compliant and noncompliant rules for one or more
         * accounts and regions in an aggregator.</p> <note> <p>The results can return an
         * empty result page, but if you have a nextToken, the results are displayed on the
         * next page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateConfigRuleComplianceSummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAggregateConfigRuleComplianceSummaryAsync(const Model::GetAggregateConfigRuleComplianceSummaryRequest& request, const GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the resource counts across accounts and regions that are present in
         * your AWS Config aggregator. You can request the resource counts by providing
         * filters and GroupByKey.</p> <p>For example, if the input contains accountID
         * 12345678910 and region us-east-1 in filters, the API returns the count of
         * resources in account ID 12345678910 and region us-east-1. If the input contains
         * ACCOUNT_ID as a GroupByKey, the API returns resource counts for all source
         * accounts that are present in your aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateDiscoveredResourceCountsOutcome GetAggregateDiscoveredResourceCounts(const Model::GetAggregateDiscoveredResourceCountsRequest& request) const;

        /**
         * <p>Returns the resource counts across accounts and regions that are present in
         * your AWS Config aggregator. You can request the resource counts by providing
         * filters and GroupByKey.</p> <p>For example, if the input contains accountID
         * 12345678910 and region us-east-1 in filters, the API returns the count of
         * resources in account ID 12345678910 and region us-east-1. If the input contains
         * ACCOUNT_ID as a GroupByKey, the API returns resource counts for all source
         * accounts that are present in your aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAggregateDiscoveredResourceCountsOutcomeCallable GetAggregateDiscoveredResourceCountsCallable(const Model::GetAggregateDiscoveredResourceCountsRequest& request) const;

        /**
         * <p>Returns the resource counts across accounts and regions that are present in
         * your AWS Config aggregator. You can request the resource counts by providing
         * filters and GroupByKey.</p> <p>For example, if the input contains accountID
         * 12345678910 and region us-east-1 in filters, the API returns the count of
         * resources in account ID 12345678910 and region us-east-1. If the input contains
         * ACCOUNT_ID as a GroupByKey, the API returns resource counts for all source
         * accounts that are present in your aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAggregateDiscoveredResourceCountsAsync(const Model::GetAggregateDiscoveredResourceCountsRequest& request, const GetAggregateDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration item that is aggregated for your specific resource in a
         * specific source account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateResourceConfigOutcome GetAggregateResourceConfig(const Model::GetAggregateResourceConfigRequest& request) const;

        /**
         * <p>Returns configuration item that is aggregated for your specific resource in a
         * specific source account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateResourceConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAggregateResourceConfigOutcomeCallable GetAggregateResourceConfigCallable(const Model::GetAggregateResourceConfigRequest& request) const;

        /**
         * <p>Returns configuration item that is aggregated for your specific resource in a
         * specific source account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateResourceConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAggregateResourceConfigAsync(const Model::GetAggregateResourceConfigRequest& request, const GetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule. The results
         * indicate which AWS resources were evaluated by the rule, when each resource was
         * last evaluated, and whether each resource complies with the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceDetailsByConfigRuleOutcome GetComplianceDetailsByConfigRule(const Model::GetComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule. The results
         * indicate which AWS resources were evaluated by the rule, when each resource was
         * last evaluated, and whether each resource complies with the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceDetailsByConfigRuleOutcomeCallable GetComplianceDetailsByConfigRuleCallable(const Model::GetComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS Config rule. The results
         * indicate which AWS resources were evaluated by the rule, when each resource was
         * last evaluated, and whether each resource complies with the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceDetailsByConfigRuleAsync(const Model::GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the evaluation results for the specified AWS resource. The results
         * indicate which AWS Config rules were used to evaluate the resource, when each
         * rule was last used, and whether the resource complies with each
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceDetailsByResourceOutcome GetComplianceDetailsByResource(const Model::GetComplianceDetailsByResourceRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS resource. The results
         * indicate which AWS Config rules were used to evaluate the resource, when each
         * rule was last used, and whether the resource complies with each
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceDetailsByResourceOutcomeCallable GetComplianceDetailsByResourceCallable(const Model::GetComplianceDetailsByResourceRequest& request) const;

        /**
         * <p>Returns the evaluation results for the specified AWS resource. The results
         * indicate which AWS Config rules were used to evaluate the resource, when each
         * rule was last used, and whether the resource complies with each
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceDetailsByResourceAsync(const Model::GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of AWS Config rules that are compliant and noncompliant,
         * up to a maximum of 25 for each.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryByConfigRuleOutcome GetComplianceSummaryByConfigRule() const;

        /**
         * <p>Returns the number of AWS Config rules that are compliant and noncompliant,
         * up to a maximum of 25 for each.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByConfigRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceSummaryByConfigRuleOutcomeCallable GetComplianceSummaryByConfigRuleCallable() const;

        /**
         * <p>Returns the number of AWS Config rules that are compliant and noncompliant,
         * up to a maximum of 25 for each.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByConfigRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceSummaryByConfigRuleAsync(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Returns the number of resources that are compliant and the number that are
         * noncompliant. You can specify one or more resource types to get these numbers
         * for each resource type. The maximum number returned is 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByResourceType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryByResourceTypeOutcome GetComplianceSummaryByResourceType(const Model::GetComplianceSummaryByResourceTypeRequest& request) const;

        /**
         * <p>Returns the number of resources that are compliant and the number that are
         * noncompliant. You can specify one or more resource types to get these numbers
         * for each resource type. The maximum number returned is 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByResourceType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceSummaryByResourceTypeOutcomeCallable GetComplianceSummaryByResourceTypeCallable(const Model::GetComplianceSummaryByResourceTypeRequest& request) const;

        /**
         * <p>Returns the number of resources that are compliant and the number that are
         * noncompliant. You can specify one or more resource types to get these numbers
         * for each resource type. The maximum number returned is 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByResourceType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceSummaryByResourceTypeAsync(const Model::GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the resource types, the number of each resource type, and the total
         * number of resources that AWS Config is recording in this region for your AWS
         * account. </p> <p class="title"> <b>Example</b> </p> <ol> <li> <p>AWS Config is
         * recording three resource types in the US East (Ohio) Region for your account: 25
         * EC2 instances, 20 IAM users, and 15 S3 buckets.</p> </li> <li> <p>You make a
         * call to the <code>GetDiscoveredResourceCounts</code> action and specify that you
         * want all resource types. </p> </li> <li> <p>AWS Config returns the
         * following:</p> <ul> <li> <p>The resource types (EC2 instances, IAM users, and S3
         * buckets).</p> </li> <li> <p>The number of each resource type (25, 20, and
         * 15).</p> </li> <li> <p>The total number of all resources (60).</p> </li> </ul>
         * </li> </ol> <p>The response is paginated. By default, AWS Config lists 100
         * <a>ResourceCount</a> objects on each page. You can customize this number with
         * the <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string. To get the next page of results, run the request again and specify the
         * string for the <code>nextToken</code> parameter.</p> <note> <p>If you make a
         * call to the <a>GetDiscoveredResourceCounts</a> action, you might not immediately
         * receive resource counts in the following situations:</p> <ul> <li> <p>You are a
         * new AWS Config customer.</p> </li> <li> <p>You just enabled resource
         * recording.</p> </li> </ul> <p>It might take a few minutes for AWS Config to
         * record and count your resources. Wait a few minutes and then retry the
         * <a>GetDiscoveredResourceCounts</a> action. </p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoveredResourceCountsOutcome GetDiscoveredResourceCounts(const Model::GetDiscoveredResourceCountsRequest& request) const;

        /**
         * <p>Returns the resource types, the number of each resource type, and the total
         * number of resources that AWS Config is recording in this region for your AWS
         * account. </p> <p class="title"> <b>Example</b> </p> <ol> <li> <p>AWS Config is
         * recording three resource types in the US East (Ohio) Region for your account: 25
         * EC2 instances, 20 IAM users, and 15 S3 buckets.</p> </li> <li> <p>You make a
         * call to the <code>GetDiscoveredResourceCounts</code> action and specify that you
         * want all resource types. </p> </li> <li> <p>AWS Config returns the
         * following:</p> <ul> <li> <p>The resource types (EC2 instances, IAM users, and S3
         * buckets).</p> </li> <li> <p>The number of each resource type (25, 20, and
         * 15).</p> </li> <li> <p>The total number of all resources (60).</p> </li> </ul>
         * </li> </ol> <p>The response is paginated. By default, AWS Config lists 100
         * <a>ResourceCount</a> objects on each page. You can customize this number with
         * the <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string. To get the next page of results, run the request again and specify the
         * string for the <code>nextToken</code> parameter.</p> <note> <p>If you make a
         * call to the <a>GetDiscoveredResourceCounts</a> action, you might not immediately
         * receive resource counts in the following situations:</p> <ul> <li> <p>You are a
         * new AWS Config customer.</p> </li> <li> <p>You just enabled resource
         * recording.</p> </li> </ul> <p>It might take a few minutes for AWS Config to
         * record and count your resources. Wait a few minutes and then retry the
         * <a>GetDiscoveredResourceCounts</a> action. </p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiscoveredResourceCountsOutcomeCallable GetDiscoveredResourceCountsCallable(const Model::GetDiscoveredResourceCountsRequest& request) const;

        /**
         * <p>Returns the resource types, the number of each resource type, and the total
         * number of resources that AWS Config is recording in this region for your AWS
         * account. </p> <p class="title"> <b>Example</b> </p> <ol> <li> <p>AWS Config is
         * recording three resource types in the US East (Ohio) Region for your account: 25
         * EC2 instances, 20 IAM users, and 15 S3 buckets.</p> </li> <li> <p>You make a
         * call to the <code>GetDiscoveredResourceCounts</code> action and specify that you
         * want all resource types. </p> </li> <li> <p>AWS Config returns the
         * following:</p> <ul> <li> <p>The resource types (EC2 instances, IAM users, and S3
         * buckets).</p> </li> <li> <p>The number of each resource type (25, 20, and
         * 15).</p> </li> <li> <p>The total number of all resources (60).</p> </li> </ul>
         * </li> </ol> <p>The response is paginated. By default, AWS Config lists 100
         * <a>ResourceCount</a> objects on each page. You can customize this number with
         * the <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string. To get the next page of results, run the request again and specify the
         * string for the <code>nextToken</code> parameter.</p> <note> <p>If you make a
         * call to the <a>GetDiscoveredResourceCounts</a> action, you might not immediately
         * receive resource counts in the following situations:</p> <ul> <li> <p>You are a
         * new AWS Config customer.</p> </li> <li> <p>You just enabled resource
         * recording.</p> </li> </ul> <p>It might take a few minutes for AWS Config to
         * record and count your resources. Wait a few minutes and then retry the
         * <a>GetDiscoveredResourceCounts</a> action. </p> </note><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiscoveredResourceCountsAsync(const Model::GetDiscoveredResourceCountsRequest& request, const GetDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetOrganizationConfigRuleDetailedStatusOutcome GetOrganizationConfigRuleDetailedStatus(const Model::GetOrganizationConfigRuleDetailedStatusRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOrganizationConfigRuleDetailedStatusOutcomeCallable GetOrganizationConfigRuleDetailedStatusCallable(const Model::GetOrganizationConfigRuleDetailedStatusRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOrganizationConfigRuleDetailedStatusAsync(const Model::GetOrganizationConfigRuleDetailedStatusRequest& request, const GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of configuration items for the specified resource. The list
         * contains details about each state of the resource during the specified time
         * interval. If you specified a retention period to retain your
         * <code>ConfigurationItems</code> between a minimum of 30 days and a maximum of 7
         * years (2557 days), AWS Config returns the <code>ConfigurationItems</code> for
         * the specified retention period. </p> <p>The response is paginated. By default,
         * AWS Config returns a limit of 10 configuration items per page. You can customize
         * this number with the <code>limit</code> parameter. The response includes a
         * <code>nextToken</code> string. To get the next page of results, run the request
         * again and specify the string for the <code>nextToken</code> parameter.</p>
         * <note> <p>Each call to the API is limited to span a duration of seven days. It
         * is likely that the number of records returned is smaller than the specified
         * <code>limit</code>. In such cases, you can make another call, using the
         * <code>nextToken</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceConfigHistoryOutcome GetResourceConfigHistory(const Model::GetResourceConfigHistoryRequest& request) const;

        /**
         * <p>Returns a list of configuration items for the specified resource. The list
         * contains details about each state of the resource during the specified time
         * interval. If you specified a retention period to retain your
         * <code>ConfigurationItems</code> between a minimum of 30 days and a maximum of 7
         * years (2557 days), AWS Config returns the <code>ConfigurationItems</code> for
         * the specified retention period. </p> <p>The response is paginated. By default,
         * AWS Config returns a limit of 10 configuration items per page. You can customize
         * this number with the <code>limit</code> parameter. The response includes a
         * <code>nextToken</code> string. To get the next page of results, run the request
         * again and specify the string for the <code>nextToken</code> parameter.</p>
         * <note> <p>Each call to the API is limited to span a duration of seven days. It
         * is likely that the number of records returned is smaller than the specified
         * <code>limit</code>. In such cases, you can make another call, using the
         * <code>nextToken</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceConfigHistoryOutcomeCallable GetResourceConfigHistoryCallable(const Model::GetResourceConfigHistoryRequest& request) const;

        /**
         * <p>Returns a list of configuration items for the specified resource. The list
         * contains details about each state of the resource during the specified time
         * interval. If you specified a retention period to retain your
         * <code>ConfigurationItems</code> between a minimum of 30 days and a maximum of 7
         * years (2557 days), AWS Config returns the <code>ConfigurationItems</code> for
         * the specified retention period. </p> <p>The response is paginated. By default,
         * AWS Config returns a limit of 10 configuration items per page. You can customize
         * this number with the <code>limit</code> parameter. The response includes a
         * <code>nextToken</code> string. To get the next page of results, run the request
         * again and specify the string for the <code>nextToken</code> parameter.</p>
         * <note> <p>Each call to the API is limited to span a duration of seven days. It
         * is likely that the number of records returned is smaller than the specified
         * <code>limit</code>. In such cases, you can make another call, using the
         * <code>nextToken</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceConfigHistoryAsync(const Model::GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers that are
         * aggregated for a specific resource type across accounts and regions. A resource
         * identifier includes the resource type, ID, (if available) the custom resource
         * name, source account, and source region. You can narrow the results to include
         * only resources that have specific resource IDs, or a resource name, or source
         * account ID, or source region.</p> <p>For example, if the input consists of
         * accountID 12345678910 and the region is us-east-1 for resource type
         * <code>AWS::EC2::Instance</code> then the API returns all the EC2 instance
         * identifiers of accountID 12345678910 and region us-east-1.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListAggregateDiscoveredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAggregateDiscoveredResourcesOutcome ListAggregateDiscoveredResources(const Model::ListAggregateDiscoveredResourcesRequest& request) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers that are
         * aggregated for a specific resource type across accounts and regions. A resource
         * identifier includes the resource type, ID, (if available) the custom resource
         * name, source account, and source region. You can narrow the results to include
         * only resources that have specific resource IDs, or a resource name, or source
         * account ID, or source region.</p> <p>For example, if the input consists of
         * accountID 12345678910 and the region is us-east-1 for resource type
         * <code>AWS::EC2::Instance</code> then the API returns all the EC2 instance
         * identifiers of accountID 12345678910 and region us-east-1.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListAggregateDiscoveredResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAggregateDiscoveredResourcesOutcomeCallable ListAggregateDiscoveredResourcesCallable(const Model::ListAggregateDiscoveredResourcesRequest& request) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers that are
         * aggregated for a specific resource type across accounts and regions. A resource
         * identifier includes the resource type, ID, (if available) the custom resource
         * name, source account, and source region. You can narrow the results to include
         * only resources that have specific resource IDs, or a resource name, or source
         * account ID, or source region.</p> <p>For example, if the input consists of
         * accountID 12345678910 and the region is us-east-1 for resource type
         * <code>AWS::EC2::Instance</code> then the API returns all the EC2 instance
         * identifiers of accountID 12345678910 and region us-east-1.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListAggregateDiscoveredResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAggregateDiscoveredResourcesAsync(const Model::ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers for the
         * resources of that type. A resource identifier includes the resource type, ID,
         * and (if available) the custom resource name. The results consist of resources
         * that AWS Config has discovered, including those that AWS Config is not currently
         * recording. You can narrow the results to include only resources that have
         * specific resource IDs or a resource name.</p> <note> <p>You can specify either
         * resource IDs or a resource name, but not both, in the same request.</p> </note>
         * <p>The response is paginated. By default, AWS Config lists 100 resource
         * identifiers on each page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string. To get the next page of results, run the request again and specify the
         * string for the <code>nextToken</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListDiscoveredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers for the
         * resources of that type. A resource identifier includes the resource type, ID,
         * and (if available) the custom resource name. The results consist of resources
         * that AWS Config has discovered, including those that AWS Config is not currently
         * recording. You can narrow the results to include only resources that have
         * specific resource IDs or a resource name.</p> <note> <p>You can specify either
         * resource IDs or a resource name, but not both, in the same request.</p> </note>
         * <p>The response is paginated. By default, AWS Config lists 100 resource
         * identifiers on each page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string. To get the next page of results, run the request again and specify the
         * string for the <code>nextToken</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListDiscoveredResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers for the
         * resources of that type. A resource identifier includes the resource type, ID,
         * and (if available) the custom resource name. The results consist of resources
         * that AWS Config has discovered, including those that AWS Config is not currently
         * recording. You can narrow the results to include only resources that have
         * specific resource IDs or a resource name.</p> <note> <p>You can specify either
         * resource IDs or a resource name, but not both, in the same request.</p> </note>
         * <p>The response is paginated. By default, AWS Config lists 100 resource
         * identifiers on each page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string. To get the next page of results, run the request again and specify the
         * string for the <code>nextToken</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListDiscoveredResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDiscoveredResourcesAsync(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for AWS Config resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for AWS Config resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for AWS Config resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Authorizes the aggregator account and region to collect data from the source
         * account and region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutAggregationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAggregationAuthorizationOutcome PutAggregationAuthorization(const Model::PutAggregationAuthorizationRequest& request) const;

        /**
         * <p>Authorizes the aggregator account and region to collect data from the source
         * account and region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutAggregationAuthorization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAggregationAuthorizationOutcomeCallable PutAggregationAuthorizationCallable(const Model::PutAggregationAuthorizationRequest& request) const;

        /**
         * <p>Authorizes the aggregator account and region to collect data from the source
         * account and region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutAggregationAuthorization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAggregationAuthorizationAsync(const Model::PutAggregationAuthorizationRequest& request, const PutAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates an AWS Config rule for evaluating whether your AWS resources
         * comply with your desired configurations.</p> <p>You can use this action for
         * custom AWS Config rules and AWS managed Config rules. A custom AWS Config rule
         * is a rule that you develop and maintain. An AWS managed Config rule is a
         * customizable, predefined rule that AWS Config provides.</p> <p>If you are adding
         * a new custom AWS Config rule, you must first create the AWS Lambda function that
         * the rule invokes to evaluate your resources. When you use the
         * <code>PutConfigRule</code> action to add the rule to AWS Config, you must
         * specify the Amazon Resource Name (ARN) that AWS Lambda assigns to the function.
         * Specify the ARN for the <code>SourceIdentifier</code> key. This key is part of
         * the <code>Source</code> object, which is part of the <code>ConfigRule</code>
         * object. </p> <p>If you are adding an AWS managed Config rule, specify the rule's
         * identifier for the <code>SourceIdentifier</code> key. To reference AWS managed
         * Config rule identifiers, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">About
         * AWS Managed Config Rules</a>.</p> <p>For any new rule that you add, specify the
         * <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
         * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These
         * values are generated by AWS Config for new rules.</p> <p>If you are updating a
         * rule that you added previously, you can specify the rule by
         * <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>The maximum number of rules that AWS Config supports is
         * 150.</p> <p>For information about requesting a rule limit increase, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS
         * Config Limits</a> in the <i>AWS General Reference Guide</i>.</p> <p>For more
         * information about developing and using AWS Config rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * AWS Resource Configurations with AWS Config</a> in the <i>AWS Config Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigRuleOutcome PutConfigRule(const Model::PutConfigRuleRequest& request) const;

        /**
         * <p>Adds or updates an AWS Config rule for evaluating whether your AWS resources
         * comply with your desired configurations.</p> <p>You can use this action for
         * custom AWS Config rules and AWS managed Config rules. A custom AWS Config rule
         * is a rule that you develop and maintain. An AWS managed Config rule is a
         * customizable, predefined rule that AWS Config provides.</p> <p>If you are adding
         * a new custom AWS Config rule, you must first create the AWS Lambda function that
         * the rule invokes to evaluate your resources. When you use the
         * <code>PutConfigRule</code> action to add the rule to AWS Config, you must
         * specify the Amazon Resource Name (ARN) that AWS Lambda assigns to the function.
         * Specify the ARN for the <code>SourceIdentifier</code> key. This key is part of
         * the <code>Source</code> object, which is part of the <code>ConfigRule</code>
         * object. </p> <p>If you are adding an AWS managed Config rule, specify the rule's
         * identifier for the <code>SourceIdentifier</code> key. To reference AWS managed
         * Config rule identifiers, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">About
         * AWS Managed Config Rules</a>.</p> <p>For any new rule that you add, specify the
         * <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
         * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These
         * values are generated by AWS Config for new rules.</p> <p>If you are updating a
         * rule that you added previously, you can specify the rule by
         * <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>The maximum number of rules that AWS Config supports is
         * 150.</p> <p>For information about requesting a rule limit increase, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS
         * Config Limits</a> in the <i>AWS General Reference Guide</i>.</p> <p>For more
         * information about developing and using AWS Config rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * AWS Resource Configurations with AWS Config</a> in the <i>AWS Config Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigRuleOutcomeCallable PutConfigRuleCallable(const Model::PutConfigRuleRequest& request) const;

        /**
         * <p>Adds or updates an AWS Config rule for evaluating whether your AWS resources
         * comply with your desired configurations.</p> <p>You can use this action for
         * custom AWS Config rules and AWS managed Config rules. A custom AWS Config rule
         * is a rule that you develop and maintain. An AWS managed Config rule is a
         * customizable, predefined rule that AWS Config provides.</p> <p>If you are adding
         * a new custom AWS Config rule, you must first create the AWS Lambda function that
         * the rule invokes to evaluate your resources. When you use the
         * <code>PutConfigRule</code> action to add the rule to AWS Config, you must
         * specify the Amazon Resource Name (ARN) that AWS Lambda assigns to the function.
         * Specify the ARN for the <code>SourceIdentifier</code> key. This key is part of
         * the <code>Source</code> object, which is part of the <code>ConfigRule</code>
         * object. </p> <p>If you are adding an AWS managed Config rule, specify the rule's
         * identifier for the <code>SourceIdentifier</code> key. To reference AWS managed
         * Config rule identifiers, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">About
         * AWS Managed Config Rules</a>.</p> <p>For any new rule that you add, specify the
         * <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
         * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These
         * values are generated by AWS Config for new rules.</p> <p>If you are updating a
         * rule that you added previously, you can specify the rule by
         * <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>The maximum number of rules that AWS Config supports is
         * 150.</p> <p>For information about requesting a rule limit increase, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS
         * Config Limits</a> in the <i>AWS General Reference Guide</i>.</p> <p>For more
         * information about developing and using AWS Config rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * AWS Resource Configurations with AWS Config</a> in the <i>AWS Config Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigRuleAsync(const Model::PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and updates the configuration aggregator with the selected source
         * accounts and regions. The source account can be individual account(s) or an
         * organization.</p> <note> <p>AWS Config should be enabled in source accounts and
         * regions you want to aggregate.</p> <p>If your source type is an organization,
         * you must be signed in to the master account and all features must be enabled in
         * your organization. AWS Config calls <code>EnableAwsServiceAccess</code> API to
         * enable integration between AWS Config and AWS Organizations. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationAggregatorOutcome PutConfigurationAggregator(const Model::PutConfigurationAggregatorRequest& request) const;

        /**
         * <p>Creates and updates the configuration aggregator with the selected source
         * accounts and regions. The source account can be individual account(s) or an
         * organization.</p> <note> <p>AWS Config should be enabled in source accounts and
         * regions you want to aggregate.</p> <p>If your source type is an organization,
         * you must be signed in to the master account and all features must be enabled in
         * your organization. AWS Config calls <code>EnableAwsServiceAccess</code> API to
         * enable integration between AWS Config and AWS Organizations. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationAggregator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationAggregatorOutcomeCallable PutConfigurationAggregatorCallable(const Model::PutConfigurationAggregatorRequest& request) const;

        /**
         * <p>Creates and updates the configuration aggregator with the selected source
         * accounts and regions. The source account can be individual account(s) or an
         * organization.</p> <note> <p>AWS Config should be enabled in source accounts and
         * regions you want to aggregate.</p> <p>If your source type is an organization,
         * you must be signed in to the master account and all features must be enabled in
         * your organization. AWS Config calls <code>EnableAwsServiceAccess</code> API to
         * enable integration between AWS Config and AWS Organizations. </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationAggregator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationAggregatorAsync(const Model::PutConfigurationAggregatorRequest& request, const PutConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new configuration recorder to record the selected resource
         * configurations.</p> <p>You can use this action to change the role
         * <code>roleARN</code> or the <code>recordingGroup</code> of an existing recorder.
         * To change the role, call the action on the existing configuration recorder and
         * specify a role.</p> <note> <p>Currently, you can specify only one configuration
         * recorder per region in your account.</p> <p>If
         * <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b>
         * parameter specified, the default is to record all supported resource types.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationRecorderOutcome PutConfigurationRecorder(const Model::PutConfigurationRecorderRequest& request) const;

        /**
         * <p>Creates a new configuration recorder to record the selected resource
         * configurations.</p> <p>You can use this action to change the role
         * <code>roleARN</code> or the <code>recordingGroup</code> of an existing recorder.
         * To change the role, call the action on the existing configuration recorder and
         * specify a role.</p> <note> <p>Currently, you can specify only one configuration
         * recorder per region in your account.</p> <p>If
         * <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b>
         * parameter specified, the default is to record all supported resource types.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationRecorderOutcomeCallable PutConfigurationRecorderCallable(const Model::PutConfigurationRecorderRequest& request) const;

        /**
         * <p>Creates a new configuration recorder to record the selected resource
         * configurations.</p> <p>You can use this action to change the role
         * <code>roleARN</code> or the <code>recordingGroup</code> of an existing recorder.
         * To change the role, call the action on the existing configuration recorder and
         * specify a role.</p> <note> <p>Currently, you can specify only one configuration
         * recorder per region in your account.</p> <p>If
         * <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b>
         * parameter specified, the default is to record all supported resource types.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationRecorderAsync(const Model::PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a delivery channel object to deliver configuration information to an
         * Amazon S3 bucket and Amazon SNS topic.</p> <p>Before you can create a delivery
         * channel, you must create a configuration recorder.</p> <p>You can use this
         * action to change the Amazon S3 bucket or an Amazon SNS topic of the existing
         * delivery channel. To change the Amazon S3 bucket or an Amazon SNS topic, call
         * this action and specify the changed values for the S3 bucket and the SNS topic.
         * If you specify a different value for either the S3 bucket or the SNS topic, this
         * action will keep the existing value for the parameter that is not changed.</p>
         * <note> <p>You can have only one delivery channel per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutDeliveryChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDeliveryChannelOutcome PutDeliveryChannel(const Model::PutDeliveryChannelRequest& request) const;

        /**
         * <p>Creates a delivery channel object to deliver configuration information to an
         * Amazon S3 bucket and Amazon SNS topic.</p> <p>Before you can create a delivery
         * channel, you must create a configuration recorder.</p> <p>You can use this
         * action to change the Amazon S3 bucket or an Amazon SNS topic of the existing
         * delivery channel. To change the Amazon S3 bucket or an Amazon SNS topic, call
         * this action and specify the changed values for the S3 bucket and the SNS topic.
         * If you specify a different value for either the S3 bucket or the SNS topic, this
         * action will keep the existing value for the parameter that is not changed.</p>
         * <note> <p>You can have only one delivery channel per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutDeliveryChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDeliveryChannelOutcomeCallable PutDeliveryChannelCallable(const Model::PutDeliveryChannelRequest& request) const;

        /**
         * <p>Creates a delivery channel object to deliver configuration information to an
         * Amazon S3 bucket and Amazon SNS topic.</p> <p>Before you can create a delivery
         * channel, you must create a configuration recorder.</p> <p>You can use this
         * action to change the Amazon S3 bucket or an Amazon SNS topic of the existing
         * delivery channel. To change the Amazon S3 bucket or an Amazon SNS topic, call
         * this action and specify the changed values for the S3 bucket and the SNS topic.
         * If you specify a different value for either the S3 bucket or the SNS topic, this
         * action will keep the existing value for the parameter that is not changed.</p>
         * <note> <p>You can have only one delivery channel per region in your account.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutDeliveryChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDeliveryChannelAsync(const Model::PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used by an AWS Lambda function to deliver evaluation results to AWS Config.
         * This action is required in every AWS Lambda function that is invoked by an AWS
         * Config rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEvaluationsOutcome PutEvaluations(const Model::PutEvaluationsRequest& request) const;

        /**
         * <p>Used by an AWS Lambda function to deliver evaluation results to AWS Config.
         * This action is required in every AWS Lambda function that is invoked by an AWS
         * Config rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEvaluationsOutcomeCallable PutEvaluationsCallable(const Model::PutEvaluationsRequest& request) const;

        /**
         * <p>Used by an AWS Lambda function to deliver evaluation results to AWS Config.
         * This action is required in every AWS Lambda function that is invoked by an AWS
         * Config rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEvaluationsAsync(const Model::PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutOrganizationConfigRuleOutcome PutOrganizationConfigRule(const Model::PutOrganizationConfigRuleRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutOrganizationConfigRuleOutcomeCallable PutOrganizationConfigRuleCallable(const Model::PutOrganizationConfigRuleRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutOrganizationConfigRuleAsync(const Model::PutOrganizationConfigRuleRequest& request, const PutOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the remediation configuration with a specific AWS Config rule
         * with the selected target or action. The API creates the
         * <code>RemediationConfiguration</code> object for the AWS Config rule. The AWS
         * Config rule must already exist for you to add a remediation configuration. The
         * target (SSM document) must exist and have permissions to use the target.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRemediationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRemediationConfigurationsOutcome PutRemediationConfigurations(const Model::PutRemediationConfigurationsRequest& request) const;

        /**
         * <p>Adds or updates the remediation configuration with a specific AWS Config rule
         * with the selected target or action. The API creates the
         * <code>RemediationConfiguration</code> object for the AWS Config rule. The AWS
         * Config rule must already exist for you to add a remediation configuration. The
         * target (SSM document) must exist and have permissions to use the target.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRemediationConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRemediationConfigurationsOutcomeCallable PutRemediationConfigurationsCallable(const Model::PutRemediationConfigurationsRequest& request) const;

        /**
         * <p>Adds or updates the remediation configuration with a specific AWS Config rule
         * with the selected target or action. The API creates the
         * <code>RemediationConfiguration</code> object for the AWS Config rule. The AWS
         * Config rule must already exist for you to add a remediation configuration. The
         * target (SSM document) must exist and have permissions to use the target.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRemediationConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRemediationConfigurationsAsync(const Model::PutRemediationConfigurationsRequest& request, const PutRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and updates the retention configuration with details about retention
         * period (number of days) that AWS Config stores your historical information. The
         * API creates the <code>RetentionConfiguration</code> object and names the object
         * as <b>default</b>. When you have a <code>RetentionConfiguration</code> object
         * named <b>default</b>, calling the API modifies the default object. </p> <note>
         * <p>Currently, AWS Config supports only one retention configuration per region in
         * your account.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRetentionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionConfigurationOutcome PutRetentionConfiguration(const Model::PutRetentionConfigurationRequest& request) const;

        /**
         * <p>Creates and updates the retention configuration with details about retention
         * period (number of days) that AWS Config stores your historical information. The
         * API creates the <code>RetentionConfiguration</code> object and names the object
         * as <b>default</b>. When you have a <code>RetentionConfiguration</code> object
         * named <b>default</b>, calling the API modifies the default object. </p> <note>
         * <p>Currently, AWS Config supports only one retention configuration per region in
         * your account.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRetentionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRetentionConfigurationOutcomeCallable PutRetentionConfigurationCallable(const Model::PutRetentionConfigurationRequest& request) const;

        /**
         * <p>Creates and updates the retention configuration with details about retention
         * period (number of days) that AWS Config stores your historical information. The
         * API creates the <code>RetentionConfiguration</code> object and names the object
         * as <b>default</b>. When you have a <code>RetentionConfiguration</code> object
         * named <b>default</b>, calling the API modifies the default object. </p> <note>
         * <p>Currently, AWS Config supports only one retention configuration per region in
         * your account.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRetentionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRetentionConfigurationAsync(const Model::PutRetentionConfigurationRequest& request, const PutRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a structured query language (SQL) <code>SELECT</code> command,
         * performs the corresponding search, and returns resource configurations matching
         * the properties.</p> <p>For more information about query components, see the <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/query-components.html">
         * <b>Query Components</b> </a> section in the AWS Config Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SelectResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::SelectResourceConfigOutcome SelectResourceConfig(const Model::SelectResourceConfigRequest& request) const;

        /**
         * <p>Accepts a structured query language (SQL) <code>SELECT</code> command,
         * performs the corresponding search, and returns resource configurations matching
         * the properties.</p> <p>For more information about query components, see the <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/query-components.html">
         * <b>Query Components</b> </a> section in the AWS Config Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SelectResourceConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SelectResourceConfigOutcomeCallable SelectResourceConfigCallable(const Model::SelectResourceConfigRequest& request) const;

        /**
         * <p>Accepts a structured query language (SQL) <code>SELECT</code> command,
         * performs the corresponding search, and returns resource configurations matching
         * the properties.</p> <p>For more information about query components, see the <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/query-components.html">
         * <b>Query Components</b> </a> section in the AWS Config Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SelectResourceConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SelectResourceConfigAsync(const Model::SelectResourceConfigRequest& request, const SelectResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs an on-demand evaluation for the specified AWS Config rules against the
         * last known configuration state of the resources. Use
         * <code>StartConfigRulesEvaluation</code> when you want to test that a rule you
         * updated is working as expected. <code>StartConfigRulesEvaluation</code> does not
         * re-record the latest configuration state for your resources. It re-runs an
         * evaluation against the last known state of your resources. </p> <p>You can
         * specify up to 25 AWS Config rules per request. </p> <p>An existing
         * <code>StartConfigRulesEvaluation</code> call for the specified rules must
         * complete before you can call the API again. If you chose to have AWS Config
         * stream to an Amazon SNS topic, you will receive a
         * <code>ConfigRuleEvaluationStarted</code> notification when the evaluation
         * starts.</p> <note> <p>You don't need to call the
         * <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new rule.
         * When you create a rule, AWS Config evaluates your resources against the rule
         * automatically. </p> </note> <p>The <code>StartConfigRulesEvaluation</code> API
         * is useful if you want to run on-demand evaluations, such as the following
         * example:</p> <ol> <li> <p>You have a custom rule that evaluates your IAM
         * resources every 24 hours.</p> </li> <li> <p>You update your Lambda function to
         * add additional conditions to your rule.</p> </li> <li> <p>Instead of waiting for
         * the next periodic evaluation, you call the
         * <code>StartConfigRulesEvaluation</code> API.</p> </li> <li> <p>AWS Config
         * invokes your Lambda function and evaluates your IAM resources.</p> </li> <li>
         * <p>Your custom rule will still run periodic evaluations every 24 hours.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigRulesEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigRulesEvaluationOutcome StartConfigRulesEvaluation(const Model::StartConfigRulesEvaluationRequest& request) const;

        /**
         * <p>Runs an on-demand evaluation for the specified AWS Config rules against the
         * last known configuration state of the resources. Use
         * <code>StartConfigRulesEvaluation</code> when you want to test that a rule you
         * updated is working as expected. <code>StartConfigRulesEvaluation</code> does not
         * re-record the latest configuration state for your resources. It re-runs an
         * evaluation against the last known state of your resources. </p> <p>You can
         * specify up to 25 AWS Config rules per request. </p> <p>An existing
         * <code>StartConfigRulesEvaluation</code> call for the specified rules must
         * complete before you can call the API again. If you chose to have AWS Config
         * stream to an Amazon SNS topic, you will receive a
         * <code>ConfigRuleEvaluationStarted</code> notification when the evaluation
         * starts.</p> <note> <p>You don't need to call the
         * <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new rule.
         * When you create a rule, AWS Config evaluates your resources against the rule
         * automatically. </p> </note> <p>The <code>StartConfigRulesEvaluation</code> API
         * is useful if you want to run on-demand evaluations, such as the following
         * example:</p> <ol> <li> <p>You have a custom rule that evaluates your IAM
         * resources every 24 hours.</p> </li> <li> <p>You update your Lambda function to
         * add additional conditions to your rule.</p> </li> <li> <p>Instead of waiting for
         * the next periodic evaluation, you call the
         * <code>StartConfigRulesEvaluation</code> API.</p> </li> <li> <p>AWS Config
         * invokes your Lambda function and evaluates your IAM resources.</p> </li> <li>
         * <p>Your custom rule will still run periodic evaluations every 24 hours.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigRulesEvaluation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartConfigRulesEvaluationOutcomeCallable StartConfigRulesEvaluationCallable(const Model::StartConfigRulesEvaluationRequest& request) const;

        /**
         * <p>Runs an on-demand evaluation for the specified AWS Config rules against the
         * last known configuration state of the resources. Use
         * <code>StartConfigRulesEvaluation</code> when you want to test that a rule you
         * updated is working as expected. <code>StartConfigRulesEvaluation</code> does not
         * re-record the latest configuration state for your resources. It re-runs an
         * evaluation against the last known state of your resources. </p> <p>You can
         * specify up to 25 AWS Config rules per request. </p> <p>An existing
         * <code>StartConfigRulesEvaluation</code> call for the specified rules must
         * complete before you can call the API again. If you chose to have AWS Config
         * stream to an Amazon SNS topic, you will receive a
         * <code>ConfigRuleEvaluationStarted</code> notification when the evaluation
         * starts.</p> <note> <p>You don't need to call the
         * <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new rule.
         * When you create a rule, AWS Config evaluates your resources against the rule
         * automatically. </p> </note> <p>The <code>StartConfigRulesEvaluation</code> API
         * is useful if you want to run on-demand evaluations, such as the following
         * example:</p> <ol> <li> <p>You have a custom rule that evaluates your IAM
         * resources every 24 hours.</p> </li> <li> <p>You update your Lambda function to
         * add additional conditions to your rule.</p> </li> <li> <p>Instead of waiting for
         * the next periodic evaluation, you call the
         * <code>StartConfigRulesEvaluation</code> API.</p> </li> <li> <p>AWS Config
         * invokes your Lambda function and evaluates your IAM resources.</p> </li> <li>
         * <p>Your custom rule will still run periodic evaluations every 24 hours.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigRulesEvaluation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartConfigRulesEvaluationAsync(const Model::StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p> <p>You must have created at least one delivery
         * channel to successfully start the configuration recorder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigurationRecorderOutcome StartConfigurationRecorder(const Model::StartConfigurationRecorderRequest& request) const;

        /**
         * <p>Starts recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p> <p>You must have created at least one delivery
         * channel to successfully start the configuration recorder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartConfigurationRecorderOutcomeCallable StartConfigurationRecorderCallable(const Model::StartConfigurationRecorderRequest& request) const;

        /**
         * <p>Starts recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p> <p>You must have created at least one delivery
         * channel to successfully start the configuration recorder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartConfigurationRecorderAsync(const Model::StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs an on-demand remediation for the specified AWS Config rules against the
         * last known remediation configuration. It runs an execution against the current
         * state of your resources. Remediation execution is asynchronous.</p> <p>You can
         * specify up to 100 resource keys per request. An existing
         * StartRemediationExecution call for the specified resource keys must complete
         * before you can call the API again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartRemediationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRemediationExecutionOutcome StartRemediationExecution(const Model::StartRemediationExecutionRequest& request) const;

        /**
         * <p>Runs an on-demand remediation for the specified AWS Config rules against the
         * last known remediation configuration. It runs an execution against the current
         * state of your resources. Remediation execution is asynchronous.</p> <p>You can
         * specify up to 100 resource keys per request. An existing
         * StartRemediationExecution call for the specified resource keys must complete
         * before you can call the API again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartRemediationExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRemediationExecutionOutcomeCallable StartRemediationExecutionCallable(const Model::StartRemediationExecutionRequest& request) const;

        /**
         * <p>Runs an on-demand remediation for the specified AWS Config rules against the
         * last known remediation configuration. It runs an execution against the current
         * state of your resources. Remediation execution is asynchronous.</p> <p>You can
         * specify up to 100 resource keys per request. An existing
         * StartRemediationExecution call for the specified resource keys must complete
         * before you can call the API again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartRemediationExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRemediationExecutionAsync(const Model::StartRemediationExecutionRequest& request, const StartRemediationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StopConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopConfigurationRecorderOutcome StopConfigurationRecorder(const Model::StopConfigurationRecorderRequest& request) const;

        /**
         * <p>Stops recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StopConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopConfigurationRecorderOutcomeCallable StopConfigurationRecorderCallable(const Model::StopConfigurationRecorderRequest& request) const;

        /**
         * <p>Stops recording configurations of the AWS resources you have selected to
         * record in your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StopConfigurationRecorder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopConfigurationRecorderAsync(const Model::StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified tags to a resource with the specified resourceArn.
         * If existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified resourceArn.
         * If existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified resourceArn.
         * If existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchGetAggregateResourceConfigAsyncHelper(const Model::BatchGetAggregateResourceConfigRequest& request, const BatchGetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetResourceConfigAsyncHelper(const Model::BatchGetResourceConfigRequest& request, const BatchGetResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAggregationAuthorizationAsyncHelper(const Model::DeleteAggregationAuthorizationRequest& request, const DeleteAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigRuleAsyncHelper(const Model::DeleteConfigRuleRequest& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationAggregatorAsyncHelper(const Model::DeleteConfigurationAggregatorRequest& request, const DeleteConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationRecorderAsyncHelper(const Model::DeleteConfigurationRecorderRequest& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeliveryChannelAsyncHelper(const Model::DeleteDeliveryChannelRequest& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEvaluationResultsAsyncHelper(const Model::DeleteEvaluationResultsRequest& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOrganizationConfigRuleAsyncHelper(const Model::DeleteOrganizationConfigRuleRequest& request, const DeleteOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePendingAggregationRequestAsyncHelper(const Model::DeletePendingAggregationRequestRequest& request, const DeletePendingAggregationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRemediationConfigurationAsyncHelper(const Model::DeleteRemediationConfigurationRequest& request, const DeleteRemediationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRetentionConfigurationAsyncHelper(const Model::DeleteRetentionConfigurationRequest& request, const DeleteRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeliverConfigSnapshotAsyncHelper(const Model::DeliverConfigSnapshotRequest& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAggregateComplianceByConfigRulesAsyncHelper(const Model::DescribeAggregateComplianceByConfigRulesRequest& request, const DescribeAggregateComplianceByConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAggregationAuthorizationsAsyncHelper(const Model::DescribeAggregationAuthorizationsRequest& request, const DescribeAggregationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComplianceByConfigRuleAsyncHelper(const Model::DescribeComplianceByConfigRuleRequest& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComplianceByResourceAsyncHelper(const Model::DescribeComplianceByResourceRequest& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigRuleEvaluationStatusAsyncHelper(const Model::DescribeConfigRuleEvaluationStatusRequest& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigRulesAsyncHelper(const Model::DescribeConfigRulesRequest& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationAggregatorSourcesStatusAsyncHelper(const Model::DescribeConfigurationAggregatorSourcesStatusRequest& request, const DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationAggregatorsAsyncHelper(const Model::DescribeConfigurationAggregatorsRequest& request, const DescribeConfigurationAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationRecorderStatusAsyncHelper(const Model::DescribeConfigurationRecorderStatusRequest& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationRecordersAsyncHelper(const Model::DescribeConfigurationRecordersRequest& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeliveryChannelStatusAsyncHelper(const Model::DescribeDeliveryChannelStatusRequest& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeliveryChannelsAsyncHelper(const Model::DescribeDeliveryChannelsRequest& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationConfigRuleStatusesAsyncHelper(const Model::DescribeOrganizationConfigRuleStatusesRequest& request, const DescribeOrganizationConfigRuleStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationConfigRulesAsyncHelper(const Model::DescribeOrganizationConfigRulesRequest& request, const DescribeOrganizationConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePendingAggregationRequestsAsyncHelper(const Model::DescribePendingAggregationRequestsRequest& request, const DescribePendingAggregationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRemediationConfigurationsAsyncHelper(const Model::DescribeRemediationConfigurationsRequest& request, const DescribeRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRemediationExecutionStatusAsyncHelper(const Model::DescribeRemediationExecutionStatusRequest& request, const DescribeRemediationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRetentionConfigurationsAsyncHelper(const Model::DescribeRetentionConfigurationsRequest& request, const DescribeRetentionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAggregateComplianceDetailsByConfigRuleAsyncHelper(const Model::GetAggregateComplianceDetailsByConfigRuleRequest& request, const GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAggregateConfigRuleComplianceSummaryAsyncHelper(const Model::GetAggregateConfigRuleComplianceSummaryRequest& request, const GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAggregateDiscoveredResourceCountsAsyncHelper(const Model::GetAggregateDiscoveredResourceCountsRequest& request, const GetAggregateDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAggregateResourceConfigAsyncHelper(const Model::GetAggregateResourceConfigRequest& request, const GetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceDetailsByConfigRuleAsyncHelper(const Model::GetComplianceDetailsByConfigRuleRequest& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceDetailsByResourceAsyncHelper(const Model::GetComplianceDetailsByResourceRequest& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceSummaryByConfigRuleAsyncHelper(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceSummaryByResourceTypeAsyncHelper(const Model::GetComplianceSummaryByResourceTypeRequest& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiscoveredResourceCountsAsyncHelper(const Model::GetDiscoveredResourceCountsRequest& request, const GetDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOrganizationConfigRuleDetailedStatusAsyncHelper(const Model::GetOrganizationConfigRuleDetailedStatusRequest& request, const GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceConfigHistoryAsyncHelper(const Model::GetResourceConfigHistoryRequest& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAggregateDiscoveredResourcesAsyncHelper(const Model::ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDiscoveredResourcesAsyncHelper(const Model::ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAggregationAuthorizationAsyncHelper(const Model::PutAggregationAuthorizationRequest& request, const PutAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigRuleAsyncHelper(const Model::PutConfigRuleRequest& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationAggregatorAsyncHelper(const Model::PutConfigurationAggregatorRequest& request, const PutConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationRecorderAsyncHelper(const Model::PutConfigurationRecorderRequest& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDeliveryChannelAsyncHelper(const Model::PutDeliveryChannelRequest& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEvaluationsAsyncHelper(const Model::PutEvaluationsRequest& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutOrganizationConfigRuleAsyncHelper(const Model::PutOrganizationConfigRuleRequest& request, const PutOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRemediationConfigurationsAsyncHelper(const Model::PutRemediationConfigurationsRequest& request, const PutRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRetentionConfigurationAsyncHelper(const Model::PutRetentionConfigurationRequest& request, const PutRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SelectResourceConfigAsyncHelper(const Model::SelectResourceConfigRequest& request, const SelectResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartConfigRulesEvaluationAsyncHelper(const Model::StartConfigRulesEvaluationRequest& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartConfigurationRecorderAsyncHelper(const Model::StartConfigurationRecorderRequest& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRemediationExecutionAsyncHelper(const Model::StartRemediationExecutionRequest& request, const StartRemediationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopConfigurationRecorderAsyncHelper(const Model::StopConfigurationRecorderRequest& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ConfigService
} // namespace Aws
