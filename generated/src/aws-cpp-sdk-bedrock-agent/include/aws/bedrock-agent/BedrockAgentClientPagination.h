/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentClient.h>
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
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BedrockAgent {

using ListAgentActionGroupsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListAgentActionGroupsRequest,
                                      Pagination::ListAgentActionGroupsPaginationTraits<BedrockAgentClient>>;
using ListAgentAliasesPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListAgentAliasesRequest,
                                                                    Pagination::ListAgentAliasesPaginationTraits<BedrockAgentClient>>;
using ListAgentCollaboratorsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListAgentCollaboratorsRequest,
                                      Pagination::ListAgentCollaboratorsPaginationTraits<BedrockAgentClient>>;
using ListAgentKnowledgeBasesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListAgentKnowledgeBasesRequest,
                                      Pagination::ListAgentKnowledgeBasesPaginationTraits<BedrockAgentClient>>;
using ListAgentsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListAgentsRequest,
                                                              Pagination::ListAgentsPaginationTraits<BedrockAgentClient>>;
using ListAgentVersionsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListAgentVersionsRequest,
                                                                     Pagination::ListAgentVersionsPaginationTraits<BedrockAgentClient>>;
using ListDataSourcesPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListDataSourcesRequest,
                                                                   Pagination::ListDataSourcesPaginationTraits<BedrockAgentClient>>;
using ListFlowAliasesPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListFlowAliasesRequest,
                                                                   Pagination::ListFlowAliasesPaginationTraits<BedrockAgentClient>>;
using ListFlowsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListFlowsRequest,
                                                             Pagination::ListFlowsPaginationTraits<BedrockAgentClient>>;
using ListFlowVersionsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListFlowVersionsRequest,
                                                                    Pagination::ListFlowVersionsPaginationTraits<BedrockAgentClient>>;
using ListIngestionJobsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListIngestionJobsRequest,
                                                                     Pagination::ListIngestionJobsPaginationTraits<BedrockAgentClient>>;
using ListKnowledgeBaseDocumentsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListKnowledgeBaseDocumentsRequest,
                                      Pagination::ListKnowledgeBaseDocumentsPaginationTraits<BedrockAgentClient>>;
using ListKnowledgeBasesPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListKnowledgeBasesRequest,
                                                                      Pagination::ListKnowledgeBasesPaginationTraits<BedrockAgentClient>>;
using ListPromptsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentClient, Model::ListPromptsRequest,
                                                               Pagination::ListPromptsPaginationTraits<BedrockAgentClient>>;

}  // namespace BedrockAgent
}  // namespace Aws
