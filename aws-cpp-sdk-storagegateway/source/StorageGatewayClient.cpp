/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGatewayClient.h>
#include <aws/storagegateway/StorageGatewayEndpoint.h>
#include <aws/storagegateway/StorageGatewayErrorMarshaller.h>
#include <aws/storagegateway/model/ActivateGatewayRequest.h>
#include <aws/storagegateway/model/AddCacheRequest.h>
#include <aws/storagegateway/model/AddTagsToResourceRequest.h>
#include <aws/storagegateway/model/AddUploadBufferRequest.h>
#include <aws/storagegateway/model/AddWorkingStorageRequest.h>
#include <aws/storagegateway/model/CancelArchivalRequest.h>
#include <aws/storagegateway/model/CancelRetrievalRequest.h>
#include <aws/storagegateway/model/CreateCachediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateSnapshotRequest.h>
#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointRequest.h>
#include <aws/storagegateway/model/CreateStorediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateTapeWithBarcodeRequest.h>
#include <aws/storagegateway/model/CreateTapesRequest.h>
#include <aws/storagegateway/model/DeleteBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/DeleteChapCredentialsRequest.h>
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
#include <aws/storagegateway/model/DescribeSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/DescribeStorediSCSIVolumesRequest.h>
#include <aws/storagegateway/model/DescribeTapeArchivesRequest.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsRequest.h>
#include <aws/storagegateway/model/DescribeTapesRequest.h>
#include <aws/storagegateway/model/DescribeUploadBufferRequest.h>
#include <aws/storagegateway/model/DescribeVTLDevicesRequest.h>
#include <aws/storagegateway/model/DescribeWorkingStorageRequest.h>
#include <aws/storagegateway/model/DisableGatewayRequest.h>
#include <aws/storagegateway/model/ListGatewaysRequest.h>
#include <aws/storagegateway/model/ListLocalDisksRequest.h>
#include <aws/storagegateway/model/ListTagsForResourceRequest.h>
#include <aws/storagegateway/model/ListTapesRequest.h>
#include <aws/storagegateway/model/ListVolumeInitiatorsRequest.h>
#include <aws/storagegateway/model/ListVolumeRecoveryPointsRequest.h>
#include <aws/storagegateway/model/ListVolumesRequest.h>
#include <aws/storagegateway/model/RemoveTagsFromResourceRequest.h>
#include <aws/storagegateway/model/ResetCacheRequest.h>
#include <aws/storagegateway/model/RetrieveTapeArchiveRequest.h>
#include <aws/storagegateway/model/RetrieveTapeRecoveryPointRequest.h>
#include <aws/storagegateway/model/SetLocalConsolePasswordRequest.h>
#include <aws/storagegateway/model/ShutdownGatewayRequest.h>
#include <aws/storagegateway/model/StartGatewayRequest.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/UpdateChapCredentialsRequest.h>
#include <aws/storagegateway/model/UpdateGatewayInformationRequest.h>
#include <aws/storagegateway/model/UpdateGatewaySoftwareNowRequest.h>
#include <aws/storagegateway/model/UpdateMaintenanceStartTimeRequest.h>
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
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << StorageGatewayEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

ActivateGatewayOutcome StorageGatewayClient::ActivateGateway(const ActivateGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ActivateGateway, this, request);
}

void StorageGatewayClient::ActivateGatewayAsync(const ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ActivateGatewayAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ActivateGatewayAsyncHelper(const ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateGateway(request), context);
}

AddCacheOutcome StorageGatewayClient::AddCache(const AddCacheRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::AddCache, this, request);
}

void StorageGatewayClient::AddCacheAsync(const AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::AddCacheAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::AddCacheAsyncHelper(const AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddCache(request), context);
}

AddTagsToResourceOutcome StorageGatewayClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::AddTagsToResource, this, request);
}

void StorageGatewayClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::AddTagsToResourceAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToResource(request), context);
}

AddUploadBufferOutcome StorageGatewayClient::AddUploadBuffer(const AddUploadBufferRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::AddUploadBuffer, this, request);
}

void StorageGatewayClient::AddUploadBufferAsync(const AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::AddUploadBufferAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::AddUploadBufferAsyncHelper(const AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddUploadBuffer(request), context);
}

