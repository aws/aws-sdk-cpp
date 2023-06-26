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
  ShutdownSdkClient(this, -1);
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
  AWS_OPERATION_GUARD(CreateAccessPoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points");
  return CreateAccessPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFileSystemOutcome EFSClient::CreateFileSystem(const CreateFileSystemRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFileSystem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems");
  return CreateFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMountTargetOutcome EFSClient::CreateMountTarget(const CreateMountTargetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMountTarget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMountTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMountTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets");
  return CreateMountTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationConfigurationOutcome EFSClient::CreateReplicationConfiguration(const CreateReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateReplicationConfiguration);
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

DeleteAccessPointOutcome EFSClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAccessPoint);
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

DeleteFileSystemOutcome EFSClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFileSystem);
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

DeleteFileSystemPolicyOutcome EFSClient::DeleteFileSystemPolicy(const DeleteFileSystemPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFileSystemPolicy);
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

DeleteMountTargetOutcome EFSClient::DeleteMountTarget(const DeleteMountTargetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMountTarget);
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

DeleteReplicationConfigurationOutcome EFSClient::DeleteReplicationConfiguration(const DeleteReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReplicationConfiguration);
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

DescribeAccessPointsOutcome EFSClient::DescribeAccessPoints(const DescribeAccessPointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccessPoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccessPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/access-points");
  return DescribeAccessPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountPreferencesOutcome EFSClient::DescribeAccountPreferences(const DescribeAccountPreferencesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccountPreferences);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/account-preferences");
  return DescribeAccountPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupPolicyOutcome EFSClient::DescribeBackupPolicy(const DescribeBackupPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBackupPolicy);
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

DescribeFileSystemPolicyOutcome EFSClient::DescribeFileSystemPolicy(const DescribeFileSystemPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFileSystemPolicy);
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

DescribeFileSystemsOutcome EFSClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFileSystems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFileSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFileSystems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems");
  return DescribeFileSystemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLifecycleConfigurationOutcome EFSClient::DescribeLifecycleConfiguration(const DescribeLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLifecycleConfiguration);
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

DescribeMountTargetSecurityGroupsOutcome EFSClient::DescribeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMountTargetSecurityGroups);
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

DescribeMountTargetsOutcome EFSClient::DescribeMountTargets(const DescribeMountTargetsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMountTargets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMountTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMountTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/mount-targets");
  return DescribeMountTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationConfigurationsOutcome EFSClient::DescribeReplicationConfigurations(const DescribeReplicationConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplicationConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplicationConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplicationConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/file-systems/replication-configurations");
  return DescribeReplicationConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome EFSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
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

ModifyMountTargetSecurityGroupsOutcome EFSClient::ModifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ModifyMountTargetSecurityGroups);
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

PutAccountPreferencesOutcome EFSClient::PutAccountPreferences(const PutAccountPreferencesRequest& request) const
{
  AWS_OPERATION_GUARD(PutAccountPreferences);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccountPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2015-02-01/account-preferences");
  return PutAccountPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutBackupPolicyOutcome EFSClient::PutBackupPolicy(const PutBackupPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutBackupPolicy);
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

PutFileSystemPolicyOutcome EFSClient::PutFileSystemPolicy(const PutFileSystemPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutFileSystemPolicy);
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

PutLifecycleConfigurationOutcome EFSClient::PutLifecycleConfiguration(const PutLifecycleConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutLifecycleConfiguration);
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

TagResourceOutcome EFSClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
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

UntagResourceOutcome EFSClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
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

UpdateFileSystemOutcome EFSClient::UpdateFileSystem(const UpdateFileSystemRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFileSystem);
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

