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

#include <aws/storagegateway/StorageGatewayClient.h>
#include <aws/storagegateway/StorageGatewayErrorMarshaller.h>
#include <aws/storagegateway/StorageGatewayEndpointProvider.h>
#include <aws/storagegateway/model/ActivateGatewayRequest.h>
#include <aws/storagegateway/model/AddCacheRequest.h>
#include <aws/storagegateway/model/AddTagsToResourceRequest.h>
#include <aws/storagegateway/model/AddUploadBufferRequest.h>
#include <aws/storagegateway/model/AddWorkingStorageRequest.h>
#include <aws/storagegateway/model/AssignTapePoolRequest.h>
#include <aws/storagegateway/model/AssociateFileSystemRequest.h>
#include <aws/storagegateway/model/AttachVolumeRequest.h>
#include <aws/storagegateway/model/CancelArchivalRequest.h>
#include <aws/storagegateway/model/CancelRetrievalRequest.h>
#include <aws/storagegateway/model/CreateCachediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateNFSFileShareRequest.h>
#include <aws/storagegateway/model/CreateSMBFileShareRequest.h>
#include <aws/storagegateway/model/CreateSnapshotRequest.h>
#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointRequest.h>
#include <aws/storagegateway/model/CreateStorediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateTapePoolRequest.h>
#include <aws/storagegateway/model/CreateTapeWithBarcodeRequest.h>
#include <aws/storagegateway/model/CreateTapesRequest.h>
#include <aws/storagegateway/model/DeleteAutomaticTapeCreationPolicyRequest.h>
#include <aws/storagegateway/model/DeleteBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/DeleteChapCredentialsRequest.h>
#include <aws/storagegateway/model/DeleteFileShareRequest.h>
#include <aws/storagegateway/model/DeleteGatewayRequest.h>
#include <aws/storagegateway/model/DeleteSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/DeleteTapeRequest.h>
#include <aws/storagegateway/model/DeleteTapeArchiveRequest.h>
#include <aws/storagegateway/model/DeleteTapePoolRequest.h>
#include <aws/storagegateway/model/DeleteVolumeRequest.h>
#include <aws/storagegateway/model/DescribeAvailabilityMonitorTestRequest.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitScheduleRequest.h>
#include <aws/storagegateway/model/DescribeCacheRequest.h>
#include <aws/storagegateway/model/DescribeCachediSCSIVolumesRequest.h>
#include <aws/storagegateway/model/DescribeChapCredentialsRequest.h>
#include <aws/storagegateway/model/DescribeFileSystemAssociationsRequest.h>
#include <aws/storagegateway/model/DescribeGatewayInformationRequest.h>
#include <aws/storagegateway/model/DescribeMaintenanceStartTimeRequest.h>
#include <aws/storagegateway/model/DescribeNFSFileSharesRequest.h>
#include <aws/storagegateway/model/DescribeSMBFileSharesRequest.h>
#include <aws/storagegateway/model/DescribeSMBSettingsRequest.h>
#include <aws/storagegateway/model/DescribeSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/DescribeStorediSCSIVolumesRequest.h>
#include <aws/storagegateway/model/DescribeTapeArchivesRequest.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsRequest.h>
#include <aws/storagegateway/model/DescribeTapesRequest.h>
#include <aws/storagegateway/model/DescribeUploadBufferRequest.h>
#include <aws/storagegateway/model/DescribeVTLDevicesRequest.h>
#include <aws/storagegateway/model/DescribeWorkingStorageRequest.h>
#include <aws/storagegateway/model/DetachVolumeRequest.h>
#include <aws/storagegateway/model/DisableGatewayRequest.h>
#include <aws/storagegateway/model/DisassociateFileSystemRequest.h>
#include <aws/storagegateway/model/JoinDomainRequest.h>
#include <aws/storagegateway/model/ListAutomaticTapeCreationPoliciesRequest.h>
#include <aws/storagegateway/model/ListFileSharesRequest.h>
#include <aws/storagegateway/model/ListFileSystemAssociationsRequest.h>
#include <aws/storagegateway/model/ListGatewaysRequest.h>
#include <aws/storagegateway/model/ListLocalDisksRequest.h>
#include <aws/storagegateway/model/ListTagsForResourceRequest.h>
#include <aws/storagegateway/model/ListTapePoolsRequest.h>
#include <aws/storagegateway/model/ListTapesRequest.h>
#include <aws/storagegateway/model/ListVolumeInitiatorsRequest.h>
#include <aws/storagegateway/model/ListVolumeRecoveryPointsRequest.h>
#include <aws/storagegateway/model/ListVolumesRequest.h>
#include <aws/storagegateway/model/NotifyWhenUploadedRequest.h>
#include <aws/storagegateway/model/RefreshCacheRequest.h>
#include <aws/storagegateway/model/RemoveTagsFromResourceRequest.h>
#include <aws/storagegateway/model/ResetCacheRequest.h>
#include <aws/storagegateway/model/RetrieveTapeArchiveRequest.h>
#include <aws/storagegateway/model/RetrieveTapeRecoveryPointRequest.h>
#include <aws/storagegateway/model/SetLocalConsolePasswordRequest.h>
#include <aws/storagegateway/model/SetSMBGuestPasswordRequest.h>
#include <aws/storagegateway/model/ShutdownGatewayRequest.h>
#include <aws/storagegateway/model/StartAvailabilityMonitorTestRequest.h>
#include <aws/storagegateway/model/StartGatewayRequest.h>
#include <aws/storagegateway/model/UpdateAutomaticTapeCreationPolicyRequest.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitScheduleRequest.h>
#include <aws/storagegateway/model/UpdateChapCredentialsRequest.h>
#include <aws/storagegateway/model/UpdateFileSystemAssociationRequest.h>
#include <aws/storagegateway/model/UpdateGatewayInformationRequest.h>
#include <aws/storagegateway/model/UpdateGatewaySoftwareNowRequest.h>
#include <aws/storagegateway/model/UpdateMaintenanceStartTimeRequest.h>
#include <aws/storagegateway/model/UpdateNFSFileShareRequest.h>
#include <aws/storagegateway/model/UpdateSMBFileShareRequest.h>
#include <aws/storagegateway/model/UpdateSMBFileShareVisibilityRequest.h>
#include <aws/storagegateway/model/UpdateSMBLocalGroupsRequest.h>
#include <aws/storagegateway/model/UpdateSMBSecurityStrategyRequest.h>
#include <aws/storagegateway/model/UpdateSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/UpdateVTLDeviceTypeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::StorageGateway;
using namespace Aws::StorageGateway::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* StorageGatewayClient::SERVICE_NAME = "storagegateway";
const char* StorageGatewayClient::ALLOCATION_TAG = "StorageGatewayClient";