AddWorkingStorageOutcome StorageGatewayClient::AddWorkingStorage(const AddWorkingStorageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::AddWorkingStorage, this, request);
}

void StorageGatewayClient::AddWorkingStorageAsync(const AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::AddWorkingStorageAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::AddWorkingStorageAsyncHelper(const AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddWorkingStorage(request), context);
}

CancelArchivalOutcome StorageGatewayClient::CancelArchival(const CancelArchivalRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CancelArchival, this, request);
}

void StorageGatewayClient::CancelArchivalAsync(const CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CancelArchivalAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CancelArchivalAsyncHelper(const CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelArchival(request), context);
}

CancelRetrievalOutcome StorageGatewayClient::CancelRetrieval(const CancelRetrievalRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CancelRetrieval, this, request);
}

void StorageGatewayClient::CancelRetrievalAsync(const CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CancelRetrievalAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CancelRetrievalAsyncHelper(const CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelRetrieval(request), context);
}

CreateCachediSCSIVolumeOutcome StorageGatewayClient::CreateCachediSCSIVolume(const CreateCachediSCSIVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CreateCachediSCSIVolume, this, request);
}

void StorageGatewayClient::CreateCachediSCSIVolumeAsync(const CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CreateCachediSCSIVolumeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CreateCachediSCSIVolumeAsyncHelper(const CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCachediSCSIVolume(request), context);
}

CreateSnapshotOutcome StorageGatewayClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CreateSnapshot, this, request);
}

void StorageGatewayClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CreateSnapshotAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateSnapshotFromVolumeRecoveryPointOutcome StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint, this, request);
}

void StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointAsync(const CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPointAsyncHelper(const CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshotFromVolumeRecoveryPoint(request), context);
}

CreateStorediSCSIVolumeOutcome StorageGatewayClient::CreateStorediSCSIVolume(const CreateStorediSCSIVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CreateStorediSCSIVolume, this, request);
}

void StorageGatewayClient::CreateStorediSCSIVolumeAsync(const CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CreateStorediSCSIVolumeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CreateStorediSCSIVolumeAsyncHelper(const CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStorediSCSIVolume(request), context);
}

CreateTapeWithBarcodeOutcome StorageGatewayClient::CreateTapeWithBarcode(const CreateTapeWithBarcodeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CreateTapeWithBarcode, this, request);
}

void StorageGatewayClient::CreateTapeWithBarcodeAsync(const CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CreateTapeWithBarcodeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CreateTapeWithBarcodeAsyncHelper(const CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTapeWithBarcode(request), context);
}

CreateTapesOutcome StorageGatewayClient::CreateTapes(const CreateTapesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::CreateTapes, this, request);
}

void StorageGatewayClient::CreateTapesAsync(const CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::CreateTapesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::CreateTapesAsyncHelper(const CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTapes(request), context);
}

DeleteBandwidthRateLimitOutcome StorageGatewayClient::DeleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DeleteBandwidthRateLimit, this, request);
}

void StorageGatewayClient::DeleteBandwidthRateLimitAsync(const DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DeleteBandwidthRateLimitAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DeleteBandwidthRateLimitAsyncHelper(const DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBandwidthRateLimit(request), context);
}

DeleteChapCredentialsOutcome StorageGatewayClient::DeleteChapCredentials(const DeleteChapCredentialsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DeleteChapCredentials, this, request);
}

void StorageGatewayClient::DeleteChapCredentialsAsync(const DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DeleteChapCredentialsAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DeleteChapCredentialsAsyncHelper(const DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChapCredentials(request), context);
}

DeleteGatewayOutcome StorageGatewayClient::DeleteGateway(const DeleteGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DeleteGateway, this, request);
}

void StorageGatewayClient::DeleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DeleteGatewayAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DeleteGatewayAsyncHelper(const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGateway(request), context);
}

DeleteSnapshotScheduleOutcome StorageGatewayClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DeleteSnapshotSchedule, this, request);
}

void StorageGatewayClient::DeleteSnapshotScheduleAsync(const DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DeleteSnapshotScheduleAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DeleteSnapshotScheduleAsyncHelper(const DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshotSchedule(request), context);
}

DeleteTapeOutcome StorageGatewayClient::DeleteTape(const DeleteTapeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DeleteTape, this, request);
}

void StorageGatewayClient::DeleteTapeAsync(const DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DeleteTapeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DeleteTapeAsyncHelper(const DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTape(request), context);
}

