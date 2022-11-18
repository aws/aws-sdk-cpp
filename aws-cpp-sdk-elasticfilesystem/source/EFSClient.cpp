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

#include <aws/elasticfilesystem/EFSClient.h>
#include <aws/elasticfilesystem/EFSErrorMarshaller.h>
#include <aws/elasticfilesystem/EFSEndpointProvider.h>
#include <aws/elasticfilesystem/model/CreateAccessPointRequest.h>
#include <aws/elasticfilesystem/model/CreateFileSystemRequest.h>
#include <aws/elasticfilesystem/model/CreateMountTargetRequest.h>
#include <aws/elasticfilesystem/model/CreateReplicationConfigurationRequest.h>
#include <aws/elasticfilesystem/model/DeleteAccessPointRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemPolicyRequest.h>
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
#include <aws/elasticfilesystem/model/UpdateFileSystemRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EFS;
using namespace Aws::EFS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* EFSClient::SERVICE_NAME = "elasticfilesystem";
const char* EFSClient::ALLOCATION_TAG = "EFSClient";

EFSClient::EFSClient(const EFS::EFSClientConfiguration& clientConfiguration,
                     std::shared_ptr<EFSEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const AWSCredentials& credentials,
                     std::shared_ptr<EFSEndpointProviderBase> endpointProvider,
                     const EFS::EFSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EFSEndpointProviderBase> endpointProvider,
                     const EFS::EFSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  EFSClient::EFSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EFSClient::EFSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
EFSClient::~EFSClient()
{
}

std::shared_ptr<EFSEndpointProviderBase>& EFSClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EFSClient::init(const EFS::EFSClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EFS");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void EFSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAccessPointOutcome EFSClient::CreateAccessPoint(const CreateAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points");
  return CreateAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessPointOutcomeCallable EFSClient::CreateAccessPointCallable(const CreateAccessPointRequest& request) const
{
  std::shared_ptr<CreateAccessPointRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessPointOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateAccessPoint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::CreateAccessPointAsync(const CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateAccessPointRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateAccessPoint(*pRequest), context);
    } );
}

CreateFileSystemOutcome EFSClient::CreateFileSystem(const CreateFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems");
  return CreateFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFileSystemOutcomeCallable EFSClient::CreateFileSystemCallable(const CreateFileSystemRequest& request) const
{
  std::shared_ptr<CreateFileSystemRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateFileSystemOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateFileSystem(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateFileSystemRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateFileSystem(*pRequest), context);
    } );
}

CreateMountTargetOutcome EFSClient::CreateMountTarget(const CreateMountTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMountTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMountTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets");
  return CreateMountTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMountTargetOutcomeCallable EFSClient::CreateMountTargetCallable(const CreateMountTargetRequest& request) const
{
  std::shared_ptr<CreateMountTargetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateMountTargetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateMountTarget(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::CreateMountTargetAsync(const CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateMountTargetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateMountTarget(*pRequest), context);
    } );
}

CreateReplicationConfigurationOutcome EFSClient::CreateReplicationConfiguration(const CreateReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceFileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateReplicationConfiguration", "Required field: SourceFileSystemId, is not set");
    return CreateReplicationConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceFileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/replication-configuration");
  return CreateReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationConfigurationOutcomeCallable EFSClient::CreateReplicationConfigurationCallable(const CreateReplicationConfigurationRequest& request) const
{
  std::shared_ptr<CreateReplicationConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateReplicationConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::CreateReplicationConfigurationAsync(const CreateReplicationConfigurationRequest& request, const CreateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateReplicationConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateReplicationConfiguration(*pRequest), context);
    } );
}

DeleteAccessPointOutcome EFSClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessPointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: AccessPointId, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPointId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPointId());
  return DeleteAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessPointOutcomeCallable EFSClient::DeleteAccessPointCallable(const DeleteAccessPointRequest& request) const
{
  std::shared_ptr<DeleteAccessPointRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessPointOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteAccessPoint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DeleteAccessPointAsync(const DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteAccessPointRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteAccessPoint(*pRequest), context);
    } );
}