StorageGatewayClient::StorageGatewayClient(const StorageGateway::StorageGatewayClientConfiguration& clientConfiguration,
                                           std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const AWSCredentials& credentials,
                                           std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider,
                                           const StorageGateway::StorageGatewayClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider,
                                           const StorageGateway::StorageGatewayClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  StorageGatewayClient::StorageGatewayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
StorageGatewayClient::~StorageGatewayClient()
{
}

std::shared_ptr<StorageGatewayEndpointProviderBase>& StorageGatewayClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void StorageGatewayClient::init(const StorageGateway::StorageGatewayClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Storage Gateway");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void StorageGatewayClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ActivateGatewayOutcome StorageGatewayClient::ActivateGateway(const ActivateGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ActivateGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateGatewayOutcomeCallable StorageGatewayClient::ActivateGatewayCallable(const ActivateGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ActivateGatewayAsync(const ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ActivateGateway(request), context);
    } );
}

AddCacheOutcome StorageGatewayClient::AddCache(const AddCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddCacheOutcomeCallable StorageGatewayClient::AddCacheCallable(const AddCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::AddCacheAsync(const AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddCache(request), context);
    } );
}

AddTagsToResourceOutcome StorageGatewayClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsToResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable StorageGatewayClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTagsToResource(request), context);
    } );
}

AddUploadBufferOutcome StorageGatewayClient::AddUploadBuffer(const AddUploadBufferRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddUploadBuffer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddUploadBuffer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddUploadBufferOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddUploadBufferOutcomeCallable StorageGatewayClient::AddUploadBufferCallable(const AddUploadBufferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddUploadBufferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddUploadBuffer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::AddUploadBufferAsync(const AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddUploadBuffer(request), context);
    } );
}

AddWorkingStorageOutcome StorageGatewayClient::AddWorkingStorage(const AddWorkingStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddWorkingStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddWorkingStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddWorkingStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddWorkingStorageOutcomeCallable StorageGatewayClient::AddWorkingStorageCallable(const AddWorkingStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddWorkingStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddWorkingStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::AddWorkingStorageAsync(const AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddWorkingStorage(request), context);
    } );
}

AssignTapePoolOutcome StorageGatewayClient::AssignTapePool(const AssignTapePoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignTapePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignTapePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignTapePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssignTapePoolOutcomeCallable StorageGatewayClient::AssignTapePoolCallable(const AssignTapePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignTapePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignTapePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::AssignTapePoolAsync(const AssignTapePoolRequest& request, const AssignTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssignTapePool(request), context);
    } );
}

AssociateFileSystemOutcome StorageGatewayClient::AssociateFileSystem(const AssociateFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFileSystemOutcomeCallable StorageGatewayClient::AssociateFileSystemCallable(const AssociateFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::AssociateFileSystemAsync(const AssociateFileSystemRequest& request, const AssociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateFileSystem(request), context);
    } );
}

AttachVolumeOutcome StorageGatewayClient::AttachVolume(const AttachVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachVolumeOutcomeCallable StorageGatewayClient::AttachVolumeCallable(const AttachVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::AttachVolumeAsync(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachVolume(request), context);
    } );
}

CancelArchivalOutcome StorageGatewayClient::CancelArchival(const CancelArchivalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelArchival, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelArchival, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelArchivalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelArchivalOutcomeCallable StorageGatewayClient::CancelArchivalCallable(const CancelArchivalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelArchivalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelArchival(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CancelArchivalAsync(const CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelArchival(request), context);
    } );
}

CancelRetrievalOutcome StorageGatewayClient::CancelRetrieval(const CancelRetrievalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelRetrieval, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelRetrieval, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelRetrievalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelRetrievalOutcomeCallable StorageGatewayClient::CancelRetrievalCallable(const CancelRetrievalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelRetrievalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelRetrieval(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CancelRetrievalAsync(const CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelRetrieval(request), context);
    } );
}

CreateCachediSCSIVolumeOutcome StorageGatewayClient::CreateCachediSCSIVolume(const CreateCachediSCSIVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCachediSCSIVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCachediSCSIVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCachediSCSIVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCachediSCSIVolumeOutcomeCallable StorageGatewayClient::CreateCachediSCSIVolumeCallable(const CreateCachediSCSIVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCachediSCSIVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCachediSCSIVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateCachediSCSIVolumeAsync(const CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCachediSCSIVolume(request), context);
    } );
}

