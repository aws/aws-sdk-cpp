/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codestar-notifications/model/ListEventTypesPaginationTraits.h>
#include <aws/codestar-notifications/model/ListNotificationRulesPaginationTraits.h>
#include <aws/codestar-notifications/model/ListTargetsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeStarNotifications {

class CodeStarNotificationsClient;

template <typename DerivedClient>
class CodeStarNotificationsPaginationBase {
 public:
  /**
   * Create a paginator for ListEventTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventTypesRequest, Pagination::ListEventTypesPaginationTraits<DerivedClient>>
  ListEventTypesPaginator(const Model::ListEventTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventTypesRequest,
                                             Pagination::ListEventTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListNotificationRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationRulesRequest,
                                    Pagination::ListNotificationRulesPaginationTraits<DerivedClient>>
  ListNotificationRulesPaginator(const Model::ListNotificationRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationRulesRequest,
                                             Pagination::ListNotificationRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsRequest, Pagination::ListTargetsPaginationTraits<DerivedClient>>
  ListTargetsPaginator(const Model::ListTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsRequest,
                                             Pagination::ListTargetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace CodeStarNotifications
}  // namespace Aws