DeleteFileSystemOutcome EFSClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFileSystem", "Required field: FileSystemId, is not set");
    return DeleteFileSystemOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  return DeleteFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileSystemOutcomeCallable EFSClient::DeleteFileSystemCallable(const DeleteFileSystemRequest& request) const
{
  std::shared_ptr<DeleteFileSystemRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileSystemOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteFileSystem(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteFileSystemRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteFileSystem(*pRequest), context);
    } );
}

DeleteFileSystemPolicyOutcome EFSClient::DeleteFileSystemPolicy(const DeleteFileSystemPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFileSystemPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFileSystemPolicy", "Required field: FileSystemId, is not set");
    return DeleteFileSystemPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFileSystemPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteFileSystemPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileSystemPolicyOutcomeCallable EFSClient::DeleteFileSystemPolicyCallable(const DeleteFileSystemPolicyRequest& request) const
{
  std::shared_ptr<DeleteFileSystemPolicyRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileSystemPolicyOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteFileSystemPolicy(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DeleteFileSystemPolicyAsync(const DeleteFileSystemPolicyRequest& request, const DeleteFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteFileSystemPolicyRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteFileSystemPolicy(*pRequest), context);
    } );
}

DeleteMountTargetOutcome EFSClient::DeleteMountTarget(const DeleteMountTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMountTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MountTargetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMountTarget", "Required field: MountTargetId, is not set");
    return DeleteMountTargetOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MountTargetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMountTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
  return DeleteMountTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMountTargetOutcomeCallable EFSClient::DeleteMountTargetCallable(const DeleteMountTargetRequest& request) const
{
  std::shared_ptr<DeleteMountTargetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteMountTargetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteMountTarget(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DeleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteMountTargetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteMountTarget(*pRequest), context);
    } );
}

DeleteReplicationConfigurationOutcome EFSClient::DeleteReplicationConfiguration(const DeleteReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceFileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReplicationConfiguration", "Required field: SourceFileSystemId, is not set");
    return DeleteReplicationConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceFileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/replication-configuration");
  return DeleteReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationConfigurationOutcomeCallable EFSClient::DeleteReplicationConfigurationCallable(const DeleteReplicationConfigurationRequest& request) const
{
  std::shared_ptr<DeleteReplicationConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteReplicationConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DeleteReplicationConfigurationAsync(const DeleteReplicationConfigurationRequest& request, const DeleteReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteReplicationConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteReplicationConfiguration(*pRequest), context);
    } );
}

DescribeAccessPointsOutcome EFSClient::DescribeAccessPoints(const DescribeAccessPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points");
  return DescribeAccessPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccessPointsOutcomeCallable EFSClient::DescribeAccessPointsCallable(const DescribeAccessPointsRequest& request) const
{
  std::shared_ptr<DescribeAccessPointsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccessPointsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAccessPoints(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeAccessPointsAsync(const DescribeAccessPointsRequest& request, const DescribeAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAccessPointsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAccessPoints(*pRequest), context);
    } );
}

DescribeAccountPreferencesOutcome EFSClient::DescribeAccountPreferences(const DescribeAccountPreferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/account-preferences");
  return DescribeAccountPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountPreferencesOutcomeCallable EFSClient::DescribeAccountPreferencesCallable(const DescribeAccountPreferencesRequest& request) const
{
  std::shared_ptr<DescribeAccountPreferencesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountPreferencesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAccountPreferences(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeAccountPreferencesAsync(const DescribeAccountPreferencesRequest& request, const DescribeAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAccountPreferencesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAccountPreferences(*pRequest), context);
    } );
}

DescribeBackupPolicyOutcome EFSClient::DescribeBackupPolicy(const DescribeBackupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBackupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBackupPolicy", "Required field: FileSystemId, is not set");
    return DescribeBackupPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBackupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-policy");
  return DescribeBackupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupPolicyOutcomeCallable EFSClient::DescribeBackupPolicyCallable(const DescribeBackupPolicyRequest& request) const
{
  std::shared_ptr<DescribeBackupPolicyRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupPolicyOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeBackupPolicy(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeBackupPolicyRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeBackupPolicy(*pRequest), context);
    } );
}