CreateNFSFileShareOutcome StorageGatewayClient::CreateNFSFileShare(const CreateNFSFileShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNFSFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNFSFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNFSFileShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNFSFileShareOutcomeCallable StorageGatewayClient::CreateNFSFileShareCallable(const CreateNFSFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNFSFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNFSFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateNFSFileShareAsync(const CreateNFSFileShareRequest& request, const CreateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNFSFileShare(request), context);
    } );
}

CreateSMBFileShareOutcome StorageGatewayClient::CreateSMBFileShare(const CreateSMBFileShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSMBFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSMBFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSMBFileShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSMBFileShareOutcomeCallable StorageGatewayClient::CreateSMBFileShareCallable(const CreateSMBFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSMBFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSMBFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateSMBFileShareAsync(const CreateSMBFileShareRequest& request, const CreateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSMBFileShare(request), context);
    } );
}

CreateSnapshotOutcome StorageGatewayClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable StorageGatewayClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSnapshot(request), context);
    } );
}

CreateSnapshotFromVolumeRecoveryPointOutcome StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshotFromVolumeRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshotFromVolumeRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotFromVolumeRecoveryPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotFromVolumeRecoveryPointOutcomeCallable StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointCallable(const CreateSnapshotFromVolumeRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotFromVolumeRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshotFromVolumeRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointAsync(const CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSnapshotFromVolumeRecoveryPoint(request), context);
    } );
}

CreateStorediSCSIVolumeOutcome StorageGatewayClient::CreateStorediSCSIVolume(const CreateStorediSCSIVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStorediSCSIVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStorediSCSIVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStorediSCSIVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStorediSCSIVolumeOutcomeCallable StorageGatewayClient::CreateStorediSCSIVolumeCallable(const CreateStorediSCSIVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStorediSCSIVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStorediSCSIVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateStorediSCSIVolumeAsync(const CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStorediSCSIVolume(request), context);
    } );
}

CreateTapePoolOutcome StorageGatewayClient::CreateTapePool(const CreateTapePoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTapePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTapePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTapePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTapePoolOutcomeCallable StorageGatewayClient::CreateTapePoolCallable(const CreateTapePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTapePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTapePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateTapePoolAsync(const CreateTapePoolRequest& request, const CreateTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTapePool(request), context);
    } );
}

CreateTapeWithBarcodeOutcome StorageGatewayClient::CreateTapeWithBarcode(const CreateTapeWithBarcodeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTapeWithBarcode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTapeWithBarcode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTapeWithBarcodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTapeWithBarcodeOutcomeCallable StorageGatewayClient::CreateTapeWithBarcodeCallable(const CreateTapeWithBarcodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTapeWithBarcodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTapeWithBarcode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateTapeWithBarcodeAsync(const CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTapeWithBarcode(request), context);
    } );
}

CreateTapesOutcome StorageGatewayClient::CreateTapes(const CreateTapesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTapesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTapesOutcomeCallable StorageGatewayClient::CreateTapesCallable(const CreateTapesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTapesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTapes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::CreateTapesAsync(const CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTapes(request), context);
    } );
}

DeleteAutomaticTapeCreationPolicyOutcome StorageGatewayClient::DeleteAutomaticTapeCreationPolicy(const DeleteAutomaticTapeCreationPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAutomaticTapeCreationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAutomaticTapeCreationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAutomaticTapeCreationPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAutomaticTapeCreationPolicyOutcomeCallable StorageGatewayClient::DeleteAutomaticTapeCreationPolicyCallable(const DeleteAutomaticTapeCreationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAutomaticTapeCreationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAutomaticTapeCreationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteAutomaticTapeCreationPolicyAsync(const DeleteAutomaticTapeCreationPolicyRequest& request, const DeleteAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAutomaticTapeCreationPolicy(request), context);
    } );
}

DeleteBandwidthRateLimitOutcome StorageGatewayClient::DeleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBandwidthRateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBandwidthRateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBandwidthRateLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBandwidthRateLimitOutcomeCallable StorageGatewayClient::DeleteBandwidthRateLimitCallable(const DeleteBandwidthRateLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBandwidthRateLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBandwidthRateLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteBandwidthRateLimitAsync(const DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBandwidthRateLimit(request), context);
    } );
}

DeleteChapCredentialsOutcome StorageGatewayClient::DeleteChapCredentials(const DeleteChapCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChapCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChapCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteChapCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteChapCredentialsOutcomeCallable StorageGatewayClient::DeleteChapCredentialsCallable(const DeleteChapCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChapCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChapCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteChapCredentialsAsync(const DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteChapCredentials(request), context);
    } );
}

DeleteFileShareOutcome StorageGatewayClient::DeleteFileShare(const DeleteFileShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFileShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileShareOutcomeCallable StorageGatewayClient::DeleteFileShareCallable(const DeleteFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteFileShareAsync(const DeleteFileShareRequest& request, const DeleteFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFileShare(request), context);
    } );
}

DeleteGatewayOutcome StorageGatewayClient::DeleteGateway(const DeleteGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayOutcomeCallable StorageGatewayClient::DeleteGatewayCallable(const DeleteGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGateway(request), context);
    } );
}

DeleteSnapshotScheduleOutcome StorageGatewayClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSnapshotScheduleOutcomeCallable StorageGatewayClient::DeleteSnapshotScheduleCallable(const DeleteSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteSnapshotScheduleAsync(const DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSnapshotSchedule(request), context);
    } );
}

