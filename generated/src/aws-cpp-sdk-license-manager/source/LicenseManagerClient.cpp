/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/license-manager/LicenseManagerClient.h>
#include <aws/license-manager/LicenseManagerEndpointProvider.h>
#include <aws/license-manager/LicenseManagerErrorMarshaller.h>
#include <aws/license-manager/model/AcceptGrantRequest.h>
#include <aws/license-manager/model/CheckInLicenseRequest.h>
#include <aws/license-manager/model/CheckoutBorrowLicenseRequest.h>
#include <aws/license-manager/model/CheckoutLicenseRequest.h>
#include <aws/license-manager/model/CreateGrantRequest.h>
#include <aws/license-manager/model/CreateGrantVersionRequest.h>
#include <aws/license-manager/model/CreateLicenseAssetGroupRequest.h>
#include <aws/license-manager/model/CreateLicenseAssetRulesetRequest.h>
#include <aws/license-manager/model/CreateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/CreateLicenseConversionTaskForResourceRequest.h>
#include <aws/license-manager/model/CreateLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/CreateLicenseRequest.h>
#include <aws/license-manager/model/CreateLicenseVersionRequest.h>
#include <aws/license-manager/model/CreateTokenRequest.h>
#include <aws/license-manager/model/DeleteGrantRequest.h>
#include <aws/license-manager/model/DeleteLicenseAssetGroupRequest.h>
#include <aws/license-manager/model/DeleteLicenseAssetRulesetRequest.h>
#include <aws/license-manager/model/DeleteLicenseConfigurationRequest.h>
#include <aws/license-manager/model/DeleteLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/DeleteLicenseRequest.h>
#include <aws/license-manager/model/DeleteTokenRequest.h>
#include <aws/license-manager/model/ExtendLicenseConsumptionRequest.h>
#include <aws/license-manager/model/GetAccessTokenRequest.h>
#include <aws/license-manager/model/GetGrantRequest.h>
#include <aws/license-manager/model/GetLicenseAssetGroupRequest.h>
#include <aws/license-manager/model/GetLicenseAssetRulesetRequest.h>
#include <aws/license-manager/model/GetLicenseConfigurationRequest.h>
#include <aws/license-manager/model/GetLicenseConversionTaskRequest.h>
#include <aws/license-manager/model/GetLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/GetLicenseRequest.h>
#include <aws/license-manager/model/GetLicenseUsageRequest.h>
#include <aws/license-manager/model/GetServiceSettingsRequest.h>
#include <aws/license-manager/model/ListAssetsForLicenseAssetGroupRequest.h>
#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/ListDistributedGrantsRequest.h>
#include <aws/license-manager/model/ListFailuresForLicenseConfigurationOperationsRequest.h>
#include <aws/license-manager/model/ListLicenseAssetGroupsRequest.h>
#include <aws/license-manager/model/ListLicenseAssetRulesetsRequest.h>
#include <aws/license-manager/model/ListLicenseConfigurationsForOrganizationRequest.h>
#include <aws/license-manager/model/ListLicenseConfigurationsRequest.h>
#include <aws/license-manager/model/ListLicenseConversionTasksRequest.h>
#include <aws/license-manager/model/ListLicenseManagerReportGeneratorsRequest.h>
#include <aws/license-manager/model/ListLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/ListLicenseVersionsRequest.h>
#include <aws/license-manager/model/ListLicensesRequest.h>
#include <aws/license-manager/model/ListReceivedGrantsForOrganizationRequest.h>
#include <aws/license-manager/model/ListReceivedGrantsRequest.h>
#include <aws/license-manager/model/ListReceivedLicensesForOrganizationRequest.h>
#include <aws/license-manager/model/ListReceivedLicensesRequest.h>
#include <aws/license-manager/model/ListResourceInventoryRequest.h>
#include <aws/license-manager/model/ListTagsForResourceRequest.h>
#include <aws/license-manager/model/ListTokensRequest.h>
#include <aws/license-manager/model/ListUsageForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/RejectGrantRequest.h>
#include <aws/license-manager/model/TagResourceRequest.h>
#include <aws/license-manager/model/UntagResourceRequest.h>
#include <aws/license-manager/model/UpdateLicenseAssetGroupRequest.h>
#include <aws/license-manager/model/UpdateLicenseAssetRulesetRequest.h>
#include <aws/license-manager/model/UpdateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/UpdateLicenseManagerReportGeneratorRequest.h>
#include <aws/license-manager/model/UpdateLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/UpdateServiceSettingsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManager;
using namespace Aws::LicenseManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LicenseManager {
const char SERVICE_NAME[] = "license-manager";
const char ALLOCATION_TAG[] = "LicenseManagerClient";
}  // namespace LicenseManager
}  // namespace Aws
const char* LicenseManagerClient::GetServiceName() { return SERVICE_NAME; }
const char* LicenseManagerClient::GetAllocationTag() { return ALLOCATION_TAG; }

