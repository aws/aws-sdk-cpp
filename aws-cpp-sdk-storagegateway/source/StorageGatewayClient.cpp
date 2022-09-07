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

#include <aws/storagegateway/StorageGatewayClient.h>
#include <aws/storagegateway/StorageGatewayEndpoint.h>
#include <aws/storagegateway/StorageGatewayErrorMarshaller.h>
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

static const char* SERVICE_NAME = "storagegateway";
static const char* ALLOCATION_TAG = "StorageGatewayClient";

StorageGatewayClient::StorageGatewayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::~StorageGatewayClient()
{
}

void StorageGatewayClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Storage Gateway");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + StorageGatewayEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void StorageGatewayClient::OverrideEndpoint(const Aws::String& endpoint)
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

ActivateGatewayOutcome StorageGatewayClient::ActivateGateway(const ActivateGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ActivateGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateGatewayOutcomeCallable StorageGatewayClient::ActivateGatewayCallable(const ActivateGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientActivateGatewayAsyncHelper(StorageGatewayClient const * const clientThis, const ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ActivateGateway(request), context);
}

void StorageGatewayClient::ActivateGatewayAsync(const ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientActivateGatewayAsyncHelper( this, request, handler, context ); } );
}

AddCacheOutcome StorageGatewayClient::AddCache(const AddCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddCacheOutcomeCallable StorageGatewayClient::AddCacheCallable(const AddCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientAddCacheAsyncHelper(StorageGatewayClient const * const clientThis, const AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddCache(request), context);
}

void StorageGatewayClient::AddCacheAsync(const AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientAddCacheAsyncHelper( this, request, handler, context ); } );
}

AddTagsToResourceOutcome StorageGatewayClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable StorageGatewayClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientAddTagsToResourceAsyncHelper(StorageGatewayClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void StorageGatewayClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

AddUploadBufferOutcome StorageGatewayClient::AddUploadBuffer(const AddUploadBufferRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddUploadBufferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddUploadBufferOutcomeCallable StorageGatewayClient::AddUploadBufferCallable(const AddUploadBufferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddUploadBufferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddUploadBuffer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientAddUploadBufferAsyncHelper(StorageGatewayClient const * const clientThis, const AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddUploadBuffer(request), context);
}

void StorageGatewayClient::AddUploadBufferAsync(const AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientAddUploadBufferAsyncHelper( this, request, handler, context ); } );
}

AddWorkingStorageOutcome StorageGatewayClient::AddWorkingStorage(const AddWorkingStorageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddWorkingStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddWorkingStorageOutcomeCallable StorageGatewayClient::AddWorkingStorageCallable(const AddWorkingStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddWorkingStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddWorkingStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientAddWorkingStorageAsyncHelper(StorageGatewayClient const * const clientThis, const AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddWorkingStorage(request), context);
}

void StorageGatewayClient::AddWorkingStorageAsync(const AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientAddWorkingStorageAsyncHelper( this, request, handler, context ); } );
}

AssignTapePoolOutcome StorageGatewayClient::AssignTapePool(const AssignTapePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssignTapePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssignTapePoolOutcomeCallable StorageGatewayClient::AssignTapePoolCallable(const AssignTapePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignTapePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignTapePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientAssignTapePoolAsyncHelper(StorageGatewayClient const * const clientThis, const AssignTapePoolRequest& request, const AssignTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssignTapePool(request), context);
}

void StorageGatewayClient::AssignTapePoolAsync(const AssignTapePoolRequest& request, const AssignTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientAssignTapePoolAsyncHelper( this, request, handler, context ); } );
}

AssociateFileSystemOutcome StorageGatewayClient::AssociateFileSystem(const AssociateFileSystemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateFileSystemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFileSystemOutcomeCallable StorageGatewayClient::AssociateFileSystemCallable(const AssociateFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientAssociateFileSystemAsyncHelper(StorageGatewayClient const * const clientThis, const AssociateFileSystemRequest& request, const AssociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateFileSystem(request), context);
}

void StorageGatewayClient::AssociateFileSystemAsync(const AssociateFileSystemRequest& request, const AssociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientAssociateFileSystemAsyncHelper( this, request, handler, context ); } );
}

AttachVolumeOutcome StorageGatewayClient::AttachVolume(const AttachVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachVolumeOutcomeCallable StorageGatewayClient::AttachVolumeCallable(const AttachVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientAttachVolumeAsyncHelper(StorageGatewayClient const * const clientThis, const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachVolume(request), context);
}

void StorageGatewayClient::AttachVolumeAsync(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientAttachVolumeAsyncHelper( this, request, handler, context ); } );
}

CancelArchivalOutcome StorageGatewayClient::CancelArchival(const CancelArchivalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelArchivalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelArchivalOutcomeCallable StorageGatewayClient::CancelArchivalCallable(const CancelArchivalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelArchivalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelArchival(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCancelArchivalAsyncHelper(StorageGatewayClient const * const clientThis, const CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelArchival(request), context);
}

void StorageGatewayClient::CancelArchivalAsync(const CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCancelArchivalAsyncHelper( this, request, handler, context ); } );
}

CancelRetrievalOutcome StorageGatewayClient::CancelRetrieval(const CancelRetrievalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelRetrievalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelRetrievalOutcomeCallable StorageGatewayClient::CancelRetrievalCallable(const CancelRetrievalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelRetrievalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelRetrieval(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCancelRetrievalAsyncHelper(StorageGatewayClient const * const clientThis, const CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelRetrieval(request), context);
}

void StorageGatewayClient::CancelRetrievalAsync(const CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCancelRetrievalAsyncHelper( this, request, handler, context ); } );
}

CreateCachediSCSIVolumeOutcome StorageGatewayClient::CreateCachediSCSIVolume(const CreateCachediSCSIVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCachediSCSIVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCachediSCSIVolumeOutcomeCallable StorageGatewayClient::CreateCachediSCSIVolumeCallable(const CreateCachediSCSIVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCachediSCSIVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCachediSCSIVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateCachediSCSIVolumeAsyncHelper(StorageGatewayClient const * const clientThis, const CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCachediSCSIVolume(request), context);
}

void StorageGatewayClient::CreateCachediSCSIVolumeAsync(const CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateCachediSCSIVolumeAsyncHelper( this, request, handler, context ); } );
}