DeleteTapeOutcome StorageGatewayClient::DeleteTape(const DeleteTapeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTape, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTape, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTapeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTapeOutcomeCallable StorageGatewayClient::DeleteTapeCallable(const DeleteTapeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTapeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTape(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteTapeAsync(const DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTape(request), context);
    } );
}

DeleteTapeArchiveOutcome StorageGatewayClient::DeleteTapeArchive(const DeleteTapeArchiveRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTapeArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTapeArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTapeArchiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTapeArchiveOutcomeCallable StorageGatewayClient::DeleteTapeArchiveCallable(const DeleteTapeArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTapeArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTapeArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteTapeArchiveAsync(const DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTapeArchive(request), context);
    } );
}

DeleteTapePoolOutcome StorageGatewayClient::DeleteTapePool(const DeleteTapePoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTapePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTapePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTapePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTapePoolOutcomeCallable StorageGatewayClient::DeleteTapePoolCallable(const DeleteTapePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTapePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTapePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteTapePoolAsync(const DeleteTapePoolRequest& request, const DeleteTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTapePool(request), context);
    } );
}

DeleteVolumeOutcome StorageGatewayClient::DeleteVolume(const DeleteVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVolumeOutcomeCallable StorageGatewayClient::DeleteVolumeCallable(const DeleteVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVolume(request), context);
    } );
}

DescribeAvailabilityMonitorTestOutcome StorageGatewayClient::DescribeAvailabilityMonitorTest(const DescribeAvailabilityMonitorTestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAvailabilityMonitorTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAvailabilityMonitorTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAvailabilityMonitorTestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAvailabilityMonitorTestOutcomeCallable StorageGatewayClient::DescribeAvailabilityMonitorTestCallable(const DescribeAvailabilityMonitorTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailabilityMonitorTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAvailabilityMonitorTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeAvailabilityMonitorTestAsync(const DescribeAvailabilityMonitorTestRequest& request, const DescribeAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAvailabilityMonitorTest(request), context);
    } );
}

DescribeBandwidthRateLimitOutcome StorageGatewayClient::DescribeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBandwidthRateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBandwidthRateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBandwidthRateLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBandwidthRateLimitOutcomeCallable StorageGatewayClient::DescribeBandwidthRateLimitCallable(const DescribeBandwidthRateLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBandwidthRateLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBandwidthRateLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeBandwidthRateLimitAsync(const DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBandwidthRateLimit(request), context);
    } );
}

DescribeBandwidthRateLimitScheduleOutcome StorageGatewayClient::DescribeBandwidthRateLimitSchedule(const DescribeBandwidthRateLimitScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBandwidthRateLimitSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBandwidthRateLimitSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBandwidthRateLimitScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBandwidthRateLimitScheduleOutcomeCallable StorageGatewayClient::DescribeBandwidthRateLimitScheduleCallable(const DescribeBandwidthRateLimitScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBandwidthRateLimitScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBandwidthRateLimitSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeBandwidthRateLimitScheduleAsync(const DescribeBandwidthRateLimitScheduleRequest& request, const DescribeBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBandwidthRateLimitSchedule(request), context);
    } );
}

DescribeCacheOutcome StorageGatewayClient::DescribeCache(const DescribeCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCacheOutcomeCallable StorageGatewayClient::DescribeCacheCallable(const DescribeCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeCacheAsync(const DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCache(request), context);
    } );
}

DescribeCachediSCSIVolumesOutcome StorageGatewayClient::DescribeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCachediSCSIVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCachediSCSIVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCachediSCSIVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCachediSCSIVolumesOutcomeCallable StorageGatewayClient::DescribeCachediSCSIVolumesCallable(const DescribeCachediSCSIVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCachediSCSIVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCachediSCSIVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeCachediSCSIVolumesAsync(const DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCachediSCSIVolumes(request), context);
    } );
}

DescribeChapCredentialsOutcome StorageGatewayClient::DescribeChapCredentials(const DescribeChapCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChapCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChapCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeChapCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeChapCredentialsOutcomeCallable StorageGatewayClient::DescribeChapCredentialsCallable(const DescribeChapCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChapCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChapCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeChapCredentialsAsync(const DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChapCredentials(request), context);
    } );
}

DescribeFileSystemAssociationsOutcome StorageGatewayClient::DescribeFileSystemAssociations(const DescribeFileSystemAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFileSystemAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFileSystemAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFileSystemAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFileSystemAssociationsOutcomeCallable StorageGatewayClient::DescribeFileSystemAssociationsCallable(const DescribeFileSystemAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileSystemAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeFileSystemAssociationsAsync(const DescribeFileSystemAssociationsRequest& request, const DescribeFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFileSystemAssociations(request), context);
    } );
}

DescribeGatewayInformationOutcome StorageGatewayClient::DescribeGatewayInformation(const DescribeGatewayInformationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGatewayInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGatewayInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeGatewayInformationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGatewayInformationOutcomeCallable StorageGatewayClient::DescribeGatewayInformationCallable(const DescribeGatewayInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGatewayInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGatewayInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeGatewayInformationAsync(const DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeGatewayInformation(request), context);
    } );
}

DescribeMaintenanceStartTimeOutcome StorageGatewayClient::DescribeMaintenanceStartTime(const DescribeMaintenanceStartTimeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMaintenanceStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMaintenanceStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMaintenanceStartTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceStartTimeOutcomeCallable StorageGatewayClient::DescribeMaintenanceStartTimeCallable(const DescribeMaintenanceStartTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceStartTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceStartTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeMaintenanceStartTimeAsync(const DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMaintenanceStartTime(request), context);
    } );
}

