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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptGrantOutcome(result.GetResultWithOwnership()) : AcceptGrantOutcome(std::move(result.GetError()));
}

CheckInLicenseOutcome LicenseManagerClient::CheckInLicense(const CheckInLicenseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CheckInLicenseOutcome(result.GetResultWithOwnership()) : CheckInLicenseOutcome(std::move(result.GetError()));
}

CheckoutBorrowLicenseOutcome LicenseManagerClient::CheckoutBorrowLicense(const CheckoutBorrowLicenseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CheckoutBorrowLicenseOutcome(result.GetResultWithOwnership())
                            : CheckoutBorrowLicenseOutcome(std::move(result.GetError()));
}

CheckoutLicenseOutcome LicenseManagerClient::CheckoutLicense(const CheckoutLicenseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CheckoutLicenseOutcome(result.GetResultWithOwnership())
                            : CheckoutLicenseOutcome(std::move(result.GetError()));
}

CreateGrantOutcome LicenseManagerClient::CreateGrant(const CreateGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGrantOutcome(result.GetResultWithOwnership()) : CreateGrantOutcome(std::move(result.GetError()));
}

CreateGrantVersionOutcome LicenseManagerClient::CreateGrantVersion(const CreateGrantVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGrantVersionOutcome(result.GetResultWithOwnership())
                            : CreateGrantVersionOutcome(std::move(result.GetError()));
}

CreateLicenseOutcome LicenseManagerClient::CreateLicense(const CreateLicenseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseOutcome(result.GetResultWithOwnership()) : CreateLicenseOutcome(std::move(result.GetError()));
}

CreateLicenseAssetGroupOutcome LicenseManagerClient::CreateLicenseAssetGroup(const CreateLicenseAssetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseAssetGroupOutcome(result.GetResultWithOwnership())
                            : CreateLicenseAssetGroupOutcome(std::move(result.GetError()));
}

CreateLicenseAssetRulesetOutcome LicenseManagerClient::CreateLicenseAssetRuleset(const CreateLicenseAssetRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseAssetRulesetOutcome(result.GetResultWithOwnership())
                            : CreateLicenseAssetRulesetOutcome(std::move(result.GetError()));
}

CreateLicenseConfigurationOutcome LicenseManagerClient::CreateLicenseConfiguration(const CreateLicenseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateLicenseConfigurationOutcome(std::move(result.GetError()));
}

CreateLicenseConversionTaskForResourceOutcome LicenseManagerClient::CreateLicenseConversionTaskForResource(
    const CreateLicenseConversionTaskForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseConversionTaskForResourceOutcome(result.GetResultWithOwnership())
                            : CreateLicenseConversionTaskForResourceOutcome(std::move(result.GetError()));
}

CreateLicenseManagerReportGeneratorOutcome LicenseManagerClient::CreateLicenseManagerReportGenerator(
    const CreateLicenseManagerReportGeneratorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseManagerReportGeneratorOutcome(result.GetResultWithOwnership())
                            : CreateLicenseManagerReportGeneratorOutcome(std::move(result.GetError()));
}

CreateLicenseVersionOutcome LicenseManagerClient::CreateLicenseVersion(const CreateLicenseVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseVersionOutcome(result.GetResultWithOwnership())
                            : CreateLicenseVersionOutcome(std::move(result.GetError()));
}

CreateTokenOutcome LicenseManagerClient::CreateToken(const CreateTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTokenOutcome(result.GetResultWithOwnership()) : CreateTokenOutcome(std::move(result.GetError()));
}

DeleteGrantOutcome LicenseManagerClient::DeleteGrant(const DeleteGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGrantOutcome(result.GetResultWithOwnership()) : DeleteGrantOutcome(std::move(result.GetError()));
}

DeleteLicenseOutcome LicenseManagerClient::DeleteLicense(const DeleteLicenseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLicenseOutcome(result.GetResultWithOwnership()) : DeleteLicenseOutcome(std::move(result.GetError()));
}