CreateNFSFileShareOutcome StorageGatewayClient::CreateNFSFileShare(const CreateNFSFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateNFSFileShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNFSFileShareOutcomeCallable StorageGatewayClient::CreateNFSFileShareCallable(const CreateNFSFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNFSFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNFSFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateNFSFileShareAsyncHelper(StorageGatewayClient const * const clientThis, const CreateNFSFileShareRequest& request, const CreateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNFSFileShare(request), context);
}

void StorageGatewayClient::CreateNFSFileShareAsync(const CreateNFSFileShareRequest& request, const CreateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateNFSFileShareAsyncHelper( this, request, handler, context ); } );
}

CreateSMBFileShareOutcome StorageGatewayClient::CreateSMBFileShare(const CreateSMBFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSMBFileShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSMBFileShareOutcomeCallable StorageGatewayClient::CreateSMBFileShareCallable(const CreateSMBFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSMBFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSMBFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateSMBFileShareAsyncHelper(StorageGatewayClient const * const clientThis, const CreateSMBFileShareRequest& request, const CreateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSMBFileShare(request), context);
}

void StorageGatewayClient::CreateSMBFileShareAsync(const CreateSMBFileShareRequest& request, const CreateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateSMBFileShareAsyncHelper( this, request, handler, context ); } );
}

CreateSnapshotOutcome StorageGatewayClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable StorageGatewayClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateSnapshotAsyncHelper(StorageGatewayClient const * const clientThis, const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSnapshot(request), context);
}

void StorageGatewayClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateSnapshotFromVolumeRecoveryPointOutcome StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotFromVolumeRecoveryPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotFromVolumeRecoveryPointOutcomeCallable StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointCallable(const CreateSnapshotFromVolumeRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotFromVolumeRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshotFromVolumeRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateSnapshotFromVolumeRecoveryPointAsyncHelper(StorageGatewayClient const * const clientThis, const CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSnapshotFromVolumeRecoveryPoint(request), context);
}

void StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointAsync(const CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateSnapshotFromVolumeRecoveryPointAsyncHelper( this, request, handler, context ); } );
}

CreateStorediSCSIVolumeOutcome StorageGatewayClient::CreateStorediSCSIVolume(const CreateStorediSCSIVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStorediSCSIVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStorediSCSIVolumeOutcomeCallable StorageGatewayClient::CreateStorediSCSIVolumeCallable(const CreateStorediSCSIVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStorediSCSIVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStorediSCSIVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateStorediSCSIVolumeAsyncHelper(StorageGatewayClient const * const clientThis, const CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStorediSCSIVolume(request), context);
}

void StorageGatewayClient::CreateStorediSCSIVolumeAsync(const CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateStorediSCSIVolumeAsyncHelper( this, request, handler, context ); } );
}

CreateTapePoolOutcome StorageGatewayClient::CreateTapePool(const CreateTapePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTapePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTapePoolOutcomeCallable StorageGatewayClient::CreateTapePoolCallable(const CreateTapePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTapePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTapePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateTapePoolAsyncHelper(StorageGatewayClient const * const clientThis, const CreateTapePoolRequest& request, const CreateTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTapePool(request), context);
}

void StorageGatewayClient::CreateTapePoolAsync(const CreateTapePoolRequest& request, const CreateTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateTapePoolAsyncHelper( this, request, handler, context ); } );
}

CreateTapeWithBarcodeOutcome StorageGatewayClient::CreateTapeWithBarcode(const CreateTapeWithBarcodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTapeWithBarcodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTapeWithBarcodeOutcomeCallable StorageGatewayClient::CreateTapeWithBarcodeCallable(const CreateTapeWithBarcodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTapeWithBarcodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTapeWithBarcode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateTapeWithBarcodeAsyncHelper(StorageGatewayClient const * const clientThis, const CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTapeWithBarcode(request), context);
}

void StorageGatewayClient::CreateTapeWithBarcodeAsync(const CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateTapeWithBarcodeAsyncHelper( this, request, handler, context ); } );
}

CreateTapesOutcome StorageGatewayClient::CreateTapes(const CreateTapesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTapesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTapesOutcomeCallable StorageGatewayClient::CreateTapesCallable(const CreateTapesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTapesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTapes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientCreateTapesAsyncHelper(StorageGatewayClient const * const clientThis, const CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTapes(request), context);
}

void StorageGatewayClient::CreateTapesAsync(const CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientCreateTapesAsyncHelper( this, request, handler, context ); } );
}

DeleteAutomaticTapeCreationPolicyOutcome StorageGatewayClient::DeleteAutomaticTapeCreationPolicy(const DeleteAutomaticTapeCreationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAutomaticTapeCreationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAutomaticTapeCreationPolicyOutcomeCallable StorageGatewayClient::DeleteAutomaticTapeCreationPolicyCallable(const DeleteAutomaticTapeCreationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAutomaticTapeCreationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAutomaticTapeCreationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteAutomaticTapeCreationPolicyAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteAutomaticTapeCreationPolicyRequest& request, const DeleteAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAutomaticTapeCreationPolicy(request), context);
}

void StorageGatewayClient::DeleteAutomaticTapeCreationPolicyAsync(const DeleteAutomaticTapeCreationPolicyRequest& request, const DeleteAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteAutomaticTapeCreationPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteBandwidthRateLimitOutcome StorageGatewayClient::DeleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBandwidthRateLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBandwidthRateLimitOutcomeCallable StorageGatewayClient::DeleteBandwidthRateLimitCallable(const DeleteBandwidthRateLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBandwidthRateLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBandwidthRateLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteBandwidthRateLimitAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBandwidthRateLimit(request), context);
}

void StorageGatewayClient::DeleteBandwidthRateLimitAsync(const DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteBandwidthRateLimitAsyncHelper( this, request, handler, context ); } );
}

DeleteChapCredentialsOutcome StorageGatewayClient::DeleteChapCredentials(const DeleteChapCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteChapCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteChapCredentialsOutcomeCallable StorageGatewayClient::DeleteChapCredentialsCallable(const DeleteChapCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChapCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChapCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteChapCredentialsAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteChapCredentials(request), context);
}

void StorageGatewayClient::DeleteChapCredentialsAsync(const DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteChapCredentialsAsyncHelper( this, request, handler, context ); } );
}

DeleteFileShareOutcome StorageGatewayClient::DeleteFileShare(const DeleteFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFileShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFileShareOutcomeCallable StorageGatewayClient::DeleteFileShareCallable(const DeleteFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteFileShareAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteFileShareRequest& request, const DeleteFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFileShare(request), context);
}

