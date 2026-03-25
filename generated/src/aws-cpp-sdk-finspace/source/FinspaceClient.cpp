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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changesets");
  };

  return CreateKxChangesetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKxClusterOutcome FinspaceClient::CreateKxCluster(const CreateKxClusterRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxCluster", "Required field: EnvironmentId, is not set");
    return CreateKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters");
  };

  return CreateKxClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKxDatabaseOutcome FinspaceClient::CreateKxDatabase(const CreateKxDatabaseRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxDatabase", "Required field: EnvironmentId, is not set");
    return CreateKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases");
  };

  return CreateKxDatabaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews");
  };

  return CreateKxDataviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKxEnvironmentOutcome FinspaceClient::CreateKxEnvironment(const CreateKxEnvironmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments");
  };

  return CreateKxEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKxScalingGroupOutcome FinspaceClient::CreateKxScalingGroup(const CreateKxScalingGroupRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxScalingGroup", "Required field: EnvironmentId, is not set");
    return CreateKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups");
  };

  return CreateKxScalingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKxUserOutcome FinspaceClient::CreateKxUser(const CreateKxUserRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxUser", "Required field: EnvironmentId, is not set");
    return CreateKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return CreateKxUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKxVolumeOutcome FinspaceClient::CreateKxVolume(const CreateKxVolumeRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateKxVolume", "Required field: EnvironmentId, is not set");
    return CreateKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes");
  };

  return CreateKxVolumeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
  };

  return DeleteKxClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  return DeleteKxClusterNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
  };

  return DeleteKxDatabaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataviewName());
  };

  return DeleteKxDataviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteKxEnvironmentOutcome FinspaceClient::DeleteKxEnvironment(const DeleteKxEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKxEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  return DeleteKxEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScalingGroupName());
  };

  return DeleteKxScalingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  };

  return DeleteKxUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVolumeName());
  };

  return DeleteKxVolumeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changesets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChangesetId());
  };

  return GetKxChangesetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
  };

  return GetKxClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectionString");
  };

  return GetKxConnectionStringOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
  };

  return GetKxDatabaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataviewName());
  };

  return GetKxDataviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetKxEnvironmentOutcome FinspaceClient::GetKxEnvironment(const GetKxEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKxEnvironment", "Required field: EnvironmentId, is not set");
    return GetKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  return GetKxEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScalingGroupName());
  };

  return GetKxScalingGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  };

  return GetKxUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVolumeName());
  };

  return GetKxVolumeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changesets");
  };

  return ListKxChangesetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  return ListKxClusterNodesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKxClustersOutcome FinspaceClient::ListKxClusters(const ListKxClustersRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxClusters", "Required field: EnvironmentId, is not set");
    return ListKxClustersOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters");
  };

  return ListKxClustersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKxDatabasesOutcome FinspaceClient::ListKxDatabases(const ListKxDatabasesRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxDatabases", "Required field: EnvironmentId, is not set");
    return ListKxDatabasesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases");
  };

  return ListKxDatabasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews");
  };

  return ListKxDataviewsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKxEnvironmentsOutcome FinspaceClient::ListKxEnvironments(const ListKxEnvironmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments");
  };

  return ListKxEnvironmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKxScalingGroupsOutcome FinspaceClient::ListKxScalingGroups(const ListKxScalingGroupsRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxScalingGroups", "Required field: EnvironmentId, is not set");
    return ListKxScalingGroupsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scalingGroups");
  };

  return ListKxScalingGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKxUsersOutcome FinspaceClient::ListKxUsers(const ListKxUsersRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxUsers", "Required field: EnvironmentId, is not set");
    return ListKxUsersOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return ListKxUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKxVolumesOutcome FinspaceClient::ListKxVolumes(const ListKxVolumesRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKxVolumes", "Required field: EnvironmentId, is not set");
    return ListKxVolumesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes");
  };

  return ListKxVolumesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome FinspaceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome FinspaceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/code");
  };

  return UpdateKxClusterCodeConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/databases");
  };

  return UpdateKxClusterDatabasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
  };

  return UpdateKxDatabaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/databases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatabaseName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataviewName());
  };

  return UpdateKxDataviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateKxEnvironmentOutcome FinspaceClient::UpdateKxEnvironment(const UpdateKxEnvironmentRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
  };

  return UpdateKxEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateKxEnvironmentNetworkOutcome FinspaceClient::UpdateKxEnvironmentNetwork(const UpdateKxEnvironmentNetworkRequest& request) const {
  if (!request.EnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKxEnvironmentNetwork", "Required field: EnvironmentId, is not set");
    return UpdateKxEnvironmentNetworkOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EnvironmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/network");
  };

  return UpdateKxEnvironmentNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  };

  return UpdateKxUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/kx/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kxvolumes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVolumeName());
  };

  return UpdateKxVolumeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
