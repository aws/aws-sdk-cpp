/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotificationsClient.h>
#include <aws/codestar-notifications/model/ListEventTypesPaginationTraits.h>
#include <aws/codestar-notifications/model/ListNotificationRulesPaginationTraits.h>
#include <aws/codestar-notifications/model/ListTargetsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeStarNotifications {

using ListEventTypesPaginator = Aws::Utils::Pagination::Paginator<CodeStarNotificationsClient, Model::ListEventTypesRequest,
                                                                  Pagination::ListEventTypesPaginationTraits<CodeStarNotificationsClient>>;
using ListNotificationRulesPaginator =
    Aws::Utils::Pagination::Paginator<CodeStarNotificationsClient, Model::ListNotificationRulesRequest,
                                      Pagination::ListNotificationRulesPaginationTraits<CodeStarNotificationsClient>>;
using ListTargetsPaginator = Aws::Utils::Pagination::Paginator<CodeStarNotificationsClient, Model::ListTargetsRequest,
                                                               Pagination::ListTargetsPaginationTraits<CodeStarNotificationsClient>>;

}  // namespace CodeStarNotifications
}  // namespace Aws
