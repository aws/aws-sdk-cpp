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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/fsx/FSxClient.h>
#include <aws/fsx/FSxErrorMarshaller.h>
#include <aws/fsx/FSxEndpointProvider.h>
#include <aws/fsx/model/AssociateFileSystemAliasesRequest.h>
#include <aws/fsx/model/CancelDataRepositoryTaskRequest.h>
#include <aws/fsx/model/CopyBackupRequest.h>
#include <aws/fsx/model/CreateBackupRequest.h>
#include <aws/fsx/model/CreateDataRepositoryAssociationRequest.h>
#include <aws/fsx/model/CreateDataRepositoryTaskRequest.h>
#include <aws/fsx/model/CreateFileCacheRequest.h>
#include <aws/fsx/model/CreateFileSystemRequest.h>
#include <aws/fsx/model/CreateFileSystemFromBackupRequest.h>
#include <aws/fsx/model/CreateSnapshotRequest.h>
#include <aws/fsx/model/CreateStorageVirtualMachineRequest.h>
#include <aws/fsx/model/CreateVolumeRequest.h>
#include <aws/fsx/model/CreateVolumeFromBackupRequest.h>
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
#include <aws/fsx/model/UpdateFileCacheRequest.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* FSxClient::SERVICE_NAME = "fsx";
const char* FSxClient::ALLOCATION_TAG = "FSxClient";

FSxClient::FSxClient(const FSx::FSxClientConfiguration& clientConfiguration,
                     std::shared_ptr<FSxEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const AWSCredentials& credentials,
                     std::shared_ptr<FSxEndpointProviderBase> endpointProvider,
                     const FSx::FSxClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<FSxEndpointProviderBase> endpointProvider,
                     const FSx::FSxClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  FSxClient::FSxClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

FSxClient::FSxClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FSxErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<FSxEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
FSxClient::~FSxClient()
{
}

std::shared_ptr<FSxEndpointProviderBase>& FSxClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void FSxClient::init(const FSx::FSxClientConfiguration& config)
{
  AWSClient::SetServiceClientName("FSx");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void FSxClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateFileSystemAliasesOutcome FSxClient::AssociateFileSystemAliases(const AssociateFileSystemAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateFileSystemAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateFileSystemAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateFileSystemAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateFileSystemAliases(request), context);
    } );
}

CancelDataRepositoryTaskOutcome FSxClient::CancelDataRepositoryTask(const CancelDataRepositoryTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelDataRepositoryTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelDataRepositoryTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelDataRepositoryTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelDataRepositoryTask(request), context);
    } );
}

CopyBackupOutcome FSxClient::CopyBackup(const CopyBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopyBackup(request), context);
    } );
}

CreateBackupOutcome FSxClient::CreateBackup(const CreateBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBackup(request), context);
    } );
}

CreateDataRepositoryAssociationOutcome FSxClient::CreateDataRepositoryAssociation(const CreateDataRepositoryAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDataRepositoryAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataRepositoryAssociationOutcomeCallable FSxClient::CreateDataRepositoryAssociationCallable(const CreateDataRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::CreateDataRepositoryAssociationAsync(const CreateDataRepositoryAssociationRequest& request, const CreateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataRepositoryAssociation(request), context);
    } );
}

CreateDataRepositoryTaskOutcome FSxClient::CreateDataRepositoryTask(const CreateDataRepositoryTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataRepositoryTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataRepositoryTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDataRepositoryTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataRepositoryTask(request), context);
    } );
}

CreateFileCacheOutcome FSxClient::CreateFileCache(const CreateFileCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFileCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFileCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFileCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFileCacheOutcomeCallable FSxClient::CreateFileCacheCallable(const CreateFileCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFileCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFileCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::CreateFileCacheAsync(const CreateFileCacheRequest& request, const CreateFileCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFileCache(request), context);
    } );
}

CreateFileSystemOutcome FSxClient::CreateFileSystem(const CreateFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFileSystem(request), context);
    } );
}

