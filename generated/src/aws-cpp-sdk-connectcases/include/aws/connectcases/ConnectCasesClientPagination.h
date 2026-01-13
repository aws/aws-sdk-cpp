/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesClient.h>
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

namespace Aws {
namespace ConnectCases {

using GetCasePaginator =
    Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::GetCaseRequest, Pagination::GetCasePaginationTraits<ConnectCasesClient>>;
using GetCaseAuditEventsPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::GetCaseAuditEventsRequest,
                                                                      Pagination::GetCaseAuditEventsPaginationTraits<ConnectCasesClient>>;
using ListCaseRulesPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::ListCaseRulesRequest,
                                                                 Pagination::ListCaseRulesPaginationTraits<ConnectCasesClient>>;
using ListCasesForContactPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::ListCasesForContactRequest,
                                                                       Pagination::ListCasesForContactPaginationTraits<ConnectCasesClient>>;
using ListDomainsPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::ListDomainsRequest,
                                                               Pagination::ListDomainsPaginationTraits<ConnectCasesClient>>;
using ListFieldOptionsPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::ListFieldOptionsRequest,
                                                                    Pagination::ListFieldOptionsPaginationTraits<ConnectCasesClient>>;
using ListFieldsPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::ListFieldsRequest,
                                                              Pagination::ListFieldsPaginationTraits<ConnectCasesClient>>;
using ListLayoutsPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::ListLayoutsRequest,
                                                               Pagination::ListLayoutsPaginationTraits<ConnectCasesClient>>;
using ListTemplatesPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::ListTemplatesRequest,
                                                                 Pagination::ListTemplatesPaginationTraits<ConnectCasesClient>>;
using SearchAllRelatedItemsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::SearchAllRelatedItemsRequest,
                                      Pagination::SearchAllRelatedItemsPaginationTraits<ConnectCasesClient>>;
using SearchCasesPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::SearchCasesRequest,
                                                               Pagination::SearchCasesPaginationTraits<ConnectCasesClient>>;
using SearchRelatedItemsPaginator = Aws::Utils::Pagination::Paginator<ConnectCasesClient, Model::SearchRelatedItemsRequest,
                                                                      Pagination::SearchRelatedItemsPaginationTraits<ConnectCasesClient>>;

}  // namespace ConnectCases
}  // namespace Aws
