/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreClient.h>
#include <aws/bedrock-agentcore/model/ListActorsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListEventsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryExtractionJobsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListSessionsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BedrockAgentCore {

using ListActorsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreClient, Model::ListActorsRequest,
                                                              Pagination::ListActorsPaginationTraits<BedrockAgentCoreClient>>;
using ListEventsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreClient, Model::ListEventsRequest,
                                                              Pagination::ListEventsPaginationTraits<BedrockAgentCoreClient>>;
using ListMemoryExtractionJobsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreClient, Model::ListMemoryExtractionJobsRequest,
                                      Pagination::ListMemoryExtractionJobsPaginationTraits<BedrockAgentCoreClient>>;
using ListMemoryRecordsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreClient, Model::ListMemoryRecordsRequest,
                                                                     Pagination::ListMemoryRecordsPaginationTraits<BedrockAgentCoreClient>>;
using ListSessionsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreClient, Model::ListSessionsRequest,
                                                                Pagination::ListSessionsPaginationTraits<BedrockAgentCoreClient>>;
using RetrieveMemoryRecordsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreClient, Model::RetrieveMemoryRecordsRequest,
                                      Pagination::RetrieveMemoryRecordsPaginationTraits<BedrockAgentCoreClient>>;

}  // namespace BedrockAgentCore
}  // namespace Aws