DescribeNFSFileSharesOutcome StorageGatewayClient::DescribeNFSFileShares(const DescribeNFSFileSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNFSFileShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNFSFileShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNFSFileSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNFSFileSharesOutcomeCallable StorageGatewayClient::DescribeNFSFileSharesCallable(const DescribeNFSFileSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNFSFileSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNFSFileShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeNFSFileSharesAsync(const DescribeNFSFileSharesRequest& request, const DescribeNFSFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNFSFileShares(request), context);
    } );
}

DescribeSMBFileSharesOutcome StorageGatewayClient::DescribeSMBFileShares(const DescribeSMBFileSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSMBFileShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSMBFileShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSMBFileSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSMBFileSharesOutcomeCallable StorageGatewayClient::DescribeSMBFileSharesCallable(const DescribeSMBFileSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSMBFileSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSMBFileShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeSMBFileSharesAsync(const DescribeSMBFileSharesRequest& request, const DescribeSMBFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSMBFileShares(request), context);
    } );
}

DescribeSMBSettingsOutcome StorageGatewayClient::DescribeSMBSettings(const DescribeSMBSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSMBSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSMBSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSMBSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSMBSettingsOutcomeCallable StorageGatewayClient::DescribeSMBSettingsCallable(const DescribeSMBSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSMBSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSMBSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeSMBSettingsAsync(const DescribeSMBSettingsRequest& request, const DescribeSMBSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSMBSettings(request), context);
    } );
}

DescribeSnapshotScheduleOutcome StorageGatewayClient::DescribeSnapshotSchedule(const DescribeSnapshotScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSnapshotScheduleOutcomeCallable StorageGatewayClient::DescribeSnapshotScheduleCallable(const DescribeSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeSnapshotScheduleAsync(const DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSnapshotSchedule(request), context);
    } );
}

DescribeStorediSCSIVolumesOutcome StorageGatewayClient::DescribeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStorediSCSIVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStorediSCSIVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStorediSCSIVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStorediSCSIVolumesOutcomeCallable StorageGatewayClient::DescribeStorediSCSIVolumesCallable(const DescribeStorediSCSIVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStorediSCSIVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStorediSCSIVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeStorediSCSIVolumesAsync(const DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStorediSCSIVolumes(request), context);
    } );
}

DescribeTapeArchivesOutcome StorageGatewayClient::DescribeTapeArchives(const DescribeTapeArchivesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTapeArchives, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTapeArchives, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTapeArchivesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTapeArchivesOutcomeCallable StorageGatewayClient::DescribeTapeArchivesCallable(const DescribeTapeArchivesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTapeArchivesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTapeArchives(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeTapeArchivesAsync(const DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTapeArchives(request), context);
    } );
}

DescribeTapeRecoveryPointsOutcome StorageGatewayClient::DescribeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTapeRecoveryPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTapeRecoveryPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTapeRecoveryPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTapeRecoveryPointsOutcomeCallable StorageGatewayClient::DescribeTapeRecoveryPointsCallable(const DescribeTapeRecoveryPointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTapeRecoveryPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTapeRecoveryPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeTapeRecoveryPointsAsync(const DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTapeRecoveryPoints(request), context);
    } );
}

DescribeTapesOutcome StorageGatewayClient::DescribeTapes(const DescribeTapesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTapesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTapesOutcomeCallable StorageGatewayClient::DescribeTapesCallable(const DescribeTapesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTapesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTapes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeTapesAsync(const DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTapes(request), context);
    } );
}

DescribeUploadBufferOutcome StorageGatewayClient::DescribeUploadBuffer(const DescribeUploadBufferRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUploadBuffer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUploadBuffer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUploadBufferOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUploadBufferOutcomeCallable StorageGatewayClient::DescribeUploadBufferCallable(const DescribeUploadBufferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUploadBufferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUploadBuffer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeUploadBufferAsync(const DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUploadBuffer(request), context);
    } );
}

DescribeVTLDevicesOutcome StorageGatewayClient::DescribeVTLDevices(const DescribeVTLDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVTLDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVTLDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVTLDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVTLDevicesOutcomeCallable StorageGatewayClient::DescribeVTLDevicesCallable(const DescribeVTLDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVTLDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVTLDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeVTLDevicesAsync(const DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVTLDevices(request), context);
    } );
}

DescribeWorkingStorageOutcome StorageGatewayClient::DescribeWorkingStorage(const DescribeWorkingStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkingStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkingStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkingStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkingStorageOutcomeCallable StorageGatewayClient::DescribeWorkingStorageCallable(const DescribeWorkingStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkingStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkingStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DescribeWorkingStorageAsync(const DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkingStorage(request), context);
    } );
}

DetachVolumeOutcome StorageGatewayClient::DetachVolume(const DetachVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachVolumeOutcomeCallable StorageGatewayClient::DetachVolumeCallable(const DetachVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DetachVolumeAsync(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachVolume(request), context);
    } );
}

DisableGatewayOutcome StorageGatewayClient::DisableGateway(const DisableGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableGatewayOutcomeCallable StorageGatewayClient::DisableGatewayCallable(const DisableGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DisableGatewayAsync(const DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableGateway(request), context);
    } );
}

DisassociateFileSystemOutcome StorageGatewayClient::DisassociateFileSystem(const DisassociateFileSystemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateFileSystem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateFileSystemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFileSystemOutcomeCallable StorageGatewayClient::DisassociateFileSystemCallable(const DisassociateFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::DisassociateFileSystemAsync(const DisassociateFileSystemRequest& request, const DisassociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateFileSystem(request), context);
    } );
}

