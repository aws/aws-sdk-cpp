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
#include <aws/fsx/FSxClient.h>
#include <aws/fsx/FSxEndpointProvider.h>
#include <aws/fsx/FSxErrorMarshaller.h>
#include <aws/fsx/model/AssociateFileSystemAliasesRequest.h>
#include <aws/fsx/model/CancelDataRepositoryTaskRequest.h>
#include <aws/fsx/model/CopyBackupRequest.h>
#include <aws/fsx/model/CopySnapshotAndUpdateVolumeRequest.h>
#include <aws/fsx/model/CreateAndAttachS3AccessPointRequest.h>
#include <aws/fsx/model/CreateBackupRequest.h>
#include <aws/fsx/model/CreateDataRepositoryAssociationRequest.h>
#include <aws/fsx/model/CreateDataRepositoryTaskRequest.h>
#include <aws/fsx/model/CreateFileCacheRequest.h>
#include <aws/fsx/model/CreateFileSystemFromBackupRequest.h>
#include <aws/fsx/model/CreateFileSystemRequest.h>
#include <aws/fsx/model/CreateSnapshotRequest.h>
#include <aws/fsx/model/CreateStorageVirtualMachineRequest.h>
#include <aws/fsx/model/CreateVolumeFromBackupRequest.h>
#include <aws/fsx/model/CreateVolumeRequest.h>
#include <aws/fsx/model/DeleteBackupRequest.h>
#include <aws/fsx/model/DeleteDataRepositoryAssociationRequest.h>
#include <aws/fsx/model/DeleteFileCacheRequest.h>
#include <aws/fsx/model/DeleteFileSystemRequest.h>
#include <aws/fsx/model/DeleteSnapshotRequest.h>
#include <aws/fsx/model/DeleteStorageVirtualMachineRequest.h>
#include <aws/fsx/model/DeleteVolumeRequest.h>
#include <aws/fsx/model/DescribeBackupsRequest.h>
#include <aws/fsx/model/DescribeDataRepositoryAssociationsRequest.h>
#include <aws/fsx/model/DescribeDataRepositoryTasksRequest.h>
#include <aws/fsx/model/DescribeFileCachesRequest.h>
#include <aws/fsx/model/DescribeFileSystemAliasesRequest.h>
#include <aws/fsx/model/DescribeFileSystemsRequest.h>
#include <aws/fsx/model/DescribeS3AccessPointAttachmentsRequest.h>
#include <aws/fsx/model/DescribeSharedVpcConfigurationRequest.h>
#include <aws/fsx/model/DescribeSnapshotsRequest.h>
#include <aws/fsx/model/DescribeStorageVirtualMachinesRequest.h>
#include <aws/fsx/model/DescribeVolumesRequest.h>
#include <aws/fsx/model/DetachAndDeleteS3AccessPointRequest.h>
#include <aws/fsx/model/DisassociateFileSystemAliasesRequest.h>
#include <aws/fsx/model/ListTagsForResourceRequest.h>
#include <aws/fsx/model/ReleaseFileSystemNfsV3LocksRequest.h>
#include <aws/fsx/model/RestoreVolumeFromSnapshotRequest.h>
#include <aws/fsx/model/StartMisconfiguredStateRecoveryRequest.h>
#include <aws/fsx/model/TagResourceRequest.h>
#include <aws/fsx/model/UntagResourceRequest.h>
#include <aws/fsx/model/UpdateDataRepositoryAssociationRequest.h>
#include <aws/fsx/model/UpdateFileCacheRequest.h>
#include <aws/fsx/model/UpdateFileSystemRequest.h>
#include <aws/fsx/model/UpdateSharedVpcConfigurationRequest.h>
#include <aws/fsx/model/UpdateSnapshotRequest.h>
#include <aws/fsx/model/UpdateStorageVirtualMachineRequest.h>
#include <aws/fsx/model/UpdateVolumeRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FSx;
using namespace Aws::FSx::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace FSx {
const char SERVICE_NAME[] = "fsx";
const char ALLOCATION_TAG[] = "FSxClient";
}  // namespace FSx
}  // namespace Aws
const char* FSxClient::GetServiceName() { return SERVICE_NAME; }
const char* FSxClient::GetAllocationTag() { return ALLOCATION_TAG; }