void StorageGatewayClient::DeleteFileShareAsync(const DeleteFileShareRequest& request, const DeleteFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteFileShareAsyncHelper( this, request, handler, context ); } );
}

DeleteGatewayOutcome StorageGatewayClient::DeleteGateway(const DeleteGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayOutcomeCallable StorageGatewayClient::DeleteGatewayCallable(const DeleteGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteGatewayAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGateway(request), context);
}

void StorageGatewayClient::DeleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteGatewayAsyncHelper( this, request, handler, context ); } );
}

DeleteSnapshotScheduleOutcome StorageGatewayClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSnapshotScheduleOutcomeCallable StorageGatewayClient::DeleteSnapshotScheduleCallable(const DeleteSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteSnapshotScheduleAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSnapshotSchedule(request), context);
}

void StorageGatewayClient::DeleteSnapshotScheduleAsync(const DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteSnapshotScheduleAsyncHelper( this, request, handler, context ); } );
}

DeleteTapeOutcome StorageGatewayClient::DeleteTape(const DeleteTapeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTapeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTapeOutcomeCallable StorageGatewayClient::DeleteTapeCallable(const DeleteTapeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTapeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTape(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteTapeAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTape(request), context);
}

void StorageGatewayClient::DeleteTapeAsync(const DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteTapeAsyncHelper( this, request, handler, context ); } );
}

DeleteTapeArchiveOutcome StorageGatewayClient::DeleteTapeArchive(const DeleteTapeArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTapeArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTapeArchiveOutcomeCallable StorageGatewayClient::DeleteTapeArchiveCallable(const DeleteTapeArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTapeArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTapeArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteTapeArchiveAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTapeArchive(request), context);
}

void StorageGatewayClient::DeleteTapeArchiveAsync(const DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteTapeArchiveAsyncHelper( this, request, handler, context ); } );
}

DeleteTapePoolOutcome StorageGatewayClient::DeleteTapePool(const DeleteTapePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTapePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTapePoolOutcomeCallable StorageGatewayClient::DeleteTapePoolCallable(const DeleteTapePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTapePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTapePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteTapePoolAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteTapePoolRequest& request, const DeleteTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTapePool(request), context);
}

void StorageGatewayClient::DeleteTapePoolAsync(const DeleteTapePoolRequest& request, const DeleteTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteTapePoolAsyncHelper( this, request, handler, context ); } );
}

DeleteVolumeOutcome StorageGatewayClient::DeleteVolume(const DeleteVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVolumeOutcomeCallable StorageGatewayClient::DeleteVolumeCallable(const DeleteVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDeleteVolumeAsyncHelper(StorageGatewayClient const * const clientThis, const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVolume(request), context);
}

void StorageGatewayClient::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDeleteVolumeAsyncHelper( this, request, handler, context ); } );
}

DescribeAvailabilityMonitorTestOutcome StorageGatewayClient::DescribeAvailabilityMonitorTest(const DescribeAvailabilityMonitorTestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAvailabilityMonitorTestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAvailabilityMonitorTestOutcomeCallable StorageGatewayClient::DescribeAvailabilityMonitorTestCallable(const DescribeAvailabilityMonitorTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailabilityMonitorTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAvailabilityMonitorTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeAvailabilityMonitorTestAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeAvailabilityMonitorTestRequest& request, const DescribeAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAvailabilityMonitorTest(request), context);
}

void StorageGatewayClient::DescribeAvailabilityMonitorTestAsync(const DescribeAvailabilityMonitorTestRequest& request, const DescribeAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeAvailabilityMonitorTestAsyncHelper( this, request, handler, context ); } );
}

DescribeBandwidthRateLimitOutcome StorageGatewayClient::DescribeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeBandwidthRateLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBandwidthRateLimitOutcomeCallable StorageGatewayClient::DescribeBandwidthRateLimitCallable(const DescribeBandwidthRateLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBandwidthRateLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBandwidthRateLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeBandwidthRateLimitAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBandwidthRateLimit(request), context);
}

void StorageGatewayClient::DescribeBandwidthRateLimitAsync(const DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeBandwidthRateLimitAsyncHelper( this, request, handler, context ); } );
}

DescribeBandwidthRateLimitScheduleOutcome StorageGatewayClient::DescribeBandwidthRateLimitSchedule(const DescribeBandwidthRateLimitScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeBandwidthRateLimitScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBandwidthRateLimitScheduleOutcomeCallable StorageGatewayClient::DescribeBandwidthRateLimitScheduleCallable(const DescribeBandwidthRateLimitScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBandwidthRateLimitScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBandwidthRateLimitSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeBandwidthRateLimitScheduleAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeBandwidthRateLimitScheduleRequest& request, const DescribeBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBandwidthRateLimitSchedule(request), context);
}

void StorageGatewayClient::DescribeBandwidthRateLimitScheduleAsync(const DescribeBandwidthRateLimitScheduleRequest& request, const DescribeBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeBandwidthRateLimitScheduleAsyncHelper( this, request, handler, context ); } );
}

DescribeCacheOutcome StorageGatewayClient::DescribeCache(const DescribeCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCacheOutcomeCallable StorageGatewayClient::DescribeCacheCallable(const DescribeCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeCacheAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCache(request), context);
}

void StorageGatewayClient::DescribeCacheAsync(const DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeCacheAsyncHelper( this, request, handler, context ); } );
}

DescribeCachediSCSIVolumesOutcome StorageGatewayClient::DescribeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCachediSCSIVolumesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCachediSCSIVolumesOutcomeCallable StorageGatewayClient::DescribeCachediSCSIVolumesCallable(const DescribeCachediSCSIVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCachediSCSIVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCachediSCSIVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeCachediSCSIVolumesAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCachediSCSIVolumes(request), context);
}

void StorageGatewayClient::DescribeCachediSCSIVolumesAsync(const DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeCachediSCSIVolumesAsyncHelper( this, request, handler, context ); } );
}

DescribeChapCredentialsOutcome StorageGatewayClient::DescribeChapCredentials(const DescribeChapCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeChapCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeChapCredentialsOutcomeCallable StorageGatewayClient::DescribeChapCredentialsCallable(const DescribeChapCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChapCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChapCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeChapCredentialsAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeChapCredentials(request), context);
}

void StorageGatewayClient::DescribeChapCredentialsAsync(const DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeChapCredentialsAsyncHelper( this, request, handler, context ); } );
}

