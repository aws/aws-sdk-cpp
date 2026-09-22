/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudWatchOmni {

template <typename DerivedClient>
class CloudWatchOmniPaginationBase {
 public:
  /**
   * Create a paginator for GetContextGraph operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetContextGraphRequest,
                                    Pagination::GetContextGraphPaginationTraits<DerivedClient>>
  GetContextGraphPaginator(const Model::GetContextGraphRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetContextGraphRequest,
                                             Pagination::GetContextGraphPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetTelemetryQueryResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTelemetryQueryResultsRequest,
                                    Pagination::GetTelemetryQueryResultsPaginationTraits<DerivedClient>>
  GetTelemetryQueryResultsPaginator(const Model::GetTelemetryQueryResultsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTelemetryQueryResultsRequest,
                                             Pagination::GetTelemetryQueryResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsRequest,
                                    Pagination::ListAccessGrantsPaginationTraits<DerivedClient>>
  ListAccessGrantsPaginator(const Model::ListAccessGrantsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessGrantsRequest,
                                             Pagination::ListAccessGrantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccessProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessProfilesRequest,
                                    Pagination::ListAccessProfilesPaginationTraits<DerivedClient>>
  ListAccessProfilesPaginator(const Model::ListAccessProfilesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessProfilesRequest,
                                             Pagination::ListAccessProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAlerts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlertsRequest, Pagination::ListAlertsPaginationTraits<DerivedClient>>
  ListAlertsPaginator(const Model::ListAlertsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlertsRequest,
                                             Pagination::ListAlertsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListDomainAccessGrantsForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainAccessGrantsForOrganizationRequest,
                                    Pagination::ListDomainAccessGrantsForOrganizationPaginationTraits<DerivedClient>>
  ListDomainAccessGrantsForOrganizationPaginator(const Model::ListDomainAccessGrantsForOrganizationRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainAccessGrantsForOrganizationRequest,
                                             Pagination::ListDomainAccessGrantsForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationsRequest,
                                    Pagination::ListIntegrationsPaginationTraits<DerivedClient>>
  ListIntegrationsPaginator(const Model::ListIntegrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIntegrationsRequest,
                                             Pagination::ListIntegrationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListOmniDashboards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOmniDashboardsRequest,
                                    Pagination::ListOmniDashboardsPaginationTraits<DerivedClient>>
  ListOmniDashboardsPaginator(const Model::ListOmniDashboardsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOmniDashboardsRequest,
                                             Pagination::ListOmniDashboardsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSpaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest, Pagination::ListSpacesPaginationTraits<DerivedClient>>
  ListSpacesPaginator(const Model::ListSpacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest,
                                             Pagination::ListSpacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListSpacesForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesForOrganizationRequest,
                                    Pagination::ListSpacesForOrganizationPaginationTraits<DerivedClient>>
  ListSpacesForOrganizationPaginator(const Model::ListSpacesForOrganizationRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesForOrganizationRequest,
                                             Pagination::ListSpacesForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTelemetryFields operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryFieldsRequest,
                                    Pagination::ListTelemetryFieldsPaginationTraits<DerivedClient>>
  ListTelemetryFieldsPaginator(const Model::ListTelemetryFieldsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryFieldsRequest,
                                             Pagination::ListTelemetryFieldsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTelemetryQuerySessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryQuerySessionsRequest,
                                    Pagination::ListTelemetryQuerySessionsPaginationTraits<DerivedClient>>
  ListTelemetryQuerySessionsPaginator(const Model::ListTelemetryQuerySessionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTelemetryQuerySessionsRequest,
                                             Pagination::ListTelemetryQuerySessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewsRequest, Pagination::ListViewsPaginationTraits<DerivedClient>>
  ListViewsPaginator(const Model::ListViewsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListViewsRequest, Pagination::ListViewsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchPrincipals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPrincipalsRequest,
                                    Pagination::SearchPrincipalsPaginationTraits<DerivedClient>>
  SearchPrincipalsPaginator(const Model::SearchPrincipalsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchPrincipalsRequest,
                                             Pagination::SearchPrincipalsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace CloudWatchOmni
}  // namespace Aws
