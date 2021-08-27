/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AcceptInputDeviceTransferResult.h>
#include <aws/medialive/model/BatchDeleteResult.h>
#include <aws/medialive/model/BatchStartResult.h>
#include <aws/medialive/model/BatchStopResult.h>
#include <aws/medialive/model/BatchUpdateScheduleResult.h>
#include <aws/medialive/model/CancelInputDeviceTransferResult.h>
#include <aws/medialive/model/CreateChannelResult.h>
#include <aws/medialive/model/CreateInputResult.h>
#include <aws/medialive/model/CreateInputSecurityGroupResult.h>
#include <aws/medialive/model/CreateMultiplexResult.h>
#include <aws/medialive/model/CreateMultiplexProgramResult.h>
#include <aws/medialive/model/DeleteChannelResult.h>
#include <aws/medialive/model/DeleteInputResult.h>
#include <aws/medialive/model/DeleteInputSecurityGroupResult.h>
#include <aws/medialive/model/DeleteMultiplexResult.h>
#include <aws/medialive/model/DeleteMultiplexProgramResult.h>
#include <aws/medialive/model/DeleteReservationResult.h>
#include <aws/medialive/model/DeleteScheduleResult.h>
#include <aws/medialive/model/DescribeChannelResult.h>
#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/medialive/model/DescribeInputDeviceResult.h>
#include <aws/medialive/model/DescribeInputDeviceThumbnailResult.h>
#include <aws/medialive/model/DescribeInputSecurityGroupResult.h>
#include <aws/medialive/model/DescribeMultiplexResult.h>
#include <aws/medialive/model/DescribeMultiplexProgramResult.h>
#include <aws/medialive/model/DescribeOfferingResult.h>
#include <aws/medialive/model/DescribeReservationResult.h>
#include <aws/medialive/model/DescribeScheduleResult.h>
#include <aws/medialive/model/ListChannelsResult.h>
#include <aws/medialive/model/ListInputDeviceTransfersResult.h>
#include <aws/medialive/model/ListInputDevicesResult.h>
#include <aws/medialive/model/ListInputSecurityGroupsResult.h>
#include <aws/medialive/model/ListInputsResult.h>
#include <aws/medialive/model/ListMultiplexProgramsResult.h>
#include <aws/medialive/model/ListMultiplexesResult.h>
#include <aws/medialive/model/ListOfferingsResult.h>
#include <aws/medialive/model/ListReservationsResult.h>
#include <aws/medialive/model/ListTagsForResourceResult.h>
#include <aws/medialive/model/PurchaseOfferingResult.h>
#include <aws/medialive/model/RejectInputDeviceTransferResult.h>
#include <aws/medialive/model/StartChannelResult.h>
#include <aws/medialive/model/StartMultiplexResult.h>
#include <aws/medialive/model/StopChannelResult.h>
#include <aws/medialive/model/StopMultiplexResult.h>
#include <aws/medialive/model/TransferInputDeviceResult.h>
#include <aws/medialive/model/UpdateChannelResult.h>
#include <aws/medialive/model/UpdateChannelClassResult.h>
#include <aws/medialive/model/UpdateInputResult.h>
#include <aws/medialive/model/UpdateInputDeviceResult.h>
#include <aws/medialive/model/UpdateInputSecurityGroupResult.h>
#include <aws/medialive/model/UpdateMultiplexResult.h>
#include <aws/medialive/model/UpdateMultiplexProgramResult.h>
#include <aws/medialive/model/UpdateReservationResult.h>
#include <aws/core/NoResult.h>
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

namespace MediaLive
{

namespace Model
{
        class AcceptInputDeviceTransferRequest;
        class BatchDeleteRequest;
        class BatchStartRequest;
        class BatchStopRequest;
        class BatchUpdateScheduleRequest;
        class CancelInputDeviceTransferRequest;
        class CreateChannelRequest;
        class CreateInputRequest;
        class CreateInputSecurityGroupRequest;
        class CreateMultiplexRequest;
        class CreateMultiplexProgramRequest;
        class CreateTagsRequest;
        class DeleteChannelRequest;
        class DeleteInputRequest;
        class DeleteInputSecurityGroupRequest;
        class DeleteMultiplexRequest;
        class DeleteMultiplexProgramRequest;
        class DeleteReservationRequest;
        class DeleteScheduleRequest;
        class DeleteTagsRequest;
        class DescribeChannelRequest;
        class DescribeInputRequest;
        class DescribeInputDeviceRequest;
        class DescribeInputDeviceThumbnailRequest;
        class DescribeInputSecurityGroupRequest;
        class DescribeMultiplexRequest;
        class DescribeMultiplexProgramRequest;
        class DescribeOfferingRequest;
        class DescribeReservationRequest;
        class DescribeScheduleRequest;
        class ListChannelsRequest;
        class ListInputDeviceTransfersRequest;
        class ListInputDevicesRequest;
        class ListInputSecurityGroupsRequest;
        class ListInputsRequest;
        class ListMultiplexProgramsRequest;
        class ListMultiplexesRequest;
        class ListOfferingsRequest;
        class ListReservationsRequest;
        class ListTagsForResourceRequest;
        class PurchaseOfferingRequest;
        class RejectInputDeviceTransferRequest;
        class StartChannelRequest;
        class StartMultiplexRequest;
        class StopChannelRequest;
        class StopMultiplexRequest;
        class TransferInputDeviceRequest;
        class UpdateChannelRequest;
        class UpdateChannelClassRequest;
        class UpdateInputRequest;
        class UpdateInputDeviceRequest;
        class UpdateInputSecurityGroupRequest;
        class UpdateMultiplexRequest;
        class UpdateMultiplexProgramRequest;
        class UpdateReservationRequest;

