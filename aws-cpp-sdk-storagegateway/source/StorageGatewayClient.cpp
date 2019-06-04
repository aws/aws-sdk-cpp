/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/storagegateway/model/AttachVolumeRequest.h>
#include <aws/storagegateway/model/CancelArchivalRequest.h>
#include <aws/storagegateway/model/CancelRetrievalRequest.h>
#include <aws/storagegateway/model/CreateCachediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateNFSFileShareRequest.h>
#include <aws/storagegateway/model/CreateSMBFileShareRequest.h>
#include <aws/storagegateway/model/CreateSnapshotRequest.h>
#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointRequest.h>
#include <aws/storagegateway/model/CreateStorediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateTapeWithBarcodeRequest.h>
#include <aws/storagegateway/model/CreateTapesRequest.h>
#include <aws/storagegateway/model/DeleteBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/DeleteChapCredentialsRequest.h>
#include <aws/storagegateway/model/DeleteFileShareRequest.h>
#include <aws/storagegateway/model/DeleteGatewayRequest.h>
#include <aws/storagegateway/model/DeleteSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/DeleteTapeRequest.h>
#include <aws/storagegateway/model/DeleteTapeArchiveRequest.h>
#include <aws/storagegateway/model/DeleteVolumeRequest.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/DescribeCacheRequest.h>
#include <aws/storagegateway/model/DescribeCachediSCSIVolumesRequest.h>
#include <aws/storagegateway/model/DescribeChapCredentialsRequest.h>
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
#include <aws/storagegateway/model/JoinDomainRequest.h>
#include <aws/storagegateway/model/ListFileSharesRequest.h>
#include <aws/storagegateway/model/ListGatewaysRequest.h>
#include <aws/storagegateway/model/ListLocalDisksRequest.h>
#include <aws/storagegateway/model/ListTagsForResourceRequest.h>
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
#include <aws/storagegateway/model/StartGatewayRequest.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/UpdateChapCredentialsRequest.h>
#include <aws/storagegateway/model/UpdateGatewayInformationRequest.h>
#include <aws/storagegateway/model/UpdateGatewaySoftwareNowRequest.h>
#include <aws/storagegateway/model/UpdateMaintenanceStartTimeRequest.h>
#include <aws/storagegateway/model/UpdateNFSFileShareRequest.h>
#include <aws/storagegateway/model/UpdateSMBFileShareRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::~StorageGatewayClient()
{
}

void StorageGatewayClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ActivateGatewayOutcome(ActivateGatewayResult(outcome.GetResult()));
  }
  else
  {
    return ActivateGatewayOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ActivateGatewayAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ActivateGatewayAsyncHelper(const ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateGateway(request), context);
}

AddCacheOutcome StorageGatewayClient::AddCache(const AddCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddCacheOutcome(AddCacheResult(outcome.GetResult()));
  }
  else
  {
    return AddCacheOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AddCacheAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::AddCacheAsyncHelper(const AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddCache(request), context);
}

