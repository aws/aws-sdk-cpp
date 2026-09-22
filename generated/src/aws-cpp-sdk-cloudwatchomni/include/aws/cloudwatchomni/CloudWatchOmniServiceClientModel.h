/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudwatchomni/CloudWatchOmniEndpointProvider.h>
#include <aws/cloudwatchomni/CloudWatchOmniErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in CloudWatchOmniClient header */
#include <aws/cloudwatchomni/model/CreateAccessGrantResult.h>
#include <aws/cloudwatchomni/model/CreateAccessProfileResult.h>
#include <aws/cloudwatchomni/model/CreateAlertResult.h>
#include <aws/cloudwatchomni/model/CreateDomainAccessGrantForOrganizationResult.h>
#include <aws/cloudwatchomni/model/CreateDomainForOrganizationResult.h>
#include <aws/cloudwatchomni/model/CreateDomainResult.h>
#include <aws/cloudwatchomni/model/CreateIntegrationResult.h>
#include <aws/cloudwatchomni/model/CreateOmniDashboardResult.h>
#include <aws/cloudwatchomni/model/CreateOneTimeDeepLinkCodeResult.h>
#include <aws/cloudwatchomni/model/CreateSpaceResult.h>
#include <aws/cloudwatchomni/model/CreateViewResult.h>
#include <aws/cloudwatchomni/model/DeleteAccessGrantResult.h>
#include <aws/cloudwatchomni/model/DeleteAccessProfileResult.h>
#include <aws/cloudwatchomni/model/DeleteAlertResult.h>
#include <aws/cloudwatchomni/model/DeleteDomainAccessGrantForOrganizationResult.h>
#include <aws/cloudwatchomni/model/DeleteDomainForOrganizationResult.h>
#include <aws/cloudwatchomni/model/DeleteDomainResult.h>
#include <aws/cloudwatchomni/model/DeleteIntegrationResult.h>
#include <aws/cloudwatchomni/model/DeleteOmniDashboardResult.h>
#include <aws/cloudwatchomni/model/DeleteSpaceResult.h>
#include <aws/cloudwatchomni/model/DeleteViewResult.h>
#include <aws/cloudwatchomni/model/GetAccessGrantResult.h>
#include <aws/cloudwatchomni/model/GetAccessProfileResult.h>
#include <aws/cloudwatchomni/model/GetAlertResult.h>
#include <aws/cloudwatchomni/model/GetContextGraphResult.h>
#include <aws/cloudwatchomni/model/GetDomainAccessGrantForOrganizationResult.h>
#include <aws/cloudwatchomni/model/GetDomainForOrganizationResult.h>
#include <aws/cloudwatchomni/model/GetDomainResult.h>
#include <aws/cloudwatchomni/model/GetIntegrationResult.h>
#include <aws/cloudwatchomni/model/GetIntelligenceConfigurationRequest.h>
#include <aws/cloudwatchomni/model/GetIntelligenceConfigurationResult.h>
#include <aws/cloudwatchomni/model/GetOmniDashboardResult.h>
#include <aws/cloudwatchomni/model/GetSpaceCredentialsForOrganizationResult.h>
#include <aws/cloudwatchomni/model/GetSpaceResult.h>
#include <aws/cloudwatchomni/model/GetTelemetryQueryResultsResult.h>
#include <aws/cloudwatchomni/model/GetViewResult.h>
#include <aws/cloudwatchomni/model/ListAccessGrantsRequest.h>
#include <aws/cloudwatchomni/model/ListAccessGrantsResult.h>
#include <aws/cloudwatchomni/model/ListAccessProfilesResult.h>
#include <aws/cloudwatchomni/model/ListAlertsResult.h>
#include <aws/cloudwatchomni/model/ListDomainAccessGrantsForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/ListDomainAccessGrantsForOrganizationResult.h>
#include <aws/cloudwatchomni/model/ListDomainsRequest.h>
#include <aws/cloudwatchomni/model/ListDomainsResult.h>
#include <aws/cloudwatchomni/model/ListIntegrationsRequest.h>
#include <aws/cloudwatchomni/model/ListIntegrationsResult.h>
#include <aws/cloudwatchomni/model/ListOmniDashboardsResult.h>
#include <aws/cloudwatchomni/model/ListSpacesForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/ListSpacesForOrganizationResult.h>
#include <aws/cloudwatchomni/model/ListSpacesRequest.h>
#include <aws/cloudwatchomni/model/ListSpacesResult.h>
#include <aws/cloudwatchomni/model/ListTelemetryFieldsResult.h>
#include <aws/cloudwatchomni/model/ListTelemetryQuerySessionsRequest.h>
#include <aws/cloudwatchomni/model/ListTelemetryQuerySessionsResult.h>
#include <aws/cloudwatchomni/model/ListViewsRequest.h>
#include <aws/cloudwatchomni/model/ListViewsResult.h>
#include <aws/cloudwatchomni/model/PutIntelligenceConfigurationRequest.h>
#include <aws/cloudwatchomni/model/PutIntelligenceConfigurationResult.h>
#include <aws/cloudwatchomni/model/SearchPrincipalsResult.h>
#include <aws/cloudwatchomni/model/StartTelemetryQueryResult.h>
#include <aws/cloudwatchomni/model/StartTelemetryQuerySessionRequest.h>
#include <aws/cloudwatchomni/model/StartTelemetryQuerySessionResult.h>
#include <aws/cloudwatchomni/model/StopTelemetryQueryResult.h>
#include <aws/cloudwatchomni/model/StopTelemetryQuerySessionResult.h>
#include <aws/cloudwatchomni/model/UpdateAccessProfileResult.h>
#include <aws/cloudwatchomni/model/UpdateAlertResult.h>
#include <aws/cloudwatchomni/model/UpdateDomainForOrganizationResult.h>
#include <aws/cloudwatchomni/model/UpdateDomainResult.h>
#include <aws/cloudwatchomni/model/UpdateIntegrationResult.h>
#include <aws/cloudwatchomni/model/UpdateOmniDashboardResult.h>
#include <aws/cloudwatchomni/model/UpdateSpaceResult.h>
#include <aws/cloudwatchomni/model/UpdateViewResult.h>
/* End of service model headers required in CloudWatchOmniClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace CloudWatchOmni {
using CloudWatchOmniClientConfiguration = Aws::Client::GenericClientConfiguration;
using CloudWatchOmniEndpointProviderBase = Aws::CloudWatchOmni::Endpoint::CloudWatchOmniEndpointProviderBase;
using CloudWatchOmniEndpointProvider = Aws::CloudWatchOmni::Endpoint::CloudWatchOmniEndpointProvider;

namespace Model {
/* Service model forward declarations required in CloudWatchOmniClient header */
class CreateAccessGrantRequest;
class CreateAccessProfileRequest;
class CreateAlertRequest;
class CreateDomainRequest;
class CreateDomainAccessGrantForOrganizationRequest;
class CreateDomainForOrganizationRequest;
class CreateIntegrationRequest;
class CreateOmniDashboardRequest;
class CreateOneTimeDeepLinkCodeRequest;
class CreateSpaceRequest;
class CreateViewRequest;
class DeleteAccessGrantRequest;
class DeleteAccessProfileRequest;
class DeleteAlertRequest;
class DeleteDomainRequest;
class DeleteDomainAccessGrantForOrganizationRequest;
class DeleteDomainForOrganizationRequest;
class DeleteIntegrationRequest;
class DeleteOmniDashboardRequest;
class DeleteSpaceRequest;
class DeleteViewRequest;
class GetAccessGrantRequest;
class GetAccessProfileRequest;
class GetAlertRequest;
class GetContextGraphRequest;
class GetDomainRequest;
class GetDomainAccessGrantForOrganizationRequest;
class GetDomainForOrganizationRequest;
class GetIntegrationRequest;
class GetIntelligenceConfigurationRequest;
class GetOmniDashboardRequest;
class GetSpaceRequest;
class GetSpaceCredentialsForOrganizationRequest;
class GetTelemetryQueryResultsRequest;
class GetViewRequest;
class ListAccessGrantsRequest;
class ListAccessProfilesRequest;
class ListAlertsRequest;
class ListDomainAccessGrantsForOrganizationRequest;
class ListDomainsRequest;
class ListIntegrationsRequest;
class ListOmniDashboardsRequest;
class ListSpacesRequest;
class ListSpacesForOrganizationRequest;
class ListTelemetryFieldsRequest;
class ListTelemetryQuerySessionsRequest;
class ListViewsRequest;
class PutIntelligenceConfigurationRequest;
class SearchPrincipalsRequest;
class StartTelemetryQueryRequest;
class StartTelemetryQuerySessionRequest;
class StopTelemetryQueryRequest;
class StopTelemetryQuerySessionRequest;
class UpdateAccessProfileRequest;
class UpdateAlertRequest;
class UpdateDomainRequest;
class UpdateDomainForOrganizationRequest;
class UpdateIntegrationRequest;
class UpdateOmniDashboardRequest;
class UpdateSpaceRequest;
class UpdateViewRequest;
/* End of service model forward declarations required in CloudWatchOmniClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateAccessGrantResult, CloudWatchOmniError> CreateAccessGrantOutcome;
typedef Aws::Utils::Outcome<CreateAccessProfileResult, CloudWatchOmniError> CreateAccessProfileOutcome;
typedef Aws::Utils::Outcome<CreateAlertResult, CloudWatchOmniError> CreateAlertOutcome;
typedef Aws::Utils::Outcome<CreateDomainResult, CloudWatchOmniError> CreateDomainOutcome;
typedef Aws::Utils::Outcome<CreateDomainAccessGrantForOrganizationResult, CloudWatchOmniError>
    CreateDomainAccessGrantForOrganizationOutcome;
typedef Aws::Utils::Outcome<CreateDomainForOrganizationResult, CloudWatchOmniError> CreateDomainForOrganizationOutcome;
typedef Aws::Utils::Outcome<CreateIntegrationResult, CloudWatchOmniError> CreateIntegrationOutcome;
typedef Aws::Utils::Outcome<CreateOmniDashboardResult, CloudWatchOmniError> CreateOmniDashboardOutcome;
typedef Aws::Utils::Outcome<CreateOneTimeDeepLinkCodeResult, CloudWatchOmniError> CreateOneTimeDeepLinkCodeOutcome;
typedef Aws::Utils::Outcome<CreateSpaceResult, CloudWatchOmniError> CreateSpaceOutcome;
typedef Aws::Utils::Outcome<CreateViewResult, CloudWatchOmniError> CreateViewOutcome;
typedef Aws::Utils::Outcome<DeleteAccessGrantResult, CloudWatchOmniError> DeleteAccessGrantOutcome;
typedef Aws::Utils::Outcome<DeleteAccessProfileResult, CloudWatchOmniError> DeleteAccessProfileOutcome;
typedef Aws::Utils::Outcome<DeleteAlertResult, CloudWatchOmniError> DeleteAlertOutcome;
typedef Aws::Utils::Outcome<DeleteDomainResult, CloudWatchOmniError> DeleteDomainOutcome;
typedef Aws::Utils::Outcome<DeleteDomainAccessGrantForOrganizationResult, CloudWatchOmniError>
    DeleteDomainAccessGrantForOrganizationOutcome;
typedef Aws::Utils::Outcome<DeleteDomainForOrganizationResult, CloudWatchOmniError> DeleteDomainForOrganizationOutcome;
typedef Aws::Utils::Outcome<DeleteIntegrationResult, CloudWatchOmniError> DeleteIntegrationOutcome;
typedef Aws::Utils::Outcome<DeleteOmniDashboardResult, CloudWatchOmniError> DeleteOmniDashboardOutcome;
typedef Aws::Utils::Outcome<DeleteSpaceResult, CloudWatchOmniError> DeleteSpaceOutcome;
typedef Aws::Utils::Outcome<DeleteViewResult, CloudWatchOmniError> DeleteViewOutcome;
typedef Aws::Utils::Outcome<GetAccessGrantResult, CloudWatchOmniError> GetAccessGrantOutcome;
typedef Aws::Utils::Outcome<GetAccessProfileResult, CloudWatchOmniError> GetAccessProfileOutcome;
typedef Aws::Utils::Outcome<GetAlertResult, CloudWatchOmniError> GetAlertOutcome;
typedef Aws::Utils::Outcome<GetContextGraphResult, CloudWatchOmniError> GetContextGraphOutcome;
typedef Aws::Utils::Outcome<GetDomainResult, CloudWatchOmniError> GetDomainOutcome;
typedef Aws::Utils::Outcome<GetDomainAccessGrantForOrganizationResult, CloudWatchOmniError> GetDomainAccessGrantForOrganizationOutcome;
typedef Aws::Utils::Outcome<GetDomainForOrganizationResult, CloudWatchOmniError> GetDomainForOrganizationOutcome;
typedef Aws::Utils::Outcome<GetIntegrationResult, CloudWatchOmniError> GetIntegrationOutcome;
typedef Aws::Utils::Outcome<GetIntelligenceConfigurationResult, CloudWatchOmniError> GetIntelligenceConfigurationOutcome;
typedef Aws::Utils::Outcome<GetOmniDashboardResult, CloudWatchOmniError> GetOmniDashboardOutcome;
typedef Aws::Utils::Outcome<GetSpaceResult, CloudWatchOmniError> GetSpaceOutcome;
typedef Aws::Utils::Outcome<GetSpaceCredentialsForOrganizationResult, CloudWatchOmniError> GetSpaceCredentialsForOrganizationOutcome;
typedef Aws::Utils::Outcome<GetTelemetryQueryResultsResult, CloudWatchOmniError> GetTelemetryQueryResultsOutcome;
typedef Aws::Utils::Outcome<GetViewResult, CloudWatchOmniError> GetViewOutcome;
typedef Aws::Utils::Outcome<ListAccessGrantsResult, CloudWatchOmniError> ListAccessGrantsOutcome;
typedef Aws::Utils::Outcome<ListAccessProfilesResult, CloudWatchOmniError> ListAccessProfilesOutcome;
typedef Aws::Utils::Outcome<ListAlertsResult, CloudWatchOmniError> ListAlertsOutcome;
typedef Aws::Utils::Outcome<ListDomainAccessGrantsForOrganizationResult, CloudWatchOmniError> ListDomainAccessGrantsForOrganizationOutcome;
typedef Aws::Utils::Outcome<ListDomainsResult, CloudWatchOmniError> ListDomainsOutcome;
typedef Aws::Utils::Outcome<ListIntegrationsResult, CloudWatchOmniError> ListIntegrationsOutcome;
typedef Aws::Utils::Outcome<ListOmniDashboardsResult, CloudWatchOmniError> ListOmniDashboardsOutcome;
typedef Aws::Utils::Outcome<ListSpacesResult, CloudWatchOmniError> ListSpacesOutcome;
typedef Aws::Utils::Outcome<ListSpacesForOrganizationResult, CloudWatchOmniError> ListSpacesForOrganizationOutcome;
typedef Aws::Utils::Outcome<ListTelemetryFieldsResult, CloudWatchOmniError> ListTelemetryFieldsOutcome;
typedef Aws::Utils::Outcome<ListTelemetryQuerySessionsResult, CloudWatchOmniError> ListTelemetryQuerySessionsOutcome;
typedef Aws::Utils::Outcome<ListViewsResult, CloudWatchOmniError> ListViewsOutcome;
typedef Aws::Utils::Outcome<PutIntelligenceConfigurationResult, CloudWatchOmniError> PutIntelligenceConfigurationOutcome;
typedef Aws::Utils::Outcome<SearchPrincipalsResult, CloudWatchOmniError> SearchPrincipalsOutcome;
typedef Aws::Utils::Outcome<StartTelemetryQueryResult, CloudWatchOmniError> StartTelemetryQueryOutcome;
typedef Aws::Utils::Outcome<StartTelemetryQuerySessionResult, CloudWatchOmniError> StartTelemetryQuerySessionOutcome;
typedef Aws::Utils::Outcome<StopTelemetryQueryResult, CloudWatchOmniError> StopTelemetryQueryOutcome;
typedef Aws::Utils::Outcome<StopTelemetryQuerySessionResult, CloudWatchOmniError> StopTelemetryQuerySessionOutcome;
typedef Aws::Utils::Outcome<UpdateAccessProfileResult, CloudWatchOmniError> UpdateAccessProfileOutcome;
typedef Aws::Utils::Outcome<UpdateAlertResult, CloudWatchOmniError> UpdateAlertOutcome;
typedef Aws::Utils::Outcome<UpdateDomainResult, CloudWatchOmniError> UpdateDomainOutcome;
typedef Aws::Utils::Outcome<UpdateDomainForOrganizationResult, CloudWatchOmniError> UpdateDomainForOrganizationOutcome;
typedef Aws::Utils::Outcome<UpdateIntegrationResult, CloudWatchOmniError> UpdateIntegrationOutcome;
typedef Aws::Utils::Outcome<UpdateOmniDashboardResult, CloudWatchOmniError> UpdateOmniDashboardOutcome;
typedef Aws::Utils::Outcome<UpdateSpaceResult, CloudWatchOmniError> UpdateSpaceOutcome;
typedef Aws::Utils::Outcome<UpdateViewResult, CloudWatchOmniError> UpdateViewOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateAccessGrantOutcome> CreateAccessGrantOutcomeCallable;
typedef std::future<CreateAccessProfileOutcome> CreateAccessProfileOutcomeCallable;
typedef std::future<CreateAlertOutcome> CreateAlertOutcomeCallable;
typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
typedef std::future<CreateDomainAccessGrantForOrganizationOutcome> CreateDomainAccessGrantForOrganizationOutcomeCallable;
typedef std::future<CreateDomainForOrganizationOutcome> CreateDomainForOrganizationOutcomeCallable;
typedef std::future<CreateIntegrationOutcome> CreateIntegrationOutcomeCallable;
typedef std::future<CreateOmniDashboardOutcome> CreateOmniDashboardOutcomeCallable;
typedef std::future<CreateOneTimeDeepLinkCodeOutcome> CreateOneTimeDeepLinkCodeOutcomeCallable;
typedef std::future<CreateSpaceOutcome> CreateSpaceOutcomeCallable;
typedef std::future<CreateViewOutcome> CreateViewOutcomeCallable;
typedef std::future<DeleteAccessGrantOutcome> DeleteAccessGrantOutcomeCallable;
typedef std::future<DeleteAccessProfileOutcome> DeleteAccessProfileOutcomeCallable;
typedef std::future<DeleteAlertOutcome> DeleteAlertOutcomeCallable;
typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
typedef std::future<DeleteDomainAccessGrantForOrganizationOutcome> DeleteDomainAccessGrantForOrganizationOutcomeCallable;
typedef std::future<DeleteDomainForOrganizationOutcome> DeleteDomainForOrganizationOutcomeCallable;
typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
typedef std::future<DeleteOmniDashboardOutcome> DeleteOmniDashboardOutcomeCallable;
typedef std::future<DeleteSpaceOutcome> DeleteSpaceOutcomeCallable;
typedef std::future<DeleteViewOutcome> DeleteViewOutcomeCallable;
typedef std::future<GetAccessGrantOutcome> GetAccessGrantOutcomeCallable;
typedef std::future<GetAccessProfileOutcome> GetAccessProfileOutcomeCallable;
typedef std::future<GetAlertOutcome> GetAlertOutcomeCallable;
typedef std::future<GetContextGraphOutcome> GetContextGraphOutcomeCallable;
typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
typedef std::future<GetDomainAccessGrantForOrganizationOutcome> GetDomainAccessGrantForOrganizationOutcomeCallable;
typedef std::future<GetDomainForOrganizationOutcome> GetDomainForOrganizationOutcomeCallable;
typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
typedef std::future<GetIntelligenceConfigurationOutcome> GetIntelligenceConfigurationOutcomeCallable;
typedef std::future<GetOmniDashboardOutcome> GetOmniDashboardOutcomeCallable;
typedef std::future<GetSpaceOutcome> GetSpaceOutcomeCallable;
typedef std::future<GetSpaceCredentialsForOrganizationOutcome> GetSpaceCredentialsForOrganizationOutcomeCallable;
typedef std::future<GetTelemetryQueryResultsOutcome> GetTelemetryQueryResultsOutcomeCallable;
typedef std::future<GetViewOutcome> GetViewOutcomeCallable;
typedef std::future<ListAccessGrantsOutcome> ListAccessGrantsOutcomeCallable;
typedef std::future<ListAccessProfilesOutcome> ListAccessProfilesOutcomeCallable;
typedef std::future<ListAlertsOutcome> ListAlertsOutcomeCallable;
typedef std::future<ListDomainAccessGrantsForOrganizationOutcome> ListDomainAccessGrantsForOrganizationOutcomeCallable;
typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
typedef std::future<ListIntegrationsOutcome> ListIntegrationsOutcomeCallable;
typedef std::future<ListOmniDashboardsOutcome> ListOmniDashboardsOutcomeCallable;
typedef std::future<ListSpacesOutcome> ListSpacesOutcomeCallable;
typedef std::future<ListSpacesForOrganizationOutcome> ListSpacesForOrganizationOutcomeCallable;
typedef std::future<ListTelemetryFieldsOutcome> ListTelemetryFieldsOutcomeCallable;
typedef std::future<ListTelemetryQuerySessionsOutcome> ListTelemetryQuerySessionsOutcomeCallable;
typedef std::future<ListViewsOutcome> ListViewsOutcomeCallable;
typedef std::future<PutIntelligenceConfigurationOutcome> PutIntelligenceConfigurationOutcomeCallable;
typedef std::future<SearchPrincipalsOutcome> SearchPrincipalsOutcomeCallable;
typedef std::future<StartTelemetryQueryOutcome> StartTelemetryQueryOutcomeCallable;
typedef std::future<StartTelemetryQuerySessionOutcome> StartTelemetryQuerySessionOutcomeCallable;
typedef std::future<StopTelemetryQueryOutcome> StopTelemetryQueryOutcomeCallable;
typedef std::future<StopTelemetryQuerySessionOutcome> StopTelemetryQuerySessionOutcomeCallable;
typedef std::future<UpdateAccessProfileOutcome> UpdateAccessProfileOutcomeCallable;
typedef std::future<UpdateAlertOutcome> UpdateAlertOutcomeCallable;
typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
typedef std::future<UpdateDomainForOrganizationOutcome> UpdateDomainForOrganizationOutcomeCallable;
typedef std::future<UpdateIntegrationOutcome> UpdateIntegrationOutcomeCallable;
typedef std::future<UpdateOmniDashboardOutcome> UpdateOmniDashboardOutcomeCallable;
typedef std::future<UpdateSpaceOutcome> UpdateSpaceOutcomeCallable;
typedef std::future<UpdateViewOutcome> UpdateViewOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class CloudWatchOmniClient;

/* Service model async handlers definitions */
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateAccessGrantRequest&, const Model::CreateAccessGrantOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAccessGrantResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateAccessProfileRequest&, const Model::CreateAccessProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAccessProfileResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateAlertRequest&, const Model::CreateAlertOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAlertResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDomainResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateDomainAccessGrantForOrganizationRequest&,
                           const Model::CreateDomainAccessGrantForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDomainAccessGrantForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateDomainForOrganizationRequest&,
                           const Model::CreateDomainForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDomainForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateIntegrationRequest&, const Model::CreateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateIntegrationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateOmniDashboardRequest&, const Model::CreateOmniDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOmniDashboardResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateOneTimeDeepLinkCodeRequest&,
                           const Model::CreateOneTimeDeepLinkCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOneTimeDeepLinkCodeResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateSpaceRequest&, const Model::CreateSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSpaceResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::CreateViewRequest&, const Model::CreateViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateViewResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteAccessGrantRequest&, const Model::DeleteAccessGrantOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAccessGrantResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteAccessProfileRequest&, const Model::DeleteAccessProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAccessProfileResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteAlertRequest&, const Model::DeleteAlertOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAlertResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDomainResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteDomainAccessGrantForOrganizationRequest&,
                           const Model::DeleteDomainAccessGrantForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDomainAccessGrantForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteDomainForOrganizationRequest&,
                           const Model::DeleteDomainForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDomainForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteIntegrationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteOmniDashboardRequest&, const Model::DeleteOmniDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteOmniDashboardResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteSpaceRequest&, const Model::DeleteSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSpaceResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::DeleteViewRequest&, const Model::DeleteViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteViewResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetAccessGrantRequest&, const Model::GetAccessGrantOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccessGrantResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetAccessProfileRequest&, const Model::GetAccessProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccessProfileResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetAlertRequest&, const Model::GetAlertOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAlertResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetContextGraphRequest&, const Model::GetContextGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetContextGraphResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDomainResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetDomainAccessGrantForOrganizationRequest&,
                           const Model::GetDomainAccessGrantForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDomainAccessGrantForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetDomainForOrganizationRequest&,
                           const Model::GetDomainForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDomainForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetIntelligenceConfigurationRequest&,
                           const Model::GetIntelligenceConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntelligenceConfigurationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetOmniDashboardRequest&, const Model::GetOmniDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOmniDashboardResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetSpaceRequest&, const Model::GetSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSpaceResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetSpaceCredentialsForOrganizationRequest&,
                           const Model::GetSpaceCredentialsForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSpaceCredentialsForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetTelemetryQueryResultsRequest&,
                           const Model::GetTelemetryQueryResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTelemetryQueryResultsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::GetViewRequest&, const Model::GetViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetViewResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListAccessGrantsRequest&, const Model::ListAccessGrantsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAccessGrantsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListAccessProfilesRequest&, const Model::ListAccessProfilesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAccessProfilesResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListAlertsRequest&, const Model::ListAlertsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAlertsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListDomainAccessGrantsForOrganizationRequest&,
                           const Model::ListDomainAccessGrantsForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDomainAccessGrantsForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDomainsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListIntegrationsRequest&, const Model::ListIntegrationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListIntegrationsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListOmniDashboardsRequest&, const Model::ListOmniDashboardsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListOmniDashboardsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListSpacesRequest&, const Model::ListSpacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSpacesResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListSpacesForOrganizationRequest&,
                           const Model::ListSpacesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSpacesForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListTelemetryFieldsRequest&, const Model::ListTelemetryFieldsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTelemetryFieldsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListTelemetryQuerySessionsRequest&,
                           const Model::ListTelemetryQuerySessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTelemetryQuerySessionsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::ListViewsRequest&, const Model::ListViewsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListViewsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::PutIntelligenceConfigurationRequest&,
                           const Model::PutIntelligenceConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutIntelligenceConfigurationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::SearchPrincipalsRequest&, const Model::SearchPrincipalsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchPrincipalsResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::StartTelemetryQueryRequest&, const Model::StartTelemetryQueryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartTelemetryQueryResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::StartTelemetryQuerySessionRequest&,
                           const Model::StartTelemetryQuerySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartTelemetryQuerySessionResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::StopTelemetryQueryRequest&, const Model::StopTelemetryQueryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopTelemetryQueryResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::StopTelemetryQuerySessionRequest&,
                           const Model::StopTelemetryQuerySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopTelemetryQuerySessionResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateAccessProfileRequest&, const Model::UpdateAccessProfileOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAccessProfileResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateAlertRequest&, const Model::UpdateAlertOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAlertResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDomainResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateDomainForOrganizationRequest&,
                           const Model::UpdateDomainForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDomainForOrganizationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateIntegrationRequest&, const Model::UpdateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateIntegrationResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateOmniDashboardRequest&, const Model::UpdateOmniDashboardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateOmniDashboardResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateSpaceRequest&, const Model::UpdateSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateSpaceResponseReceivedHandler;
typedef std::function<void(const CloudWatchOmniClient*, const Model::UpdateViewRequest&, const Model::UpdateViewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateViewResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace CloudWatchOmni
}  // namespace Aws