CreateFileSystemFromBackupOutcome FSxClient::CreateFileSystemFromBackup(const CreateFileSystemFromBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFileSystemFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFileSystemFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFileSystemFromBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFileSystemFromBackup(request), context);
    } );
}

CreateSnapshotOutcome FSxClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable FSxClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSnapshot(request), context);
    } );
}

CreateStorageVirtualMachineOutcome FSxClient::CreateStorageVirtualMachine(const CreateStorageVirtualMachineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStorageVirtualMachine, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStorageVirtualMachine, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStorageVirtualMachineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStorageVirtualMachine(request), context);
    } );
}

CreateVolumeOutcome FSxClient::CreateVolume(const CreateVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVolume(request), context);
    } );
}

CreateVolumeFromBackupOutcome FSxClient::CreateVolumeFromBackup(const CreateVolumeFromBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVolumeFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVolumeFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVolumeFromBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVolumeFromBackup(request), context);
    } );
}

DeleteBackupOutcome FSxClient::DeleteBackup(const DeleteBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBackup(request), context);
    } );
}

DeleteDataRepositoryAssociationOutcome FSxClient::DeleteDataRepositoryAssociation(const DeleteDataRepositoryAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDataRepositoryAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataRepositoryAssociationOutcomeCallable FSxClient::DeleteDataRepositoryAssociationCallable(const DeleteDataRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::DeleteDataRepositoryAssociationAsync(const DeleteDataRepositoryAssociationRequest& request, const DeleteDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataRepositoryAssociation(request), context);
    } );
}

DeleteFileCacheOutcome FSxClient::DeleteFileCache(const DeleteFileCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFileCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFileCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFileCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileCacheOutcomeCallable FSxClient::DeleteFileCacheCallable(const DeleteFileCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFileCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::DeleteFileCacheAsync(const DeleteFileCacheRequest& request, const DeleteFileCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFileCache(request), context);
    } );
}

DeleteFileSystemOutcome FSxClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFileSystem(request), context);
    } );
}

DeleteSnapshotOutcome FSxClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSnapshotOutcomeCallable FSxClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSnapshot(request), context);
    } );
}

DeleteStorageVirtualMachineOutcome FSxClient::DeleteStorageVirtualMachine(const DeleteStorageVirtualMachineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStorageVirtualMachine, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStorageVirtualMachine, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStorageVirtualMachineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStorageVirtualMachine(request), context);
    } );
}

DeleteVolumeOutcome FSxClient::DeleteVolume(const DeleteVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVolume(request), context);
    } );
}

DescribeBackupsOutcome FSxClient::DescribeBackups(const DescribeBackupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBackups(request), context);
    } );
}

DescribeDataRepositoryAssociationsOutcome FSxClient::DescribeDataRepositoryAssociations(const DescribeDataRepositoryAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataRepositoryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataRepositoryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDataRepositoryAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataRepositoryAssociationsOutcomeCallable FSxClient::DescribeDataRepositoryAssociationsCallable(const DescribeDataRepositoryAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataRepositoryAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataRepositoryAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::DescribeDataRepositoryAssociationsAsync(const DescribeDataRepositoryAssociationsRequest& request, const DescribeDataRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataRepositoryAssociations(request), context);
    } );
}

DescribeDataRepositoryTasksOutcome FSxClient::DescribeDataRepositoryTasks(const DescribeDataRepositoryTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataRepositoryTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataRepositoryTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDataRepositoryTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataRepositoryTasks(request), context);
    } );
}

DescribeFileCachesOutcome FSxClient::DescribeFileCaches(const DescribeFileCachesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFileCaches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFileCaches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFileCachesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFileCachesOutcomeCallable FSxClient::DescribeFileCachesCallable(const DescribeFileCachesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileCachesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileCaches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::DescribeFileCachesAsync(const DescribeFileCachesRequest& request, const DescribeFileCachesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFileCaches(request), context);
    } );
}

DescribeFileSystemAliasesOutcome FSxClient::DescribeFileSystemAliases(const DescribeFileSystemAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFileSystemAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFileSystemAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFileSystemAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFileSystemAliases(request), context);
    } );
}