DeleteTapeArchiveOutcome StorageGatewayClient::DeleteTapeArchive(const DeleteTapeArchiveRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DeleteTapeArchive, this, request);
}

void StorageGatewayClient::DeleteTapeArchiveAsync(const DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DeleteTapeArchiveAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DeleteTapeArchiveAsyncHelper(const DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTapeArchive(request), context);
}

DeleteVolumeOutcome StorageGatewayClient::DeleteVolume(const DeleteVolumeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DeleteVolume, this, request);
}

void StorageGatewayClient::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DeleteVolumeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DeleteVolumeAsyncHelper(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVolume(request), context);
}

DescribeBandwidthRateLimitOutcome StorageGatewayClient::DescribeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeBandwidthRateLimit, this, request);
}

void StorageGatewayClient::DescribeBandwidthRateLimitAsync(const DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeBandwidthRateLimitAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeBandwidthRateLimitAsyncHelper(const DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBandwidthRateLimit(request), context);
}

DescribeCacheOutcome StorageGatewayClient::DescribeCache(const DescribeCacheRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeCache, this, request);
}

void StorageGatewayClient::DescribeCacheAsync(const DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeCacheAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeCacheAsyncHelper(const DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCache(request), context);
}

DescribeCachediSCSIVolumesOutcome StorageGatewayClient::DescribeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeCachediSCSIVolumes, this, request);
}

void StorageGatewayClient::DescribeCachediSCSIVolumesAsync(const DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeCachediSCSIVolumesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeCachediSCSIVolumesAsyncHelper(const DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCachediSCSIVolumes(request), context);
}

DescribeChapCredentialsOutcome StorageGatewayClient::DescribeChapCredentials(const DescribeChapCredentialsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeChapCredentials, this, request);
}

void StorageGatewayClient::DescribeChapCredentialsAsync(const DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeChapCredentialsAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeChapCredentialsAsyncHelper(const DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChapCredentials(request), context);
}

DescribeGatewayInformationOutcome StorageGatewayClient::DescribeGatewayInformation(const DescribeGatewayInformationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeGatewayInformation, this, request);
}

void StorageGatewayClient::DescribeGatewayInformationAsync(const DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeGatewayInformationAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeGatewayInformationAsyncHelper(const DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGatewayInformation(request), context);
}

DescribeMaintenanceStartTimeOutcome StorageGatewayClient::DescribeMaintenanceStartTime(const DescribeMaintenanceStartTimeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeMaintenanceStartTime, this, request);
}

void StorageGatewayClient::DescribeMaintenanceStartTimeAsync(const DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeMaintenanceStartTimeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeMaintenanceStartTimeAsyncHelper(const DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMaintenanceStartTime(request), context);
}

DescribeSnapshotScheduleOutcome StorageGatewayClient::DescribeSnapshotSchedule(const DescribeSnapshotScheduleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeSnapshotSchedule, this, request);
}

void StorageGatewayClient::DescribeSnapshotScheduleAsync(const DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeSnapshotScheduleAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeSnapshotScheduleAsyncHelper(const DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSnapshotSchedule(request), context);
}

DescribeStorediSCSIVolumesOutcome StorageGatewayClient::DescribeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeStorediSCSIVolumes, this, request);
}

void StorageGatewayClient::DescribeStorediSCSIVolumesAsync(const DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeStorediSCSIVolumesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeStorediSCSIVolumesAsyncHelper(const DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStorediSCSIVolumes(request), context);
}

DescribeTapeArchivesOutcome StorageGatewayClient::DescribeTapeArchives(const DescribeTapeArchivesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeTapeArchives, this, request);
}

void StorageGatewayClient::DescribeTapeArchivesAsync(const DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeTapeArchivesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeTapeArchivesAsyncHelper(const DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTapeArchives(request), context);
}

DescribeTapeRecoveryPointsOutcome StorageGatewayClient::DescribeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeTapeRecoveryPoints, this, request);
}

void StorageGatewayClient::DescribeTapeRecoveryPointsAsync(const DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeTapeRecoveryPointsAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeTapeRecoveryPointsAsyncHelper(const DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTapeRecoveryPoints(request), context);
}

DescribeTapesOutcome StorageGatewayClient::DescribeTapes(const DescribeTapesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeTapes, this, request);
}

