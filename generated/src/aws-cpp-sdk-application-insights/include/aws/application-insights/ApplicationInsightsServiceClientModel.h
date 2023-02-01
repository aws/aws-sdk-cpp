/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/application-insights/ApplicationInsightsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/application-insights/ApplicationInsightsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ApplicationInsightsClient header */
#include <aws/application-insights/model/CreateApplicationResult.h>
#include <aws/application-insights/model/CreateComponentResult.h>
#include <aws/application-insights/model/CreateLogPatternResult.h>
#include <aws/application-insights/model/DeleteApplicationResult.h>
#include <aws/application-insights/model/DeleteComponentResult.h>
#include <aws/application-insights/model/DeleteLogPatternResult.h>
#include <aws/application-insights/model/DescribeApplicationResult.h>
#include <aws/application-insights/model/DescribeComponentResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationResult.h>
#include <aws/application-insights/model/DescribeLogPatternResult.h>
#include <aws/application-insights/model/DescribeObservationResult.h>
#include <aws/application-insights/model/DescribeProblemResult.h>
#include <aws/application-insights/model/DescribeProblemObservationsResult.h>
#include <aws/application-insights/model/ListApplicationsResult.h>
#include <aws/application-insights/model/ListComponentsResult.h>
#include <aws/application-insights/model/ListConfigurationHistoryResult.h>
#include <aws/application-insights/model/ListLogPatternSetsResult.h>
#include <aws/application-insights/model/ListLogPatternsResult.h>
#include <aws/application-insights/model/ListProblemsResult.h>
#include <aws/application-insights/model/ListTagsForResourceResult.h>
#include <aws/application-insights/model/TagResourceResult.h>
#include <aws/application-insights/model/UntagResourceResult.h>
#include <aws/application-insights/model/UpdateApplicationResult.h>
#include <aws/application-insights/model/UpdateComponentResult.h>
#include <aws/application-insights/model/UpdateComponentConfigurationResult.h>
#include <aws/application-insights/model/UpdateLogPatternResult.h>
/* End of service model headers required in ApplicationInsightsClient header */

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

  namespace ApplicationInsights
  {
    using ApplicationInsightsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ApplicationInsightsEndpointProviderBase = Aws::ApplicationInsights::Endpoint::ApplicationInsightsEndpointProviderBase;
    using ApplicationInsightsEndpointProvider = Aws::ApplicationInsights::Endpoint::ApplicationInsightsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ApplicationInsightsClient header */
      class CreateApplicationRequest;
      class CreateComponentRequest;
      class CreateLogPatternRequest;
      class DeleteApplicationRequest;
      class DeleteComponentRequest;
      class DeleteLogPatternRequest;
      class DescribeApplicationRequest;
      class DescribeComponentRequest;
      class DescribeComponentConfigurationRequest;
      class DescribeComponentConfigurationRecommendationRequest;
      class DescribeLogPatternRequest;
      class DescribeObservationRequest;
      class DescribeProblemRequest;
      class DescribeProblemObservationsRequest;
      class ListApplicationsRequest;
      class ListComponentsRequest;
      class ListConfigurationHistoryRequest;
      class ListLogPatternSetsRequest;
      class ListLogPatternsRequest;
      class ListProblemsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateComponentRequest;
      class UpdateComponentConfigurationRequest;
      class UpdateLogPatternRequest;
      /* End of service model forward declarations required in ApplicationInsightsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateApplicationResult, ApplicationInsightsError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateComponentResult, ApplicationInsightsError> CreateComponentOutcome;
      typedef Aws::Utils::Outcome<CreateLogPatternResult, ApplicationInsightsError> CreateLogPatternOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, ApplicationInsightsError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteComponentResult, ApplicationInsightsError> DeleteComponentOutcome;
      typedef Aws::Utils::Outcome<DeleteLogPatternResult, ApplicationInsightsError> DeleteLogPatternOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationResult, ApplicationInsightsError> DescribeApplicationOutcome;
      typedef Aws::Utils::Outcome<DescribeComponentResult, ApplicationInsightsError> DescribeComponentOutcome;
      typedef Aws::Utils::Outcome<DescribeComponentConfigurationResult, ApplicationInsightsError> DescribeComponentConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeComponentConfigurationRecommendationResult, ApplicationInsightsError> DescribeComponentConfigurationRecommendationOutcome;
      typedef Aws::Utils::Outcome<DescribeLogPatternResult, ApplicationInsightsError> DescribeLogPatternOutcome;
      typedef Aws::Utils::Outcome<DescribeObservationResult, ApplicationInsightsError> DescribeObservationOutcome;
      typedef Aws::Utils::Outcome<DescribeProblemResult, ApplicationInsightsError> DescribeProblemOutcome;
      typedef Aws::Utils::Outcome<DescribeProblemObservationsResult, ApplicationInsightsError> DescribeProblemObservationsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, ApplicationInsightsError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListComponentsResult, ApplicationInsightsError> ListComponentsOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationHistoryResult, ApplicationInsightsError> ListConfigurationHistoryOutcome;
      typedef Aws::Utils::Outcome<ListLogPatternSetsResult, ApplicationInsightsError> ListLogPatternSetsOutcome;
      typedef Aws::Utils::Outcome<ListLogPatternsResult, ApplicationInsightsError> ListLogPatternsOutcome;
      typedef Aws::Utils::Outcome<ListProblemsResult, ApplicationInsightsError> ListProblemsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ApplicationInsightsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ApplicationInsightsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ApplicationInsightsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, ApplicationInsightsError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateComponentResult, ApplicationInsightsError> UpdateComponentOutcome;
      typedef Aws::Utils::Outcome<UpdateComponentConfigurationResult, ApplicationInsightsError> UpdateComponentConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateLogPatternResult, ApplicationInsightsError> UpdateLogPatternOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateComponentOutcome> CreateComponentOutcomeCallable;
      typedef std::future<CreateLogPatternOutcome> CreateLogPatternOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
      typedef std::future<DeleteLogPatternOutcome> DeleteLogPatternOutcomeCallable;
      typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
      typedef std::future<DescribeComponentOutcome> DescribeComponentOutcomeCallable;
      typedef std::future<DescribeComponentConfigurationOutcome> DescribeComponentConfigurationOutcomeCallable;
      typedef std::future<DescribeComponentConfigurationRecommendationOutcome> DescribeComponentConfigurationRecommendationOutcomeCallable;
      typedef std::future<DescribeLogPatternOutcome> DescribeLogPatternOutcomeCallable;
      typedef std::future<DescribeObservationOutcome> DescribeObservationOutcomeCallable;
      typedef std::future<DescribeProblemOutcome> DescribeProblemOutcomeCallable;
      typedef std::future<DescribeProblemObservationsOutcome> DescribeProblemObservationsOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
      typedef std::future<ListConfigurationHistoryOutcome> ListConfigurationHistoryOutcomeCallable;
      typedef std::future<ListLogPatternSetsOutcome> ListLogPatternSetsOutcomeCallable;
      typedef std::future<ListLogPatternsOutcome> ListLogPatternsOutcomeCallable;
      typedef std::future<ListProblemsOutcome> ListProblemsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateComponentOutcome> UpdateComponentOutcomeCallable;
      typedef std::future<UpdateComponentConfigurationOutcome> UpdateComponentConfigurationOutcomeCallable;
      typedef std::future<UpdateLogPatternOutcome> UpdateLogPatternOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ApplicationInsightsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateComponentRequest&, const Model::CreateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateLogPatternRequest&, const Model::CreateLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogPatternResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteLogPatternRequest&, const Model::DeleteLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogPatternResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentRequest&, const Model::DescribeComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentConfigurationRequest&, const Model::DescribeComponentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentConfigurationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentConfigurationRecommendationRequest&, const Model::DescribeComponentConfigurationRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentConfigurationRecommendationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeLogPatternRequest&, const Model::DescribeLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogPatternResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeObservationRequest&, const Model::DescribeObservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObservationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeProblemRequest&, const Model::DescribeProblemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProblemResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeProblemObservationsRequest&, const Model::DescribeProblemObservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProblemObservationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListConfigurationHistoryRequest&, const Model::ListConfigurationHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationHistoryResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListLogPatternSetsRequest&, const Model::ListLogPatternSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogPatternSetsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListLogPatternsRequest&, const Model::ListLogPatternsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogPatternsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListProblemsRequest&, const Model::ListProblemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProblemsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateComponentRequest&, const Model::UpdateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateComponentConfigurationRequest&, const Model::UpdateComponentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentConfigurationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateLogPatternRequest&, const Model::UpdateLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLogPatternResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ApplicationInsights
} // namespace Aws
