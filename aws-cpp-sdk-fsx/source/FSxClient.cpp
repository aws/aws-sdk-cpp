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
#include <aws/fsx/model/CreateDataRepositoryTaskRequest.h>
#include <aws/fsx/model/CreateFileSystemRequest.h>
#include <aws/fsx/model/CreateFileSystemFromBackupRequest.h>
#include <aws/fsx/model/CreateStorageVirtualMachineRequest.h>
#include <aws/fsx/model/CreateVolumeRequest.h>
#include <aws/fsx/model/CreateVolumeFromBackupRequest.h>
#include <aws/fsx/model/DeleteBackupRequest.h>
#include <aws/fsx/model/DeleteFileSystemRequest.h>
#include <aws/fsx/model/DeleteStorageVirtualMachineRequest.h>
#include <aws/fsx/model/DeleteVolumeRequest.h>
#include <aws/fsx/model/DescribeBackupsRequest.h>
#include <aws/fsx/model/DescribeDataRepositoryTasksRequest.h>
#include <aws/fsx/model/DescribeFileSystemAliasesRequest.h>
#include <aws/fsx/model/DescribeFileSystemsRequest.h>
#include <aws/fsx/model/DescribeStorageVirtualMachinesRequest.h>
#include <aws/fsx/model/DescribeVolumesRequest.h>
#include <aws/fsx/model/DisassociateFileSystemAliasesRequest.h>
#include <aws/fsx/model/ListTagsForResourceRequest.h>
#include <aws/fsx/model/TagResourceRequest.h>
#include <aws/fsx/model/UntagResourceRequest.h>
#include <aws/fsx/model/UpdateFileSystemRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FSxClient::FSxClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FSxClient::FSxClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("FSx");
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

void FSxClient::AssociateFileSystemAliasesAsync(const AssociateFileSystemAliasesRequest& request, const AssociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateFileSystemAliasesAsyncHelper( request, handler, context ); } );
}

void FSxClient::AssociateFileSystemAliasesAsyncHelper(const AssociateFileSystemAliasesRequest& request, const AssociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateFileSystemAliases(request), context);
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

void FSxClient::CancelDataRepositoryTaskAsync(const CancelDataRepositoryTaskRequest& request, const CancelDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelDataRepositoryTaskAsyncHelper( request, handler, context ); } );
}

void FSxClient::CancelDataRepositoryTaskAsyncHelper(const CancelDataRepositoryTaskRequest& request, const CancelDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelDataRepositoryTask(request), context);
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

void FSxClient::CopyBackupAsync(const CopyBackupRequest& request, const CopyBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyBackupAsyncHelper( request, handler, context ); } );
}

void FSxClient::CopyBackupAsyncHelper(const CopyBackupRequest& request, const CopyBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyBackup(request), context);
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

void FSxClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackupAsyncHelper( request, handler, context ); } );
}

void FSxClient::CreateBackupAsyncHelper(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackup(request), context);
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

void FSxClient::CreateDataRepositoryTaskAsync(const CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataRepositoryTaskAsyncHelper( request, handler, context ); } );
}

void FSxClient::CreateDataRepositoryTaskAsyncHelper(const CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataRepositoryTask(request), context);
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

void FSxClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFileSystemAsyncHelper( request, handler, context ); } );
}

void FSxClient::CreateFileSystemAsyncHelper(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFileSystem(request), context);
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

void FSxClient::CreateFileSystemFromBackupAsync(const CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFileSystemFromBackupAsyncHelper( request, handler, context ); } );
}

void FSxClient::CreateFileSystemFromBackupAsyncHelper(const CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFileSystemFromBackup(request), context);
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

void FSxClient::CreateStorageVirtualMachineAsync(const CreateStorageVirtualMachineRequest& request, const CreateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStorageVirtualMachineAsyncHelper( request, handler, context ); } );
}

void FSxClient::CreateStorageVirtualMachineAsyncHelper(const CreateStorageVirtualMachineRequest& request, const CreateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStorageVirtualMachine(request), context);
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

void FSxClient::CreateVolumeAsync(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVolumeAsyncHelper( request, handler, context ); } );
}

void FSxClient::CreateVolumeAsyncHelper(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVolume(request), context);
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

