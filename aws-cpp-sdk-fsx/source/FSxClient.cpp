/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/fsx/FSxClient.h>
#include <aws/fsx/FSxEndpoint.h>
#include <aws/fsx/FSxErrorMarshaller.h>
#include <aws/fsx/model/AssociateFileSystemAliasesRequest.h>
#include <aws/fsx/model/CancelDataRepositoryTaskRequest.h>
#include <aws/fsx/model/CopyBackupRequest.h>
#include <aws/fsx/model/CreateBackupRequest.h>
#include <aws/fsx/model/CreateDataRepositoryAssociationRequest.h>
#include <aws/fsx/model/CreateDataRepositoryTaskRequest.h>
#include <aws/fsx/model/CreateFileSystemRequest.h>
#include <aws/fsx/model/CreateFileSystemFromBackupRequest.h>
#include <aws/fsx/model/CreateSnapshotRequest.h>
#include <aws/fsx/model/CreateStorageVirtualMachineRequest.h>
#include <aws/fsx/model/CreateVolumeRequest.h>
#include <aws/fsx/model/CreateVolumeFromBackupRequest.h>
#include <aws/fsx/model/DeleteBackupRequest.h>
#include <aws/fsx/model/DeleteDataRepositoryAssociationRequest.h>
#include <aws/fsx/model/DeleteFileSystemRequest.h>
#include <aws/fsx/model/DeleteSnapshotRequest.h>
#include <aws/fsx/model/DeleteStorageVirtualMachineRequest.h>
#include <aws/fsx/model/DeleteVolumeRequest.h>
#include <aws/fsx/model/DescribeBackupsRequest.h>
#include <aws/fsx/model/DescribeDataRepositoryAssociationsRequest.h>
#include <aws/fsx/model/DescribeDataRepositoryTasksRequest.h>
#include <aws/fsx/model/DescribeFileSystemAliasesRequest.h>
#include <aws/fsx/model/DescribeFileSystemsRequest.h>
#include <aws/fsx/model/DescribeSnapshotsRequest.h>
#include <aws/fsx/model/DescribeStorageVirtualMachinesRequest.h>
#include <aws/fsx/model/DescribeVolumesRequest.h>
#include <aws/fsx/model/DisassociateFileSystemAliasesRequest.h>
#include <aws/fsx/model/ListTagsForResourceRequest.h>
#include <aws/fsx/model/ReleaseFileSystemNfsV3LocksRequest.h>
#include <aws/fsx/model/RestoreVolumeFromSnapshotRequest.h>
#include <aws/fsx/model/TagResourceRequest.h>
#include <aws/fsx/model/UntagResourceRequest.h>
#include <aws/fsx/model/UpdateDataRepositoryAssociationRequest.h>
#include <aws/fsx/model/UpdateFileSystemRequest.h>
#include <aws/fsx/model/UpdateSnapshotRequest.h>
#include <aws/fsx/model/UpdateStorageVirtualMachineRequest.h>
#include <aws/fsx/model/UpdateVolumeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FSx;
using namespace Aws::FSx::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "fsx";
static const char* ALLOCATION_TAG = "FSxClient";

FSxClient::FSxClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FSxClient::FSxClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FSxClient::FSxClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FSxClient::~FSxClient()
{
}

void FSxClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("FSx");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FSxEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FSxClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateFileSystemAliasesOutcome FSxClient::AssociateFileSystemAliases(const AssociateFileSystemAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateFileSystemAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFileSystemAliasesOutcomeCallable FSxClient::AssociateFileSystemAliasesCallable(const AssociateFileSystemAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFileSystemAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFileSystemAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientAssociateFileSystemAliasesAsyncHelper(FSxClient const * const clientThis, const AssociateFileSystemAliasesRequest& request, const AssociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateFileSystemAliases(request), context);
}

void FSxClient::AssociateFileSystemAliasesAsync(const AssociateFileSystemAliasesRequest& request, const AssociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientAssociateFileSystemAliasesAsyncHelper( this, request, handler, context ); } );
}

CancelDataRepositoryTaskOutcome FSxClient::CancelDataRepositoryTask(const CancelDataRepositoryTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelDataRepositoryTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelDataRepositoryTaskOutcomeCallable FSxClient::CancelDataRepositoryTaskCallable(const CancelDataRepositoryTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelDataRepositoryTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelDataRepositoryTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCancelDataRepositoryTaskAsyncHelper(FSxClient const * const clientThis, const CancelDataRepositoryTaskRequest& request, const CancelDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelDataRepositoryTask(request), context);
}

void FSxClient::CancelDataRepositoryTaskAsync(const CancelDataRepositoryTaskRequest& request, const CancelDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCancelDataRepositoryTaskAsyncHelper( this, request, handler, context ); } );
}

