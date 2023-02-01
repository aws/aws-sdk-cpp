/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codecatalyst/CodeCatalystErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codecatalyst/CodeCatalystEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeCatalystClient header */
#include <aws/codecatalyst/model/CreateAccessTokenResult.h>
#include <aws/codecatalyst/model/CreateDevEnvironmentResult.h>
#include <aws/codecatalyst/model/CreateProjectResult.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryBranchResult.h>
#include <aws/codecatalyst/model/DeleteAccessTokenResult.h>
#include <aws/codecatalyst/model/DeleteDevEnvironmentResult.h>
#include <aws/codecatalyst/model/GetDevEnvironmentResult.h>
#include <aws/codecatalyst/model/GetProjectResult.h>
#include <aws/codecatalyst/model/GetSourceRepositoryCloneUrlsResult.h>
#include <aws/codecatalyst/model/GetSpaceResult.h>
#include <aws/codecatalyst/model/GetSubscriptionResult.h>
#include <aws/codecatalyst/model/GetUserDetailsResult.h>
#include <aws/codecatalyst/model/ListAccessTokensResult.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsResult.h>
#include <aws/codecatalyst/model/ListEventLogsResult.h>
#include <aws/codecatalyst/model/ListProjectsResult.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesResult.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesResult.h>
#include <aws/codecatalyst/model/ListSpacesResult.h>
#include <aws/codecatalyst/model/StartDevEnvironmentResult.h>
#include <aws/codecatalyst/model/StartDevEnvironmentSessionResult.h>
#include <aws/codecatalyst/model/StopDevEnvironmentResult.h>
#include <aws/codecatalyst/model/UpdateDevEnvironmentResult.h>
#include <aws/codecatalyst/model/VerifySessionResult.h>
/* End of service model headers required in CodeCatalystClient header */

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
    class BearerTokenAuthSignerProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace CodeCatalyst
  {
    using CodeCatalystClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeCatalystEndpointProviderBase = Aws::CodeCatalyst::Endpoint::CodeCatalystEndpointProviderBase;
    using CodeCatalystEndpointProvider = Aws::CodeCatalyst::Endpoint::CodeCatalystEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeCatalystClient header */
      class CreateAccessTokenRequest;
      class CreateDevEnvironmentRequest;
      class CreateProjectRequest;
      class CreateSourceRepositoryBranchRequest;
      class DeleteAccessTokenRequest;
      class DeleteDevEnvironmentRequest;
      class GetDevEnvironmentRequest;
      class GetProjectRequest;
      class GetSourceRepositoryCloneUrlsRequest;
      class GetSpaceRequest;
      class GetSubscriptionRequest;
      class GetUserDetailsRequest;
      class ListAccessTokensRequest;
      class ListDevEnvironmentsRequest;
      class ListEventLogsRequest;
      class ListProjectsRequest;
      class ListSourceRepositoriesRequest;
      class ListSourceRepositoryBranchesRequest;
      class ListSpacesRequest;
      class StartDevEnvironmentRequest;
      class StartDevEnvironmentSessionRequest;
      class StopDevEnvironmentRequest;
      class UpdateDevEnvironmentRequest;
      /* End of service model forward declarations required in CodeCatalystClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAccessTokenResult, CodeCatalystError> CreateAccessTokenOutcome;
      typedef Aws::Utils::Outcome<CreateDevEnvironmentResult, CodeCatalystError> CreateDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, CodeCatalystError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateSourceRepositoryBranchResult, CodeCatalystError> CreateSourceRepositoryBranchOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessTokenResult, CodeCatalystError> DeleteAccessTokenOutcome;
      typedef Aws::Utils::Outcome<DeleteDevEnvironmentResult, CodeCatalystError> DeleteDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetDevEnvironmentResult, CodeCatalystError> GetDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetProjectResult, CodeCatalystError> GetProjectOutcome;
      typedef Aws::Utils::Outcome<GetSourceRepositoryCloneUrlsResult, CodeCatalystError> GetSourceRepositoryCloneUrlsOutcome;
      typedef Aws::Utils::Outcome<GetSpaceResult, CodeCatalystError> GetSpaceOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionResult, CodeCatalystError> GetSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetUserDetailsResult, CodeCatalystError> GetUserDetailsOutcome;
      typedef Aws::Utils::Outcome<ListAccessTokensResult, CodeCatalystError> ListAccessTokensOutcome;
      typedef Aws::Utils::Outcome<ListDevEnvironmentsResult, CodeCatalystError> ListDevEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListEventLogsResult, CodeCatalystError> ListEventLogsOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, CodeCatalystError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListSourceRepositoriesResult, CodeCatalystError> ListSourceRepositoriesOutcome;
      typedef Aws::Utils::Outcome<ListSourceRepositoryBranchesResult, CodeCatalystError> ListSourceRepositoryBranchesOutcome;
      typedef Aws::Utils::Outcome<ListSpacesResult, CodeCatalystError> ListSpacesOutcome;
      typedef Aws::Utils::Outcome<StartDevEnvironmentResult, CodeCatalystError> StartDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<StartDevEnvironmentSessionResult, CodeCatalystError> StartDevEnvironmentSessionOutcome;
      typedef Aws::Utils::Outcome<StopDevEnvironmentResult, CodeCatalystError> StopDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateDevEnvironmentResult, CodeCatalystError> UpdateDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<VerifySessionResult, CodeCatalystError> VerifySessionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAccessTokenOutcome> CreateAccessTokenOutcomeCallable;
      typedef std::future<CreateDevEnvironmentOutcome> CreateDevEnvironmentOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateSourceRepositoryBranchOutcome> CreateSourceRepositoryBranchOutcomeCallable;
      typedef std::future<DeleteAccessTokenOutcome> DeleteAccessTokenOutcomeCallable;
      typedef std::future<DeleteDevEnvironmentOutcome> DeleteDevEnvironmentOutcomeCallable;
      typedef std::future<GetDevEnvironmentOutcome> GetDevEnvironmentOutcomeCallable;
      typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
      typedef std::future<GetSourceRepositoryCloneUrlsOutcome> GetSourceRepositoryCloneUrlsOutcomeCallable;
      typedef std::future<GetSpaceOutcome> GetSpaceOutcomeCallable;
      typedef std::future<GetSubscriptionOutcome> GetSubscriptionOutcomeCallable;
      typedef std::future<GetUserDetailsOutcome> GetUserDetailsOutcomeCallable;
      typedef std::future<ListAccessTokensOutcome> ListAccessTokensOutcomeCallable;
      typedef std::future<ListDevEnvironmentsOutcome> ListDevEnvironmentsOutcomeCallable;
      typedef std::future<ListEventLogsOutcome> ListEventLogsOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListSourceRepositoriesOutcome> ListSourceRepositoriesOutcomeCallable;
      typedef std::future<ListSourceRepositoryBranchesOutcome> ListSourceRepositoryBranchesOutcomeCallable;
      typedef std::future<ListSpacesOutcome> ListSpacesOutcomeCallable;
      typedef std::future<StartDevEnvironmentOutcome> StartDevEnvironmentOutcomeCallable;
      typedef std::future<StartDevEnvironmentSessionOutcome> StartDevEnvironmentSessionOutcomeCallable;
      typedef std::future<StopDevEnvironmentOutcome> StopDevEnvironmentOutcomeCallable;
      typedef std::future<UpdateDevEnvironmentOutcome> UpdateDevEnvironmentOutcomeCallable;
      typedef std::future<VerifySessionOutcome> VerifySessionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeCatalystClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateAccessTokenRequest&, const Model::CreateAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessTokenResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateDevEnvironmentRequest&, const Model::CreateDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateSourceRepositoryBranchRequest&, const Model::CreateSourceRepositoryBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSourceRepositoryBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::DeleteAccessTokenRequest&, const Model::DeleteAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessTokenResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::DeleteDevEnvironmentRequest&, const Model::DeleteDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetDevEnvironmentRequest&, const Model::GetDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetSourceRepositoryCloneUrlsRequest&, const Model::GetSourceRepositoryCloneUrlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSourceRepositoryCloneUrlsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetSpaceRequest&, const Model::GetSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSpaceResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetSubscriptionRequest&, const Model::GetSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetUserDetailsRequest&, const Model::GetUserDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDetailsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListAccessTokensRequest&, const Model::ListAccessTokensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessTokensResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListDevEnvironmentsRequest&, const Model::ListDevEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListEventLogsRequest&, const Model::ListEventLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventLogsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListSourceRepositoriesRequest&, const Model::ListSourceRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListSourceRepositoryBranchesRequest&, const Model::ListSourceRepositoryBranchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceRepositoryBranchesResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListSpacesRequest&, const Model::ListSpacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpacesResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StartDevEnvironmentRequest&, const Model::StartDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StartDevEnvironmentSessionRequest&, const Model::StartDevEnvironmentSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDevEnvironmentSessionResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StopDevEnvironmentRequest&, const Model::StopDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::UpdateDevEnvironmentRequest&, const Model::UpdateDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::VerifySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifySessionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeCatalyst
} // namespace Aws
