/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elementalinference/model/ListDictionariesPaginationTraits.h>
#include <aws/elementalinference/model/ListFeedsPaginationTraits.h>
#include <aws/elementalinference/model/ListFunctionsPaginationTraits.h>
#include <aws/elementalinference/model/ListQuestionSetVersionsPaginationTraits.h>
#include <aws/elementalinference/model/ListQuestionSetsPaginationTraits.h>
#include <aws/elementalinference/model/ListScheduleActionsPaginationTraits.h>
#include <aws/elementalinference/model/SearchFixturesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElementalInference {

template <typename DerivedClient>
class ElementalInferencePaginationBase {
 public:
  /**
   * Create a paginator for ListDictionaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDictionariesRequest,
                                    Pagination::ListDictionariesPaginationTraits<DerivedClient>>
  ListDictionariesPaginator(const Model::ListDictionariesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDictionariesRequest,
                                             Pagination::ListDictionariesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFeeds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFeedsRequest, Pagination::ListFeedsPaginationTraits<DerivedClient>>
  ListFeedsPaginator(const Model::ListFeedsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFeedsRequest, Pagination::ListFeedsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsRequest, Pagination::ListFunctionsPaginationTraits<DerivedClient>>
  ListFunctionsPaginator(const Model::ListFunctionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsRequest,
                                             Pagination::ListFunctionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListQuestionSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuestionSetsRequest,
                                    Pagination::ListQuestionSetsPaginationTraits<DerivedClient>>
  ListQuestionSetsPaginator(const Model::ListQuestionSetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuestionSetsRequest,
                                             Pagination::ListQuestionSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListQuestionSetVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuestionSetVersionsRequest,
                                    Pagination::ListQuestionSetVersionsPaginationTraits<DerivedClient>>
  ListQuestionSetVersionsPaginator(const Model::ListQuestionSetVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuestionSetVersionsRequest,
                                             Pagination::ListQuestionSetVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScheduleActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduleActionsRequest,
                                    Pagination::ListScheduleActionsPaginationTraits<DerivedClient>>
  ListScheduleActionsPaginator(const Model::ListScheduleActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduleActionsRequest,
                                             Pagination::ListScheduleActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchFixtures operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFixturesRequest, Pagination::SearchFixturesPaginationTraits<DerivedClient>>
  SearchFixturesPaginator(const Model::SearchFixturesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFixturesRequest,
                                             Pagination::SearchFixturesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace ElementalInference
}  // namespace Aws