FSxClient::FSxClient(const FSx::FSxClientConfiguration& clientConfiguration, std::shared_ptr<FSxEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const AWSCredentials& credentials, std::shared_ptr<FSxEndpointProviderBase> endpointProvider,
                     const FSx::FSxClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<FSxEndpointProviderBase> endpointProvider, const FSx::FSxClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
FSxClient::FSxClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
FSxClient::~FSxClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<FSxEndpointProviderBase>& FSxClient::accessEndpointProvider() { return m_endpointProvider; }

void FSxClient::init(const FSx::FSxClientConfiguration& config) {
  AWSClient::SetServiceClientName("FSx");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "fsx");
}

void FSxClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
FSxClient::InvokeOperationOutcome FSxClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateFileSystemAliasesOutcome FSxClient::AssociateFileSystemAliases(const AssociateFileSystemAliasesRequest& request) const {
  return AssociateFileSystemAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelDataRepositoryTaskOutcome FSxClient::CancelDataRepositoryTask(const CancelDataRepositoryTaskRequest& request) const {
  return CancelDataRepositoryTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyBackupOutcome FSxClient::CopyBackup(const CopyBackupRequest& request) const {
  return CopyBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopySnapshotAndUpdateVolumeOutcome FSxClient::CopySnapshotAndUpdateVolume(const CopySnapshotAndUpdateVolumeRequest& request) const {
  return CopySnapshotAndUpdateVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAndAttachS3AccessPointOutcome FSxClient::CreateAndAttachS3AccessPoint(const CreateAndAttachS3AccessPointRequest& request) const {
  return CreateAndAttachS3AccessPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBackupOutcome FSxClient::CreateBackup(const CreateBackupRequest& request) const {
  return CreateBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataRepositoryAssociationOutcome FSxClient::CreateDataRepositoryAssociation(
    const CreateDataRepositoryAssociationRequest& request) const {
  return CreateDataRepositoryAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataRepositoryTaskOutcome FSxClient::CreateDataRepositoryTask(const CreateDataRepositoryTaskRequest& request) const {
  return CreateDataRepositoryTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFileCacheOutcome FSxClient::CreateFileCache(const CreateFileCacheRequest& request) const {
  return CreateFileCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFileSystemOutcome FSxClient::CreateFileSystem(const CreateFileSystemRequest& request) const {
  return CreateFileSystemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFileSystemFromBackupOutcome FSxClient::CreateFileSystemFromBackup(const CreateFileSystemFromBackupRequest& request) const {
  return CreateFileSystemFromBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotOutcome FSxClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  return CreateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStorageVirtualMachineOutcome FSxClient::CreateStorageVirtualMachine(const CreateStorageVirtualMachineRequest& request) const {
  return CreateStorageVirtualMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVolumeOutcome FSxClient::CreateVolume(const CreateVolumeRequest& request) const {
  return CreateVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVolumeFromBackupOutcome FSxClient::CreateVolumeFromBackup(const CreateVolumeFromBackupRequest& request) const {
  return CreateVolumeFromBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBackupOutcome FSxClient::DeleteBackup(const DeleteBackupRequest& request) const {
  return DeleteBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataRepositoryAssociationOutcome FSxClient::DeleteDataRepositoryAssociation(
    const DeleteDataRepositoryAssociationRequest& request) const {
  return DeleteDataRepositoryAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFileCacheOutcome FSxClient::DeleteFileCache(const DeleteFileCacheRequest& request) const {
  return DeleteFileCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFileSystemOutcome FSxClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const {
  return DeleteFileSystemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSnapshotOutcome FSxClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  return DeleteSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStorageVirtualMachineOutcome FSxClient::DeleteStorageVirtualMachine(const DeleteStorageVirtualMachineRequest& request) const {
  return DeleteStorageVirtualMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVolumeOutcome FSxClient::DeleteVolume(const DeleteVolumeRequest& request) const {
  return DeleteVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBackupsOutcome FSxClient::DescribeBackups(const DescribeBackupsRequest& request) const {
  return DescribeBackupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataRepositoryAssociationsOutcome FSxClient::DescribeDataRepositoryAssociations(
    const DescribeDataRepositoryAssociationsRequest& request) const {
  return DescribeDataRepositoryAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataRepositoryTasksOutcome FSxClient::DescribeDataRepositoryTasks(const DescribeDataRepositoryTasksRequest& request) const {
  return DescribeDataRepositoryTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFileCachesOutcome FSxClient::DescribeFileCaches(const DescribeFileCachesRequest& request) const {
  return DescribeFileCachesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFileSystemAliasesOutcome FSxClient::DescribeFileSystemAliases(const DescribeFileSystemAliasesRequest& request) const {
  return DescribeFileSystemAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFileSystemsOutcome FSxClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const {
  return DescribeFileSystemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeS3AccessPointAttachmentsOutcome FSxClient::DescribeS3AccessPointAttachments(
    const DescribeS3AccessPointAttachmentsRequest& request) const {
  return DescribeS3AccessPointAttachmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSharedVpcConfigurationOutcome FSxClient::DescribeSharedVpcConfiguration(
    const DescribeSharedVpcConfigurationRequest& request) const {
  return DescribeSharedVpcConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotsOutcome FSxClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  return DescribeSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStorageVirtualMachinesOutcome FSxClient::DescribeStorageVirtualMachines(
    const DescribeStorageVirtualMachinesRequest& request) const {
  return DescribeStorageVirtualMachinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVolumesOutcome FSxClient::DescribeVolumes(const DescribeVolumesRequest& request) const {
  return DescribeVolumesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachAndDeleteS3AccessPointOutcome FSxClient::DetachAndDeleteS3AccessPoint(const DetachAndDeleteS3AccessPointRequest& request) const {
  return DetachAndDeleteS3AccessPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFileSystemAliasesOutcome FSxClient::DisassociateFileSystemAliases(const DisassociateFileSystemAliasesRequest& request) const {
  return DisassociateFileSystemAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome FSxClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReleaseFileSystemNfsV3LocksOutcome FSxClient::ReleaseFileSystemNfsV3Locks(const ReleaseFileSystemNfsV3LocksRequest& request) const {
  return ReleaseFileSystemNfsV3LocksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreVolumeFromSnapshotOutcome FSxClient::RestoreVolumeFromSnapshot(const RestoreVolumeFromSnapshotRequest& request) const {
  return RestoreVolumeFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMisconfiguredStateRecoveryOutcome FSxClient::StartMisconfiguredStateRecovery(
    const StartMisconfiguredStateRecoveryRequest& request) const {
  return StartMisconfiguredStateRecoveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome FSxClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome FSxClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDataRepositoryAssociationOutcome FSxClient::UpdateDataRepositoryAssociation(
    const UpdateDataRepositoryAssociationRequest& request) const {
  return UpdateDataRepositoryAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFileCacheOutcome FSxClient::UpdateFileCache(const UpdateFileCacheRequest& request) const {
  return UpdateFileCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFileSystemOutcome FSxClient::UpdateFileSystem(const UpdateFileSystemRequest& request) const {
  return UpdateFileSystemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSharedVpcConfigurationOutcome FSxClient::UpdateSharedVpcConfiguration(const UpdateSharedVpcConfigurationRequest& request) const {
  return UpdateSharedVpcConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSnapshotOutcome FSxClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const {
  return UpdateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStorageVirtualMachineOutcome FSxClient::UpdateStorageVirtualMachine(const UpdateStorageVirtualMachineRequest& request) const {
  return UpdateStorageVirtualMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVolumeOutcome FSxClient::UpdateVolume(const UpdateVolumeRequest& request) const {
  return UpdateVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