DescribeFileSystemPolicyOutcome EFSClient::DescribeFileSystemPolicy(const DescribeFileSystemPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFileSystemPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFileSystemPolicy", "Required field: FileSystemId, is not set");
    return DescribeFileSystemPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFileSystemPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DescribeFileSystemPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFileSystemPolicyOutcomeCallable EFSClient::DescribeFileSystemPolicyCallable(const DescribeFileSystemPolicyRequest& request) const
{
  std::shared_ptr<DescribeFileSystemPolicyRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemPolicyOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFileSystemPolicy(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeFileSystemPolicyAsync(const DescribeFileSystemPolicyRequest& request, const DescribeFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFileSystemPolicyRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFileSystemPolicy(*pRequest), context);
    } );
}

DescribeFileSystemsOutcome EFSClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFileSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFileSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems");
  return DescribeFileSystemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFileSystemsOutcomeCallable EFSClient::DescribeFileSystemsCallable(const DescribeFileSystemsRequest& request) const
{
  std::shared_ptr<DescribeFileSystemsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFileSystems(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFileSystemsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFileSystems(*pRequest), context);
    } );
}

DescribeLifecycleConfigurationOutcome EFSClient::DescribeLifecycleConfiguration(const DescribeLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLifecycleConfiguration", "Required field: FileSystemId, is not set");
    return DescribeLifecycleConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycle-configuration");
  return DescribeLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLifecycleConfigurationOutcomeCallable EFSClient::DescribeLifecycleConfigurationCallable(const DescribeLifecycleConfigurationRequest& request) const
{
  std::shared_ptr<DescribeLifecycleConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLifecycleConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeLifecycleConfigurationAsync(const DescribeLifecycleConfigurationRequest& request, const DescribeLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLifecycleConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLifecycleConfiguration(*pRequest), context);
    } );
}

DescribeMountTargetSecurityGroupsOutcome EFSClient::DescribeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMountTargetSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MountTargetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMountTargetSecurityGroups", "Required field: MountTargetId, is not set");
    return DescribeMountTargetSecurityGroupsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MountTargetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMountTargetSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups");
  return DescribeMountTargetSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMountTargetSecurityGroupsOutcomeCallable EFSClient::DescribeMountTargetSecurityGroupsCallable(const DescribeMountTargetSecurityGroupsRequest& request) const
{
  std::shared_ptr<DescribeMountTargetSecurityGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeMountTargetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeMountTargetSecurityGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeMountTargetSecurityGroupsAsync(const DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeMountTargetSecurityGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeMountTargetSecurityGroups(*pRequest), context);
    } );
}

DescribeMountTargetsOutcome EFSClient::DescribeMountTargets(const DescribeMountTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMountTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMountTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets");
  return DescribeMountTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMountTargetsOutcomeCallable EFSClient::DescribeMountTargetsCallable(const DescribeMountTargetsRequest& request) const
{
  std::shared_ptr<DescribeMountTargetsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeMountTargetsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeMountTargets(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeMountTargetsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeMountTargets(*pRequest), context);
    } );
}

DescribeReplicationConfigurationsOutcome EFSClient::DescribeReplicationConfigurations(const DescribeReplicationConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/replication-configurations");
  return DescribeReplicationConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationConfigurationsOutcomeCallable EFSClient::DescribeReplicationConfigurationsCallable(const DescribeReplicationConfigurationsRequest& request) const
{
  std::shared_ptr<DescribeReplicationConfigurationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeReplicationConfigurations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::DescribeReplicationConfigurationsAsync(const DescribeReplicationConfigurationsRequest& request, const DescribeReplicationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeReplicationConfigurationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeReplicationConfigurations(*pRequest), context);
    } );
}

ListTagsForResourceOutcome EFSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceId, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/resource-tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable EFSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListTagsForResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListTagsForResource(*pRequest), context);
    } );
}