DescribeFileSystemAssociationsOutcome StorageGatewayClient::DescribeFileSystemAssociations(const DescribeFileSystemAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFileSystemAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFileSystemAssociationsOutcomeCallable StorageGatewayClient::DescribeFileSystemAssociationsCallable(const DescribeFileSystemAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileSystemAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeFileSystemAssociationsAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeFileSystemAssociationsRequest& request, const DescribeFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFileSystemAssociations(request), context);
}

void StorageGatewayClient::DescribeFileSystemAssociationsAsync(const DescribeFileSystemAssociationsRequest& request, const DescribeFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeFileSystemAssociationsAsyncHelper( this, request, handler, context ); } );
}

DescribeGatewayInformationOutcome StorageGatewayClient::DescribeGatewayInformation(const DescribeGatewayInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGatewayInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGatewayInformationOutcomeCallable StorageGatewayClient::DescribeGatewayInformationCallable(const DescribeGatewayInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGatewayInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGatewayInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeGatewayInformationAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGatewayInformation(request), context);
}

void StorageGatewayClient::DescribeGatewayInformationAsync(const DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeGatewayInformationAsyncHelper( this, request, handler, context ); } );
}

DescribeMaintenanceStartTimeOutcome StorageGatewayClient::DescribeMaintenanceStartTime(const DescribeMaintenanceStartTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMaintenanceStartTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMaintenanceStartTimeOutcomeCallable StorageGatewayClient::DescribeMaintenanceStartTimeCallable(const DescribeMaintenanceStartTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMaintenanceStartTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMaintenanceStartTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeMaintenanceStartTimeAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMaintenanceStartTime(request), context);
}

void StorageGatewayClient::DescribeMaintenanceStartTimeAsync(const DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeMaintenanceStartTimeAsyncHelper( this, request, handler, context ); } );
}

DescribeNFSFileSharesOutcome StorageGatewayClient::DescribeNFSFileShares(const DescribeNFSFileSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeNFSFileSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNFSFileSharesOutcomeCallable StorageGatewayClient::DescribeNFSFileSharesCallable(const DescribeNFSFileSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNFSFileSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNFSFileShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeNFSFileSharesAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeNFSFileSharesRequest& request, const DescribeNFSFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNFSFileShares(request), context);
}

void StorageGatewayClient::DescribeNFSFileSharesAsync(const DescribeNFSFileSharesRequest& request, const DescribeNFSFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeNFSFileSharesAsyncHelper( this, request, handler, context ); } );
}

DescribeSMBFileSharesOutcome StorageGatewayClient::DescribeSMBFileShares(const DescribeSMBFileSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSMBFileSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSMBFileSharesOutcomeCallable StorageGatewayClient::DescribeSMBFileSharesCallable(const DescribeSMBFileSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSMBFileSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSMBFileShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeSMBFileSharesAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeSMBFileSharesRequest& request, const DescribeSMBFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSMBFileShares(request), context);
}

void StorageGatewayClient::DescribeSMBFileSharesAsync(const DescribeSMBFileSharesRequest& request, const DescribeSMBFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeSMBFileSharesAsyncHelper( this, request, handler, context ); } );
}

DescribeSMBSettingsOutcome StorageGatewayClient::DescribeSMBSettings(const DescribeSMBSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSMBSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSMBSettingsOutcomeCallable StorageGatewayClient::DescribeSMBSettingsCallable(const DescribeSMBSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSMBSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSMBSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeSMBSettingsAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeSMBSettingsRequest& request, const DescribeSMBSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSMBSettings(request), context);
}

void StorageGatewayClient::DescribeSMBSettingsAsync(const DescribeSMBSettingsRequest& request, const DescribeSMBSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeSMBSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeSnapshotScheduleOutcome StorageGatewayClient::DescribeSnapshotSchedule(const DescribeSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSnapshotScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSnapshotScheduleOutcomeCallable StorageGatewayClient::DescribeSnapshotScheduleCallable(const DescribeSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeSnapshotScheduleAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSnapshotSchedule(request), context);
}

void StorageGatewayClient::DescribeSnapshotScheduleAsync(const DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeSnapshotScheduleAsyncHelper( this, request, handler, context ); } );
}

DescribeStorediSCSIVolumesOutcome StorageGatewayClient::DescribeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStorediSCSIVolumesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStorediSCSIVolumesOutcomeCallable StorageGatewayClient::DescribeStorediSCSIVolumesCallable(const DescribeStorediSCSIVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStorediSCSIVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStorediSCSIVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeStorediSCSIVolumesAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStorediSCSIVolumes(request), context);
}

void StorageGatewayClient::DescribeStorediSCSIVolumesAsync(const DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeStorediSCSIVolumesAsyncHelper( this, request, handler, context ); } );
}

DescribeTapeArchivesOutcome StorageGatewayClient::DescribeTapeArchives(const DescribeTapeArchivesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTapeArchivesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTapeArchivesOutcomeCallable StorageGatewayClient::DescribeTapeArchivesCallable(const DescribeTapeArchivesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTapeArchivesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTapeArchives(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeTapeArchivesAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTapeArchives(request), context);
}

void StorageGatewayClient::DescribeTapeArchivesAsync(const DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeTapeArchivesAsyncHelper( this, request, handler, context ); } );
}

DescribeTapeRecoveryPointsOutcome StorageGatewayClient::DescribeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTapeRecoveryPointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTapeRecoveryPointsOutcomeCallable StorageGatewayClient::DescribeTapeRecoveryPointsCallable(const DescribeTapeRecoveryPointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTapeRecoveryPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTapeRecoveryPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeTapeRecoveryPointsAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTapeRecoveryPoints(request), context);
}

void StorageGatewayClient::DescribeTapeRecoveryPointsAsync(const DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeTapeRecoveryPointsAsyncHelper( this, request, handler, context ); } );
}

DescribeTapesOutcome StorageGatewayClient::DescribeTapes(const DescribeTapesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTapesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTapesOutcomeCallable StorageGatewayClient::DescribeTapesCallable(const DescribeTapesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTapesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTapes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeTapesAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTapes(request), context);
}

void StorageGatewayClient::DescribeTapesAsync(const DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeTapesAsyncHelper( this, request, handler, context ); } );
}

