/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-agent-runtime/model/GetAgentMemoryPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionEventsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationStepsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListInvocationsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/ListSessionsPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/RerankPaginationTraits.h>
#include <aws/bedrock-agent-runtime/model/RetrievePaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockAgentRuntime {

class BedrockAgentRuntimeClient;

template <typename DerivedClient>
class BedrockAgentRuntimePaginationBase {
 public:
  /**
   * Create a paginator for GetAgentMemory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgentMemoryRequest, Pagination::GetAgentMemoryPaginationTraits<DerivedClient>>
  GetAgentMemoryPaginator(const Model::GetAgentMemoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgentMemoryRequest,
                                             Pagination::GetAgentMemoryPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListFlowExecutionEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowExecutionEventsRequest,
                                    Pagination::ListFlowExecutionEventsPaginationTraits<DerivedClient>>
  ListFlowExecutionEventsPaginator(const Model::ListFlowExecutionEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowExecutionEventsRequest,
                                             Pagination::ListFlowExecutionEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFlowExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowExecutionsRequest,
                                    Pagination::ListFlowExecutionsPaginationTraits<DerivedClient>>
  ListFlowExecutionsPaginator(const Model::ListFlowExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowExecutionsRequest,
                                             Pagination::ListFlowExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInvocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvocationsRequest,
                                    Pagination::ListInvocationsPaginationTraits<DerivedClient>>
  ListInvocationsPaginator(const Model::ListInvocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvocationsRequest,
                                             Pagination::ListInvocationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListInvocationSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvocationStepsRequest,
                                    Pagination::ListInvocationStepsPaginationTraits<DerivedClient>>
  ListInvocationStepsPaginator(const Model::ListInvocationStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvocationStepsRequest,
                                             Pagination::ListInvocationStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for Rerank operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::RerankRequest, Pagination::RerankPaginationTraits<DerivedClient>> RerankPaginator(
      const Model::RerankRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::RerankRequest, Pagination::RerankPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for Retrieve operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::RetrieveRequest, Pagination::RetrievePaginationTraits<DerivedClient>>
  RetrievePaginator(const Model::RetrieveRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::RetrieveRequest, Pagination::RetrievePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BedrockAgentRuntime
}  // namespace Aws