JoinDomainOutcome StorageGatewayClient::JoinDomain(const JoinDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, JoinDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, JoinDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return JoinDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

JoinDomainOutcomeCallable StorageGatewayClient::JoinDomainCallable(const JoinDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< JoinDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->JoinDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::JoinDomainAsync(const JoinDomainRequest& request, const JoinDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, JoinDomain(request), context);
    } );
}

ListAutomaticTapeCreationPoliciesOutcome StorageGatewayClient::ListAutomaticTapeCreationPolicies(const ListAutomaticTapeCreationPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAutomaticTapeCreationPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAutomaticTapeCreationPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAutomaticTapeCreationPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAutomaticTapeCreationPoliciesOutcomeCallable StorageGatewayClient::ListAutomaticTapeCreationPoliciesCallable(const ListAutomaticTapeCreationPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAutomaticTapeCreationPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAutomaticTapeCreationPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListAutomaticTapeCreationPoliciesAsync(const ListAutomaticTapeCreationPoliciesRequest& request, const ListAutomaticTapeCreationPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAutomaticTapeCreationPolicies(request), context);
    } );
}

ListFileSharesOutcome StorageGatewayClient::ListFileShares(const ListFileSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFileShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFileShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFileSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFileSharesOutcomeCallable StorageGatewayClient::ListFileSharesCallable(const ListFileSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFileSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFileShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListFileSharesAsync(const ListFileSharesRequest& request, const ListFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFileShares(request), context);
    } );
}

ListFileSystemAssociationsOutcome StorageGatewayClient::ListFileSystemAssociations(const ListFileSystemAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFileSystemAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFileSystemAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFileSystemAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFileSystemAssociationsOutcomeCallable StorageGatewayClient::ListFileSystemAssociationsCallable(const ListFileSystemAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFileSystemAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFileSystemAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListFileSystemAssociationsAsync(const ListFileSystemAssociationsRequest& request, const ListFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFileSystemAssociations(request), context);
    } );
}

ListGatewaysOutcome StorageGatewayClient::ListGateways(const ListGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGatewaysOutcomeCallable StorageGatewayClient::ListGatewaysCallable(const ListGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGateways(request), context);
    } );
}

ListLocalDisksOutcome StorageGatewayClient::ListLocalDisks(const ListLocalDisksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLocalDisks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLocalDisks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLocalDisksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLocalDisksOutcomeCallable StorageGatewayClient::ListLocalDisksCallable(const ListLocalDisksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLocalDisksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLocalDisks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListLocalDisksAsync(const ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLocalDisks(request), context);
    } );
}

ListTagsForResourceOutcome StorageGatewayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable StorageGatewayClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTapePoolsOutcome StorageGatewayClient::ListTapePools(const ListTapePoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTapePools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTapePools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTapePoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTapePoolsOutcomeCallable StorageGatewayClient::ListTapePoolsCallable(const ListTapePoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTapePoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTapePools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListTapePoolsAsync(const ListTapePoolsRequest& request, const ListTapePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTapePools(request), context);
    } );
}

ListTapesOutcome StorageGatewayClient::ListTapes(const ListTapesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTapes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTapesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTapesOutcomeCallable StorageGatewayClient::ListTapesCallable(const ListTapesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTapesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTapes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListTapesAsync(const ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTapes(request), context);
    } );
}

ListVolumeInitiatorsOutcome StorageGatewayClient::ListVolumeInitiators(const ListVolumeInitiatorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVolumeInitiators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVolumeInitiators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVolumeInitiatorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVolumeInitiatorsOutcomeCallable StorageGatewayClient::ListVolumeInitiatorsCallable(const ListVolumeInitiatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVolumeInitiatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVolumeInitiators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListVolumeInitiatorsAsync(const ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVolumeInitiators(request), context);
    } );
}

ListVolumeRecoveryPointsOutcome StorageGatewayClient::ListVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVolumeRecoveryPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVolumeRecoveryPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVolumeRecoveryPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVolumeRecoveryPointsOutcomeCallable StorageGatewayClient::ListVolumeRecoveryPointsCallable(const ListVolumeRecoveryPointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVolumeRecoveryPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVolumeRecoveryPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListVolumeRecoveryPointsAsync(const ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVolumeRecoveryPoints(request), context);
    } );
}

ListVolumesOutcome StorageGatewayClient::ListVolumes(const ListVolumesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVolumesOutcomeCallable StorageGatewayClient::ListVolumesCallable(const ListVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ListVolumesAsync(const ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVolumes(request), context);
    } );
}

NotifyWhenUploadedOutcome StorageGatewayClient::NotifyWhenUploaded(const NotifyWhenUploadedRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NotifyWhenUploaded, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NotifyWhenUploaded, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return NotifyWhenUploadedOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyWhenUploadedOutcomeCallable StorageGatewayClient::NotifyWhenUploadedCallable(const NotifyWhenUploadedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyWhenUploadedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyWhenUploaded(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::NotifyWhenUploadedAsync(const NotifyWhenUploadedRequest& request, const NotifyWhenUploadedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, NotifyWhenUploaded(request), context);
    } );
}

RefreshCacheOutcome StorageGatewayClient::RefreshCache(const RefreshCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RefreshCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RefreshCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RefreshCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshCacheOutcomeCallable StorageGatewayClient::RefreshCacheCallable(const RefreshCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::RefreshCacheAsync(const RefreshCacheRequest& request, const RefreshCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RefreshCache(request), context);
    } );
}

RemoveTagsFromResourceOutcome StorageGatewayClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable StorageGatewayClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTagsFromResource(request), context);
    } );
}

