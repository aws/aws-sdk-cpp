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
#include <aws/elasticfilesystem/EFSClient.h>
#include <aws/elasticfilesystem/EFSEndpointProvider.h>
#include <aws/elasticfilesystem/EFSErrorMarshaller.h>
#include <aws/elasticfilesystem/model/CreateAccessPointRequest.h>
#include <aws/elasticfilesystem/model/CreateFileSystemRequest.h>
#include <aws/elasticfilesystem/model/CreateMountTargetRequest.h>
#include <aws/elasticfilesystem/model/CreateReplicationConfigurationRequest.h>
#include <aws/elasticfilesystem/model/DeleteAccessPointRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemPolicyRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemRequest.h>
#include <aws/elasticfilesystem/model/DeleteMountTargetRequest.h>
#include <aws/elasticfilesystem/model/DeleteReplicationConfigurationRequest.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsRequest.h>
#include <aws/elasticfilesystem/model/DescribeAccountPreferencesRequest.h>
#include <aws/elasticfilesystem/model/DescribeBackupPolicyRequest.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemPolicyRequest.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsRequest.h>
#include <aws/elasticfilesystem/model/DescribeLifecycleConfigurationRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsRequest.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsRequest.h>
#include <aws/elasticfilesystem/model/ListTagsForResourceRequest.h>
#include <aws/elasticfilesystem/model/ModifyMountTargetSecurityGroupsRequest.h>
#include <aws/elasticfilesystem/model/PutAccountPreferencesRequest.h>
#include <aws/elasticfilesystem/model/PutBackupPolicyRequest.h>
#include <aws/elasticfilesystem/model/PutFileSystemPolicyRequest.h>
#include <aws/elasticfilesystem/model/PutLifecycleConfigurationRequest.h>
#include <aws/elasticfilesystem/model/TagResourceRequest.h>
#include <aws/elasticfilesystem/model/UntagResourceRequest.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemProtectionRequest.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EFS;
using namespace Aws::EFS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EFS {
const char SERVICE_NAME[] = "elasticfilesystem";
const char ALLOCATION_TAG[] = "EFSClient";
}  // namespace EFS
}  // namespace Aws
const char* EFSClient::GetServiceName() { return SERVICE_NAME; }
const char* EFSClient::GetAllocationTag() { return ALLOCATION_TAG; }

