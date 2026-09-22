/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniClient.h>
#include <aws/cloudwatchomni/model/GetContextGraphPaginationTraits.h>
#include <aws/cloudwatchomni/model/GetTelemetryQueryResultsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListAccessGrantsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListAccessProfilesPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListAlertsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListDomainAccessGrantsForOrganizationPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListDomainsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListIntegrationsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListOmniDashboardsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListSpacesForOrganizationPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListSpacesPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListTelemetryFieldsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListTelemetryQuerySessionsPaginationTraits.h>
#include <aws/cloudwatchomni/model/ListViewsPaginationTraits.h>
#include <aws/cloudwatchomni/model/SearchPrincipalsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CloudWatchOmni {

using GetContextGraphPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::GetContextGraphRequest,
                                                                   Pagination::GetContextGraphPaginationTraits<CloudWatchOmniClient>>;
using GetTelemetryQueryResultsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::GetTelemetryQueryResultsRequest,
                                      Pagination::GetTelemetryQueryResultsPaginationTraits<CloudWatchOmniClient>>;
using ListAccessGrantsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListAccessGrantsRequest,
                                                                    Pagination::ListAccessGrantsPaginationTraits<CloudWatchOmniClient>>;
using ListAccessProfilesPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListAccessProfilesRequest,
                                                                      Pagination::ListAccessProfilesPaginationTraits<CloudWatchOmniClient>>;
using ListAlertsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListAlertsRequest,
                                                              Pagination::ListAlertsPaginationTraits<CloudWatchOmniClient>>;
using ListDomainAccessGrantsForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListDomainAccessGrantsForOrganizationRequest,
                                      Pagination::ListDomainAccessGrantsForOrganizationPaginationTraits<CloudWatchOmniClient>>;
using ListDomainsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListDomainsRequest,
                                                               Pagination::ListDomainsPaginationTraits<CloudWatchOmniClient>>;
using ListIntegrationsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListIntegrationsRequest,
                                                                    Pagination::ListIntegrationsPaginationTraits<CloudWatchOmniClient>>;
using ListOmniDashboardsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListOmniDashboardsRequest,
                                                                      Pagination::ListOmniDashboardsPaginationTraits<CloudWatchOmniClient>>;
using ListSpacesPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListSpacesRequest,
                                                              Pagination::ListSpacesPaginationTraits<CloudWatchOmniClient>>;
using ListSpacesForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListSpacesForOrganizationRequest,
                                      Pagination::ListSpacesForOrganizationPaginationTraits<CloudWatchOmniClient>>;
using ListTelemetryFieldsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListTelemetryFieldsRequest,
                                      Pagination::ListTelemetryFieldsPaginationTraits<CloudWatchOmniClient>>;
using ListTelemetryQuerySessionsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListTelemetryQuerySessionsRequest,
                                      Pagination::ListTelemetryQuerySessionsPaginationTraits<CloudWatchOmniClient>>;
using ListViewsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::ListViewsRequest,
                                                             Pagination::ListViewsPaginationTraits<CloudWatchOmniClient>>;
using SearchPrincipalsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchOmniClient, Model::SearchPrincipalsRequest,
                                                                    Pagination::SearchPrincipalsPaginationTraits<CloudWatchOmniClient>>;

}  // namespace CloudWatchOmni
}  // namespace Aws