DescribeUploadBufferOutcome StorageGatewayClient::DescribeUploadBuffer(const DescribeUploadBufferRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUploadBufferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUploadBufferOutcomeCallable StorageGatewayClient::DescribeUploadBufferCallable(const DescribeUploadBufferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUploadBufferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUploadBuffer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeUploadBufferAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUploadBuffer(request), context);
}

void StorageGatewayClient::DescribeUploadBufferAsync(const DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeUploadBufferAsyncHelper( this, request, handler, context ); } );
}

DescribeVTLDevicesOutcome StorageGatewayClient::DescribeVTLDevices(const DescribeVTLDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeVTLDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVTLDevicesOutcomeCallable StorageGatewayClient::DescribeVTLDevicesCallable(const DescribeVTLDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVTLDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVTLDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeVTLDevicesAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVTLDevices(request), context);
}

void StorageGatewayClient::DescribeVTLDevicesAsync(const DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeVTLDevicesAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkingStorageOutcome StorageGatewayClient::DescribeWorkingStorage(const DescribeWorkingStorageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkingStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkingStorageOutcomeCallable StorageGatewayClient::DescribeWorkingStorageCallable(const DescribeWorkingStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkingStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkingStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDescribeWorkingStorageAsyncHelper(StorageGatewayClient const * const clientThis, const DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkingStorage(request), context);
}

void StorageGatewayClient::DescribeWorkingStorageAsync(const DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDescribeWorkingStorageAsyncHelper( this, request, handler, context ); } );
}

DetachVolumeOutcome StorageGatewayClient::DetachVolume(const DetachVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachVolumeOutcomeCallable StorageGatewayClient::DetachVolumeCallable(const DetachVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDetachVolumeAsyncHelper(StorageGatewayClient const * const clientThis, const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachVolume(request), context);
}

void StorageGatewayClient::DetachVolumeAsync(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDetachVolumeAsyncHelper( this, request, handler, context ); } );
}

DisableGatewayOutcome StorageGatewayClient::DisableGateway(const DisableGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableGatewayOutcomeCallable StorageGatewayClient::DisableGatewayCallable(const DisableGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDisableGatewayAsyncHelper(StorageGatewayClient const * const clientThis, const DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableGateway(request), context);
}

void StorageGatewayClient::DisableGatewayAsync(const DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDisableGatewayAsyncHelper( this, request, handler, context ); } );
}

DisassociateFileSystemOutcome StorageGatewayClient::DisassociateFileSystem(const DisassociateFileSystemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateFileSystemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFileSystemOutcomeCallable StorageGatewayClient::DisassociateFileSystemCallable(const DisassociateFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientDisassociateFileSystemAsyncHelper(StorageGatewayClient const * const clientThis, const DisassociateFileSystemRequest& request, const DisassociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateFileSystem(request), context);
}

void StorageGatewayClient::DisassociateFileSystemAsync(const DisassociateFileSystemRequest& request, const DisassociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientDisassociateFileSystemAsyncHelper( this, request, handler, context ); } );
}

JoinDomainOutcome StorageGatewayClient::JoinDomain(const JoinDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return JoinDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

JoinDomainOutcomeCallable StorageGatewayClient::JoinDomainCallable(const JoinDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< JoinDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->JoinDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientJoinDomainAsyncHelper(StorageGatewayClient const * const clientThis, const JoinDomainRequest& request, const JoinDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->JoinDomain(request), context);
}

void StorageGatewayClient::JoinDomainAsync(const JoinDomainRequest& request, const JoinDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientJoinDomainAsyncHelper( this, request, handler, context ); } );
}

ListAutomaticTapeCreationPoliciesOutcome StorageGatewayClient::ListAutomaticTapeCreationPolicies(const ListAutomaticTapeCreationPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAutomaticTapeCreationPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAutomaticTapeCreationPoliciesOutcomeCallable StorageGatewayClient::ListAutomaticTapeCreationPoliciesCallable(const ListAutomaticTapeCreationPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAutomaticTapeCreationPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAutomaticTapeCreationPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListAutomaticTapeCreationPoliciesAsyncHelper(StorageGatewayClient const * const clientThis, const ListAutomaticTapeCreationPoliciesRequest& request, const ListAutomaticTapeCreationPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAutomaticTapeCreationPolicies(request), context);
}

void StorageGatewayClient::ListAutomaticTapeCreationPoliciesAsync(const ListAutomaticTapeCreationPoliciesRequest& request, const ListAutomaticTapeCreationPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListAutomaticTapeCreationPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListFileSharesOutcome StorageGatewayClient::ListFileShares(const ListFileSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFileSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFileSharesOutcomeCallable StorageGatewayClient::ListFileSharesCallable(const ListFileSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFileSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFileShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListFileSharesAsyncHelper(StorageGatewayClient const * const clientThis, const ListFileSharesRequest& request, const ListFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFileShares(request), context);
}

void StorageGatewayClient::ListFileSharesAsync(const ListFileSharesRequest& request, const ListFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListFileSharesAsyncHelper( this, request, handler, context ); } );
}

ListFileSystemAssociationsOutcome StorageGatewayClient::ListFileSystemAssociations(const ListFileSystemAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFileSystemAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFileSystemAssociationsOutcomeCallable StorageGatewayClient::ListFileSystemAssociationsCallable(const ListFileSystemAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFileSystemAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFileSystemAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListFileSystemAssociationsAsyncHelper(StorageGatewayClient const * const clientThis, const ListFileSystemAssociationsRequest& request, const ListFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFileSystemAssociations(request), context);
}

void StorageGatewayClient::ListFileSystemAssociationsAsync(const ListFileSystemAssociationsRequest& request, const ListFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListFileSystemAssociationsAsyncHelper( this, request, handler, context ); } );
}

ListGatewaysOutcome StorageGatewayClient::ListGateways(const ListGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGatewaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGatewaysOutcomeCallable StorageGatewayClient::ListGatewaysCallable(const ListGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListGatewaysAsyncHelper(StorageGatewayClient const * const clientThis, const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGateways(request), context);
}

void StorageGatewayClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListGatewaysAsyncHelper( this, request, handler, context ); } );
}

