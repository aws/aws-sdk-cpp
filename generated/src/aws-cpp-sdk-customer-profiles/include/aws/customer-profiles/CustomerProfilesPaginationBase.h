/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/customer-profiles/model/GetSimilarProfilesPaginationTraits.h>
#include <aws/customer-profiles/model/ListDomainLayoutsPaginationTraits.h>
#include <aws/customer-profiles/model/ListDomainObjectTypesPaginationTraits.h>
#include <aws/customer-profiles/model/ListEventStreamsPaginationTraits.h>
#include <aws/customer-profiles/model/ListEventTriggersPaginationTraits.h>
#include <aws/customer-profiles/model/ListObjectTypeAttributesPaginationTraits.h>
#include <aws/customer-profiles/model/ListRecommenderRecipesPaginationTraits.h>
#include <aws/customer-profiles/model/ListRecommendersPaginationTraits.h>
#include <aws/customer-profiles/model/ListRuleBasedMatchesPaginationTraits.h>
#include <aws/customer-profiles/model/ListSegmentDefinitionsPaginationTraits.h>
#include <aws/customer-profiles/model/ListUploadJobsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace CustomerProfiles {

class CustomerProfilesClient;

template <typename DerivedClient>
class CustomerProfilesPaginationBase {
 public:
  /**
   * Create a paginator for GetSimilarProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSimilarProfilesRequest,
                                    Pagination::GetSimilarProfilesPaginationTraits<DerivedClient>>
  GetSimilarProfilesPaginator(const Model::GetSimilarProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSimilarProfilesRequest,
                                             Pagination::GetSimilarProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainLayouts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainLayoutsRequest,
                                    Pagination::ListDomainLayoutsPaginationTraits<DerivedClient>>
  ListDomainLayoutsPaginator(const Model::ListDomainLayoutsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainLayoutsRequest,
                                             Pagination::ListDomainLayoutsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainObjectTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainObjectTypesRequest,
                                    Pagination::ListDomainObjectTypesPaginationTraits<DerivedClient>>
  ListDomainObjectTypesPaginator(const Model::ListDomainObjectTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainObjectTypesRequest,
                                             Pagination::ListDomainObjectTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventStreamsRequest,
                                    Pagination::ListEventStreamsPaginationTraits<DerivedClient>>
  ListEventStreamsPaginator(const Model::ListEventStreamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventStreamsRequest,
                                             Pagination::ListEventStreamsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEventTriggers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventTriggersRequest,
                                    Pagination::ListEventTriggersPaginationTraits<DerivedClient>>
  ListEventTriggersPaginator(const Model::ListEventTriggersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventTriggersRequest,
                                             Pagination::ListEventTriggersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListObjectTypeAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectTypeAttributesRequest,
                                    Pagination::ListObjectTypeAttributesPaginationTraits<DerivedClient>>
  ListObjectTypeAttributesPaginator(const Model::ListObjectTypeAttributesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListObjectTypeAttributesRequest,
                                             Pagination::ListObjectTypeAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommenderRecipes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommenderRecipesRequest,
                                    Pagination::ListRecommenderRecipesPaginationTraits<DerivedClient>>
  ListRecommenderRecipesPaginator(const Model::ListRecommenderRecipesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommenderRecipesRequest,
                                             Pagination::ListRecommenderRecipesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommenders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendersRequest,
                                    Pagination::ListRecommendersPaginationTraits<DerivedClient>>
  ListRecommendersPaginator(const Model::ListRecommendersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendersRequest,
                                             Pagination::ListRecommendersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRuleBasedMatches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleBasedMatchesRequest,
                                    Pagination::ListRuleBasedMatchesPaginationTraits<DerivedClient>>
  ListRuleBasedMatchesPaginator(const Model::ListRuleBasedMatchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleBasedMatchesRequest,
                                             Pagination::ListRuleBasedMatchesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSegmentDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSegmentDefinitionsRequest,
                                    Pagination::ListSegmentDefinitionsPaginationTraits<DerivedClient>>
  ListSegmentDefinitionsPaginator(const Model::ListSegmentDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSegmentDefinitionsRequest,
                                             Pagination::ListSegmentDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUploadJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUploadJobsRequest, Pagination::ListUploadJobsPaginationTraits<DerivedClient>>
  ListUploadJobsPaginator(const Model::ListUploadJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUploadJobsRequest,
                                             Pagination::ListUploadJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace CustomerProfiles
}  // namespace Aws
