/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mailmanager/model/ListAddonInstancesPaginationTraits.h>
#include <aws/mailmanager/model/ListAddonSubscriptionsPaginationTraits.h>
#include <aws/mailmanager/model/ListAddressListImportJobsPaginationTraits.h>
#include <aws/mailmanager/model/ListAddressListsPaginationTraits.h>
#include <aws/mailmanager/model/ListArchiveExportsPaginationTraits.h>
#include <aws/mailmanager/model/ListArchiveSearchesPaginationTraits.h>
#include <aws/mailmanager/model/ListArchivesPaginationTraits.h>
#include <aws/mailmanager/model/ListIngressPointsPaginationTraits.h>
#include <aws/mailmanager/model/ListMembersOfAddressListPaginationTraits.h>
#include <aws/mailmanager/model/ListRelaysPaginationTraits.h>
#include <aws/mailmanager/model/ListRuleSetsPaginationTraits.h>
#include <aws/mailmanager/model/ListTrafficPoliciesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MailManager {

class MailManagerClient;

template <typename DerivedClient>
class MailManagerPaginationBase {
 public:
  /**
   * Create a paginator for ListAddonInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddonInstancesRequest,
                                    Pagination::ListAddonInstancesPaginationTraits<DerivedClient>>
  ListAddonInstancesPaginator(const Model::ListAddonInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddonInstancesRequest,
                                             Pagination::ListAddonInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAddonSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddonSubscriptionsRequest,
                                    Pagination::ListAddonSubscriptionsPaginationTraits<DerivedClient>>
  ListAddonSubscriptionsPaginator(const Model::ListAddonSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddonSubscriptionsRequest,
                                             Pagination::ListAddonSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAddressListImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddressListImportJobsRequest,
                                    Pagination::ListAddressListImportJobsPaginationTraits<DerivedClient>>
  ListAddressListImportJobsPaginator(const Model::ListAddressListImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddressListImportJobsRequest,
                                             Pagination::ListAddressListImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAddressLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddressListsRequest,
                                    Pagination::ListAddressListsPaginationTraits<DerivedClient>>
  ListAddressListsPaginator(const Model::ListAddressListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddressListsRequest,
                                             Pagination::ListAddressListsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListArchiveExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchiveExportsRequest,
                                    Pagination::ListArchiveExportsPaginationTraits<DerivedClient>>
  ListArchiveExportsPaginator(const Model::ListArchiveExportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchiveExportsRequest,
                                             Pagination::ListArchiveExportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListArchives operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchivesRequest, Pagination::ListArchivesPaginationTraits<DerivedClient>>
  ListArchivesPaginator(const Model::ListArchivesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchivesRequest,
                                             Pagination::ListArchivesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListArchiveSearches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchiveSearchesRequest,
                                    Pagination::ListArchiveSearchesPaginationTraits<DerivedClient>>
  ListArchiveSearchesPaginator(const Model::ListArchiveSearchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListArchiveSearchesRequest,
                                             Pagination::ListArchiveSearchesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIngressPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngressPointsRequest,
                                    Pagination::ListIngressPointsPaginationTraits<DerivedClient>>
  ListIngressPointsPaginator(const Model::ListIngressPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngressPointsRequest,
                                             Pagination::ListIngressPointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMembersOfAddressList operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersOfAddressListRequest,
                                    Pagination::ListMembersOfAddressListPaginationTraits<DerivedClient>>
  ListMembersOfAddressListPaginator(const Model::ListMembersOfAddressListRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersOfAddressListRequest,
                                             Pagination::ListMembersOfAddressListPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRelays operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelaysRequest, Pagination::ListRelaysPaginationTraits<DerivedClient>>
  ListRelaysPaginator(const Model::ListRelaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelaysRequest,
                                             Pagination::ListRelaysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListRuleSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleSetsRequest, Pagination::ListRuleSetsPaginationTraits<DerivedClient>>
  ListRuleSetsPaginator(const Model::ListRuleSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleSetsRequest,
                                             Pagination::ListRuleSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTrafficPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrafficPoliciesRequest,
                                    Pagination::ListTrafficPoliciesPaginationTraits<DerivedClient>>
  ListTrafficPoliciesPaginator(const Model::ListTrafficPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrafficPoliciesRequest,
                                             Pagination::ListTrafficPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MailManager
}  // namespace Aws