        typedef Aws::Utils::Outcome<AcceptInputDeviceTransferResult, MediaLiveError> AcceptInputDeviceTransferOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteResult, MediaLiveError> BatchDeleteOutcome;
        typedef Aws::Utils::Outcome<BatchStartResult, MediaLiveError> BatchStartOutcome;
        typedef Aws::Utils::Outcome<BatchStopResult, MediaLiveError> BatchStopOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateScheduleResult, MediaLiveError> BatchUpdateScheduleOutcome;
        typedef Aws::Utils::Outcome<CancelInputDeviceTransferResult, MediaLiveError> CancelInputDeviceTransferOutcome;
        typedef Aws::Utils::Outcome<CreateChannelResult, MediaLiveError> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateInputResult, MediaLiveError> CreateInputOutcome;
        typedef Aws::Utils::Outcome<CreateInputSecurityGroupResult, MediaLiveError> CreateInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<CreateMultiplexResult, MediaLiveError> CreateMultiplexOutcome;
        typedef Aws::Utils::Outcome<CreateMultiplexProgramResult, MediaLiveError> CreateMultiplexProgramOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteChannelResult, MediaLiveError> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteInputResult, MediaLiveError> DeleteInputOutcome;
        typedef Aws::Utils::Outcome<DeleteInputSecurityGroupResult, MediaLiveError> DeleteInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteMultiplexResult, MediaLiveError> DeleteMultiplexOutcome;
        typedef Aws::Utils::Outcome<DeleteMultiplexProgramResult, MediaLiveError> DeleteMultiplexProgramOutcome;
        typedef Aws::Utils::Outcome<DeleteReservationResult, MediaLiveError> DeleteReservationOutcome;
        typedef Aws::Utils::Outcome<DeleteScheduleResult, MediaLiveError> DeleteScheduleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelResult, MediaLiveError> DescribeChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeInputResult, MediaLiveError> DescribeInputOutcome;
        typedef Aws::Utils::Outcome<DescribeInputDeviceResult, MediaLiveError> DescribeInputDeviceOutcome;
        typedef Aws::Utils::Outcome<DescribeInputDeviceThumbnailResult, MediaLiveError> DescribeInputDeviceThumbnailOutcome;
        typedef Aws::Utils::Outcome<DescribeInputSecurityGroupResult, MediaLiveError> DescribeInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeMultiplexResult, MediaLiveError> DescribeMultiplexOutcome;
        typedef Aws::Utils::Outcome<DescribeMultiplexProgramResult, MediaLiveError> DescribeMultiplexProgramOutcome;
        typedef Aws::Utils::Outcome<DescribeOfferingResult, MediaLiveError> DescribeOfferingOutcome;
        typedef Aws::Utils::Outcome<DescribeReservationResult, MediaLiveError> DescribeReservationOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduleResult, MediaLiveError> DescribeScheduleOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, MediaLiveError> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListInputDeviceTransfersResult, MediaLiveError> ListInputDeviceTransfersOutcome;
        typedef Aws::Utils::Outcome<ListInputDevicesResult, MediaLiveError> ListInputDevicesOutcome;
        typedef Aws::Utils::Outcome<ListInputSecurityGroupsResult, MediaLiveError> ListInputSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<ListInputsResult, MediaLiveError> ListInputsOutcome;
        typedef Aws::Utils::Outcome<ListMultiplexProgramsResult, MediaLiveError> ListMultiplexProgramsOutcome;
        typedef Aws::Utils::Outcome<ListMultiplexesResult, MediaLiveError> ListMultiplexesOutcome;
        typedef Aws::Utils::Outcome<ListOfferingsResult, MediaLiveError> ListOfferingsOutcome;
        typedef Aws::Utils::Outcome<ListReservationsResult, MediaLiveError> ListReservationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaLiveError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PurchaseOfferingResult, MediaLiveError> PurchaseOfferingOutcome;
        typedef Aws::Utils::Outcome<RejectInputDeviceTransferResult, MediaLiveError> RejectInputDeviceTransferOutcome;
        typedef Aws::Utils::Outcome<StartChannelResult, MediaLiveError> StartChannelOutcome;
        typedef Aws::Utils::Outcome<StartMultiplexResult, MediaLiveError> StartMultiplexOutcome;
        typedef Aws::Utils::Outcome<StopChannelResult, MediaLiveError> StopChannelOutcome;
        typedef Aws::Utils::Outcome<StopMultiplexResult, MediaLiveError> StopMultiplexOutcome;
        typedef Aws::Utils::Outcome<TransferInputDeviceResult, MediaLiveError> TransferInputDeviceOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelResult, MediaLiveError> UpdateChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelClassResult, MediaLiveError> UpdateChannelClassOutcome;
        typedef Aws::Utils::Outcome<UpdateInputResult, MediaLiveError> UpdateInputOutcome;
        typedef Aws::Utils::Outcome<UpdateInputDeviceResult, MediaLiveError> UpdateInputDeviceOutcome;
        typedef Aws::Utils::Outcome<UpdateInputSecurityGroupResult, MediaLiveError> UpdateInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateMultiplexResult, MediaLiveError> UpdateMultiplexOutcome;
        typedef Aws::Utils::Outcome<UpdateMultiplexProgramResult, MediaLiveError> UpdateMultiplexProgramOutcome;
        typedef Aws::Utils::Outcome<UpdateReservationResult, MediaLiveError> UpdateReservationOutcome;