ResetCacheOutcome StorageGatewayClient::ResetCache(const ResetCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetCacheOutcomeCallable StorageGatewayClient::ResetCacheCallable(const ResetCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ResetCacheAsync(const ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetCache(request), context);
    } );
}

RetrieveTapeArchiveOutcome StorageGatewayClient::RetrieveTapeArchive(const RetrieveTapeArchiveRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveTapeArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetrieveTapeArchive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetrieveTapeArchiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetrieveTapeArchiveOutcomeCallable StorageGatewayClient::RetrieveTapeArchiveCallable(const RetrieveTapeArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetrieveTapeArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetrieveTapeArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::RetrieveTapeArchiveAsync(const RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetrieveTapeArchive(request), context);
    } );
}

RetrieveTapeRecoveryPointOutcome StorageGatewayClient::RetrieveTapeRecoveryPoint(const RetrieveTapeRecoveryPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetrieveTapeRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetrieveTapeRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetrieveTapeRecoveryPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetrieveTapeRecoveryPointOutcomeCallable StorageGatewayClient::RetrieveTapeRecoveryPointCallable(const RetrieveTapeRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetrieveTapeRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetrieveTapeRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::RetrieveTapeRecoveryPointAsync(const RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetrieveTapeRecoveryPoint(request), context);
    } );
}

SetLocalConsolePasswordOutcome StorageGatewayClient::SetLocalConsolePassword(const SetLocalConsolePasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetLocalConsolePassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetLocalConsolePassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetLocalConsolePasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetLocalConsolePasswordOutcomeCallable StorageGatewayClient::SetLocalConsolePasswordCallable(const SetLocalConsolePasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLocalConsolePasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLocalConsolePassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::SetLocalConsolePasswordAsync(const SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetLocalConsolePassword(request), context);
    } );
}

SetSMBGuestPasswordOutcome StorageGatewayClient::SetSMBGuestPassword(const SetSMBGuestPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetSMBGuestPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetSMBGuestPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetSMBGuestPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetSMBGuestPasswordOutcomeCallable StorageGatewayClient::SetSMBGuestPasswordCallable(const SetSMBGuestPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSMBGuestPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSMBGuestPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::SetSMBGuestPasswordAsync(const SetSMBGuestPasswordRequest& request, const SetSMBGuestPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetSMBGuestPassword(request), context);
    } );
}

ShutdownGatewayOutcome StorageGatewayClient::ShutdownGateway(const ShutdownGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ShutdownGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ShutdownGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ShutdownGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ShutdownGatewayOutcomeCallable StorageGatewayClient::ShutdownGatewayCallable(const ShutdownGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ShutdownGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ShutdownGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::ShutdownGatewayAsync(const ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ShutdownGateway(request), context);
    } );
}

StartAvailabilityMonitorTestOutcome StorageGatewayClient::StartAvailabilityMonitorTest(const StartAvailabilityMonitorTestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAvailabilityMonitorTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAvailabilityMonitorTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartAvailabilityMonitorTestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAvailabilityMonitorTestOutcomeCallable StorageGatewayClient::StartAvailabilityMonitorTestCallable(const StartAvailabilityMonitorTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAvailabilityMonitorTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAvailabilityMonitorTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::StartAvailabilityMonitorTestAsync(const StartAvailabilityMonitorTestRequest& request, const StartAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAvailabilityMonitorTest(request), context);
    } );
}

StartGatewayOutcome StorageGatewayClient::StartGateway(const StartGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartGatewayOutcomeCallable StorageGatewayClient::StartGatewayCallable(const StartGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::StartGatewayAsync(const StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartGateway(request), context);
    } );
}

UpdateAutomaticTapeCreationPolicyOutcome StorageGatewayClient::UpdateAutomaticTapeCreationPolicy(const UpdateAutomaticTapeCreationPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAutomaticTapeCreationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAutomaticTapeCreationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAutomaticTapeCreationPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAutomaticTapeCreationPolicyOutcomeCallable StorageGatewayClient::UpdateAutomaticTapeCreationPolicyCallable(const UpdateAutomaticTapeCreationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAutomaticTapeCreationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAutomaticTapeCreationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateAutomaticTapeCreationPolicyAsync(const UpdateAutomaticTapeCreationPolicyRequest& request, const UpdateAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAutomaticTapeCreationPolicy(request), context);
    } );
}

UpdateBandwidthRateLimitOutcome StorageGatewayClient::UpdateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBandwidthRateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBandwidthRateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBandwidthRateLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBandwidthRateLimitOutcomeCallable StorageGatewayClient::UpdateBandwidthRateLimitCallable(const UpdateBandwidthRateLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBandwidthRateLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBandwidthRateLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateBandwidthRateLimitAsync(const UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBandwidthRateLimit(request), context);
    } );
}

UpdateBandwidthRateLimitScheduleOutcome StorageGatewayClient::UpdateBandwidthRateLimitSchedule(const UpdateBandwidthRateLimitScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBandwidthRateLimitSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBandwidthRateLimitSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBandwidthRateLimitScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBandwidthRateLimitScheduleOutcomeCallable StorageGatewayClient::UpdateBandwidthRateLimitScheduleCallable(const UpdateBandwidthRateLimitScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBandwidthRateLimitScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBandwidthRateLimitSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateBandwidthRateLimitScheduleAsync(const UpdateBandwidthRateLimitScheduleRequest& request, const UpdateBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBandwidthRateLimitSchedule(request), context);
    } );
}

UpdateChapCredentialsOutcome StorageGatewayClient::UpdateChapCredentials(const UpdateChapCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChapCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChapCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateChapCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateChapCredentialsOutcomeCallable StorageGatewayClient::UpdateChapCredentialsCallable(const UpdateChapCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChapCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChapCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateChapCredentialsAsync(const UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateChapCredentials(request), context);
    } );
}

