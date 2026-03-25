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
#include <aws/iottwinmaker/IoTTwinMakerClient.h>
#include <aws/iottwinmaker/IoTTwinMakerEndpointProvider.h>
#include <aws/iottwinmaker/IoTTwinMakerErrorMarshaller.h>
#include <aws/iottwinmaker/model/BatchPutPropertyValuesRequest.h>
#include <aws/iottwinmaker/model/CancelMetadataTransferJobRequest.h>
#include <aws/iottwinmaker/model/CreateComponentTypeRequest.h>
#include <aws/iottwinmaker/model/CreateEntityRequest.h>
#include <aws/iottwinmaker/model/CreateMetadataTransferJobRequest.h>
#include <aws/iottwinmaker/model/CreateSceneRequest.h>
#include <aws/iottwinmaker/model/CreateSyncJobRequest.h>
#include <aws/iottwinmaker/model/CreateWorkspaceRequest.h>
#include <aws/iottwinmaker/model/DeleteComponentTypeRequest.h>
#include <aws/iottwinmaker/model/DeleteEntityRequest.h>
#include <aws/iottwinmaker/model/DeleteSceneRequest.h>
#include <aws/iottwinmaker/model/DeleteSyncJobRequest.h>
#include <aws/iottwinmaker/model/DeleteWorkspaceRequest.h>
#include <aws/iottwinmaker/model/ExecuteQueryRequest.h>
#include <aws/iottwinmaker/model/GetComponentTypeRequest.h>
#include <aws/iottwinmaker/model/GetEntityRequest.h>
#include <aws/iottwinmaker/model/GetMetadataTransferJobRequest.h>
#include <aws/iottwinmaker/model/GetPricingPlanRequest.h>
#include <aws/iottwinmaker/model/GetPropertyValueHistoryRequest.h>
#include <aws/iottwinmaker/model/GetPropertyValueRequest.h>
#include <aws/iottwinmaker/model/GetSceneRequest.h>
#include <aws/iottwinmaker/model/GetSyncJobRequest.h>
#include <aws/iottwinmaker/model/GetWorkspaceRequest.h>
#include <aws/iottwinmaker/model/ListComponentTypesRequest.h>
#include <aws/iottwinmaker/model/ListComponentsRequest.h>
#include <aws/iottwinmaker/model/ListEntitiesRequest.h>
#include <aws/iottwinmaker/model/ListMetadataTransferJobsRequest.h>
#include <aws/iottwinmaker/model/ListPropertiesRequest.h>
#include <aws/iottwinmaker/model/ListScenesRequest.h>
#include <aws/iottwinmaker/model/ListSyncJobsRequest.h>
#include <aws/iottwinmaker/model/ListSyncResourcesRequest.h>
#include <aws/iottwinmaker/model/ListTagsForResourceRequest.h>
#include <aws/iottwinmaker/model/ListWorkspacesRequest.h>
#include <aws/iottwinmaker/model/TagResourceRequest.h>
#include <aws/iottwinmaker/model/UntagResourceRequest.h>
#include <aws/iottwinmaker/model/UpdateComponentTypeRequest.h>
#include <aws/iottwinmaker/model/UpdateEntityRequest.h>
#include <aws/iottwinmaker/model/UpdatePricingPlanRequest.h>
#include <aws/iottwinmaker/model/UpdateSceneRequest.h>
#include <aws/iottwinmaker/model/UpdateWorkspaceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTTwinMaker;
using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTTwinMaker {
const char SERVICE_NAME[] = "iottwinmaker";
const char ALLOCATION_TAG[] = "IoTTwinMakerClient";
}  // namespace IoTTwinMaker
}  // namespace Aws
const char* IoTTwinMakerClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTTwinMakerClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTTwinMakerClient::IoTTwinMakerClient(const IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration,
                                       std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const AWSCredentials& credentials,
                                       std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider,
                                       const IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider,
                                       const IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTTwinMakerClient::IoTTwinMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTTwinMakerClient::~IoTTwinMakerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTTwinMakerEndpointProviderBase>& IoTTwinMakerClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTTwinMakerClient::init(const IoTTwinMaker::IoTTwinMakerClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoTTwinMaker");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iottwinmaker");
}

void IoTTwinMakerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTTwinMakerClient::InvokeOperationOutcome IoTTwinMakerClient::InvokeServiceOperation(
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

BatchPutPropertyValuesOutcome IoTTwinMakerClient::BatchPutPropertyValues(const BatchPutPropertyValuesRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutPropertyValues", "Required field: WorkspaceId, is not set");
    return BatchPutPropertyValuesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(
        IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entity-properties");
  };

  return BatchPutPropertyValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelMetadataTransferJobOutcome IoTTwinMakerClient::CancelMetadataTransferJob(const CancelMetadataTransferJobRequest& request) const {
  if (!request.MetadataTransferJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMetadataTransferJob", "Required field: MetadataTransferJobId, is not set");
    return CancelMetadataTransferJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(
        IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetadataTransferJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-transfer-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetadataTransferJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelMetadataTransferJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateComponentTypeOutcome IoTTwinMakerClient::CreateComponentType(const CreateComponentTypeRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateComponentType", "Required field: WorkspaceId, is not set");
    return CreateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateComponentType", "Required field: ComponentTypeId, is not set");
    return CreateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ComponentTypeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  };

  return CreateComponentTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEntityOutcome IoTTwinMakerClient::CreateEntity(const CreateEntityRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEntity", "Required field: WorkspaceId, is not set");
    return CreateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities");
  };

  return CreateEntityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMetadataTransferJobOutcome IoTTwinMakerClient::CreateMetadataTransferJob(const CreateMetadataTransferJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-transfer-jobs");
  };

  return CreateMetadataTransferJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSceneOutcome IoTTwinMakerClient::CreateScene(const CreateSceneRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateScene", "Required field: WorkspaceId, is not set");
    return CreateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scenes");
  };

  return CreateSceneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSyncJobOutcome IoTTwinMakerClient::CreateSyncJob(const CreateSyncJobRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSyncJob", "Required field: WorkspaceId, is not set");
    return CreateSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WorkspaceId]", false));
  }
  if (!request.SyncSourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSyncJob", "Required field: SyncSource, is not set");
    return CreateSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SyncSource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
  };

  return CreateSyncJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkspaceOutcome IoTTwinMakerClient::CreateWorkspace(const CreateWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspace", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return CreateWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteComponentTypeOutcome IoTTwinMakerClient::DeleteComponentType(const DeleteComponentTypeRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComponentType", "Required field: WorkspaceId, is not set");
    return DeleteComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComponentType", "Required field: ComponentTypeId, is not set");
    return DeleteComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ComponentTypeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  };

  return DeleteComponentTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEntityOutcome IoTTwinMakerClient::DeleteEntity(const DeleteEntityRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEntity", "Required field: WorkspaceId, is not set");
    return DeleteEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkspaceId]", false));
  }
  if (!request.EntityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEntity", "Required field: EntityId, is not set");
    return DeleteEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EntityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityId());
  };

  return DeleteEntityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSceneOutcome IoTTwinMakerClient::DeleteScene(const DeleteSceneRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteScene", "Required field: WorkspaceId, is not set");
    return DeleteSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [WorkspaceId]", false));
  }
  if (!request.SceneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteScene", "Required field: SceneId, is not set");
    return DeleteSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SceneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scenes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSceneId());
  };

  return DeleteSceneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSyncJobOutcome IoTTwinMakerClient::DeleteSyncJob(const DeleteSyncJobRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSyncJob", "Required field: WorkspaceId, is not set");
    return DeleteSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WorkspaceId]", false));
  }
  if (!request.SyncSourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSyncJob", "Required field: SyncSource, is not set");
    return DeleteSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SyncSource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
  };

  return DeleteSyncJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkspaceOutcome IoTTwinMakerClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return DeleteWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ExecuteQueryOutcome IoTTwinMakerClient::ExecuteQuery(const ExecuteQueryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queries/execution");
  };

  return ExecuteQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComponentTypeOutcome IoTTwinMakerClient::GetComponentType(const GetComponentTypeRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponentType", "Required field: WorkspaceId, is not set");
    return GetComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponentType", "Required field: ComponentTypeId, is not set");
    return GetComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ComponentTypeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  };

  return GetComponentTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEntityOutcome IoTTwinMakerClient::GetEntity(const GetEntityRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEntity", "Required field: WorkspaceId, is not set");
    return GetEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [WorkspaceId]", false));
  }
  if (!request.EntityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEntity", "Required field: EntityId, is not set");
    return GetEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [EntityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityId());
  };

  return GetEntityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMetadataTransferJobOutcome IoTTwinMakerClient::GetMetadataTransferJob(const GetMetadataTransferJobRequest& request) const {
  if (!request.MetadataTransferJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMetadataTransferJob", "Required field: MetadataTransferJobId, is not set");
    return GetMetadataTransferJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(
        IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetadataTransferJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-transfer-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetadataTransferJobId());
  };

  return GetMetadataTransferJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPricingPlanOutcome IoTTwinMakerClient::GetPricingPlan(const GetPricingPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pricingplan");
  };

  return GetPricingPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPropertyValueOutcome IoTTwinMakerClient::GetPropertyValue(const GetPropertyValueRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPropertyValue", "Required field: WorkspaceId, is not set");
    return GetPropertyValueOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entity-properties/value");
  };

  return GetPropertyValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPropertyValueHistoryOutcome IoTTwinMakerClient::GetPropertyValueHistory(const GetPropertyValueHistoryRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPropertyValueHistory", "Required field: WorkspaceId, is not set");
    return GetPropertyValueHistoryOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(
        IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entity-properties/history");
  };

  return GetPropertyValueHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSceneOutcome IoTTwinMakerClient::GetScene(const GetSceneRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetScene", "Required field: WorkspaceId, is not set");
    return GetSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WorkspaceId]", false));
  }
  if (!request.SceneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetScene", "Required field: SceneId, is not set");
    return GetSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [SceneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scenes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSceneId());
  };

  return GetSceneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSyncJobOutcome IoTTwinMakerClient::GetSyncJob(const GetSyncJobRequest& request) const {
  if (!request.SyncSourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSyncJob", "Required field: SyncSource, is not set");
    return GetSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SyncSource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
  };

  return GetSyncJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkspaceOutcome IoTTwinMakerClient::GetWorkspace(const GetWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkspace", "Required field: WorkspaceId, is not set");
    return GetWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return GetWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListComponentTypesOutcome IoTTwinMakerClient::ListComponentTypes(const ListComponentTypesRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComponentTypes", "Required field: WorkspaceId, is not set");
    return ListComponentTypesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/component-types-list");
  };

  return ListComponentTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComponentsOutcome IoTTwinMakerClient::ListComponents(const ListComponentsRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComponents", "Required field: WorkspaceId, is not set");
    return ListComponentsOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkspaceId]", false));
  }
  if (!request.EntityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComponents", "Required field: EntityId, is not set");
    return ListComponentsOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EntityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/components-list");
  };

  return ListComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntitiesOutcome IoTTwinMakerClient::ListEntities(const ListEntitiesRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEntities", "Required field: WorkspaceId, is not set");
    return ListEntitiesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities-list");
  };

  return ListEntitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMetadataTransferJobsOutcome IoTTwinMakerClient::ListMetadataTransferJobs(const ListMetadataTransferJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-transfer-jobs-list");
  };

  return ListMetadataTransferJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPropertiesOutcome IoTTwinMakerClient::ListProperties(const ListPropertiesRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProperties", "Required field: WorkspaceId, is not set");
    return ListPropertiesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties-list");
  };

  return ListPropertiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListScenesOutcome IoTTwinMakerClient::ListScenes(const ListScenesRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListScenes", "Required field: WorkspaceId, is not set");
    return ListScenesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scenes-list");
  };

  return ListScenesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSyncJobsOutcome IoTTwinMakerClient::ListSyncJobs(const ListSyncJobsRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSyncJobs", "Required field: WorkspaceId, is not set");
    return ListSyncJobsOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs-list");
  };

  return ListSyncJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSyncResourcesOutcome IoTTwinMakerClient::ListSyncResources(const ListSyncResourcesRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSyncResources", "Required field: WorkspaceId, is not set");
    return ListSyncResourcesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkspaceId]", false));
  }
  if (!request.SyncSourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSyncResources", "Required field: SyncSource, is not set");
    return ListSyncResourcesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SyncSource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources-list");
  };

  return ListSyncResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome IoTTwinMakerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags-list");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkspacesOutcome IoTTwinMakerClient::ListWorkspaces(const ListWorkspacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces-list");
  };

  return ListWorkspacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome IoTTwinMakerClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome IoTTwinMakerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceARN, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceARN]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateComponentTypeOutcome IoTTwinMakerClient::UpdateComponentType(const UpdateComponentTypeRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateComponentType", "Required field: WorkspaceId, is not set");
    return UpdateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateComponentType", "Required field: ComponentTypeId, is not set");
    return UpdateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ComponentTypeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  };

  return UpdateComponentTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEntityOutcome IoTTwinMakerClient::UpdateEntity(const UpdateEntityRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEntity", "Required field: WorkspaceId, is not set");
    return UpdateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkspaceId]", false));
  }
  if (!request.EntityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEntity", "Required field: EntityId, is not set");
    return UpdateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EntityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityId());
  };

  return UpdateEntityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePricingPlanOutcome IoTTwinMakerClient::UpdatePricingPlan(const UpdatePricingPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pricingplan");
  };

  return UpdatePricingPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSceneOutcome IoTTwinMakerClient::UpdateScene(const UpdateSceneRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScene", "Required field: WorkspaceId, is not set");
    return UpdateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [WorkspaceId]", false));
  }
  if (!request.SceneIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScene", "Required field: SceneId, is not set");
    return UpdateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SceneId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scenes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSceneId());
  };

  return UpdateSceneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateWorkspaceOutcome IoTTwinMakerClient::UpdateWorkspace(const UpdateWorkspaceRequest& request) const {
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspace", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  };

  return UpdateWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