void StorageGatewayClient::DescribeTapesAsync(const DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeTapesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeTapesAsyncHelper(const DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTapes(request), context);
}

DescribeUploadBufferOutcome StorageGatewayClient::DescribeUploadBuffer(const DescribeUploadBufferRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeUploadBuffer, this, request);
}

void StorageGatewayClient::DescribeUploadBufferAsync(const DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeUploadBufferAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeUploadBufferAsyncHelper(const DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUploadBuffer(request), context);
}

DescribeVTLDevicesOutcome StorageGatewayClient::DescribeVTLDevices(const DescribeVTLDevicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeVTLDevices, this, request);
}

void StorageGatewayClient::DescribeVTLDevicesAsync(const DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeVTLDevicesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeVTLDevicesAsyncHelper(const DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVTLDevices(request), context);
}

DescribeWorkingStorageOutcome StorageGatewayClient::DescribeWorkingStorage(const DescribeWorkingStorageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DescribeWorkingStorage, this, request);
}

void StorageGatewayClient::DescribeWorkingStorageAsync(const DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DescribeWorkingStorageAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DescribeWorkingStorageAsyncHelper(const DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkingStorage(request), context);
}

DisableGatewayOutcome StorageGatewayClient::DisableGateway(const DisableGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::DisableGateway, this, request);
}

void StorageGatewayClient::DisableGatewayAsync(const DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::DisableGatewayAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::DisableGatewayAsyncHelper(const DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableGateway(request), context);
}

ListGatewaysOutcome StorageGatewayClient::ListGateways(const ListGatewaysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ListGateways, this, request);
}

void StorageGatewayClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ListGatewaysAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ListGatewaysAsyncHelper(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGateways(request), context);
}

ListLocalDisksOutcome StorageGatewayClient::ListLocalDisks(const ListLocalDisksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ListLocalDisks, this, request);
}

void StorageGatewayClient::ListLocalDisksAsync(const ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ListLocalDisksAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ListLocalDisksAsyncHelper(const ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLocalDisks(request), context);
}

ListTagsForResourceOutcome StorageGatewayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ListTagsForResource, this, request);
}

void StorageGatewayClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ListTagsForResourceAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTapesOutcome StorageGatewayClient::ListTapes(const ListTapesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ListTapes, this, request);
}

void StorageGatewayClient::ListTapesAsync(const ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ListTapesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ListTapesAsyncHelper(const ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTapes(request), context);
}

ListVolumeInitiatorsOutcome StorageGatewayClient::ListVolumeInitiators(const ListVolumeInitiatorsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ListVolumeInitiators, this, request);
}

void StorageGatewayClient::ListVolumeInitiatorsAsync(const ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ListVolumeInitiatorsAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ListVolumeInitiatorsAsyncHelper(const ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVolumeInitiators(request), context);
}

ListVolumeRecoveryPointsOutcome StorageGatewayClient::ListVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ListVolumeRecoveryPoints, this, request);
}

void StorageGatewayClient::ListVolumeRecoveryPointsAsync(const ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ListVolumeRecoveryPointsAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ListVolumeRecoveryPointsAsyncHelper(const ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVolumeRecoveryPoints(request), context);
}

ListVolumesOutcome StorageGatewayClient::ListVolumes(const ListVolumesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ListVolumes, this, request);
}

void StorageGatewayClient::ListVolumesAsync(const ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ListVolumesAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ListVolumesAsyncHelper(const ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVolumes(request), context);
}

RemoveTagsFromResourceOutcome StorageGatewayClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::RemoveTagsFromResource, this, request);
}

void StorageGatewayClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::RemoveTagsFromResourceAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromResource(request), context);
}

ResetCacheOutcome StorageGatewayClient::ResetCache(const ResetCacheRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ResetCache, this, request);
}

void StorageGatewayClient::ResetCacheAsync(const ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ResetCacheAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ResetCacheAsyncHelper(const ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetCache(request), context);
}

RetrieveTapeArchiveOutcome StorageGatewayClient::RetrieveTapeArchive(const RetrieveTapeArchiveRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::RetrieveTapeArchive, this, request);
}

void StorageGatewayClient::RetrieveTapeArchiveAsync(const RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::RetrieveTapeArchiveAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::RetrieveTapeArchiveAsyncHelper(const RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetrieveTapeArchive(request), context);
}

