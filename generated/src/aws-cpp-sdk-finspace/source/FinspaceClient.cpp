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
#include <aws/finspace/FinspaceClient.h>
#include <aws/finspace/FinspaceEndpointProvider.h>
#include <aws/finspace/FinspaceErrorMarshaller.h>
#include <aws/finspace/model/CreateKxChangesetRequest.h>
#include <aws/finspace/model/CreateKxClusterRequest.h>
#include <aws/finspace/model/CreateKxDatabaseRequest.h>
#include <aws/finspace/model/CreateKxDataviewRequest.h>
#include <aws/finspace/model/CreateKxEnvironmentRequest.h>
#include <aws/finspace/model/CreateKxScalingGroupRequest.h>
#include <aws/finspace/model/CreateKxUserRequest.h>
#include <aws/finspace/model/CreateKxVolumeRequest.h>
#include <aws/finspace/model/DeleteKxClusterNodeRequest.h>
#include <aws/finspace/model/DeleteKxClusterRequest.h>
#include <aws/finspace/model/DeleteKxDatabaseRequest.h>
#include <aws/finspace/model/DeleteKxDataviewRequest.h>
#include <aws/finspace/model/DeleteKxEnvironmentRequest.h>
#include <aws/finspace/model/DeleteKxScalingGroupRequest.h>
#include <aws/finspace/model/DeleteKxUserRequest.h>
#include <aws/finspace/model/DeleteKxVolumeRequest.h>
#include <aws/finspace/model/GetKxChangesetRequest.h>
#include <aws/finspace/model/GetKxClusterRequest.h>
#include <aws/finspace/model/GetKxConnectionStringRequest.h>
#include <aws/finspace/model/GetKxDatabaseRequest.h>
#include <aws/finspace/model/GetKxDataviewRequest.h>
#include <aws/finspace/model/GetKxEnvironmentRequest.h>
#include <aws/finspace/model/GetKxScalingGroupRequest.h>
#include <aws/finspace/model/GetKxUserRequest.h>
#include <aws/finspace/model/GetKxVolumeRequest.h>
#include <aws/finspace/model/ListKxChangesetsRequest.h>
#include <aws/finspace/model/ListKxClusterNodesRequest.h>
#include <aws/finspace/model/ListKxClustersRequest.h>
#include <aws/finspace/model/ListKxDatabasesRequest.h>
#include <aws/finspace/model/ListKxDataviewsRequest.h>
#include <aws/finspace/model/ListKxEnvironmentsRequest.h>
#include <aws/finspace/model/ListKxScalingGroupsRequest.h>
#include <aws/finspace/model/ListKxUsersRequest.h>
#include <aws/finspace/model/ListKxVolumesRequest.h>
#include <aws/finspace/model/ListTagsForResourceRequest.h>
#include <aws/finspace/model/TagResourceRequest.h>
#include <aws/finspace/model/UntagResourceRequest.h>
#include <aws/finspace/model/UpdateKxClusterCodeConfigurationRequest.h>
#include <aws/finspace/model/UpdateKxClusterDatabasesRequest.h>
#include <aws/finspace/model/UpdateKxDatabaseRequest.h>
#include <aws/finspace/model/UpdateKxDataviewRequest.h>
#include <aws/finspace/model/UpdateKxEnvironmentNetworkRequest.h>
#include <aws/finspace/model/UpdateKxEnvironmentRequest.h>
#include <aws/finspace/model/UpdateKxUserRequest.h>
#include <aws/finspace/model/UpdateKxVolumeRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::finspace;
using namespace Aws::finspace::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace finspace {
const char SERVICE_NAME[] = "finspace";
const char ALLOCATION_TAG[] = "FinspaceClient";
}  // namespace finspace
}  // namespace Aws
const char* FinspaceClient::GetServiceName() { return SERVICE_NAME; }
const char* FinspaceClient::GetAllocationTag() { return ALLOCATION_TAG; }

