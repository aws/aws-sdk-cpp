/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/internetmonitor/InternetMonitorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/internetmonitor/InternetMonitorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in InternetMonitorClient header */
#include <aws/internetmonitor/model/CreateMonitorResult.h>
#include <aws/internetmonitor/model/DeleteMonitorResult.h>
#include <aws/internetmonitor/model/GetHealthEventResult.h>
#include <aws/internetmonitor/model/GetMonitorResult.h>
#include <aws/internetmonitor/model/GetQueryResultsResult.h>
#include <aws/internetmonitor/model/GetQueryStatusResult.h>
#include <aws/internetmonitor/model/ListHealthEventsResult.h>
#include <aws/internetmonitor/model/ListMonitorsResult.h>
#include <aws/internetmonitor/model/ListTagsForResourceResult.h>
#include <aws/internetmonitor/model/StartQueryResult.h>
#include <aws/internetmonitor/model/StopQueryResult.h>
#include <aws/internetmonitor/model/TagResourceResult.h>
#include <aws/internetmonitor/model/UntagResourceResult.h>
#include <aws/internetmonitor/model/UpdateMonitorResult.h>
/* End of service model headers required in InternetMonitorClient header */

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

  namespace InternetMonitor
  {
    using InternetMonitorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using InternetMonitorEndpointProviderBase = Aws::InternetMonitor::Endpoint::InternetMonitorEndpointProviderBase;
    using InternetMonitorEndpointProvider = Aws::InternetMonitor::Endpoint::InternetMonitorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in InternetMonitorClient header */
      class CreateMonitorRequest;
      class DeleteMonitorRequest;
      class GetHealthEventRequest;
      class GetMonitorRequest;
      class GetQueryResultsRequest;
      class GetQueryStatusRequest;
      class ListHealthEventsRequest;
      class ListMonitorsRequest;
      class ListTagsForResourceRequest;
      class StartQueryRequest;
      class StopQueryRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateMonitorRequest;
      /* End of service model forward declarations required in InternetMonitorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateMonitorResult, InternetMonitorError> CreateMonitorOutcome;
      typedef Aws::Utils::Outcome<DeleteMonitorResult, InternetMonitorError> DeleteMonitorOutcome;
      typedef Aws::Utils::Outcome<GetHealthEventResult, InternetMonitorError> GetHealthEventOutcome;
      typedef Aws::Utils::Outcome<GetMonitorResult, InternetMonitorError> GetMonitorOutcome;
      typedef Aws::Utils::Outcome<GetQueryResultsResult, InternetMonitorError> GetQueryResultsOutcome;
      typedef Aws::Utils::Outcome<GetQueryStatusResult, InternetMonitorError> GetQueryStatusOutcome;
      typedef Aws::Utils::Outcome<ListHealthEventsResult, InternetMonitorError> ListHealthEventsOutcome;
      typedef Aws::Utils::Outcome<ListMonitorsResult, InternetMonitorError> ListMonitorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, InternetMonitorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartQueryResult, InternetMonitorError> StartQueryOutcome;
      typedef Aws::Utils::Outcome<StopQueryResult, InternetMonitorError> StopQueryOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, InternetMonitorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, InternetMonitorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateMonitorResult, InternetMonitorError> UpdateMonitorOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateMonitorOutcome> CreateMonitorOutcomeCallable;
      typedef std::future<DeleteMonitorOutcome> DeleteMonitorOutcomeCallable;
      typedef std::future<GetHealthEventOutcome> GetHealthEventOutcomeCallable;
      typedef std::future<GetMonitorOutcome> GetMonitorOutcomeCallable;
      typedef std::future<GetQueryResultsOutcome> GetQueryResultsOutcomeCallable;
      typedef std::future<GetQueryStatusOutcome> GetQueryStatusOutcomeCallable;
      typedef std::future<ListHealthEventsOutcome> ListHealthEventsOutcomeCallable;
      typedef std::future<ListMonitorsOutcome> ListMonitorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartQueryOutcome> StartQueryOutcomeCallable;
      typedef std::future<StopQueryOutcome> StopQueryOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateMonitorOutcome> UpdateMonitorOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class InternetMonitorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const InternetMonitorClient*, const Model::CreateMonitorRequest&, const Model::CreateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitorResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::DeleteMonitorRequest&, const Model::DeleteMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitorResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::GetHealthEventRequest&, const Model::GetHealthEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHealthEventResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::GetMonitorRequest&, const Model::GetMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMonitorResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::GetQueryResultsRequest&, const Model::GetQueryResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::GetQueryStatusRequest&, const Model::GetQueryStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryStatusResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::ListHealthEventsRequest&, const Model::ListHealthEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHealthEventsResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::ListMonitorsRequest&, const Model::ListMonitorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitorsResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::StartQueryRequest&, const Model::StartQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::StopQueryRequest&, const Model::StopQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const InternetMonitorClient*, const Model::UpdateMonitorRequest&, const Model::UpdateMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitorResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace InternetMonitor
} // namespace Aws
