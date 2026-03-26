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
#include <aws/iotfleetwise/IoTFleetWiseClient.h>
#include <aws/iotfleetwise/IoTFleetWiseEndpointProvider.h>
#include <aws/iotfleetwise/IoTFleetWiseErrorMarshaller.h>
#include <aws/iotfleetwise/model/AssociateVehicleFleetRequest.h>
#include <aws/iotfleetwise/model/BatchCreateVehicleRequest.h>
#include <aws/iotfleetwise/model/BatchUpdateVehicleRequest.h>
#include <aws/iotfleetwise/model/CreateCampaignRequest.h>
#include <aws/iotfleetwise/model/CreateDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/CreateFleetRequest.h>
#include <aws/iotfleetwise/model/CreateModelManifestRequest.h>
#include <aws/iotfleetwise/model/CreateSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/CreateStateTemplateRequest.h>
#include <aws/iotfleetwise/model/CreateVehicleRequest.h>
#include <aws/iotfleetwise/model/DeleteCampaignRequest.h>
#include <aws/iotfleetwise/model/DeleteDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/DeleteFleetRequest.h>
#include <aws/iotfleetwise/model/DeleteModelManifestRequest.h>
#include <aws/iotfleetwise/model/DeleteSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/DeleteStateTemplateRequest.h>
#include <aws/iotfleetwise/model/DeleteVehicleRequest.h>
#include <aws/iotfleetwise/model/DisassociateVehicleFleetRequest.h>
#include <aws/iotfleetwise/model/GetCampaignRequest.h>
#include <aws/iotfleetwise/model/GetDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/GetEncryptionConfigurationRequest.h>
#include <aws/iotfleetwise/model/GetFleetRequest.h>
#include <aws/iotfleetwise/model/GetLoggingOptionsRequest.h>
#include <aws/iotfleetwise/model/GetModelManifestRequest.h>
#include <aws/iotfleetwise/model/GetRegisterAccountStatusRequest.h>
#include <aws/iotfleetwise/model/GetSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/GetStateTemplateRequest.h>
#include <aws/iotfleetwise/model/GetVehicleRequest.h>
#include <aws/iotfleetwise/model/GetVehicleStatusRequest.h>
#include <aws/iotfleetwise/model/ImportDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/ImportSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/ListCampaignsRequest.h>
#include <aws/iotfleetwise/model/ListDecoderManifestNetworkInterfacesRequest.h>
#include <aws/iotfleetwise/model/ListDecoderManifestSignalsRequest.h>
#include <aws/iotfleetwise/model/ListDecoderManifestsRequest.h>
#include <aws/iotfleetwise/model/ListFleetsForVehicleRequest.h>
#include <aws/iotfleetwise/model/ListFleetsRequest.h>
#include <aws/iotfleetwise/model/ListModelManifestNodesRequest.h>
#include <aws/iotfleetwise/model/ListModelManifestsRequest.h>
#include <aws/iotfleetwise/model/ListSignalCatalogNodesRequest.h>
#include <aws/iotfleetwise/model/ListSignalCatalogsRequest.h>
#include <aws/iotfleetwise/model/ListStateTemplatesRequest.h>
#include <aws/iotfleetwise/model/ListTagsForResourceRequest.h>
#include <aws/iotfleetwise/model/ListVehiclesInFleetRequest.h>
#include <aws/iotfleetwise/model/ListVehiclesRequest.h>
#include <aws/iotfleetwise/model/PutEncryptionConfigurationRequest.h>
#include <aws/iotfleetwise/model/PutLoggingOptionsRequest.h>
#include <aws/iotfleetwise/model/RegisterAccountRequest.h>
#include <aws/iotfleetwise/model/TagResourceRequest.h>
#include <aws/iotfleetwise/model/UntagResourceRequest.h>
#include <aws/iotfleetwise/model/UpdateCampaignRequest.h>
#include <aws/iotfleetwise/model/UpdateDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/UpdateFleetRequest.h>
#include <aws/iotfleetwise/model/UpdateModelManifestRequest.h>
#include <aws/iotfleetwise/model/UpdateSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/UpdateStateTemplateRequest.h>
#include <aws/iotfleetwise/model/UpdateVehicleRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTFleetWise;
using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTFleetWise {
const char SERVICE_NAME[] = "iotfleetwise";
const char ALLOCATION_TAG[] = "IoTFleetWiseClient";
}  // namespace IoTFleetWise
}  // namespace Aws
const char* IoTFleetWiseClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTFleetWiseClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTFleetWiseClient::IoTFleetWiseClient(const IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration,
                                       std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const AWSCredentials& credentials,
                                       std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider,
                                       const IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider,
                                       const IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTFleetWiseClient::IoTFleetWiseClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTFleetWiseClient::~IoTFleetWiseClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTFleetWiseEndpointProviderBase>& IoTFleetWiseClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTFleetWiseClient::init(const IoTFleetWise::IoTFleetWiseClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoTFleetWise");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iotfleetwise");
}

void IoTFleetWiseClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTFleetWiseClient::InvokeOperationOutcome IoTFleetWiseClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateVehicleFleetOutcome IoTFleetWiseClient::AssociateVehicleFleet(const AssociateVehicleFleetRequest& request) const {
  return AssociateVehicleFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchCreateVehicleOutcome IoTFleetWiseClient::BatchCreateVehicle(const BatchCreateVehicleRequest& request) const {
  return BatchCreateVehicleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateVehicleOutcome IoTFleetWiseClient::BatchUpdateVehicle(const BatchUpdateVehicleRequest& request) const {
  return BatchUpdateVehicleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCampaignOutcome IoTFleetWiseClient::CreateCampaign(const CreateCampaignRequest& request) const {
  return CreateCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDecoderManifestOutcome IoTFleetWiseClient::CreateDecoderManifest(const CreateDecoderManifestRequest& request) const {
  return CreateDecoderManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFleetOutcome IoTFleetWiseClient::CreateFleet(const CreateFleetRequest& request) const {
  return CreateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelManifestOutcome IoTFleetWiseClient::CreateModelManifest(const CreateModelManifestRequest& request) const {
  return CreateModelManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSignalCatalogOutcome IoTFleetWiseClient::CreateSignalCatalog(const CreateSignalCatalogRequest& request) const {
  return CreateSignalCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStateTemplateOutcome IoTFleetWiseClient::CreateStateTemplate(const CreateStateTemplateRequest& request) const {
  return CreateStateTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVehicleOutcome IoTFleetWiseClient::CreateVehicle(const CreateVehicleRequest& request) const {
  return CreateVehicleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCampaignOutcome IoTFleetWiseClient::DeleteCampaign(const DeleteCampaignRequest& request) const {
  return DeleteCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDecoderManifestOutcome IoTFleetWiseClient::DeleteDecoderManifest(const DeleteDecoderManifestRequest& request) const {
  return DeleteDecoderManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFleetOutcome IoTFleetWiseClient::DeleteFleet(const DeleteFleetRequest& request) const {
  return DeleteFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelManifestOutcome IoTFleetWiseClient::DeleteModelManifest(const DeleteModelManifestRequest& request) const {
  return DeleteModelManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSignalCatalogOutcome IoTFleetWiseClient::DeleteSignalCatalog(const DeleteSignalCatalogRequest& request) const {
  return DeleteSignalCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStateTemplateOutcome IoTFleetWiseClient::DeleteStateTemplate(const DeleteStateTemplateRequest& request) const {
  return DeleteStateTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVehicleOutcome IoTFleetWiseClient::DeleteVehicle(const DeleteVehicleRequest& request) const {
  return DeleteVehicleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateVehicleFleetOutcome IoTFleetWiseClient::DisassociateVehicleFleet(const DisassociateVehicleFleetRequest& request) const {
  return DisassociateVehicleFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCampaignOutcome IoTFleetWiseClient::GetCampaign(const GetCampaignRequest& request) const {
  return GetCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDecoderManifestOutcome IoTFleetWiseClient::GetDecoderManifest(const GetDecoderManifestRequest& request) const {
  return GetDecoderManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEncryptionConfigurationOutcome IoTFleetWiseClient::GetEncryptionConfiguration(const GetEncryptionConfigurationRequest& request) const {
  return GetEncryptionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFleetOutcome IoTFleetWiseClient::GetFleet(const GetFleetRequest& request) const {
  return GetFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoggingOptionsOutcome IoTFleetWiseClient::GetLoggingOptions(const GetLoggingOptionsRequest& request) const {
  return GetLoggingOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetModelManifestOutcome IoTFleetWiseClient::GetModelManifest(const GetModelManifestRequest& request) const {
  return GetModelManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegisterAccountStatusOutcome IoTFleetWiseClient::GetRegisterAccountStatus(const GetRegisterAccountStatusRequest& request) const {
  return GetRegisterAccountStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSignalCatalogOutcome IoTFleetWiseClient::GetSignalCatalog(const GetSignalCatalogRequest& request) const {
  return GetSignalCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetStateTemplateOutcome IoTFleetWiseClient::GetStateTemplate(const GetStateTemplateRequest& request) const {
  return GetStateTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVehicleOutcome IoTFleetWiseClient::GetVehicle(const GetVehicleRequest& request) const {
  return GetVehicleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVehicleStatusOutcome IoTFleetWiseClient::GetVehicleStatus(const GetVehicleStatusRequest& request) const {
  return GetVehicleStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportDecoderManifestOutcome IoTFleetWiseClient::ImportDecoderManifest(const ImportDecoderManifestRequest& request) const {
  return ImportDecoderManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportSignalCatalogOutcome IoTFleetWiseClient::ImportSignalCatalog(const ImportSignalCatalogRequest& request) const {
  return ImportSignalCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCampaignsOutcome IoTFleetWiseClient::ListCampaigns(const ListCampaignsRequest& request) const {
  return ListCampaignsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDecoderManifestNetworkInterfacesOutcome IoTFleetWiseClient::ListDecoderManifestNetworkInterfaces(
    const ListDecoderManifestNetworkInterfacesRequest& request) const {
  return ListDecoderManifestNetworkInterfacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDecoderManifestSignalsOutcome IoTFleetWiseClient::ListDecoderManifestSignals(const ListDecoderManifestSignalsRequest& request) const {
  return ListDecoderManifestSignalsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDecoderManifestsOutcome IoTFleetWiseClient::ListDecoderManifests(const ListDecoderManifestsRequest& request) const {
  return ListDecoderManifestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFleetsOutcome IoTFleetWiseClient::ListFleets(const ListFleetsRequest& request) const {
  return ListFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFleetsForVehicleOutcome IoTFleetWiseClient::ListFleetsForVehicle(const ListFleetsForVehicleRequest& request) const {
  return ListFleetsForVehicleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelManifestNodesOutcome IoTFleetWiseClient::ListModelManifestNodes(const ListModelManifestNodesRequest& request) const {
  return ListModelManifestNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelManifestsOutcome IoTFleetWiseClient::ListModelManifests(const ListModelManifestsRequest& request) const {
  return ListModelManifestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSignalCatalogNodesOutcome IoTFleetWiseClient::ListSignalCatalogNodes(const ListSignalCatalogNodesRequest& request) const {
  return ListSignalCatalogNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSignalCatalogsOutcome IoTFleetWiseClient::ListSignalCatalogs(const ListSignalCatalogsRequest& request) const {
  return ListSignalCatalogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStateTemplatesOutcome IoTFleetWiseClient::ListStateTemplates(const ListStateTemplatesRequest& request) const {
  return ListStateTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome IoTFleetWiseClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVehiclesOutcome IoTFleetWiseClient::ListVehicles(const ListVehiclesRequest& request) const {
  return ListVehiclesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVehiclesInFleetOutcome IoTFleetWiseClient::ListVehiclesInFleet(const ListVehiclesInFleetRequest& request) const {
  return ListVehiclesInFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEncryptionConfigurationOutcome IoTFleetWiseClient::PutEncryptionConfiguration(const PutEncryptionConfigurationRequest& request) const {
  return PutEncryptionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLoggingOptionsOutcome IoTFleetWiseClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const {
  return PutLoggingOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterAccountOutcome IoTFleetWiseClient::RegisterAccount(const RegisterAccountRequest& request) const {
  return RegisterAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome IoTFleetWiseClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome IoTFleetWiseClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCampaignOutcome IoTFleetWiseClient::UpdateCampaign(const UpdateCampaignRequest& request) const {
  return UpdateCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDecoderManifestOutcome IoTFleetWiseClient::UpdateDecoderManifest(const UpdateDecoderManifestRequest& request) const {
  return UpdateDecoderManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFleetOutcome IoTFleetWiseClient::UpdateFleet(const UpdateFleetRequest& request) const {
  return UpdateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateModelManifestOutcome IoTFleetWiseClient::UpdateModelManifest(const UpdateModelManifestRequest& request) const {
  return UpdateModelManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSignalCatalogOutcome IoTFleetWiseClient::UpdateSignalCatalog(const UpdateSignalCatalogRequest& request) const {
  return UpdateSignalCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStateTemplateOutcome IoTFleetWiseClient::UpdateStateTemplate(const UpdateStateTemplateRequest& request) const {
  return UpdateStateTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVehicleOutcome IoTFleetWiseClient::UpdateVehicle(const UpdateVehicleRequest& request) const {
  return UpdateVehicleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