CopyBackupOutcome FSxClient::CopyBackup(const CopyBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyBackupOutcomeCallable FSxClient::CopyBackupCallable(const CopyBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCopyBackupAsyncHelper(FSxClient const * const clientThis, const CopyBackupRequest& request, const CopyBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyBackup(request), context);
}

void FSxClient::CopyBackupAsync(const CopyBackupRequest& request, const CopyBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCopyBackupAsyncHelper( this, request, handler, context ); } );
}

CreateBackupOutcome FSxClient::CreateBackup(const CreateBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupOutcomeCallable FSxClient::CreateBackupCallable(const CreateBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateBackupAsyncHelper(FSxClient const * const clientThis, const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBackup(request), context);
}

void FSxClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateBackupAsyncHelper( this, request, handler, context ); } );
}

CreateDataRepositoryAssociationOutcome FSxClient::CreateDataRepositoryAssociation(const CreateDataRepositoryAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataRepositoryAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataRepositoryAssociationOutcomeCallable FSxClient::CreateDataRepositoryAssociationCallable(const CreateDataRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateDataRepositoryAssociationAsyncHelper(FSxClient const * const clientThis, const CreateDataRepositoryAssociationRequest& request, const CreateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataRepositoryAssociation(request), context);
}

void FSxClient::CreateDataRepositoryAssociationAsync(const CreateDataRepositoryAssociationRequest& request, const CreateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateDataRepositoryAssociationAsyncHelper( this, request, handler, context ); } );
}

CreateDataRepositoryTaskOutcome FSxClient::CreateDataRepositoryTask(const CreateDataRepositoryTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataRepositoryTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataRepositoryTaskOutcomeCallable FSxClient::CreateDataRepositoryTaskCallable(const CreateDataRepositoryTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataRepositoryTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataRepositoryTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateDataRepositoryTaskAsyncHelper(FSxClient const * const clientThis, const CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataRepositoryTask(request), context);
}

void FSxClient::CreateDataRepositoryTaskAsync(const CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateDataRepositoryTaskAsyncHelper( this, request, handler, context ); } );
}

CreateFileSystemOutcome FSxClient::CreateFileSystem(const CreateFileSystemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFileSystemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFileSystemOutcomeCallable FSxClient::CreateFileSystemCallable(const CreateFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateFileSystemAsyncHelper(FSxClient const * const clientThis, const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFileSystem(request), context);
}

void FSxClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateFileSystemAsyncHelper( this, request, handler, context ); } );
}

CreateFileSystemFromBackupOutcome FSxClient::CreateFileSystemFromBackup(const CreateFileSystemFromBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFileSystemFromBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFileSystemFromBackupOutcomeCallable FSxClient::CreateFileSystemFromBackupCallable(const CreateFileSystemFromBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFileSystemFromBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFileSystemFromBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateFileSystemFromBackupAsyncHelper(FSxClient const * const clientThis, const CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFileSystemFromBackup(request), context);
}

void FSxClient::CreateFileSystemFromBackupAsync(const CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateFileSystemFromBackupAsyncHelper( this, request, handler, context ); } );
}

CreateSnapshotOutcome FSxClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable FSxClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateSnapshotAsyncHelper(FSxClient const * const clientThis, const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSnapshot(request), context);
}

void FSxClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateStorageVirtualMachineOutcome FSxClient::CreateStorageVirtualMachine(const CreateStorageVirtualMachineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStorageVirtualMachineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStorageVirtualMachineOutcomeCallable FSxClient::CreateStorageVirtualMachineCallable(const CreateStorageVirtualMachineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStorageVirtualMachineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStorageVirtualMachine(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateStorageVirtualMachineAsyncHelper(FSxClient const * const clientThis, const CreateStorageVirtualMachineRequest& request, const CreateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStorageVirtualMachine(request), context);
}

void FSxClient::CreateStorageVirtualMachineAsync(const CreateStorageVirtualMachineRequest& request, const CreateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateStorageVirtualMachineAsyncHelper( this, request, handler, context ); } );
}

CreateVolumeOutcome FSxClient::CreateVolume(const CreateVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVolumeOutcomeCallable FSxClient::CreateVolumeCallable(const CreateVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateVolumeAsyncHelper(FSxClient const * const clientThis, const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVolume(request), context);
}

void FSxClient::CreateVolumeAsync(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateVolumeAsyncHelper( this, request, handler, context ); } );
}