RetrieveTapeRecoveryPointOutcome StorageGatewayClient::RetrieveTapeRecoveryPoint(const RetrieveTapeRecoveryPointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::RetrieveTapeRecoveryPoint, this, request);
}

void StorageGatewayClient::RetrieveTapeRecoveryPointAsync(const RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::RetrieveTapeRecoveryPointAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::RetrieveTapeRecoveryPointAsyncHelper(const RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetrieveTapeRecoveryPoint(request), context);
}

SetLocalConsolePasswordOutcome StorageGatewayClient::SetLocalConsolePassword(const SetLocalConsolePasswordRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::SetLocalConsolePassword, this, request);
}

void StorageGatewayClient::SetLocalConsolePasswordAsync(const SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::SetLocalConsolePasswordAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::SetLocalConsolePasswordAsyncHelper(const SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLocalConsolePassword(request), context);
}

ShutdownGatewayOutcome StorageGatewayClient::ShutdownGateway(const ShutdownGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::ShutdownGateway, this, request);
}

void StorageGatewayClient::ShutdownGatewayAsync(const ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::ShutdownGatewayAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::ShutdownGatewayAsyncHelper(const ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ShutdownGateway(request), context);
}

StartGatewayOutcome StorageGatewayClient::StartGateway(const StartGatewayRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::StartGateway, this, request);
}

void StorageGatewayClient::StartGatewayAsync(const StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::StartGatewayAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::StartGatewayAsyncHelper(const StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartGateway(request), context);
}

UpdateBandwidthRateLimitOutcome StorageGatewayClient::UpdateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::UpdateBandwidthRateLimit, this, request);
}

void StorageGatewayClient::UpdateBandwidthRateLimitAsync(const UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::UpdateBandwidthRateLimitAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::UpdateBandwidthRateLimitAsyncHelper(const UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBandwidthRateLimit(request), context);
}

UpdateChapCredentialsOutcome StorageGatewayClient::UpdateChapCredentials(const UpdateChapCredentialsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::UpdateChapCredentials, this, request);
}

void StorageGatewayClient::UpdateChapCredentialsAsync(const UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::UpdateChapCredentialsAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::UpdateChapCredentialsAsyncHelper(const UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChapCredentials(request), context);
}

UpdateGatewayInformationOutcome StorageGatewayClient::UpdateGatewayInformation(const UpdateGatewayInformationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::UpdateGatewayInformation, this, request);
}

void StorageGatewayClient::UpdateGatewayInformationAsync(const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::UpdateGatewayInformationAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::UpdateGatewayInformationAsyncHelper(const UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGatewayInformation(request), context);
}

UpdateGatewaySoftwareNowOutcome StorageGatewayClient::UpdateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::UpdateGatewaySoftwareNow, this, request);
}

void StorageGatewayClient::UpdateGatewaySoftwareNowAsync(const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::UpdateGatewaySoftwareNowAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::UpdateGatewaySoftwareNowAsyncHelper(const UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGatewaySoftwareNow(request), context);
}

UpdateMaintenanceStartTimeOutcome StorageGatewayClient::UpdateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::UpdateMaintenanceStartTime, this, request);
}

void StorageGatewayClient::UpdateMaintenanceStartTimeAsync(const UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::UpdateMaintenanceStartTimeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::UpdateMaintenanceStartTimeAsyncHelper(const UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMaintenanceStartTime(request), context);
}

UpdateSnapshotScheduleOutcome StorageGatewayClient::UpdateSnapshotSchedule(const UpdateSnapshotScheduleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::UpdateSnapshotSchedule, this, request);
}

void StorageGatewayClient::UpdateSnapshotScheduleAsync(const UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::UpdateSnapshotScheduleAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::UpdateSnapshotScheduleAsyncHelper(const UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSnapshotSchedule(request), context);
}

UpdateVTLDeviceTypeOutcome StorageGatewayClient::UpdateVTLDeviceType(const UpdateVTLDeviceTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &StorageGatewayClient::UpdateVTLDeviceType, this, request);
}

void StorageGatewayClient::UpdateVTLDeviceTypeAsync(const UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&StorageGatewayClient::UpdateVTLDeviceTypeAsyncHelper, this, request, handler, context);
}

void StorageGatewayClient::UpdateVTLDeviceTypeAsyncHelper(const UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVTLDeviceType(request), context);
}

