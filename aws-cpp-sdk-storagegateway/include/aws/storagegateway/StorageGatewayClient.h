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
#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/storagegateway/model/ActivateGatewayResult.h>
#include <aws/storagegateway/model/AddCacheResult.h>
#include <aws/storagegateway/model/AddTagsToResourceResult.h>
#include <aws/storagegateway/model/AddUploadBufferResult.h>
#include <aws/storagegateway/model/AddWorkingStorageResult.h>
#include <aws/storagegateway/model/CancelArchivalResult.h>
#include <aws/storagegateway/model/CancelRetrievalResult.h>
#include <aws/storagegateway/model/CreateCachediSCSIVolumeResult.h>
#include <aws/storagegateway/model/CreateSnapshotResult.h>
#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointResult.h>
#include <aws/storagegateway/model/CreateStorediSCSIVolumeResult.h>
#include <aws/storagegateway/model/CreateTapeWithBarcodeResult.h>
#include <aws/storagegateway/model/CreateTapesResult.h>
#include <aws/storagegateway/model/DeleteBandwidthRateLimitResult.h>
#include <aws/storagegateway/model/DeleteChapCredentialsResult.h>
#include <aws/storagegateway/model/DeleteGatewayResult.h>
#include <aws/storagegateway/model/DeleteSnapshotScheduleResult.h>
#include <aws/storagegateway/model/DeleteTapeResult.h>
#include <aws/storagegateway/model/DeleteTapeArchiveResult.h>
#include <aws/storagegateway/model/DeleteVolumeResult.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitResult.h>
#include <aws/storagegateway/model/DescribeCacheResult.h>
#include <aws/storagegateway/model/DescribeCachediSCSIVolumesResult.h>
#include <aws/storagegateway/model/DescribeChapCredentialsResult.h>
#include <aws/storagegateway/model/DescribeGatewayInformationResult.h>
#include <aws/storagegateway/model/DescribeMaintenanceStartTimeResult.h>
#include <aws/storagegateway/model/DescribeSnapshotScheduleResult.h>
#include <aws/storagegateway/model/DescribeStorediSCSIVolumesResult.h>
#include <aws/storagegateway/model/DescribeTapeArchivesResult.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsResult.h>
#include <aws/storagegateway/model/DescribeTapesResult.h>
#include <aws/storagegateway/model/DescribeUploadBufferResult.h>
#include <aws/storagegateway/model/DescribeVTLDevicesResult.h>
#include <aws/storagegateway/model/DescribeWorkingStorageResult.h>
#include <aws/storagegateway/model/DisableGatewayResult.h>
#include <aws/storagegateway/model/ListGatewaysResult.h>
#include <aws/storagegateway/model/ListLocalDisksResult.h>
#include <aws/storagegateway/model/ListTagsForResourceResult.h>
#include <aws/storagegateway/model/ListTapesResult.h>
#include <aws/storagegateway/model/ListVolumeInitiatorsResult.h>
#include <aws/storagegateway/model/ListVolumeRecoveryPointsResult.h>
#include <aws/storagegateway/model/ListVolumesResult.h>
#include <aws/storagegateway/model/RemoveTagsFromResourceResult.h>
#include <aws/storagegateway/model/ResetCacheResult.h>
#include <aws/storagegateway/model/RetrieveTapeArchiveResult.h>
#include <aws/storagegateway/model/RetrieveTapeRecoveryPointResult.h>
#include <aws/storagegateway/model/SetLocalConsolePasswordResult.h>
#include <aws/storagegateway/model/ShutdownGatewayResult.h>
#include <aws/storagegateway/model/StartGatewayResult.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitResult.h>
#include <aws/storagegateway/model/UpdateChapCredentialsResult.h>
#include <aws/storagegateway/model/UpdateGatewayInformationResult.h>
#include <aws/storagegateway/model/UpdateGatewaySoftwareNowResult.h>
#include <aws/storagegateway/model/UpdateMaintenanceStartTimeResult.h>
#include <aws/storagegateway/model/UpdateSnapshotScheduleResult.h>
#include <aws/storagegateway/model/UpdateVTLDeviceTypeResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace StorageGateway
{

namespace Model
{
        class ActivateGatewayRequest;
        class AddCacheRequest;
        class AddTagsToResourceRequest;
        class AddUploadBufferRequest;
        class AddWorkingStorageRequest;
        class CancelArchivalRequest;
        class CancelRetrievalRequest;
        class CreateCachediSCSIVolumeRequest;
        class CreateSnapshotRequest;
        class CreateSnapshotFromVolumeRecoveryPointRequest;
        class CreateStorediSCSIVolumeRequest;
        class CreateTapeWithBarcodeRequest;
        class CreateTapesRequest;
        class DeleteBandwidthRateLimitRequest;
        class DeleteChapCredentialsRequest;
        class DeleteGatewayRequest;
        class DeleteSnapshotScheduleRequest;
        class DeleteTapeRequest;
        class DeleteTapeArchiveRequest;
        class DeleteVolumeRequest;
        class DescribeBandwidthRateLimitRequest;
        class DescribeCacheRequest;
        class DescribeCachediSCSIVolumesRequest;
        class DescribeChapCredentialsRequest;
        class DescribeGatewayInformationRequest;
        class DescribeMaintenanceStartTimeRequest;
        class DescribeSnapshotScheduleRequest;
        class DescribeStorediSCSIVolumesRequest;
        class DescribeTapeArchivesRequest;
        class DescribeTapeRecoveryPointsRequest;
        class DescribeTapesRequest;
        class DescribeUploadBufferRequest;
        class DescribeVTLDevicesRequest;
        class DescribeWorkingStorageRequest;
        class DisableGatewayRequest;
        class ListGatewaysRequest;
        class ListLocalDisksRequest;
        class ListTagsForResourceRequest;
        class ListTapesRequest;
        class ListVolumeInitiatorsRequest;
        class ListVolumeRecoveryPointsRequest;
        class ListVolumesRequest;
        class RemoveTagsFromResourceRequest;
        class ResetCacheRequest;
        class RetrieveTapeArchiveRequest;
        class RetrieveTapeRecoveryPointRequest;
        class SetLocalConsolePasswordRequest;
        class ShutdownGatewayRequest;
        class StartGatewayRequest;
        class UpdateBandwidthRateLimitRequest;
        class UpdateChapCredentialsRequest;
        class UpdateGatewayInformationRequest;
        class UpdateGatewaySoftwareNowRequest;
        class UpdateMaintenanceStartTimeRequest;
        class UpdateSnapshotScheduleRequest;
        class UpdateVTLDeviceTypeRequest;

        typedef Aws::Utils::Outcome<ActivateGatewayResult, Aws::Client::AWSError<StorageGatewayErrors>> ActivateGatewayOutcome;
        typedef Aws::Utils::Outcome<AddCacheResult, Aws::Client::AWSError<StorageGatewayErrors>> AddCacheOutcome;
        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<StorageGatewayErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<AddUploadBufferResult, Aws::Client::AWSError<StorageGatewayErrors>> AddUploadBufferOutcome;
        typedef Aws::Utils::Outcome<AddWorkingStorageResult, Aws::Client::AWSError<StorageGatewayErrors>> AddWorkingStorageOutcome;
        typedef Aws::Utils::Outcome<CancelArchivalResult, Aws::Client::AWSError<StorageGatewayErrors>> CancelArchivalOutcome;
        typedef Aws::Utils::Outcome<CancelRetrievalResult, Aws::Client::AWSError<StorageGatewayErrors>> CancelRetrievalOutcome;
        typedef Aws::Utils::Outcome<CreateCachediSCSIVolumeResult, Aws::Client::AWSError<StorageGatewayErrors>> CreateCachediSCSIVolumeOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResult, Aws::Client::AWSError<StorageGatewayErrors>> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotFromVolumeRecoveryPointResult, Aws::Client::AWSError<StorageGatewayErrors>> CreateSnapshotFromVolumeRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<CreateStorediSCSIVolumeResult, Aws::Client::AWSError<StorageGatewayErrors>> CreateStorediSCSIVolumeOutcome;
        typedef Aws::Utils::Outcome<CreateTapeWithBarcodeResult, Aws::Client::AWSError<StorageGatewayErrors>> CreateTapeWithBarcodeOutcome;
        typedef Aws::Utils::Outcome<CreateTapesResult, Aws::Client::AWSError<StorageGatewayErrors>> CreateTapesOutcome;
        typedef Aws::Utils::Outcome<DeleteBandwidthRateLimitResult, Aws::Client::AWSError<StorageGatewayErrors>> DeleteBandwidthRateLimitOutcome;
        typedef Aws::Utils::Outcome<DeleteChapCredentialsResult, Aws::Client::AWSError<StorageGatewayErrors>> DeleteChapCredentialsOutcome;
        typedef Aws::Utils::Outcome<DeleteGatewayResult, Aws::Client::AWSError<StorageGatewayErrors>> DeleteGatewayOutcome;
        typedef Aws::Utils::Outcome<DeleteSnapshotScheduleResult, Aws::Client::AWSError<StorageGatewayErrors>> DeleteSnapshotScheduleOutcome;
        typedef Aws::Utils::Outcome<DeleteTapeResult, Aws::Client::AWSError<StorageGatewayErrors>> DeleteTapeOutcome;
        typedef Aws::Utils::Outcome<DeleteTapeArchiveResult, Aws::Client::AWSError<StorageGatewayErrors>> DeleteTapeArchiveOutcome;
        typedef Aws::Utils::Outcome<DeleteVolumeResult, Aws::Client::AWSError<StorageGatewayErrors>> DeleteVolumeOutcome;
        typedef Aws::Utils::Outcome<DescribeBandwidthRateLimitResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeBandwidthRateLimitOutcome;
        typedef Aws::Utils::Outcome<DescribeCacheResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeCacheOutcome;
        typedef Aws::Utils::Outcome<DescribeCachediSCSIVolumesResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeCachediSCSIVolumesOutcome;
        typedef Aws::Utils::Outcome<DescribeChapCredentialsResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeChapCredentialsOutcome;
        typedef Aws::Utils::Outcome<DescribeGatewayInformationResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeGatewayInformationOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceStartTimeResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeMaintenanceStartTimeOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotScheduleResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeSnapshotScheduleOutcome;
        typedef Aws::Utils::Outcome<DescribeStorediSCSIVolumesResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeStorediSCSIVolumesOutcome;
        typedef Aws::Utils::Outcome<DescribeTapeArchivesResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeTapeArchivesOutcome;
        typedef Aws::Utils::Outcome<DescribeTapeRecoveryPointsResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeTapeRecoveryPointsOutcome;
        typedef Aws::Utils::Outcome<DescribeTapesResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeTapesOutcome;
        typedef Aws::Utils::Outcome<DescribeUploadBufferResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeUploadBufferOutcome;
        typedef Aws::Utils::Outcome<DescribeVTLDevicesResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeVTLDevicesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkingStorageResult, Aws::Client::AWSError<StorageGatewayErrors>> DescribeWorkingStorageOutcome;
        typedef Aws::Utils::Outcome<DisableGatewayResult, Aws::Client::AWSError<StorageGatewayErrors>> DisableGatewayOutcome;
        typedef Aws::Utils::Outcome<ListGatewaysResult, Aws::Client::AWSError<StorageGatewayErrors>> ListGatewaysOutcome;
        typedef Aws::Utils::Outcome<ListLocalDisksResult, Aws::Client::AWSError<StorageGatewayErrors>> ListLocalDisksOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<StorageGatewayErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTapesResult, Aws::Client::AWSError<StorageGatewayErrors>> ListTapesOutcome;
        typedef Aws::Utils::Outcome<ListVolumeInitiatorsResult, Aws::Client::AWSError<StorageGatewayErrors>> ListVolumeInitiatorsOutcome;
        typedef Aws::Utils::Outcome<ListVolumeRecoveryPointsResult, Aws::Client::AWSError<StorageGatewayErrors>> ListVolumeRecoveryPointsOutcome;
        typedef Aws::Utils::Outcome<ListVolumesResult, Aws::Client::AWSError<StorageGatewayErrors>> ListVolumesOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<StorageGatewayErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<ResetCacheResult, Aws::Client::AWSError<StorageGatewayErrors>> ResetCacheOutcome;
        typedef Aws::Utils::Outcome<RetrieveTapeArchiveResult, Aws::Client::AWSError<StorageGatewayErrors>> RetrieveTapeArchiveOutcome;
        typedef Aws::Utils::Outcome<RetrieveTapeRecoveryPointResult, Aws::Client::AWSError<StorageGatewayErrors>> RetrieveTapeRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<SetLocalConsolePasswordResult, Aws::Client::AWSError<StorageGatewayErrors>> SetLocalConsolePasswordOutcome;
        typedef Aws::Utils::Outcome<ShutdownGatewayResult, Aws::Client::AWSError<StorageGatewayErrors>> ShutdownGatewayOutcome;
        typedef Aws::Utils::Outcome<StartGatewayResult, Aws::Client::AWSError<StorageGatewayErrors>> StartGatewayOutcome;
        typedef Aws::Utils::Outcome<UpdateBandwidthRateLimitResult, Aws::Client::AWSError<StorageGatewayErrors>> UpdateBandwidthRateLimitOutcome;
        typedef Aws::Utils::Outcome<UpdateChapCredentialsResult, Aws::Client::AWSError<StorageGatewayErrors>> UpdateChapCredentialsOutcome;
        typedef Aws::Utils::Outcome<UpdateGatewayInformationResult, Aws::Client::AWSError<StorageGatewayErrors>> UpdateGatewayInformationOutcome;
        typedef Aws::Utils::Outcome<UpdateGatewaySoftwareNowResult, Aws::Client::AWSError<StorageGatewayErrors>> UpdateGatewaySoftwareNowOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceStartTimeResult, Aws::Client::AWSError<StorageGatewayErrors>> UpdateMaintenanceStartTimeOutcome;
        typedef Aws::Utils::Outcome<UpdateSnapshotScheduleResult, Aws::Client::AWSError<StorageGatewayErrors>> UpdateSnapshotScheduleOutcome;
        typedef Aws::Utils::Outcome<UpdateVTLDeviceTypeResult, Aws::Client::AWSError<StorageGatewayErrors>> UpdateVTLDeviceTypeOutcome;

        typedef std::future<ActivateGatewayOutcome> ActivateGatewayOutcomeCallable;
        typedef std::future<AddCacheOutcome> AddCacheOutcomeCallable;
        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<AddUploadBufferOutcome> AddUploadBufferOutcomeCallable;
        typedef std::future<AddWorkingStorageOutcome> AddWorkingStorageOutcomeCallable;
        typedef std::future<CancelArchivalOutcome> CancelArchivalOutcomeCallable;
        typedef std::future<CancelRetrievalOutcome> CancelRetrievalOutcomeCallable;
        typedef std::future<CreateCachediSCSIVolumeOutcome> CreateCachediSCSIVolumeOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
        typedef std::future<CreateSnapshotFromVolumeRecoveryPointOutcome> CreateSnapshotFromVolumeRecoveryPointOutcomeCallable;
        typedef std::future<CreateStorediSCSIVolumeOutcome> CreateStorediSCSIVolumeOutcomeCallable;
        typedef std::future<CreateTapeWithBarcodeOutcome> CreateTapeWithBarcodeOutcomeCallable;
        typedef std::future<CreateTapesOutcome> CreateTapesOutcomeCallable;
        typedef std::future<DeleteBandwidthRateLimitOutcome> DeleteBandwidthRateLimitOutcomeCallable;
        typedef std::future<DeleteChapCredentialsOutcome> DeleteChapCredentialsOutcomeCallable;
        typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
        typedef std::future<DeleteSnapshotScheduleOutcome> DeleteSnapshotScheduleOutcomeCallable;
        typedef std::future<DeleteTapeOutcome> DeleteTapeOutcomeCallable;
        typedef std::future<DeleteTapeArchiveOutcome> DeleteTapeArchiveOutcomeCallable;
        typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
        typedef std::future<DescribeBandwidthRateLimitOutcome> DescribeBandwidthRateLimitOutcomeCallable;
        typedef std::future<DescribeCacheOutcome> DescribeCacheOutcomeCallable;
        typedef std::future<DescribeCachediSCSIVolumesOutcome> DescribeCachediSCSIVolumesOutcomeCallable;
        typedef std::future<DescribeChapCredentialsOutcome> DescribeChapCredentialsOutcomeCallable;
        typedef std::future<DescribeGatewayInformationOutcome> DescribeGatewayInformationOutcomeCallable;
        typedef std::future<DescribeMaintenanceStartTimeOutcome> DescribeMaintenanceStartTimeOutcomeCallable;
        typedef std::future<DescribeSnapshotScheduleOutcome> DescribeSnapshotScheduleOutcomeCallable;
        typedef std::future<DescribeStorediSCSIVolumesOutcome> DescribeStorediSCSIVolumesOutcomeCallable;
        typedef std::future<DescribeTapeArchivesOutcome> DescribeTapeArchivesOutcomeCallable;
        typedef std::future<DescribeTapeRecoveryPointsOutcome> DescribeTapeRecoveryPointsOutcomeCallable;
        typedef std::future<DescribeTapesOutcome> DescribeTapesOutcomeCallable;
        typedef std::future<DescribeUploadBufferOutcome> DescribeUploadBufferOutcomeCallable;
        typedef std::future<DescribeVTLDevicesOutcome> DescribeVTLDevicesOutcomeCallable;
        typedef std::future<DescribeWorkingStorageOutcome> DescribeWorkingStorageOutcomeCallable;
        typedef std::future<DisableGatewayOutcome> DisableGatewayOutcomeCallable;
        typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
        typedef std::future<ListLocalDisksOutcome> ListLocalDisksOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTapesOutcome> ListTapesOutcomeCallable;
        typedef std::future<ListVolumeInitiatorsOutcome> ListVolumeInitiatorsOutcomeCallable;
        typedef std::future<ListVolumeRecoveryPointsOutcome> ListVolumeRecoveryPointsOutcomeCallable;
        typedef std::future<ListVolumesOutcome> ListVolumesOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<ResetCacheOutcome> ResetCacheOutcomeCallable;
        typedef std::future<RetrieveTapeArchiveOutcome> RetrieveTapeArchiveOutcomeCallable;
        typedef std::future<RetrieveTapeRecoveryPointOutcome> RetrieveTapeRecoveryPointOutcomeCallable;
        typedef std::future<SetLocalConsolePasswordOutcome> SetLocalConsolePasswordOutcomeCallable;
        typedef std::future<ShutdownGatewayOutcome> ShutdownGatewayOutcomeCallable;
        typedef std::future<StartGatewayOutcome> StartGatewayOutcomeCallable;
        typedef std::future<UpdateBandwidthRateLimitOutcome> UpdateBandwidthRateLimitOutcomeCallable;
        typedef std::future<UpdateChapCredentialsOutcome> UpdateChapCredentialsOutcomeCallable;
        typedef std::future<UpdateGatewayInformationOutcome> UpdateGatewayInformationOutcomeCallable;
        typedef std::future<UpdateGatewaySoftwareNowOutcome> UpdateGatewaySoftwareNowOutcomeCallable;
        typedef std::future<UpdateMaintenanceStartTimeOutcome> UpdateMaintenanceStartTimeOutcomeCallable;
        typedef std::future<UpdateSnapshotScheduleOutcome> UpdateSnapshotScheduleOutcomeCallable;
        typedef std::future<UpdateVTLDeviceTypeOutcome> UpdateVTLDeviceTypeOutcomeCallable;
} // namespace Model

  class StorageGatewayClient;

    typedef std::function<void(const StorageGatewayClient*, const Model::ActivateGatewayRequest&, const Model::ActivateGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddCacheRequest&, const Model::AddCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCacheResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddUploadBufferRequest&, const Model::AddUploadBufferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddUploadBufferResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddWorkingStorageRequest&, const Model::AddWorkingStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddWorkingStorageResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CancelArchivalRequest&, const Model::CancelArchivalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelArchivalResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CancelRetrievalRequest&, const Model::CancelRetrievalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelRetrievalResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateCachediSCSIVolumeRequest&, const Model::CreateCachediSCSIVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCachediSCSIVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateSnapshotFromVolumeRecoveryPointRequest&, const Model::CreateSnapshotFromVolumeRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateStorediSCSIVolumeRequest&, const Model::CreateStorediSCSIVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorediSCSIVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateTapeWithBarcodeRequest&, const Model::CreateTapeWithBarcodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTapeWithBarcodeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateTapesRequest&, const Model::CreateTapesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTapesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteBandwidthRateLimitRequest&, const Model::DeleteBandwidthRateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBandwidthRateLimitResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteChapCredentialsRequest&, const Model::DeleteChapCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChapCredentialsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteGatewayRequest&, const Model::DeleteGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteSnapshotScheduleRequest&, const Model::DeleteSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteTapeRequest&, const Model::DeleteTapeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTapeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteTapeArchiveRequest&, const Model::DeleteTapeArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTapeArchiveResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteVolumeRequest&, const Model::DeleteVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeBandwidthRateLimitRequest&, const Model::DescribeBandwidthRateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBandwidthRateLimitResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeCacheRequest&, const Model::DescribeCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeCachediSCSIVolumesRequest&, const Model::DescribeCachediSCSIVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCachediSCSIVolumesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeChapCredentialsRequest&, const Model::DescribeChapCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChapCredentialsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeGatewayInformationRequest&, const Model::DescribeGatewayInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGatewayInformationResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeMaintenanceStartTimeRequest&, const Model::DescribeMaintenanceStartTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceStartTimeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeSnapshotScheduleRequest&, const Model::DescribeSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeStorediSCSIVolumesRequest&, const Model::DescribeStorediSCSIVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStorediSCSIVolumesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeTapeArchivesRequest&, const Model::DescribeTapeArchivesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTapeArchivesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeTapeRecoveryPointsRequest&, const Model::DescribeTapeRecoveryPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTapeRecoveryPointsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeTapesRequest&, const Model::DescribeTapesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTapesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeUploadBufferRequest&, const Model::DescribeUploadBufferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUploadBufferResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeVTLDevicesRequest&, const Model::DescribeVTLDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVTLDevicesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeWorkingStorageRequest&, const Model::DescribeWorkingStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkingStorageResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DisableGatewayRequest&, const Model::DisableGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListGatewaysRequest&, const Model::ListGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewaysResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListLocalDisksRequest&, const Model::ListLocalDisksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLocalDisksResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListTapesRequest&, const Model::ListTapesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTapesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListVolumeInitiatorsRequest&, const Model::ListVolumeInitiatorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVolumeInitiatorsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListVolumeRecoveryPointsRequest&, const Model::ListVolumeRecoveryPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVolumeRecoveryPointsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListVolumesRequest&, const Model::ListVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVolumesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ResetCacheRequest&, const Model::ResetCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetCacheResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::RetrieveTapeArchiveRequest&, const Model::RetrieveTapeArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveTapeArchiveResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::RetrieveTapeRecoveryPointRequest&, const Model::RetrieveTapeRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveTapeRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::SetLocalConsolePasswordRequest&, const Model::SetLocalConsolePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLocalConsolePasswordResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ShutdownGatewayRequest&, const Model::ShutdownGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ShutdownGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::StartGatewayRequest&, const Model::StartGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateBandwidthRateLimitRequest&, const Model::UpdateBandwidthRateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBandwidthRateLimitResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateChapCredentialsRequest&, const Model::UpdateChapCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChapCredentialsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateGatewayInformationRequest&, const Model::UpdateGatewayInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayInformationResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateGatewaySoftwareNowRequest&, const Model::UpdateGatewaySoftwareNowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewaySoftwareNowResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateMaintenanceStartTimeRequest&, const Model::UpdateMaintenanceStartTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceStartTimeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateSnapshotScheduleRequest&, const Model::UpdateSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateVTLDeviceTypeRequest&, const Model::UpdateVTLDeviceTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVTLDeviceTypeResponseReceivedHandler;

  /**
   * <fullname>AWS Storage Gateway Service</fullname> <p>AWS Storage Gateway is the
   * service that connects an on-premises software appliance with cloud-based storage
   * to provide seamless and secure integration between an organization's on-premises
   * IT environment and AWS's storage infrastructure. The service enables you to
   * securely upload data to the AWS cloud for cost effective backup and rapid
   * disaster recovery.</p> <p>Use the following links to get started using the
   * <i>AWS Storage Gateway Service API Reference</i>:</p> <ul> <li> <p> <a
   * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayHTTPRequestsHeaders.html">AWS
   * Storage Gateway Required Request Headers</a>: Describes the required headers
   * that you must send with every POST request to AWS Storage Gateway.</p> </li>
   * <li> <p> <a
   * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewaySigningRequests.html">Signing
   * Requests</a>: AWS Storage Gateway requires that you authenticate every request
   * you send; this topic describes how sign such a request.</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/APIErrorResponses.html">Error
   * Responses</a>: Provides reference information about AWS Storage Gateway
   * errors.</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPIOperations.html">Operations
   * in AWS Storage Gateway</a>: Contains detailed descriptions of all AWS Storage
   * Gateway operations, their request parameters, response elements, possible
   * errors, and examples of requests and responses.</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/general/latest/gr/index.html?rande.html">AWS
   * Storage Gateway Regions and Endpoints</a>: Provides a list of each of the s and
   * endpoints available for use with AWS Storage Gateway.</p> </li> </ul> <note>
   * <p>AWS Storage Gateway resource IDs are in uppercase. When you use these
   * resource IDs with the Amazon EC2 API, EC2 expects resource IDs in lowercase. You
   * must change your resource ID to lowercase to use it with the EC2 API. For
   * example, in Storage Gateway the ID for a volume might be
   * <code>vol-1122AABB</code>. When you use this ID with the EC2 API, you must
   * change it to <code>vol-1122aabb</code>. Otherwise, the EC2 API might not behave
   * as expected.</p> </note> <important> <p>IDs for Storage Gateway volumes and
   * Amazon EBS snapshots created from gateway volumes are changing to a longer
   * format. Starting in December 2016, all new volumes and snapshots will be created
   * with a 17-character string. Starting in April 2016, you will be able to use
   * these longer IDs so you can test your systems with the new format. For more
   * information, see <a href="https://aws.amazon.com/ec2/faqs/#longer-ids">Longer
   * EC2 and EBS Resource IDs</a>.</p> <p> For example, a volume ARN with the longer
   * volume ID format will look like this:</p> <p>
   * <code>arn:aws:storagegateway:us-west-2:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABBCCDDEEFFG</code>.</p>
   * <p>A snapshot ID with the longer ID format will look like this:
   * <code>snap-78e226633445566ee</code>.</p> <p>For more information, see <a
   * href="https://forums.aws.amazon.com/ann.jspa?annID=3557">Announcement: Heads-up
   * – Longer AWS Storage Gateway volume and snapshot IDs coming in 2016</a>.</p>
   * </important>
   */
  class AWS_STORAGEGATEWAY_API StorageGatewayClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        StorageGatewayClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        StorageGatewayClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        StorageGatewayClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~StorageGatewayClient();

        /**
         * <p>Activates the gateway you previously deployed on your host. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedActivateGateway-common.html">
         * Activate the AWS Storage Gateway</a>. In the activation process, you specify
         * information such as the you want to use for storing snapshots, the time zone for
         * scheduled snapshots the gateway snapshot schedule window, an activation key, and
         * a name for your gateway. The activation process also associates your gateway
         * with your account; for more information, see
         * <a>UpdateGatewayInformation</a>.</p> <note><p>You must turn on the gateway VM
         * before you can activate your gateway.</p> </note>
         */
        virtual Model::ActivateGatewayOutcome ActivateGateway(const Model::ActivateGatewayRequest& request) const;

        /**
         * <p>Activates the gateway you previously deployed on your host. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedActivateGateway-common.html">
         * Activate the AWS Storage Gateway</a>. In the activation process, you specify
         * information such as the you want to use for storing snapshots, the time zone for
         * scheduled snapshots the gateway snapshot schedule window, an activation key, and
         * a name for your gateway. The activation process also associates your gateway
         * with your account; for more information, see
         * <a>UpdateGatewayInformation</a>.</p> <note><p>You must turn on the gateway VM
         * before you can activate your gateway.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateGatewayOutcomeCallable ActivateGatewayCallable(const Model::ActivateGatewayRequest& request) const;

        /**
         * <p>Activates the gateway you previously deployed on your host. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedActivateGateway-common.html">
         * Activate the AWS Storage Gateway</a>. In the activation process, you specify
         * information such as the you want to use for storing snapshots, the time zone for
         * scheduled snapshots the gateway snapshot schedule window, an activation key, and
         * a name for your gateway. The activation process also associates your gateway
         * with your account; for more information, see
         * <a>UpdateGatewayInformation</a>.</p> <note><p>You must turn on the gateway VM
         * before you can activate your gateway.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateGatewayAsync(const Model::ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures one or more gateway local disks as cache for a cached-volume
         * gateway. This operation is supported only for the gateway-cached volume
         * architecture (see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/StorageGatewayConcepts.html">Storage
         * Gateway Concepts</a>).</p> <p>In the request, you specify the gateway Amazon
         * Resource Name (ARN) to which you want to add cache, and one or more disk IDs
         * that you want to configure as cache.</p>
         */
        virtual Model::AddCacheOutcome AddCache(const Model::AddCacheRequest& request) const;

        /**
         * <p>Configures one or more gateway local disks as cache for a cached-volume
         * gateway. This operation is supported only for the gateway-cached volume
         * architecture (see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/StorageGatewayConcepts.html">Storage
         * Gateway Concepts</a>).</p> <p>In the request, you specify the gateway Amazon
         * Resource Name (ARN) to which you want to add cache, and one or more disk IDs
         * that you want to configure as cache.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddCacheOutcomeCallable AddCacheCallable(const Model::AddCacheRequest& request) const;

        /**
         * <p>Configures one or more gateway local disks as cache for a cached-volume
         * gateway. This operation is supported only for the gateway-cached volume
         * architecture (see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/StorageGatewayConcepts.html">Storage
         * Gateway Concepts</a>).</p> <p>In the request, you specify the gateway Amazon
         * Resource Name (ARN) to which you want to add cache, and one or more disk IDs
         * that you want to configure as cache.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddCacheAsync(const Model::AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified resource. You use tags to add metadata
         * to resources, which you can use to categorize these resources. For example, you
         * can categorize resources by purpose, owner, environment, or team. Each tag
         * consists of a key and a value, which you define. You can add tags to the
         * following AWS Storage Gateway resources:</p> <ul> <li> <p>Storage gateways of
         * all types</p> </li> </ul> <ul> <li> <p>Storage Volumes</p> </li> </ul> <ul> <li>
         * <p>Virtual Tapes</p> </li> </ul> <p>You can create a maximum of 10 tags for each
         * resource. Virtual tapes and storage volumes that are recovered to a new gateway
         * maintain their tags.</p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource. You use tags to add metadata
         * to resources, which you can use to categorize these resources. For example, you
         * can categorize resources by purpose, owner, environment, or team. Each tag
         * consists of a key and a value, which you define. You can add tags to the
         * following AWS Storage Gateway resources:</p> <ul> <li> <p>Storage gateways of
         * all types</p> </li> </ul> <ul> <li> <p>Storage Volumes</p> </li> </ul> <ul> <li>
         * <p>Virtual Tapes</p> </li> </ul> <p>You can create a maximum of 10 tags for each
         * resource. Virtual tapes and storage volumes that are recovered to a new gateway
         * maintain their tags.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource. You use tags to add metadata
         * to resources, which you can use to categorize these resources. For example, you
         * can categorize resources by purpose, owner, environment, or team. Each tag
         * consists of a key and a value, which you define. You can add tags to the
         * following AWS Storage Gateway resources:</p> <ul> <li> <p>Storage gateways of
         * all types</p> </li> </ul> <ul> <li> <p>Storage Volumes</p> </li> </ul> <ul> <li>
         * <p>Virtual Tapes</p> </li> </ul> <p>You can create a maximum of 10 tags for each
         * resource. Virtual tapes and storage volumes that are recovered to a new gateway
         * maintain their tags.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures one or more gateway local disks as upload buffer for a specified
         * gateway. This operation is supported for both the gateway-stored and
         * gateway-cached volume architectures.</p> <p>In the request, you specify the
         * gateway Amazon Resource Name (ARN) to which you want to add upload buffer, and
         * one or more disk IDs that you want to configure as upload buffer.</p>
         */
        virtual Model::AddUploadBufferOutcome AddUploadBuffer(const Model::AddUploadBufferRequest& request) const;

        /**
         * <p>Configures one or more gateway local disks as upload buffer for a specified
         * gateway. This operation is supported for both the gateway-stored and
         * gateway-cached volume architectures.</p> <p>In the request, you specify the
         * gateway Amazon Resource Name (ARN) to which you want to add upload buffer, and
         * one or more disk IDs that you want to configure as upload buffer.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddUploadBufferOutcomeCallable AddUploadBufferCallable(const Model::AddUploadBufferRequest& request) const;

        /**
         * <p>Configures one or more gateway local disks as upload buffer for a specified
         * gateway. This operation is supported for both the gateway-stored and
         * gateway-cached volume architectures.</p> <p>In the request, you specify the
         * gateway Amazon Resource Name (ARN) to which you want to add upload buffer, and
         * one or more disk IDs that you want to configure as upload buffer.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddUploadBufferAsync(const Model::AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures one or more gateway local disks as working storage for a gateway.
         * This operation is supported only for the gateway-stored volume architecture.
         * This operation is deprecated in cached-volumes API version 20120630. Use
         * <a>AddUploadBuffer</a> instead.</p> <note> <p>Working storage is also referred
         * to as upload buffer. You can also use the <a>AddUploadBuffer</a> operation to
         * add upload buffer to a stored-volume gateway.</p> </note> <p>In the request, you
         * specify the gateway Amazon Resource Name (ARN) to which you want to add working
         * storage, and one or more disk IDs that you want to configure as working
         * storage.</p>
         */
        virtual Model::AddWorkingStorageOutcome AddWorkingStorage(const Model::AddWorkingStorageRequest& request) const;

        /**
         * <p>Configures one or more gateway local disks as working storage for a gateway.
         * This operation is supported only for the gateway-stored volume architecture.
         * This operation is deprecated in cached-volumes API version 20120630. Use
         * <a>AddUploadBuffer</a> instead.</p> <note> <p>Working storage is also referred
         * to as upload buffer. You can also use the <a>AddUploadBuffer</a> operation to
         * add upload buffer to a stored-volume gateway.</p> </note> <p>In the request, you
         * specify the gateway Amazon Resource Name (ARN) to which you want to add working
         * storage, and one or more disk IDs that you want to configure as working
         * storage.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddWorkingStorageOutcomeCallable AddWorkingStorageCallable(const Model::AddWorkingStorageRequest& request) const;

        /**
         * <p>Configures one or more gateway local disks as working storage for a gateway.
         * This operation is supported only for the gateway-stored volume architecture.
         * This operation is deprecated in cached-volumes API version 20120630. Use
         * <a>AddUploadBuffer</a> instead.</p> <note> <p>Working storage is also referred
         * to as upload buffer. You can also use the <a>AddUploadBuffer</a> operation to
         * add upload buffer to a stored-volume gateway.</p> </note> <p>In the request, you
         * specify the gateway Amazon Resource Name (ARN) to which you want to add working
         * storage, and one or more disk IDs that you want to configure as working
         * storage.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddWorkingStorageAsync(const Model::AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels archiving of a virtual tape to the virtual tape shelf (VTS) after the
         * archiving process is initiated.</p>
         */
        virtual Model::CancelArchivalOutcome CancelArchival(const Model::CancelArchivalRequest& request) const;

        /**
         * <p>Cancels archiving of a virtual tape to the virtual tape shelf (VTS) after the
         * archiving process is initiated.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelArchivalOutcomeCallable CancelArchivalCallable(const Model::CancelArchivalRequest& request) const;

        /**
         * <p>Cancels archiving of a virtual tape to the virtual tape shelf (VTS) after the
         * archiving process is initiated.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelArchivalAsync(const Model::CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels retrieval of a virtual tape from the virtual tape shelf (VTS) to a
         * gateway after the retrieval process is initiated. The virtual tape is returned
         * to the VTS.</p>
         */
        virtual Model::CancelRetrievalOutcome CancelRetrieval(const Model::CancelRetrievalRequest& request) const;

        /**
         * <p>Cancels retrieval of a virtual tape from the virtual tape shelf (VTS) to a
         * gateway after the retrieval process is initiated. The virtual tape is returned
         * to the VTS.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelRetrievalOutcomeCallable CancelRetrievalCallable(const Model::CancelRetrievalRequest& request) const;

        /**
         * <p>Cancels retrieval of a virtual tape from the virtual tape shelf (VTS) to a
         * gateway after the retrieval process is initiated. The virtual tape is returned
         * to the VTS.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelRetrievalAsync(const Model::CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a cached volume on a specified cached gateway. This operation is
         * supported only for the gateway-cached volume architecture.</p> <note><p>Cache
         * storage must be allocated to the gateway before you can create a cached volume.
         * Use the <a>AddCache</a> operation to add cache storage to a gateway. </p>
         * </note> <p>In the request, you must specify the gateway, size of the volume in
         * bytes, the iSCSI target name, an IP address on which to expose the target, and a
         * unique client token. In response, AWS Storage Gateway creates the volume and
         * returns information about it such as the volume Amazon Resource Name (ARN), its
         * size, and the iSCSI target ARN that initiators can use to connect to the volume
         * target.</p>
         */
        virtual Model::CreateCachediSCSIVolumeOutcome CreateCachediSCSIVolume(const Model::CreateCachediSCSIVolumeRequest& request) const;

        /**
         * <p>Creates a cached volume on a specified cached gateway. This operation is
         * supported only for the gateway-cached volume architecture.</p> <note><p>Cache
         * storage must be allocated to the gateway before you can create a cached volume.
         * Use the <a>AddCache</a> operation to add cache storage to a gateway. </p>
         * </note> <p>In the request, you must specify the gateway, size of the volume in
         * bytes, the iSCSI target name, an IP address on which to expose the target, and a
         * unique client token. In response, AWS Storage Gateway creates the volume and
         * returns information about it such as the volume Amazon Resource Name (ARN), its
         * size, and the iSCSI target ARN that initiators can use to connect to the volume
         * target.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCachediSCSIVolumeOutcomeCallable CreateCachediSCSIVolumeCallable(const Model::CreateCachediSCSIVolumeRequest& request) const;

        /**
         * <p>Creates a cached volume on a specified cached gateway. This operation is
         * supported only for the gateway-cached volume architecture.</p> <note><p>Cache
         * storage must be allocated to the gateway before you can create a cached volume.
         * Use the <a>AddCache</a> operation to add cache storage to a gateway. </p>
         * </note> <p>In the request, you must specify the gateway, size of the volume in
         * bytes, the iSCSI target name, an IP address on which to expose the target, and a
         * unique client token. In response, AWS Storage Gateway creates the volume and
         * returns information about it such as the volume Amazon Resource Name (ARN), its
         * size, and the iSCSI target ARN that initiators can use to connect to the volume
         * target.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCachediSCSIVolumeAsync(const Model::CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a snapshot of a volume.</p> <p>AWS Storage Gateway provides the
         * ability to back up point-in-time snapshots of your data to Amazon Simple Storage
         * (S3) for durable off-site recovery, as well as import the data to an Amazon
         * Elastic Block Store (EBS) volume in Amazon Elastic Compute Cloud (EC2). You can
         * take snapshots of your gateway volume on a scheduled or ad-hoc basis. This API
         * enables you to take ad-hoc snapshot. For more information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/WorkingWithSnapshots.html">Working
         * With Snapshots in the AWS Storage Gateway Console</a>.</p> <p>In the
         * CreateSnapshot request you identify the volume by providing its Amazon Resource
         * Name (ARN). You must also provide description for the snapshot. When AWS Storage
         * Gateway takes the snapshot of specified volume, the snapshot and description
         * appears in the AWS Storage Gateway Console. In response, AWS Storage Gateway
         * returns you a snapshot ID. You can use this snapshot ID to check the snapshot
         * progress or later use it when you want to create a volume from a snapshot.</p>
         * <note><p>To list or delete a snapshot, you must use the Amazon EC2 API. For more
         * information, see DescribeSnapshots or DeleteSnapshot in the <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Operations.html">EC2
         * API reference</a>.</p> </note> <important> <p>Volume and snapshot IDs are
         * changing to a longer length ID format. For more information, see the important
         * note on the <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/APIReference/Welcome.html">Welcome</a>
         * page.</p> </important>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Initiates a snapshot of a volume.</p> <p>AWS Storage Gateway provides the
         * ability to back up point-in-time snapshots of your data to Amazon Simple Storage
         * (S3) for durable off-site recovery, as well as import the data to an Amazon
         * Elastic Block Store (EBS) volume in Amazon Elastic Compute Cloud (EC2). You can
         * take snapshots of your gateway volume on a scheduled or ad-hoc basis. This API
         * enables you to take ad-hoc snapshot. For more information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/WorkingWithSnapshots.html">Working
         * With Snapshots in the AWS Storage Gateway Console</a>.</p> <p>In the
         * CreateSnapshot request you identify the volume by providing its Amazon Resource
         * Name (ARN). You must also provide description for the snapshot. When AWS Storage
         * Gateway takes the snapshot of specified volume, the snapshot and description
         * appears in the AWS Storage Gateway Console. In response, AWS Storage Gateway
         * returns you a snapshot ID. You can use this snapshot ID to check the snapshot
         * progress or later use it when you want to create a volume from a snapshot.</p>
         * <note><p>To list or delete a snapshot, you must use the Amazon EC2 API. For more
         * information, see DescribeSnapshots or DeleteSnapshot in the <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Operations.html">EC2
         * API reference</a>.</p> </note> <important> <p>Volume and snapshot IDs are
         * changing to a longer length ID format. For more information, see the important
         * note on the <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/APIReference/Welcome.html">Welcome</a>
         * page.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Initiates a snapshot of a volume.</p> <p>AWS Storage Gateway provides the
         * ability to back up point-in-time snapshots of your data to Amazon Simple Storage
         * (S3) for durable off-site recovery, as well as import the data to an Amazon
         * Elastic Block Store (EBS) volume in Amazon Elastic Compute Cloud (EC2). You can
         * take snapshots of your gateway volume on a scheduled or ad-hoc basis. This API
         * enables you to take ad-hoc snapshot. For more information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/WorkingWithSnapshots.html">Working
         * With Snapshots in the AWS Storage Gateway Console</a>.</p> <p>In the
         * CreateSnapshot request you identify the volume by providing its Amazon Resource
         * Name (ARN). You must also provide description for the snapshot. When AWS Storage
         * Gateway takes the snapshot of specified volume, the snapshot and description
         * appears in the AWS Storage Gateway Console. In response, AWS Storage Gateway
         * returns you a snapshot ID. You can use this snapshot ID to check the snapshot
         * progress or later use it when you want to create a volume from a snapshot.</p>
         * <note><p>To list or delete a snapshot, you must use the Amazon EC2 API. For more
         * information, see DescribeSnapshots or DeleteSnapshot in the <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Operations.html">EC2
         * API reference</a>.</p> </note> <important> <p>Volume and snapshot IDs are
         * changing to a longer length ID format. For more information, see the important
         * note on the <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/APIReference/Welcome.html">Welcome</a>
         * page.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a snapshot of a gateway from a volume recovery point. This
         * operation is supported only for the gateway-cached volume architecture.</p> <p>A
         * volume recovery point is a point in time at which all data of the volume is
         * consistent and from which you can create a snapshot. To get a list of volume
         * recovery point for gateway-cached volumes, use
         * <a>ListVolumeRecoveryPoints</a>.</p> <p>In the
         * <code>CreateSnapshotFromVolumeRecoveryPoint</code> request, you identify the
         * volume by providing its Amazon Resource Name (ARN). You must also provide a
         * description for the snapshot. When AWS Storage Gateway takes a snapshot of the
         * specified volume, the snapshot and its description appear in the AWS Storage
         * Gateway console. In response, AWS Storage Gateway returns you a snapshot ID. You
         * can use this snapshot ID to check the snapshot progress or later use it when you
         * want to create a volume from a snapshot.</p> <note> <p>To list or delete a
         * snapshot, you must use the Amazon EC2 API. For more information, in <i>Amazon
         * Elastic Compute Cloud API Reference</i>.</p> </note>
         */
        virtual Model::CreateSnapshotFromVolumeRecoveryPointOutcome CreateSnapshotFromVolumeRecoveryPoint(const Model::CreateSnapshotFromVolumeRecoveryPointRequest& request) const;

        /**
         * <p>Initiates a snapshot of a gateway from a volume recovery point. This
         * operation is supported only for the gateway-cached volume architecture.</p> <p>A
         * volume recovery point is a point in time at which all data of the volume is
         * consistent and from which you can create a snapshot. To get a list of volume
         * recovery point for gateway-cached volumes, use
         * <a>ListVolumeRecoveryPoints</a>.</p> <p>In the
         * <code>CreateSnapshotFromVolumeRecoveryPoint</code> request, you identify the
         * volume by providing its Amazon Resource Name (ARN). You must also provide a
         * description for the snapshot. When AWS Storage Gateway takes a snapshot of the
         * specified volume, the snapshot and its description appear in the AWS Storage
         * Gateway console. In response, AWS Storage Gateway returns you a snapshot ID. You
         * can use this snapshot ID to check the snapshot progress or later use it when you
         * want to create a volume from a snapshot.</p> <note> <p>To list or delete a
         * snapshot, you must use the Amazon EC2 API. For more information, in <i>Amazon
         * Elastic Compute Cloud API Reference</i>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotFromVolumeRecoveryPointOutcomeCallable CreateSnapshotFromVolumeRecoveryPointCallable(const Model::CreateSnapshotFromVolumeRecoveryPointRequest& request) const;

        /**
         * <p>Initiates a snapshot of a gateway from a volume recovery point. This
         * operation is supported only for the gateway-cached volume architecture.</p> <p>A
         * volume recovery point is a point in time at which all data of the volume is
         * consistent and from which you can create a snapshot. To get a list of volume
         * recovery point for gateway-cached volumes, use
         * <a>ListVolumeRecoveryPoints</a>.</p> <p>In the
         * <code>CreateSnapshotFromVolumeRecoveryPoint</code> request, you identify the
         * volume by providing its Amazon Resource Name (ARN). You must also provide a
         * description for the snapshot. When AWS Storage Gateway takes a snapshot of the
         * specified volume, the snapshot and its description appear in the AWS Storage
         * Gateway console. In response, AWS Storage Gateway returns you a snapshot ID. You
         * can use this snapshot ID to check the snapshot progress or later use it when you
         * want to create a volume from a snapshot.</p> <note> <p>To list or delete a
         * snapshot, you must use the Amazon EC2 API. For more information, in <i>Amazon
         * Elastic Compute Cloud API Reference</i>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotFromVolumeRecoveryPointAsync(const Model::CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a volume on a specified gateway. This operation is supported only for
         * the gateway-stored volume architecture.</p> <p>The size of the volume to create
         * is inferred from the disk size. You can choose to preserve existing data on the
         * disk, create volume from an existing snapshot, or create an empty volume. If you
         * choose to create an empty gateway volume, then any existing data on the disk is
         * erased.</p> <p>In the request you must specify the gateway and the disk
         * information on which you are creating the volume. In response, AWS Storage
         * Gateway creates the volume and returns volume information such as the volume
         * Amazon Resource Name (ARN), its size, and the iSCSI target ARN that initiators
         * can use to connect to the volume target.</p>
         */
        virtual Model::CreateStorediSCSIVolumeOutcome CreateStorediSCSIVolume(const Model::CreateStorediSCSIVolumeRequest& request) const;

        /**
         * <p>Creates a volume on a specified gateway. This operation is supported only for
         * the gateway-stored volume architecture.</p> <p>The size of the volume to create
         * is inferred from the disk size. You can choose to preserve existing data on the
         * disk, create volume from an existing snapshot, or create an empty volume. If you
         * choose to create an empty gateway volume, then any existing data on the disk is
         * erased.</p> <p>In the request you must specify the gateway and the disk
         * information on which you are creating the volume. In response, AWS Storage
         * Gateway creates the volume and returns volume information such as the volume
         * Amazon Resource Name (ARN), its size, and the iSCSI target ARN that initiators
         * can use to connect to the volume target.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStorediSCSIVolumeOutcomeCallable CreateStorediSCSIVolumeCallable(const Model::CreateStorediSCSIVolumeRequest& request) const;

        /**
         * <p>Creates a volume on a specified gateway. This operation is supported only for
         * the gateway-stored volume architecture.</p> <p>The size of the volume to create
         * is inferred from the disk size. You can choose to preserve existing data on the
         * disk, create volume from an existing snapshot, or create an empty volume. If you
         * choose to create an empty gateway volume, then any existing data on the disk is
         * erased.</p> <p>In the request you must specify the gateway and the disk
         * information on which you are creating the volume. In response, AWS Storage
         * Gateway creates the volume and returns volume information such as the volume
         * Amazon Resource Name (ARN), its size, and the iSCSI target ARN that initiators
         * can use to connect to the volume target.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStorediSCSIVolumeAsync(const Model::CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual tape by using your own barcode. You write data to the
         * virtual tape and then archive the tape.</p> <note><p>Cache storage must be
         * allocated to the gateway before you can create a virtual tape. Use the
         * <a>AddCache</a> operation to add cache storage to a gateway.</p> </note>
         */
        virtual Model::CreateTapeWithBarcodeOutcome CreateTapeWithBarcode(const Model::CreateTapeWithBarcodeRequest& request) const;

        /**
         * <p>Creates a virtual tape by using your own barcode. You write data to the
         * virtual tape and then archive the tape.</p> <note><p>Cache storage must be
         * allocated to the gateway before you can create a virtual tape. Use the
         * <a>AddCache</a> operation to add cache storage to a gateway.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTapeWithBarcodeOutcomeCallable CreateTapeWithBarcodeCallable(const Model::CreateTapeWithBarcodeRequest& request) const;

        /**
         * <p>Creates a virtual tape by using your own barcode. You write data to the
         * virtual tape and then archive the tape.</p> <note><p>Cache storage must be
         * allocated to the gateway before you can create a virtual tape. Use the
         * <a>AddCache</a> operation to add cache storage to a gateway.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTapeWithBarcodeAsync(const Model::CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more virtual tapes. You write data to the virtual tapes and
         * then archive the tapes.</p> <note><p>Cache storage must be allocated to the
         * gateway before you can create virtual tapes. Use the <a>AddCache</a> operation
         * to add cache storage to a gateway. </p> </note>
         */
        virtual Model::CreateTapesOutcome CreateTapes(const Model::CreateTapesRequest& request) const;

        /**
         * <p>Creates one or more virtual tapes. You write data to the virtual tapes and
         * then archive the tapes.</p> <note><p>Cache storage must be allocated to the
         * gateway before you can create virtual tapes. Use the <a>AddCache</a> operation
         * to add cache storage to a gateway. </p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTapesOutcomeCallable CreateTapesCallable(const Model::CreateTapesRequest& request) const;

        /**
         * <p>Creates one or more virtual tapes. You write data to the virtual tapes and
         * then archive the tapes.</p> <note><p>Cache storage must be allocated to the
         * gateway before you can create virtual tapes. Use the <a>AddCache</a> operation
         * to add cache storage to a gateway. </p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTapesAsync(const Model::CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the bandwidth rate limits of a gateway. You can delete either the
         * upload and download bandwidth rate limit, or you can delete both. If you delete
         * only one of the limits, the other limit remains unchanged. To specify which
         * gateway to work with, use the Amazon Resource Name (ARN) of the gateway in your
         * request.</p>
         */
        virtual Model::DeleteBandwidthRateLimitOutcome DeleteBandwidthRateLimit(const Model::DeleteBandwidthRateLimitRequest& request) const;

        /**
         * <p>Deletes the bandwidth rate limits of a gateway. You can delete either the
         * upload and download bandwidth rate limit, or you can delete both. If you delete
         * only one of the limits, the other limit remains unchanged. To specify which
         * gateway to work with, use the Amazon Resource Name (ARN) of the gateway in your
         * request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBandwidthRateLimitOutcomeCallable DeleteBandwidthRateLimitCallable(const Model::DeleteBandwidthRateLimitRequest& request) const;

        /**
         * <p>Deletes the bandwidth rate limits of a gateway. You can delete either the
         * upload and download bandwidth rate limit, or you can delete both. If you delete
         * only one of the limits, the other limit remains unchanged. To specify which
         * gateway to work with, use the Amazon Resource Name (ARN) of the gateway in your
         * request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBandwidthRateLimitAsync(const Model::DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes Challenge-Handshake Authentication Protocol (CHAP) credentials for a
         * specified iSCSI target and initiator pair.</p>
         */
        virtual Model::DeleteChapCredentialsOutcome DeleteChapCredentials(const Model::DeleteChapCredentialsRequest& request) const;

        /**
         * <p>Deletes Challenge-Handshake Authentication Protocol (CHAP) credentials for a
         * specified iSCSI target and initiator pair.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChapCredentialsOutcomeCallable DeleteChapCredentialsCallable(const Model::DeleteChapCredentialsRequest& request) const;

        /**
         * <p>Deletes Challenge-Handshake Authentication Protocol (CHAP) credentials for a
         * specified iSCSI target and initiator pair.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChapCredentialsAsync(const Model::DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a gateway. To specify which gateway to delete, use the Amazon
         * Resource Name (ARN) of the gateway in your request. The operation deletes the
         * gateway; however, it does not delete the gateway virtual machine (VM) from your
         * host computer.</p> <p>After you delete a gateway, you cannot reactivate it.
         * Completed snapshots of the gateway volumes are not deleted upon deleting the
         * gateway, however, pending snapshots will not complete. After you delete a
         * gateway, your next step is to remove it from your environment.</p> <important>
         * <p>You no longer pay software charges after the gateway is deleted; however,
         * your existing Amazon EBS snapshots persist and you will continue to be billed
         * for these snapshots. You can choose to remove all remaining Amazon EBS snapshots
         * by canceling your Amazon EC2 subscription.  If you prefer not to cancel your
         * Amazon EC2 subscription, you can delete your snapshots using the Amazon EC2
         * console. For more information, see the <a
         * href="http://aws.amazon.com/storagegateway"> AWS Storage Gateway Detail
         * Page</a>. </p> </important>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * <p>Deletes a gateway. To specify which gateway to delete, use the Amazon
         * Resource Name (ARN) of the gateway in your request. The operation deletes the
         * gateway; however, it does not delete the gateway virtual machine (VM) from your
         * host computer.</p> <p>After you delete a gateway, you cannot reactivate it.
         * Completed snapshots of the gateway volumes are not deleted upon deleting the
         * gateway, however, pending snapshots will not complete. After you delete a
         * gateway, your next step is to remove it from your environment.</p> <important>
         * <p>You no longer pay software charges after the gateway is deleted; however,
         * your existing Amazon EBS snapshots persist and you will continue to be billed
         * for these snapshots. You can choose to remove all remaining Amazon EBS snapshots
         * by canceling your Amazon EC2 subscription.  If you prefer not to cancel your
         * Amazon EC2 subscription, you can delete your snapshots using the Amazon EC2
         * console. For more information, see the <a
         * href="http://aws.amazon.com/storagegateway"> AWS Storage Gateway Detail
         * Page</a>. </p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;

        /**
         * <p>Deletes a gateway. To specify which gateway to delete, use the Amazon
         * Resource Name (ARN) of the gateway in your request. The operation deletes the
         * gateway; however, it does not delete the gateway virtual machine (VM) from your
         * host computer.</p> <p>After you delete a gateway, you cannot reactivate it.
         * Completed snapshots of the gateway volumes are not deleted upon deleting the
         * gateway, however, pending snapshots will not complete. After you delete a
         * gateway, your next step is to remove it from your environment.</p> <important>
         * <p>You no longer pay software charges after the gateway is deleted; however,
         * your existing Amazon EBS snapshots persist and you will continue to be billed
         * for these snapshots. You can choose to remove all remaining Amazon EBS snapshots
         * by canceling your Amazon EC2 subscription.  If you prefer not to cancel your
         * Amazon EC2 subscription, you can delete your snapshots using the Amazon EC2
         * console. For more information, see the <a
         * href="http://aws.amazon.com/storagegateway"> AWS Storage Gateway Detail
         * Page</a>. </p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a snapshot of a volume.</p> <p>You can take snapshots of your gateway
         * volumes on a scheduled or ad hoc basis. This API action enables you to delete a
         * snapshot schedule for a volume. For more information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/WorkingWithSnapshots.html">Working
         * with Snapshots</a>. In the <code>DeleteSnapshotSchedule</code> request, you
         * identify the volume by providing its Amazon Resource Name (ARN). </p> <note>
         * <p>To list or delete a snapshot, you must use the Amazon EC2 API. in <i>Amazon
         * Elastic Compute Cloud API Reference</i>.</p> </note>
         */
        virtual Model::DeleteSnapshotScheduleOutcome DeleteSnapshotSchedule(const Model::DeleteSnapshotScheduleRequest& request) const;

        /**
         * <p>Deletes a snapshot of a volume.</p> <p>You can take snapshots of your gateway
         * volumes on a scheduled or ad hoc basis. This API action enables you to delete a
         * snapshot schedule for a volume. For more information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/WorkingWithSnapshots.html">Working
         * with Snapshots</a>. In the <code>DeleteSnapshotSchedule</code> request, you
         * identify the volume by providing its Amazon Resource Name (ARN). </p> <note>
         * <p>To list or delete a snapshot, you must use the Amazon EC2 API. in <i>Amazon
         * Elastic Compute Cloud API Reference</i>.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotScheduleOutcomeCallable DeleteSnapshotScheduleCallable(const Model::DeleteSnapshotScheduleRequest& request) const;

        /**
         * <p>Deletes a snapshot of a volume.</p> <p>You can take snapshots of your gateway
         * volumes on a scheduled or ad hoc basis. This API action enables you to delete a
         * snapshot schedule for a volume. For more information, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/WorkingWithSnapshots.html">Working
         * with Snapshots</a>. In the <code>DeleteSnapshotSchedule</code> request, you
         * identify the volume by providing its Amazon Resource Name (ARN). </p> <note>
         * <p>To list or delete a snapshot, you must use the Amazon EC2 API. in <i>Amazon
         * Elastic Compute Cloud API Reference</i>.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotScheduleAsync(const Model::DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified virtual tape.</p>
         */
        virtual Model::DeleteTapeOutcome DeleteTape(const Model::DeleteTapeRequest& request) const;

        /**
         * <p>Deletes the specified virtual tape.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTapeOutcomeCallable DeleteTapeCallable(const Model::DeleteTapeRequest& request) const;

        /**
         * <p>Deletes the specified virtual tape.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTapeAsync(const Model::DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified virtual tape from the virtual tape shelf (VTS).</p>
         */
        virtual Model::DeleteTapeArchiveOutcome DeleteTapeArchive(const Model::DeleteTapeArchiveRequest& request) const;

        /**
         * <p>Deletes the specified virtual tape from the virtual tape shelf (VTS).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTapeArchiveOutcomeCallable DeleteTapeArchiveCallable(const Model::DeleteTapeArchiveRequest& request) const;

        /**
         * <p>Deletes the specified virtual tape from the virtual tape shelf (VTS).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTapeArchiveAsync(const Model::DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified gateway volume that you previously created using the
         * <a>CreateCachediSCSIVolume</a> or <a>CreateStorediSCSIVolume</a> API. For
         * gateway-stored volumes, the local disk that was configured as the storage volume
         * is not deleted. You can reuse the local disk to create another storage volume.
         * </p> <p>Before you delete a gateway volume, make sure there are no iSCSI
         * connections to the volume you are deleting. You should also make sure there is
         * no snapshot in progress. You can use the Amazon Elastic Compute Cloud (Amazon
         * EC2) API to query snapshots on the volume you are deleting and check the
         * snapshot status. For more information, go to <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
         * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> <p>In the request,
         * you must provide the Amazon Resource Name (ARN) of the storage volume you want
         * to delete.</p>
         */
        virtual Model::DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest& request) const;

        /**
         * <p>Deletes the specified gateway volume that you previously created using the
         * <a>CreateCachediSCSIVolume</a> or <a>CreateStorediSCSIVolume</a> API. For
         * gateway-stored volumes, the local disk that was configured as the storage volume
         * is not deleted. You can reuse the local disk to create another storage volume.
         * </p> <p>Before you delete a gateway volume, make sure there are no iSCSI
         * connections to the volume you are deleting. You should also make sure there is
         * no snapshot in progress. You can use the Amazon Elastic Compute Cloud (Amazon
         * EC2) API to query snapshots on the volume you are deleting and check the
         * snapshot status. For more information, go to <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
         * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> <p>In the request,
         * you must provide the Amazon Resource Name (ARN) of the storage volume you want
         * to delete.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVolumeOutcomeCallable DeleteVolumeCallable(const Model::DeleteVolumeRequest& request) const;

        /**
         * <p>Deletes the specified gateway volume that you previously created using the
         * <a>CreateCachediSCSIVolume</a> or <a>CreateStorediSCSIVolume</a> API. For
         * gateway-stored volumes, the local disk that was configured as the storage volume
         * is not deleted. You can reuse the local disk to create another storage volume.
         * </p> <p>Before you delete a gateway volume, make sure there are no iSCSI
         * connections to the volume you are deleting. You should also make sure there is
         * no snapshot in progress. You can use the Amazon Elastic Compute Cloud (Amazon
         * EC2) API to query snapshots on the volume you are deleting and check the
         * snapshot status. For more information, go to <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
         * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> <p>In the request,
         * you must provide the Amazon Resource Name (ARN) of the storage volume you want
         * to delete.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVolumeAsync(const Model::DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the bandwidth rate limits of a gateway. By default, these limits are
         * not set, which means no bandwidth rate limiting is in effect.</p> <p>This
         * operation only returns a value for a bandwidth rate limit only if the limit is
         * set. If no limits are set for the gateway, then this operation returns only the
         * gateway ARN in the response body. To specify which gateway to describe, use the
         * Amazon Resource Name (ARN) of the gateway in your request.</p>
         */
        virtual Model::DescribeBandwidthRateLimitOutcome DescribeBandwidthRateLimit(const Model::DescribeBandwidthRateLimitRequest& request) const;

        /**
         * <p>Returns the bandwidth rate limits of a gateway. By default, these limits are
         * not set, which means no bandwidth rate limiting is in effect.</p> <p>This
         * operation only returns a value for a bandwidth rate limit only if the limit is
         * set. If no limits are set for the gateway, then this operation returns only the
         * gateway ARN in the response body. To specify which gateway to describe, use the
         * Amazon Resource Name (ARN) of the gateway in your request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBandwidthRateLimitOutcomeCallable DescribeBandwidthRateLimitCallable(const Model::DescribeBandwidthRateLimitRequest& request) const;

        /**
         * <p>Returns the bandwidth rate limits of a gateway. By default, these limits are
         * not set, which means no bandwidth rate limiting is in effect.</p> <p>This
         * operation only returns a value for a bandwidth rate limit only if the limit is
         * set. If no limits are set for the gateway, then this operation returns only the
         * gateway ARN in the response body. To specify which gateway to describe, use the
         * Amazon Resource Name (ARN) of the gateway in your request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBandwidthRateLimitAsync(const Model::DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the cache of a gateway. This operation is supported
         * only for the gateway-cached volume architecture.</p> <p>The response includes
         * disk IDs that are configured as cache, and it includes the amount of cache
         * allocated and used.</p>
         */
        virtual Model::DescribeCacheOutcome DescribeCache(const Model::DescribeCacheRequest& request) const;

        /**
         * <p>Returns information about the cache of a gateway. This operation is supported
         * only for the gateway-cached volume architecture.</p> <p>The response includes
         * disk IDs that are configured as cache, and it includes the amount of cache
         * allocated and used.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheOutcomeCallable DescribeCacheCallable(const Model::DescribeCacheRequest& request) const;

        /**
         * <p>Returns information about the cache of a gateway. This operation is supported
         * only for the gateway-cached volume architecture.</p> <p>The response includes
         * disk IDs that are configured as cache, and it includes the amount of cache
         * allocated and used.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheAsync(const Model::DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the gateway volumes specified in the request. This
         * operation is supported only for the gateway-cached volume architecture.</p>
         * <p>The list of gateway volumes in the request must be from one gateway. In the
         * response Amazon Storage Gateway returns volume information sorted by volume
         * Amazon Resource Name (ARN).</p>
         */
        virtual Model::DescribeCachediSCSIVolumesOutcome DescribeCachediSCSIVolumes(const Model::DescribeCachediSCSIVolumesRequest& request) const;

        /**
         * <p>Returns a description of the gateway volumes specified in the request. This
         * operation is supported only for the gateway-cached volume architecture.</p>
         * <p>The list of gateway volumes in the request must be from one gateway. In the
         * response Amazon Storage Gateway returns volume information sorted by volume
         * Amazon Resource Name (ARN).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCachediSCSIVolumesOutcomeCallable DescribeCachediSCSIVolumesCallable(const Model::DescribeCachediSCSIVolumesRequest& request) const;

        /**
         * <p>Returns a description of the gateway volumes specified in the request. This
         * operation is supported only for the gateway-cached volume architecture.</p>
         * <p>The list of gateway volumes in the request must be from one gateway. In the
         * response Amazon Storage Gateway returns volume information sorted by volume
         * Amazon Resource Name (ARN).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCachediSCSIVolumesAsync(const Model::DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of Challenge-Handshake Authentication Protocol (CHAP)
         * credentials information for a specified iSCSI target, one for each
         * target-initiator pair.</p>
         */
        virtual Model::DescribeChapCredentialsOutcome DescribeChapCredentials(const Model::DescribeChapCredentialsRequest& request) const;

        /**
         * <p>Returns an array of Challenge-Handshake Authentication Protocol (CHAP)
         * credentials information for a specified iSCSI target, one for each
         * target-initiator pair.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChapCredentialsOutcomeCallable DescribeChapCredentialsCallable(const Model::DescribeChapCredentialsRequest& request) const;

        /**
         * <p>Returns an array of Challenge-Handshake Authentication Protocol (CHAP)
         * credentials information for a specified iSCSI target, one for each
         * target-initiator pair.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChapCredentialsAsync(const Model::DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a gateway such as its name, network interfaces,
         * configured time zone, and the state (whether the gateway is running or not). To
         * specify which gateway to describe, use the Amazon Resource Name (ARN) of the
         * gateway in your request.</p>
         */
        virtual Model::DescribeGatewayInformationOutcome DescribeGatewayInformation(const Model::DescribeGatewayInformationRequest& request) const;

        /**
         * <p>Returns metadata about a gateway such as its name, network interfaces,
         * configured time zone, and the state (whether the gateway is running or not). To
         * specify which gateway to describe, use the Amazon Resource Name (ARN) of the
         * gateway in your request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayInformationOutcomeCallable DescribeGatewayInformationCallable(const Model::DescribeGatewayInformationRequest& request) const;

        /**
         * <p>Returns metadata about a gateway such as its name, network interfaces,
         * configured time zone, and the state (whether the gateway is running or not). To
         * specify which gateway to describe, use the Amazon Resource Name (ARN) of the
         * gateway in your request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayInformationAsync(const Model::DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns your gateway's weekly maintenance start time including the day and
         * time of the week. Note that values are in terms of the gateway's time zone.</p>
         */
        virtual Model::DescribeMaintenanceStartTimeOutcome DescribeMaintenanceStartTime(const Model::DescribeMaintenanceStartTimeRequest& request) const;

        /**
         * <p>Returns your gateway's weekly maintenance start time including the day and
         * time of the week. Note that values are in terms of the gateway's time zone.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceStartTimeOutcomeCallable DescribeMaintenanceStartTimeCallable(const Model::DescribeMaintenanceStartTimeRequest& request) const;

        /**
         * <p>Returns your gateway's weekly maintenance start time including the day and
         * time of the week. Note that values are in terms of the gateway's time zone.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceStartTimeAsync(const Model::DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the snapshot schedule for the specified gateway volume. The
         * snapshot schedule information includes intervals at which snapshots are
         * automatically initiated on the volume.</p>
         */
        virtual Model::DescribeSnapshotScheduleOutcome DescribeSnapshotSchedule(const Model::DescribeSnapshotScheduleRequest& request) const;

        /**
         * <p>Describes the snapshot schedule for the specified gateway volume. The
         * snapshot schedule information includes intervals at which snapshots are
         * automatically initiated on the volume.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotScheduleOutcomeCallable DescribeSnapshotScheduleCallable(const Model::DescribeSnapshotScheduleRequest& request) const;

        /**
         * <p>Describes the snapshot schedule for the specified gateway volume. The
         * snapshot schedule information includes intervals at which snapshots are
         * automatically initiated on the volume.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotScheduleAsync(const Model::DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of the gateway volumes specified in the request. The
         * list of gateway volumes in the request must be from one gateway. In the response
         * Amazon Storage Gateway returns volume information sorted by volume ARNs.</p>
         */
        virtual Model::DescribeStorediSCSIVolumesOutcome DescribeStorediSCSIVolumes(const Model::DescribeStorediSCSIVolumesRequest& request) const;

        /**
         * <p>Returns the description of the gateway volumes specified in the request. The
         * list of gateway volumes in the request must be from one gateway. In the response
         * Amazon Storage Gateway returns volume information sorted by volume ARNs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStorediSCSIVolumesOutcomeCallable DescribeStorediSCSIVolumesCallable(const Model::DescribeStorediSCSIVolumesRequest& request) const;

        /**
         * <p>Returns the description of the gateway volumes specified in the request. The
         * list of gateway volumes in the request must be from one gateway. In the response
         * Amazon Storage Gateway returns volume information sorted by volume ARNs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStorediSCSIVolumesAsync(const Model::DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of specified virtual tapes in the virtual tape shelf
         * (VTS).</p> <p>If a specific <code>TapeARN</code> is not specified, AWS Storage
         * Gateway returns a description of all virtual tapes found in the VTS associated
         * with your account.</p>
         */
        virtual Model::DescribeTapeArchivesOutcome DescribeTapeArchives(const Model::DescribeTapeArchivesRequest& request) const;

        /**
         * <p>Returns a description of specified virtual tapes in the virtual tape shelf
         * (VTS).</p> <p>If a specific <code>TapeARN</code> is not specified, AWS Storage
         * Gateway returns a description of all virtual tapes found in the VTS associated
         * with your account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTapeArchivesOutcomeCallable DescribeTapeArchivesCallable(const Model::DescribeTapeArchivesRequest& request) const;

        /**
         * <p>Returns a description of specified virtual tapes in the virtual tape shelf
         * (VTS).</p> <p>If a specific <code>TapeARN</code> is not specified, AWS Storage
         * Gateway returns a description of all virtual tapes found in the VTS associated
         * with your account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTapeArchivesAsync(const Model::DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of virtual tape recovery points that are available for the
         * specified gateway-VTL.</p> <p>A recovery point is a point-in-time view of a
         * virtual tape at which all the data on the virtual tape is consistent. If your
         * gateway crashes, virtual tapes that have recovery points can be recovered to a
         * new gateway.</p>
         */
        virtual Model::DescribeTapeRecoveryPointsOutcome DescribeTapeRecoveryPoints(const Model::DescribeTapeRecoveryPointsRequest& request) const;

        /**
         * <p>Returns a list of virtual tape recovery points that are available for the
         * specified gateway-VTL.</p> <p>A recovery point is a point-in-time view of a
         * virtual tape at which all the data on the virtual tape is consistent. If your
         * gateway crashes, virtual tapes that have recovery points can be recovered to a
         * new gateway.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTapeRecoveryPointsOutcomeCallable DescribeTapeRecoveryPointsCallable(const Model::DescribeTapeRecoveryPointsRequest& request) const;

        /**
         * <p>Returns a list of virtual tape recovery points that are available for the
         * specified gateway-VTL.</p> <p>A recovery point is a point-in-time view of a
         * virtual tape at which all the data on the virtual tape is consistent. If your
         * gateway crashes, virtual tapes that have recovery points can be recovered to a
         * new gateway.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTapeRecoveryPointsAsync(const Model::DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified Amazon Resource Name (ARN) of virtual
         * tapes. If a <code>TapeARN</code> is not specified, returns a description of all
         * virtual tapes associated with the specified gateway.</p>
         */
        virtual Model::DescribeTapesOutcome DescribeTapes(const Model::DescribeTapesRequest& request) const;

        /**
         * <p>Returns a description of the specified Amazon Resource Name (ARN) of virtual
         * tapes. If a <code>TapeARN</code> is not specified, returns a description of all
         * virtual tapes associated with the specified gateway.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTapesOutcomeCallable DescribeTapesCallable(const Model::DescribeTapesRequest& request) const;

        /**
         * <p>Returns a description of the specified Amazon Resource Name (ARN) of virtual
         * tapes. If a <code>TapeARN</code> is not specified, returns a description of all
         * virtual tapes associated with the specified gateway.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTapesAsync(const Model::DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the upload buffer of a gateway. This operation is
         * supported for both the gateway-stored and gateway-cached volume
         * architectures.</p> <p>The response includes disk IDs that are configured as
         * upload buffer space, and it includes the amount of upload buffer space allocated
         * and used.</p>
         */
        virtual Model::DescribeUploadBufferOutcome DescribeUploadBuffer(const Model::DescribeUploadBufferRequest& request) const;

        /**
         * <p>Returns information about the upload buffer of a gateway. This operation is
         * supported for both the gateway-stored and gateway-cached volume
         * architectures.</p> <p>The response includes disk IDs that are configured as
         * upload buffer space, and it includes the amount of upload buffer space allocated
         * and used.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUploadBufferOutcomeCallable DescribeUploadBufferCallable(const Model::DescribeUploadBufferRequest& request) const;

        /**
         * <p>Returns information about the upload buffer of a gateway. This operation is
         * supported for both the gateway-stored and gateway-cached volume
         * architectures.</p> <p>The response includes disk IDs that are configured as
         * upload buffer space, and it includes the amount of upload buffer space allocated
         * and used.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUploadBufferAsync(const Model::DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of virtual tape library (VTL) devices for the specified
         * gateway. In the response, AWS Storage Gateway returns VTL device
         * information.</p> <p>The list of VTL devices must be from one gateway.</p>
         */
        virtual Model::DescribeVTLDevicesOutcome DescribeVTLDevices(const Model::DescribeVTLDevicesRequest& request) const;

        /**
         * <p>Returns a description of virtual tape library (VTL) devices for the specified
         * gateway. In the response, AWS Storage Gateway returns VTL device
         * information.</p> <p>The list of VTL devices must be from one gateway.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVTLDevicesOutcomeCallable DescribeVTLDevicesCallable(const Model::DescribeVTLDevicesRequest& request) const;

        /**
         * <p>Returns a description of virtual tape library (VTL) devices for the specified
         * gateway. In the response, AWS Storage Gateway returns VTL device
         * information.</p> <p>The list of VTL devices must be from one gateway.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVTLDevicesAsync(const Model::DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the working storage of a gateway. This operation is
         * supported only for the gateway-stored volume architecture. This operation is
         * deprecated in cached-volumes API version (20120630). Use DescribeUploadBuffer
         * instead.</p> <note> <p>Working storage is also referred to as upload buffer. You
         * can also use the DescribeUploadBuffer operation to add upload buffer to a
         * stored-volume gateway.</p> </note> <p>The response includes disk IDs that are
         * configured as working storage, and it includes the amount of working storage
         * allocated and used.</p>
         */
        virtual Model::DescribeWorkingStorageOutcome DescribeWorkingStorage(const Model::DescribeWorkingStorageRequest& request) const;

        /**
         * <p>Returns information about the working storage of a gateway. This operation is
         * supported only for the gateway-stored volume architecture. This operation is
         * deprecated in cached-volumes API version (20120630). Use DescribeUploadBuffer
         * instead.</p> <note> <p>Working storage is also referred to as upload buffer. You
         * can also use the DescribeUploadBuffer operation to add upload buffer to a
         * stored-volume gateway.</p> </note> <p>The response includes disk IDs that are
         * configured as working storage, and it includes the amount of working storage
         * allocated and used.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkingStorageOutcomeCallable DescribeWorkingStorageCallable(const Model::DescribeWorkingStorageRequest& request) const;

        /**
         * <p>Returns information about the working storage of a gateway. This operation is
         * supported only for the gateway-stored volume architecture. This operation is
         * deprecated in cached-volumes API version (20120630). Use DescribeUploadBuffer
         * instead.</p> <note> <p>Working storage is also referred to as upload buffer. You
         * can also use the DescribeUploadBuffer operation to add upload buffer to a
         * stored-volume gateway.</p> </note> <p>The response includes disk IDs that are
         * configured as working storage, and it includes the amount of working storage
         * allocated and used.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkingStorageAsync(const Model::DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a gateway when the gateway is no longer functioning. For example, if
         * your gateway VM is damaged, you can disable the gateway so you can recover
         * virtual tapes.</p> <p>Use this operation for a gateway-VTL that is not reachable
         * or not functioning.</p> <important><p>Once a gateway is disabled it cannot be
         * enabled.</p> </important>
         */
        virtual Model::DisableGatewayOutcome DisableGateway(const Model::DisableGatewayRequest& request) const;

        /**
         * <p>Disables a gateway when the gateway is no longer functioning. For example, if
         * your gateway VM is damaged, you can disable the gateway so you can recover
         * virtual tapes.</p> <p>Use this operation for a gateway-VTL that is not reachable
         * or not functioning.</p> <important><p>Once a gateway is disabled it cannot be
         * enabled.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableGatewayOutcomeCallable DisableGatewayCallable(const Model::DisableGatewayRequest& request) const;

        /**
         * <p>Disables a gateway when the gateway is no longer functioning. For example, if
         * your gateway VM is damaged, you can disable the gateway so you can recover
         * virtual tapes.</p> <p>Use this operation for a gateway-VTL that is not reachable
         * or not functioning.</p> <important><p>Once a gateway is disabled it cannot be
         * enabled.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableGatewayAsync(const Model::DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists gateways owned by an AWS account in a region specified in the request.
         * The returned list is ordered by gateway Amazon Resource Name (ARN).</p> <p>By
         * default, the operation returns a maximum of 100 gateways. This operation
         * supports pagination that allows you to optionally reduce the number of gateways
         * returned in a response.</p> <p>If you have more gateways than are returned in a
         * response (that is, the response returns only a truncated list of your gateways),
         * the response contains a marker that you can specify in your next request to
         * fetch the next page of gateways.</p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;

        /**
         * <p>Lists gateways owned by an AWS account in a region specified in the request.
         * The returned list is ordered by gateway Amazon Resource Name (ARN).</p> <p>By
         * default, the operation returns a maximum of 100 gateways. This operation
         * supports pagination that allows you to optionally reduce the number of gateways
         * returned in a response.</p> <p>If you have more gateways than are returned in a
         * response (that is, the response returns only a truncated list of your gateways),
         * the response contains a marker that you can specify in your next request to
         * fetch the next page of gateways.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request) const;

        /**
         * <p>Lists gateways owned by an AWS account in a region specified in the request.
         * The returned list is ordered by gateway Amazon Resource Name (ARN).</p> <p>By
         * default, the operation returns a maximum of 100 gateways. This operation
         * supports pagination that allows you to optionally reduce the number of gateways
         * returned in a response.</p> <p>If you have more gateways than are returned in a
         * response (that is, the response returns only a truncated list of your gateways),
         * the response contains a marker that you can specify in your next request to
         * fetch the next page of gateways.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the gateway's local disks. To specify which gateway to
         * describe, you use the Amazon Resource Name (ARN) of the gateway in the body of
         * the request.</p> <p>The request returns a list of all disks, specifying which
         * are configured as working storage, cache storage, or stored volume or not
         * configured at all. The response includes a <code>DiskStatus</code> field. This
         * field can have a value of present (the disk is available to use), missing (the
         * disk is no longer connected to the gateway), or mismatch (the disk node is
         * occupied by a disk that has incorrect metadata or the disk content is
         * corrupted). </p>
         */
        virtual Model::ListLocalDisksOutcome ListLocalDisks(const Model::ListLocalDisksRequest& request) const;

        /**
         * <p>Returns a list of the gateway's local disks. To specify which gateway to
         * describe, you use the Amazon Resource Name (ARN) of the gateway in the body of
         * the request.</p> <p>The request returns a list of all disks, specifying which
         * are configured as working storage, cache storage, or stored volume or not
         * configured at all. The response includes a <code>DiskStatus</code> field. This
         * field can have a value of present (the disk is available to use), missing (the
         * disk is no longer connected to the gateway), or mismatch (the disk node is
         * occupied by a disk that has incorrect metadata or the disk content is
         * corrupted). </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLocalDisksOutcomeCallable ListLocalDisksCallable(const Model::ListLocalDisksRequest& request) const;

        /**
         * <p>Returns a list of the gateway's local disks. To specify which gateway to
         * describe, you use the Amazon Resource Name (ARN) of the gateway in the body of
         * the request.</p> <p>The request returns a list of all disks, specifying which
         * are configured as working storage, cache storage, or stored volume or not
         * configured at all. The response includes a <code>DiskStatus</code> field. This
         * field can have a value of present (the disk is available to use), missing (the
         * disk is no longer connected to the gateway), or mismatch (the disk node is
         * occupied by a disk that has incorrect metadata or the disk content is
         * corrupted). </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLocalDisksAsync(const Model::ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that have been added to the specified resource.</p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that have been added to the specified resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags that have been added to the specified resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists virtual tapes in your virtual tape library (VTL) and your virtual tape
         * shelf (VTS). You specify the tapes to list by specifying one or more tape Amazon
         * Resource Names (ARNs). If you don't specify a tape ARN, the operation lists all
         * virtual tapes in both your VTL and VTS.</p> <p>This operation supports
         * pagination. By default, the operation returns a maximum of up to 100 tapes. You
         * can optionally specify the <code>Limit</code> parameter in the body to limit the
         * number of tapes in the response. If the number of tapes returned in the response
         * is truncated, the response includes a <code>Marker</code> element that you can
         * use in your subsequent request to retrieve the next set of tapes.</p>
         */
        virtual Model::ListTapesOutcome ListTapes(const Model::ListTapesRequest& request) const;

        /**
         * <p>Lists virtual tapes in your virtual tape library (VTL) and your virtual tape
         * shelf (VTS). You specify the tapes to list by specifying one or more tape Amazon
         * Resource Names (ARNs). If you don't specify a tape ARN, the operation lists all
         * virtual tapes in both your VTL and VTS.</p> <p>This operation supports
         * pagination. By default, the operation returns a maximum of up to 100 tapes. You
         * can optionally specify the <code>Limit</code> parameter in the body to limit the
         * number of tapes in the response. If the number of tapes returned in the response
         * is truncated, the response includes a <code>Marker</code> element that you can
         * use in your subsequent request to retrieve the next set of tapes.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTapesOutcomeCallable ListTapesCallable(const Model::ListTapesRequest& request) const;

        /**
         * <p>Lists virtual tapes in your virtual tape library (VTL) and your virtual tape
         * shelf (VTS). You specify the tapes to list by specifying one or more tape Amazon
         * Resource Names (ARNs). If you don't specify a tape ARN, the operation lists all
         * virtual tapes in both your VTL and VTS.</p> <p>This operation supports
         * pagination. By default, the operation returns a maximum of up to 100 tapes. You
         * can optionally specify the <code>Limit</code> parameter in the body to limit the
         * number of tapes in the response. If the number of tapes returned in the response
         * is truncated, the response includes a <code>Marker</code> element that you can
         * use in your subsequent request to retrieve the next set of tapes.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTapesAsync(const Model::ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists iSCSI initiators that are connected to a volume. You can use this
         * operation to determine whether a volume is being used or not.</p>
         */
        virtual Model::ListVolumeInitiatorsOutcome ListVolumeInitiators(const Model::ListVolumeInitiatorsRequest& request) const;

        /**
         * <p>Lists iSCSI initiators that are connected to a volume. You can use this
         * operation to determine whether a volume is being used or not.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVolumeInitiatorsOutcomeCallable ListVolumeInitiatorsCallable(const Model::ListVolumeInitiatorsRequest& request) const;

        /**
         * <p>Lists iSCSI initiators that are connected to a volume. You can use this
         * operation to determine whether a volume is being used or not.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVolumeInitiatorsAsync(const Model::ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the recovery points for a specified gateway. This operation is
         * supported only for the gateway-cached volume architecture.</p> <p>Each
         * gateway-cached volume has one recovery point. A volume recovery point is a point
         * in time at which all data of the volume is consistent and from which you can
         * create a snapshot. To create a snapshot from a volume recovery point use the
         * <a>CreateSnapshotFromVolumeRecoveryPoint</a> operation.</p>
         */
        virtual Model::ListVolumeRecoveryPointsOutcome ListVolumeRecoveryPoints(const Model::ListVolumeRecoveryPointsRequest& request) const;

        /**
         * <p>Lists the recovery points for a specified gateway. This operation is
         * supported only for the gateway-cached volume architecture.</p> <p>Each
         * gateway-cached volume has one recovery point. A volume recovery point is a point
         * in time at which all data of the volume is consistent and from which you can
         * create a snapshot. To create a snapshot from a volume recovery point use the
         * <a>CreateSnapshotFromVolumeRecoveryPoint</a> operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVolumeRecoveryPointsOutcomeCallable ListVolumeRecoveryPointsCallable(const Model::ListVolumeRecoveryPointsRequest& request) const;

        /**
         * <p>Lists the recovery points for a specified gateway. This operation is
         * supported only for the gateway-cached volume architecture.</p> <p>Each
         * gateway-cached volume has one recovery point. A volume recovery point is a point
         * in time at which all data of the volume is consistent and from which you can
         * create a snapshot. To create a snapshot from a volume recovery point use the
         * <a>CreateSnapshotFromVolumeRecoveryPoint</a> operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVolumeRecoveryPointsAsync(const Model::ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the iSCSI stored volumes of a gateway. Results are sorted by volume
         * ARN. The response includes only the volume ARNs. If you want additional volume
         * information, use the <a>DescribeStorediSCSIVolumes</a> API.</p> <p>The operation
         * supports pagination. By default, the operation returns a maximum of up to 100
         * volumes. You can optionally specify the <code>Limit</code> field in the body to
         * limit the number of volumes in the response. If the number of volumes returned
         * in the response is truncated, the response includes a Marker field. You can use
         * this Marker value in your subsequent request to retrieve the next set of
         * volumes.</p>
         */
        virtual Model::ListVolumesOutcome ListVolumes(const Model::ListVolumesRequest& request) const;

        /**
         * <p>Lists the iSCSI stored volumes of a gateway. Results are sorted by volume
         * ARN. The response includes only the volume ARNs. If you want additional volume
         * information, use the <a>DescribeStorediSCSIVolumes</a> API.</p> <p>The operation
         * supports pagination. By default, the operation returns a maximum of up to 100
         * volumes. You can optionally specify the <code>Limit</code> field in the body to
         * limit the number of volumes in the response. If the number of volumes returned
         * in the response is truncated, the response includes a Marker field. You can use
         * this Marker value in your subsequent request to retrieve the next set of
         * volumes.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVolumesOutcomeCallable ListVolumesCallable(const Model::ListVolumesRequest& request) const;

        /**
         * <p>Lists the iSCSI stored volumes of a gateway. Results are sorted by volume
         * ARN. The response includes only the volume ARNs. If you want additional volume
         * information, use the <a>DescribeStorediSCSIVolumes</a> API.</p> <p>The operation
         * supports pagination. By default, the operation returns a maximum of up to 100
         * volumes. You can optionally specify the <code>Limit</code> field in the body to
         * limit the number of volumes in the response. If the number of volumes returned
         * in the response is truncated, the response includes a Marker field. You can use
         * this Marker value in your subsequent request to retrieve the next set of
         * volumes.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVolumesAsync(const Model::ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from the specified resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets all cache disks that have encountered a error and makes the disks
         * available for reconfiguration as cache storage. If your cache disk encounters a
         * error, the gateway prevents read and write operations on virtual tapes in the
         * gateway. For example, an error can occur when a disk is corrupted or removed
         * from the gateway. When a cache is reset, the gateway loses its cache storage. At
         * this point you can reconfigure the disks as cache disks.</p> <important> <p>If
         * the cache disk you are resetting contains data that has not been uploaded to
         * Amazon S3 yet, that data can be lost. After you reset cache disks, there will be
         * no configured cache disks left in the gateway, so you must configure at least
         * one new cache disk for your gateway to function properly.</p> </important>
         */
        virtual Model::ResetCacheOutcome ResetCache(const Model::ResetCacheRequest& request) const;

        /**
         * <p>Resets all cache disks that have encountered a error and makes the disks
         * available for reconfiguration as cache storage. If your cache disk encounters a
         * error, the gateway prevents read and write operations on virtual tapes in the
         * gateway. For example, an error can occur when a disk is corrupted or removed
         * from the gateway. When a cache is reset, the gateway loses its cache storage. At
         * this point you can reconfigure the disks as cache disks.</p> <important> <p>If
         * the cache disk you are resetting contains data that has not been uploaded to
         * Amazon S3 yet, that data can be lost. After you reset cache disks, there will be
         * no configured cache disks left in the gateway, so you must configure at least
         * one new cache disk for your gateway to function properly.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetCacheOutcomeCallable ResetCacheCallable(const Model::ResetCacheRequest& request) const;

        /**
         * <p>Resets all cache disks that have encountered a error and makes the disks
         * available for reconfiguration as cache storage. If your cache disk encounters a
         * error, the gateway prevents read and write operations on virtual tapes in the
         * gateway. For example, an error can occur when a disk is corrupted or removed
         * from the gateway. When a cache is reset, the gateway loses its cache storage. At
         * this point you can reconfigure the disks as cache disks.</p> <important> <p>If
         * the cache disk you are resetting contains data that has not been uploaded to
         * Amazon S3 yet, that data can be lost. After you reset cache disks, there will be
         * no configured cache disks left in the gateway, so you must configure at least
         * one new cache disk for your gateway to function properly.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetCacheAsync(const Model::ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an archived virtual tape from the virtual tape shelf (VTS) to a
         * gateway-VTL. Virtual tapes archived in the VTS are not associated with any
         * gateway. However after a tape is retrieved, it is associated with a gateway,
         * even though it is also listed in the VTS.</p> <p>Once a tape is successfully
         * retrieved to a gateway, it cannot be retrieved again to another gateway. You
         * must archive the tape again before you can retrieve it to another gateway.</p>
         */
        virtual Model::RetrieveTapeArchiveOutcome RetrieveTapeArchive(const Model::RetrieveTapeArchiveRequest& request) const;

        /**
         * <p>Retrieves an archived virtual tape from the virtual tape shelf (VTS) to a
         * gateway-VTL. Virtual tapes archived in the VTS are not associated with any
         * gateway. However after a tape is retrieved, it is associated with a gateway,
         * even though it is also listed in the VTS.</p> <p>Once a tape is successfully
         * retrieved to a gateway, it cannot be retrieved again to another gateway. You
         * must archive the tape again before you can retrieve it to another gateway.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetrieveTapeArchiveOutcomeCallable RetrieveTapeArchiveCallable(const Model::RetrieveTapeArchiveRequest& request) const;

        /**
         * <p>Retrieves an archived virtual tape from the virtual tape shelf (VTS) to a
         * gateway-VTL. Virtual tapes archived in the VTS are not associated with any
         * gateway. However after a tape is retrieved, it is associated with a gateway,
         * even though it is also listed in the VTS.</p> <p>Once a tape is successfully
         * retrieved to a gateway, it cannot be retrieved again to another gateway. You
         * must archive the tape again before you can retrieve it to another gateway.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveTapeArchiveAsync(const Model::RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the recovery point for the specified virtual tape.</p> <p>A
         * recovery point is a point in time view of a virtual tape at which all the data
         * on the tape is consistent. If your gateway crashes, virtual tapes that have
         * recovery points can be recovered to a new gateway.</p> <note><p>The virtual tape
         * can be retrieved to only one gateway. The retrieved tape is read-only. The
         * virtual tape can be retrieved to only a gateway-VTL. There is no charge for
         * retrieving recovery points.</p> </note>
         */
        virtual Model::RetrieveTapeRecoveryPointOutcome RetrieveTapeRecoveryPoint(const Model::RetrieveTapeRecoveryPointRequest& request) const;

        /**
         * <p>Retrieves the recovery point for the specified virtual tape.</p> <p>A
         * recovery point is a point in time view of a virtual tape at which all the data
         * on the tape is consistent. If your gateway crashes, virtual tapes that have
         * recovery points can be recovered to a new gateway.</p> <note><p>The virtual tape
         * can be retrieved to only one gateway. The retrieved tape is read-only. The
         * virtual tape can be retrieved to only a gateway-VTL. There is no charge for
         * retrieving recovery points.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetrieveTapeRecoveryPointOutcomeCallable RetrieveTapeRecoveryPointCallable(const Model::RetrieveTapeRecoveryPointRequest& request) const;

        /**
         * <p>Retrieves the recovery point for the specified virtual tape.</p> <p>A
         * recovery point is a point in time view of a virtual tape at which all the data
         * on the tape is consistent. If your gateway crashes, virtual tapes that have
         * recovery points can be recovered to a new gateway.</p> <note><p>The virtual tape
         * can be retrieved to only one gateway. The retrieved tape is read-only. The
         * virtual tape can be retrieved to only a gateway-VTL. There is no charge for
         * retrieving recovery points.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveTapeRecoveryPointAsync(const Model::RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the password for your VM local console. When you log in to the local
         * console for the first time, you log in to the VM with the default credentials.
         * We recommend that you set a new password. You don't need to know the default
         * password to set a new password.</p>
         */
        virtual Model::SetLocalConsolePasswordOutcome SetLocalConsolePassword(const Model::SetLocalConsolePasswordRequest& request) const;

        /**
         * <p>Sets the password for your VM local console. When you log in to the local
         * console for the first time, you log in to the VM with the default credentials.
         * We recommend that you set a new password. You don't need to know the default
         * password to set a new password.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLocalConsolePasswordOutcomeCallable SetLocalConsolePasswordCallable(const Model::SetLocalConsolePasswordRequest& request) const;

        /**
         * <p>Sets the password for your VM local console. When you log in to the local
         * console for the first time, you log in to the VM with the default credentials.
         * We recommend that you set a new password. You don't need to know the default
         * password to set a new password.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLocalConsolePasswordAsync(const Model::SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shuts down a gateway. To specify which gateway to shut down, use the Amazon
         * Resource Name (ARN) of the gateway in the body of your request.</p> <p>The
         * operation shuts down the gateway service component running in the storage
         * gateway's virtual machine (VM) and not the VM.</p> <note><p>If you want to shut
         * down the VM, it is recommended that you first shut down the gateway component in
         * the VM to avoid unpredictable conditions.</p> </note> <p>After the gateway is
         * shutdown, you cannot call any other API except <a>StartGateway</a>,
         * <a>DescribeGatewayInformation</a>, and <a>ListGateways</a>. For more
         * information, see <a>ActivateGateway</a>. Your applications cannot read from or
         * write to the gateway's storage volumes, and there are no snapshots taken.</p>
         * <note><p>When you make a shutdown request, you will get a <code>200 OK</code>
         * success response immediately. However, it might take some time for the gateway
         * to shut down. You can call the <a>DescribeGatewayInformation</a> API to check
         * the status. For more information, see <a>ActivateGateway</a>.</p> </note> <p>If
         * do not intend to use the gateway again, you must delete the gateway (using
         * <a>DeleteGateway</a>) to no longer pay software charges associated with the
         * gateway.</p>
         */
        virtual Model::ShutdownGatewayOutcome ShutdownGateway(const Model::ShutdownGatewayRequest& request) const;

        /**
         * <p>Shuts down a gateway. To specify which gateway to shut down, use the Amazon
         * Resource Name (ARN) of the gateway in the body of your request.</p> <p>The
         * operation shuts down the gateway service component running in the storage
         * gateway's virtual machine (VM) and not the VM.</p> <note><p>If you want to shut
         * down the VM, it is recommended that you first shut down the gateway component in
         * the VM to avoid unpredictable conditions.</p> </note> <p>After the gateway is
         * shutdown, you cannot call any other API except <a>StartGateway</a>,
         * <a>DescribeGatewayInformation</a>, and <a>ListGateways</a>. For more
         * information, see <a>ActivateGateway</a>. Your applications cannot read from or
         * write to the gateway's storage volumes, and there are no snapshots taken.</p>
         * <note><p>When you make a shutdown request, you will get a <code>200 OK</code>
         * success response immediately. However, it might take some time for the gateway
         * to shut down. You can call the <a>DescribeGatewayInformation</a> API to check
         * the status. For more information, see <a>ActivateGateway</a>.</p> </note> <p>If
         * do not intend to use the gateway again, you must delete the gateway (using
         * <a>DeleteGateway</a>) to no longer pay software charges associated with the
         * gateway.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ShutdownGatewayOutcomeCallable ShutdownGatewayCallable(const Model::ShutdownGatewayRequest& request) const;

        /**
         * <p>Shuts down a gateway. To specify which gateway to shut down, use the Amazon
         * Resource Name (ARN) of the gateway in the body of your request.</p> <p>The
         * operation shuts down the gateway service component running in the storage
         * gateway's virtual machine (VM) and not the VM.</p> <note><p>If you want to shut
         * down the VM, it is recommended that you first shut down the gateway component in
         * the VM to avoid unpredictable conditions.</p> </note> <p>After the gateway is
         * shutdown, you cannot call any other API except <a>StartGateway</a>,
         * <a>DescribeGatewayInformation</a>, and <a>ListGateways</a>. For more
         * information, see <a>ActivateGateway</a>. Your applications cannot read from or
         * write to the gateway's storage volumes, and there are no snapshots taken.</p>
         * <note><p>When you make a shutdown request, you will get a <code>200 OK</code>
         * success response immediately. However, it might take some time for the gateway
         * to shut down. You can call the <a>DescribeGatewayInformation</a> API to check
         * the status. For more information, see <a>ActivateGateway</a>.</p> </note> <p>If
         * do not intend to use the gateway again, you must delete the gateway (using
         * <a>DeleteGateway</a>) to no longer pay software charges associated with the
         * gateway.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ShutdownGatewayAsync(const Model::ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a gateway that you previously shut down (see <a>ShutdownGateway</a>).
         * After the gateway starts, you can then make other API calls, your applications
         * can read from or write to the gateway's storage volumes and you will be able to
         * take snapshot backups.</p> <note><p>When you make a request, you will get a 200
         * OK success response immediately. However, it might take some time for the
         * gateway to be ready. You should call <a>DescribeGatewayInformation</a> and check
         * the status before making any additional API calls. For more information, see
         * <a>ActivateGateway</a>.</p> </note> <p>To specify which gateway to start, use
         * the Amazon Resource Name (ARN) of the gateway in your request.</p>
         */
        virtual Model::StartGatewayOutcome StartGateway(const Model::StartGatewayRequest& request) const;

        /**
         * <p>Starts a gateway that you previously shut down (see <a>ShutdownGateway</a>).
         * After the gateway starts, you can then make other API calls, your applications
         * can read from or write to the gateway's storage volumes and you will be able to
         * take snapshot backups.</p> <note><p>When you make a request, you will get a 200
         * OK success response immediately. However, it might take some time for the
         * gateway to be ready. You should call <a>DescribeGatewayInformation</a> and check
         * the status before making any additional API calls. For more information, see
         * <a>ActivateGateway</a>.</p> </note> <p>To specify which gateway to start, use
         * the Amazon Resource Name (ARN) of the gateway in your request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartGatewayOutcomeCallable StartGatewayCallable(const Model::StartGatewayRequest& request) const;

        /**
         * <p>Starts a gateway that you previously shut down (see <a>ShutdownGateway</a>).
         * After the gateway starts, you can then make other API calls, your applications
         * can read from or write to the gateway's storage volumes and you will be able to
         * take snapshot backups.</p> <note><p>When you make a request, you will get a 200
         * OK success response immediately. However, it might take some time for the
         * gateway to be ready. You should call <a>DescribeGatewayInformation</a> and check
         * the status before making any additional API calls. For more information, see
         * <a>ActivateGateway</a>.</p> </note> <p>To specify which gateway to start, use
         * the Amazon Resource Name (ARN) of the gateway in your request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartGatewayAsync(const Model::StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the bandwidth rate limits of a gateway. You can update both the
         * upload and download bandwidth rate limit or specify only one of the two. If you
         * don't set a bandwidth rate limit, the existing rate limit remains.</p> <p>By
         * default, a gateway's bandwidth rate limits are not set. If you don't set any
         * limit, the gateway does not have any limitations on its bandwidth usage and
         * could potentially use the maximum available bandwidth.</p> <p>To specify which
         * gateway to update, use the Amazon Resource Name (ARN) of the gateway in your
         * request.</p>
         */
        virtual Model::UpdateBandwidthRateLimitOutcome UpdateBandwidthRateLimit(const Model::UpdateBandwidthRateLimitRequest& request) const;

        /**
         * <p>Updates the bandwidth rate limits of a gateway. You can update both the
         * upload and download bandwidth rate limit or specify only one of the two. If you
         * don't set a bandwidth rate limit, the existing rate limit remains.</p> <p>By
         * default, a gateway's bandwidth rate limits are not set. If you don't set any
         * limit, the gateway does not have any limitations on its bandwidth usage and
         * could potentially use the maximum available bandwidth.</p> <p>To specify which
         * gateway to update, use the Amazon Resource Name (ARN) of the gateway in your
         * request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBandwidthRateLimitOutcomeCallable UpdateBandwidthRateLimitCallable(const Model::UpdateBandwidthRateLimitRequest& request) const;

        /**
         * <p>Updates the bandwidth rate limits of a gateway. You can update both the
         * upload and download bandwidth rate limit or specify only one of the two. If you
         * don't set a bandwidth rate limit, the existing rate limit remains.</p> <p>By
         * default, a gateway's bandwidth rate limits are not set. If you don't set any
         * limit, the gateway does not have any limitations on its bandwidth usage and
         * could potentially use the maximum available bandwidth.</p> <p>To specify which
         * gateway to update, use the Amazon Resource Name (ARN) of the gateway in your
         * request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBandwidthRateLimitAsync(const Model::UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Challenge-Handshake Authentication Protocol (CHAP) credentials
         * for a specified iSCSI target. By default, a gateway does not have CHAP enabled;
         * however, for added security, you might use it.</p> <important> <p>When you
         * update CHAP credentials, all existing connections on the target are closed and
         * initiators must reconnect with the new credentials.</p> </important>
         */
        virtual Model::UpdateChapCredentialsOutcome UpdateChapCredentials(const Model::UpdateChapCredentialsRequest& request) const;

        /**
         * <p>Updates the Challenge-Handshake Authentication Protocol (CHAP) credentials
         * for a specified iSCSI target. By default, a gateway does not have CHAP enabled;
         * however, for added security, you might use it.</p> <important> <p>When you
         * update CHAP credentials, all existing connections on the target are closed and
         * initiators must reconnect with the new credentials.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChapCredentialsOutcomeCallable UpdateChapCredentialsCallable(const Model::UpdateChapCredentialsRequest& request) const;

        /**
         * <p>Updates the Challenge-Handshake Authentication Protocol (CHAP) credentials
         * for a specified iSCSI target. By default, a gateway does not have CHAP enabled;
         * however, for added security, you might use it.</p> <important> <p>When you
         * update CHAP credentials, all existing connections on the target are closed and
         * initiators must reconnect with the new credentials.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChapCredentialsAsync(const Model::UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway's metadata, which includes the gateway's name and time
         * zone. To specify which gateway to update, use the Amazon Resource Name (ARN) of
         * the gateway in your request.</p> <note><p>For Gateways activated after September
         * 2, 2015, the gateway's ARN contains the gateway ID rather than the gateway name.
         * However, changing the name of the gateway has no effect on the gateway's
         * ARN.</p> </note>
         */
        virtual Model::UpdateGatewayInformationOutcome UpdateGatewayInformation(const Model::UpdateGatewayInformationRequest& request) const;

        /**
         * <p>Updates a gateway's metadata, which includes the gateway's name and time
         * zone. To specify which gateway to update, use the Amazon Resource Name (ARN) of
         * the gateway in your request.</p> <note><p>For Gateways activated after September
         * 2, 2015, the gateway's ARN contains the gateway ID rather than the gateway name.
         * However, changing the name of the gateway has no effect on the gateway's
         * ARN.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayInformationOutcomeCallable UpdateGatewayInformationCallable(const Model::UpdateGatewayInformationRequest& request) const;

        /**
         * <p>Updates a gateway's metadata, which includes the gateway's name and time
         * zone. To specify which gateway to update, use the Amazon Resource Name (ARN) of
         * the gateway in your request.</p> <note><p>For Gateways activated after September
         * 2, 2015, the gateway's ARN contains the gateway ID rather than the gateway name.
         * However, changing the name of the gateway has no effect on the gateway's
         * ARN.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayInformationAsync(const Model::UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the gateway virtual machine (VM) software. The request immediately
         * triggers the software update.</p> <note><p>When you make this request, you get a
         * <code>200 OK</code> success response immediately. However, it might take some
         * time for the update to complete. You can call <a>DescribeGatewayInformation</a>
         * to verify the gateway is in the <code>STATE_RUNNING</code> state.</p> </note>
         * <important><p>A software update forces a system restart of your gateway. You can
         * minimize the chance of any disruption to your applications by increasing your
         * iSCSI Initiators' timeouts. For more information about increasing iSCSI
         * Initiator timeouts for Windows and Linux, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorWindowsClient.html#CustomizeWindowsiSCSISettings">Customizing
         * Your Windows iSCSI Settings</a> and <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorRedHatClient.html#CustomizeLinuxiSCSISettings">Customizing
         * Your Linux iSCSI Settings</a>, respectively.</p> </important>
         */
        virtual Model::UpdateGatewaySoftwareNowOutcome UpdateGatewaySoftwareNow(const Model::UpdateGatewaySoftwareNowRequest& request) const;

        /**
         * <p>Updates the gateway virtual machine (VM) software. The request immediately
         * triggers the software update.</p> <note><p>When you make this request, you get a
         * <code>200 OK</code> success response immediately. However, it might take some
         * time for the update to complete. You can call <a>DescribeGatewayInformation</a>
         * to verify the gateway is in the <code>STATE_RUNNING</code> state.</p> </note>
         * <important><p>A software update forces a system restart of your gateway. You can
         * minimize the chance of any disruption to your applications by increasing your
         * iSCSI Initiators' timeouts. For more information about increasing iSCSI
         * Initiator timeouts for Windows and Linux, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorWindowsClient.html#CustomizeWindowsiSCSISettings">Customizing
         * Your Windows iSCSI Settings</a> and <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorRedHatClient.html#CustomizeLinuxiSCSISettings">Customizing
         * Your Linux iSCSI Settings</a>, respectively.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewaySoftwareNowOutcomeCallable UpdateGatewaySoftwareNowCallable(const Model::UpdateGatewaySoftwareNowRequest& request) const;

        /**
         * <p>Updates the gateway virtual machine (VM) software. The request immediately
         * triggers the software update.</p> <note><p>When you make this request, you get a
         * <code>200 OK</code> success response immediately. However, it might take some
         * time for the update to complete. You can call <a>DescribeGatewayInformation</a>
         * to verify the gateway is in the <code>STATE_RUNNING</code> state.</p> </note>
         * <important><p>A software update forces a system restart of your gateway. You can
         * minimize the chance of any disruption to your applications by increasing your
         * iSCSI Initiators' timeouts. For more information about increasing iSCSI
         * Initiator timeouts for Windows and Linux, see <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorWindowsClient.html#CustomizeWindowsiSCSISettings">Customizing
         * Your Windows iSCSI Settings</a> and <a
         * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorRedHatClient.html#CustomizeLinuxiSCSISettings">Customizing
         * Your Linux iSCSI Settings</a>, respectively.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewaySoftwareNowAsync(const Model::UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway's weekly maintenance start time information, including day
         * and time of the week. The maintenance time is the time in your gateway's time
         * zone.</p>
         */
        virtual Model::UpdateMaintenanceStartTimeOutcome UpdateMaintenanceStartTime(const Model::UpdateMaintenanceStartTimeRequest& request) const;

        /**
         * <p>Updates a gateway's weekly maintenance start time information, including day
         * and time of the week. The maintenance time is the time in your gateway's time
         * zone.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceStartTimeOutcomeCallable UpdateMaintenanceStartTimeCallable(const Model::UpdateMaintenanceStartTimeRequest& request) const;

        /**
         * <p>Updates a gateway's weekly maintenance start time information, including day
         * and time of the week. The maintenance time is the time in your gateway's time
         * zone.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceStartTimeAsync(const Model::UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a snapshot schedule configured for a gateway volume.</p> <p>The
         * default snapshot schedule for volume is once every 24 hours, starting at the
         * creation time of the volume. You can use this API to change the snapshot
         * schedule configured for the volume.</p> <p>In the request you must identify the
         * gateway volume whose snapshot schedule you want to update, and the schedule
         * information, including when you want the snapshot to begin on a day and the
         * frequency (in hours) of snapshots.</p>
         */
        virtual Model::UpdateSnapshotScheduleOutcome UpdateSnapshotSchedule(const Model::UpdateSnapshotScheduleRequest& request) const;

        /**
         * <p>Updates a snapshot schedule configured for a gateway volume.</p> <p>The
         * default snapshot schedule for volume is once every 24 hours, starting at the
         * creation time of the volume. You can use this API to change the snapshot
         * schedule configured for the volume.</p> <p>In the request you must identify the
         * gateway volume whose snapshot schedule you want to update, and the schedule
         * information, including when you want the snapshot to begin on a day and the
         * frequency (in hours) of snapshots.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSnapshotScheduleOutcomeCallable UpdateSnapshotScheduleCallable(const Model::UpdateSnapshotScheduleRequest& request) const;

        /**
         * <p>Updates a snapshot schedule configured for a gateway volume.</p> <p>The
         * default snapshot schedule for volume is once every 24 hours, starting at the
         * creation time of the volume. You can use this API to change the snapshot
         * schedule configured for the volume.</p> <p>In the request you must identify the
         * gateway volume whose snapshot schedule you want to update, and the schedule
         * information, including when you want the snapshot to begin on a day and the
         * frequency (in hours) of snapshots.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSnapshotScheduleAsync(const Model::UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the type of medium changer in a gateway-VTL. When you activate a
         * gateway-VTL, you select a medium changer type for the gateway-VTL. This
         * operation enables you to select a different type of medium changer after a
         * gateway-VTL is activated.</p>
         */
        virtual Model::UpdateVTLDeviceTypeOutcome UpdateVTLDeviceType(const Model::UpdateVTLDeviceTypeRequest& request) const;

        /**
         * <p>Updates the type of medium changer in a gateway-VTL. When you activate a
         * gateway-VTL, you select a medium changer type for the gateway-VTL. This
         * operation enables you to select a different type of medium changer after a
         * gateway-VTL is activated.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVTLDeviceTypeOutcomeCallable UpdateVTLDeviceTypeCallable(const Model::UpdateVTLDeviceTypeRequest& request) const;

        /**
         * <p>Updates the type of medium changer in a gateway-VTL. When you activate a
         * gateway-VTL, you select a medium changer type for the gateway-VTL. This
         * operation enables you to select a different type of medium changer after a
         * gateway-VTL is activated.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVTLDeviceTypeAsync(const Model::UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void ActivateGatewayAsyncHelper(const Model::ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddCacheAsyncHelper(const Model::AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddUploadBufferAsyncHelper(const Model::AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddWorkingStorageAsyncHelper(const Model::AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelArchivalAsyncHelper(const Model::CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelRetrievalAsyncHelper(const Model::CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCachediSCSIVolumeAsyncHelper(const Model::CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotFromVolumeRecoveryPointAsyncHelper(const Model::CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStorediSCSIVolumeAsyncHelper(const Model::CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTapeWithBarcodeAsyncHelper(const Model::CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTapesAsyncHelper(const Model::CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBandwidthRateLimitAsyncHelper(const Model::DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChapCredentialsAsyncHelper(const Model::DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGatewayAsyncHelper(const Model::DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotScheduleAsyncHelper(const Model::DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTapeAsyncHelper(const Model::DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTapeArchiveAsyncHelper(const Model::DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVolumeAsyncHelper(const Model::DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBandwidthRateLimitAsyncHelper(const Model::DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCacheAsyncHelper(const Model::DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCachediSCSIVolumesAsyncHelper(const Model::DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChapCredentialsAsyncHelper(const Model::DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGatewayInformationAsyncHelper(const Model::DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceStartTimeAsyncHelper(const Model::DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotScheduleAsyncHelper(const Model::DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStorediSCSIVolumesAsyncHelper(const Model::DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTapeArchivesAsyncHelper(const Model::DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTapeRecoveryPointsAsyncHelper(const Model::DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTapesAsyncHelper(const Model::DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUploadBufferAsyncHelper(const Model::DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVTLDevicesAsyncHelper(const Model::DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkingStorageAsyncHelper(const Model::DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableGatewayAsyncHelper(const Model::DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGatewaysAsyncHelper(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLocalDisksAsyncHelper(const Model::ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTapesAsyncHelper(const Model::ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVolumeInitiatorsAsyncHelper(const Model::ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVolumeRecoveryPointsAsyncHelper(const Model::ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVolumesAsyncHelper(const Model::ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetCacheAsyncHelper(const Model::ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetrieveTapeArchiveAsyncHelper(const Model::RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetrieveTapeRecoveryPointAsyncHelper(const Model::RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetLocalConsolePasswordAsyncHelper(const Model::SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ShutdownGatewayAsyncHelper(const Model::ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartGatewayAsyncHelper(const Model::StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBandwidthRateLimitAsyncHelper(const Model::UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChapCredentialsAsyncHelper(const Model::UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGatewayInformationAsyncHelper(const Model::UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGatewaySoftwareNowAsyncHelper(const Model::UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceStartTimeAsyncHelper(const Model::UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSnapshotScheduleAsyncHelper(const Model::UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVTLDeviceTypeAsyncHelper(const Model::UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace StorageGateway
} // namespace Aws