CreateVolumeFromBackupOutcome FSxClient::CreateVolumeFromBackup(const CreateVolumeFromBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVolumeFromBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVolumeFromBackupOutcomeCallable FSxClient::CreateVolumeFromBackupCallable(const CreateVolumeFromBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVolumeFromBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVolumeFromBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientCreateVolumeFromBackupAsyncHelper(FSxClient const * const clientThis, const CreateVolumeFromBackupRequest& request, const CreateVolumeFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVolumeFromBackup(request), context);
}

void FSxClient::CreateVolumeFromBackupAsync(const CreateVolumeFromBackupRequest& request, const CreateVolumeFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientCreateVolumeFromBackupAsyncHelper( this, request, handler, context ); } );
}

DeleteBackupOutcome FSxClient::DeleteBackup(const DeleteBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupOutcomeCallable FSxClient::DeleteBackupCallable(const DeleteBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDeleteBackupAsyncHelper(FSxClient const * const clientThis, const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBackup(request), context);
}

void FSxClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDeleteBackupAsyncHelper( this, request, handler, context ); } );
}

DeleteDataRepositoryAssociationOutcome FSxClient::DeleteDataRepositoryAssociation(const DeleteDataRepositoryAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDataRepositoryAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataRepositoryAssociationOutcomeCallable FSxClient::DeleteDataRepositoryAssociationCallable(const DeleteDataRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDeleteDataRepositoryAssociationAsyncHelper(FSxClient const * const clientThis, const DeleteDataRepositoryAssociationRequest& request, const DeleteDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataRepositoryAssociation(request), context);
}

void FSxClient::DeleteDataRepositoryAssociationAsync(const DeleteDataRepositoryAssociationRequest& request, const DeleteDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDeleteDataRepositoryAssociationAsyncHelper( this, request, handler, context ); } );
}

DeleteFileSystemOutcome FSxClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFileSystemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileSystemOutcomeCallable FSxClient::DeleteFileSystemCallable(const DeleteFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDeleteFileSystemAsyncHelper(FSxClient const * const clientThis, const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFileSystem(request), context);
}

void FSxClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDeleteFileSystemAsyncHelper( this, request, handler, context ); } );
}

DeleteSnapshotOutcome FSxClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSnapshotOutcomeCallable FSxClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDeleteSnapshotAsyncHelper(FSxClient const * const clientThis, const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSnapshot(request), context);
}

void FSxClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDeleteSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteStorageVirtualMachineOutcome FSxClient::DeleteStorageVirtualMachine(const DeleteStorageVirtualMachineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStorageVirtualMachineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStorageVirtualMachineOutcomeCallable FSxClient::DeleteStorageVirtualMachineCallable(const DeleteStorageVirtualMachineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStorageVirtualMachineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStorageVirtualMachine(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDeleteStorageVirtualMachineAsyncHelper(FSxClient const * const clientThis, const DeleteStorageVirtualMachineRequest& request, const DeleteStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStorageVirtualMachine(request), context);
}

void FSxClient::DeleteStorageVirtualMachineAsync(const DeleteStorageVirtualMachineRequest& request, const DeleteStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDeleteStorageVirtualMachineAsyncHelper( this, request, handler, context ); } );
}

DeleteVolumeOutcome FSxClient::DeleteVolume(const DeleteVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVolumeOutcomeCallable FSxClient::DeleteVolumeCallable(const DeleteVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDeleteVolumeAsyncHelper(FSxClient const * const clientThis, const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVolume(request), context);
}

void FSxClient::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDeleteVolumeAsyncHelper( this, request, handler, context ); } );
}

DescribeBackupsOutcome FSxClient::DescribeBackups(const DescribeBackupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeBackupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupsOutcomeCallable FSxClient::DescribeBackupsCallable(const DescribeBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeBackupsAsyncHelper(FSxClient const * const clientThis, const DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBackups(request), context);
}

void FSxClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeBackupsAsyncHelper( this, request, handler, context ); } );
}

DescribeDataRepositoryAssociationsOutcome FSxClient::DescribeDataRepositoryAssociations(const DescribeDataRepositoryAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataRepositoryAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataRepositoryAssociationsOutcomeCallable FSxClient::DescribeDataRepositoryAssociationsCallable(const DescribeDataRepositoryAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataRepositoryAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataRepositoryAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeDataRepositoryAssociationsAsyncHelper(FSxClient const * const clientThis, const DescribeDataRepositoryAssociationsRequest& request, const DescribeDataRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataRepositoryAssociations(request), context);
}

void FSxClient::DescribeDataRepositoryAssociationsAsync(const DescribeDataRepositoryAssociationsRequest& request, const DescribeDataRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeDataRepositoryAssociationsAsyncHelper( this, request, handler, context ); } );
}