FinspaceClient::FinspaceClient(const finspace::FinspaceClientConfiguration& clientConfiguration,
                               std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FinspaceClient::FinspaceClient(const AWSCredentials& credentials, std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider,
                               const finspace::FinspaceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FinspaceClient::FinspaceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider,
                               const finspace::FinspaceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
FinspaceClient::FinspaceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FinspaceClient::FinspaceClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FinspaceClient::FinspaceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
FinspaceClient::~FinspaceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<FinspaceEndpointProviderBase>& FinspaceClient::accessEndpointProvider() { return m_endpointProvider; }

void FinspaceClient::init(const finspace::FinspaceClientConfiguration& config) {
  AWSClient::SetServiceClientName("finspace");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "finspace");
}

void FinspaceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
FinspaceClient::InvokeOperationOutcome FinspaceClient::InvokeServiceOperation(
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

CreateKxChangesetOutcome FinspaceClient::CreateKxChangeset(const CreateKxChangesetRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxChangeset", "Required field: EnvironmentId, is not set");
    return CreateKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxChangeset", "Required field: DatabaseName, is not set");
    return CreateKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxChangeset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxChangesetOutcome>(
      [&]() -> CreateKxChangesetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxChangeset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/changesets");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxChangesetOutcome(CreateKxChangesetResult(result.GetResultWithOwnership()))
                                  : CreateKxChangesetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxClusterOutcome FinspaceClient::CreateKxCluster(const CreateKxClusterRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxCluster", "Required field: EnvironmentId, is not set");
    return CreateKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxCluster",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxClusterOutcome>(
      [&]() -> CreateKxClusterOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxClusterOutcome(CreateKxClusterResult(result.GetResultWithOwnership()))
                                  : CreateKxClusterOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxDatabaseOutcome FinspaceClient::CreateKxDatabase(const CreateKxDatabaseRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxDatabase", "Required field: EnvironmentId, is not set");
    return CreateKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxDatabase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxDatabaseOutcome>(
      [&]() -> CreateKxDatabaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxDatabaseOutcome(CreateKxDatabaseResult(result.GetResultWithOwnership()))
                                  : CreateKxDatabaseOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxDataviewOutcome FinspaceClient::CreateKxDataview(const CreateKxDataviewRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxDataview", "Required field: EnvironmentId, is not set");
    return CreateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxDataview", "Required field: DatabaseName, is not set");
    return CreateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxDataview",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxDataviewOutcome>(
      [&]() -> CreateKxDataviewOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxDataviewOutcome(CreateKxDataviewResult(result.GetResultWithOwnership()))
                                  : CreateKxDataviewOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxEnvironmentOutcome FinspaceClient::CreateKxEnvironment(const CreateKxEnvironmentRequest& request) const {
  AWS_OPERATION_GUARD(CreateKxEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxEnvironmentOutcome>(
      [&]() -> CreateKxEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxEnvironmentOutcome(CreateKxEnvironmentResult(result.GetResultWithOwnership()))
                                  : CreateKxEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxScalingGroupOutcome FinspaceClient::CreateKxScalingGroup(const CreateKxScalingGroupRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxScalingGroup", "Required field: EnvironmentId, is not set");
    return CreateKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxScalingGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxScalingGroupOutcome>(
      [&]() -> CreateKxScalingGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxScalingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxScalingGroupOutcome(CreateKxScalingGroupResult(result.GetResultWithOwnership()))
                                  : CreateKxScalingGroupOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxUserOutcome FinspaceClient::CreateKxUser(const CreateKxUserRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxUser", "Required field: EnvironmentId, is not set");
    return CreateKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxUserOutcome>(
      [&]() -> CreateKxUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxUserOutcome(CreateKxUserResult(result.GetResultWithOwnership()))
                                  : CreateKxUserOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxVolumeOutcome FinspaceClient::CreateKxVolume(const CreateKxVolumeRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxVolume", "Required field: EnvironmentId, is not set");
    return CreateKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxVolume",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxVolumeOutcome>(
      [&]() -> CreateKxVolumeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateKxVolumeOutcome(CreateKxVolumeResult(result.GetResultWithOwnership()))
                                  : CreateKxVolumeOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxClusterOutcome FinspaceClient::DeleteKxCluster(const DeleteKxClusterRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxCluster", "Required field: EnvironmentId, is not set");
    return DeleteKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxCluster", "Required field: ClusterName, is not set");
    return DeleteKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxCluster",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxClusterOutcome>(
      [&]() -> DeleteKxClusterOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxClusterOutcome(DeleteKxClusterResult(result.GetResultWithOwnership()))
                                  : DeleteKxClusterOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxClusterNodeOutcome FinspaceClient::DeleteKxClusterNode(const DeleteKxClusterNodeRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxClusterNode", "Required field: EnvironmentId, is not set");
    return DeleteKxClusterNodeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxClusterNode", "Required field: ClusterName, is not set");
    return DeleteKxClusterNodeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ClusterName]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxClusterNode", "Required field: NodeId, is not set");
    return DeleteKxClusterNodeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxClusterNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxClusterNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxClusterNode",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxClusterNodeOutcome>(
      [&]() -> DeleteKxClusterNodeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxClusterNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxClusterNodeOutcome(DeleteKxClusterNodeResult(result.GetResultWithOwnership()))
                                  : DeleteKxClusterNodeOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxDatabaseOutcome FinspaceClient::DeleteKxDatabase(const DeleteKxDatabaseRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxDatabase", "Required field: EnvironmentId, is not set");
    return DeleteKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxDatabase", "Required field: DatabaseName, is not set");
    return DeleteKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatabaseName]", false));
  }
  if (!request.ClientTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxDatabase", "Required field: ClientToken, is not set");
    return DeleteKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClientToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxDatabase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxDatabaseOutcome>(
      [&]() -> DeleteKxDatabaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxDatabaseOutcome(DeleteKxDatabaseResult(result.GetResultWithOwnership()))
                                  : DeleteKxDatabaseOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxDataviewOutcome FinspaceClient::DeleteKxDataview(const DeleteKxDataviewRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: EnvironmentId, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: DatabaseName, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatabaseName]", false));
  }
  if (!request.DataviewNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: DataviewName, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DataviewName]", false));
  }
  if (!request.ClientTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: ClientToken, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClientToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxDataview",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxDataviewOutcome>(
      [&]() -> DeleteKxDataviewOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataviewName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxDataviewOutcome(DeleteKxDataviewResult(result.GetResultWithOwnership()))
                                  : DeleteKxDataviewOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxEnvironmentOutcome FinspaceClient::DeleteKxEnvironment(const DeleteKxEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxEnvironmentOutcome>(
      [&]() -> DeleteKxEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxEnvironmentOutcome(DeleteKxEnvironmentResult(result.GetResultWithOwnership()))
                                  : DeleteKxEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxScalingGroupOutcome FinspaceClient::DeleteKxScalingGroup(const DeleteKxScalingGroupRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxScalingGroup", "Required field: EnvironmentId, is not set");
    return DeleteKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EnvironmentId]", false));
  }
  if (!request.ScalingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxScalingGroup", "Required field: ScalingGroupName, is not set");
    return DeleteKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ScalingGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxScalingGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxScalingGroupOutcome>(
      [&]() -> DeleteKxScalingGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxScalingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScalingGroupName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxScalingGroupOutcome(DeleteKxScalingGroupResult(result.GetResultWithOwnership()))
                                  : DeleteKxScalingGroupOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxUserOutcome FinspaceClient::DeleteKxUser(const DeleteKxUserRequest& request) const {
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxUser", "Required field: UserName, is not set");
    return DeleteKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UserName]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxUser", "Required field: EnvironmentId, is not set");
    return DeleteKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxUserOutcome>(
      [&]() -> DeleteKxUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxUserOutcome(DeleteKxUserResult(result.GetResultWithOwnership()))
                                  : DeleteKxUserOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxVolumeOutcome FinspaceClient::DeleteKxVolume(const DeleteKxVolumeRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxVolume", "Required field: EnvironmentId, is not set");
    return DeleteKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }
  if (!request.VolumeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxVolume", "Required field: VolumeName, is not set");
    return DeleteKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [VolumeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxVolume",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxVolumeOutcome>(
      [&]() -> DeleteKxVolumeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVolumeName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKxVolumeOutcome(DeleteKxVolumeResult(result.GetResultWithOwnership()))
                                  : DeleteKxVolumeOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxChangesetOutcome FinspaceClient::GetKxChangeset(const GetKxChangesetRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxChangeset", "Required field: EnvironmentId, is not set");
    return GetKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxChangeset", "Required field: DatabaseName, is not set");
    return GetKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DatabaseName]", false));
  }
  if (!request.ChangesetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxChangeset", "Required field: ChangesetId, is not set");
    return GetKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ChangesetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxChangeset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxChangesetOutcome>(
      [&]() -> GetKxChangesetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxChangeset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/changesets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChangesetId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxChangesetOutcome(GetKxChangesetResult(result.GetResultWithOwnership()))
                                  : GetKxChangesetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxClusterOutcome FinspaceClient::GetKxCluster(const GetKxClusterRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxCluster", "Required field: EnvironmentId, is not set");
    return GetKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxCluster", "Required field: ClusterName, is not set");
    return GetKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxCluster",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxClusterOutcome>(
      [&]() -> GetKxClusterOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxClusterOutcome(GetKxClusterResult(result.GetResultWithOwnership()))
                                  : GetKxClusterOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxConnectionStringOutcome FinspaceClient::GetKxConnectionString(const GetKxConnectionStringRequest& request) const {
  if (!request.UserArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxConnectionString", "Required field: UserArn, is not set");
    return GetKxConnectionStringOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [UserArn]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxConnectionString", "Required field: EnvironmentId, is not set");
    return GetKxConnectionStringOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxConnectionString", "Required field: ClusterName, is not set");
    return GetKxConnectionStringOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxConnectionString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxConnectionString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxConnectionString",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxConnectionStringOutcome>(
      [&]() -> GetKxConnectionStringOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxConnectionString, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/connectionString");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxConnectionStringOutcome(GetKxConnectionStringResult(result.GetResultWithOwnership()))
                                  : GetKxConnectionStringOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxDatabaseOutcome FinspaceClient::GetKxDatabase(const GetKxDatabaseRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxDatabase", "Required field: EnvironmentId, is not set");
    return GetKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxDatabase", "Required field: DatabaseName, is not set");
    return GetKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxDatabase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxDatabaseOutcome>(
      [&]() -> GetKxDatabaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxDatabaseOutcome(GetKxDatabaseResult(result.GetResultWithOwnership()))
                                  : GetKxDatabaseOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxDataviewOutcome FinspaceClient::GetKxDataview(const GetKxDataviewRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxDataview", "Required field: EnvironmentId, is not set");
    return GetKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxDataview", "Required field: DatabaseName, is not set");
    return GetKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DatabaseName]", false));
  }
  if (!request.DataviewNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxDataview", "Required field: DataviewName, is not set");
    return GetKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DataviewName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxDataview",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxDataviewOutcome>(
      [&]() -> GetKxDataviewOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataviewName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxDataviewOutcome(GetKxDataviewResult(result.GetResultWithOwnership()))
                                  : GetKxDataviewOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxEnvironmentOutcome FinspaceClient::GetKxEnvironment(const GetKxEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxEnvironment", "Required field: EnvironmentId, is not set");
    return GetKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxEnvironmentOutcome>(
      [&]() -> GetKxEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxEnvironmentOutcome(GetKxEnvironmentResult(result.GetResultWithOwnership()))
                                  : GetKxEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxScalingGroupOutcome FinspaceClient::GetKxScalingGroup(const GetKxScalingGroupRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxScalingGroup", "Required field: EnvironmentId, is not set");
    return GetKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EnvironmentId]", false));
  }
  if (!request.ScalingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxScalingGroup", "Required field: ScalingGroupName, is not set");
    return GetKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ScalingGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxScalingGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxScalingGroupOutcome>(
      [&]() -> GetKxScalingGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxScalingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScalingGroupName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxScalingGroupOutcome(GetKxScalingGroupResult(result.GetResultWithOwnership()))
                                  : GetKxScalingGroupOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxUserOutcome FinspaceClient::GetKxUser(const GetKxUserRequest& request) const {
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxUser", "Required field: UserName, is not set");
    return GetKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [UserName]", false));
  }
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxUser", "Required field: EnvironmentId, is not set");
    return GetKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxUserOutcome>(
      [&]() -> GetKxUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxUserOutcome(GetKxUserResult(result.GetResultWithOwnership()))
                                  : GetKxUserOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxVolumeOutcome FinspaceClient::GetKxVolume(const GetKxVolumeRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxVolume", "Required field: EnvironmentId, is not set");
    return GetKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [EnvironmentId]", false));
  }
  if (!request.VolumeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxVolume", "Required field: VolumeName, is not set");
    return GetKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [VolumeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxVolume",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxVolumeOutcome>(
      [&]() -> GetKxVolumeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVolumeName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKxVolumeOutcome(GetKxVolumeResult(result.GetResultWithOwnership()))
                                  : GetKxVolumeOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxChangesetsOutcome FinspaceClient::ListKxChangesets(const ListKxChangesetsRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxChangesets", "Required field: EnvironmentId, is not set");
    return ListKxChangesetsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxChangesets", "Required field: DatabaseName, is not set");
    return ListKxChangesetsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxChangesets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxChangesets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxChangesets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxChangesetsOutcome>(
      [&]() -> ListKxChangesetsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxChangesets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/changesets");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxChangesetsOutcome(ListKxChangesetsResult(result.GetResultWithOwnership()))
                                  : ListKxChangesetsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxClusterNodesOutcome FinspaceClient::ListKxClusterNodes(const ListKxClusterNodesRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxClusterNodes", "Required field: EnvironmentId, is not set");
    return ListKxClusterNodesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxClusterNodes", "Required field: ClusterName, is not set");
    return ListKxClusterNodesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxClusterNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxClusterNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxClusterNodes",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxClusterNodesOutcome>(
      [&]() -> ListKxClusterNodesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxClusterNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxClusterNodesOutcome(ListKxClusterNodesResult(result.GetResultWithOwnership()))
                                  : ListKxClusterNodesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxClustersOutcome FinspaceClient::ListKxClusters(const ListKxClustersRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxClusters", "Required field: EnvironmentId, is not set");
    return ListKxClustersOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxClusters",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxClustersOutcome>(
      [&]() -> ListKxClustersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxClustersOutcome(ListKxClustersResult(result.GetResultWithOwnership()))
                                  : ListKxClustersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxDatabasesOutcome FinspaceClient::ListKxDatabases(const ListKxDatabasesRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxDatabases", "Required field: EnvironmentId, is not set");
    return ListKxDatabasesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxDatabases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxDatabasesOutcome>(
      [&]() -> ListKxDatabasesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxDatabasesOutcome(ListKxDatabasesResult(result.GetResultWithOwnership()))
                                  : ListKxDatabasesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxDataviewsOutcome FinspaceClient::ListKxDataviews(const ListKxDataviewsRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxDataviews", "Required field: EnvironmentId, is not set");
    return ListKxDataviewsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxDataviews", "Required field: DatabaseName, is not set");
    return ListKxDataviewsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxDataviews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxDataviews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxDataviews",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxDataviewsOutcome>(
      [&]() -> ListKxDataviewsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxDataviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxDataviewsOutcome(ListKxDataviewsResult(result.GetResultWithOwnership()))
                                  : ListKxDataviewsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxEnvironmentsOutcome FinspaceClient::ListKxEnvironments(const ListKxEnvironmentsRequest& request) const {
  AWS_OPERATION_GUARD(ListKxEnvironments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxEnvironments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxEnvironmentsOutcome>(
      [&]() -> ListKxEnvironmentsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxEnvironmentsOutcome(ListKxEnvironmentsResult(result.GetResultWithOwnership()))
                                  : ListKxEnvironmentsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxScalingGroupsOutcome FinspaceClient::ListKxScalingGroups(const ListKxScalingGroupsRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxScalingGroups", "Required field: EnvironmentId, is not set");
    return ListKxScalingGroupsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxScalingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxScalingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxScalingGroups",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxScalingGroupsOutcome>(
      [&]() -> ListKxScalingGroupsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxScalingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxScalingGroupsOutcome(ListKxScalingGroupsResult(result.GetResultWithOwnership()))
                                  : ListKxScalingGroupsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxUsersOutcome FinspaceClient::ListKxUsers(const ListKxUsersRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxUsers", "Required field: EnvironmentId, is not set");
    return ListKxUsersOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxUsers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxUsersOutcome>(
      [&]() -> ListKxUsersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxUsersOutcome(ListKxUsersResult(result.GetResultWithOwnership()))
                                  : ListKxUsersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxVolumesOutcome FinspaceClient::ListKxVolumes(const ListKxVolumesRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxVolumes", "Required field: EnvironmentId, is not set");
    return ListKxVolumesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKxVolumes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxVolumes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxVolumes",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxVolumesOutcome>(
      [&]() -> ListKxVolumesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKxVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKxVolumesOutcome(ListKxVolumesResult(result.GetResultWithOwnership()))
                                  : ListKxVolumesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome FinspaceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTagsForResourceOutcome(ListTagsForResourceResult(result.GetResultWithOwnership()))
                                  : ListTagsForResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome FinspaceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? TagResourceOutcome(TagResourceResult(result.GetResultWithOwnership()))
                                  : TagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome FinspaceClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UntagResourceOutcome(UntagResourceResult(result.GetResultWithOwnership()))
                                  : UntagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxClusterCodeConfigurationOutcome FinspaceClient::UpdateKxClusterCodeConfiguration(
    const UpdateKxClusterCodeConfigurationRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterCodeConfiguration", "Required field: EnvironmentId, is not set");
    return UpdateKxClusterCodeConfigurationOutcome(Aws::Client::AWSError<FinspaceErrors>(
        FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterCodeConfiguration", "Required field: ClusterName, is not set");
    return UpdateKxClusterCodeConfigurationOutcome(Aws::Client::AWSError<FinspaceErrors>(
        FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxClusterCodeConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxClusterCodeConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxClusterCodeConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxClusterCodeConfigurationOutcome>(
      [&]() -> UpdateKxClusterCodeConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxClusterCodeConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/code");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess()
                   ? UpdateKxClusterCodeConfigurationOutcome(UpdateKxClusterCodeConfigurationResult(result.GetResultWithOwnership()))
                   : UpdateKxClusterCodeConfigurationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxClusterDatabasesOutcome FinspaceClient::UpdateKxClusterDatabases(const UpdateKxClusterDatabasesRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterDatabases", "Required field: EnvironmentId, is not set");
    return UpdateKxClusterDatabasesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterDatabases", "Required field: ClusterName, is not set");
    return UpdateKxClusterDatabasesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxClusterDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxClusterDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxClusterDatabases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxClusterDatabasesOutcome>(
      [&]() -> UpdateKxClusterDatabasesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxClusterDatabases, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/databases");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKxClusterDatabasesOutcome(UpdateKxClusterDatabasesResult(result.GetResultWithOwnership()))
                                  : UpdateKxClusterDatabasesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxDatabaseOutcome FinspaceClient::UpdateKxDatabase(const UpdateKxDatabaseRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxDatabase", "Required field: EnvironmentId, is not set");
    return UpdateKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxDatabase", "Required field: DatabaseName, is not set");
    return UpdateKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxDatabase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxDatabaseOutcome>(
      [&]() -> UpdateKxDatabaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKxDatabaseOutcome(UpdateKxDatabaseResult(result.GetResultWithOwnership()))
                                  : UpdateKxDatabaseOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxDataviewOutcome FinspaceClient::UpdateKxDataview(const UpdateKxDataviewRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxDataview", "Required field: EnvironmentId, is not set");
    return UpdateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxDataview", "Required field: DatabaseName, is not set");
    return UpdateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatabaseName]", false));
  }
  if (!request.DataviewNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxDataview", "Required field: DataviewName, is not set");
    return UpdateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DataviewName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxDataview",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxDataviewOutcome>(
      [&]() -> UpdateKxDataviewOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataviewName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKxDataviewOutcome(UpdateKxDataviewResult(result.GetResultWithOwnership()))
                                  : UpdateKxDataviewOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxEnvironmentOutcome FinspaceClient::UpdateKxEnvironment(const UpdateKxEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxEnvironmentOutcome>(
      [&]() -> UpdateKxEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKxEnvironmentOutcome(UpdateKxEnvironmentResult(result.GetResultWithOwnership()))
                                  : UpdateKxEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxEnvironmentNetworkOutcome FinspaceClient::UpdateKxEnvironmentNetwork(const UpdateKxEnvironmentNetworkRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxEnvironmentNetwork", "Required field: EnvironmentId, is not set");
    return UpdateKxEnvironmentNetworkOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxEnvironmentNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxEnvironmentNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxEnvironmentNetwork",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxEnvironmentNetworkOutcome>(
      [&]() -> UpdateKxEnvironmentNetworkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxEnvironmentNetwork, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/network");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKxEnvironmentNetworkOutcome(UpdateKxEnvironmentNetworkResult(result.GetResultWithOwnership()))
                                  : UpdateKxEnvironmentNetworkOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxUserOutcome FinspaceClient::UpdateKxUser(const UpdateKxUserRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxUser", "Required field: EnvironmentId, is not set");
    return UpdateKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [EnvironmentId]", false));
  }
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxUser", "Required field: UserName, is not set");
    return UpdateKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UserName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxUserOutcome>(
      [&]() -> UpdateKxUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKxUserOutcome(UpdateKxUserResult(result.GetResultWithOwnership()))
                                  : UpdateKxUserOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxVolumeOutcome FinspaceClient::UpdateKxVolume(const UpdateKxVolumeRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxVolume", "Required field: EnvironmentId, is not set");
    return UpdateKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }
  if (!request.VolumeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxVolume", "Required field: VolumeName, is not set");
    return UpdateKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [VolumeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxVolume",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxVolumeOutcome>(
      [&]() -> UpdateKxVolumeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVolumeName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKxVolumeOutcome(UpdateKxVolumeResult(result.GetResultWithOwnership()))
                                  : UpdateKxVolumeOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
