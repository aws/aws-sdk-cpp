/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/emr-serverless/EMRServerlessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/emr-serverless/EMRServerlessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EMRServerlessClient header */
#include <aws/emr-serverless/model/CancelJobRunResult.h>
#include <aws/emr-serverless/model/CreateApplicationResult.h>
#include <aws/emr-serverless/model/DeleteApplicationResult.h>
#include <aws/emr-serverless/model/GetApplicationResult.h>
#include <aws/emr-serverless/model/GetDashboardForJobRunResult.h>
#include <aws/emr-serverless/model/GetJobRunResult.h>
#include <aws/emr-serverless/model/ListApplicationsResult.h>
#include <aws/emr-serverless/model/ListJobRunsResult.h>
#include <aws/emr-serverless/model/ListTagsForResourceResult.h>
#include <aws/emr-serverless/model/StartApplicationResult.h>
#include <aws/emr-serverless/model/StartJobRunResult.h>
#include <aws/emr-serverless/model/StopApplicationResult.h>
#include <aws/emr-serverless/model/TagResourceResult.h>
#include <aws/emr-serverless/model/UntagResourceResult.h>
#include <aws/emr-serverless/model/UpdateApplicationResult.h>
/* End of service model headers required in EMRServerlessClient header */

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

  namespace EMRServerless
  {
    using EMRServerlessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EMRServerlessEndpointProviderBase = Aws::EMRServerless::Endpoint::EMRServerlessEndpointProviderBase;
    using EMRServerlessEndpointProvider = Aws::EMRServerless::Endpoint::EMRServerlessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EMRServerlessClient header */
      class CancelJobRunRequest;
      class CreateApplicationRequest;
      class DeleteApplicationRequest;
      class GetApplicationRequest;
      class GetDashboardForJobRunRequest;
      class GetJobRunRequest;
      class ListApplicationsRequest;
      class ListJobRunsRequest;
      class ListTagsForResourceRequest;
      class StartApplicationRequest;
      class StartJobRunRequest;
      class StopApplicationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      /* End of service model forward declarations required in EMRServerlessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJobRunResult, EMRServerlessError> CancelJobRunOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, EMRServerlessError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, EMRServerlessError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, EMRServerlessError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetDashboardForJobRunResult, EMRServerlessError> GetDashboardForJobRunOutcome;
      typedef Aws::Utils::Outcome<GetJobRunResult, EMRServerlessError> GetJobRunOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, EMRServerlessError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListJobRunsResult, EMRServerlessError> ListJobRunsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, EMRServerlessError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartApplicationResult, EMRServerlessError> StartApplicationOutcome;
      typedef Aws::Utils::Outcome<StartJobRunResult, EMRServerlessError> StartJobRunOutcome;
      typedef Aws::Utils::Outcome<StopApplicationResult, EMRServerlessError> StopApplicationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, EMRServerlessError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, EMRServerlessError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, EMRServerlessError> UpdateApplicationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJobRunOutcome> CancelJobRunOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetDashboardForJobRunOutcome> GetDashboardForJobRunOutcomeCallable;
      typedef std::future<GetJobRunOutcome> GetJobRunOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListJobRunsOutcome> ListJobRunsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
      typedef std::future<StartJobRunOutcome> StartJobRunOutcomeCallable;
      typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EMRServerlessClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EMRServerlessClient*, const Model::CancelJobRunRequest&, const Model::CancelJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::GetDashboardForJobRunRequest&, const Model::GetDashboardForJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDashboardForJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::GetJobRunRequest&, const Model::GetJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::ListJobRunsRequest&, const Model::ListJobRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobRunsResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::StartJobRunRequest&, const Model::StartJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobRunResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopApplicationResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const EMRServerlessClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EMRServerless
} // namespace Aws
