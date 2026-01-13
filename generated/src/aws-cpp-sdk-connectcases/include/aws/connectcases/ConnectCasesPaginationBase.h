/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/connectcases/model/GetCaseAuditEventsPaginationTraits.h>
#include <aws/connectcases/model/GetCasePaginationTraits.h>
#include <aws/connectcases/model/ListCaseRulesPaginationTraits.h>
#include <aws/connectcases/model/ListCasesForContactPaginationTraits.h>
#include <aws/connectcases/model/ListDomainsPaginationTraits.h>
#include <aws/connectcases/model/ListFieldOptionsPaginationTraits.h>
#include <aws/connectcases/model/ListFieldsPaginationTraits.h>
#include <aws/connectcases/model/ListLayoutsPaginationTraits.h>
#include <aws/connectcases/model/ListTemplatesPaginationTraits.h>
#include <aws/connectcases/model/SearchAllRelatedItemsPaginationTraits.h>
#include <aws/connectcases/model/SearchCasesPaginationTraits.h>
#include <aws/connectcases/model/SearchRelatedItemsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ConnectCases {

class ConnectCasesClient;

template <typename DerivedClient>
class ConnectCasesPaginationBase {
 public:
  /**
   * Create a paginator for GetCase operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCaseRequest, Pagination::GetCasePaginationTraits<DerivedClient>>
  GetCasePaginator(const Model::GetCaseRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCaseRequest, Pagination::GetCasePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCaseAuditEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCaseAuditEventsRequest,
                                    Pagination::GetCaseAuditEventsPaginationTraits<DerivedClient>>
  GetCaseAuditEventsPaginator(const Model::GetCaseAuditEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCaseAuditEventsRequest,
                                             Pagination::GetCaseAuditEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCaseRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCaseRulesRequest, Pagination::ListCaseRulesPaginationTraits<DerivedClient>>
  ListCaseRulesPaginator(const Model::ListCaseRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCaseRulesRequest,
                                             Pagination::ListCaseRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListCasesForContact operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCasesForContactRequest,
                                    Pagination::ListCasesForContactPaginationTraits<DerivedClient>>
  ListCasesForContactPaginator(const Model::ListCasesForContactRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCasesForContactRequest,
                                             Pagination::ListCasesForContactPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListFieldOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFieldOptionsRequest,
                                    Pagination::ListFieldOptionsPaginationTraits<DerivedClient>>
  ListFieldOptionsPaginator(const Model::ListFieldOptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFieldOptionsRequest,
                                             Pagination::ListFieldOptionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFields operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFieldsRequest, Pagination::ListFieldsPaginationTraits<DerivedClient>>
  ListFieldsPaginator(const Model::ListFieldsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFieldsRequest,
                                             Pagination::ListFieldsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListLayouts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLayoutsRequest, Pagination::ListLayoutsPaginationTraits<DerivedClient>>
  ListLayoutsPaginator(const Model::ListLayoutsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLayoutsRequest,
                                             Pagination::ListLayoutsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest, Pagination::ListTemplatesPaginationTraits<DerivedClient>>
  ListTemplatesPaginator(const Model::ListTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest,
                                             Pagination::ListTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchAllRelatedItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAllRelatedItemsRequest,
                                    Pagination::SearchAllRelatedItemsPaginationTraits<DerivedClient>>
  SearchAllRelatedItemsPaginator(const Model::SearchAllRelatedItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAllRelatedItemsRequest,
                                             Pagination::SearchAllRelatedItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchCasesRequest, Pagination::SearchCasesPaginationTraits<DerivedClient>>
  SearchCasesPaginator(const Model::SearchCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchCasesRequest,
                                             Pagination::SearchCasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for SearchRelatedItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRelatedItemsRequest,
                                    Pagination::SearchRelatedItemsPaginationTraits<DerivedClient>>
  SearchRelatedItemsPaginator(const Model::SearchRelatedItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRelatedItemsRequest,
                                             Pagination::SearchRelatedItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ConnectCases
}  // namespace Aws
