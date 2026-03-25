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
#include <aws/docdb-elastic/DocDBElasticClient.h>
#include <aws/docdb-elastic/DocDBElasticEndpointProvider.h>
#include <aws/docdb-elastic/DocDBElasticErrorMarshaller.h>
#include <aws/docdb-elastic/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/docdb-elastic/model/CopyClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/CreateClusterRequest.h>
#include <aws/docdb-elastic/model/CreateClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/DeleteClusterRequest.h>
#include <aws/docdb-elastic/model/DeleteClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/GetClusterRequest.h>
#include <aws/docdb-elastic/model/GetClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/GetPendingMaintenanceActionRequest.h>
#include <aws/docdb-elastic/model/ListClusterSnapshotsRequest.h>
#include <aws/docdb-elastic/model/ListClustersRequest.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsRequest.h>
#include <aws/docdb-elastic/model/ListTagsForResourceRequest.h>
#include <aws/docdb-elastic/model/RestoreClusterFromSnapshotRequest.h>
#include <aws/docdb-elastic/model/StartClusterRequest.h>
#include <aws/docdb-elastic/model/StopClusterRequest.h>
#include <aws/docdb-elastic/model/TagResourceRequest.h>
#include <aws/docdb-elastic/model/UntagResourceRequest.h>
#include <aws/docdb-elastic/model/UpdateClusterRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DocDBElastic;
using namespace Aws::DocDBElastic::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DocDBElastic {
const char SERVICE_NAME[] = "docdb-elastic";
const char ALLOCATION_TAG[] = "DocDBElasticClient";
}  // namespace DocDBElastic
}  // namespace Aws
const char* DocDBElasticClient::GetServiceName() { return SERVICE_NAME; }
const char* DocDBElasticClient::GetAllocationTag() { return ALLOCATION_TAG; }

DocDBElasticClient::DocDBElasticClient(const DocDBElastic::DocDBElasticClientConfiguration& clientConfiguration,
                                       std::shared_ptr<DocDBElasticEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBElasticErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBElasticClient::DocDBElasticClient(const AWSCredentials& credentials,
                                       std::shared_ptr<DocDBElasticEndpointProviderBase> endpointProvider,
                                       const DocDBElastic::DocDBElasticClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBElasticErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBElasticClient::DocDBElasticClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<DocDBElasticEndpointProviderBase> endpointProvider,
                                       const DocDBElastic::DocDBElasticClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBElasticErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DocDBElasticClient::DocDBElasticClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBElasticErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBElasticClient::DocDBElasticClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBElasticErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBElasticClient::DocDBElasticClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBElasticErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DocDBElasticEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DocDBElasticClient::~DocDBElasticClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DocDBElasticEndpointProviderBase>& DocDBElasticClient::accessEndpointProvider() { return m_endpointProvider; }

void DocDBElasticClient::init(const DocDBElastic::DocDBElasticClientConfiguration& config) {
  AWSClient::SetServiceClientName("DocDB Elastic");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "docdb-elastic");
}

void DocDBElasticClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DocDBElasticClient::InvokeOperationOutcome DocDBElasticClient::InvokeServiceOperation(
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

ApplyPendingMaintenanceActionOutcome DocDBElasticClient::ApplyPendingMaintenanceAction(
    const ApplyPendingMaintenanceActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pending-action");
  };

  return ApplyPendingMaintenanceActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyClusterSnapshotOutcome DocDBElasticClient::CopyClusterSnapshot(const CopyClusterSnapshotRequest& request) const {
  if (!request.SnapshotArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyClusterSnapshot", "Required field: SnapshotArn, is not set");
    return CopyClusterSnapshotOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SnapshotArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-snapshot/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/copy");
  };

  return CopyClusterSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome DocDBElasticClient::CreateCluster(const CreateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster");
  };

  return CreateClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterSnapshotOutcome DocDBElasticClient::CreateClusterSnapshot(const CreateClusterSnapshotRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-snapshot");
  };

  return CreateClusterSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome DocDBElasticClient::DeleteCluster(const DeleteClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: ClusterArn, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  return DeleteClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteClusterSnapshotOutcome DocDBElasticClient::DeleteClusterSnapshot(const DeleteClusterSnapshotRequest& request) const {
  if (!request.SnapshotArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteClusterSnapshot", "Required field: SnapshotArn, is not set");
    return DeleteClusterSnapshotOutcome(Aws::Client::AWSError<DocDBElasticErrors>(
        DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-snapshot/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotArn());
  };

  return DeleteClusterSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetClusterOutcome DocDBElasticClient::GetCluster(const GetClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCluster", "Required field: ClusterArn, is not set");
    return GetClusterOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  return GetClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetClusterSnapshotOutcome DocDBElasticClient::GetClusterSnapshot(const GetClusterSnapshotRequest& request) const {
  if (!request.SnapshotArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetClusterSnapshot", "Required field: SnapshotArn, is not set");
    return GetClusterSnapshotOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SnapshotArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-snapshot/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotArn());
  };

  return GetClusterSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPendingMaintenanceActionOutcome DocDBElasticClient::GetPendingMaintenanceAction(
    const GetPendingMaintenanceActionRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPendingMaintenanceAction", "Required field: ResourceArn, is not set");
    return GetPendingMaintenanceActionOutcome(Aws::Client::AWSError<DocDBElasticErrors>(
        DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pending-action/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return GetPendingMaintenanceActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClusterSnapshotsOutcome DocDBElasticClient::ListClusterSnapshots(const ListClusterSnapshotsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-snapshots");
  };

  return ListClusterSnapshotsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClustersOutcome DocDBElasticClient::ListClusters(const ListClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/clusters");
  };

  return ListClustersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPendingMaintenanceActionsOutcome DocDBElasticClient::ListPendingMaintenanceActions(
    const ListPendingMaintenanceActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pending-actions");
  };

  return ListPendingMaintenanceActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome DocDBElasticClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RestoreClusterFromSnapshotOutcome DocDBElasticClient::RestoreClusterFromSnapshot(const RestoreClusterFromSnapshotRequest& request) const {
  if (!request.SnapshotArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreClusterFromSnapshot", "Required field: SnapshotArn, is not set");
    return RestoreClusterFromSnapshotOutcome(Aws::Client::AWSError<DocDBElasticErrors>(
        DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster-snapshot/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore");
  };

  return RestoreClusterFromSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartClusterOutcome DocDBElasticClient::StartCluster(const StartClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCluster", "Required field: ClusterArn, is not set");
    return StartClusterOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopClusterOutcome DocDBElasticClient::StopCluster(const StopClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopCluster", "Required field: ClusterArn, is not set");
    return StopClusterOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome DocDBElasticClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome DocDBElasticClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateClusterOutcome DocDBElasticClient::UpdateCluster(const UpdateClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCluster", "Required field: ClusterArn, is not set");
    return UpdateClusterOutcome(Aws::Client::AWSError<DocDBElasticErrors>(DocDBElasticErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cluster/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  return UpdateClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
