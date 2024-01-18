/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudtrail/CloudTrailErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudtrail/CloudTrailEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudTrailClient header */
#include <aws/cloudtrail/model/AddTagsResult.h>
#include <aws/cloudtrail/model/CancelQueryResult.h>
#include <aws/cloudtrail/model/CreateChannelResult.h>
#include <aws/cloudtrail/model/CreateEventDataStoreResult.h>
#include <aws/cloudtrail/model/CreateTrailResult.h>
#include <aws/cloudtrail/model/DeleteChannelResult.h>
#include <aws/cloudtrail/model/DeleteEventDataStoreResult.h>
#include <aws/cloudtrail/model/DeleteResourcePolicyResult.h>
#include <aws/cloudtrail/model/DeleteTrailResult.h>
#include <aws/cloudtrail/model/DeregisterOrganizationDelegatedAdminResult.h>
#include <aws/cloudtrail/model/DescribeQueryResult.h>
#include <aws/cloudtrail/model/DescribeTrailsResult.h>
#include <aws/cloudtrail/model/DisableFederationResult.h>
#include <aws/cloudtrail/model/EnableFederationResult.h>
#include <aws/cloudtrail/model/GetChannelResult.h>
#include <aws/cloudtrail/model/GetEventDataStoreResult.h>
#include <aws/cloudtrail/model/GetEventSelectorsResult.h>
#include <aws/cloudtrail/model/GetImportResult.h>
#include <aws/cloudtrail/model/GetInsightSelectorsResult.h>
#include <aws/cloudtrail/model/GetQueryResultsResult.h>
#include <aws/cloudtrail/model/GetResourcePolicyResult.h>
#include <aws/cloudtrail/model/GetTrailResult.h>
#include <aws/cloudtrail/model/GetTrailStatusResult.h>
#include <aws/cloudtrail/model/ListChannelsResult.h>
#include <aws/cloudtrail/model/ListEventDataStoresResult.h>
#include <aws/cloudtrail/model/ListImportFailuresResult.h>
#include <aws/cloudtrail/model/ListImportsResult.h>
#include <aws/cloudtrail/model/ListInsightsMetricDataResult.h>
#include <aws/cloudtrail/model/ListPublicKeysResult.h>
#include <aws/cloudtrail/model/ListQueriesResult.h>
#include <aws/cloudtrail/model/ListTagsResult.h>
#include <aws/cloudtrail/model/ListTrailsResult.h>
#include <aws/cloudtrail/model/LookupEventsResult.h>
#include <aws/cloudtrail/model/PutEventSelectorsResult.h>
#include <aws/cloudtrail/model/PutInsightSelectorsResult.h>
#include <aws/cloudtrail/model/PutResourcePolicyResult.h>
#include <aws/cloudtrail/model/RegisterOrganizationDelegatedAdminResult.h>
#include <aws/cloudtrail/model/RemoveTagsResult.h>
#include <aws/cloudtrail/model/RestoreEventDataStoreResult.h>
#include <aws/cloudtrail/model/StartEventDataStoreIngestionResult.h>
#include <aws/cloudtrail/model/StartImportResult.h>
#include <aws/cloudtrail/model/StartLoggingResult.h>
#include <aws/cloudtrail/model/StartQueryResult.h>
#include <aws/cloudtrail/model/StopEventDataStoreIngestionResult.h>
#include <aws/cloudtrail/model/StopImportResult.h>
#include <aws/cloudtrail/model/StopLoggingResult.h>
#include <aws/cloudtrail/model/UpdateChannelResult.h>
#include <aws/cloudtrail/model/UpdateEventDataStoreResult.h>
#include <aws/cloudtrail/model/UpdateTrailResult.h>
/* End of service model headers required in CloudTrailClient header */

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

  namespace CloudTrail
  {
    using CloudTrailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudTrailEndpointProviderBase = Aws::CloudTrail::Endpoint::CloudTrailEndpointProviderBase;
    using CloudTrailEndpointProvider = Aws::CloudTrail::Endpoint::CloudTrailEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudTrailClient header */
      class AddTagsRequest;
      class CancelQueryRequest;
      class CreateChannelRequest;
      class CreateEventDataStoreRequest;
      class CreateTrailRequest;
      class DeleteChannelRequest;
      class DeleteEventDataStoreRequest;
      class DeleteResourcePolicyRequest;
      class DeleteTrailRequest;
      class DeregisterOrganizationDelegatedAdminRequest;
      class DescribeQueryRequest;
      class DescribeTrailsRequest;
      class DisableFederationRequest;
      class EnableFederationRequest;
      class GetChannelRequest;
      class GetEventDataStoreRequest;
      class GetEventSelectorsRequest;
      class GetImportRequest;
      class GetInsightSelectorsRequest;
      class GetQueryResultsRequest;
      class GetResourcePolicyRequest;
      class GetTrailRequest;
      class GetTrailStatusRequest;
      class ListChannelsRequest;
      class ListEventDataStoresRequest;
      class ListImportFailuresRequest;
      class ListImportsRequest;
      class ListInsightsMetricDataRequest;
      class ListPublicKeysRequest;
      class ListQueriesRequest;
      class ListTagsRequest;
      class ListTrailsRequest;
      class LookupEventsRequest;
      class PutEventSelectorsRequest;
      class PutInsightSelectorsRequest;
      class PutResourcePolicyRequest;
      class RegisterOrganizationDelegatedAdminRequest;
      class RemoveTagsRequest;
      class RestoreEventDataStoreRequest;
      class StartEventDataStoreIngestionRequest;
      class StartImportRequest;
      class StartLoggingRequest;
      class StartQueryRequest;
      class StopEventDataStoreIngestionRequest;
      class StopImportRequest;
      class StopLoggingRequest;
      class UpdateChannelRequest;
      class UpdateEventDataStoreRequest;
      class UpdateTrailRequest;
      /* End of service model forward declarations required in CloudTrailClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddTagsResult, CloudTrailError> AddTagsOutcome;
      typedef Aws::Utils::Outcome<CancelQueryResult, CloudTrailError> CancelQueryOutcome;
      typedef Aws::Utils::Outcome<CreateChannelResult, CloudTrailError> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateEventDataStoreResult, CloudTrailError> CreateEventDataStoreOutcome;
      typedef Aws::Utils::Outcome<CreateTrailResult, CloudTrailError> CreateTrailOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelResult, CloudTrailError> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteEventDataStoreResult, CloudTrailError> DeleteEventDataStoreOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, CloudTrailError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteTrailResult, CloudTrailError> DeleteTrailOutcome;
      typedef Aws::Utils::Outcome<DeregisterOrganizationDelegatedAdminResult, CloudTrailError> DeregisterOrganizationDelegatedAdminOutcome;
      typedef Aws::Utils::Outcome<DescribeQueryResult, CloudTrailError> DescribeQueryOutcome;
      typedef Aws::Utils::Outcome<DescribeTrailsResult, CloudTrailError> DescribeTrailsOutcome;
      typedef Aws::Utils::Outcome<DisableFederationResult, CloudTrailError> DisableFederationOutcome;
      typedef Aws::Utils::Outcome<EnableFederationResult, CloudTrailError> EnableFederationOutcome;
      typedef Aws::Utils::Outcome<GetChannelResult, CloudTrailError> GetChannelOutcome;
      typedef Aws::Utils::Outcome<GetEventDataStoreResult, CloudTrailError> GetEventDataStoreOutcome;
      typedef Aws::Utils::Outcome<GetEventSelectorsResult, CloudTrailError> GetEventSelectorsOutcome;
      typedef Aws::Utils::Outcome<GetImportResult, CloudTrailError> GetImportOutcome;
      typedef Aws::Utils::Outcome<GetInsightSelectorsResult, CloudTrailError> GetInsightSelectorsOutcome;
      typedef Aws::Utils::Outcome<GetQueryResultsResult, CloudTrailError> GetQueryResultsOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, CloudTrailError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetTrailResult, CloudTrailError> GetTrailOutcome;
      typedef Aws::Utils::Outcome<GetTrailStatusResult, CloudTrailError> GetTrailStatusOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, CloudTrailError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListEventDataStoresResult, CloudTrailError> ListEventDataStoresOutcome;
      typedef Aws::Utils::Outcome<ListImportFailuresResult, CloudTrailError> ListImportFailuresOutcome;
      typedef Aws::Utils::Outcome<ListImportsResult, CloudTrailError> ListImportsOutcome;
      typedef Aws::Utils::Outcome<ListInsightsMetricDataResult, CloudTrailError> ListInsightsMetricDataOutcome;
      typedef Aws::Utils::Outcome<ListPublicKeysResult, CloudTrailError> ListPublicKeysOutcome;
      typedef Aws::Utils::Outcome<ListQueriesResult, CloudTrailError> ListQueriesOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, CloudTrailError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<ListTrailsResult, CloudTrailError> ListTrailsOutcome;
      typedef Aws::Utils::Outcome<LookupEventsResult, CloudTrailError> LookupEventsOutcome;
      typedef Aws::Utils::Outcome<PutEventSelectorsResult, CloudTrailError> PutEventSelectorsOutcome;
      typedef Aws::Utils::Outcome<PutInsightSelectorsResult, CloudTrailError> PutInsightSelectorsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, CloudTrailError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<RegisterOrganizationDelegatedAdminResult, CloudTrailError> RegisterOrganizationDelegatedAdminOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsResult, CloudTrailError> RemoveTagsOutcome;
      typedef Aws::Utils::Outcome<RestoreEventDataStoreResult, CloudTrailError> RestoreEventDataStoreOutcome;
      typedef Aws::Utils::Outcome<StartEventDataStoreIngestionResult, CloudTrailError> StartEventDataStoreIngestionOutcome;
      typedef Aws::Utils::Outcome<StartImportResult, CloudTrailError> StartImportOutcome;
      typedef Aws::Utils::Outcome<StartLoggingResult, CloudTrailError> StartLoggingOutcome;
      typedef Aws::Utils::Outcome<StartQueryResult, CloudTrailError> StartQueryOutcome;
      typedef Aws::Utils::Outcome<StopEventDataStoreIngestionResult, CloudTrailError> StopEventDataStoreIngestionOutcome;
      typedef Aws::Utils::Outcome<StopImportResult, CloudTrailError> StopImportOutcome;
      typedef Aws::Utils::Outcome<StopLoggingResult, CloudTrailError> StopLoggingOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, CloudTrailError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateEventDataStoreResult, CloudTrailError> UpdateEventDataStoreOutcome;
      typedef Aws::Utils::Outcome<UpdateTrailResult, CloudTrailError> UpdateTrailOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
      typedef std::future<CancelQueryOutcome> CancelQueryOutcomeCallable;
      typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
      typedef std::future<CreateEventDataStoreOutcome> CreateEventDataStoreOutcomeCallable;
      typedef std::future<CreateTrailOutcome> CreateTrailOutcomeCallable;
      typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
      typedef std::future<DeleteEventDataStoreOutcome> DeleteEventDataStoreOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteTrailOutcome> DeleteTrailOutcomeCallable;
      typedef std::future<DeregisterOrganizationDelegatedAdminOutcome> DeregisterOrganizationDelegatedAdminOutcomeCallable;
      typedef std::future<DescribeQueryOutcome> DescribeQueryOutcomeCallable;
      typedef std::future<DescribeTrailsOutcome> DescribeTrailsOutcomeCallable;
      typedef std::future<DisableFederationOutcome> DisableFederationOutcomeCallable;
      typedef std::future<EnableFederationOutcome> EnableFederationOutcomeCallable;
      typedef std::future<GetChannelOutcome> GetChannelOutcomeCallable;
      typedef std::future<GetEventDataStoreOutcome> GetEventDataStoreOutcomeCallable;
      typedef std::future<GetEventSelectorsOutcome> GetEventSelectorsOutcomeCallable;
      typedef std::future<GetImportOutcome> GetImportOutcomeCallable;
      typedef std::future<GetInsightSelectorsOutcome> GetInsightSelectorsOutcomeCallable;
      typedef std::future<GetQueryResultsOutcome> GetQueryResultsOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetTrailOutcome> GetTrailOutcomeCallable;
      typedef std::future<GetTrailStatusOutcome> GetTrailStatusOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListEventDataStoresOutcome> ListEventDataStoresOutcomeCallable;
      typedef std::future<ListImportFailuresOutcome> ListImportFailuresOutcomeCallable;
      typedef std::future<ListImportsOutcome> ListImportsOutcomeCallable;
      typedef std::future<ListInsightsMetricDataOutcome> ListInsightsMetricDataOutcomeCallable;
      typedef std::future<ListPublicKeysOutcome> ListPublicKeysOutcomeCallable;
      typedef std::future<ListQueriesOutcome> ListQueriesOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<ListTrailsOutcome> ListTrailsOutcomeCallable;
      typedef std::future<LookupEventsOutcome> LookupEventsOutcomeCallable;
      typedef std::future<PutEventSelectorsOutcome> PutEventSelectorsOutcomeCallable;
      typedef std::future<PutInsightSelectorsOutcome> PutInsightSelectorsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RegisterOrganizationDelegatedAdminOutcome> RegisterOrganizationDelegatedAdminOutcomeCallable;
      typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
      typedef std::future<RestoreEventDataStoreOutcome> RestoreEventDataStoreOutcomeCallable;
      typedef std::future<StartEventDataStoreIngestionOutcome> StartEventDataStoreIngestionOutcomeCallable;
      typedef std::future<StartImportOutcome> StartImportOutcomeCallable;
      typedef std::future<StartLoggingOutcome> StartLoggingOutcomeCallable;
      typedef std::future<StartQueryOutcome> StartQueryOutcomeCallable;
      typedef std::future<StopEventDataStoreIngestionOutcome> StopEventDataStoreIngestionOutcomeCallable;
      typedef std::future<StopImportOutcome> StopImportOutcomeCallable;
      typedef std::future<StopLoggingOutcome> StopLoggingOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateEventDataStoreOutcome> UpdateEventDataStoreOutcomeCallable;
      typedef std::future<UpdateTrailOutcome> UpdateTrailOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudTrailClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudTrailClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::CancelQueryRequest&, const Model::CancelQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelQueryResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::CreateEventDataStoreRequest&, const Model::CreateEventDataStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventDataStoreResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::CreateTrailRequest&, const Model::CreateTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrailResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DeleteEventDataStoreRequest&, const Model::DeleteEventDataStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventDataStoreResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DeleteTrailRequest&, const Model::DeleteTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrailResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DeregisterOrganizationDelegatedAdminRequest&, const Model::DeregisterOrganizationDelegatedAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterOrganizationDelegatedAdminResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DescribeQueryRequest&, const Model::DescribeQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeQueryResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DescribeTrailsRequest&, const Model::DescribeTrailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrailsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DisableFederationRequest&, const Model::DisableFederationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableFederationResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::EnableFederationRequest&, const Model::EnableFederationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableFederationResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetChannelRequest&, const Model::GetChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetEventDataStoreRequest&, const Model::GetEventDataStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventDataStoreResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetEventSelectorsRequest&, const Model::GetEventSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetImportRequest&, const Model::GetImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetInsightSelectorsRequest&, const Model::GetInsightSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetQueryResultsRequest&, const Model::GetQueryResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetTrailRequest&, const Model::GetTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrailResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetTrailStatusRequest&, const Model::GetTrailStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrailStatusResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListEventDataStoresRequest&, const Model::ListEventDataStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventDataStoresResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListImportFailuresRequest&, const Model::ListImportFailuresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportFailuresResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListImportsRequest&, const Model::ListImportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListInsightsMetricDataRequest&, const Model::ListInsightsMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInsightsMetricDataResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListPublicKeysRequest&, const Model::ListPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeysResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListQueriesRequest&, const Model::ListQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueriesResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListTrailsRequest&, const Model::ListTrailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrailsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::LookupEventsRequest&, const Model::LookupEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LookupEventsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::PutEventSelectorsRequest&, const Model::PutEventSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::PutInsightSelectorsRequest&, const Model::PutInsightSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInsightSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::RegisterOrganizationDelegatedAdminRequest&, const Model::RegisterOrganizationDelegatedAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterOrganizationDelegatedAdminResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::RestoreEventDataStoreRequest&, const Model::RestoreEventDataStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreEventDataStoreResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StartEventDataStoreIngestionRequest&, const Model::StartEventDataStoreIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEventDataStoreIngestionResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StartImportRequest&, const Model::StartImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StartLoggingRequest&, const Model::StartLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLoggingResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StartQueryRequest&, const Model::StartQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StopEventDataStoreIngestionRequest&, const Model::StopEventDataStoreIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEventDataStoreIngestionResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StopImportRequest&, const Model::StopImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopImportResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StopLoggingRequest&, const Model::StopLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopLoggingResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::UpdateEventDataStoreRequest&, const Model::UpdateEventDataStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventDataStoreResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::UpdateTrailRequest&, const Model::UpdateTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrailResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudTrail
} // namespace Aws
