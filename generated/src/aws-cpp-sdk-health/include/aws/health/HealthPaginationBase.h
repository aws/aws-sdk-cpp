/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeAffectedEntitiesPaginationTraits.h>
#include <aws/health/model/DescribeEventAggregatesPaginationTraits.h>
#include <aws/health/model/DescribeEventTypesPaginationTraits.h>
#include <aws/health/model/DescribeEventsForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeEventsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Health {

class HealthClient;

template <typename DerivedClient>
class HealthPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAffectedAccountsForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAffectedAccountsForOrganizationRequest,
                                    Pagination::DescribeAffectedAccountsForOrganizationPaginationTraits<DerivedClient>>
  DescribeAffectedAccountsForOrganizationPaginator(const Model::DescribeAffectedAccountsForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAffectedAccountsForOrganizationRequest,
                                             Pagination::DescribeAffectedAccountsForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAffectedEntities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAffectedEntitiesRequest,
                                    Pagination::DescribeAffectedEntitiesPaginationTraits<DerivedClient>>
  DescribeAffectedEntitiesPaginator(const Model::DescribeAffectedEntitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAffectedEntitiesRequest,
                                             Pagination::DescribeAffectedEntitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAffectedEntitiesForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAffectedEntitiesForOrganizationRequest,
                                    Pagination::DescribeAffectedEntitiesForOrganizationPaginationTraits<DerivedClient>>
  DescribeAffectedEntitiesForOrganizationPaginator(const Model::DescribeAffectedEntitiesForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAffectedEntitiesForOrganizationRequest,
                                             Pagination::DescribeAffectedEntitiesForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEventAggregates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventAggregatesRequest,
                                    Pagination::DescribeEventAggregatesPaginationTraits<DerivedClient>>
  DescribeEventAggregatesPaginator(const Model::DescribeEventAggregatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventAggregatesRequest,
                                             Pagination::DescribeEventAggregatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeEventsForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsForOrganizationRequest,
                                    Pagination::DescribeEventsForOrganizationPaginationTraits<DerivedClient>>
  DescribeEventsForOrganizationPaginator(const Model::DescribeEventsForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsForOrganizationRequest,
                                             Pagination::DescribeEventsForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEventTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventTypesRequest,
                                    Pagination::DescribeEventTypesPaginationTraits<DerivedClient>>
  DescribeEventTypesPaginator(const Model::DescribeEventTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventTypesRequest,
                                             Pagination::DescribeEventTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Health
}  // namespace Aws
