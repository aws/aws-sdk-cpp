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
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::CreateAccessPointAsync(const CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccessPoint(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFileSystem(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateMountTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMountTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::CreateMountTargetAsync(const CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMountTarget(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::CreateReplicationConfigurationAsync(const CreateReplicationConfigurationRequest& request, const CreateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationConfiguration(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteAccessPointAsync(const DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccessPoint(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFileSystem(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileSystemPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFileSystemPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteFileSystemPolicyAsync(const DeleteFileSystemPolicyRequest& request, const DeleteFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFileSystemPolicy(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteMountTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMountTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMountTarget(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteReplicationConfigurationAsync(const DeleteReplicationConfigurationRequest& request, const DeleteReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationConfiguration(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccessPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccessPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeAccessPointsAsync(const DescribeAccessPointsRequest& request, const DescribeAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccessPoints(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeAccountPreferencesAsync(const DescribeAccountPreferencesRequest& request, const DescribeAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountPreferences(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBackupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBackupPolicy(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileSystemPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeFileSystemPolicyAsync(const DescribeFileSystemPolicyRequest& request, const DescribeFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFileSystemPolicy(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileSystems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFileSystems(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeLifecycleConfigurationAsync(const DescribeLifecycleConfigurationRequest& request, const DescribeLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLifecycleConfiguration(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeMountTargetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMountTargetSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeMountTargetSecurityGroupsAsync(const DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMountTargetSecurityGroups(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeMountTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMountTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMountTargets(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeReplicationConfigurationsAsync(const DescribeReplicationConfigurationsRequest& request, const DescribeReplicationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationConfigurations(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< ModifyMountTargetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyMountTargetSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::ModifyMountTargetSecurityGroupsAsync(const ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ModifyMountTargetSecurityGroups(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< PutAccountPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::PutAccountPreferencesAsync(const PutAccountPreferencesRequest& request, const PutAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccountPreferences(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< PutBackupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBackupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::PutBackupPolicyAsync(const PutBackupPolicyRequest& request, const PutBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutBackupPolicy(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< PutFileSystemPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFileSystemPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::PutFileSystemPolicyAsync(const PutFileSystemPolicyRequest& request, const PutFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutFileSystemPolicy(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::PutLifecycleConfigurationAsync(const PutLifecycleConfigurationRequest& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLifecycleConfiguration(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::UpdateFileSystemAsync(const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFileSystem(request), context);
    } );
}

