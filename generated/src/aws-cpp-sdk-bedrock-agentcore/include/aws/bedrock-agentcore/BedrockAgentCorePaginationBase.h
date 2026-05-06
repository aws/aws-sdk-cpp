/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-agentcore/model/ListABTestsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListActorsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListBatchEvaluationsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListEventsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryExtractionJobsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListRecommendationsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/ListSessionsPaginationTraits.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockAgentCore {

template <typename DerivedClient>
class BedrockAgentCorePaginationBase {
 public:
  /**
   * Create a paginator for ListABTests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListABTestsRequest, Pagination::ListABTestsPaginationTraits<DerivedClient>>
  ListABTestsPaginator(const Model::ListABTestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListABTestsRequest,
                                             Pagination::ListABTestsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListActors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActorsRequest, Pagination::ListActorsPaginationTraits<DerivedClient>>
  ListActorsPaginator(const Model::ListActorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActorsRequest,
                                             Pagination::ListActorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListBatchEvaluations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchEvaluationsRequest,
                                    Pagination::ListBatchEvaluationsPaginationTraits<DerivedClient>>
  ListBatchEvaluationsPaginator(const Model::ListBatchEvaluationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchEvaluationsRequest,
                                             Pagination::ListBatchEvaluationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsRequest, Pagination::ListEventsPaginationTraits<DerivedClient>>
  ListEventsPaginator(const Model::ListEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoryRecordsRequest,
                                             Pagination::ListMemoryRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                    Pagination::ListRecommendationsPaginationTraits<DerivedClient>>
  ListRecommendationsPaginator(const Model::ListRecommendationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                             Pagination::ListRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::RetrieveMemoryRecordsRequest,
                                             Pagination::RetrieveMemoryRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BedrockAgentCore
}  // namespace Aws