EFSClient::EFSClient(const EFS::EFSClientConfiguration& clientConfiguration, std::shared_ptr<EFSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const AWSCredentials& credentials, std::shared_ptr<EFSEndpointProviderBase> endpointProvider,
                     const EFS::EFSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EFSEndpointProviderBase> endpointProvider, const EFS::EFSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EFSClient::EFSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EFSClient::~EFSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EFSEndpointProviderBase>& EFSClient::accessEndpointProvider() { return m_endpointProvider; }

void EFSClient::init(const EFS::EFSClientConfiguration& config) {
  AWSClient::SetServiceClientName("EFS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "elasticfilesystem");
}

void EFSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EFSClient::InvokeOperationOutcome EFSClient::InvokeServiceOperation(
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

CreateAccessPointOutcome EFSClient::CreateAccessPoint(const CreateAccessPointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points");
  };

  return CreateAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFileSystemOutcome EFSClient::CreateFileSystem(const CreateFileSystemRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems");
  };

  return CreateFileSystemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMountTargetOutcome EFSClient::CreateMountTarget(const CreateMountTargetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets");
  };

  return CreateMountTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationConfigurationOutcome EFSClient::CreateReplicationConfiguration(
    const CreateReplicationConfigurationRequest& request) const {
  if (!request.SourceFileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateReplicationConfiguration", "Required field: SourceFileSystemId, is not set");
    return CreateReplicationConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [SourceFileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication-configuration");
  };

  return CreateReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessPointOutcome EFSClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const {
  if (!request.AccessPointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: AccessPointId, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccessPointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPointId());
  };

  return DeleteAccessPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFileSystemOutcome EFSClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFileSystem", "Required field: FileSystemId, is not set");
    return DeleteFileSystemOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  };

  return DeleteFileSystemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFileSystemPolicyOutcome EFSClient::DeleteFileSystemPolicy(const DeleteFileSystemPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFileSystemPolicy", "Required field: FileSystemId, is not set");
    return DeleteFileSystemPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return DeleteFileSystemPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMountTargetOutcome EFSClient::DeleteMountTarget(const DeleteMountTargetRequest& request) const {
  if (!request.MountTargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMountTarget", "Required field: MountTargetId, is not set");
    return DeleteMountTargetOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [MountTargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
  };

  return DeleteMountTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReplicationConfigurationOutcome EFSClient::DeleteReplicationConfiguration(
    const DeleteReplicationConfigurationRequest& request) const {
  if (!request.SourceFileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReplicationConfiguration", "Required field: SourceFileSystemId, is not set");
    return DeleteReplicationConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [SourceFileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication-configuration");
  };

  return DeleteReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAccessPointsOutcome EFSClient::DescribeAccessPoints(const DescribeAccessPointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points");
  };

  return DescribeAccessPointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAccountPreferencesOutcome EFSClient::DescribeAccountPreferences(const DescribeAccountPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/account-preferences");
  };

  return DescribeAccountPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeBackupPolicyOutcome EFSClient::DescribeBackupPolicy(const DescribeBackupPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBackupPolicy", "Required field: FileSystemId, is not set");
    return DescribeBackupPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-policy");
  };

  return DescribeBackupPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFileSystemPolicyOutcome EFSClient::DescribeFileSystemPolicy(const DescribeFileSystemPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFileSystemPolicy", "Required field: FileSystemId, is not set");
    return DescribeFileSystemPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return DescribeFileSystemPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFileSystemsOutcome EFSClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems");
  };

  return DescribeFileSystemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeLifecycleConfigurationOutcome EFSClient::DescribeLifecycleConfiguration(
    const DescribeLifecycleConfigurationRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeLifecycleConfiguration", "Required field: FileSystemId, is not set");
    return DescribeLifecycleConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycle-configuration");
  };

  return DescribeLifecycleConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeMountTargetSecurityGroupsOutcome EFSClient::DescribeMountTargetSecurityGroups(
    const DescribeMountTargetSecurityGroupsRequest& request) const {
  if (!request.MountTargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMountTargetSecurityGroups", "Required field: MountTargetId, is not set");
    return DescribeMountTargetSecurityGroupsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [MountTargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups");
  };

  return DescribeMountTargetSecurityGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeMountTargetsOutcome EFSClient::DescribeMountTargets(const DescribeMountTargetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets");
  };

  return DescribeMountTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeReplicationConfigurationsOutcome EFSClient::DescribeReplicationConfigurations(
    const DescribeReplicationConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/replication-configurations");
  };

  return DescribeReplicationConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome EFSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceId, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/resource-tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ModifyMountTargetSecurityGroupsOutcome EFSClient::ModifyMountTargetSecurityGroups(
    const ModifyMountTargetSecurityGroupsRequest& request) const {
  if (!request.MountTargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ModifyMountTargetSecurityGroups", "Required field: MountTargetId, is not set");
    return ModifyMountTargetSecurityGroupsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [MountTargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups");
  };

  return ModifyMountTargetSecurityGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutAccountPreferencesOutcome EFSClient::PutAccountPreferences(const PutAccountPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/account-preferences");
  };

  return PutAccountPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutBackupPolicyOutcome EFSClient::PutBackupPolicy(const PutBackupPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBackupPolicy", "Required field: FileSystemId, is not set");
    return PutBackupPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-policy");
  };

  return PutBackupPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutFileSystemPolicyOutcome EFSClient::PutFileSystemPolicy(const PutFileSystemPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFileSystemPolicy", "Required field: FileSystemId, is not set");
    return PutFileSystemPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return PutFileSystemPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutLifecycleConfigurationOutcome EFSClient::PutLifecycleConfiguration(const PutLifecycleConfigurationRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutLifecycleConfiguration", "Required field: FileSystemId, is not set");
    return PutLifecycleConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycle-configuration");
  };

  return PutLifecycleConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome EFSClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceId, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/resource-tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome EFSClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceId, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/resource-tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateFileSystemOutcome EFSClient::UpdateFileSystem(const UpdateFileSystemRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFileSystem", "Required field: FileSystemId, is not set");
    return UpdateFileSystemOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  };

  return UpdateFileSystemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFileSystemProtectionOutcome EFSClient::UpdateFileSystemProtection(const UpdateFileSystemProtectionRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFileSystemProtection", "Required field: FileSystemId, is not set");
    return UpdateFileSystemProtectionOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protection");
  };

  return UpdateFileSystemProtectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
