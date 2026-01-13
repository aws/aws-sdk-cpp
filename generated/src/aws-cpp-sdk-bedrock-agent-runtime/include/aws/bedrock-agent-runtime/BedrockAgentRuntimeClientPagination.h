/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeClient.h>
#include <aws/bedrock-agent-runtime/model/GetAgentMemoryPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionEventsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationStepsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListSessionsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/RerankPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/RetrievePaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BedrockAgentRuntime {

using GetAgentMemoryPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::GetAgentMemoryRequest,
                                                                  Pagination::GetAgentMemoryPaginationTraits<BedrockAgentRuntimeClient>>;
using ListFlowExecutionEventsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::ListFlowExecutionEventsRequest,
                                      Pagination::ListFlowExecutionEventsPaginationTraits<BedrockAgentRuntimeClient>>;
using ListFlowExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::ListFlowExecutionsRequest,
                                      Pagination::ListFlowExecutionsPaginationTraits<BedrockAgentRuntimeClient>>;
using ListInvocationsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::ListInvocationsRequest,
                                                                   Pagination::ListInvocationsPaginationTraits<BedrockAgentRuntimeClient>>;
using ListInvocationStepsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::ListInvocationStepsRequest,
                                      Pagination::ListInvocationStepsPaginationTraits<BedrockAgentRuntimeClient>>;
using ListSessionsPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::ListSessionsRequest,
                                                                Pagination::ListSessionsPaginationTraits<BedrockAgentRuntimeClient>>;
using RerankPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::RerankRequest,
                                                          Pagination::RerankPaginationTraits<BedrockAgentRuntimeClient>>;
using RetrievePaginator = Aws::Utils::Pagination::Paginator<BedrockAgentRuntimeClient, Model::RetrieveRequest,
                                                            Pagination::RetrievePaginationTraits<BedrockAgentRuntimeClient>>;

}  // namespace BedrockAgentRuntime
}  // namespace Aws
