/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-agent/BedrockAgentErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bedrock-agent/BedrockAgentEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BedrockAgentClient header */
#include <aws/bedrock-agent/model/AssociateAgentCollaboratorResult.h>
#include <aws/bedrock-agent/model/AssociateAgentKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/CreateAgentResult.h>
#include <aws/bedrock-agent/model/CreateAgentActionGroupResult.h>
#include <aws/bedrock-agent/model/CreateAgentAliasResult.h>
#include <aws/bedrock-agent/model/CreateDataSourceResult.h>
#include <aws/bedrock-agent/model/CreateFlowResult.h>
#include <aws/bedrock-agent/model/CreateFlowAliasResult.h>
#include <aws/bedrock-agent/model/CreateFlowVersionResult.h>
#include <aws/bedrock-agent/model/CreateKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/CreatePromptResult.h>
#include <aws/bedrock-agent/model/CreatePromptVersionResult.h>
#include <aws/bedrock-agent/model/DeleteAgentResult.h>
#include <aws/bedrock-agent/model/DeleteAgentActionGroupResult.h>
#include <aws/bedrock-agent/model/DeleteAgentAliasResult.h>
#include <aws/bedrock-agent/model/DeleteAgentVersionResult.h>
#include <aws/bedrock-agent/model/DeleteDataSourceResult.h>
#include <aws/bedrock-agent/model/DeleteFlowResult.h>
#include <aws/bedrock-agent/model/DeleteFlowAliasResult.h>
#include <aws/bedrock-agent/model/DeleteFlowVersionResult.h>
#include <aws/bedrock-agent/model/DeleteKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/DeleteKnowledgeBaseDocumentsResult.h>
#include <aws/bedrock-agent/model/DeletePromptResult.h>
#include <aws/bedrock-agent/model/DisassociateAgentCollaboratorResult.h>
#include <aws/bedrock-agent/model/DisassociateAgentKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/GetAgentResult.h>
#include <aws/bedrock-agent/model/GetAgentActionGroupResult.h>
#include <aws/bedrock-agent/model/GetAgentAliasResult.h>
#include <aws/bedrock-agent/model/GetAgentCollaboratorResult.h>
#include <aws/bedrock-agent/model/GetAgentKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/GetAgentVersionResult.h>
#include <aws/bedrock-agent/model/GetDataSourceResult.h>
#include <aws/bedrock-agent/model/GetFlowResult.h>
#include <aws/bedrock-agent/model/GetFlowAliasResult.h>
#include <aws/bedrock-agent/model/GetFlowVersionResult.h>
#include <aws/bedrock-agent/model/GetIngestionJobResult.h>
#include <aws/bedrock-agent/model/GetKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/GetKnowledgeBaseDocumentsResult.h>
#include <aws/bedrock-agent/model/GetPromptResult.h>
#include <aws/bedrock-agent/model/IngestKnowledgeBaseDocumentsResult.h>
#include <aws/bedrock-agent/model/ListAgentActionGroupsResult.h>
#include <aws/bedrock-agent/model/ListAgentAliasesResult.h>
#include <aws/bedrock-agent/model/ListAgentCollaboratorsResult.h>
#include <aws/bedrock-agent/model/ListAgentKnowledgeBasesResult.h>
#include <aws/bedrock-agent/model/ListAgentVersionsResult.h>
#include <aws/bedrock-agent/model/ListAgentsResult.h>
#include <aws/bedrock-agent/model/ListDataSourcesResult.h>
#include <aws/bedrock-agent/model/ListFlowAliasesResult.h>
#include <aws/bedrock-agent/model/ListFlowVersionsResult.h>
#include <aws/bedrock-agent/model/ListFlowsResult.h>
#include <aws/bedrock-agent/model/ListIngestionJobsResult.h>
#include <aws/bedrock-agent/model/ListKnowledgeBaseDocumentsResult.h>
#include <aws/bedrock-agent/model/ListKnowledgeBasesResult.h>
#include <aws/bedrock-agent/model/ListPromptsResult.h>
#include <aws/bedrock-agent/model/ListTagsForResourceResult.h>
#include <aws/bedrock-agent/model/PrepareAgentResult.h>
#include <aws/bedrock-agent/model/PrepareFlowResult.h>
#include <aws/bedrock-agent/model/StartIngestionJobResult.h>
#include <aws/bedrock-agent/model/StopIngestionJobResult.h>
#include <aws/bedrock-agent/model/TagResourceResult.h>
#include <aws/bedrock-agent/model/UntagResourceResult.h>
#include <aws/bedrock-agent/model/UpdateAgentResult.h>
#include <aws/bedrock-agent/model/UpdateAgentActionGroupResult.h>
#include <aws/bedrock-agent/model/UpdateAgentAliasResult.h>
#include <aws/bedrock-agent/model/UpdateAgentCollaboratorResult.h>
#include <aws/bedrock-agent/model/UpdateAgentKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/UpdateDataSourceResult.h>
#include <aws/bedrock-agent/model/UpdateFlowResult.h>
#include <aws/bedrock-agent/model/UpdateFlowAliasResult.h>
#include <aws/bedrock-agent/model/UpdateKnowledgeBaseResult.h>
#include <aws/bedrock-agent/model/UpdatePromptResult.h>
#include <aws/bedrock-agent/model/ValidateFlowDefinitionResult.h>
#include <aws/bedrock-agent/model/ListAgentsRequest.h>
#include <aws/bedrock-agent/model/ListKnowledgeBasesRequest.h>
#include <aws/bedrock-agent/model/ListPromptsRequest.h>
#include <aws/bedrock-agent/model/ListFlowsRequest.h>
/* End of service model headers required in BedrockAgentClient header */

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

  namespace BedrockAgent
  {
    using BedrockAgentClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BedrockAgentEndpointProviderBase = Aws::BedrockAgent::Endpoint::BedrockAgentEndpointProviderBase;
    using BedrockAgentEndpointProvider = Aws::BedrockAgent::Endpoint::BedrockAgentEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockAgentClient header */
      class AssociateAgentCollaboratorRequest;
      class AssociateAgentKnowledgeBaseRequest;
      class CreateAgentRequest;
      class CreateAgentActionGroupRequest;
      class CreateAgentAliasRequest;
      class CreateDataSourceRequest;
      class CreateFlowRequest;
      class CreateFlowAliasRequest;
      class CreateFlowVersionRequest;
      class CreateKnowledgeBaseRequest;
      class CreatePromptRequest;
      class CreatePromptVersionRequest;
      class DeleteAgentRequest;
      class DeleteAgentActionGroupRequest;
      class DeleteAgentAliasRequest;
      class DeleteAgentVersionRequest;
      class DeleteDataSourceRequest;
      class DeleteFlowRequest;
      class DeleteFlowAliasRequest;
      class DeleteFlowVersionRequest;
      class DeleteKnowledgeBaseRequest;
      class DeleteKnowledgeBaseDocumentsRequest;
      class DeletePromptRequest;
      class DisassociateAgentCollaboratorRequest;
      class DisassociateAgentKnowledgeBaseRequest;
      class GetAgentRequest;
      class GetAgentActionGroupRequest;
      class GetAgentAliasRequest;
      class GetAgentCollaboratorRequest;
      class GetAgentKnowledgeBaseRequest;
      class GetAgentVersionRequest;
      class GetDataSourceRequest;
      class GetFlowRequest;
      class GetFlowAliasRequest;
      class GetFlowVersionRequest;
      class GetIngestionJobRequest;
      class GetKnowledgeBaseRequest;
      class GetKnowledgeBaseDocumentsRequest;
      class GetPromptRequest;
      class IngestKnowledgeBaseDocumentsRequest;
      class ListAgentActionGroupsRequest;
      class ListAgentAliasesRequest;
      class ListAgentCollaboratorsRequest;
      class ListAgentKnowledgeBasesRequest;
      class ListAgentVersionsRequest;
      class ListAgentsRequest;
      class ListDataSourcesRequest;
      class ListFlowAliasesRequest;
      class ListFlowVersionsRequest;
      class ListFlowsRequest;
      class ListIngestionJobsRequest;
      class ListKnowledgeBaseDocumentsRequest;
      class ListKnowledgeBasesRequest;
      class ListPromptsRequest;
      class ListTagsForResourceRequest;
      class PrepareAgentRequest;
      class PrepareFlowRequest;
      class StartIngestionJobRequest;
      class StopIngestionJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAgentRequest;
      class UpdateAgentActionGroupRequest;
      class UpdateAgentAliasRequest;
      class UpdateAgentCollaboratorRequest;
      class UpdateAgentKnowledgeBaseRequest;
      class UpdateDataSourceRequest;
      class UpdateFlowRequest;
      class UpdateFlowAliasRequest;
      class UpdateKnowledgeBaseRequest;
      class UpdatePromptRequest;
      class ValidateFlowDefinitionRequest;
      /* End of service model forward declarations required in BedrockAgentClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateAgentCollaboratorResult, BedrockAgentError> AssociateAgentCollaboratorOutcome;
      typedef Aws::Utils::Outcome<AssociateAgentKnowledgeBaseResult, BedrockAgentError> AssociateAgentKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<CreateAgentResult, BedrockAgentError> CreateAgentOutcome;
      typedef Aws::Utils::Outcome<CreateAgentActionGroupResult, BedrockAgentError> CreateAgentActionGroupOutcome;
      typedef Aws::Utils::Outcome<CreateAgentAliasResult, BedrockAgentError> CreateAgentAliasOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceResult, BedrockAgentError> CreateDataSourceOutcome;
      typedef Aws::Utils::Outcome<CreateFlowResult, BedrockAgentError> CreateFlowOutcome;
      typedef Aws::Utils::Outcome<CreateFlowAliasResult, BedrockAgentError> CreateFlowAliasOutcome;
      typedef Aws::Utils::Outcome<CreateFlowVersionResult, BedrockAgentError> CreateFlowVersionOutcome;
      typedef Aws::Utils::Outcome<CreateKnowledgeBaseResult, BedrockAgentError> CreateKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<CreatePromptResult, BedrockAgentError> CreatePromptOutcome;
      typedef Aws::Utils::Outcome<CreatePromptVersionResult, BedrockAgentError> CreatePromptVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteAgentResult, BedrockAgentError> DeleteAgentOutcome;
      typedef Aws::Utils::Outcome<DeleteAgentActionGroupResult, BedrockAgentError> DeleteAgentActionGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteAgentAliasResult, BedrockAgentError> DeleteAgentAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteAgentVersionResult, BedrockAgentError> DeleteAgentVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSourceResult, BedrockAgentError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowResult, BedrockAgentError> DeleteFlowOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowAliasResult, BedrockAgentError> DeleteFlowAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowVersionResult, BedrockAgentError> DeleteFlowVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteKnowledgeBaseResult, BedrockAgentError> DeleteKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<DeleteKnowledgeBaseDocumentsResult, BedrockAgentError> DeleteKnowledgeBaseDocumentsOutcome;
      typedef Aws::Utils::Outcome<DeletePromptResult, BedrockAgentError> DeletePromptOutcome;
      typedef Aws::Utils::Outcome<DisassociateAgentCollaboratorResult, BedrockAgentError> DisassociateAgentCollaboratorOutcome;
      typedef Aws::Utils::Outcome<DisassociateAgentKnowledgeBaseResult, BedrockAgentError> DisassociateAgentKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<GetAgentResult, BedrockAgentError> GetAgentOutcome;
      typedef Aws::Utils::Outcome<GetAgentActionGroupResult, BedrockAgentError> GetAgentActionGroupOutcome;
      typedef Aws::Utils::Outcome<GetAgentAliasResult, BedrockAgentError> GetAgentAliasOutcome;
      typedef Aws::Utils::Outcome<GetAgentCollaboratorResult, BedrockAgentError> GetAgentCollaboratorOutcome;
      typedef Aws::Utils::Outcome<GetAgentKnowledgeBaseResult, BedrockAgentError> GetAgentKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<GetAgentVersionResult, BedrockAgentError> GetAgentVersionOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceResult, BedrockAgentError> GetDataSourceOutcome;
      typedef Aws::Utils::Outcome<GetFlowResult, BedrockAgentError> GetFlowOutcome;
      typedef Aws::Utils::Outcome<GetFlowAliasResult, BedrockAgentError> GetFlowAliasOutcome;
      typedef Aws::Utils::Outcome<GetFlowVersionResult, BedrockAgentError> GetFlowVersionOutcome;
      typedef Aws::Utils::Outcome<GetIngestionJobResult, BedrockAgentError> GetIngestionJobOutcome;
      typedef Aws::Utils::Outcome<GetKnowledgeBaseResult, BedrockAgentError> GetKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<GetKnowledgeBaseDocumentsResult, BedrockAgentError> GetKnowledgeBaseDocumentsOutcome;
      typedef Aws::Utils::Outcome<GetPromptResult, BedrockAgentError> GetPromptOutcome;
      typedef Aws::Utils::Outcome<IngestKnowledgeBaseDocumentsResult, BedrockAgentError> IngestKnowledgeBaseDocumentsOutcome;
      typedef Aws::Utils::Outcome<ListAgentActionGroupsResult, BedrockAgentError> ListAgentActionGroupsOutcome;
      typedef Aws::Utils::Outcome<ListAgentAliasesResult, BedrockAgentError> ListAgentAliasesOutcome;
      typedef Aws::Utils::Outcome<ListAgentCollaboratorsResult, BedrockAgentError> ListAgentCollaboratorsOutcome;
      typedef Aws::Utils::Outcome<ListAgentKnowledgeBasesResult, BedrockAgentError> ListAgentKnowledgeBasesOutcome;
      typedef Aws::Utils::Outcome<ListAgentVersionsResult, BedrockAgentError> ListAgentVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAgentsResult, BedrockAgentError> ListAgentsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourcesResult, BedrockAgentError> ListDataSourcesOutcome;
      typedef Aws::Utils::Outcome<ListFlowAliasesResult, BedrockAgentError> ListFlowAliasesOutcome;
      typedef Aws::Utils::Outcome<ListFlowVersionsResult, BedrockAgentError> ListFlowVersionsOutcome;
      typedef Aws::Utils::Outcome<ListFlowsResult, BedrockAgentError> ListFlowsOutcome;
      typedef Aws::Utils::Outcome<ListIngestionJobsResult, BedrockAgentError> ListIngestionJobsOutcome;
      typedef Aws::Utils::Outcome<ListKnowledgeBaseDocumentsResult, BedrockAgentError> ListKnowledgeBaseDocumentsOutcome;
      typedef Aws::Utils::Outcome<ListKnowledgeBasesResult, BedrockAgentError> ListKnowledgeBasesOutcome;
      typedef Aws::Utils::Outcome<ListPromptsResult, BedrockAgentError> ListPromptsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BedrockAgentError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PrepareAgentResult, BedrockAgentError> PrepareAgentOutcome;
      typedef Aws::Utils::Outcome<PrepareFlowResult, BedrockAgentError> PrepareFlowOutcome;
      typedef Aws::Utils::Outcome<StartIngestionJobResult, BedrockAgentError> StartIngestionJobOutcome;
      typedef Aws::Utils::Outcome<StopIngestionJobResult, BedrockAgentError> StopIngestionJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BedrockAgentError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BedrockAgentError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAgentResult, BedrockAgentError> UpdateAgentOutcome;
      typedef Aws::Utils::Outcome<UpdateAgentActionGroupResult, BedrockAgentError> UpdateAgentActionGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateAgentAliasResult, BedrockAgentError> UpdateAgentAliasOutcome;
      typedef Aws::Utils::Outcome<UpdateAgentCollaboratorResult, BedrockAgentError> UpdateAgentCollaboratorOutcome;
      typedef Aws::Utils::Outcome<UpdateAgentKnowledgeBaseResult, BedrockAgentError> UpdateAgentKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourceResult, BedrockAgentError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowResult, BedrockAgentError> UpdateFlowOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowAliasResult, BedrockAgentError> UpdateFlowAliasOutcome;
      typedef Aws::Utils::Outcome<UpdateKnowledgeBaseResult, BedrockAgentError> UpdateKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<UpdatePromptResult, BedrockAgentError> UpdatePromptOutcome;
      typedef Aws::Utils::Outcome<ValidateFlowDefinitionResult, BedrockAgentError> ValidateFlowDefinitionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAgentCollaboratorOutcome> AssociateAgentCollaboratorOutcomeCallable;
      typedef std::future<AssociateAgentKnowledgeBaseOutcome> AssociateAgentKnowledgeBaseOutcomeCallable;
      typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
      typedef std::future<CreateAgentActionGroupOutcome> CreateAgentActionGroupOutcomeCallable;
      typedef std::future<CreateAgentAliasOutcome> CreateAgentAliasOutcomeCallable;
      typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
      typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
      typedef std::future<CreateFlowAliasOutcome> CreateFlowAliasOutcomeCallable;
      typedef std::future<CreateFlowVersionOutcome> CreateFlowVersionOutcomeCallable;
      typedef std::future<CreateKnowledgeBaseOutcome> CreateKnowledgeBaseOutcomeCallable;
      typedef std::future<CreatePromptOutcome> CreatePromptOutcomeCallable;
      typedef std::future<CreatePromptVersionOutcome> CreatePromptVersionOutcomeCallable;
      typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
      typedef std::future<DeleteAgentActionGroupOutcome> DeleteAgentActionGroupOutcomeCallable;
      typedef std::future<DeleteAgentAliasOutcome> DeleteAgentAliasOutcomeCallable;
      typedef std::future<DeleteAgentVersionOutcome> DeleteAgentVersionOutcomeCallable;
      typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
      typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
      typedef std::future<DeleteFlowAliasOutcome> DeleteFlowAliasOutcomeCallable;
      typedef std::future<DeleteFlowVersionOutcome> DeleteFlowVersionOutcomeCallable;
      typedef std::future<DeleteKnowledgeBaseOutcome> DeleteKnowledgeBaseOutcomeCallable;
      typedef std::future<DeleteKnowledgeBaseDocumentsOutcome> DeleteKnowledgeBaseDocumentsOutcomeCallable;
      typedef std::future<DeletePromptOutcome> DeletePromptOutcomeCallable;
      typedef std::future<DisassociateAgentCollaboratorOutcome> DisassociateAgentCollaboratorOutcomeCallable;
      typedef std::future<DisassociateAgentKnowledgeBaseOutcome> DisassociateAgentKnowledgeBaseOutcomeCallable;
      typedef std::future<GetAgentOutcome> GetAgentOutcomeCallable;
      typedef std::future<GetAgentActionGroupOutcome> GetAgentActionGroupOutcomeCallable;
      typedef std::future<GetAgentAliasOutcome> GetAgentAliasOutcomeCallable;
      typedef std::future<GetAgentCollaboratorOutcome> GetAgentCollaboratorOutcomeCallable;
      typedef std::future<GetAgentKnowledgeBaseOutcome> GetAgentKnowledgeBaseOutcomeCallable;
      typedef std::future<GetAgentVersionOutcome> GetAgentVersionOutcomeCallable;
      typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
      typedef std::future<GetFlowOutcome> GetFlowOutcomeCallable;
      typedef std::future<GetFlowAliasOutcome> GetFlowAliasOutcomeCallable;
      typedef std::future<GetFlowVersionOutcome> GetFlowVersionOutcomeCallable;
      typedef std::future<GetIngestionJobOutcome> GetIngestionJobOutcomeCallable;
      typedef std::future<GetKnowledgeBaseOutcome> GetKnowledgeBaseOutcomeCallable;
      typedef std::future<GetKnowledgeBaseDocumentsOutcome> GetKnowledgeBaseDocumentsOutcomeCallable;
      typedef std::future<GetPromptOutcome> GetPromptOutcomeCallable;
      typedef std::future<IngestKnowledgeBaseDocumentsOutcome> IngestKnowledgeBaseDocumentsOutcomeCallable;
      typedef std::future<ListAgentActionGroupsOutcome> ListAgentActionGroupsOutcomeCallable;
      typedef std::future<ListAgentAliasesOutcome> ListAgentAliasesOutcomeCallable;
      typedef std::future<ListAgentCollaboratorsOutcome> ListAgentCollaboratorsOutcomeCallable;
      typedef std::future<ListAgentKnowledgeBasesOutcome> ListAgentKnowledgeBasesOutcomeCallable;
      typedef std::future<ListAgentVersionsOutcome> ListAgentVersionsOutcomeCallable;
      typedef std::future<ListAgentsOutcome> ListAgentsOutcomeCallable;
      typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
      typedef std::future<ListFlowAliasesOutcome> ListFlowAliasesOutcomeCallable;
      typedef std::future<ListFlowVersionsOutcome> ListFlowVersionsOutcomeCallable;
      typedef std::future<ListFlowsOutcome> ListFlowsOutcomeCallable;
      typedef std::future<ListIngestionJobsOutcome> ListIngestionJobsOutcomeCallable;
      typedef std::future<ListKnowledgeBaseDocumentsOutcome> ListKnowledgeBaseDocumentsOutcomeCallable;
      typedef std::future<ListKnowledgeBasesOutcome> ListKnowledgeBasesOutcomeCallable;
      typedef std::future<ListPromptsOutcome> ListPromptsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PrepareAgentOutcome> PrepareAgentOutcomeCallable;
      typedef std::future<PrepareFlowOutcome> PrepareFlowOutcomeCallable;
      typedef std::future<StartIngestionJobOutcome> StartIngestionJobOutcomeCallable;
      typedef std::future<StopIngestionJobOutcome> StopIngestionJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAgentOutcome> UpdateAgentOutcomeCallable;
      typedef std::future<UpdateAgentActionGroupOutcome> UpdateAgentActionGroupOutcomeCallable;
      typedef std::future<UpdateAgentAliasOutcome> UpdateAgentAliasOutcomeCallable;
      typedef std::future<UpdateAgentCollaboratorOutcome> UpdateAgentCollaboratorOutcomeCallable;
      typedef std::future<UpdateAgentKnowledgeBaseOutcome> UpdateAgentKnowledgeBaseOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateFlowOutcome> UpdateFlowOutcomeCallable;
      typedef std::future<UpdateFlowAliasOutcome> UpdateFlowAliasOutcomeCallable;
      typedef std::future<UpdateKnowledgeBaseOutcome> UpdateKnowledgeBaseOutcomeCallable;
      typedef std::future<UpdatePromptOutcome> UpdatePromptOutcomeCallable;
      typedef std::future<ValidateFlowDefinitionOutcome> ValidateFlowDefinitionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockAgentClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockAgentClient*, const Model::AssociateAgentCollaboratorRequest&, const Model::AssociateAgentCollaboratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAgentCollaboratorResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::AssociateAgentKnowledgeBaseRequest&, const Model::AssociateAgentKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAgentKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateAgentRequest&, const Model::CreateAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateAgentActionGroupRequest&, const Model::CreateAgentActionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentActionGroupResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateAgentAliasRequest&, const Model::CreateAgentAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateFlowRequest&, const Model::CreateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateFlowAliasRequest&, const Model::CreateFlowAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateFlowVersionRequest&, const Model::CreateFlowVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreateKnowledgeBaseRequest&, const Model::CreateKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreatePromptRequest&, const Model::CreatePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePromptResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::CreatePromptVersionRequest&, const Model::CreatePromptVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePromptVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteAgentRequest&, const Model::DeleteAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteAgentActionGroupRequest&, const Model::DeleteAgentActionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentActionGroupResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteAgentAliasRequest&, const Model::DeleteAgentAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteAgentVersionRequest&, const Model::DeleteAgentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteFlowRequest&, const Model::DeleteFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteFlowAliasRequest&, const Model::DeleteFlowAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteFlowVersionRequest&, const Model::DeleteFlowVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteKnowledgeBaseRequest&, const Model::DeleteKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeleteKnowledgeBaseDocumentsRequest&, const Model::DeleteKnowledgeBaseDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKnowledgeBaseDocumentsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DeletePromptRequest&, const Model::DeletePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePromptResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DisassociateAgentCollaboratorRequest&, const Model::DisassociateAgentCollaboratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAgentCollaboratorResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::DisassociateAgentKnowledgeBaseRequest&, const Model::DisassociateAgentKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAgentKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetAgentRequest&, const Model::GetAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetAgentActionGroupRequest&, const Model::GetAgentActionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentActionGroupResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetAgentAliasRequest&, const Model::GetAgentAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetAgentCollaboratorRequest&, const Model::GetAgentCollaboratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentCollaboratorResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetAgentKnowledgeBaseRequest&, const Model::GetAgentKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetAgentVersionRequest&, const Model::GetAgentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgentVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetFlowRequest&, const Model::GetFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetFlowAliasRequest&, const Model::GetFlowAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetFlowVersionRequest&, const Model::GetFlowVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetIngestionJobRequest&, const Model::GetIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIngestionJobResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetKnowledgeBaseRequest&, const Model::GetKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetKnowledgeBaseDocumentsRequest&, const Model::GetKnowledgeBaseDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKnowledgeBaseDocumentsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::GetPromptRequest&, const Model::GetPromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPromptResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::IngestKnowledgeBaseDocumentsRequest&, const Model::IngestKnowledgeBaseDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IngestKnowledgeBaseDocumentsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListAgentActionGroupsRequest&, const Model::ListAgentActionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentActionGroupsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListAgentAliasesRequest&, const Model::ListAgentAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentAliasesResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListAgentCollaboratorsRequest&, const Model::ListAgentCollaboratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentCollaboratorsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListAgentKnowledgeBasesRequest&, const Model::ListAgentKnowledgeBasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentKnowledgeBasesResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListAgentVersionsRequest&, const Model::ListAgentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentVersionsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListAgentsRequest&, const Model::ListAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListFlowAliasesRequest&, const Model::ListFlowAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowAliasesResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListFlowVersionsRequest&, const Model::ListFlowVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowVersionsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListFlowsRequest&, const Model::ListFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListIngestionJobsRequest&, const Model::ListIngestionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngestionJobsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListKnowledgeBaseDocumentsRequest&, const Model::ListKnowledgeBaseDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKnowledgeBaseDocumentsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListKnowledgeBasesRequest&, const Model::ListKnowledgeBasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKnowledgeBasesResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListPromptsRequest&, const Model::ListPromptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPromptsResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::PrepareAgentRequest&, const Model::PrepareAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PrepareAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::PrepareFlowRequest&, const Model::PrepareFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PrepareFlowResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::StartIngestionJobRequest&, const Model::StartIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartIngestionJobResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::StopIngestionJobRequest&, const Model::StopIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopIngestionJobResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateAgentRequest&, const Model::UpdateAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateAgentActionGroupRequest&, const Model::UpdateAgentActionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentActionGroupResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateAgentAliasRequest&, const Model::UpdateAgentAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateAgentCollaboratorRequest&, const Model::UpdateAgentCollaboratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentCollaboratorResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateAgentKnowledgeBaseRequest&, const Model::UpdateAgentKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateFlowRequest&, const Model::UpdateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateFlowAliasRequest&, const Model::UpdateFlowAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowAliasResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdateKnowledgeBaseRequest&, const Model::UpdateKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::UpdatePromptRequest&, const Model::UpdatePromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePromptResponseReceivedHandler;
    typedef std::function<void(const BedrockAgentClient*, const Model::ValidateFlowDefinitionRequest&, const Model::ValidateFlowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateFlowDefinitionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BedrockAgent
} // namespace Aws