ListLocalDisksOutcome StorageGatewayClient::ListLocalDisks(const ListLocalDisksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLocalDisksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLocalDisksOutcomeCallable StorageGatewayClient::ListLocalDisksCallable(const ListLocalDisksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLocalDisksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLocalDisks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListLocalDisksAsyncHelper(StorageGatewayClient const * const clientThis, const ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLocalDisks(request), context);
}

void StorageGatewayClient::ListLocalDisksAsync(const ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListLocalDisksAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome StorageGatewayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable StorageGatewayClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListTagsForResourceAsyncHelper(StorageGatewayClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void StorageGatewayClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTapePoolsOutcome StorageGatewayClient::ListTapePools(const ListTapePoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTapePoolsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTapePoolsOutcomeCallable StorageGatewayClient::ListTapePoolsCallable(const ListTapePoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTapePoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTapePools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListTapePoolsAsyncHelper(StorageGatewayClient const * const clientThis, const ListTapePoolsRequest& request, const ListTapePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTapePools(request), context);
}

void StorageGatewayClient::ListTapePoolsAsync(const ListTapePoolsRequest& request, const ListTapePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListTapePoolsAsyncHelper( this, request, handler, context ); } );
}

ListTapesOutcome StorageGatewayClient::ListTapes(const ListTapesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTapesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTapesOutcomeCallable StorageGatewayClient::ListTapesCallable(const ListTapesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTapesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTapes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListTapesAsyncHelper(StorageGatewayClient const * const clientThis, const ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTapes(request), context);
}

void StorageGatewayClient::ListTapesAsync(const ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListTapesAsyncHelper( this, request, handler, context ); } );
}

ListVolumeInitiatorsOutcome StorageGatewayClient::ListVolumeInitiators(const ListVolumeInitiatorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVolumeInitiatorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVolumeInitiatorsOutcomeCallable StorageGatewayClient::ListVolumeInitiatorsCallable(const ListVolumeInitiatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVolumeInitiatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVolumeInitiators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListVolumeInitiatorsAsyncHelper(StorageGatewayClient const * const clientThis, const ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVolumeInitiators(request), context);
}

void StorageGatewayClient::ListVolumeInitiatorsAsync(const ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListVolumeInitiatorsAsyncHelper( this, request, handler, context ); } );
}

ListVolumeRecoveryPointsOutcome StorageGatewayClient::ListVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVolumeRecoveryPointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVolumeRecoveryPointsOutcomeCallable StorageGatewayClient::ListVolumeRecoveryPointsCallable(const ListVolumeRecoveryPointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVolumeRecoveryPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVolumeRecoveryPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListVolumeRecoveryPointsAsyncHelper(StorageGatewayClient const * const clientThis, const ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVolumeRecoveryPoints(request), context);
}

void StorageGatewayClient::ListVolumeRecoveryPointsAsync(const ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListVolumeRecoveryPointsAsyncHelper( this, request, handler, context ); } );
}

ListVolumesOutcome StorageGatewayClient::ListVolumes(const ListVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListVolumesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVolumesOutcomeCallable StorageGatewayClient::ListVolumesCallable(const ListVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientListVolumesAsyncHelper(StorageGatewayClient const * const clientThis, const ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVolumes(request), context);
}

void StorageGatewayClient::ListVolumesAsync(const ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientListVolumesAsyncHelper( this, request, handler, context ); } );
}

NotifyWhenUploadedOutcome StorageGatewayClient::NotifyWhenUploaded(const NotifyWhenUploadedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return NotifyWhenUploadedOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyWhenUploadedOutcomeCallable StorageGatewayClient::NotifyWhenUploadedCallable(const NotifyWhenUploadedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyWhenUploadedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyWhenUploaded(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientNotifyWhenUploadedAsyncHelper(StorageGatewayClient const * const clientThis, const NotifyWhenUploadedRequest& request, const NotifyWhenUploadedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->NotifyWhenUploaded(request), context);
}

void StorageGatewayClient::NotifyWhenUploadedAsync(const NotifyWhenUploadedRequest& request, const NotifyWhenUploadedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientNotifyWhenUploadedAsyncHelper( this, request, handler, context ); } );
}

RefreshCacheOutcome StorageGatewayClient::RefreshCache(const RefreshCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RefreshCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshCacheOutcomeCallable StorageGatewayClient::RefreshCacheCallable(const RefreshCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientRefreshCacheAsyncHelper(StorageGatewayClient const * const clientThis, const RefreshCacheRequest& request, const RefreshCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RefreshCache(request), context);
}

void StorageGatewayClient::RefreshCacheAsync(const RefreshCacheRequest& request, const RefreshCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientRefreshCacheAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome StorageGatewayClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable StorageGatewayClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientRemoveTagsFromResourceAsyncHelper(StorageGatewayClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void StorageGatewayClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

ResetCacheOutcome StorageGatewayClient::ResetCache(const ResetCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetCacheOutcomeCallable StorageGatewayClient::ResetCacheCallable(const ResetCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientResetCacheAsyncHelper(StorageGatewayClient const * const clientThis, const ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetCache(request), context);
}

void StorageGatewayClient::ResetCacheAsync(const ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientResetCacheAsyncHelper( this, request, handler, context ); } );
}

RetrieveTapeArchiveOutcome StorageGatewayClient::RetrieveTapeArchive(const RetrieveTapeArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetrieveTapeArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetrieveTapeArchiveOutcomeCallable StorageGatewayClient::RetrieveTapeArchiveCallable(const RetrieveTapeArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetrieveTapeArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetrieveTapeArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientRetrieveTapeArchiveAsyncHelper(StorageGatewayClient const * const clientThis, const RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetrieveTapeArchive(request), context);
}

void StorageGatewayClient::RetrieveTapeArchiveAsync(const RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientRetrieveTapeArchiveAsyncHelper( this, request, handler, context ); } );
}

RetrieveTapeRecoveryPointOutcome StorageGatewayClient::RetrieveTapeRecoveryPoint(const RetrieveTapeRecoveryPointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetrieveTapeRecoveryPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetrieveTapeRecoveryPointOutcomeCallable StorageGatewayClient::RetrieveTapeRecoveryPointCallable(const RetrieveTapeRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetrieveTapeRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetrieveTapeRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientRetrieveTapeRecoveryPointAsyncHelper(StorageGatewayClient const * const clientThis, const RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetrieveTapeRecoveryPoint(request), context);
}

void StorageGatewayClient::RetrieveTapeRecoveryPointAsync(const RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientRetrieveTapeRecoveryPointAsyncHelper( this, request, handler, context ); } );
}

