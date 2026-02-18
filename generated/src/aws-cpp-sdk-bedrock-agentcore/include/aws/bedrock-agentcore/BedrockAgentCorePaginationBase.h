/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-agentcore/model/ListActorsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListEventsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryExtractionJobsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListSessionsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockAgentCore {

class BedrockAgentCoreClient;

template <typename DerivedClient>
class BedrockAgentCorePaginationBase {
 public:
  /**
   * Create a paginator for ListActors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActorsRequest, Pagination::ListActorsPaginationTraits<DerivedClient>>
  ListActorsPaginator(const Model::ListActorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActorsRequest,
                                             Pagination::ListActorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsRequest, Pagination::ListEventsPaginationTraits<DerivedClient>>
  ListEventsPaginator(const Model::ListEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsRequest,
                                             Pagination::ListEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListMemoryExtractionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoryExtractionJobsRequest,
                                    Pagination::ListMemoryExtractionJobsPaginationTraits<DerivedClient>>
  ListMemoryExtractionJobsPaginator(const Model::ListMemoryExtractionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoryExtractionJobsRequest,
                                             Pagination::ListMemoryExtractionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMemoryRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoryRecordsRequest,
                                    Pagination::ListMemoryRecordsPaginationTraits<DerivedClient>>
  ListMemoryRecordsPaginator(const Model::ListMemoryRecordsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoryRecordsRequest,
                                             Pagination::ListMemoryRecordsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for RetrieveMemoryRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::RetrieveMemoryRecordsRequest,
                                    Pagination::RetrieveMemoryRecordsPaginationTraits<DerivedClient>>
  RetrieveMemoryRecordsPaginator(const Model::RetrieveMemoryRecordsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::RetrieveMemoryRecordsRequest,
                                             Pagination::RetrieveMemoryRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BedrockAgentCore
}  // namespace Aws
