/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/logs/CloudWatchLogsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/logs/CloudWatchLogsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudWatchLogsClient header */
#include <aws/logs/model/CreateDeliveryResult.h>
#include <aws/logs/model/CreateExportTaskResult.h>
#include <aws/logs/model/CreateLogAnomalyDetectorResult.h>
#include <aws/logs/model/DeleteQueryDefinitionResult.h>
#include <aws/logs/model/DescribeAccountPoliciesResult.h>
#include <aws/logs/model/DescribeDeliveriesResult.h>
#include <aws/logs/model/DescribeDeliveryDestinationsResult.h>
#include <aws/logs/model/DescribeDeliverySourcesResult.h>
#include <aws/logs/model/DescribeDestinationsResult.h>
#include <aws/logs/model/DescribeExportTasksResult.h>
#include <aws/logs/model/DescribeLogGroupsResult.h>
#include <aws/logs/model/DescribeLogStreamsResult.h>
#include <aws/logs/model/DescribeMetricFiltersResult.h>
#include <aws/logs/model/DescribeQueriesResult.h>
#include <aws/logs/model/DescribeQueryDefinitionsResult.h>
#include <aws/logs/model/DescribeResourcePoliciesResult.h>
#include <aws/logs/model/DescribeSubscriptionFiltersResult.h>
#include <aws/logs/model/FilterLogEventsResult.h>
#include <aws/logs/model/GetDataProtectionPolicyResult.h>
#include <aws/logs/model/GetDeliveryResult.h>
#include <aws/logs/model/GetDeliveryDestinationResult.h>
#include <aws/logs/model/GetDeliveryDestinationPolicyResult.h>
#include <aws/logs/model/GetDeliverySourceResult.h>
#include <aws/logs/model/GetLogAnomalyDetectorResult.h>
#include <aws/logs/model/GetLogEventsResult.h>
#include <aws/logs/model/GetLogGroupFieldsResult.h>
#include <aws/logs/model/GetLogRecordResult.h>
#include <aws/logs/model/GetQueryResultsResult.h>
#include <aws/logs/model/ListAnomaliesResult.h>
#include <aws/logs/model/ListLogAnomalyDetectorsResult.h>
#include <aws/logs/model/ListTagsForResourceResult.h>
#include <aws/logs/model/PutAccountPolicyResult.h>
#include <aws/logs/model/PutDataProtectionPolicyResult.h>
#include <aws/logs/model/PutDeliveryDestinationResult.h>
#include <aws/logs/model/PutDeliveryDestinationPolicyResult.h>
#include <aws/logs/model/PutDeliverySourceResult.h>
#include <aws/logs/model/PutDestinationResult.h>
#include <aws/logs/model/PutLogEventsResult.h>
#include <aws/logs/model/PutQueryDefinitionResult.h>
#include <aws/logs/model/PutResourcePolicyResult.h>
#include <aws/logs/model/StartQueryResult.h>
#include <aws/logs/model/StopQueryResult.h>
#include <aws/logs/model/TestMetricFilterResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CloudWatchLogsClient header */

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

  namespace CloudWatchLogs
  {
    using CloudWatchLogsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudWatchLogsEndpointProviderBase = Aws::CloudWatchLogs::Endpoint::CloudWatchLogsEndpointProviderBase;
    using CloudWatchLogsEndpointProvider = Aws::CloudWatchLogs::Endpoint::CloudWatchLogsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudWatchLogsClient header */
      class AssociateKmsKeyRequest;
      class CancelExportTaskRequest;
      class CreateDeliveryRequest;
      class CreateExportTaskRequest;
      class CreateLogAnomalyDetectorRequest;
      class CreateLogGroupRequest;
      class CreateLogStreamRequest;
      class DeleteAccountPolicyRequest;
      class DeleteDataProtectionPolicyRequest;
      class DeleteDeliveryRequest;
      class DeleteDeliveryDestinationRequest;
      class DeleteDeliveryDestinationPolicyRequest;
      class DeleteDeliverySourceRequest;
      class DeleteDestinationRequest;
      class DeleteLogAnomalyDetectorRequest;
      class DeleteLogGroupRequest;
      class DeleteLogStreamRequest;
      class DeleteMetricFilterRequest;
      class DeleteQueryDefinitionRequest;
      class DeleteResourcePolicyRequest;
      class DeleteRetentionPolicyRequest;
      class DeleteSubscriptionFilterRequest;
      class DescribeAccountPoliciesRequest;
      class DescribeDeliveriesRequest;
      class DescribeDeliveryDestinationsRequest;
      class DescribeDeliverySourcesRequest;
      class DescribeDestinationsRequest;
      class DescribeExportTasksRequest;
      class DescribeLogGroupsRequest;
      class DescribeLogStreamsRequest;
      class DescribeMetricFiltersRequest;
      class DescribeQueriesRequest;
      class DescribeQueryDefinitionsRequest;
      class DescribeResourcePoliciesRequest;
      class DescribeSubscriptionFiltersRequest;
      class DisassociateKmsKeyRequest;
      class FilterLogEventsRequest;
      class GetDataProtectionPolicyRequest;
      class GetDeliveryRequest;
      class GetDeliveryDestinationRequest;
      class GetDeliveryDestinationPolicyRequest;
      class GetDeliverySourceRequest;
      class GetLogAnomalyDetectorRequest;
      class GetLogEventsRequest;
      class GetLogGroupFieldsRequest;
      class GetLogRecordRequest;
      class GetQueryResultsRequest;
      class ListAnomaliesRequest;
      class ListLogAnomalyDetectorsRequest;
      class ListTagsForResourceRequest;
      class PutAccountPolicyRequest;
      class PutDataProtectionPolicyRequest;
      class PutDeliveryDestinationRequest;
      class PutDeliveryDestinationPolicyRequest;
      class PutDeliverySourceRequest;
      class PutDestinationRequest;
      class PutDestinationPolicyRequest;
      class PutLogEventsRequest;
      class PutMetricFilterRequest;
      class PutQueryDefinitionRequest;
      class PutResourcePolicyRequest;
      class PutRetentionPolicyRequest;
      class PutSubscriptionFilterRequest;
      class StartLiveTailRequest;
      class StartQueryRequest;
      class StopQueryRequest;
      class TagResourceRequest;
      class TestMetricFilterRequest;
      class UntagResourceRequest;
      class UpdateAnomalyRequest;
      class UpdateLogAnomalyDetectorRequest;
      /* End of service model forward declarations required in CloudWatchLogsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> AssociateKmsKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> CancelExportTaskOutcome;
      typedef Aws::Utils::Outcome<CreateDeliveryResult, CloudWatchLogsError> CreateDeliveryOutcome;
      typedef Aws::Utils::Outcome<CreateExportTaskResult, CloudWatchLogsError> CreateExportTaskOutcome;
      typedef Aws::Utils::Outcome<CreateLogAnomalyDetectorResult, CloudWatchLogsError> CreateLogAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> CreateLogGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> CreateLogStreamOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteAccountPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteDataProtectionPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteDeliveryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteDeliveryDestinationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteDeliveryDestinationPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteDeliverySourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteDestinationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteLogAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteLogGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteLogStreamOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteMetricFilterOutcome;
      typedef Aws::Utils::Outcome<DeleteQueryDefinitionResult, CloudWatchLogsError> DeleteQueryDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteRetentionPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DeleteSubscriptionFilterOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountPoliciesResult, CloudWatchLogsError> DescribeAccountPoliciesOutcome;
      typedef Aws::Utils::Outcome<DescribeDeliveriesResult, CloudWatchLogsError> DescribeDeliveriesOutcome;
      typedef Aws::Utils::Outcome<DescribeDeliveryDestinationsResult, CloudWatchLogsError> DescribeDeliveryDestinationsOutcome;
      typedef Aws::Utils::Outcome<DescribeDeliverySourcesResult, CloudWatchLogsError> DescribeDeliverySourcesOutcome;
      typedef Aws::Utils::Outcome<DescribeDestinationsResult, CloudWatchLogsError> DescribeDestinationsOutcome;
      typedef Aws::Utils::Outcome<DescribeExportTasksResult, CloudWatchLogsError> DescribeExportTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeLogGroupsResult, CloudWatchLogsError> DescribeLogGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeLogStreamsResult, CloudWatchLogsError> DescribeLogStreamsOutcome;
      typedef Aws::Utils::Outcome<DescribeMetricFiltersResult, CloudWatchLogsError> DescribeMetricFiltersOutcome;
      typedef Aws::Utils::Outcome<DescribeQueriesResult, CloudWatchLogsError> DescribeQueriesOutcome;
      typedef Aws::Utils::Outcome<DescribeQueryDefinitionsResult, CloudWatchLogsError> DescribeQueryDefinitionsOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePoliciesResult, CloudWatchLogsError> DescribeResourcePoliciesOutcome;
      typedef Aws::Utils::Outcome<DescribeSubscriptionFiltersResult, CloudWatchLogsError> DescribeSubscriptionFiltersOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> DisassociateKmsKeyOutcome;
      typedef Aws::Utils::Outcome<FilterLogEventsResult, CloudWatchLogsError> FilterLogEventsOutcome;
      typedef Aws::Utils::Outcome<GetDataProtectionPolicyResult, CloudWatchLogsError> GetDataProtectionPolicyOutcome;
      typedef Aws::Utils::Outcome<GetDeliveryResult, CloudWatchLogsError> GetDeliveryOutcome;
      typedef Aws::Utils::Outcome<GetDeliveryDestinationResult, CloudWatchLogsError> GetDeliveryDestinationOutcome;
      typedef Aws::Utils::Outcome<GetDeliveryDestinationPolicyResult, CloudWatchLogsError> GetDeliveryDestinationPolicyOutcome;
      typedef Aws::Utils::Outcome<GetDeliverySourceResult, CloudWatchLogsError> GetDeliverySourceOutcome;
      typedef Aws::Utils::Outcome<GetLogAnomalyDetectorResult, CloudWatchLogsError> GetLogAnomalyDetectorOutcome;
      typedef Aws::Utils::Outcome<GetLogEventsResult, CloudWatchLogsError> GetLogEventsOutcome;
      typedef Aws::Utils::Outcome<GetLogGroupFieldsResult, CloudWatchLogsError> GetLogGroupFieldsOutcome;
      typedef Aws::Utils::Outcome<GetLogRecordResult, CloudWatchLogsError> GetLogRecordOutcome;
      typedef Aws::Utils::Outcome<GetQueryResultsResult, CloudWatchLogsError> GetQueryResultsOutcome;
      typedef Aws::Utils::Outcome<ListAnomaliesResult, CloudWatchLogsError> ListAnomaliesOutcome;
      typedef Aws::Utils::Outcome<ListLogAnomalyDetectorsResult, CloudWatchLogsError> ListLogAnomalyDetectorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudWatchLogsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutAccountPolicyResult, CloudWatchLogsError> PutAccountPolicyOutcome;
      typedef Aws::Utils::Outcome<PutDataProtectionPolicyResult, CloudWatchLogsError> PutDataProtectionPolicyOutcome;
      typedef Aws::Utils::Outcome<PutDeliveryDestinationResult, CloudWatchLogsError> PutDeliveryDestinationOutcome;
      typedef Aws::Utils::Outcome<PutDeliveryDestinationPolicyResult, CloudWatchLogsError> PutDeliveryDestinationPolicyOutcome;
      typedef Aws::Utils::Outcome<PutDeliverySourceResult, CloudWatchLogsError> PutDeliverySourceOutcome;
      typedef Aws::Utils::Outcome<PutDestinationResult, CloudWatchLogsError> PutDestinationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutDestinationPolicyOutcome;
      typedef Aws::Utils::Outcome<PutLogEventsResult, CloudWatchLogsError> PutLogEventsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutMetricFilterOutcome;
      typedef Aws::Utils::Outcome<PutQueryDefinitionResult, CloudWatchLogsError> PutQueryDefinitionOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, CloudWatchLogsError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutRetentionPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> PutSubscriptionFilterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> StartLiveTailOutcome;
      typedef Aws::Utils::Outcome<StartQueryResult, CloudWatchLogsError> StartQueryOutcome;
      typedef Aws::Utils::Outcome<StopQueryResult, CloudWatchLogsError> StopQueryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestMetricFilterResult, CloudWatchLogsError> TestMetricFilterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> UpdateAnomalyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudWatchLogsError> UpdateLogAnomalyDetectorOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateKmsKeyOutcome> AssociateKmsKeyOutcomeCallable;
      typedef std::future<CancelExportTaskOutcome> CancelExportTaskOutcomeCallable;
      typedef std::future<CreateDeliveryOutcome> CreateDeliveryOutcomeCallable;
      typedef std::future<CreateExportTaskOutcome> CreateExportTaskOutcomeCallable;
      typedef std::future<CreateLogAnomalyDetectorOutcome> CreateLogAnomalyDetectorOutcomeCallable;
      typedef std::future<CreateLogGroupOutcome> CreateLogGroupOutcomeCallable;
      typedef std::future<CreateLogStreamOutcome> CreateLogStreamOutcomeCallable;
      typedef std::future<DeleteAccountPolicyOutcome> DeleteAccountPolicyOutcomeCallable;
      typedef std::future<DeleteDataProtectionPolicyOutcome> DeleteDataProtectionPolicyOutcomeCallable;
      typedef std::future<DeleteDeliveryOutcome> DeleteDeliveryOutcomeCallable;
      typedef std::future<DeleteDeliveryDestinationOutcome> DeleteDeliveryDestinationOutcomeCallable;
      typedef std::future<DeleteDeliveryDestinationPolicyOutcome> DeleteDeliveryDestinationPolicyOutcomeCallable;
      typedef std::future<DeleteDeliverySourceOutcome> DeleteDeliverySourceOutcomeCallable;
      typedef std::future<DeleteDestinationOutcome> DeleteDestinationOutcomeCallable;
      typedef std::future<DeleteLogAnomalyDetectorOutcome> DeleteLogAnomalyDetectorOutcomeCallable;
      typedef std::future<DeleteLogGroupOutcome> DeleteLogGroupOutcomeCallable;
      typedef std::future<DeleteLogStreamOutcome> DeleteLogStreamOutcomeCallable;
      typedef std::future<DeleteMetricFilterOutcome> DeleteMetricFilterOutcomeCallable;
      typedef std::future<DeleteQueryDefinitionOutcome> DeleteQueryDefinitionOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteRetentionPolicyOutcome> DeleteRetentionPolicyOutcomeCallable;
      typedef std::future<DeleteSubscriptionFilterOutcome> DeleteSubscriptionFilterOutcomeCallable;
      typedef std::future<DescribeAccountPoliciesOutcome> DescribeAccountPoliciesOutcomeCallable;
      typedef std::future<DescribeDeliveriesOutcome> DescribeDeliveriesOutcomeCallable;
      typedef std::future<DescribeDeliveryDestinationsOutcome> DescribeDeliveryDestinationsOutcomeCallable;
      typedef std::future<DescribeDeliverySourcesOutcome> DescribeDeliverySourcesOutcomeCallable;
      typedef std::future<DescribeDestinationsOutcome> DescribeDestinationsOutcomeCallable;
      typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
      typedef std::future<DescribeLogGroupsOutcome> DescribeLogGroupsOutcomeCallable;
      typedef std::future<DescribeLogStreamsOutcome> DescribeLogStreamsOutcomeCallable;
      typedef std::future<DescribeMetricFiltersOutcome> DescribeMetricFiltersOutcomeCallable;
      typedef std::future<DescribeQueriesOutcome> DescribeQueriesOutcomeCallable;
      typedef std::future<DescribeQueryDefinitionsOutcome> DescribeQueryDefinitionsOutcomeCallable;
      typedef std::future<DescribeResourcePoliciesOutcome> DescribeResourcePoliciesOutcomeCallable;
      typedef std::future<DescribeSubscriptionFiltersOutcome> DescribeSubscriptionFiltersOutcomeCallable;
      typedef std::future<DisassociateKmsKeyOutcome> DisassociateKmsKeyOutcomeCallable;
      typedef std::future<FilterLogEventsOutcome> FilterLogEventsOutcomeCallable;
      typedef std::future<GetDataProtectionPolicyOutcome> GetDataProtectionPolicyOutcomeCallable;
      typedef std::future<GetDeliveryOutcome> GetDeliveryOutcomeCallable;
      typedef std::future<GetDeliveryDestinationOutcome> GetDeliveryDestinationOutcomeCallable;
      typedef std::future<GetDeliveryDestinationPolicyOutcome> GetDeliveryDestinationPolicyOutcomeCallable;
      typedef std::future<GetDeliverySourceOutcome> GetDeliverySourceOutcomeCallable;
      typedef std::future<GetLogAnomalyDetectorOutcome> GetLogAnomalyDetectorOutcomeCallable;
      typedef std::future<GetLogEventsOutcome> GetLogEventsOutcomeCallable;
      typedef std::future<GetLogGroupFieldsOutcome> GetLogGroupFieldsOutcomeCallable;
      typedef std::future<GetLogRecordOutcome> GetLogRecordOutcomeCallable;
      typedef std::future<GetQueryResultsOutcome> GetQueryResultsOutcomeCallable;
      typedef std::future<ListAnomaliesOutcome> ListAnomaliesOutcomeCallable;
      typedef std::future<ListLogAnomalyDetectorsOutcome> ListLogAnomalyDetectorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutAccountPolicyOutcome> PutAccountPolicyOutcomeCallable;
      typedef std::future<PutDataProtectionPolicyOutcome> PutDataProtectionPolicyOutcomeCallable;
      typedef std::future<PutDeliveryDestinationOutcome> PutDeliveryDestinationOutcomeCallable;
      typedef std::future<PutDeliveryDestinationPolicyOutcome> PutDeliveryDestinationPolicyOutcomeCallable;
      typedef std::future<PutDeliverySourceOutcome> PutDeliverySourceOutcomeCallable;
      typedef std::future<PutDestinationOutcome> PutDestinationOutcomeCallable;
      typedef std::future<PutDestinationPolicyOutcome> PutDestinationPolicyOutcomeCallable;
      typedef std::future<PutLogEventsOutcome> PutLogEventsOutcomeCallable;
      typedef std::future<PutMetricFilterOutcome> PutMetricFilterOutcomeCallable;
      typedef std::future<PutQueryDefinitionOutcome> PutQueryDefinitionOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<PutRetentionPolicyOutcome> PutRetentionPolicyOutcomeCallable;
      typedef std::future<PutSubscriptionFilterOutcome> PutSubscriptionFilterOutcomeCallable;
      typedef std::future<StartLiveTailOutcome> StartLiveTailOutcomeCallable;
      typedef std::future<StartQueryOutcome> StartQueryOutcomeCallable;
      typedef std::future<StopQueryOutcome> StopQueryOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestMetricFilterOutcome> TestMetricFilterOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAnomalyOutcome> UpdateAnomalyOutcomeCallable;
      typedef std::future<UpdateLogAnomalyDetectorOutcome> UpdateLogAnomalyDetectorOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudWatchLogsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudWatchLogsClient*, const Model::AssociateKmsKeyRequest&, const Model::AssociateKmsKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateKmsKeyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CancelExportTaskRequest&, const Model::CancelExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelExportTaskResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateDeliveryRequest&, const Model::CreateDeliveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeliveryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateExportTaskRequest&, const Model::CreateExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExportTaskResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateLogAnomalyDetectorRequest&, const Model::CreateLogAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateLogGroupRequest&, const Model::CreateLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::CreateLogStreamRequest&, const Model::CreateLogStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteAccountPolicyRequest&, const Model::DeleteAccountPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDataProtectionPolicyRequest&, const Model::DeleteDataProtectionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataProtectionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDeliveryRequest&, const Model::DeleteDeliveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDeliveryDestinationRequest&, const Model::DeleteDeliveryDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDeliveryDestinationPolicyRequest&, const Model::DeleteDeliveryDestinationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliveryDestinationPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDeliverySourceRequest&, const Model::DeleteDeliverySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeliverySourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteDestinationRequest&, const Model::DeleteDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteLogAnomalyDetectorRequest&, const Model::DeleteLogAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteLogGroupRequest&, const Model::DeleteLogGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogGroupResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteLogStreamRequest&, const Model::DeleteLogStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogStreamResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteMetricFilterRequest&, const Model::DeleteMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteQueryDefinitionRequest&, const Model::DeleteQueryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueryDefinitionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteRetentionPolicyRequest&, const Model::DeleteRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DeleteSubscriptionFilterRequest&, const Model::DeleteSubscriptionFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeAccountPoliciesRequest&, const Model::DescribeAccountPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountPoliciesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeDeliveriesRequest&, const Model::DescribeDeliveriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveriesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeDeliveryDestinationsRequest&, const Model::DescribeDeliveryDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliveryDestinationsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeDeliverySourcesRequest&, const Model::DescribeDeliverySourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeliverySourcesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeDestinationsRequest&, const Model::DescribeDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDestinationsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeLogGroupsRequest&, const Model::DescribeLogGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogGroupsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeLogStreamsRequest&, const Model::DescribeLogStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogStreamsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeMetricFiltersRequest&, const Model::DescribeMetricFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricFiltersResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeQueriesRequest&, const Model::DescribeQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQueriesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeQueryDefinitionsRequest&, const Model::DescribeQueryDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQueryDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeResourcePoliciesRequest&, const Model::DescribeResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DescribeSubscriptionFiltersRequest&, const Model::DescribeSubscriptionFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscriptionFiltersResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::DisassociateKmsKeyRequest&, const Model::DisassociateKmsKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateKmsKeyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::FilterLogEventsRequest&, const Model::FilterLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FilterLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetDataProtectionPolicyRequest&, const Model::GetDataProtectionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataProtectionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetDeliveryRequest&, const Model::GetDeliveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliveryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetDeliveryDestinationRequest&, const Model::GetDeliveryDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliveryDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetDeliveryDestinationPolicyRequest&, const Model::GetDeliveryDestinationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliveryDestinationPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetDeliverySourceRequest&, const Model::GetDeliverySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliverySourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogAnomalyDetectorRequest&, const Model::GetLogAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogAnomalyDetectorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogEventsRequest&, const Model::GetLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogGroupFieldsRequest&, const Model::GetLogGroupFieldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogGroupFieldsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetLogRecordRequest&, const Model::GetLogRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogRecordResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::GetQueryResultsRequest&, const Model::GetQueryResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::ListAnomaliesRequest&, const Model::ListAnomaliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomaliesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::ListLogAnomalyDetectorsRequest&, const Model::ListLogAnomalyDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogAnomalyDetectorsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutAccountPolicyRequest&, const Model::PutAccountPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDataProtectionPolicyRequest&, const Model::PutDataProtectionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataProtectionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDeliveryDestinationRequest&, const Model::PutDeliveryDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliveryDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDeliveryDestinationPolicyRequest&, const Model::PutDeliveryDestinationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliveryDestinationPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDeliverySourceRequest&, const Model::PutDeliverySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliverySourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDestinationRequest&, const Model::PutDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutDestinationPolicyRequest&, const Model::PutDestinationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDestinationPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutLogEventsRequest&, const Model::PutLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLogEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutMetricFilterRequest&, const Model::PutMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutQueryDefinitionRequest&, const Model::PutQueryDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutQueryDefinitionResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutRetentionPolicyRequest&, const Model::PutRetentionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionPolicyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::PutSubscriptionFilterRequest&, const Model::PutSubscriptionFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSubscriptionFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::StartLiveTailRequest&, const Model::StartLiveTailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLiveTailResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::StartQueryRequest&, const Model::StartQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::StopQueryRequest&, const Model::StopQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::TestMetricFilterRequest&, const Model::TestMetricFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestMetricFilterResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::UpdateAnomalyRequest&, const Model::UpdateAnomalyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAnomalyResponseReceivedHandler;
    typedef std::function<void(const CloudWatchLogsClient*, const Model::UpdateLogAnomalyDetectorRequest&, const Model::UpdateLogAnomalyDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLogAnomalyDetectorResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudWatchLogs
} // namespace Aws