SetLocalConsolePasswordOutcome StorageGatewayClient::SetLocalConsolePassword(const SetLocalConsolePasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetLocalConsolePasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetLocalConsolePasswordOutcomeCallable StorageGatewayClient::SetLocalConsolePasswordCallable(const SetLocalConsolePasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLocalConsolePasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLocalConsolePassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientSetLocalConsolePasswordAsyncHelper(StorageGatewayClient const * const clientThis, const SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetLocalConsolePassword(request), context);
}

void StorageGatewayClient::SetLocalConsolePasswordAsync(const SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientSetLocalConsolePasswordAsyncHelper( this, request, handler, context ); } );
}

SetSMBGuestPasswordOutcome StorageGatewayClient::SetSMBGuestPassword(const SetSMBGuestPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetSMBGuestPasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetSMBGuestPasswordOutcomeCallable StorageGatewayClient::SetSMBGuestPasswordCallable(const SetSMBGuestPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSMBGuestPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSMBGuestPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientSetSMBGuestPasswordAsyncHelper(StorageGatewayClient const * const clientThis, const SetSMBGuestPasswordRequest& request, const SetSMBGuestPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetSMBGuestPassword(request), context);
}

void StorageGatewayClient::SetSMBGuestPasswordAsync(const SetSMBGuestPasswordRequest& request, const SetSMBGuestPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientSetSMBGuestPasswordAsyncHelper( this, request, handler, context ); } );
}

ShutdownGatewayOutcome StorageGatewayClient::ShutdownGateway(const ShutdownGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ShutdownGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ShutdownGatewayOutcomeCallable StorageGatewayClient::ShutdownGatewayCallable(const ShutdownGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ShutdownGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ShutdownGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientShutdownGatewayAsyncHelper(StorageGatewayClient const * const clientThis, const ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ShutdownGateway(request), context);
}

void StorageGatewayClient::ShutdownGatewayAsync(const ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientShutdownGatewayAsyncHelper( this, request, handler, context ); } );
}

StartAvailabilityMonitorTestOutcome StorageGatewayClient::StartAvailabilityMonitorTest(const StartAvailabilityMonitorTestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartAvailabilityMonitorTestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAvailabilityMonitorTestOutcomeCallable StorageGatewayClient::StartAvailabilityMonitorTestCallable(const StartAvailabilityMonitorTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAvailabilityMonitorTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAvailabilityMonitorTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientStartAvailabilityMonitorTestAsyncHelper(StorageGatewayClient const * const clientThis, const StartAvailabilityMonitorTestRequest& request, const StartAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartAvailabilityMonitorTest(request), context);
}

void StorageGatewayClient::StartAvailabilityMonitorTestAsync(const StartAvailabilityMonitorTestRequest& request, const StartAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientStartAvailabilityMonitorTestAsyncHelper( this, request, handler, context ); } );
}

StartGatewayOutcome StorageGatewayClient::StartGateway(const StartGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartGatewayOutcomeCallable StorageGatewayClient::StartGatewayCallable(const StartGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientStartGatewayAsyncHelper(StorageGatewayClient const * const clientThis, const StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartGateway(request), context);
}

void StorageGatewayClient::StartGatewayAsync(const StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientStartGatewayAsyncHelper( this, request, handler, context ); } );
}

UpdateAutomaticTapeCreationPolicyOutcome StorageGatewayClient::UpdateAutomaticTapeCreationPolicy(const UpdateAutomaticTapeCreationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAutomaticTapeCreationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAutomaticTapeCreationPolicyOutcomeCallable StorageGatewayClient::UpdateAutomaticTapeCreationPolicyCallable(const UpdateAutomaticTapeCreationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAutomaticTapeCreationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAutomaticTapeCreationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateAutomaticTapeCreationPolicyAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateAutomaticTapeCreationPolicyRequest& request, const UpdateAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAutomaticTapeCreationPolicy(request), context);
}

void StorageGatewayClient::UpdateAutomaticTapeCreationPolicyAsync(const UpdateAutomaticTapeCreationPolicyRequest& request, const UpdateAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateAutomaticTapeCreationPolicyAsyncHelper( this, request, handler, context ); } );
}

UpdateBandwidthRateLimitOutcome StorageGatewayClient::UpdateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateBandwidthRateLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBandwidthRateLimitOutcomeCallable StorageGatewayClient::UpdateBandwidthRateLimitCallable(const UpdateBandwidthRateLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBandwidthRateLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBandwidthRateLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateBandwidthRateLimitAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBandwidthRateLimit(request), context);
}

void StorageGatewayClient::UpdateBandwidthRateLimitAsync(const UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateBandwidthRateLimitAsyncHelper( this, request, handler, context ); } );
}

UpdateBandwidthRateLimitScheduleOutcome StorageGatewayClient::UpdateBandwidthRateLimitSchedule(const UpdateBandwidthRateLimitScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateBandwidthRateLimitScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBandwidthRateLimitScheduleOutcomeCallable StorageGatewayClient::UpdateBandwidthRateLimitScheduleCallable(const UpdateBandwidthRateLimitScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBandwidthRateLimitScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBandwidthRateLimitSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateBandwidthRateLimitScheduleAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateBandwidthRateLimitScheduleRequest& request, const UpdateBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBandwidthRateLimitSchedule(request), context);
}

void StorageGatewayClient::UpdateBandwidthRateLimitScheduleAsync(const UpdateBandwidthRateLimitScheduleRequest& request, const UpdateBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateBandwidthRateLimitScheduleAsyncHelper( this, request, handler, context ); } );
}

UpdateChapCredentialsOutcome StorageGatewayClient::UpdateChapCredentials(const UpdateChapCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateChapCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateChapCredentialsOutcomeCallable StorageGatewayClient::UpdateChapCredentialsCallable(const UpdateChapCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChapCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChapCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateChapCredentialsAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateChapCredentials(request), context);
}

void StorageGatewayClient::UpdateChapCredentialsAsync(const UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateChapCredentialsAsyncHelper( this, request, handler, context ); } );
}

UpdateFileSystemAssociationOutcome StorageGatewayClient::UpdateFileSystemAssociation(const UpdateFileSystemAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFileSystemAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFileSystemAssociationOutcomeCallable StorageGatewayClient::UpdateFileSystemAssociationCallable(const UpdateFileSystemAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFileSystemAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFileSystemAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateFileSystemAssociationAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateFileSystemAssociationRequest& request, const UpdateFileSystemAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFileSystemAssociation(request), context);
}