        typedef std::future<AcceptInputDeviceTransferOutcome> AcceptInputDeviceTransferOutcomeCallable;
        typedef std::future<BatchDeleteOutcome> BatchDeleteOutcomeCallable;
        typedef std::future<BatchStartOutcome> BatchStartOutcomeCallable;
        typedef std::future<BatchStopOutcome> BatchStopOutcomeCallable;
        typedef std::future<BatchUpdateScheduleOutcome> BatchUpdateScheduleOutcomeCallable;
        typedef std::future<CancelInputDeviceTransferOutcome> CancelInputDeviceTransferOutcomeCallable;
        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateInputOutcome> CreateInputOutcomeCallable;
        typedef std::future<CreateInputSecurityGroupOutcome> CreateInputSecurityGroupOutcomeCallable;
        typedef std::future<CreateMultiplexOutcome> CreateMultiplexOutcomeCallable;
        typedef std::future<CreateMultiplexProgramOutcome> CreateMultiplexProgramOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeleteInputOutcome> DeleteInputOutcomeCallable;
        typedef std::future<DeleteInputSecurityGroupOutcome> DeleteInputSecurityGroupOutcomeCallable;
        typedef std::future<DeleteMultiplexOutcome> DeleteMultiplexOutcomeCallable;
        typedef std::future<DeleteMultiplexProgramOutcome> DeleteMultiplexProgramOutcomeCallable;
        typedef std::future<DeleteReservationOutcome> DeleteReservationOutcomeCallable;
        typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
        typedef std::future<DescribeInputOutcome> DescribeInputOutcomeCallable;
        typedef std::future<DescribeInputDeviceOutcome> DescribeInputDeviceOutcomeCallable;
        typedef std::future<DescribeInputDeviceThumbnailOutcome> DescribeInputDeviceThumbnailOutcomeCallable;
        typedef std::future<DescribeInputSecurityGroupOutcome> DescribeInputSecurityGroupOutcomeCallable;
        typedef std::future<DescribeMultiplexOutcome> DescribeMultiplexOutcomeCallable;
        typedef std::future<DescribeMultiplexProgramOutcome> DescribeMultiplexProgramOutcomeCallable;
        typedef std::future<DescribeOfferingOutcome> DescribeOfferingOutcomeCallable;
        typedef std::future<DescribeReservationOutcome> DescribeReservationOutcomeCallable;
        typedef std::future<DescribeScheduleOutcome> DescribeScheduleOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListInputDeviceTransfersOutcome> ListInputDeviceTransfersOutcomeCallable;
        typedef std::future<ListInputDevicesOutcome> ListInputDevicesOutcomeCallable;
        typedef std::future<ListInputSecurityGroupsOutcome> ListInputSecurityGroupsOutcomeCallable;
        typedef std::future<ListInputsOutcome> ListInputsOutcomeCallable;
        typedef std::future<ListMultiplexProgramsOutcome> ListMultiplexProgramsOutcomeCallable;
        typedef std::future<ListMultiplexesOutcome> ListMultiplexesOutcomeCallable;
        typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
        typedef std::future<ListReservationsOutcome> ListReservationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
        typedef std::future<RejectInputDeviceTransferOutcome> RejectInputDeviceTransferOutcomeCallable;
        typedef std::future<StartChannelOutcome> StartChannelOutcomeCallable;
        typedef std::future<StartMultiplexOutcome> StartMultiplexOutcomeCallable;
        typedef std::future<StopChannelOutcome> StopChannelOutcomeCallable;
        typedef std::future<StopMultiplexOutcome> StopMultiplexOutcomeCallable;
        typedef std::future<TransferInputDeviceOutcome> TransferInputDeviceOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
        typedef std::future<UpdateChannelClassOutcome> UpdateChannelClassOutcomeCallable;
        typedef std::future<UpdateInputOutcome> UpdateInputOutcomeCallable;
        typedef std::future<UpdateInputDeviceOutcome> UpdateInputDeviceOutcomeCallable;
        typedef std::future<UpdateInputSecurityGroupOutcome> UpdateInputSecurityGroupOutcomeCallable;
        typedef std::future<UpdateMultiplexOutcome> UpdateMultiplexOutcomeCallable;
        typedef std::future<UpdateMultiplexProgramOutcome> UpdateMultiplexProgramOutcomeCallable;
        typedef std::future<UpdateReservationOutcome> UpdateReservationOutcomeCallable;
} // namespace Model

