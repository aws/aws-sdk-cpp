/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-agent/model/ListAgentActionGroupsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentAliasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentCollaboratorsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentKnowledgeBasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentVersionsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListAgentsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListDataSourcesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListFlowAliasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListFlowVersionsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListFlowsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListIngestionJobsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListKnowledgeBaseDocumentsPaginationTraits.h>
#include <aws/bedrock-agent/model/ListKnowledgeBasesPaginationTraits.h>
#include <aws/bedrock-agent/model/ListPromptsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockAgent {

class BedrockAgentClient;

template <typename DerivedClient>
class BedrockAgentPaginationBase {
 public:
  /**
   * Create a paginator for ListAgentActionGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentActionGroupsRequest,
                                    Pagination::ListAgentActionGroupsPaginationTraits<DerivedClient>>
  ListAgentActionGroupsPaginator(const Model::ListAgentActionGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentActionGroupsRequest,
                                             Pagination::ListAgentActionGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgentAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentAliasesRequest,
                                    Pagination::ListAgentAliasesPaginationTraits<DerivedClient>>
  ListAgentAliasesPaginator(const Model::ListAgentAliasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentAliasesRequest,
                                             Pagination::ListAgentAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAgentCollaborators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentCollaboratorsRequest,
                                    Pagination::ListAgentCollaboratorsPaginationTraits<DerivedClient>>
  ListAgentCollaboratorsPaginator(const Model::ListAgentCollaboratorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentCollaboratorsRequest,
                                             Pagination::ListAgentCollaboratorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgentKnowledgeBases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentKnowledgeBasesRequest,
                                    Pagination::ListAgentKnowledgeBasesPaginationTraits<DerivedClient>>
  ListAgentKnowledgeBasesPaginator(const Model::ListAgentKnowledgeBasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentKnowledgeBasesRequest,
                                             Pagination::ListAgentKnowledgeBasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentsRequest, Pagination::ListAgentsPaginationTraits<DerivedClient>>
  ListAgentsPaginator(const Model::ListAgentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentsRequest,
                                             Pagination::ListAgentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListAgentVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentVersionsRequest,
                                    Pagination::ListAgentVersionsPaginationTraits<DerivedClient>>
  ListAgentVersionsPaginator(const Model::ListAgentVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentVersionsRequest,
                                             Pagination::ListAgentVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                    Pagination::ListDataSourcesPaginationTraits<DerivedClient>>
  ListDataSourcesPaginator(const Model::ListDataSourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                             Pagination::ListDataSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFlowAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowAliasesRequest,
                                    Pagination::ListFlowAliasesPaginationTraits<DerivedClient>>
  ListFlowAliasesPaginator(const Model::ListFlowAliasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowAliasesRequest,
                                             Pagination::ListFlowAliasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>
  ListFlowsPaginator(const Model::ListFlowsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFlowVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowVersionsRequest,
                                    Pagination::ListFlowVersionsPaginationTraits<DerivedClient>>
  ListFlowVersionsPaginator(const Model::ListFlowVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowVersionsRequest,
                                             Pagination::ListFlowVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListIngestionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionJobsRequest,
                                    Pagination::ListIngestionJobsPaginationTraits<DerivedClient>>
  ListIngestionJobsPaginator(const Model::ListIngestionJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionJobsRequest,
                                             Pagination::ListIngestionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListKnowledgeBaseDocuments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBaseDocumentsRequest,
                                    Pagination::ListKnowledgeBaseDocumentsPaginationTraits<DerivedClient>>
  ListKnowledgeBaseDocumentsPaginator(const Model::ListKnowledgeBaseDocumentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBaseDocumentsRequest,
                                             Pagination::ListKnowledgeBaseDocumentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListKnowledgeBases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBasesRequest,
                                    Pagination::ListKnowledgeBasesPaginationTraits<DerivedClient>>
  ListKnowledgeBasesPaginator(const Model::ListKnowledgeBasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBasesRequest,
                                             Pagination::ListKnowledgeBasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPrompts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPromptsRequest, Pagination::ListPromptsPaginationTraits<DerivedClient>>
  ListPromptsPaginator(const Model::ListPromptsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPromptsRequest,
                                             Pagination::ListPromptsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace BedrockAgent
}  // namespace Aws