DescribeDataRepositoryTasksOutcome FSxClient::DescribeDataRepositoryTasks(const DescribeDataRepositoryTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataRepositoryTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataRepositoryTasksOutcomeCallable FSxClient::DescribeDataRepositoryTasksCallable(const DescribeDataRepositoryTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataRepositoryTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataRepositoryTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeDataRepositoryTasksAsyncHelper(FSxClient const * const clientThis, const DescribeDataRepositoryTasksRequest& request, const DescribeDataRepositoryTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataRepositoryTasks(request), context);
}

void FSxClient::DescribeDataRepositoryTasksAsync(const DescribeDataRepositoryTasksRequest& request, const DescribeDataRepositoryTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeDataRepositoryTasksAsyncHelper( this, request, handler, context ); } );
}

DescribeFileSystemAliasesOutcome FSxClient::DescribeFileSystemAliases(const DescribeFileSystemAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFileSystemAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFileSystemAliasesOutcomeCallable FSxClient::DescribeFileSystemAliasesCallable(const DescribeFileSystemAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileSystemAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeFileSystemAliasesAsyncHelper(FSxClient const * const clientThis, const DescribeFileSystemAliasesRequest& request, const DescribeFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFileSystemAliases(request), context);
}

void FSxClient::DescribeFileSystemAliasesAsync(const DescribeFileSystemAliasesRequest& request, const DescribeFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeFileSystemAliasesAsyncHelper( this, request, handler, context ); } );
}

DescribeFileSystemsOutcome FSxClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFileSystemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFileSystemsOutcomeCallable FSxClient::DescribeFileSystemsCallable(const DescribeFileSystemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileSystems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeFileSystemsAsyncHelper(FSxClient const * const clientThis, const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFileSystems(request), context);
}

void FSxClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeFileSystemsAsyncHelper( this, request, handler, context ); } );
}

DescribeSnapshotsOutcome FSxClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSnapshotsOutcomeCallable FSxClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeSnapshotsAsyncHelper(FSxClient const * const clientThis, const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSnapshots(request), context);
}

void FSxClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeStorageVirtualMachinesOutcome FSxClient::DescribeStorageVirtualMachines(const DescribeStorageVirtualMachinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStorageVirtualMachinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStorageVirtualMachinesOutcomeCallable FSxClient::DescribeStorageVirtualMachinesCallable(const DescribeStorageVirtualMachinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStorageVirtualMachinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStorageVirtualMachines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeStorageVirtualMachinesAsyncHelper(FSxClient const * const clientThis, const DescribeStorageVirtualMachinesRequest& request, const DescribeStorageVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStorageVirtualMachines(request), context);
}

void FSxClient::DescribeStorageVirtualMachinesAsync(const DescribeStorageVirtualMachinesRequest& request, const DescribeStorageVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeStorageVirtualMachinesAsyncHelper( this, request, handler, context ); } );
}

DescribeVolumesOutcome FSxClient::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeVolumesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVolumesOutcomeCallable FSxClient::DescribeVolumesCallable(const DescribeVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDescribeVolumesAsyncHelper(FSxClient const * const clientThis, const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVolumes(request), context);
}

void FSxClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDescribeVolumesAsyncHelper( this, request, handler, context ); } );
}