  class MediaLiveClient;

    typedef std::function<void(const MediaLiveClient*, const Model::AcceptInputDeviceTransferRequest&, const Model::AcceptInputDeviceTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInputDeviceTransferResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchDeleteRequest&, const Model::BatchDeleteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchStartRequest&, const Model::BatchStartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStartResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchStopRequest&, const Model::BatchStopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStopResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchUpdateScheduleRequest&, const Model::BatchUpdateScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CancelInputDeviceTransferRequest&, const Model::CancelInputDeviceTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelInputDeviceTransferResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputRequest&, const Model::CreateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputSecurityGroupRequest&, const Model::CreateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateMultiplexRequest&, const Model::CreateMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateMultiplexProgramRequest&, const Model::CreateMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputRequest&, const Model::DeleteInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputSecurityGroupRequest&, const Model::DeleteInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteMultiplexRequest&, const Model::DeleteMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteMultiplexProgramRequest&, const Model::DeleteMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteReservationRequest&, const Model::DeleteReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteScheduleRequest&, const Model::DeleteScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputRequest&, const Model::DescribeInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputDeviceRequest&, const Model::DescribeInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputDeviceThumbnailRequest&, Model::DescribeInputDeviceThumbnailOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputDeviceThumbnailResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputSecurityGroupRequest&, const Model::DescribeInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeMultiplexRequest&, const Model::DescribeMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeMultiplexProgramRequest&, const Model::DescribeMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeOfferingRequest&, const Model::DescribeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeReservationRequest&, const Model::DescribeReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeScheduleRequest&, const Model::DescribeScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputDeviceTransfersRequest&, const Model::ListInputDeviceTransfersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputDeviceTransfersResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputDevicesRequest&, const Model::ListInputDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputDevicesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputSecurityGroupsRequest&, const Model::ListInputSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputsRequest&, const Model::ListInputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListMultiplexProgramsRequest&, const Model::ListMultiplexProgramsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiplexProgramsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListMultiplexesRequest&, const Model::ListMultiplexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiplexesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListReservationsRequest&, const Model::ListReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReservationsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::RejectInputDeviceTransferRequest&, const Model::RejectInputDeviceTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInputDeviceTransferResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartChannelRequest&, const Model::StartChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartMultiplexRequest&, const Model::StartMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopChannelRequest&, const Model::StopChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopMultiplexRequest&, const Model::StopMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::TransferInputDeviceRequest&, const Model::TransferInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelClassRequest&, const Model::UpdateChannelClassOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelClassResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputRequest&, const Model::UpdateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputDeviceRequest&, const Model::UpdateInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputSecurityGroupRequest&, const Model::UpdateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateMultiplexRequest&, const Model::UpdateMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateMultiplexProgramRequest&, const Model::UpdateMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateReservationRequest&, const Model::UpdateReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReservationResponseReceivedHandler;

  /**
   * API for AWS Elemental MediaLive
   */
  class AWS_MEDIALIVE_API MediaLiveClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaLiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaLiveClient();


        /**
         * Accept an incoming input device transfer. The ownership of the device will
         * transfer to your AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AcceptInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInputDeviceTransferOutcome AcceptInputDeviceTransfer(const Model::AcceptInputDeviceTransferRequest& request) const;

        /**
         * Accept an incoming input device transfer. The ownership of the device will
         * transfer to your AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AcceptInputDeviceTransfer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInputDeviceTransferOutcomeCallable AcceptInputDeviceTransferCallable(const Model::AcceptInputDeviceTransferRequest& request) const;

        /**
         * Accept an incoming input device transfer. The ownership of the device will
         * transfer to your AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AcceptInputDeviceTransfer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInputDeviceTransferAsync(const Model::AcceptInputDeviceTransferRequest& request, const AcceptInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts delete of resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDelete">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteOutcome BatchDelete(const Model::BatchDeleteRequest& request) const;

        /**
         * Starts delete of resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDelete">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteOutcomeCallable BatchDeleteCallable(const Model::BatchDeleteRequest& request) const;

        /**
         * Starts delete of resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDelete">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteAsync(const Model::BatchDeleteRequest& request, const BatchDeleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts existing resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStart">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStartOutcome BatchStart(const Model::BatchStartRequest& request) const;

        /**
         * Starts existing resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStart">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchStartOutcomeCallable BatchStartCallable(const Model::BatchStartRequest& request) const;

        /**
         * Starts existing resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStart">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStartAsync(const Model::BatchStartRequest& request, const BatchStartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops running resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStop">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopOutcome BatchStop(const Model::BatchStopRequest& request) const;

        /**
         * Stops running resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStop">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchStopOutcomeCallable BatchStopCallable(const Model::BatchStopRequest& request) const;

        /**
         * Stops running resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStop">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStopAsync(const Model::BatchStopRequest& request, const BatchStopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateScheduleOutcome BatchUpdateSchedule(const Model::BatchUpdateScheduleRequest& request) const;

        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateScheduleOutcomeCallable BatchUpdateScheduleCallable(const Model::BatchUpdateScheduleRequest& request) const;

        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateScheduleAsync(const Model::BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Cancel an input device transfer that you have requested.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CancelInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelInputDeviceTransferOutcome CancelInputDeviceTransfer(const Model::CancelInputDeviceTransferRequest& request) const;

        /**
         * Cancel an input device transfer that you have requested.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CancelInputDeviceTransfer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelInputDeviceTransferOutcomeCallable CancelInputDeviceTransferCallable(const Model::CancelInputDeviceTransferRequest& request) const;

        /**
         * Cancel an input device transfer that you have requested.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CancelInputDeviceTransfer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelInputDeviceTransferAsync(const Model::CancelInputDeviceTransferRequest& request, const CancelInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInputOutcomeCallable CreateInputCallable(const Model::CreateInputRequest& request) const;

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInputAsync(const Model::CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputSecurityGroupOutcome CreateInputSecurityGroup(const Model::CreateInputSecurityGroupRequest& request) const;

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInputSecurityGroupOutcomeCallable CreateInputSecurityGroupCallable(const Model::CreateInputSecurityGroupRequest& request) const;

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInputSecurityGroupAsync(const Model::CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexOutcome CreateMultiplex(const Model::CreateMultiplexRequest& request) const;

        /**
         * Create a new multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMultiplexOutcomeCallable CreateMultiplexCallable(const Model::CreateMultiplexRequest& request) const;

        /**
         * Create a new multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMultiplexAsync(const Model::CreateMultiplexRequest& request, const CreateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new program in the multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexProgramOutcome CreateMultiplexProgram(const Model::CreateMultiplexProgramRequest& request) const;

        /**
         * Create a new program in the multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMultiplexProgramOutcomeCallable CreateMultiplexProgramCallable(const Model::CreateMultiplexProgramRequest& request) const;

        /**
         * Create a new program in the multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMultiplexProgramAsync(const Model::CreateMultiplexProgramRequest& request, const CreateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInputOutcomeCallable DeleteInputCallable(const Model::DeleteInputRequest& request) const;

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInputAsync(const Model::DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputSecurityGroupOutcome DeleteInputSecurityGroup(const Model::DeleteInputSecurityGroupRequest& request) const;

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInputSecurityGroupOutcomeCallable DeleteInputSecurityGroupCallable(const Model::DeleteInputSecurityGroupRequest& request) const;

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInputSecurityGroupAsync(const Model::DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a multiplex. The multiplex must be idle.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexOutcome DeleteMultiplex(const Model::DeleteMultiplexRequest& request) const;

        /**
         * Delete a multiplex. The multiplex must be idle.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMultiplexOutcomeCallable DeleteMultiplexCallable(const Model::DeleteMultiplexRequest& request) const;

        /**
         * Delete a multiplex. The multiplex must be idle.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMultiplexAsync(const Model::DeleteMultiplexRequest& request, const DeleteMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a program from a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexProgramOutcome DeleteMultiplexProgram(const Model::DeleteMultiplexProgramRequest& request) const;

        /**
         * Delete a program from a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMultiplexProgramOutcomeCallable DeleteMultiplexProgramCallable(const Model::DeleteMultiplexProgramRequest& request) const;

        /**
         * Delete a program from a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMultiplexProgramAsync(const Model::DeleteMultiplexProgramRequest& request, const DeleteMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReservationOutcome DeleteReservation(const Model::DeleteReservationRequest& request) const;

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReservationOutcomeCallable DeleteReservationCallable(const Model::DeleteReservationRequest& request) const;

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReservationAsync(const Model::DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request) const;

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputOutcomeCallable DescribeInputCallable(const Model::DescribeInputRequest& request) const;

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputAsync(const Model::DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets the details for the input device<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceOutcome DescribeInputDevice(const Model::DescribeInputDeviceRequest& request) const;

        /**
         * Gets the details for the input device<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputDeviceOutcomeCallable DescribeInputDeviceCallable(const Model::DescribeInputDeviceRequest& request) const;

        /**
         * Gets the details for the input device<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputDeviceAsync(const Model::DescribeInputDeviceRequest& request, const DescribeInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the latest thumbnail data for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceThumbnail">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceThumbnailOutcome DescribeInputDeviceThumbnail(const Model::DescribeInputDeviceThumbnailRequest& request) const;

        /**
         * Get the latest thumbnail data for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceThumbnail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputDeviceThumbnailOutcomeCallable DescribeInputDeviceThumbnailCallable(const Model::DescribeInputDeviceThumbnailRequest& request) const;

        /**
         * Get the latest thumbnail data for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceThumbnail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputDeviceThumbnailAsync(const Model::DescribeInputDeviceThumbnailRequest& request, const DescribeInputDeviceThumbnailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputSecurityGroupOutcome DescribeInputSecurityGroup(const Model::DescribeInputSecurityGroupRequest& request) const;

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputSecurityGroupOutcomeCallable DescribeInputSecurityGroupCallable(const Model::DescribeInputSecurityGroupRequest& request) const;

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputSecurityGroupAsync(const Model::DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexOutcome DescribeMultiplex(const Model::DescribeMultiplexRequest& request) const;

        /**
         * Gets details about a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMultiplexOutcomeCallable DescribeMultiplexCallable(const Model::DescribeMultiplexRequest& request) const;

        /**
         * Gets details about a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMultiplexAsync(const Model::DescribeMultiplexRequest& request, const DescribeMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the details for a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexProgramOutcome DescribeMultiplexProgram(const Model::DescribeMultiplexProgramRequest& request) const;

        /**
         * Get the details for a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMultiplexProgramOutcomeCallable DescribeMultiplexProgramCallable(const Model::DescribeMultiplexProgramRequest& request) const;

        /**
         * Get the details for a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMultiplexProgramAsync(const Model::DescribeMultiplexProgramRequest& request, const DescribeMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const Model::DescribeOfferingRequest& request) const;

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOfferingAsync(const Model::DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const Model::DescribeReservationRequest& request) const;

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservationAsync(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduleOutcome DescribeSchedule(const Model::DescribeScheduleRequest& request) const;

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduleOutcomeCallable DescribeScheduleCallable(const Model::DescribeScheduleRequest& request) const;

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduleAsync(const Model::DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List input devices that are currently being transferred. List input devices that
         * you are transferring from your AWS account or input devices that another AWS
         * account is transferring to you.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDeviceTransfersOutcome ListInputDeviceTransfers(const Model::ListInputDeviceTransfersRequest& request) const;

        /**
         * List input devices that are currently being transferred. List input devices that
         * you are transferring from your AWS account or input devices that another AWS
         * account is transferring to you.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputDeviceTransfersOutcomeCallable ListInputDeviceTransfersCallable(const Model::ListInputDeviceTransfersRequest& request) const;

        /**
         * List input devices that are currently being transferred. List input devices that
         * you are transferring from your AWS account or input devices that another AWS
         * account is transferring to you.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputDeviceTransfersAsync(const Model::ListInputDeviceTransfersRequest& request, const ListInputDeviceTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List input devices<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDevicesOutcome ListInputDevices(const Model::ListInputDevicesRequest& request) const;

        /**
         * List input devices<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputDevicesOutcomeCallable ListInputDevicesCallable(const Model::ListInputDevicesRequest& request) const;

        /**
         * List input devices<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputDevicesAsync(const Model::ListInputDevicesRequest& request, const ListInputDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputSecurityGroupsOutcome ListInputSecurityGroups(const Model::ListInputSecurityGroupsRequest& request) const;

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputSecurityGroupsOutcomeCallable ListInputSecurityGroupsCallable(const Model::ListInputSecurityGroupsRequest& request) const;

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputSecurityGroupsAsync(const Model::ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputsOutcomeCallable ListInputsCallable(const Model::ListInputsRequest& request) const;

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputsAsync(const Model::ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List the programs that currently exist for a specific multiplex.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexPrograms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexProgramsOutcome ListMultiplexPrograms(const Model::ListMultiplexProgramsRequest& request) const;

        /**
         * List the programs that currently exist for a specific multiplex.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexPrograms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMultiplexProgramsOutcomeCallable ListMultiplexProgramsCallable(const Model::ListMultiplexProgramsRequest& request) const;

        /**
         * List the programs that currently exist for a specific multiplex.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexPrograms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMultiplexProgramsAsync(const Model::ListMultiplexProgramsRequest& request, const ListMultiplexProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve a list of the existing multiplexes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexesOutcome ListMultiplexes(const Model::ListMultiplexesRequest& request) const;

        /**
         * Retrieve a list of the existing multiplexes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMultiplexesOutcomeCallable ListMultiplexesCallable(const Model::ListMultiplexesRequest& request) const;

        /**
         * Retrieve a list of the existing multiplexes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMultiplexesAsync(const Model::ListMultiplexesRequest& request, const ListMultiplexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingsAsync(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request) const;

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReservationsOutcomeCallable ListReservationsCallable(const Model::ListReservationsRequest& request) const;

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReservationsAsync(const Model::ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseOfferingAsync(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Reject the transfer of the specified input device to your AWS account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RejectInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInputDeviceTransferOutcome RejectInputDeviceTransfer(const Model::RejectInputDeviceTransferRequest& request) const;

        /**
         * Reject the transfer of the specified input device to your AWS account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RejectInputDeviceTransfer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectInputDeviceTransferOutcomeCallable RejectInputDeviceTransferCallable(const Model::RejectInputDeviceTransferRequest& request) const;

        /**
         * Reject the transfer of the specified input device to your AWS account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RejectInputDeviceTransfer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectInputDeviceTransferAsync(const Model::RejectInputDeviceTransferRequest& request, const RejectInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChannelOutcomeCallable StartChannelCallable(const Model::StartChannelRequest& request) const;

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChannelAsync(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Start (run) the multiplex. Starting the multiplex does not start the channels.
         * You must explicitly start each channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMultiplexOutcome StartMultiplex(const Model::StartMultiplexRequest& request) const;

        /**
         * Start (run) the multiplex. Starting the multiplex does not start the channels.
         * You must explicitly start each channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartMultiplex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMultiplexOutcomeCallable StartMultiplexCallable(const Model::StartMultiplexRequest& request) const;

        /**
         * Start (run) the multiplex. Starting the multiplex does not start the channels.
         * You must explicitly start each channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartMultiplex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMultiplexAsync(const Model::StartMultiplexRequest& request, const StartMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopChannelOutcomeCallable StopChannelCallable(const Model::StopChannelRequest& request) const;

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopChannelAsync(const Model::StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops a running multiplex. If the multiplex isn't running, this action has no
         * effect.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMultiplexOutcome StopMultiplex(const Model::StopMultiplexRequest& request) const;

        /**
         * Stops a running multiplex. If the multiplex isn't running, this action has no
         * effect.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopMultiplex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMultiplexOutcomeCallable StopMultiplexCallable(const Model::StopMultiplexRequest& request) const;

        /**
         * Stops a running multiplex. If the multiplex isn't running, this action has no
         * effect.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopMultiplex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMultiplexAsync(const Model::StopMultiplexRequest& request, const StopMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Start an input device transfer to another AWS account. After you make the
         * request, the other account must accept or reject the transfer.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferInputDeviceOutcome TransferInputDevice(const Model::TransferInputDeviceRequest& request) const;

        /**
         * Start an input device transfer to another AWS account. After you make the
         * request, the other account must accept or reject the transfer.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferInputDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferInputDeviceOutcomeCallable TransferInputDeviceCallable(const Model::TransferInputDeviceRequest& request) const;

        /**
         * Start an input device transfer to another AWS account. After you make the
         * request, the other account must accept or reject the transfer.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferInputDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferInputDeviceAsync(const Model::TransferInputDeviceRequest& request, const TransferInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelClassOutcome UpdateChannelClass(const Model::UpdateChannelClassRequest& request) const;

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelClassOutcomeCallable UpdateChannelClassCallable(const Model::UpdateChannelClassRequest& request) const;

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelClassAsync(const Model::UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputOutcomeCallable UpdateInputCallable(const Model::UpdateInputRequest& request) const;

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputAsync(const Model::UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the parameters for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputDeviceOutcome UpdateInputDevice(const Model::UpdateInputDeviceRequest& request) const;

        /**
         * Updates the parameters for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputDeviceOutcomeCallable UpdateInputDeviceCallable(const Model::UpdateInputDeviceRequest& request) const;

        /**
         * Updates the parameters for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputDeviceAsync(const Model::UpdateInputDeviceRequest& request, const UpdateInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputSecurityGroupOutcome UpdateInputSecurityGroup(const Model::UpdateInputSecurityGroupRequest& request) const;

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputSecurityGroupOutcomeCallable UpdateInputSecurityGroupCallable(const Model::UpdateInputSecurityGroupRequest& request) const;

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputSecurityGroupAsync(const Model::UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexOutcome UpdateMultiplex(const Model::UpdateMultiplexRequest& request) const;

        /**
         * Updates a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMultiplexOutcomeCallable UpdateMultiplexCallable(const Model::UpdateMultiplexRequest& request) const;

        /**
         * Updates a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMultiplexAsync(const Model::UpdateMultiplexRequest& request, const UpdateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexProgramOutcome UpdateMultiplexProgram(const Model::UpdateMultiplexProgramRequest& request) const;

        /**
         * Update a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMultiplexProgramOutcomeCallable UpdateMultiplexProgramCallable(const Model::UpdateMultiplexProgramRequest& request) const;

        /**
         * Update a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgram">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMultiplexProgramAsync(const Model::UpdateMultiplexProgramRequest& request, const UpdateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReservationOutcome UpdateReservation(const Model::UpdateReservationRequest& request) const;

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReservationOutcomeCallable UpdateReservationCallable(const Model::UpdateReservationRequest& request) const;

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReservationAsync(const Model::UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInputDeviceTransferAsyncHelper(const Model::AcceptInputDeviceTransferRequest& request, const AcceptInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteAsyncHelper(const Model::BatchDeleteRequest& request, const BatchDeleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchStartAsyncHelper(const Model::BatchStartRequest& request, const BatchStartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchStopAsyncHelper(const Model::BatchStopRequest& request, const BatchStopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateScheduleAsyncHelper(const Model::BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelInputDeviceTransferAsyncHelper(const Model::CancelInputDeviceTransferRequest& request, const CancelInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInputAsyncHelper(const Model::CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInputSecurityGroupAsyncHelper(const Model::CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMultiplexAsyncHelper(const Model::CreateMultiplexRequest& request, const CreateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMultiplexProgramAsyncHelper(const Model::CreateMultiplexProgramRequest& request, const CreateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInputAsyncHelper(const Model::DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInputSecurityGroupAsyncHelper(const Model::DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMultiplexAsyncHelper(const Model::DeleteMultiplexRequest& request, const DeleteMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMultiplexProgramAsyncHelper(const Model::DeleteMultiplexProgramRequest& request, const DeleteMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReservationAsyncHelper(const Model::DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduleAsyncHelper(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelAsyncHelper(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInputAsyncHelper(const Model::DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInputDeviceAsyncHelper(const Model::DescribeInputDeviceRequest& request, const DescribeInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInputDeviceThumbnailAsyncHelper(const Model::DescribeInputDeviceThumbnailRequest& request, const DescribeInputDeviceThumbnailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInputSecurityGroupAsyncHelper(const Model::DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMultiplexAsyncHelper(const Model::DescribeMultiplexRequest& request, const DescribeMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMultiplexProgramAsyncHelper(const Model::DescribeMultiplexProgramRequest& request, const DescribeMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOfferingAsyncHelper(const Model::DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservationAsyncHelper(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduleAsyncHelper(const Model::DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInputDeviceTransfersAsyncHelper(const Model::ListInputDeviceTransfersRequest& request, const ListInputDeviceTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInputDevicesAsyncHelper(const Model::ListInputDevicesRequest& request, const ListInputDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInputSecurityGroupsAsyncHelper(const Model::ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInputsAsyncHelper(const Model::ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMultiplexProgramsAsyncHelper(const Model::ListMultiplexProgramsRequest& request, const ListMultiplexProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMultiplexesAsyncHelper(const Model::ListMultiplexesRequest& request, const ListMultiplexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingsAsyncHelper(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReservationsAsyncHelper(const Model::ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseOfferingAsyncHelper(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectInputDeviceTransferAsyncHelper(const Model::RejectInputDeviceTransferRequest& request, const RejectInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartChannelAsyncHelper(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMultiplexAsyncHelper(const Model::StartMultiplexRequest& request, const StartMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopChannelAsyncHelper(const Model::StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopMultiplexAsyncHelper(const Model::StopMultiplexRequest& request, const StopMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransferInputDeviceAsyncHelper(const Model::TransferInputDeviceRequest& request, const TransferInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelClassAsyncHelper(const Model::UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInputAsyncHelper(const Model::UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInputDeviceAsyncHelper(const Model::UpdateInputDeviceRequest& request, const UpdateInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInputSecurityGroupAsyncHelper(const Model::UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMultiplexAsyncHelper(const Model::UpdateMultiplexRequest& request, const UpdateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMultiplexProgramAsyncHelper(const Model::UpdateMultiplexProgramRequest& request, const UpdateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReservationAsyncHelper(const Model::UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaLive
} // namespace Aws