ModifyMountTargetSecurityGroupsOutcome EFSClient::ModifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyMountTargetSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MountTargetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ModifyMountTargetSecurityGroups", "Required field: MountTargetId, is not set");
    return ModifyMountTargetSecurityGroupsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MountTargetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyMountTargetSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/security-groups");
  return ModifyMountTargetSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ModifyMountTargetSecurityGroupsOutcomeCallable EFSClient::ModifyMountTargetSecurityGroupsCallable(const ModifyMountTargetSecurityGroupsRequest& request) const
{
  std::shared_ptr<ModifyMountTargetSecurityGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyMountTargetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyMountTargetSecurityGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::ModifyMountTargetSecurityGroupsAsync(const ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyMountTargetSecurityGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyMountTargetSecurityGroups(*pRequest), context);
    } );
}

PutAccountPreferencesOutcome EFSClient::PutAccountPreferences(const PutAccountPreferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/account-preferences");
  return PutAccountPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAccountPreferencesOutcomeCallable EFSClient::PutAccountPreferencesCallable(const PutAccountPreferencesRequest& request) const
{
  std::shared_ptr<PutAccountPreferencesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PutAccountPreferencesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PutAccountPreferences(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::PutAccountPreferencesAsync(const PutAccountPreferencesRequest& request, const PutAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PutAccountPreferencesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PutAccountPreferences(*pRequest), context);
    } );
}

PutBackupPolicyOutcome EFSClient::PutBackupPolicy(const PutBackupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBackupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupPolicy", "Required field: FileSystemId, is not set");
    return PutBackupPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBackupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-policy");
  return PutBackupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutBackupPolicyOutcomeCallable EFSClient::PutBackupPolicyCallable(const PutBackupPolicyRequest& request) const
{
  std::shared_ptr<PutBackupPolicyRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PutBackupPolicyOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PutBackupPolicy(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::PutBackupPolicyAsync(const PutBackupPolicyRequest& request, const PutBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PutBackupPolicyRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PutBackupPolicy(*pRequest), context);
    } );
}

PutFileSystemPolicyOutcome EFSClient::PutFileSystemPolicy(const PutFileSystemPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFileSystemPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFileSystemPolicy", "Required field: FileSystemId, is not set");
    return PutFileSystemPolicyOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutFileSystemPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutFileSystemPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFileSystemPolicyOutcomeCallable EFSClient::PutFileSystemPolicyCallable(const PutFileSystemPolicyRequest& request) const
{
  std::shared_ptr<PutFileSystemPolicyRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PutFileSystemPolicyOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PutFileSystemPolicy(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::PutFileSystemPolicyAsync(const PutFileSystemPolicyRequest& request, const PutFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PutFileSystemPolicyRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PutFileSystemPolicy(*pRequest), context);
    } );
}

PutLifecycleConfigurationOutcome EFSClient::PutLifecycleConfiguration(const PutLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutLifecycleConfiguration", "Required field: FileSystemId, is not set");
    return PutLifecycleConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLifecycleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lifecycle-configuration");
  return PutLifecycleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutLifecycleConfigurationOutcomeCallable EFSClient::PutLifecycleConfigurationCallable(const PutLifecycleConfigurationRequest& request) const
{
  std::shared_ptr<PutLifecycleConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PutLifecycleConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::PutLifecycleConfigurationAsync(const PutLifecycleConfigurationRequest& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PutLifecycleConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PutLifecycleConfiguration(*pRequest), context);
    } );
}

TagResourceOutcome EFSClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceId, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/resource-tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable EFSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TagResource(*pRequest), context);
    } );
}

UntagResourceOutcome EFSClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceId, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/resource-tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable EFSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UntagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UntagResource(*pRequest), context);
    } );
}

UpdateFileSystemOutcome EFSClient::UpdateFileSystem(const UpdateFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFileSystem", "Required field: FileSystemId, is not set");
    return UpdateFileSystemOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  return UpdateFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFileSystemOutcomeCallable EFSClient::UpdateFileSystemCallable(const UpdateFileSystemRequest& request) const
{
  std::shared_ptr<UpdateFileSystemRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateFileSystemOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateFileSystem(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EFSClient::UpdateFileSystemAsync(const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateFileSystemRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateFileSystem(*pRequest), context);
    } );
}

