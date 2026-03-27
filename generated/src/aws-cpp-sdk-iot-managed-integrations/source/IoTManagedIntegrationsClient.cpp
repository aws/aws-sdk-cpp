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
#include <aws/iot-managed-integrations/IoTManagedIntegrationsClient.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsEndpointProvider.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsErrorMarshaller.h>
#include <aws/iot-managed-integrations/model/CreateAccountAssociationRequest.h>
#include <aws/iot-managed-integrations/model/CreateCloudConnectorRequest.h>
#include <aws/iot-managed-integrations/model/CreateConnectorDestinationRequest.h>
#include <aws/iot-managed-integrations/model/CreateCredentialLockerRequest.h>
#include <aws/iot-managed-integrations/model/CreateDestinationRequest.h>
#include <aws/iot-managed-integrations/model/CreateEventLogConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/CreateManagedThingRequest.h>
#include <aws/iot-managed-integrations/model/CreateNotificationConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/CreateOtaTaskConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/CreateOtaTaskRequest.h>
#include <aws/iot-managed-integrations/model/CreateProvisioningProfileRequest.h>
#include <aws/iot-managed-integrations/model/DeleteAccountAssociationRequest.h>
#include <aws/iot-managed-integrations/model/DeleteCloudConnectorRequest.h>
#include <aws/iot-managed-integrations/model/DeleteConnectorDestinationRequest.h>
#include <aws/iot-managed-integrations/model/DeleteCredentialLockerRequest.h>
#include <aws/iot-managed-integrations/model/DeleteDestinationRequest.h>
#include <aws/iot-managed-integrations/model/DeleteEventLogConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/DeleteManagedThingRequest.h>
#include <aws/iot-managed-integrations/model/DeleteNotificationConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/DeleteOtaTaskConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/DeleteOtaTaskRequest.h>
#include <aws/iot-managed-integrations/model/DeleteProvisioningProfileRequest.h>
#include <aws/iot-managed-integrations/model/DeregisterAccountAssociationRequest.h>
#include <aws/iot-managed-integrations/model/GetAccountAssociationRequest.h>
#include <aws/iot-managed-integrations/model/GetCloudConnectorRequest.h>
#include <aws/iot-managed-integrations/model/GetConnectorDestinationRequest.h>
#include <aws/iot-managed-integrations/model/GetCredentialLockerRequest.h>
#include <aws/iot-managed-integrations/model/GetCustomEndpointRequest.h>
#include <aws/iot-managed-integrations/model/GetDefaultEncryptionConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/GetDestinationRequest.h>
#include <aws/iot-managed-integrations/model/GetDeviceDiscoveryRequest.h>
#include <aws/iot-managed-integrations/model/GetEventLogConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/GetHubConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/GetManagedThingCapabilitiesRequest.h>
#include <aws/iot-managed-integrations/model/GetManagedThingCertificateRequest.h>
#include <aws/iot-managed-integrations/model/GetManagedThingConnectivityDataRequest.h>
#include <aws/iot-managed-integrations/model/GetManagedThingMetaDataRequest.h>
#include <aws/iot-managed-integrations/model/GetManagedThingRequest.h>
#include <aws/iot-managed-integrations/model/GetManagedThingStateRequest.h>
#include <aws/iot-managed-integrations/model/GetNotificationConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/GetOtaTaskConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/GetOtaTaskRequest.h>
#include <aws/iot-managed-integrations/model/GetProvisioningProfileRequest.h>
#include <aws/iot-managed-integrations/model/GetRuntimeLogConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/GetSchemaVersionRequest.h>
#include <aws/iot-managed-integrations/model/ListAccountAssociationsRequest.h>
#include <aws/iot-managed-integrations/model/ListCloudConnectorsRequest.h>
#include <aws/iot-managed-integrations/model/ListConnectorDestinationsRequest.h>
#include <aws/iot-managed-integrations/model/ListCredentialLockersRequest.h>
#include <aws/iot-managed-integrations/model/ListDestinationsRequest.h>
#include <aws/iot-managed-integrations/model/ListDeviceDiscoveriesRequest.h>
#include <aws/iot-managed-integrations/model/ListDiscoveredDevicesRequest.h>
#include <aws/iot-managed-integrations/model/ListEventLogConfigurationsRequest.h>
#include <aws/iot-managed-integrations/model/ListManagedThingAccountAssociationsRequest.h>
#include <aws/iot-managed-integrations/model/ListManagedThingSchemasRequest.h>
#include <aws/iot-managed-integrations/model/ListManagedThingsRequest.h>
#include <aws/iot-managed-integrations/model/ListNotificationConfigurationsRequest.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskConfigurationsRequest.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskExecutionsRequest.h>
#include <aws/iot-managed-integrations/model/ListOtaTasksRequest.h>
#include <aws/iot-managed-integrations/model/ListProvisioningProfilesRequest.h>
#include <aws/iot-managed-integrations/model/ListSchemaVersionsRequest.h>
#include <aws/iot-managed-integrations/model/ListTagsForResourceRequest.h>
#include <aws/iot-managed-integrations/model/PutDefaultEncryptionConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/PutHubConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/PutRuntimeLogConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/RegisterAccountAssociationRequest.h>
#include <aws/iot-managed-integrations/model/RegisterCustomEndpointRequest.h>
#include <aws/iot-managed-integrations/model/ResetRuntimeLogConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/SendConnectorEventRequest.h>
#include <aws/iot-managed-integrations/model/SendManagedThingCommandRequest.h>
#include <aws/iot-managed-integrations/model/StartAccountAssociationRefreshRequest.h>
#include <aws/iot-managed-integrations/model/StartDeviceDiscoveryRequest.h>
#include <aws/iot-managed-integrations/model/TagResourceRequest.h>
#include <aws/iot-managed-integrations/model/UntagResourceRequest.h>
#include <aws/iot-managed-integrations/model/UpdateAccountAssociationRequest.h>
#include <aws/iot-managed-integrations/model/UpdateCloudConnectorRequest.h>
#include <aws/iot-managed-integrations/model/UpdateConnectorDestinationRequest.h>
#include <aws/iot-managed-integrations/model/UpdateDestinationRequest.h>
#include <aws/iot-managed-integrations/model/UpdateEventLogConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/UpdateManagedThingRequest.h>
#include <aws/iot-managed-integrations/model/UpdateNotificationConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/UpdateOtaTaskRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTManagedIntegrations;
using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTManagedIntegrations {
const char SERVICE_NAME[] = "iotmanagedintegrations";
const char ALLOCATION_TAG[] = "IoTManagedIntegrationsClient";
}  // namespace IoTManagedIntegrations
}  // namespace Aws
const char* IoTManagedIntegrationsClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTManagedIntegrationsClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTManagedIntegrationsClient::IoTManagedIntegrationsClient(
    const IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration& clientConfiguration,
    std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTManagedIntegrationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<IoTManagedIntegrationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTManagedIntegrationsClient::IoTManagedIntegrationsClient(
    const AWSCredentials& credentials, std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase> endpointProvider,
    const IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTManagedIntegrationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<IoTManagedIntegrationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTManagedIntegrationsClient::IoTManagedIntegrationsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase> endpointProvider,
    const IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTManagedIntegrationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<IoTManagedIntegrationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTManagedIntegrationsClient::IoTManagedIntegrationsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTManagedIntegrationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTManagedIntegrationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTManagedIntegrationsClient::IoTManagedIntegrationsClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTManagedIntegrationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTManagedIntegrationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTManagedIntegrationsClient::IoTManagedIntegrationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTManagedIntegrationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTManagedIntegrationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTManagedIntegrationsClient::~IoTManagedIntegrationsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase>& IoTManagedIntegrationsClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void IoTManagedIntegrationsClient::init(const IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoT Managed Integrations");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iotmanagedintegrations");
}

void IoTManagedIntegrationsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTManagedIntegrationsClient::InvokeOperationOutcome IoTManagedIntegrationsClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateAccountAssociationOutcome IoTManagedIntegrationsClient::CreateAccountAssociation(
    const CreateAccountAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccountAssociationOutcome(result.GetResultWithOwnership())
                            : CreateAccountAssociationOutcome(std::move(result.GetError()));
}

CreateCloudConnectorOutcome IoTManagedIntegrationsClient::CreateCloudConnector(const CreateCloudConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloud-connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudConnectorOutcome(result.GetResultWithOwnership())
                            : CreateCloudConnectorOutcome(std::move(result.GetError()));
}

CreateConnectorDestinationOutcome IoTManagedIntegrationsClient::CreateConnectorDestination(
    const CreateConnectorDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-destinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectorDestinationOutcome(result.GetResultWithOwnership())
                            : CreateConnectorDestinationOutcome(std::move(result.GetError()));
}

CreateCredentialLockerOutcome IoTManagedIntegrationsClient::CreateCredentialLocker(const CreateCredentialLockerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/credential-lockers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCredentialLockerOutcome(result.GetResultWithOwnership())
                            : CreateCredentialLockerOutcome(std::move(result.GetError()));
}

CreateDestinationOutcome IoTManagedIntegrationsClient::CreateDestination(const CreateDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDestinationOutcome(result.GetResultWithOwnership())
                            : CreateDestinationOutcome(std::move(result.GetError()));
}

CreateEventLogConfigurationOutcome IoTManagedIntegrationsClient::CreateEventLogConfiguration(
    const CreateEventLogConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-log-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventLogConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateEventLogConfigurationOutcome(std::move(result.GetError()));
}

CreateManagedThingOutcome IoTManagedIntegrationsClient::CreateManagedThing(const CreateManagedThingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateManagedThingOutcome(result.GetResultWithOwnership())
                            : CreateManagedThingOutcome(std::move(result.GetError()));
}

CreateNotificationConfigurationOutcome IoTManagedIntegrationsClient::CreateNotificationConfiguration(
    const CreateNotificationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateNotificationConfigurationOutcome(std::move(result.GetError()));
}

CreateOtaTaskOutcome IoTManagedIntegrationsClient::CreateOtaTask(const CreateOtaTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOtaTaskOutcome(result.GetResultWithOwnership()) : CreateOtaTaskOutcome(std::move(result.GetError()));
}

CreateOtaTaskConfigurationOutcome IoTManagedIntegrationsClient::CreateOtaTaskConfiguration(
    const CreateOtaTaskConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-task-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOtaTaskConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateOtaTaskConfigurationOutcome(std::move(result.GetError()));
}

CreateProvisioningProfileOutcome IoTManagedIntegrationsClient::CreateProvisioningProfile(
    const CreateProvisioningProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProvisioningProfileOutcome(result.GetResultWithOwnership())
                            : CreateProvisioningProfileOutcome(std::move(result.GetError()));
}

DeleteAccountAssociationOutcome IoTManagedIntegrationsClient::DeleteAccountAssociation(
    const DeleteAccountAssociationRequest& request) const {
  if (!request.AccountAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccountAssociation", "Required field: AccountAssociationId, is not set");
    return DeleteAccountAssociationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccountAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteAccountAssociationOutcome(std::move(result.GetError()));
}

DeleteCloudConnectorOutcome IoTManagedIntegrationsClient::DeleteCloudConnector(const DeleteCloudConnectorRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCloudConnector", "Required field: Identifier, is not set");
    return DeleteCloudConnectorOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloud-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCloudConnectorOutcome(result.GetResultWithOwnership())
                            : DeleteCloudConnectorOutcome(std::move(result.GetError()));
}

DeleteConnectorDestinationOutcome IoTManagedIntegrationsClient::DeleteConnectorDestination(
    const DeleteConnectorDestinationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectorDestination", "Required field: Identifier, is not set");
    return DeleteConnectorDestinationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConnectorDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteConnectorDestinationOutcome(std::move(result.GetError()));
}

DeleteCredentialLockerOutcome IoTManagedIntegrationsClient::DeleteCredentialLocker(const DeleteCredentialLockerRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCredentialLocker", "Required field: Identifier, is not set");
    return DeleteCredentialLockerOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/credential-lockers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCredentialLockerOutcome(result.GetResultWithOwnership())
                            : DeleteCredentialLockerOutcome(std::move(result.GetError()));
}

DeleteDestinationOutcome IoTManagedIntegrationsClient::DeleteDestination(const DeleteDestinationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDestination", "Required field: Name, is not set");
    return DeleteDestinationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteDestinationOutcome(std::move(result.GetError()));
}

DeleteEventLogConfigurationOutcome IoTManagedIntegrationsClient::DeleteEventLogConfiguration(
    const DeleteEventLogConfigurationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventLogConfiguration", "Required field: Id, is not set");
    return DeleteEventLogConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-log-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEventLogConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteEventLogConfigurationOutcome(std::move(result.GetError()));
}

DeleteManagedThingOutcome IoTManagedIntegrationsClient::DeleteManagedThing(const DeleteManagedThingRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteManagedThing", "Required field: Identifier, is not set");
    return DeleteManagedThingOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteManagedThingOutcome(result.GetResultWithOwnership())
                            : DeleteManagedThingOutcome(std::move(result.GetError()));
}

DeleteNotificationConfigurationOutcome IoTManagedIntegrationsClient::DeleteNotificationConfiguration(
    const DeleteNotificationConfigurationRequest& request) const {
  if (!request.EventTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNotificationConfiguration", "Required field: EventType, is not set");
    return DeleteNotificationConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(EventTypeMapper::GetNameForEventType(request.GetEventType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteNotificationConfigurationOutcome(std::move(result.GetError()));
}

DeleteOtaTaskOutcome IoTManagedIntegrationsClient::DeleteOtaTask(const DeleteOtaTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOtaTask", "Required field: Identifier, is not set");
    return DeleteOtaTaskOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOtaTaskOutcome(result.GetResultWithOwnership()) : DeleteOtaTaskOutcome(std::move(result.GetError()));
}

DeleteOtaTaskConfigurationOutcome IoTManagedIntegrationsClient::DeleteOtaTaskConfiguration(
    const DeleteOtaTaskConfigurationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOtaTaskConfiguration", "Required field: Identifier, is not set");
    return DeleteOtaTaskConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-task-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOtaTaskConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteOtaTaskConfigurationOutcome(std::move(result.GetError()));
}

DeleteProvisioningProfileOutcome IoTManagedIntegrationsClient::DeleteProvisioningProfile(
    const DeleteProvisioningProfileRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisioningProfile", "Required field: Identifier, is not set");
    return DeleteProvisioningProfileOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProvisioningProfileOutcome(result.GetResultWithOwnership())
                            : DeleteProvisioningProfileOutcome(std::move(result.GetError()));
}

DeregisterAccountAssociationOutcome IoTManagedIntegrationsClient::DeregisterAccountAssociation(
    const DeregisterAccountAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-associations/deregister");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DeregisterAccountAssociationOutcome(result.GetResultWithOwnership())
                            : DeregisterAccountAssociationOutcome(std::move(result.GetError()));
}

GetAccountAssociationOutcome IoTManagedIntegrationsClient::GetAccountAssociation(const GetAccountAssociationRequest& request) const {
  if (!request.AccountAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccountAssociation", "Required field: AccountAssociationId, is not set");
    return GetAccountAssociationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccountAssociationOutcome(result.GetResultWithOwnership())
                            : GetAccountAssociationOutcome(std::move(result.GetError()));
}

GetCloudConnectorOutcome IoTManagedIntegrationsClient::GetCloudConnector(const GetCloudConnectorRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCloudConnector", "Required field: Identifier, is not set");
    return GetCloudConnectorOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloud-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCloudConnectorOutcome(result.GetResultWithOwnership())
                            : GetCloudConnectorOutcome(std::move(result.GetError()));
}

GetConnectorDestinationOutcome IoTManagedIntegrationsClient::GetConnectorDestination(const GetConnectorDestinationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectorDestination", "Required field: Identifier, is not set");
    return GetConnectorDestinationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectorDestinationOutcome(result.GetResultWithOwnership())
                            : GetConnectorDestinationOutcome(std::move(result.GetError()));
}

GetCredentialLockerOutcome IoTManagedIntegrationsClient::GetCredentialLocker(const GetCredentialLockerRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCredentialLocker", "Required field: Identifier, is not set");
    return GetCredentialLockerOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/credential-lockers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCredentialLockerOutcome(result.GetResultWithOwnership())
                            : GetCredentialLockerOutcome(std::move(result.GetError()));
}

GetCustomEndpointOutcome IoTManagedIntegrationsClient::GetCustomEndpoint(const GetCustomEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-endpoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCustomEndpointOutcome(result.GetResultWithOwnership())
                            : GetCustomEndpointOutcome(std::move(result.GetError()));
}

GetDefaultEncryptionConfigurationOutcome IoTManagedIntegrationsClient::GetDefaultEncryptionConfiguration(
    const GetDefaultEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDefaultEncryptionConfigurationOutcome(result.GetResultWithOwnership())
                            : GetDefaultEncryptionConfigurationOutcome(std::move(result.GetError()));
}

GetDestinationOutcome IoTManagedIntegrationsClient::GetDestination(const GetDestinationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDestination", "Required field: Name, is not set");
    return GetDestinationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDestinationOutcome(result.GetResultWithOwnership()) : GetDestinationOutcome(std::move(result.GetError()));
}

GetDeviceDiscoveryOutcome IoTManagedIntegrationsClient::GetDeviceDiscovery(const GetDeviceDiscoveryRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeviceDiscovery", "Required field: Identifier, is not set");
    return GetDeviceDiscoveryOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-discoveries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDeviceDiscoveryOutcome(result.GetResultWithOwnership())
                            : GetDeviceDiscoveryOutcome(std::move(result.GetError()));
}

GetEventLogConfigurationOutcome IoTManagedIntegrationsClient::GetEventLogConfiguration(
    const GetEventLogConfigurationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventLogConfiguration", "Required field: Id, is not set");
    return GetEventLogConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-log-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEventLogConfigurationOutcome(result.GetResultWithOwnership())
                            : GetEventLogConfigurationOutcome(std::move(result.GetError()));
}

GetHubConfigurationOutcome IoTManagedIntegrationsClient::GetHubConfiguration(const GetHubConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hub-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetHubConfigurationOutcome(result.GetResultWithOwnership())
                            : GetHubConfigurationOutcome(std::move(result.GetError()));
}

GetManagedThingOutcome IoTManagedIntegrationsClient::GetManagedThing(const GetManagedThingRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedThing", "Required field: Identifier, is not set");
    return GetManagedThingOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedThingOutcome(result.GetResultWithOwnership())
                            : GetManagedThingOutcome(std::move(result.GetError()));
}

GetManagedThingCapabilitiesOutcome IoTManagedIntegrationsClient::GetManagedThingCapabilities(
    const GetManagedThingCapabilitiesRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedThingCapabilities", "Required field: Identifier, is not set");
    return GetManagedThingCapabilitiesOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things-capabilities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedThingCapabilitiesOutcome(result.GetResultWithOwnership())
                            : GetManagedThingCapabilitiesOutcome(std::move(result.GetError()));
}

GetManagedThingCertificateOutcome IoTManagedIntegrationsClient::GetManagedThingCertificate(
    const GetManagedThingCertificateRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedThingCertificate", "Required field: Identifier, is not set");
    return GetManagedThingCertificateOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things-certificate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedThingCertificateOutcome(result.GetResultWithOwnership())
                            : GetManagedThingCertificateOutcome(std::move(result.GetError()));
}

GetManagedThingConnectivityDataOutcome IoTManagedIntegrationsClient::GetManagedThingConnectivityData(
    const GetManagedThingConnectivityDataRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedThingConnectivityData", "Required field: Identifier, is not set");
    return GetManagedThingConnectivityDataOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things-connectivity-data/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetManagedThingConnectivityDataOutcome(result.GetResultWithOwnership())
                            : GetManagedThingConnectivityDataOutcome(std::move(result.GetError()));
}

GetManagedThingMetaDataOutcome IoTManagedIntegrationsClient::GetManagedThingMetaData(const GetManagedThingMetaDataRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedThingMetaData", "Required field: Identifier, is not set");
    return GetManagedThingMetaDataOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things-metadata/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedThingMetaDataOutcome(result.GetResultWithOwnership())
                            : GetManagedThingMetaDataOutcome(std::move(result.GetError()));
}

GetManagedThingStateOutcome IoTManagedIntegrationsClient::GetManagedThingState(const GetManagedThingStateRequest& request) const {
  if (!request.ManagedThingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedThingState", "Required field: ManagedThingId, is not set");
    return GetManagedThingStateOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedThingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-states/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedThingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedThingStateOutcome(result.GetResultWithOwnership())
                            : GetManagedThingStateOutcome(std::move(result.GetError()));
}

GetNotificationConfigurationOutcome IoTManagedIntegrationsClient::GetNotificationConfiguration(
    const GetNotificationConfigurationRequest& request) const {
  if (!request.EventTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNotificationConfiguration", "Required field: EventType, is not set");
    return GetNotificationConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(EventTypeMapper::GetNameForEventType(request.GetEventType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetNotificationConfigurationOutcome(std::move(result.GetError()));
}

GetOtaTaskOutcome IoTManagedIntegrationsClient::GetOtaTask(const GetOtaTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOtaTask", "Required field: Identifier, is not set");
    return GetOtaTaskOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOtaTaskOutcome(result.GetResultWithOwnership()) : GetOtaTaskOutcome(std::move(result.GetError()));
}

GetOtaTaskConfigurationOutcome IoTManagedIntegrationsClient::GetOtaTaskConfiguration(const GetOtaTaskConfigurationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOtaTaskConfiguration", "Required field: Identifier, is not set");
    return GetOtaTaskConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-task-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOtaTaskConfigurationOutcome(result.GetResultWithOwnership())
                            : GetOtaTaskConfigurationOutcome(std::move(result.GetError()));
}

GetProvisioningProfileOutcome IoTManagedIntegrationsClient::GetProvisioningProfile(const GetProvisioningProfileRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProvisioningProfile", "Required field: Identifier, is not set");
    return GetProvisioningProfileOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProvisioningProfileOutcome(result.GetResultWithOwnership())
                            : GetProvisioningProfileOutcome(std::move(result.GetError()));
}

GetRuntimeLogConfigurationOutcome IoTManagedIntegrationsClient::GetRuntimeLogConfiguration(
    const GetRuntimeLogConfigurationRequest& request) const {
  if (!request.ManagedThingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRuntimeLogConfiguration", "Required field: ManagedThingId, is not set");
    return GetRuntimeLogConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedThingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-log-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedThingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRuntimeLogConfigurationOutcome(result.GetResultWithOwnership())
                            : GetRuntimeLogConfigurationOutcome(std::move(result.GetError()));
}

GetSchemaVersionOutcome IoTManagedIntegrationsClient::GetSchemaVersion(const GetSchemaVersionRequest& request) const {
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaVersion", "Required field: Type, is not set");
    return GetSchemaVersionOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  if (!request.SchemaVersionedIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaVersion", "Required field: SchemaVersionedId, is not set");
    return GetSchemaVersionOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaVersionedId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schema-versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(SchemaVersionTypeMapper::GetNameForSchemaVersionType(request.GetType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaVersionedId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSchemaVersionOutcome(result.GetResultWithOwnership())
                            : GetSchemaVersionOutcome(std::move(result.GetError()));
}

ListAccountAssociationsOutcome IoTManagedIntegrationsClient::ListAccountAssociations(const ListAccountAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccountAssociationsOutcome(result.GetResultWithOwnership())
                            : ListAccountAssociationsOutcome(std::move(result.GetError()));
}

ListCloudConnectorsOutcome IoTManagedIntegrationsClient::ListCloudConnectors(const ListCloudConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloud-connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCloudConnectorsOutcome(result.GetResultWithOwnership())
                            : ListCloudConnectorsOutcome(std::move(result.GetError()));
}

ListConnectorDestinationsOutcome IoTManagedIntegrationsClient::ListConnectorDestinations(
    const ListConnectorDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-destinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConnectorDestinationsOutcome(result.GetResultWithOwnership())
                            : ListConnectorDestinationsOutcome(std::move(result.GetError()));
}

ListCredentialLockersOutcome IoTManagedIntegrationsClient::ListCredentialLockers(const ListCredentialLockersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/credential-lockers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCredentialLockersOutcome(result.GetResultWithOwnership())
                            : ListCredentialLockersOutcome(std::move(result.GetError()));
}

ListDestinationsOutcome IoTManagedIntegrationsClient::ListDestinations(const ListDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDestinationsOutcome(result.GetResultWithOwnership())
                            : ListDestinationsOutcome(std::move(result.GetError()));
}

ListDeviceDiscoveriesOutcome IoTManagedIntegrationsClient::ListDeviceDiscoveries(const ListDeviceDiscoveriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-discoveries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDeviceDiscoveriesOutcome(result.GetResultWithOwnership())
                            : ListDeviceDiscoveriesOutcome(std::move(result.GetError()));
}

ListDiscoveredDevicesOutcome IoTManagedIntegrationsClient::ListDiscoveredDevices(const ListDiscoveredDevicesRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDiscoveredDevices", "Required field: Identifier, is not set");
    return ListDiscoveredDevicesOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-discoveries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDiscoveredDevicesOutcome(result.GetResultWithOwnership())
                            : ListDiscoveredDevicesOutcome(std::move(result.GetError()));
}

ListEventLogConfigurationsOutcome IoTManagedIntegrationsClient::ListEventLogConfigurations(
    const ListEventLogConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-log-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEventLogConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListEventLogConfigurationsOutcome(std::move(result.GetError()));
}

ListManagedThingAccountAssociationsOutcome IoTManagedIntegrationsClient::ListManagedThingAccountAssociations(
    const ListManagedThingAccountAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedThingAccountAssociationsOutcome(result.GetResultWithOwnership())
                            : ListManagedThingAccountAssociationsOutcome(std::move(result.GetError()));
}

ListManagedThingSchemasOutcome IoTManagedIntegrationsClient::ListManagedThingSchemas(const ListManagedThingSchemasRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListManagedThingSchemas", "Required field: Identifier, is not set");
    return ListManagedThingSchemasOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-schemas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedThingSchemasOutcome(result.GetResultWithOwnership())
                            : ListManagedThingSchemasOutcome(std::move(result.GetError()));
}

ListManagedThingsOutcome IoTManagedIntegrationsClient::ListManagedThings(const ListManagedThingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListManagedThingsOutcome(result.GetResultWithOwnership())
                            : ListManagedThingsOutcome(std::move(result.GetError()));
}

ListNotificationConfigurationsOutcome IoTManagedIntegrationsClient::ListNotificationConfigurations(
    const ListNotificationConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNotificationConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListNotificationConfigurationsOutcome(std::move(result.GetError()));
}

ListOtaTaskConfigurationsOutcome IoTManagedIntegrationsClient::ListOtaTaskConfigurations(
    const ListOtaTaskConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-task-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOtaTaskConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListOtaTaskConfigurationsOutcome(std::move(result.GetError()));
}

ListOtaTaskExecutionsOutcome IoTManagedIntegrationsClient::ListOtaTaskExecutions(const ListOtaTaskExecutionsRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOtaTaskExecutions", "Required field: Identifier, is not set");
    return ListOtaTaskExecutionsOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOtaTaskExecutionsOutcome(result.GetResultWithOwnership())
                            : ListOtaTaskExecutionsOutcome(std::move(result.GetError()));
}

ListOtaTasksOutcome IoTManagedIntegrationsClient::ListOtaTasks(const ListOtaTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOtaTasksOutcome(result.GetResultWithOwnership()) : ListOtaTasksOutcome(std::move(result.GetError()));
}

ListProvisioningProfilesOutcome IoTManagedIntegrationsClient::ListProvisioningProfiles(
    const ListProvisioningProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProvisioningProfilesOutcome(result.GetResultWithOwnership())
                            : ListProvisioningProfilesOutcome(std::move(result.GetError()));
}

ListSchemaVersionsOutcome IoTManagedIntegrationsClient::ListSchemaVersions(const ListSchemaVersionsRequest& request) const {
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSchemaVersions", "Required field: Type, is not set");
    return ListSchemaVersionsOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schema-versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(SchemaVersionTypeMapper::GetNameForSchemaVersionType(request.GetType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSchemaVersionsOutcome(result.GetResultWithOwnership())
                            : ListSchemaVersionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome IoTManagedIntegrationsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutDefaultEncryptionConfigurationOutcome IoTManagedIntegrationsClient::PutDefaultEncryptionConfiguration(
    const PutDefaultEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDefaultEncryptionConfigurationOutcome(result.GetResultWithOwnership())
                            : PutDefaultEncryptionConfigurationOutcome(std::move(result.GetError()));
}

PutHubConfigurationOutcome IoTManagedIntegrationsClient::PutHubConfiguration(const PutHubConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hub-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutHubConfigurationOutcome(result.GetResultWithOwnership())
                            : PutHubConfigurationOutcome(std::move(result.GetError()));
}

PutRuntimeLogConfigurationOutcome IoTManagedIntegrationsClient::PutRuntimeLogConfiguration(
    const PutRuntimeLogConfigurationRequest& request) const {
  if (!request.ManagedThingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRuntimeLogConfiguration", "Required field: ManagedThingId, is not set");
    return PutRuntimeLogConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedThingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-log-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedThingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutRuntimeLogConfigurationOutcome(result.GetResultWithOwnership())
                            : PutRuntimeLogConfigurationOutcome(std::move(result.GetError()));
}

RegisterAccountAssociationOutcome IoTManagedIntegrationsClient::RegisterAccountAssociation(
    const RegisterAccountAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-associations/register");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RegisterAccountAssociationOutcome(result.GetResultWithOwnership())
                            : RegisterAccountAssociationOutcome(std::move(result.GetError()));
}

RegisterCustomEndpointOutcome IoTManagedIntegrationsClient::RegisterCustomEndpoint(const RegisterCustomEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-endpoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterCustomEndpointOutcome(result.GetResultWithOwnership())
                            : RegisterCustomEndpointOutcome(std::move(result.GetError()));
}

ResetRuntimeLogConfigurationOutcome IoTManagedIntegrationsClient::ResetRuntimeLogConfiguration(
    const ResetRuntimeLogConfigurationRequest& request) const {
  if (!request.ManagedThingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetRuntimeLogConfiguration", "Required field: ManagedThingId, is not set");
    return ResetRuntimeLogConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedThingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime-log-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedThingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? ResetRuntimeLogConfigurationOutcome(result.GetResultWithOwnership())
                            : ResetRuntimeLogConfigurationOutcome(std::move(result.GetError()));
}

SendConnectorEventOutcome IoTManagedIntegrationsClient::SendConnectorEvent(const SendConnectorEventRequest& request) const {
  if (!request.ConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendConnectorEvent", "Required field: ConnectorId, is not set");
    return SendConnectorEventOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-event/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendConnectorEventOutcome(result.GetResultWithOwnership())
                            : SendConnectorEventOutcome(std::move(result.GetError()));
}

SendManagedThingCommandOutcome IoTManagedIntegrationsClient::SendManagedThingCommand(const SendManagedThingCommandRequest& request) const {
  if (!request.ManagedThingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendManagedThingCommand", "Required field: ManagedThingId, is not set");
    return SendManagedThingCommandOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedThingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things-command/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedThingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendManagedThingCommandOutcome(result.GetResultWithOwnership())
                            : SendManagedThingCommandOutcome(std::move(result.GetError()));
}

StartAccountAssociationRefreshOutcome IoTManagedIntegrationsClient::StartAccountAssociationRefresh(
    const StartAccountAssociationRefreshRequest& request) const {
  if (!request.AccountAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAccountAssociationRefresh", "Required field: AccountAssociationId, is not set");
    return StartAccountAssociationRefreshOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountAssociationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/refresh");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAccountAssociationRefreshOutcome(result.GetResultWithOwnership())
                            : StartAccountAssociationRefreshOutcome(std::move(result.GetError()));
}

StartDeviceDiscoveryOutcome IoTManagedIntegrationsClient::StartDeviceDiscovery(const StartDeviceDiscoveryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-discoveries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDeviceDiscoveryOutcome(result.GetResultWithOwnership())
                            : StartDeviceDiscoveryOutcome(std::move(result.GetError()));
}

TagResourceOutcome IoTManagedIntegrationsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome IoTManagedIntegrationsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAccountAssociationOutcome IoTManagedIntegrationsClient::UpdateAccountAssociation(
    const UpdateAccountAssociationRequest& request) const {
  if (!request.AccountAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccountAssociation", "Required field: AccountAssociationId, is not set");
    return UpdateAccountAssociationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAccountAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateAccountAssociationOutcome(std::move(result.GetError()));
}

UpdateCloudConnectorOutcome IoTManagedIntegrationsClient::UpdateCloudConnector(const UpdateCloudConnectorRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCloudConnector", "Required field: Identifier, is not set");
    return UpdateCloudConnectorOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloud-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCloudConnectorOutcome(result.GetResultWithOwnership())
                            : UpdateCloudConnectorOutcome(std::move(result.GetError()));
}

UpdateConnectorDestinationOutcome IoTManagedIntegrationsClient::UpdateConnectorDestination(
    const UpdateConnectorDestinationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectorDestination", "Required field: Identifier, is not set");
    return UpdateConnectorDestinationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConnectorDestinationOutcome(result.GetResultWithOwnership())
                            : UpdateConnectorDestinationOutcome(std::move(result.GetError()));
}

UpdateDestinationOutcome IoTManagedIntegrationsClient::UpdateDestination(const UpdateDestinationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDestination", "Required field: Name, is not set");
    return UpdateDestinationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDestinationOutcome(result.GetResultWithOwnership())
                            : UpdateDestinationOutcome(std::move(result.GetError()));
}

UpdateEventLogConfigurationOutcome IoTManagedIntegrationsClient::UpdateEventLogConfiguration(
    const UpdateEventLogConfigurationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventLogConfiguration", "Required field: Id, is not set");
    return UpdateEventLogConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-log-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEventLogConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateEventLogConfigurationOutcome(std::move(result.GetError()));
}

UpdateManagedThingOutcome IoTManagedIntegrationsClient::UpdateManagedThing(const UpdateManagedThingRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateManagedThing", "Required field: Identifier, is not set");
    return UpdateManagedThingOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateManagedThingOutcome(result.GetResultWithOwnership())
                            : UpdateManagedThingOutcome(std::move(result.GetError()));
}

UpdateNotificationConfigurationOutcome IoTManagedIntegrationsClient::UpdateNotificationConfiguration(
    const UpdateNotificationConfigurationRequest& request) const {
  if (!request.EventTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNotificationConfiguration", "Required field: EventType, is not set");
    return UpdateNotificationConfigurationOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(EventTypeMapper::GetNameForEventType(request.GetEventType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateNotificationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateNotificationConfigurationOutcome(std::move(result.GetError()));
}

UpdateOtaTaskOutcome IoTManagedIntegrationsClient::UpdateOtaTask(const UpdateOtaTaskRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOtaTask", "Required field: Identifier, is not set");
    return UpdateOtaTaskOutcome(Aws::Client::AWSError<IoTManagedIntegrationsErrors>(
        IoTManagedIntegrationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateOtaTaskOutcome(result.GetResultWithOwnership()) : UpdateOtaTaskOutcome(std::move(result.GetError()));
}
