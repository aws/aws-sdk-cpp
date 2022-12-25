/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MigrationHubOrchestratorClient header */
#include <aws/migrationhuborchestrator/model/CreateWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/GetTemplateResult.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepResult.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepGroupResult.h>
#include <aws/migrationhuborchestrator/model/ListPluginsResult.h>
#include <aws/migrationhuborchestrator/model/ListTagsForResourceResult.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsResult.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsResult.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesResult.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsResult.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsResult.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsResult.h>
#include <aws/migrationhuborchestrator/model/RetryWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/StartWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/StopWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/TagResourceResult.h>
#include <aws/migrationhuborchestrator/model/UntagResourceResult.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowResult.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepResult.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepGroupResult.h>
/* End of service model headers required in MigrationHubOrchestratorClient header */

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

  namespace MigrationHubOrchestrator
  {
    using MigrationHubOrchestratorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MigrationHubOrchestratorEndpointProviderBase = Aws::MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorEndpointProviderBase;
    using MigrationHubOrchestratorEndpointProvider = Aws::MigrationHubOrchestrator::Endpoint::MigrationHubOrchestratorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MigrationHubOrchestratorClient header */
      class CreateWorkflowRequest;
      class CreateWorkflowStepRequest;
      class CreateWorkflowStepGroupRequest;
      class DeleteWorkflowRequest;
      class DeleteWorkflowStepRequest;
      class DeleteWorkflowStepGroupRequest;
      class GetTemplateRequest;
      class GetTemplateStepRequest;
      class GetTemplateStepGroupRequest;
      class GetWorkflowRequest;
      class GetWorkflowStepRequest;
      class GetWorkflowStepGroupRequest;
      class ListPluginsRequest;
      class ListTagsForResourceRequest;
      class ListTemplateStepGroupsRequest;
      class ListTemplateStepsRequest;
      class ListTemplatesRequest;
      class ListWorkflowStepGroupsRequest;
      class ListWorkflowStepsRequest;
      class ListWorkflowsRequest;
      class RetryWorkflowStepRequest;
      class StartWorkflowRequest;
      class StopWorkflowRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateWorkflowRequest;
      class UpdateWorkflowStepRequest;
      class UpdateWorkflowStepGroupRequest;
      /* End of service model forward declarations required in MigrationHubOrchestratorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateWorkflowResult, MigrationHubOrchestratorError> CreateWorkflowOutcome;
      typedef Aws::Utils::Outcome<CreateWorkflowStepResult, MigrationHubOrchestratorError> CreateWorkflowStepOutcome;
      typedef Aws::Utils::Outcome<CreateWorkflowStepGroupResult, MigrationHubOrchestratorError> CreateWorkflowStepGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkflowResult, MigrationHubOrchestratorError> DeleteWorkflowOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkflowStepResult, MigrationHubOrchestratorError> DeleteWorkflowStepOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkflowStepGroupResult, MigrationHubOrchestratorError> DeleteWorkflowStepGroupOutcome;
      typedef Aws::Utils::Outcome<GetTemplateResult, MigrationHubOrchestratorError> GetTemplateOutcome;
      typedef Aws::Utils::Outcome<GetTemplateStepResult, MigrationHubOrchestratorError> GetTemplateStepOutcome;
      typedef Aws::Utils::Outcome<GetTemplateStepGroupResult, MigrationHubOrchestratorError> GetTemplateStepGroupOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowResult, MigrationHubOrchestratorError> GetWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowStepResult, MigrationHubOrchestratorError> GetWorkflowStepOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowStepGroupResult, MigrationHubOrchestratorError> GetWorkflowStepGroupOutcome;
      typedef Aws::Utils::Outcome<ListPluginsResult, MigrationHubOrchestratorError> ListPluginsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MigrationHubOrchestratorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTemplateStepGroupsResult, MigrationHubOrchestratorError> ListTemplateStepGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTemplateStepsResult, MigrationHubOrchestratorError> ListTemplateStepsOutcome;
      typedef Aws::Utils::Outcome<ListTemplatesResult, MigrationHubOrchestratorError> ListTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowStepGroupsResult, MigrationHubOrchestratorError> ListWorkflowStepGroupsOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowStepsResult, MigrationHubOrchestratorError> ListWorkflowStepsOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, MigrationHubOrchestratorError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<RetryWorkflowStepResult, MigrationHubOrchestratorError> RetryWorkflowStepOutcome;
      typedef Aws::Utils::Outcome<StartWorkflowResult, MigrationHubOrchestratorError> StartWorkflowOutcome;
      typedef Aws::Utils::Outcome<StopWorkflowResult, MigrationHubOrchestratorError> StopWorkflowOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MigrationHubOrchestratorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MigrationHubOrchestratorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkflowResult, MigrationHubOrchestratorError> UpdateWorkflowOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkflowStepResult, MigrationHubOrchestratorError> UpdateWorkflowStepOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkflowStepGroupResult, MigrationHubOrchestratorError> UpdateWorkflowStepGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
      typedef std::future<CreateWorkflowStepOutcome> CreateWorkflowStepOutcomeCallable;
      typedef std::future<CreateWorkflowStepGroupOutcome> CreateWorkflowStepGroupOutcomeCallable;
      typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
      typedef std::future<DeleteWorkflowStepOutcome> DeleteWorkflowStepOutcomeCallable;
      typedef std::future<DeleteWorkflowStepGroupOutcome> DeleteWorkflowStepGroupOutcomeCallable;
      typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
      typedef std::future<GetTemplateStepOutcome> GetTemplateStepOutcomeCallable;
      typedef std::future<GetTemplateStepGroupOutcome> GetTemplateStepGroupOutcomeCallable;
      typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
      typedef std::future<GetWorkflowStepOutcome> GetWorkflowStepOutcomeCallable;
      typedef std::future<GetWorkflowStepGroupOutcome> GetWorkflowStepGroupOutcomeCallable;
      typedef std::future<ListPluginsOutcome> ListPluginsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTemplateStepGroupsOutcome> ListTemplateStepGroupsOutcomeCallable;
      typedef std::future<ListTemplateStepsOutcome> ListTemplateStepsOutcomeCallable;
      typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
      typedef std::future<ListWorkflowStepGroupsOutcome> ListWorkflowStepGroupsOutcomeCallable;
      typedef std::future<ListWorkflowStepsOutcome> ListWorkflowStepsOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<RetryWorkflowStepOutcome> RetryWorkflowStepOutcomeCallable;
      typedef std::future<StartWorkflowOutcome> StartWorkflowOutcomeCallable;
      typedef std::future<StopWorkflowOutcome> StopWorkflowOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
      typedef std::future<UpdateWorkflowStepOutcome> UpdateWorkflowStepOutcomeCallable;
      typedef std::future<UpdateWorkflowStepGroupOutcome> UpdateWorkflowStepGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MigrationHubOrchestratorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::CreateWorkflowRequest&, const Model::CreateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::CreateWorkflowStepRequest&, const Model::CreateWorkflowStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowStepResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::CreateWorkflowStepGroupRequest&, const Model::CreateWorkflowStepGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowStepGroupResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::DeleteWorkflowStepRequest&, const Model::DeleteWorkflowStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowStepResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::DeleteWorkflowStepGroupRequest&, const Model::DeleteWorkflowStepGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowStepGroupResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::GetTemplateStepRequest&, const Model::GetTemplateStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateStepResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::GetTemplateStepGroupRequest&, const Model::GetTemplateStepGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateStepGroupResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::GetWorkflowStepRequest&, const Model::GetWorkflowStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowStepResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::GetWorkflowStepGroupRequest&, const Model::GetWorkflowStepGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowStepGroupResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListPluginsRequest&, const Model::ListPluginsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPluginsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListTemplateStepGroupsRequest&, const Model::ListTemplateStepGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateStepGroupsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListTemplateStepsRequest&, const Model::ListTemplateStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateStepsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListWorkflowStepGroupsRequest&, const Model::ListWorkflowStepGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowStepGroupsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListWorkflowStepsRequest&, const Model::ListWorkflowStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowStepsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::RetryWorkflowStepRequest&, const Model::RetryWorkflowStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryWorkflowStepResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::StartWorkflowRequest&, const Model::StartWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkflowResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::StopWorkflowRequest&, const Model::StopWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkflowResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::UpdateWorkflowRequest&, const Model::UpdateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkflowResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::UpdateWorkflowStepRequest&, const Model::UpdateWorkflowStepOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkflowStepResponseReceivedHandler;
    typedef std::function<void(const MigrationHubOrchestratorClient*, const Model::UpdateWorkflowStepGroupRequest&, const Model::UpdateWorkflowStepGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkflowStepGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MigrationHubOrchestrator
} // namespace Aws