DescribeFileSystemsOutcome FSxClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFileSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFileSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFileSystemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFileSystems(request), context);
    } );
}

DescribeSnapshotsOutcome FSxClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSnapshotsOutcomeCallable FSxClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSnapshots(request), context);
    } );
}

DescribeStorageVirtualMachinesOutcome FSxClient::DescribeStorageVirtualMachines(const DescribeStorageVirtualMachinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStorageVirtualMachines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStorageVirtualMachines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStorageVirtualMachinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStorageVirtualMachines(request), context);
    } );
}

DescribeVolumesOutcome FSxClient::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVolumes(request), context);
    } );
}

DisassociateFileSystemAliasesOutcome FSxClient::DisassociateFileSystemAliases(const DisassociateFileSystemAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateFileSystemAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateFileSystemAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateFileSystemAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateFileSystemAliases(request), context);
    } );
}

ListTagsForResourceOutcome FSxClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ReleaseFileSystemNfsV3LocksOutcome FSxClient::ReleaseFileSystemNfsV3Locks(const ReleaseFileSystemNfsV3LocksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseFileSystemNfsV3Locks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseFileSystemNfsV3Locks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseFileSystemNfsV3LocksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReleaseFileSystemNfsV3LocksOutcomeCallable FSxClient::ReleaseFileSystemNfsV3LocksCallable(const ReleaseFileSystemNfsV3LocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReleaseFileSystemNfsV3LocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReleaseFileSystemNfsV3Locks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::ReleaseFileSystemNfsV3LocksAsync(const ReleaseFileSystemNfsV3LocksRequest& request, const ReleaseFileSystemNfsV3LocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReleaseFileSystemNfsV3Locks(request), context);
    } );
}

RestoreVolumeFromSnapshotOutcome FSxClient::RestoreVolumeFromSnapshot(const RestoreVolumeFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreVolumeFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreVolumeFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreVolumeFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreVolumeFromSnapshotOutcomeCallable FSxClient::RestoreVolumeFromSnapshotCallable(const RestoreVolumeFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreVolumeFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreVolumeFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::RestoreVolumeFromSnapshotAsync(const RestoreVolumeFromSnapshotRequest& request, const RestoreVolumeFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreVolumeFromSnapshot(request), context);
    } );
}

TagResourceOutcome FSxClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome FSxClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDataRepositoryAssociationOutcome FSxClient::UpdateDataRepositoryAssociation(const UpdateDataRepositoryAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDataRepositoryAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataRepositoryAssociationOutcomeCallable FSxClient::UpdateDataRepositoryAssociationCallable(const UpdateDataRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::UpdateDataRepositoryAssociationAsync(const UpdateDataRepositoryAssociationRequest& request, const UpdateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataRepositoryAssociation(request), context);
    } );
}

UpdateFileCacheOutcome FSxClient::UpdateFileCache(const UpdateFileCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFileCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFileCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateFileCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFileCacheOutcomeCallable FSxClient::UpdateFileCacheCallable(const UpdateFileCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFileCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFileCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::UpdateFileCacheAsync(const UpdateFileCacheRequest& request, const UpdateFileCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFileCache(request), context);
    } );
}

UpdateFileSystemOutcome FSxClient::UpdateFileSystem(const UpdateFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFileSystem(request), context);
    } );
}

UpdateSnapshotOutcome FSxClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSnapshotOutcomeCallable FSxClient::UpdateSnapshotCallable(const UpdateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FSxClient::UpdateSnapshotAsync(const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSnapshot(request), context);
    } );
}

UpdateStorageVirtualMachineOutcome FSxClient::UpdateStorageVirtualMachine(const UpdateStorageVirtualMachineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStorageVirtualMachine, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStorageVirtualMachine, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateStorageVirtualMachineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStorageVirtualMachine(request), context);
    } );
}

UpdateVolumeOutcome FSxClient::UpdateVolume(const UpdateVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVolume(request), context);
    } );
}