DisassociateFileSystemAliasesOutcome FSxClient::DisassociateFileSystemAliases(const DisassociateFileSystemAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateFileSystemAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFileSystemAliasesOutcomeCallable FSxClient::DisassociateFileSystemAliasesCallable(const DisassociateFileSystemAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFileSystemAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFileSystemAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientDisassociateFileSystemAliasesAsyncHelper(FSxClient const * const clientThis, const DisassociateFileSystemAliasesRequest& request, const DisassociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateFileSystemAliases(request), context);
}

void FSxClient::DisassociateFileSystemAliasesAsync(const DisassociateFileSystemAliasesRequest& request, const DisassociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientDisassociateFileSystemAliasesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome FSxClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable FSxClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientListTagsForResourceAsyncHelper(FSxClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void FSxClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ReleaseFileSystemNfsV3LocksOutcome FSxClient::ReleaseFileSystemNfsV3Locks(const ReleaseFileSystemNfsV3LocksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ReleaseFileSystemNfsV3LocksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReleaseFileSystemNfsV3LocksOutcomeCallable FSxClient::ReleaseFileSystemNfsV3LocksCallable(const ReleaseFileSystemNfsV3LocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReleaseFileSystemNfsV3LocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReleaseFileSystemNfsV3Locks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientReleaseFileSystemNfsV3LocksAsyncHelper(FSxClient const * const clientThis, const ReleaseFileSystemNfsV3LocksRequest& request, const ReleaseFileSystemNfsV3LocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReleaseFileSystemNfsV3Locks(request), context);
}

void FSxClient::ReleaseFileSystemNfsV3LocksAsync(const ReleaseFileSystemNfsV3LocksRequest& request, const ReleaseFileSystemNfsV3LocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientReleaseFileSystemNfsV3LocksAsyncHelper( this, request, handler, context ); } );
}

RestoreVolumeFromSnapshotOutcome FSxClient::RestoreVolumeFromSnapshot(const RestoreVolumeFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreVolumeFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreVolumeFromSnapshotOutcomeCallable FSxClient::RestoreVolumeFromSnapshotCallable(const RestoreVolumeFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreVolumeFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreVolumeFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientRestoreVolumeFromSnapshotAsyncHelper(FSxClient const * const clientThis, const RestoreVolumeFromSnapshotRequest& request, const RestoreVolumeFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreVolumeFromSnapshot(request), context);
}

void FSxClient::RestoreVolumeFromSnapshotAsync(const RestoreVolumeFromSnapshotRequest& request, const RestoreVolumeFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientRestoreVolumeFromSnapshotAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome FSxClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable FSxClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientTagResourceAsyncHelper(FSxClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void FSxClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome FSxClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable FSxClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientUntagResourceAsyncHelper(FSxClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void FSxClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDataRepositoryAssociationOutcome FSxClient::UpdateDataRepositoryAssociation(const UpdateDataRepositoryAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDataRepositoryAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataRepositoryAssociationOutcomeCallable FSxClient::UpdateDataRepositoryAssociationCallable(const UpdateDataRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientUpdateDataRepositoryAssociationAsyncHelper(FSxClient const * const clientThis, const UpdateDataRepositoryAssociationRequest& request, const UpdateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataRepositoryAssociation(request), context);
}

void FSxClient::UpdateDataRepositoryAssociationAsync(const UpdateDataRepositoryAssociationRequest& request, const UpdateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientUpdateDataRepositoryAssociationAsyncHelper( this, request, handler, context ); } );
}

UpdateFileSystemOutcome FSxClient::UpdateFileSystem(const UpdateFileSystemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFileSystemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFileSystemOutcomeCallable FSxClient::UpdateFileSystemCallable(const UpdateFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientUpdateFileSystemAsyncHelper(FSxClient const * const clientThis, const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFileSystem(request), context);
}

void FSxClient::UpdateFileSystemAsync(const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientUpdateFileSystemAsyncHelper( this, request, handler, context ); } );
}

UpdateSnapshotOutcome FSxClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSnapshotOutcomeCallable FSxClient::UpdateSnapshotCallable(const UpdateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientUpdateSnapshotAsyncHelper(FSxClient const * const clientThis, const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSnapshot(request), context);
}

void FSxClient::UpdateSnapshotAsync(const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientUpdateSnapshotAsyncHelper( this, request, handler, context ); } );
}

UpdateStorageVirtualMachineOutcome FSxClient::UpdateStorageVirtualMachine(const UpdateStorageVirtualMachineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStorageVirtualMachineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStorageVirtualMachineOutcomeCallable FSxClient::UpdateStorageVirtualMachineCallable(const UpdateStorageVirtualMachineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStorageVirtualMachineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStorageVirtualMachine(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientUpdateStorageVirtualMachineAsyncHelper(FSxClient const * const clientThis, const UpdateStorageVirtualMachineRequest& request, const UpdateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStorageVirtualMachine(request), context);
}

void FSxClient::UpdateStorageVirtualMachineAsync(const UpdateStorageVirtualMachineRequest& request, const UpdateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientUpdateStorageVirtualMachineAsyncHelper( this, request, handler, context ); } );
}

UpdateVolumeOutcome FSxClient::UpdateVolume(const UpdateVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVolumeOutcomeCallable FSxClient::UpdateVolumeCallable(const UpdateVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClientUpdateVolumeAsyncHelper(FSxClient const * const clientThis, const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVolume(request), context);
}

void FSxClient::UpdateVolumeAsync(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FSxClientUpdateVolumeAsyncHelper( this, request, handler, context ); } );
}