DeleteLicenseAssetGroupOutcome LicenseManagerClient::DeleteLicenseAssetGroup(const DeleteLicenseAssetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLicenseAssetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteLicenseAssetGroupOutcome(std::move(result.GetError()));
}

DeleteLicenseAssetRulesetOutcome LicenseManagerClient::DeleteLicenseAssetRuleset(const DeleteLicenseAssetRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLicenseAssetRulesetOutcome(result.GetResultWithOwnership())
                            : DeleteLicenseAssetRulesetOutcome(std::move(result.GetError()));
}

DeleteLicenseConfigurationOutcome LicenseManagerClient::DeleteLicenseConfiguration(const DeleteLicenseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLicenseConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteLicenseConfigurationOutcome(std::move(result.GetError()));
}

DeleteLicenseManagerReportGeneratorOutcome LicenseManagerClient::DeleteLicenseManagerReportGenerator(
    const DeleteLicenseManagerReportGeneratorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLicenseManagerReportGeneratorOutcome(result.GetResultWithOwnership())
                            : DeleteLicenseManagerReportGeneratorOutcome(std::move(result.GetError()));
}

DeleteTokenOutcome LicenseManagerClient::DeleteToken(const DeleteTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTokenOutcome(result.GetResultWithOwnership()) : DeleteTokenOutcome(std::move(result.GetError()));
}

ExtendLicenseConsumptionOutcome LicenseManagerClient::ExtendLicenseConsumption(const ExtendLicenseConsumptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExtendLicenseConsumptionOutcome(result.GetResultWithOwnership())
                            : ExtendLicenseConsumptionOutcome(std::move(result.GetError()));
}

GetAccessTokenOutcome LicenseManagerClient::GetAccessToken(const GetAccessTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessTokenOutcome(result.GetResultWithOwnership()) : GetAccessTokenOutcome(std::move(result.GetError()));
}

GetGrantOutcome LicenseManagerClient::GetGrant(const GetGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGrantOutcome(result.GetResultWithOwnership()) : GetGrantOutcome(std::move(result.GetError()));
}

GetLicenseOutcome LicenseManagerClient::GetLicense(const GetLicenseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLicenseOutcome(result.GetResultWithOwnership()) : GetLicenseOutcome(std::move(result.GetError()));
}

GetLicenseAssetGroupOutcome LicenseManagerClient::GetLicenseAssetGroup(const GetLicenseAssetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLicenseAssetGroupOutcome(result.GetResultWithOwnership())
                            : GetLicenseAssetGroupOutcome(std::move(result.GetError()));
}

GetLicenseAssetRulesetOutcome LicenseManagerClient::GetLicenseAssetRuleset(const GetLicenseAssetRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLicenseAssetRulesetOutcome(result.GetResultWithOwnership())
                            : GetLicenseAssetRulesetOutcome(std::move(result.GetError()));
}

GetLicenseConfigurationOutcome LicenseManagerClient::GetLicenseConfiguration(const GetLicenseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLicenseConfigurationOutcome(result.GetResultWithOwnership())
                            : GetLicenseConfigurationOutcome(std::move(result.GetError()));
}

GetLicenseConversionTaskOutcome LicenseManagerClient::GetLicenseConversionTask(const GetLicenseConversionTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLicenseConversionTaskOutcome(result.GetResultWithOwnership())
                            : GetLicenseConversionTaskOutcome(std::move(result.GetError()));
}

GetLicenseManagerReportGeneratorOutcome LicenseManagerClient::GetLicenseManagerReportGenerator(
    const GetLicenseManagerReportGeneratorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLicenseManagerReportGeneratorOutcome(result.GetResultWithOwnership())
                            : GetLicenseManagerReportGeneratorOutcome(std::move(result.GetError()));
}

GetLicenseUsageOutcome LicenseManagerClient::GetLicenseUsage(const GetLicenseUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLicenseUsageOutcome(result.GetResultWithOwnership())
                            : GetLicenseUsageOutcome(std::move(result.GetError()));
}