void FSxClient::CreateVolumeFromBackupAsync(const CreateVolumeFromBackupRequest& request, const CreateVolumeFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVolumeFromBackupAsyncHelper( request, handler, context ); } );
}

void FSxClient::CreateVolumeFromBackupAsyncHelper(const CreateVolumeFromBackupRequest& request, const CreateVolumeFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVolumeFromBackup(request), context);
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

void FSxClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupAsyncHelper( request, handler, context ); } );
}

void FSxClient::DeleteBackupAsyncHelper(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackup(request), context);
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

void FSxClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFileSystemAsyncHelper( request, handler, context ); } );
}

void FSxClient::DeleteFileSystemAsyncHelper(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFileSystem(request), context);
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

void FSxClient::DeleteStorageVirtualMachineAsync(const DeleteStorageVirtualMachineRequest& request, const DeleteStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStorageVirtualMachineAsyncHelper( request, handler, context ); } );
}

void FSxClient::DeleteStorageVirtualMachineAsyncHelper(const DeleteStorageVirtualMachineRequest& request, const DeleteStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStorageVirtualMachine(request), context);
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

void FSxClient::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVolumeAsyncHelper( request, handler, context ); } );
}

void FSxClient::DeleteVolumeAsyncHelper(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVolume(request), context);
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

void FSxClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBackupsAsyncHelper( request, handler, context ); } );
}

void FSxClient::DescribeBackupsAsyncHelper(const DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBackups(request), context);
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

void FSxClient::DescribeDataRepositoryTasksAsync(const DescribeDataRepositoryTasksRequest& request, const DescribeDataRepositoryTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDataRepositoryTasksAsyncHelper( request, handler, context ); } );
}

void FSxClient::DescribeDataRepositoryTasksAsyncHelper(const DescribeDataRepositoryTasksRequest& request, const DescribeDataRepositoryTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataRepositoryTasks(request), context);
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

void FSxClient::DescribeFileSystemAliasesAsync(const DescribeFileSystemAliasesRequest& request, const DescribeFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFileSystemAliasesAsyncHelper( request, handler, context ); } );
}

void FSxClient::DescribeFileSystemAliasesAsyncHelper(const DescribeFileSystemAliasesRequest& request, const DescribeFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFileSystemAliases(request), context);
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

void FSxClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFileSystemsAsyncHelper( request, handler, context ); } );
}

void FSxClient::DescribeFileSystemsAsyncHelper(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFileSystems(request), context);
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

void FSxClient::DescribeStorageVirtualMachinesAsync(const DescribeStorageVirtualMachinesRequest& request, const DescribeStorageVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStorageVirtualMachinesAsyncHelper( request, handler, context ); } );
}

void FSxClient::DescribeStorageVirtualMachinesAsyncHelper(const DescribeStorageVirtualMachinesRequest& request, const DescribeStorageVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStorageVirtualMachines(request), context);
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

void FSxClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVolumesAsyncHelper( request, handler, context ); } );
}

void FSxClient::DescribeVolumesAsyncHelper(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumes(request), context);
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

void FSxClient::DisassociateFileSystemAliasesAsync(const DisassociateFileSystemAliasesRequest& request, const DisassociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateFileSystemAliasesAsyncHelper( request, handler, context ); } );
}

void FSxClient::DisassociateFileSystemAliasesAsyncHelper(const DisassociateFileSystemAliasesRequest& request, const DisassociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateFileSystemAliases(request), context);
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

void FSxClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void FSxClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
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

void FSxClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void FSxClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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

void FSxClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void FSxClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
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

void FSxClient::UpdateFileSystemAsync(const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFileSystemAsyncHelper( request, handler, context ); } );
}

void FSxClient::UpdateFileSystemAsyncHelper(const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFileSystem(request), context);
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

void FSxClient::UpdateStorageVirtualMachineAsync(const UpdateStorageVirtualMachineRequest& request, const UpdateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStorageVirtualMachineAsyncHelper( request, handler, context ); } );
}

void FSxClient::UpdateStorageVirtualMachineAsyncHelper(const UpdateStorageVirtualMachineRequest& request, const UpdateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStorageVirtualMachine(request), context);
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

void FSxClient::UpdateVolumeAsync(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVolumeAsyncHelper( request, handler, context ); } );
}

void FSxClient::UpdateVolumeAsyncHelper(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVolume(request), context);
}