LicenseManagerClient::LicenseManagerClient(const LicenseManager::LicenseManagerClientConfiguration& clientConfiguration,
                                           std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const AWSCredentials& credentials,
                                           std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider,
                                           const LicenseManager::LicenseManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<LicenseManagerEndpointProviderBase> endpointProvider,
                                           const LicenseManager::LicenseManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LicenseManagerClient::LicenseManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LicenseManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LicenseManagerClient::~LicenseManagerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LicenseManagerEndpointProviderBase>& LicenseManagerClient::accessEndpointProvider() { return m_endpointProvider; }

void LicenseManagerClient::init(const LicenseManager::LicenseManagerClientConfiguration& config) {
  AWSClient::SetServiceClientName("License Manager");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "license-manager");
}

void LicenseManagerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LicenseManagerClient::InvokeOperationOutcome LicenseManagerClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                          Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AcceptGrantOutcome LicenseManagerClient::AcceptGrant(const AcceptGrantRequest& request) const {
  return AcceptGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckInLicenseOutcome LicenseManagerClient::CheckInLicense(const CheckInLicenseRequest& request) const {
  return CheckInLicenseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckoutBorrowLicenseOutcome LicenseManagerClient::CheckoutBorrowLicense(const CheckoutBorrowLicenseRequest& request) const {
  return CheckoutBorrowLicenseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CheckoutLicenseOutcome LicenseManagerClient::CheckoutLicense(const CheckoutLicenseRequest& request) const {
  return CheckoutLicenseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGrantOutcome LicenseManagerClient::CreateGrant(const CreateGrantRequest& request) const {
  return CreateGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGrantVersionOutcome LicenseManagerClient::CreateGrantVersion(const CreateGrantVersionRequest& request) const {
  return CreateGrantVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseOutcome LicenseManagerClient::CreateLicense(const CreateLicenseRequest& request) const {
  return CreateLicenseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseAssetGroupOutcome LicenseManagerClient::CreateLicenseAssetGroup(const CreateLicenseAssetGroupRequest& request) const {
  return CreateLicenseAssetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseAssetRulesetOutcome LicenseManagerClient::CreateLicenseAssetRuleset(const CreateLicenseAssetRulesetRequest& request) const {
  return CreateLicenseAssetRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseConfigurationOutcome LicenseManagerClient::CreateLicenseConfiguration(const CreateLicenseConfigurationRequest& request) const {
  return CreateLicenseConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseConversionTaskForResourceOutcome LicenseManagerClient::CreateLicenseConversionTaskForResource(
    const CreateLicenseConversionTaskForResourceRequest& request) const {
  return CreateLicenseConversionTaskForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseManagerReportGeneratorOutcome LicenseManagerClient::CreateLicenseManagerReportGenerator(
    const CreateLicenseManagerReportGeneratorRequest& request) const {
  return CreateLicenseManagerReportGeneratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseVersionOutcome LicenseManagerClient::CreateLicenseVersion(const CreateLicenseVersionRequest& request) const {
  return CreateLicenseVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTokenOutcome LicenseManagerClient::CreateToken(const CreateTokenRequest& request) const {
  return CreateTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGrantOutcome LicenseManagerClient::DeleteGrant(const DeleteGrantRequest& request) const {
  return DeleteGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLicenseOutcome LicenseManagerClient::DeleteLicense(const DeleteLicenseRequest& request) const {
  return DeleteLicenseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLicenseAssetGroupOutcome LicenseManagerClient::DeleteLicenseAssetGroup(const DeleteLicenseAssetGroupRequest& request) const {
  return DeleteLicenseAssetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLicenseAssetRulesetOutcome LicenseManagerClient::DeleteLicenseAssetRuleset(const DeleteLicenseAssetRulesetRequest& request) const {
  return DeleteLicenseAssetRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLicenseConfigurationOutcome LicenseManagerClient::DeleteLicenseConfiguration(const DeleteLicenseConfigurationRequest& request) const {
  return DeleteLicenseConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLicenseManagerReportGeneratorOutcome LicenseManagerClient::DeleteLicenseManagerReportGenerator(
    const DeleteLicenseManagerReportGeneratorRequest& request) const {
  return DeleteLicenseManagerReportGeneratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTokenOutcome LicenseManagerClient::DeleteToken(const DeleteTokenRequest& request) const {
  return DeleteTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExtendLicenseConsumptionOutcome LicenseManagerClient::ExtendLicenseConsumption(const ExtendLicenseConsumptionRequest& request) const {
  return ExtendLicenseConsumptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccessTokenOutcome LicenseManagerClient::GetAccessToken(const GetAccessTokenRequest& request) const {
  return GetAccessTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGrantOutcome LicenseManagerClient::GetGrant(const GetGrantRequest& request) const {
  return GetGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseOutcome LicenseManagerClient::GetLicense(const GetLicenseRequest& request) const {
  return GetLicenseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseAssetGroupOutcome LicenseManagerClient::GetLicenseAssetGroup(const GetLicenseAssetGroupRequest& request) const {
  return GetLicenseAssetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseAssetRulesetOutcome LicenseManagerClient::GetLicenseAssetRuleset(const GetLicenseAssetRulesetRequest& request) const {
  return GetLicenseAssetRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseConfigurationOutcome LicenseManagerClient::GetLicenseConfiguration(const GetLicenseConfigurationRequest& request) const {
  return GetLicenseConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseConversionTaskOutcome LicenseManagerClient::GetLicenseConversionTask(const GetLicenseConversionTaskRequest& request) const {
  return GetLicenseConversionTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseManagerReportGeneratorOutcome LicenseManagerClient::GetLicenseManagerReportGenerator(
    const GetLicenseManagerReportGeneratorRequest& request) const {
  return GetLicenseManagerReportGeneratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseUsageOutcome LicenseManagerClient::GetLicenseUsage(const GetLicenseUsageRequest& request) const {
  return GetLicenseUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceSettingsOutcome LicenseManagerClient::GetServiceSettings(const GetServiceSettingsRequest& request) const {
  return GetServiceSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssetsForLicenseAssetGroupOutcome LicenseManagerClient::ListAssetsForLicenseAssetGroup(
    const ListAssetsForLicenseAssetGroupRequest& request) const {
  return ListAssetsForLicenseAssetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociationsForLicenseConfigurationOutcome LicenseManagerClient::ListAssociationsForLicenseConfiguration(
    const ListAssociationsForLicenseConfigurationRequest& request) const {
  return ListAssociationsForLicenseConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDistributedGrantsOutcome LicenseManagerClient::ListDistributedGrants(const ListDistributedGrantsRequest& request) const {
  return ListDistributedGrantsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFailuresForLicenseConfigurationOperationsOutcome LicenseManagerClient::ListFailuresForLicenseConfigurationOperations(
    const ListFailuresForLicenseConfigurationOperationsRequest& request) const {
  return ListFailuresForLicenseConfigurationOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseAssetGroupsOutcome LicenseManagerClient::ListLicenseAssetGroups(const ListLicenseAssetGroupsRequest& request) const {
  return ListLicenseAssetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseAssetRulesetsOutcome LicenseManagerClient::ListLicenseAssetRulesets(const ListLicenseAssetRulesetsRequest& request) const {
  return ListLicenseAssetRulesetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseConfigurationsOutcome LicenseManagerClient::ListLicenseConfigurations(const ListLicenseConfigurationsRequest& request) const {
  return ListLicenseConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseConfigurationsForOrganizationOutcome LicenseManagerClient::ListLicenseConfigurationsForOrganization(
    const ListLicenseConfigurationsForOrganizationRequest& request) const {
  return ListLicenseConfigurationsForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseConversionTasksOutcome LicenseManagerClient::ListLicenseConversionTasks(const ListLicenseConversionTasksRequest& request) const {
  return ListLicenseConversionTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseManagerReportGeneratorsOutcome LicenseManagerClient::ListLicenseManagerReportGenerators(
    const ListLicenseManagerReportGeneratorsRequest& request) const {
  return ListLicenseManagerReportGeneratorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseSpecificationsForResourceOutcome LicenseManagerClient::ListLicenseSpecificationsForResource(
    const ListLicenseSpecificationsForResourceRequest& request) const {
  return ListLicenseSpecificationsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicenseVersionsOutcome LicenseManagerClient::ListLicenseVersions(const ListLicenseVersionsRequest& request) const {
  return ListLicenseVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLicensesOutcome LicenseManagerClient::ListLicenses(const ListLicensesRequest& request) const {
  return ListLicensesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReceivedGrantsOutcome LicenseManagerClient::ListReceivedGrants(const ListReceivedGrantsRequest& request) const {
  return ListReceivedGrantsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReceivedGrantsForOrganizationOutcome LicenseManagerClient::ListReceivedGrantsForOrganization(
    const ListReceivedGrantsForOrganizationRequest& request) const {
  return ListReceivedGrantsForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReceivedLicensesOutcome LicenseManagerClient::ListReceivedLicenses(const ListReceivedLicensesRequest& request) const {
  return ListReceivedLicensesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReceivedLicensesForOrganizationOutcome LicenseManagerClient::ListReceivedLicensesForOrganization(
    const ListReceivedLicensesForOrganizationRequest& request) const {
  return ListReceivedLicensesForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceInventoryOutcome LicenseManagerClient::ListResourceInventory(const ListResourceInventoryRequest& request) const {
  return ListResourceInventoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome LicenseManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTokensOutcome LicenseManagerClient::ListTokens(const ListTokensRequest& request) const {
  return ListTokensOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsageForLicenseConfigurationOutcome LicenseManagerClient::ListUsageForLicenseConfiguration(
    const ListUsageForLicenseConfigurationRequest& request) const {
  return ListUsageForLicenseConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectGrantOutcome LicenseManagerClient::RejectGrant(const RejectGrantRequest& request) const {
  return RejectGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LicenseManagerClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome LicenseManagerClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLicenseAssetGroupOutcome LicenseManagerClient::UpdateLicenseAssetGroup(const UpdateLicenseAssetGroupRequest& request) const {
  return UpdateLicenseAssetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLicenseAssetRulesetOutcome LicenseManagerClient::UpdateLicenseAssetRuleset(const UpdateLicenseAssetRulesetRequest& request) const {
  return UpdateLicenseAssetRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLicenseConfigurationOutcome LicenseManagerClient::UpdateLicenseConfiguration(const UpdateLicenseConfigurationRequest& request) const {
  return UpdateLicenseConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLicenseManagerReportGeneratorOutcome LicenseManagerClient::UpdateLicenseManagerReportGenerator(
    const UpdateLicenseManagerReportGeneratorRequest& request) const {
  return UpdateLicenseManagerReportGeneratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLicenseSpecificationsForResourceOutcome LicenseManagerClient::UpdateLicenseSpecificationsForResource(
    const UpdateLicenseSpecificationsForResourceRequest& request) const {
  return UpdateLicenseSpecificationsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceSettingsOutcome LicenseManagerClient::UpdateServiceSettings(const UpdateServiceSettingsRequest& request) const {
  return UpdateServiceSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