AddTagsToResourceOutcome StorageGatewayClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(AddTagsToResourceResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToResourceAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

AddUploadBufferOutcome StorageGatewayClient::AddUploadBuffer(const AddUploadBufferRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddUploadBufferOutcome(AddUploadBufferResult(outcome.GetResult()));
  }
  else
  {
    return AddUploadBufferOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AddUploadBufferAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::AddUploadBufferAsyncHelper(const AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddUploadBuffer(request), context);
}

AddWorkingStorageOutcome StorageGatewayClient::AddWorkingStorage(const AddWorkingStorageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddWorkingStorageOutcome(AddWorkingStorageResult(outcome.GetResult()));
  }
  else
  {
    return AddWorkingStorageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AddWorkingStorageAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::AddWorkingStorageAsyncHelper(const AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddWorkingStorage(request), context);
}

AssignTapePoolOutcome StorageGatewayClient::AssignTapePool(const AssignTapePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssignTapePoolOutcome(AssignTapePoolResult(outcome.GetResult()));
  }
  else
  {
    return AssignTapePoolOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AssignTapePoolAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::AssignTapePoolAsyncHelper(const AssignTapePoolRequest& request, const AssignTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignTapePool(request), context);
}

AttachVolumeOutcome StorageGatewayClient::AttachVolume(const AttachVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachVolumeOutcome(AttachVolumeResult(outcome.GetResult()));
  }
  else
  {
    return AttachVolumeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AttachVolumeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::AttachVolumeAsyncHelper(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachVolume(request), context);
}

CancelArchivalOutcome StorageGatewayClient::CancelArchival(const CancelArchivalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelArchivalOutcome(CancelArchivalResult(outcome.GetResult()));
  }
  else
  {
    return CancelArchivalOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelArchivalAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CancelArchivalAsyncHelper(const CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelArchival(request), context);
}

CancelRetrievalOutcome StorageGatewayClient::CancelRetrieval(const CancelRetrievalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelRetrievalOutcome(CancelRetrievalResult(outcome.GetResult()));
  }
  else
  {
    return CancelRetrievalOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelRetrievalAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CancelRetrievalAsyncHelper(const CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelRetrieval(request), context);
}

CreateCachediSCSIVolumeOutcome StorageGatewayClient::CreateCachediSCSIVolume(const CreateCachediSCSIVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCachediSCSIVolumeOutcome(CreateCachediSCSIVolumeResult(outcome.GetResult()));
  }
  else
  {
    return CreateCachediSCSIVolumeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateCachediSCSIVolumeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateCachediSCSIVolumeAsyncHelper(const CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCachediSCSIVolume(request), context);
}

CreateNFSFileShareOutcome StorageGatewayClient::CreateNFSFileShare(const CreateNFSFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNFSFileShareOutcome(CreateNFSFileShareResult(outcome.GetResult()));
  }
  else
  {
    return CreateNFSFileShareOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateNFSFileShareAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateNFSFileShareAsyncHelper(const CreateNFSFileShareRequest& request, const CreateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNFSFileShare(request), context);
}

CreateSMBFileShareOutcome StorageGatewayClient::CreateSMBFileShare(const CreateSMBFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSMBFileShareOutcome(CreateSMBFileShareResult(outcome.GetResult()));
  }
  else
  {
    return CreateSMBFileShareOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateSMBFileShareAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateSMBFileShareAsyncHelper(const CreateSMBFileShareRequest& request, const CreateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSMBFileShare(request), context);
}

CreateSnapshotOutcome StorageGatewayClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSnapshotOutcome(CreateSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateSnapshotFromVolumeRecoveryPointOutcome StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSnapshotFromVolumeRecoveryPointOutcome(CreateSnapshotFromVolumeRecoveryPointResult(outcome.GetResult()));
  }
  else
  {
    return CreateSnapshotFromVolumeRecoveryPointOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotFromVolumeRecoveryPointAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointAsyncHelper(const CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshotFromVolumeRecoveryPoint(request), context);
}

CreateStorediSCSIVolumeOutcome StorageGatewayClient::CreateStorediSCSIVolume(const CreateStorediSCSIVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStorediSCSIVolumeOutcome(CreateStorediSCSIVolumeResult(outcome.GetResult()));
  }
  else
  {
    return CreateStorediSCSIVolumeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateStorediSCSIVolumeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateStorediSCSIVolumeAsyncHelper(const CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStorediSCSIVolume(request), context);
}

CreateTapeWithBarcodeOutcome StorageGatewayClient::CreateTapeWithBarcode(const CreateTapeWithBarcodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTapeWithBarcodeOutcome(CreateTapeWithBarcodeResult(outcome.GetResult()));
  }
  else
  {
    return CreateTapeWithBarcodeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateTapeWithBarcodeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateTapeWithBarcodeAsyncHelper(const CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTapeWithBarcode(request), context);
}

CreateTapesOutcome StorageGatewayClient::CreateTapes(const CreateTapesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTapesOutcome(CreateTapesResult(outcome.GetResult()));
  }
  else
  {
    return CreateTapesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateTapesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::CreateTapesAsyncHelper(const CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTapes(request), context);
}

DeleteBandwidthRateLimitOutcome StorageGatewayClient::DeleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBandwidthRateLimitOutcome(DeleteBandwidthRateLimitResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBandwidthRateLimitOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBandwidthRateLimitAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteBandwidthRateLimitAsyncHelper(const DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBandwidthRateLimit(request), context);
}

DeleteChapCredentialsOutcome StorageGatewayClient::DeleteChapCredentials(const DeleteChapCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteChapCredentialsOutcome(DeleteChapCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteChapCredentialsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChapCredentialsAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteChapCredentialsAsyncHelper(const DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChapCredentials(request), context);
}

DeleteFileShareOutcome StorageGatewayClient::DeleteFileShare(const DeleteFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFileShareOutcome(DeleteFileShareResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFileShareOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFileShareAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteFileShareAsyncHelper(const DeleteFileShareRequest& request, const DeleteFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFileShare(request), context);
}

DeleteGatewayOutcome StorageGatewayClient::DeleteGateway(const DeleteGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGatewayOutcome(DeleteGatewayResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGatewayOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGatewayAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteGatewayAsyncHelper(const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGateway(request), context);
}

DeleteSnapshotScheduleOutcome StorageGatewayClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSnapshotScheduleOutcome(DeleteSnapshotScheduleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSnapshotScheduleOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSnapshotScheduleAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteSnapshotScheduleAsyncHelper(const DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshotSchedule(request), context);
}

DeleteTapeOutcome StorageGatewayClient::DeleteTape(const DeleteTapeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTapeOutcome(DeleteTapeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTapeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTapeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteTapeAsyncHelper(const DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTape(request), context);
}

DeleteTapeArchiveOutcome StorageGatewayClient::DeleteTapeArchive(const DeleteTapeArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTapeArchiveOutcome(DeleteTapeArchiveResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTapeArchiveOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTapeArchiveAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteTapeArchiveAsyncHelper(const DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTapeArchive(request), context);
}

DeleteVolumeOutcome StorageGatewayClient::DeleteVolume(const DeleteVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVolumeOutcome(DeleteVolumeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVolumeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVolumeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DeleteVolumeAsyncHelper(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVolume(request), context);
}

DescribeBandwidthRateLimitOutcome StorageGatewayClient::DescribeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBandwidthRateLimitOutcome(DescribeBandwidthRateLimitResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBandwidthRateLimitOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBandwidthRateLimitAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeBandwidthRateLimitAsyncHelper(const DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBandwidthRateLimit(request), context);
}

DescribeCacheOutcome StorageGatewayClient::DescribeCache(const DescribeCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCacheOutcome(DescribeCacheResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCacheOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCacheAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeCacheAsyncHelper(const DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCache(request), context);
}

DescribeCachediSCSIVolumesOutcome StorageGatewayClient::DescribeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCachediSCSIVolumesOutcome(DescribeCachediSCSIVolumesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCachediSCSIVolumesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCachediSCSIVolumesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeCachediSCSIVolumesAsyncHelper(const DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCachediSCSIVolumes(request), context);
}

DescribeChapCredentialsOutcome StorageGatewayClient::DescribeChapCredentials(const DescribeChapCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeChapCredentialsOutcome(DescribeChapCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeChapCredentialsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChapCredentialsAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeChapCredentialsAsyncHelper(const DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChapCredentials(request), context);
}

DescribeGatewayInformationOutcome StorageGatewayClient::DescribeGatewayInformation(const DescribeGatewayInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGatewayInformationOutcome(DescribeGatewayInformationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGatewayInformationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGatewayInformationAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeGatewayInformationAsyncHelper(const DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGatewayInformation(request), context);
}

DescribeMaintenanceStartTimeOutcome StorageGatewayClient::DescribeMaintenanceStartTime(const DescribeMaintenanceStartTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMaintenanceStartTimeOutcome(DescribeMaintenanceStartTimeResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMaintenanceStartTimeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMaintenanceStartTimeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeMaintenanceStartTimeAsyncHelper(const DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceStartTime(request), context);
}

DescribeNFSFileSharesOutcome StorageGatewayClient::DescribeNFSFileShares(const DescribeNFSFileSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeNFSFileSharesOutcome(DescribeNFSFileSharesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeNFSFileSharesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNFSFileSharesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeNFSFileSharesAsyncHelper(const DescribeNFSFileSharesRequest& request, const DescribeNFSFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNFSFileShares(request), context);
}

DescribeSMBFileSharesOutcome StorageGatewayClient::DescribeSMBFileShares(const DescribeSMBFileSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSMBFileSharesOutcome(DescribeSMBFileSharesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSMBFileSharesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSMBFileSharesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeSMBFileSharesAsyncHelper(const DescribeSMBFileSharesRequest& request, const DescribeSMBFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSMBFileShares(request), context);
}

DescribeSMBSettingsOutcome StorageGatewayClient::DescribeSMBSettings(const DescribeSMBSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSMBSettingsOutcome(DescribeSMBSettingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSMBSettingsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSMBSettingsAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeSMBSettingsAsyncHelper(const DescribeSMBSettingsRequest& request, const DescribeSMBSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSMBSettings(request), context);
}

DescribeSnapshotScheduleOutcome StorageGatewayClient::DescribeSnapshotSchedule(const DescribeSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSnapshotScheduleOutcome(DescribeSnapshotScheduleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSnapshotScheduleOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSnapshotScheduleAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeSnapshotScheduleAsyncHelper(const DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshotSchedule(request), context);
}

DescribeStorediSCSIVolumesOutcome StorageGatewayClient::DescribeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStorediSCSIVolumesOutcome(DescribeStorediSCSIVolumesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStorediSCSIVolumesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStorediSCSIVolumesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeStorediSCSIVolumesAsyncHelper(const DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStorediSCSIVolumes(request), context);
}

DescribeTapeArchivesOutcome StorageGatewayClient::DescribeTapeArchives(const DescribeTapeArchivesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTapeArchivesOutcome(DescribeTapeArchivesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTapeArchivesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTapeArchivesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeTapeArchivesAsyncHelper(const DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTapeArchives(request), context);
}

DescribeTapeRecoveryPointsOutcome StorageGatewayClient::DescribeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTapeRecoveryPointsOutcome(DescribeTapeRecoveryPointsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTapeRecoveryPointsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTapeRecoveryPointsAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeTapeRecoveryPointsAsyncHelper(const DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTapeRecoveryPoints(request), context);
}

DescribeTapesOutcome StorageGatewayClient::DescribeTapes(const DescribeTapesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTapesOutcome(DescribeTapesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTapesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTapesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeTapesAsyncHelper(const DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTapes(request), context);
}

DescribeUploadBufferOutcome StorageGatewayClient::DescribeUploadBuffer(const DescribeUploadBufferRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUploadBufferOutcome(DescribeUploadBufferResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUploadBufferOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUploadBufferAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeUploadBufferAsyncHelper(const DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUploadBuffer(request), context);
}

DescribeVTLDevicesOutcome StorageGatewayClient::DescribeVTLDevices(const DescribeVTLDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVTLDevicesOutcome(DescribeVTLDevicesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVTLDevicesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVTLDevicesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeVTLDevicesAsyncHelper(const DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVTLDevices(request), context);
}

DescribeWorkingStorageOutcome StorageGatewayClient::DescribeWorkingStorage(const DescribeWorkingStorageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkingStorageOutcome(DescribeWorkingStorageResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkingStorageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkingStorageAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DescribeWorkingStorageAsyncHelper(const DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkingStorage(request), context);
}

DetachVolumeOutcome StorageGatewayClient::DetachVolume(const DetachVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetachVolumeOutcome(DetachVolumeResult(outcome.GetResult()));
  }
  else
  {
    return DetachVolumeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetachVolumeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DetachVolumeAsyncHelper(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachVolume(request), context);
}

DisableGatewayOutcome StorageGatewayClient::DisableGateway(const DisableGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableGatewayOutcome(DisableGatewayResult(outcome.GetResult()));
  }
  else
  {
    return DisableGatewayOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DisableGatewayAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::DisableGatewayAsyncHelper(const DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableGateway(request), context);
}

JoinDomainOutcome StorageGatewayClient::JoinDomain(const JoinDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return JoinDomainOutcome(JoinDomainResult(outcome.GetResult()));
  }
  else
  {
    return JoinDomainOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->JoinDomainAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::JoinDomainAsyncHelper(const JoinDomainRequest& request, const JoinDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, JoinDomain(request), context);
}

ListFileSharesOutcome StorageGatewayClient::ListFileShares(const ListFileSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFileSharesOutcome(ListFileSharesResult(outcome.GetResult()));
  }
  else
  {
    return ListFileSharesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListFileSharesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListFileSharesAsyncHelper(const ListFileSharesRequest& request, const ListFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFileShares(request), context);
}

ListGatewaysOutcome StorageGatewayClient::ListGateways(const ListGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGatewaysOutcome(ListGatewaysResult(outcome.GetResult()));
  }
  else
  {
    return ListGatewaysOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListGatewaysAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListGatewaysAsyncHelper(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGateways(request), context);
}

ListLocalDisksOutcome StorageGatewayClient::ListLocalDisks(const ListLocalDisksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLocalDisksOutcome(ListLocalDisksResult(outcome.GetResult()));
  }
  else
  {
    return ListLocalDisksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListLocalDisksAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListLocalDisksAsyncHelper(const ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLocalDisks(request), context);
}

ListTagsForResourceOutcome StorageGatewayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTapesOutcome StorageGatewayClient::ListTapes(const ListTapesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTapesOutcome(ListTapesResult(outcome.GetResult()));
  }
  else
  {
    return ListTapesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTapesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListTapesAsyncHelper(const ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTapes(request), context);
}

ListVolumeInitiatorsOutcome StorageGatewayClient::ListVolumeInitiators(const ListVolumeInitiatorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVolumeInitiatorsOutcome(ListVolumeInitiatorsResult(outcome.GetResult()));
  }
  else
  {
    return ListVolumeInitiatorsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListVolumeInitiatorsAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListVolumeInitiatorsAsyncHelper(const ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVolumeInitiators(request), context);
}

ListVolumeRecoveryPointsOutcome StorageGatewayClient::ListVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVolumeRecoveryPointsOutcome(ListVolumeRecoveryPointsResult(outcome.GetResult()));
  }
  else
  {
    return ListVolumeRecoveryPointsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListVolumeRecoveryPointsAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListVolumeRecoveryPointsAsyncHelper(const ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVolumeRecoveryPoints(request), context);
}

ListVolumesOutcome StorageGatewayClient::ListVolumes(const ListVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVolumesOutcome(ListVolumesResult(outcome.GetResult()));
  }
  else
  {
    return ListVolumesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListVolumesAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ListVolumesAsyncHelper(const ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVolumes(request), context);
}

NotifyWhenUploadedOutcome StorageGatewayClient::NotifyWhenUploaded(const NotifyWhenUploadedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return NotifyWhenUploadedOutcome(NotifyWhenUploadedResult(outcome.GetResult()));
  }
  else
  {
    return NotifyWhenUploadedOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->NotifyWhenUploadedAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::NotifyWhenUploadedAsyncHelper(const NotifyWhenUploadedRequest& request, const NotifyWhenUploadedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, NotifyWhenUploaded(request), context);
}

RefreshCacheOutcome StorageGatewayClient::RefreshCache(const RefreshCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RefreshCacheOutcome(RefreshCacheResult(outcome.GetResult()));
  }
  else
  {
    return RefreshCacheOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RefreshCacheAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::RefreshCacheAsyncHelper(const RefreshCacheRequest& request, const RefreshCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RefreshCache(request), context);
}

RemoveTagsFromResourceOutcome StorageGatewayClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(RemoveTagsFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

ResetCacheOutcome StorageGatewayClient::ResetCache(const ResetCacheRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResetCacheOutcome(ResetCacheResult(outcome.GetResult()));
  }
  else
  {
    return ResetCacheOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ResetCacheAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ResetCacheAsyncHelper(const ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetCache(request), context);
}

RetrieveTapeArchiveOutcome StorageGatewayClient::RetrieveTapeArchive(const RetrieveTapeArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RetrieveTapeArchiveOutcome(RetrieveTapeArchiveResult(outcome.GetResult()));
  }
  else
  {
    return RetrieveTapeArchiveOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RetrieveTapeArchiveAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::RetrieveTapeArchiveAsyncHelper(const RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetrieveTapeArchive(request), context);
}

RetrieveTapeRecoveryPointOutcome StorageGatewayClient::RetrieveTapeRecoveryPoint(const RetrieveTapeRecoveryPointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RetrieveTapeRecoveryPointOutcome(RetrieveTapeRecoveryPointResult(outcome.GetResult()));
  }
  else
  {
    return RetrieveTapeRecoveryPointOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RetrieveTapeRecoveryPointAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::RetrieveTapeRecoveryPointAsyncHelper(const RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetrieveTapeRecoveryPoint(request), context);
}

SetLocalConsolePasswordOutcome StorageGatewayClient::SetLocalConsolePassword(const SetLocalConsolePasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetLocalConsolePasswordOutcome(SetLocalConsolePasswordResult(outcome.GetResult()));
  }
  else
  {
    return SetLocalConsolePasswordOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SetLocalConsolePasswordAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::SetLocalConsolePasswordAsyncHelper(const SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLocalConsolePassword(request), context);
}

SetSMBGuestPasswordOutcome StorageGatewayClient::SetSMBGuestPassword(const SetSMBGuestPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetSMBGuestPasswordOutcome(SetSMBGuestPasswordResult(outcome.GetResult()));
  }
  else
  {
    return SetSMBGuestPasswordOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SetSMBGuestPasswordAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::SetSMBGuestPasswordAsyncHelper(const SetSMBGuestPasswordRequest& request, const SetSMBGuestPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetSMBGuestPassword(request), context);
}

ShutdownGatewayOutcome StorageGatewayClient::ShutdownGateway(const ShutdownGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ShutdownGatewayOutcome(ShutdownGatewayResult(outcome.GetResult()));
  }
  else
  {
    return ShutdownGatewayOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ShutdownGatewayAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::ShutdownGatewayAsyncHelper(const ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ShutdownGateway(request), context);
}

StartGatewayOutcome StorageGatewayClient::StartGateway(const StartGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartGatewayOutcome(StartGatewayResult(outcome.GetResult()));
  }
  else
  {
    return StartGatewayOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartGatewayAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::StartGatewayAsyncHelper(const StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartGateway(request), context);
}

UpdateBandwidthRateLimitOutcome StorageGatewayClient::UpdateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBandwidthRateLimitOutcome(UpdateBandwidthRateLimitResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBandwidthRateLimitOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBandwidthRateLimitAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateBandwidthRateLimitAsyncHelper(const UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBandwidthRateLimit(request), context);
}

UpdateChapCredentialsOutcome StorageGatewayClient::UpdateChapCredentials(const UpdateChapCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateChapCredentialsOutcome(UpdateChapCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateChapCredentialsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChapCredentialsAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateChapCredentialsAsyncHelper(const UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChapCredentials(request), context);
}

UpdateGatewayInformationOutcome StorageGatewayClient::UpdateGatewayInformation(const UpdateGatewayInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGatewayInformationOutcome(UpdateGatewayInformationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGatewayInformationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGatewayInformationAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateGatewayInformationAsyncHelper(const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGatewayInformation(request), context);
}

UpdateGatewaySoftwareNowOutcome StorageGatewayClient::UpdateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGatewaySoftwareNowOutcome(UpdateGatewaySoftwareNowResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGatewaySoftwareNowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGatewaySoftwareNowAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateGatewaySoftwareNowAsyncHelper(const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGatewaySoftwareNow(request), context);
}

UpdateMaintenanceStartTimeOutcome StorageGatewayClient::UpdateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMaintenanceStartTimeOutcome(UpdateMaintenanceStartTimeResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMaintenanceStartTimeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMaintenanceStartTimeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateMaintenanceStartTimeAsyncHelper(const UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMaintenanceStartTime(request), context);
}

UpdateNFSFileShareOutcome StorageGatewayClient::UpdateNFSFileShare(const UpdateNFSFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNFSFileShareOutcome(UpdateNFSFileShareResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNFSFileShareOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNFSFileShareAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateNFSFileShareAsyncHelper(const UpdateNFSFileShareRequest& request, const UpdateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNFSFileShare(request), context);
}

UpdateSMBFileShareOutcome StorageGatewayClient::UpdateSMBFileShare(const UpdateSMBFileShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSMBFileShareOutcome(UpdateSMBFileShareResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSMBFileShareOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSMBFileShareAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateSMBFileShareAsyncHelper(const UpdateSMBFileShareRequest& request, const UpdateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSMBFileShare(request), context);
}

UpdateSMBSecurityStrategyOutcome StorageGatewayClient::UpdateSMBSecurityStrategy(const UpdateSMBSecurityStrategyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSMBSecurityStrategyOutcome(UpdateSMBSecurityStrategyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSMBSecurityStrategyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSMBSecurityStrategyAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateSMBSecurityStrategyAsyncHelper(const UpdateSMBSecurityStrategyRequest& request, const UpdateSMBSecurityStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSMBSecurityStrategy(request), context);
}

UpdateSnapshotScheduleOutcome StorageGatewayClient::UpdateSnapshotSchedule(const UpdateSnapshotScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSnapshotScheduleOutcome(UpdateSnapshotScheduleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSnapshotScheduleOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSnapshotScheduleAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateSnapshotScheduleAsyncHelper(const UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSnapshotSchedule(request), context);
}

UpdateVTLDeviceTypeOutcome StorageGatewayClient::UpdateVTLDeviceType(const UpdateVTLDeviceTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVTLDeviceTypeOutcome(UpdateVTLDeviceTypeResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVTLDeviceTypeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVTLDeviceTypeAsyncHelper( request, handler, context ); } );
}

void StorageGatewayClient::UpdateVTLDeviceTypeAsyncHelper(const UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVTLDeviceType(request), context);
}

