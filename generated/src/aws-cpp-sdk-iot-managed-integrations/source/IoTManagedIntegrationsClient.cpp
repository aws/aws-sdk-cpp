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

  return CreateAccountAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCloudConnectorOutcome IoTManagedIntegrationsClient::CreateCloudConnector(const CreateCloudConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloud-connectors");
  };

  return CreateCloudConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectorDestinationOutcome IoTManagedIntegrationsClient::CreateConnectorDestination(
    const CreateConnectorDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-destinations");
  };

  return CreateConnectorDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCredentialLockerOutcome IoTManagedIntegrationsClient::CreateCredentialLocker(const CreateCredentialLockerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/credential-lockers");
  };

  return CreateCredentialLockerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDestinationOutcome IoTManagedIntegrationsClient::CreateDestination(const CreateDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  return CreateDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventLogConfigurationOutcome IoTManagedIntegrationsClient::CreateEventLogConfiguration(
    const CreateEventLogConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-log-configurations");
  };

  return CreateEventLogConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateManagedThingOutcome IoTManagedIntegrationsClient::CreateManagedThing(const CreateManagedThingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things");
  };

  return CreateManagedThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNotificationConfigurationOutcome IoTManagedIntegrationsClient::CreateNotificationConfiguration(
    const CreateNotificationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations");
  };

  return CreateNotificationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOtaTaskOutcome IoTManagedIntegrationsClient::CreateOtaTask(const CreateOtaTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks");
  };

  return CreateOtaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOtaTaskConfigurationOutcome IoTManagedIntegrationsClient::CreateOtaTaskConfiguration(
    const CreateOtaTaskConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-task-configurations");
  };

  return CreateOtaTaskConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProvisioningProfileOutcome IoTManagedIntegrationsClient::CreateProvisioningProfile(
    const CreateProvisioningProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-profiles");
  };

  return CreateProvisioningProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteAccountAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteCloudConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteConnectorDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteCredentialLockerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteEventLogConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteManagedThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteNotificationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteOtaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteOtaTaskConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteProvisioningProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterAccountAssociationOutcome IoTManagedIntegrationsClient::DeregisterAccountAssociation(
    const DeregisterAccountAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-associations/deregister");
  };

  return DeregisterAccountAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return GetAccountAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetCloudConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetConnectorDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetCredentialLockerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCustomEndpointOutcome IoTManagedIntegrationsClient::GetCustomEndpoint(const GetCustomEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-endpoint");
  };

  return GetCustomEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDefaultEncryptionConfigurationOutcome IoTManagedIntegrationsClient::GetDefaultEncryptionConfiguration(
    const GetDefaultEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/encryption");
  };

  return GetDefaultEncryptionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetDeviceDiscoveryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetEventLogConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetHubConfigurationOutcome IoTManagedIntegrationsClient::GetHubConfiguration(const GetHubConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hub-configuration");
  };

  return GetHubConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetManagedThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetManagedThingCapabilitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetManagedThingCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetManagedThingConnectivityDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetManagedThingMetaDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetManagedThingStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetNotificationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetOtaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetOtaTaskConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetProvisioningProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRuntimeLogConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSchemaVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccountAssociationsOutcome IoTManagedIntegrationsClient::ListAccountAssociations(const ListAccountAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-associations");
  };

  return ListAccountAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCloudConnectorsOutcome IoTManagedIntegrationsClient::ListCloudConnectors(const ListCloudConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cloud-connectors");
  };

  return ListCloudConnectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectorDestinationsOutcome IoTManagedIntegrationsClient::ListConnectorDestinations(
    const ListConnectorDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connector-destinations");
  };

  return ListConnectorDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCredentialLockersOutcome IoTManagedIntegrationsClient::ListCredentialLockers(const ListCredentialLockersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/credential-lockers");
  };

  return ListCredentialLockersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDestinationsOutcome IoTManagedIntegrationsClient::ListDestinations(const ListDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  return ListDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeviceDiscoveriesOutcome IoTManagedIntegrationsClient::ListDeviceDiscoveries(const ListDeviceDiscoveriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-discoveries");
  };

  return ListDeviceDiscoveriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListDiscoveredDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventLogConfigurationsOutcome IoTManagedIntegrationsClient::ListEventLogConfigurations(
    const ListEventLogConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-log-configurations");
  };

  return ListEventLogConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListManagedThingAccountAssociationsOutcome IoTManagedIntegrationsClient::ListManagedThingAccountAssociations(
    const ListManagedThingAccountAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-associations");
  };

  return ListManagedThingAccountAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListManagedThingSchemasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListManagedThingsOutcome IoTManagedIntegrationsClient::ListManagedThings(const ListManagedThingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-things");
  };

  return ListManagedThingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNotificationConfigurationsOutcome IoTManagedIntegrationsClient::ListNotificationConfigurations(
    const ListNotificationConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configurations");
  };

  return ListNotificationConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOtaTaskConfigurationsOutcome IoTManagedIntegrationsClient::ListOtaTaskConfigurations(
    const ListOtaTaskConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-task-configurations");
  };

  return ListOtaTaskConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListOtaTaskExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOtaTasksOutcome IoTManagedIntegrationsClient::ListOtaTasks(const ListOtaTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ota-tasks");
  };

  return ListOtaTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProvisioningProfilesOutcome IoTManagedIntegrationsClient::ListProvisioningProfiles(
    const ListProvisioningProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-profiles");
  };

  return ListProvisioningProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListSchemaVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutDefaultEncryptionConfigurationOutcome IoTManagedIntegrationsClient::PutDefaultEncryptionConfiguration(
    const PutDefaultEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/encryption");
  };

  return PutDefaultEncryptionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutHubConfigurationOutcome IoTManagedIntegrationsClient::PutHubConfiguration(const PutHubConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hub-configuration");
  };

  return PutHubConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutRuntimeLogConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RegisterAccountAssociationOutcome IoTManagedIntegrationsClient::RegisterAccountAssociation(
    const RegisterAccountAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-thing-associations/register");
  };

  return RegisterAccountAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RegisterCustomEndpointOutcome IoTManagedIntegrationsClient::RegisterCustomEndpoint(const RegisterCustomEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-endpoint");
  };

  return RegisterCustomEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ResetRuntimeLogConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return SendConnectorEventOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return SendManagedThingCommandOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StartAccountAssociationRefreshOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDeviceDiscoveryOutcome IoTManagedIntegrationsClient::StartDeviceDiscovery(const StartDeviceDiscoveryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-discoveries");
  };

  return StartDeviceDiscoveryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateAccountAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateCloudConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateConnectorDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateEventLogConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateManagedThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateNotificationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateOtaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
