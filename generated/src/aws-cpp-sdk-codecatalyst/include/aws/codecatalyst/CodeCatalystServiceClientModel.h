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
#include <aws/codecatalyst/model/CreateSourceRepositoryResult.h>
#include <aws/codecatalyst/model/CreateSourceRepositoryBranchResult.h>
#include <aws/codecatalyst/model/DeleteAccessTokenResult.h>
#include <aws/codecatalyst/model/DeleteDevEnvironmentResult.h>
#include <aws/codecatalyst/model/DeleteProjectResult.h>
#include <aws/codecatalyst/model/DeleteSourceRepositoryResult.h>
#include <aws/codecatalyst/model/DeleteSpaceResult.h>
#include <aws/codecatalyst/model/GetDevEnvironmentResult.h>
#include <aws/codecatalyst/model/GetProjectResult.h>
#include <aws/codecatalyst/model/GetSourceRepositoryResult.h>
#include <aws/codecatalyst/model/GetSourceRepositoryCloneUrlsResult.h>
#include <aws/codecatalyst/model/GetSpaceResult.h>
#include <aws/codecatalyst/model/GetSubscriptionResult.h>
#include <aws/codecatalyst/model/GetUserDetailsResult.h>
#include <aws/codecatalyst/model/GetWorkflowResult.h>
#include <aws/codecatalyst/model/GetWorkflowRunResult.h>
#include <aws/codecatalyst/model/ListAccessTokensResult.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsResult.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsResult.h>
#include <aws/codecatalyst/model/ListEventLogsResult.h>
#include <aws/codecatalyst/model/ListProjectsResult.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesResult.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesResult.h>
#include <aws/codecatalyst/model/ListSpacesResult.h>
#include <aws/codecatalyst/model/ListWorkflowRunsResult.h>
#include <aws/codecatalyst/model/ListWorkflowsResult.h>
#include <aws/codecatalyst/model/StartDevEnvironmentResult.h>
#include <aws/codecatalyst/model/StartDevEnvironmentSessionResult.h>
#include <aws/codecatalyst/model/StartWorkflowRunResult.h>
#include <aws/codecatalyst/model/StopDevEnvironmentResult.h>
#include <aws/codecatalyst/model/StopDevEnvironmentSessionResult.h>
#include <aws/codecatalyst/model/UpdateDevEnvironmentResult.h>
#include <aws/codecatalyst/model/UpdateProjectResult.h>
#include <aws/codecatalyst/model/UpdateSpaceResult.h>
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
      class CreateSourceRepositoryRequest;
      class CreateSourceRepositoryBranchRequest;
      class DeleteAccessTokenRequest;
      class DeleteDevEnvironmentRequest;
      class DeleteProjectRequest;
      class DeleteSourceRepositoryRequest;
      class DeleteSpaceRequest;
      class GetDevEnvironmentRequest;
      class GetProjectRequest;
      class GetSourceRepositoryRequest;
      class GetSourceRepositoryCloneUrlsRequest;
      class GetSpaceRequest;
      class GetSubscriptionRequest;
      class GetUserDetailsRequest;
      class GetWorkflowRequest;
      class GetWorkflowRunRequest;
      class ListAccessTokensRequest;
      class ListDevEnvironmentSessionsRequest;
      class ListDevEnvironmentsRequest;
      class ListEventLogsRequest;
      class ListProjectsRequest;
      class ListSourceRepositoriesRequest;
      class ListSourceRepositoryBranchesRequest;
      class ListSpacesRequest;
      class ListWorkflowRunsRequest;
      class ListWorkflowsRequest;
      class StartDevEnvironmentRequest;
      class StartDevEnvironmentSessionRequest;
      class StartWorkflowRunRequest;
      class StopDevEnvironmentRequest;
      class StopDevEnvironmentSessionRequest;
      class UpdateDevEnvironmentRequest;
      class UpdateProjectRequest;
      class UpdateSpaceRequest;
      class VerifySessionRequest;
      /* End of service model forward declarations required in CodeCatalystClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAccessTokenResult, CodeCatalystError> CreateAccessTokenOutcome;
      typedef Aws::Utils::Outcome<CreateDevEnvironmentResult, CodeCatalystError> CreateDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, CodeCatalystError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateSourceRepositoryResult, CodeCatalystError> CreateSourceRepositoryOutcome;
      typedef Aws::Utils::Outcome<CreateSourceRepositoryBranchResult, CodeCatalystError> CreateSourceRepositoryBranchOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessTokenResult, CodeCatalystError> DeleteAccessTokenOutcome;
      typedef Aws::Utils::Outcome<DeleteDevEnvironmentResult, CodeCatalystError> DeleteDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, CodeCatalystError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteSourceRepositoryResult, CodeCatalystError> DeleteSourceRepositoryOutcome;
      typedef Aws::Utils::Outcome<DeleteSpaceResult, CodeCatalystError> DeleteSpaceOutcome;
      typedef Aws::Utils::Outcome<GetDevEnvironmentResult, CodeCatalystError> GetDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetProjectResult, CodeCatalystError> GetProjectOutcome;
      typedef Aws::Utils::Outcome<GetSourceRepositoryResult, CodeCatalystError> GetSourceRepositoryOutcome;
      typedef Aws::Utils::Outcome<GetSourceRepositoryCloneUrlsResult, CodeCatalystError> GetSourceRepositoryCloneUrlsOutcome;
      typedef Aws::Utils::Outcome<GetSpaceResult, CodeCatalystError> GetSpaceOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionResult, CodeCatalystError> GetSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetUserDetailsResult, CodeCatalystError> GetUserDetailsOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowResult, CodeCatalystError> GetWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowRunResult, CodeCatalystError> GetWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<ListAccessTokensResult, CodeCatalystError> ListAccessTokensOutcome;
      typedef Aws::Utils::Outcome<ListDevEnvironmentSessionsResult, CodeCatalystError> ListDevEnvironmentSessionsOutcome;
      typedef Aws::Utils::Outcome<ListDevEnvironmentsResult, CodeCatalystError> ListDevEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListEventLogsResult, CodeCatalystError> ListEventLogsOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, CodeCatalystError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListSourceRepositoriesResult, CodeCatalystError> ListSourceRepositoriesOutcome;
      typedef Aws::Utils::Outcome<ListSourceRepositoryBranchesResult, CodeCatalystError> ListSourceRepositoryBranchesOutcome;
      typedef Aws::Utils::Outcome<ListSpacesResult, CodeCatalystError> ListSpacesOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowRunsResult, CodeCatalystError> ListWorkflowRunsOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, CodeCatalystError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<StartDevEnvironmentResult, CodeCatalystError> StartDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<StartDevEnvironmentSessionResult, CodeCatalystError> StartDevEnvironmentSessionOutcome;
      typedef Aws::Utils::Outcome<StartWorkflowRunResult, CodeCatalystError> StartWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<StopDevEnvironmentResult, CodeCatalystError> StopDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<StopDevEnvironmentSessionResult, CodeCatalystError> StopDevEnvironmentSessionOutcome;
      typedef Aws::Utils::Outcome<UpdateDevEnvironmentResult, CodeCatalystError> UpdateDevEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, CodeCatalystError> UpdateProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateSpaceResult, CodeCatalystError> UpdateSpaceOutcome;
      typedef Aws::Utils::Outcome<VerifySessionResult, CodeCatalystError> VerifySessionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAccessTokenOutcome> CreateAccessTokenOutcomeCallable;
      typedef std::future<CreateDevEnvironmentOutcome> CreateDevEnvironmentOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateSourceRepositoryOutcome> CreateSourceRepositoryOutcomeCallable;
      typedef std::future<CreateSourceRepositoryBranchOutcome> CreateSourceRepositoryBranchOutcomeCallable;
      typedef std::future<DeleteAccessTokenOutcome> DeleteAccessTokenOutcomeCallable;
      typedef std::future<DeleteDevEnvironmentOutcome> DeleteDevEnvironmentOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteSourceRepositoryOutcome> DeleteSourceRepositoryOutcomeCallable;
      typedef std::future<DeleteSpaceOutcome> DeleteSpaceOutcomeCallable;
      typedef std::future<GetDevEnvironmentOutcome> GetDevEnvironmentOutcomeCallable;
      typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
      typedef std::future<GetSourceRepositoryOutcome> GetSourceRepositoryOutcomeCallable;
      typedef std::future<GetSourceRepositoryCloneUrlsOutcome> GetSourceRepositoryCloneUrlsOutcomeCallable;
      typedef std::future<GetSpaceOutcome> GetSpaceOutcomeCallable;
      typedef std::future<GetSubscriptionOutcome> GetSubscriptionOutcomeCallable;
      typedef std::future<GetUserDetailsOutcome> GetUserDetailsOutcomeCallable;
      typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
      typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
      typedef std::future<ListAccessTokensOutcome> ListAccessTokensOutcomeCallable;
      typedef std::future<ListDevEnvironmentSessionsOutcome> ListDevEnvironmentSessionsOutcomeCallable;
      typedef std::future<ListDevEnvironmentsOutcome> ListDevEnvironmentsOutcomeCallable;
      typedef std::future<ListEventLogsOutcome> ListEventLogsOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListSourceRepositoriesOutcome> ListSourceRepositoriesOutcomeCallable;
      typedef std::future<ListSourceRepositoryBranchesOutcome> ListSourceRepositoryBranchesOutcomeCallable;
      typedef std::future<ListSpacesOutcome> ListSpacesOutcomeCallable;
      typedef std::future<ListWorkflowRunsOutcome> ListWorkflowRunsOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<StartDevEnvironmentOutcome> StartDevEnvironmentOutcomeCallable;
      typedef std::future<StartDevEnvironmentSessionOutcome> StartDevEnvironmentSessionOutcomeCallable;
      typedef std::future<StartWorkflowRunOutcome> StartWorkflowRunOutcomeCallable;
      typedef std::future<StopDevEnvironmentOutcome> StopDevEnvironmentOutcomeCallable;
      typedef std::future<StopDevEnvironmentSessionOutcome> StopDevEnvironmentSessionOutcomeCallable;
      typedef std::future<UpdateDevEnvironmentOutcome> UpdateDevEnvironmentOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      typedef std::future<UpdateSpaceOutcome> UpdateSpaceOutcomeCallable;
      typedef std::future<VerifySessionOutcome> VerifySessionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeCatalystClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateAccessTokenRequest&, const Model::CreateAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessTokenResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateDevEnvironmentRequest&, const Model::CreateDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateSourceRepositoryRequest&, const Model::CreateSourceRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSourceRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::CreateSourceRepositoryBranchRequest&, const Model::CreateSourceRepositoryBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSourceRepositoryBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::DeleteAccessTokenRequest&, const Model::DeleteAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessTokenResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::DeleteDevEnvironmentRequest&, const Model::DeleteDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::DeleteSourceRepositoryRequest&, const Model::DeleteSourceRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::DeleteSpaceRequest&, const Model::DeleteSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSpaceResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetDevEnvironmentRequest&, const Model::GetDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetSourceRepositoryRequest&, const Model::GetSourceRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSourceRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetSourceRepositoryCloneUrlsRequest&, const Model::GetSourceRepositoryCloneUrlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSourceRepositoryCloneUrlsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetSpaceRequest&, const Model::GetSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSpaceResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetSubscriptionRequest&, const Model::GetSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetUserDetailsRequest&, const Model::GetUserDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDetailsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::GetWorkflowRunRequest&, const Model::GetWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListAccessTokensRequest&, const Model::ListAccessTokensOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessTokensResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListDevEnvironmentSessionsRequest&, const Model::ListDevEnvironmentSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevEnvironmentSessionsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListDevEnvironmentsRequest&, const Model::ListDevEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListEventLogsRequest&, const Model::ListEventLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventLogsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListSourceRepositoriesRequest&, const Model::ListSourceRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListSourceRepositoryBranchesRequest&, const Model::ListSourceRepositoryBranchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceRepositoryBranchesResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListSpacesRequest&, const Model::ListSpacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpacesResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListWorkflowRunsRequest&, const Model::ListWorkflowRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowRunsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StartDevEnvironmentRequest&, const Model::StartDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StartDevEnvironmentSessionRequest&, const Model::StartDevEnvironmentSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDevEnvironmentSessionResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StartWorkflowRunRequest&, const Model::StartWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StopDevEnvironmentRequest&, const Model::StopDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::StopDevEnvironmentSessionRequest&, const Model::StopDevEnvironmentSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDevEnvironmentSessionResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::UpdateDevEnvironmentRequest&, const Model::UpdateDevEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevEnvironmentResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::UpdateSpaceRequest&, const Model::UpdateSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSpaceResponseReceivedHandler;
    typedef std::function<void(const CodeCatalystClient*, const Model::VerifySessionRequest&, const Model::VerifySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifySessionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeCatalyst
} // namespace Aws