UpdateFileSystemAssociationOutcome StorageGatewayClient::UpdateFileSystemAssociation(const UpdateFileSystemAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFileSystemAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFileSystemAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateFileSystemAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFileSystemAssociationOutcomeCallable StorageGatewayClient::UpdateFileSystemAssociationCallable(const UpdateFileSystemAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFileSystemAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFileSystemAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateFileSystemAssociationAsync(const UpdateFileSystemAssociationRequest& request, const UpdateFileSystemAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFileSystemAssociation(request), context);
    } );
}

UpdateGatewayInformationOutcome StorageGatewayClient::UpdateGatewayInformation(const UpdateGatewayInformationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGatewayInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGatewayInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGatewayInformationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayInformationOutcomeCallable StorageGatewayClient::UpdateGatewayInformationCallable(const UpdateGatewayInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateGatewayInformationAsync(const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGatewayInformation(request), context);
    } );
}

UpdateGatewaySoftwareNowOutcome StorageGatewayClient::UpdateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGatewaySoftwareNow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGatewaySoftwareNow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGatewaySoftwareNowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewaySoftwareNowOutcomeCallable StorageGatewayClient::UpdateGatewaySoftwareNowCallable(const UpdateGatewaySoftwareNowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewaySoftwareNowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewaySoftwareNow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateGatewaySoftwareNowAsync(const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGatewaySoftwareNow(request), context);
    } );
}

UpdateMaintenanceStartTimeOutcome StorageGatewayClient::UpdateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMaintenanceStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMaintenanceStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMaintenanceStartTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceStartTimeOutcomeCallable StorageGatewayClient::UpdateMaintenanceStartTimeCallable(const UpdateMaintenanceStartTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceStartTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceStartTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateMaintenanceStartTimeAsync(const UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMaintenanceStartTime(request), context);
    } );
}

UpdateNFSFileShareOutcome StorageGatewayClient::UpdateNFSFileShare(const UpdateNFSFileShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNFSFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNFSFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateNFSFileShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNFSFileShareOutcomeCallable StorageGatewayClient::UpdateNFSFileShareCallable(const UpdateNFSFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNFSFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNFSFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateNFSFileShareAsync(const UpdateNFSFileShareRequest& request, const UpdateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNFSFileShare(request), context);
    } );
}

UpdateSMBFileShareOutcome StorageGatewayClient::UpdateSMBFileShare(const UpdateSMBFileShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSMBFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSMBFileShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSMBFileShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBFileShareOutcomeCallable StorageGatewayClient::UpdateSMBFileShareCallable(const UpdateSMBFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateSMBFileShareAsync(const UpdateSMBFileShareRequest& request, const UpdateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSMBFileShare(request), context);
    } );
}

UpdateSMBFileShareVisibilityOutcome StorageGatewayClient::UpdateSMBFileShareVisibility(const UpdateSMBFileShareVisibilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSMBFileShareVisibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSMBFileShareVisibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSMBFileShareVisibilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBFileShareVisibilityOutcomeCallable StorageGatewayClient::UpdateSMBFileShareVisibilityCallable(const UpdateSMBFileShareVisibilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBFileShareVisibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBFileShareVisibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateSMBFileShareVisibilityAsync(const UpdateSMBFileShareVisibilityRequest& request, const UpdateSMBFileShareVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSMBFileShareVisibility(request), context);
    } );
}

UpdateSMBLocalGroupsOutcome StorageGatewayClient::UpdateSMBLocalGroups(const UpdateSMBLocalGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSMBLocalGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSMBLocalGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSMBLocalGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBLocalGroupsOutcomeCallable StorageGatewayClient::UpdateSMBLocalGroupsCallable(const UpdateSMBLocalGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBLocalGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBLocalGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateSMBLocalGroupsAsync(const UpdateSMBLocalGroupsRequest& request, const UpdateSMBLocalGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSMBLocalGroups(request), context);
    } );
}

UpdateSMBSecurityStrategyOutcome StorageGatewayClient::UpdateSMBSecurityStrategy(const UpdateSMBSecurityStrategyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSMBSecurityStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSMBSecurityStrategy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSMBSecurityStrategyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBSecurityStrategyOutcomeCallable StorageGatewayClient::UpdateSMBSecurityStrategyCallable(const UpdateSMBSecurityStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBSecurityStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBSecurityStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateSMBSecurityStrategyAsync(const UpdateSMBSecurityStrategyRequest& request, const UpdateSMBSecurityStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSMBSecurityStrategy(request), context);
    } );
}

UpdateSnapshotScheduleOutcome StorageGatewayClient::UpdateSnapshotSchedule(const UpdateSnapshotScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSnapshotScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSnapshotScheduleOutcomeCallable StorageGatewayClient::UpdateSnapshotScheduleCallable(const UpdateSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateSnapshotScheduleAsync(const UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSnapshotSchedule(request), context);
    } );
}

UpdateVTLDeviceTypeOutcome StorageGatewayClient::UpdateVTLDeviceType(const UpdateVTLDeviceTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVTLDeviceType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVTLDeviceType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVTLDeviceTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVTLDeviceTypeOutcomeCallable StorageGatewayClient::UpdateVTLDeviceTypeCallable(const UpdateVTLDeviceTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVTLDeviceTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVTLDeviceType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClient::UpdateVTLDeviceTypeAsync(const UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVTLDeviceType(request), context);
    } );
}