GetServiceSettingsOutcome LicenseManagerClient::GetServiceSettings(const GetServiceSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceSettingsOutcome(result.GetResultWithOwnership())
                            : GetServiceSettingsOutcome(std::move(result.GetError()));
}

ListAssetsForLicenseAssetGroupOutcome LicenseManagerClient::ListAssetsForLicenseAssetGroup(
    const ListAssetsForLicenseAssetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssetsForLicenseAssetGroupOutcome(result.GetResultWithOwnership())
                            : ListAssetsForLicenseAssetGroupOutcome(std::move(result.GetError()));
}

ListAssociationsForLicenseConfigurationOutcome LicenseManagerClient::ListAssociationsForLicenseConfiguration(
    const ListAssociationsForLicenseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociationsForLicenseConfigurationOutcome(result.GetResultWithOwnership())
                            : ListAssociationsForLicenseConfigurationOutcome(std::move(result.GetError()));
}

ListDistributedGrantsOutcome LicenseManagerClient::ListDistributedGrants(const ListDistributedGrantsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDistributedGrantsOutcome(result.GetResultWithOwnership())
                            : ListDistributedGrantsOutcome(std::move(result.GetError()));
}

ListFailuresForLicenseConfigurationOperationsOutcome LicenseManagerClient::ListFailuresForLicenseConfigurationOperations(
    const ListFailuresForLicenseConfigurationOperationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFailuresForLicenseConfigurationOperationsOutcome(result.GetResultWithOwnership())
                            : ListFailuresForLicenseConfigurationOperationsOutcome(std::move(result.GetError()));
}

ListLicenseAssetGroupsOutcome LicenseManagerClient::ListLicenseAssetGroups(const ListLicenseAssetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseAssetGroupsOutcome(result.GetResultWithOwnership())
                            : ListLicenseAssetGroupsOutcome(std::move(result.GetError()));
}

ListLicenseAssetRulesetsOutcome LicenseManagerClient::ListLicenseAssetRulesets(const ListLicenseAssetRulesetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseAssetRulesetsOutcome(result.GetResultWithOwnership())
                            : ListLicenseAssetRulesetsOutcome(std::move(result.GetError()));
}

ListLicenseConfigurationsOutcome LicenseManagerClient::ListLicenseConfigurations(const ListLicenseConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListLicenseConfigurationsOutcome(std::move(result.GetError()));
}

ListLicenseConfigurationsForOrganizationOutcome LicenseManagerClient::ListLicenseConfigurationsForOrganization(
    const ListLicenseConfigurationsForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseConfigurationsForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListLicenseConfigurationsForOrganizationOutcome(std::move(result.GetError()));
}

ListLicenseConversionTasksOutcome LicenseManagerClient::ListLicenseConversionTasks(const ListLicenseConversionTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseConversionTasksOutcome(result.GetResultWithOwnership())
                            : ListLicenseConversionTasksOutcome(std::move(result.GetError()));
}

ListLicenseManagerReportGeneratorsOutcome LicenseManagerClient::ListLicenseManagerReportGenerators(
    const ListLicenseManagerReportGeneratorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseManagerReportGeneratorsOutcome(result.GetResultWithOwnership())
                            : ListLicenseManagerReportGeneratorsOutcome(std::move(result.GetError()));
}

ListLicenseSpecificationsForResourceOutcome LicenseManagerClient::ListLicenseSpecificationsForResource(
    const ListLicenseSpecificationsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseSpecificationsForResourceOutcome(result.GetResultWithOwnership())
                            : ListLicenseSpecificationsForResourceOutcome(std::move(result.GetError()));
}

ListLicenseVersionsOutcome LicenseManagerClient::ListLicenseVersions(const ListLicenseVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicenseVersionsOutcome(result.GetResultWithOwnership())
                            : ListLicenseVersionsOutcome(std::move(result.GetError()));
}