void StorageGatewayClient::UpdateFileSystemAssociationAsync(const UpdateFileSystemAssociationRequest& request, const UpdateFileSystemAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateFileSystemAssociationAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayInformationOutcome StorageGatewayClient::UpdateGatewayInformation(const UpdateGatewayInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGatewayInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayInformationOutcomeCallable StorageGatewayClient::UpdateGatewayInformationCallable(const UpdateGatewayInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateGatewayInformationAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewayInformation(request), context);
}

void StorageGatewayClient::UpdateGatewayInformationAsync(const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateGatewayInformationAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewaySoftwareNowOutcome StorageGatewayClient::UpdateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGatewaySoftwareNowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewaySoftwareNowOutcomeCallable StorageGatewayClient::UpdateGatewaySoftwareNowCallable(const UpdateGatewaySoftwareNowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewaySoftwareNowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewaySoftwareNow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateGatewaySoftwareNowAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewaySoftwareNow(request), context);
}

void StorageGatewayClient::UpdateGatewaySoftwareNowAsync(const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateGatewaySoftwareNowAsyncHelper( this, request, handler, context ); } );
}

UpdateMaintenanceStartTimeOutcome StorageGatewayClient::UpdateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMaintenanceStartTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMaintenanceStartTimeOutcomeCallable StorageGatewayClient::UpdateMaintenanceStartTimeCallable(const UpdateMaintenanceStartTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMaintenanceStartTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMaintenanceStartTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateMaintenanceStartTimeAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMaintenanceStartTime(request), context);
}

void StorageGatewayClient::UpdateMaintenanceStartTimeAsync(const UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateMaintenanceStartTimeAsyncHelper( this, request, handler, context ); } );
}

UpdateNFSFileShareOutcome StorageGatewayClient::UpdateNFSFileShare(const UpdateNFSFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNFSFileShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNFSFileShareOutcomeCallable StorageGatewayClient::UpdateNFSFileShareCallable(const UpdateNFSFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNFSFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNFSFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateNFSFileShareAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateNFSFileShareRequest& request, const UpdateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNFSFileShare(request), context);
}

void StorageGatewayClient::UpdateNFSFileShareAsync(const UpdateNFSFileShareRequest& request, const UpdateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateNFSFileShareAsyncHelper( this, request, handler, context ); } );
}

UpdateSMBFileShareOutcome StorageGatewayClient::UpdateSMBFileShare(const UpdateSMBFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSMBFileShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBFileShareOutcomeCallable StorageGatewayClient::UpdateSMBFileShareCallable(const UpdateSMBFileShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBFileShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBFileShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateSMBFileShareAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateSMBFileShareRequest& request, const UpdateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSMBFileShare(request), context);
}

void StorageGatewayClient::UpdateSMBFileShareAsync(const UpdateSMBFileShareRequest& request, const UpdateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateSMBFileShareAsyncHelper( this, request, handler, context ); } );
}

UpdateSMBFileShareVisibilityOutcome StorageGatewayClient::UpdateSMBFileShareVisibility(const UpdateSMBFileShareVisibilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSMBFileShareVisibilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBFileShareVisibilityOutcomeCallable StorageGatewayClient::UpdateSMBFileShareVisibilityCallable(const UpdateSMBFileShareVisibilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBFileShareVisibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBFileShareVisibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateSMBFileShareVisibilityAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateSMBFileShareVisibilityRequest& request, const UpdateSMBFileShareVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSMBFileShareVisibility(request), context);
}

void StorageGatewayClient::UpdateSMBFileShareVisibilityAsync(const UpdateSMBFileShareVisibilityRequest& request, const UpdateSMBFileShareVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateSMBFileShareVisibilityAsyncHelper( this, request, handler, context ); } );
}

UpdateSMBLocalGroupsOutcome StorageGatewayClient::UpdateSMBLocalGroups(const UpdateSMBLocalGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSMBLocalGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBLocalGroupsOutcomeCallable StorageGatewayClient::UpdateSMBLocalGroupsCallable(const UpdateSMBLocalGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBLocalGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBLocalGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateSMBLocalGroupsAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateSMBLocalGroupsRequest& request, const UpdateSMBLocalGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSMBLocalGroups(request), context);
}

void StorageGatewayClient::UpdateSMBLocalGroupsAsync(const UpdateSMBLocalGroupsRequest& request, const UpdateSMBLocalGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateSMBLocalGroupsAsyncHelper( this, request, handler, context ); } );
}

UpdateSMBSecurityStrategyOutcome StorageGatewayClient::UpdateSMBSecurityStrategy(const UpdateSMBSecurityStrategyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSMBSecurityStrategyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSMBSecurityStrategyOutcomeCallable StorageGatewayClient::UpdateSMBSecurityStrategyCallable(const UpdateSMBSecurityStrategyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSMBSecurityStrategyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSMBSecurityStrategy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateSMBSecurityStrategyAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateSMBSecurityStrategyRequest& request, const UpdateSMBSecurityStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSMBSecurityStrategy(request), context);
}

void StorageGatewayClient::UpdateSMBSecurityStrategyAsync(const UpdateSMBSecurityStrategyRequest& request, const UpdateSMBSecurityStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateSMBSecurityStrategyAsyncHelper( this, request, handler, context ); } );
}

UpdateSnapshotScheduleOutcome StorageGatewayClient::UpdateSnapshotSchedule(const UpdateSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSnapshotScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSnapshotScheduleOutcomeCallable StorageGatewayClient::UpdateSnapshotScheduleCallable(const UpdateSnapshotScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSnapshotScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSnapshotSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateSnapshotScheduleAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSnapshotSchedule(request), context);
}

void StorageGatewayClient::UpdateSnapshotScheduleAsync(const UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateSnapshotScheduleAsyncHelper( this, request, handler, context ); } );
}

UpdateVTLDeviceTypeOutcome StorageGatewayClient::UpdateVTLDeviceType(const UpdateVTLDeviceTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateVTLDeviceTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVTLDeviceTypeOutcomeCallable StorageGatewayClient::UpdateVTLDeviceTypeCallable(const UpdateVTLDeviceTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVTLDeviceTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVTLDeviceType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void StorageGatewayClientUpdateVTLDeviceTypeAsyncHelper(StorageGatewayClient const * const clientThis, const UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVTLDeviceType(request), context);
}

void StorageGatewayClient::UpdateVTLDeviceTypeAsync(const UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ StorageGatewayClientUpdateVTLDeviceTypeAsyncHelper( this, request, handler, context ); } );
}

