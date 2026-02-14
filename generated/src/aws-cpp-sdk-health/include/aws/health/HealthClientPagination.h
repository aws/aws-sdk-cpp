/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/health/HealthClient.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeAffectedEntitiesPaginationTraits.h>
#include <aws/health/model/DescribeEventAggregatesPaginationTraits.h>
#include <aws/health/model/DescribeEventTypesPaginationTraits.h>
#include <aws/health/model/DescribeEventsForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeEventsPaginationTraits.h>

namespace Aws {
namespace Health {

using DescribeAffectedAccountsForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<HealthClient, Model::DescribeAffectedAccountsForOrganizationRequest,
                                      Pagination::DescribeAffectedAccountsForOrganizationPaginationTraits<HealthClient>>;
using DescribeAffectedEntitiesPaginator =
    Aws::Utils::Pagination::Paginator<HealthClient, Model::DescribeAffectedEntitiesRequest,
                                      Pagination::DescribeAffectedEntitiesPaginationTraits<HealthClient>>;
using DescribeAffectedEntitiesForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<HealthClient, Model::DescribeAffectedEntitiesForOrganizationRequest,
                                      Pagination::DescribeAffectedEntitiesForOrganizationPaginationTraits<HealthClient>>;
using DescribeEventAggregatesPaginator =
    Aws::Utils::Pagination::Paginator<HealthClient, Model::DescribeEventAggregatesRequest,
                                      Pagination::DescribeEventAggregatesPaginationTraits<HealthClient>>;
using DescribeEventsPaginator =
    Aws::Utils::Pagination::Paginator<HealthClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<HealthClient>>;
using DescribeEventsForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<HealthClient, Model::DescribeEventsForOrganizationRequest,
                                      Pagination::DescribeEventsForOrganizationPaginationTraits<HealthClient>>;
using DescribeEventTypesPaginator = Aws::Utils::Pagination::Paginator<HealthClient, Model::DescribeEventTypesRequest,
                                                                      Pagination::DescribeEventTypesPaginationTraits<HealthClient>>;

}  // namespace Health
}  // namespace Aws
