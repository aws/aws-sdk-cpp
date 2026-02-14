/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/customer-profiles/CustomerProfilesClient.h>
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

namespace Aws {
namespace CustomerProfiles {

using GetSimilarProfilesPaginator =
    Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::GetSimilarProfilesRequest,
                                      Pagination::GetSimilarProfilesPaginationTraits<CustomerProfilesClient>>;
using ListDomainLayoutsPaginator = Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListDomainLayoutsRequest,
                                                                     Pagination::ListDomainLayoutsPaginationTraits<CustomerProfilesClient>>;
using ListDomainObjectTypesPaginator =
    Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListDomainObjectTypesRequest,
                                      Pagination::ListDomainObjectTypesPaginationTraits<CustomerProfilesClient>>;
using ListEventStreamsPaginator = Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListEventStreamsRequest,
                                                                    Pagination::ListEventStreamsPaginationTraits<CustomerProfilesClient>>;
using ListEventTriggersPaginator = Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListEventTriggersRequest,
                                                                     Pagination::ListEventTriggersPaginationTraits<CustomerProfilesClient>>;
using ListObjectTypeAttributesPaginator =
    Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListObjectTypeAttributesRequest,
                                      Pagination::ListObjectTypeAttributesPaginationTraits<CustomerProfilesClient>>;
using ListRecommenderRecipesPaginator =
    Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListRecommenderRecipesRequest,
                                      Pagination::ListRecommenderRecipesPaginationTraits<CustomerProfilesClient>>;
using ListRecommendersPaginator = Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListRecommendersRequest,
                                                                    Pagination::ListRecommendersPaginationTraits<CustomerProfilesClient>>;
using ListRuleBasedMatchesPaginator =
    Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListRuleBasedMatchesRequest,
                                      Pagination::ListRuleBasedMatchesPaginationTraits<CustomerProfilesClient>>;
using ListSegmentDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListSegmentDefinitionsRequest,
                                      Pagination::ListSegmentDefinitionsPaginationTraits<CustomerProfilesClient>>;
using ListUploadJobsPaginator = Aws::Utils::Pagination::Paginator<CustomerProfilesClient, Model::ListUploadJobsRequest,
                                                                  Pagination::ListUploadJobsPaginationTraits<CustomerProfilesClient>>;

}  // namespace CustomerProfiles
}  // namespace Aws