ListLicensesOutcome LicenseManagerClient::ListLicenses(const ListLicensesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLicensesOutcome(result.GetResultWithOwnership()) : ListLicensesOutcome(std::move(result.GetError()));
}

ListReceivedGrantsOutcome LicenseManagerClient::ListReceivedGrants(const ListReceivedGrantsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReceivedGrantsOutcome(result.GetResultWithOwnership())
                            : ListReceivedGrantsOutcome(std::move(result.GetError()));
}

ListReceivedGrantsForOrganizationOutcome LicenseManagerClient::ListReceivedGrantsForOrganization(
    const ListReceivedGrantsForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReceivedGrantsForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListReceivedGrantsForOrganizationOutcome(std::move(result.GetError()));
}

ListReceivedLicensesOutcome LicenseManagerClient::ListReceivedLicenses(const ListReceivedLicensesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReceivedLicensesOutcome(result.GetResultWithOwnership())
                            : ListReceivedLicensesOutcome(std::move(result.GetError()));
}

ListReceivedLicensesForOrganizationOutcome LicenseManagerClient::ListReceivedLicensesForOrganization(
    const ListReceivedLicensesForOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReceivedLicensesForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListReceivedLicensesForOrganizationOutcome(std::move(result.GetError()));
}

ListResourceInventoryOutcome LicenseManagerClient::ListResourceInventory(const ListResourceInventoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceInventoryOutcome(result.GetResultWithOwnership())
                            : ListResourceInventoryOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome LicenseManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTokensOutcome LicenseManagerClient::ListTokens(const ListTokensRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTokensOutcome(result.GetResultWithOwnership()) : ListTokensOutcome(std::move(result.GetError()));
}

ListUsageForLicenseConfigurationOutcome LicenseManagerClient::ListUsageForLicenseConfiguration(
    const ListUsageForLicenseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsageForLicenseConfigurationOutcome(result.GetResultWithOwnership())
                            : ListUsageForLicenseConfigurationOutcome(std::move(result.GetError()));
}

RejectGrantOutcome LicenseManagerClient::RejectGrant(const RejectGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectGrantOutcome(result.GetResultWithOwnership()) : RejectGrantOutcome(std::move(result.GetError()));
}

TagResourceOutcome LicenseManagerClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome LicenseManagerClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateLicenseAssetGroupOutcome LicenseManagerClient::UpdateLicenseAssetGroup(const UpdateLicenseAssetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLicenseAssetGroupOutcome(result.GetResultWithOwnership())
                            : UpdateLicenseAssetGroupOutcome(std::move(result.GetError()));
}

UpdateLicenseAssetRulesetOutcome LicenseManagerClient::UpdateLicenseAssetRuleset(const UpdateLicenseAssetRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLicenseAssetRulesetOutcome(result.GetResultWithOwnership())
                            : UpdateLicenseAssetRulesetOutcome(std::move(result.GetError()));
}

UpdateLicenseConfigurationOutcome LicenseManagerClient::UpdateLicenseConfiguration(const UpdateLicenseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLicenseConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateLicenseConfigurationOutcome(std::move(result.GetError()));
}

UpdateLicenseManagerReportGeneratorOutcome LicenseManagerClient::UpdateLicenseManagerReportGenerator(
    const UpdateLicenseManagerReportGeneratorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLicenseManagerReportGeneratorOutcome(result.GetResultWithOwnership())
                            : UpdateLicenseManagerReportGeneratorOutcome(std::move(result.GetError()));
}

UpdateLicenseSpecificationsForResourceOutcome LicenseManagerClient::UpdateLicenseSpecificationsForResource(
    const UpdateLicenseSpecificationsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLicenseSpecificationsForResourceOutcome(result.GetResultWithOwnership())
                            : UpdateLicenseSpecificationsForResourceOutcome(std::move(result.GetError()));
}

UpdateServiceSettingsOutcome LicenseManagerClient::UpdateServiceSettings(const UpdateServiceSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServiceSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateServiceSettingsOutcome(std::move(result.GetError()));
}
