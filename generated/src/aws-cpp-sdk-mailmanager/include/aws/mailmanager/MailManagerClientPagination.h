/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mailmanager/MailManagerClient.h>
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

namespace Aws {
namespace MailManager {

using ListAddonInstancesPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListAddonInstancesRequest,
                                                                      Pagination::ListAddonInstancesPaginationTraits<MailManagerClient>>;
using ListAddonSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListAddonSubscriptionsRequest,
                                      Pagination::ListAddonSubscriptionsPaginationTraits<MailManagerClient>>;
using ListAddressListImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListAddressListImportJobsRequest,
                                      Pagination::ListAddressListImportJobsPaginationTraits<MailManagerClient>>;
using ListAddressListsPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListAddressListsRequest,
                                                                    Pagination::ListAddressListsPaginationTraits<MailManagerClient>>;
using ListArchiveExportsPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListArchiveExportsRequest,
                                                                      Pagination::ListArchiveExportsPaginationTraits<MailManagerClient>>;
using ListArchivesPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListArchivesRequest,
                                                                Pagination::ListArchivesPaginationTraits<MailManagerClient>>;
using ListArchiveSearchesPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListArchiveSearchesRequest,
                                                                       Pagination::ListArchiveSearchesPaginationTraits<MailManagerClient>>;
using ListIngressPointsPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListIngressPointsRequest,
                                                                     Pagination::ListIngressPointsPaginationTraits<MailManagerClient>>;
using ListMembersOfAddressListPaginator =
    Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListMembersOfAddressListRequest,
                                      Pagination::ListMembersOfAddressListPaginationTraits<MailManagerClient>>;
using ListRelaysPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListRelaysRequest,
                                                              Pagination::ListRelaysPaginationTraits<MailManagerClient>>;
using ListRuleSetsPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListRuleSetsRequest,
                                                                Pagination::ListRuleSetsPaginationTraits<MailManagerClient>>;
using ListTrafficPoliciesPaginator = Aws::Utils::Pagination::Paginator<MailManagerClient, Model::ListTrafficPoliciesRequest,
                                                                       Pagination::ListTrafficPoliciesPaginationTraits<MailManagerClient>>;

}  // namespace MailManager
}  // namespace Aws
