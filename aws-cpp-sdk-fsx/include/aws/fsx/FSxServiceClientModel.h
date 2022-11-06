/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/fsx/FSxErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/fsx/FSxEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FSxClient header */
#include <aws/fsx/model/AssociateFileSystemAliasesResult.h>
#include <aws/fsx/model/CancelDataRepositoryTaskResult.h>
#include <aws/fsx/model/CopyBackupResult.h>
#include <aws/fsx/model/CreateBackupResult.h>
#include <aws/fsx/model/CreateDataRepositoryAssociationResult.h>
#include <aws/fsx/model/CreateDataRepositoryTaskResult.h>
#include <aws/fsx/model/CreateFileCacheResult.h>
#include <aws/fsx/model/CreateFileSystemResult.h>
#include <aws/fsx/model/CreateFileSystemFromBackupResult.h>
#include <aws/fsx/model/CreateSnapshotResult.h>
#include <aws/fsx/model/CreateStorageVirtualMachineResult.h>
#include <aws/fsx/model/CreateVolumeResult.h>
#include <aws/fsx/model/CreateVolumeFromBackupResult.h>
#include <aws/fsx/model/DeleteBackupResult.h>
#include <aws/fsx/model/DeleteDataRepositoryAssociationResult.h>
#include <aws/fsx/model/DeleteFileCacheResult.h>
#include <aws/fsx/model/DeleteFileSystemResult.h>
#include <aws/fsx/model/DeleteSnapshotResult.h>
#include <aws/fsx/model/DeleteStorageVirtualMachineResult.h>
#include <aws/fsx/model/DeleteVolumeResult.h>
#include <aws/fsx/model/DescribeBackupsResult.h>
#include <aws/fsx/model/DescribeDataRepositoryAssociationsResult.h>
#include <aws/fsx/model/DescribeDataRepositoryTasksResult.h>
#include <aws/fsx/model/DescribeFileCachesResult.h>
#include <aws/fsx/model/DescribeFileSystemAliasesResult.h>
#include <aws/fsx/model/DescribeFileSystemsResult.h>
#include <aws/fsx/model/DescribeSnapshotsResult.h>
#include <aws/fsx/model/DescribeStorageVirtualMachinesResult.h>
#include <aws/fsx/model/DescribeVolumesResult.h>
#include <aws/fsx/model/DisassociateFileSystemAliasesResult.h>
#include <aws/fsx/model/ListTagsForResourceResult.h>
#include <aws/fsx/model/ReleaseFileSystemNfsV3LocksResult.h>
#include <aws/fsx/model/RestoreVolumeFromSnapshotResult.h>
#include <aws/fsx/model/TagResourceResult.h>
#include <aws/fsx/model/UntagResourceResult.h>
#include <aws/fsx/model/UpdateDataRepositoryAssociationResult.h>
#include <aws/fsx/model/UpdateFileCacheResult.h>
#include <aws/fsx/model/UpdateFileSystemResult.h>
#include <aws/fsx/model/UpdateSnapshotResult.h>
#include <aws/fsx/model/UpdateStorageVirtualMachineResult.h>
#include <aws/fsx/model/UpdateVolumeResult.h>
/* End of service model headers required in FSxClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace FSx
  {
    using FSxClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using FSxEndpointProviderBase = Aws::FSx::Endpoint::FSxEndpointProviderBase;
    using FSxEndpointProvider = Aws::FSx::Endpoint::FSxEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FSxClient header */
      class AssociateFileSystemAliasesRequest;
      class CancelDataRepositoryTaskRequest;
      class CopyBackupRequest;
      class CreateBackupRequest;
      class CreateDataRepositoryAssociationRequest;
      class CreateDataRepositoryTaskRequest;
      class CreateFileCacheRequest;
      class CreateFileSystemRequest;
      class CreateFileSystemFromBackupRequest;
      class CreateSnapshotRequest;
      class CreateStorageVirtualMachineRequest;
      class CreateVolumeRequest;
      class CreateVolumeFromBackupRequest;
      class DeleteBackupRequest;
      class DeleteDataRepositoryAssociationRequest;
      class DeleteFileCacheRequest;
      class DeleteFileSystemRequest;
      class DeleteSnapshotRequest;
      class DeleteStorageVirtualMachineRequest;
      class DeleteVolumeRequest;
      class DescribeBackupsRequest;
      class DescribeDataRepositoryAssociationsRequest;
      class DescribeDataRepositoryTasksRequest;
      class DescribeFileCachesRequest;
      class DescribeFileSystemAliasesRequest;
      class DescribeFileSystemsRequest;
      class DescribeSnapshotsRequest;
      class DescribeStorageVirtualMachinesRequest;
      class DescribeVolumesRequest;
      class DisassociateFileSystemAliasesRequest;
      class ListTagsForResourceRequest;
      class ReleaseFileSystemNfsV3LocksRequest;
      class RestoreVolumeFromSnapshotRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDataRepositoryAssociationRequest;
      class UpdateFileCacheRequest;
      class UpdateFileSystemRequest;
      class UpdateSnapshotRequest;
      class UpdateStorageVirtualMachineRequest;
      class UpdateVolumeRequest;
      /* End of service model forward declarations required in FSxClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateFileSystemAliasesResult, FSxError> AssociateFileSystemAliasesOutcome;
      typedef Aws::Utils::Outcome<CancelDataRepositoryTaskResult, FSxError> CancelDataRepositoryTaskOutcome;
      typedef Aws::Utils::Outcome<CopyBackupResult, FSxError> CopyBackupOutcome;
      typedef Aws::Utils::Outcome<CreateBackupResult, FSxError> CreateBackupOutcome;
      typedef Aws::Utils::Outcome<CreateDataRepositoryAssociationResult, FSxError> CreateDataRepositoryAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateDataRepositoryTaskResult, FSxError> CreateDataRepositoryTaskOutcome;
      typedef Aws::Utils::Outcome<CreateFileCacheResult, FSxError> CreateFileCacheOutcome;
      typedef Aws::Utils::Outcome<CreateFileSystemResult, FSxError> CreateFileSystemOutcome;
      typedef Aws::Utils::Outcome<CreateFileSystemFromBackupResult, FSxError> CreateFileSystemFromBackupOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResult, FSxError> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateStorageVirtualMachineResult, FSxError> CreateStorageVirtualMachineOutcome;
      typedef Aws::Utils::Outcome<CreateVolumeResult, FSxError> CreateVolumeOutcome;
      typedef Aws::Utils::Outcome<CreateVolumeFromBackupResult, FSxError> CreateVolumeFromBackupOutcome;
      typedef Aws::Utils::Outcome<DeleteBackupResult, FSxError> DeleteBackupOutcome;
      typedef Aws::Utils::Outcome<DeleteDataRepositoryAssociationResult, FSxError> DeleteDataRepositoryAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteFileCacheResult, FSxError> DeleteFileCacheOutcome;
      typedef Aws::Utils::Outcome<DeleteFileSystemResult, FSxError> DeleteFileSystemOutcome;
      typedef Aws::Utils::Outcome<DeleteSnapshotResult, FSxError> DeleteSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteStorageVirtualMachineResult, FSxError> DeleteStorageVirtualMachineOutcome;
      typedef Aws::Utils::Outcome<DeleteVolumeResult, FSxError> DeleteVolumeOutcome;
      typedef Aws::Utils::Outcome<DescribeBackupsResult, FSxError> DescribeBackupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDataRepositoryAssociationsResult, FSxError> DescribeDataRepositoryAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeDataRepositoryTasksResult, FSxError> DescribeDataRepositoryTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeFileCachesResult, FSxError> DescribeFileCachesOutcome;
      typedef Aws::Utils::Outcome<DescribeFileSystemAliasesResult, FSxError> DescribeFileSystemAliasesOutcome;
      typedef Aws::Utils::Outcome<DescribeFileSystemsResult, FSxError> DescribeFileSystemsOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotsResult, FSxError> DescribeSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeStorageVirtualMachinesResult, FSxError> DescribeStorageVirtualMachinesOutcome;
      typedef Aws::Utils::Outcome<DescribeVolumesResult, FSxError> DescribeVolumesOutcome;
      typedef Aws::Utils::Outcome<DisassociateFileSystemAliasesResult, FSxError> DisassociateFileSystemAliasesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, FSxError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ReleaseFileSystemNfsV3LocksResult, FSxError> ReleaseFileSystemNfsV3LocksOutcome;
      typedef Aws::Utils::Outcome<RestoreVolumeFromSnapshotResult, FSxError> RestoreVolumeFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, FSxError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, FSxError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDataRepositoryAssociationResult, FSxError> UpdateDataRepositoryAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateFileCacheResult, FSxError> UpdateFileCacheOutcome;
      typedef Aws::Utils::Outcome<UpdateFileSystemResult, FSxError> UpdateFileSystemOutcome;
      typedef Aws::Utils::Outcome<UpdateSnapshotResult, FSxError> UpdateSnapshotOutcome;
      typedef Aws::Utils::Outcome<UpdateStorageVirtualMachineResult, FSxError> UpdateStorageVirtualMachineOutcome;
      typedef Aws::Utils::Outcome<UpdateVolumeResult, FSxError> UpdateVolumeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateFileSystemAliasesOutcome> AssociateFileSystemAliasesOutcomeCallable;
      typedef std::future<CancelDataRepositoryTaskOutcome> CancelDataRepositoryTaskOutcomeCallable;
      typedef std::future<CopyBackupOutcome> CopyBackupOutcomeCallable;
      typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
      typedef std::future<CreateDataRepositoryAssociationOutcome> CreateDataRepositoryAssociationOutcomeCallable;
      typedef std::future<CreateDataRepositoryTaskOutcome> CreateDataRepositoryTaskOutcomeCallable;
      typedef std::future<CreateFileCacheOutcome> CreateFileCacheOutcomeCallable;
      typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
      typedef std::future<CreateFileSystemFromBackupOutcome> CreateFileSystemFromBackupOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateStorageVirtualMachineOutcome> CreateStorageVirtualMachineOutcomeCallable;
      typedef std::future<CreateVolumeOutcome> CreateVolumeOutcomeCallable;
      typedef std::future<CreateVolumeFromBackupOutcome> CreateVolumeFromBackupOutcomeCallable;
      typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
      typedef std::future<DeleteDataRepositoryAssociationOutcome> DeleteDataRepositoryAssociationOutcomeCallable;
      typedef std::future<DeleteFileCacheOutcome> DeleteFileCacheOutcomeCallable;
      typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
      typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
      typedef std::future<DeleteStorageVirtualMachineOutcome> DeleteStorageVirtualMachineOutcomeCallable;
      typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
      typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
      typedef std::future<DescribeDataRepositoryAssociationsOutcome> DescribeDataRepositoryAssociationsOutcomeCallable;
      typedef std::future<DescribeDataRepositoryTasksOutcome> DescribeDataRepositoryTasksOutcomeCallable;
      typedef std::future<DescribeFileCachesOutcome> DescribeFileCachesOutcomeCallable;
      typedef std::future<DescribeFileSystemAliasesOutcome> DescribeFileSystemAliasesOutcomeCallable;
      typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
      typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
      typedef std::future<DescribeStorageVirtualMachinesOutcome> DescribeStorageVirtualMachinesOutcomeCallable;
      typedef std::future<DescribeVolumesOutcome> DescribeVolumesOutcomeCallable;
      typedef std::future<DisassociateFileSystemAliasesOutcome> DisassociateFileSystemAliasesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ReleaseFileSystemNfsV3LocksOutcome> ReleaseFileSystemNfsV3LocksOutcomeCallable;
      typedef std::future<RestoreVolumeFromSnapshotOutcome> RestoreVolumeFromSnapshotOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDataRepositoryAssociationOutcome> UpdateDataRepositoryAssociationOutcomeCallable;
      typedef std::future<UpdateFileCacheOutcome> UpdateFileCacheOutcomeCallable;
      typedef std::future<UpdateFileSystemOutcome> UpdateFileSystemOutcomeCallable;
      typedef std::future<UpdateSnapshotOutcome> UpdateSnapshotOutcomeCallable;
      typedef std::future<UpdateStorageVirtualMachineOutcome> UpdateStorageVirtualMachineOutcomeCallable;
      typedef std::future<UpdateVolumeOutcome> UpdateVolumeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FSxClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FSxClient*, const Model::AssociateFileSystemAliasesRequest&, const Model::AssociateFileSystemAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFileSystemAliasesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CancelDataRepositoryTaskRequest&, const Model::CancelDataRepositoryTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDataRepositoryTaskResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CopyBackupRequest&, const Model::CopyBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateBackupRequest&, const Model::CreateBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateDataRepositoryAssociationRequest&, const Model::CreateDataRepositoryAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataRepositoryAssociationResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateDataRepositoryTaskRequest&, const Model::CreateDataRepositoryTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataRepositoryTaskResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateFileCacheRequest&, const Model::CreateFileCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileCacheResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateFileSystemRequest&, const Model::CreateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateFileSystemFromBackupRequest&, const Model::CreateFileSystemFromBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemFromBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateStorageVirtualMachineRequest&, const Model::CreateStorageVirtualMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorageVirtualMachineResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateVolumeRequest&, const Model::CreateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVolumeResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateVolumeFromBackupRequest&, const Model::CreateVolumeFromBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVolumeFromBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteDataRepositoryAssociationRequest&, const Model::DeleteDataRepositoryAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataRepositoryAssociationResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteFileCacheRequest&, const Model::DeleteFileCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileCacheResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteFileSystemRequest&, const Model::DeleteFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileSystemResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteStorageVirtualMachineRequest&, const Model::DeleteStorageVirtualMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStorageVirtualMachineResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteVolumeRequest&, const Model::DeleteVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVolumeResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeBackupsRequest&, const Model::DescribeBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeDataRepositoryAssociationsRequest&, const Model::DescribeDataRepositoryAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataRepositoryAssociationsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeDataRepositoryTasksRequest&, const Model::DescribeDataRepositoryTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataRepositoryTasksResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeFileCachesRequest&, const Model::DescribeFileCachesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileCachesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeFileSystemAliasesRequest&, const Model::DescribeFileSystemAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemAliasesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeFileSystemsRequest&, const Model::DescribeFileSystemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeStorageVirtualMachinesRequest&, const Model::DescribeStorageVirtualMachinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStorageVirtualMachinesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeVolumesRequest&, const Model::DescribeVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DisassociateFileSystemAliasesRequest&, const Model::DisassociateFileSystemAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFileSystemAliasesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::ReleaseFileSystemNfsV3LocksRequest&, const Model::ReleaseFileSystemNfsV3LocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseFileSystemNfsV3LocksResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::RestoreVolumeFromSnapshotRequest&, const Model::RestoreVolumeFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreVolumeFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateDataRepositoryAssociationRequest&, const Model::UpdateDataRepositoryAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataRepositoryAssociationResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateFileCacheRequest&, const Model::UpdateFileCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFileCacheResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateFileSystemRequest&, const Model::UpdateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFileSystemResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateSnapshotRequest&, const Model::UpdateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSnapshotResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateStorageVirtualMachineRequest&, const Model::UpdateStorageVirtualMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStorageVirtualMachineResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateVolumeRequest&, const Model::UpdateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVolumeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace FSx
} // namespace Aws
