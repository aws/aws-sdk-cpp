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

#include <aws/medialive/MediaLiveClient.h>
#include <aws/medialive/MediaLiveEndpoint.h>
#include <aws/medialive/MediaLiveErrorMarshaller.h>
#include <aws/medialive/model/AcceptInputDeviceTransferRequest.h>
#include <aws/medialive/model/BatchDeleteRequest.h>
#include <aws/medialive/model/BatchStartRequest.h>
#include <aws/medialive/model/BatchStopRequest.h>
#include <aws/medialive/model/BatchUpdateScheduleRequest.h>
#include <aws/medialive/model/CancelInputDeviceTransferRequest.h>
#include <aws/medialive/model/ClaimDeviceRequest.h>
#include <aws/medialive/model/CreateChannelRequest.h>
#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/medialive/model/CreateInputSecurityGroupRequest.h>
#include <aws/medialive/model/CreateMultiplexRequest.h>
#include <aws/medialive/model/CreateMultiplexProgramRequest.h>
#include <aws/medialive/model/CreatePartnerInputRequest.h>
#include <aws/medialive/model/CreateTagsRequest.h>
#include <aws/medialive/model/DeleteChannelRequest.h>
#include <aws/medialive/model/DeleteInputRequest.h>
#include <aws/medialive/model/DeleteInputSecurityGroupRequest.h>
#include <aws/medialive/model/DeleteMultiplexRequest.h>
#include <aws/medialive/model/DeleteMultiplexProgramRequest.h>
#include <aws/medialive/model/DeleteReservationRequest.h>
#include <aws/medialive/model/DeleteScheduleRequest.h>
#include <aws/medialive/model/DeleteTagsRequest.h>
#include <aws/medialive/model/DescribeChannelRequest.h>
#include <aws/medialive/model/DescribeInputRequest.h>
#include <aws/medialive/model/DescribeInputDeviceRequest.h>
#include <aws/medialive/model/DescribeInputDeviceThumbnailRequest.h>
#include <aws/medialive/model/DescribeInputSecurityGroupRequest.h>
#include <aws/medialive/model/DescribeMultiplexRequest.h>
#include <aws/medialive/model/DescribeMultiplexProgramRequest.h>
#include <aws/medialive/model/DescribeOfferingRequest.h>
#include <aws/medialive/model/DescribeReservationRequest.h>
#include <aws/medialive/model/DescribeScheduleRequest.h>
#include <aws/medialive/model/ListChannelsRequest.h>
#include <aws/medialive/model/ListInputDeviceTransfersRequest.h>
#include <aws/medialive/model/ListInputDevicesRequest.h>
#include <aws/medialive/model/ListInputSecurityGroupsRequest.h>
#include <aws/medialive/model/ListInputsRequest.h>
#include <aws/medialive/model/ListMultiplexProgramsRequest.h>
#include <aws/medialive/model/ListMultiplexesRequest.h>
#include <aws/medialive/model/ListOfferingsRequest.h>
#include <aws/medialive/model/ListReservationsRequest.h>
#include <aws/medialive/model/ListTagsForResourceRequest.h>
#include <aws/medialive/model/PurchaseOfferingRequest.h>
#include <aws/medialive/model/RebootInputDeviceRequest.h>
#include <aws/medialive/model/RejectInputDeviceTransferRequest.h>
#include <aws/medialive/model/StartChannelRequest.h>
#include <aws/medialive/model/StartInputDeviceMaintenanceWindowRequest.h>
#include <aws/medialive/model/StartMultiplexRequest.h>
#include <aws/medialive/model/StopChannelRequest.h>
#include <aws/medialive/model/StopMultiplexRequest.h>
#include <aws/medialive/model/TransferInputDeviceRequest.h>
#include <aws/medialive/model/UpdateChannelRequest.h>
#include <aws/medialive/model/UpdateChannelClassRequest.h>
#include <aws/medialive/model/UpdateInputRequest.h>
#include <aws/medialive/model/UpdateInputDeviceRequest.h>
#include <aws/medialive/model/UpdateInputSecurityGroupRequest.h>
#include <aws/medialive/model/UpdateMultiplexRequest.h>
#include <aws/medialive/model/UpdateMultiplexProgramRequest.h>
#include <aws/medialive/model/UpdateReservationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaLive;
using namespace Aws::MediaLive::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "medialive";
static const char* ALLOCATION_TAG = "MediaLiveClient";

MediaLiveClient::MediaLiveClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaLiveClient::~MediaLiveClient()
{
}

void MediaLiveClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaLive");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaLiveEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaLiveClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptInputDeviceTransferOutcome MediaLiveClient::AcceptInputDeviceTransfer(const AcceptInputDeviceTransferRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return AcceptInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  uri.AddPathSegments("/accept");
  return AcceptInputDeviceTransferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptInputDeviceTransferOutcomeCallable MediaLiveClient::AcceptInputDeviceTransferCallable(const AcceptInputDeviceTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInputDeviceTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInputDeviceTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientAcceptInputDeviceTransferAsyncHelper(MediaLiveClient const * const clientThis, const AcceptInputDeviceTransferRequest& request, const AcceptInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptInputDeviceTransfer(request), context);
}

void MediaLiveClient::AcceptInputDeviceTransferAsync(const AcceptInputDeviceTransferRequest& request, const AcceptInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientAcceptInputDeviceTransferAsyncHelper( this, request, handler, context ); } );
}

BatchDeleteOutcome MediaLiveClient::BatchDelete(const BatchDeleteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/batch/delete");
  return BatchDeleteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteOutcomeCallable MediaLiveClient::BatchDeleteCallable(const BatchDeleteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDelete(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientBatchDeleteAsyncHelper(MediaLiveClient const * const clientThis, const BatchDeleteRequest& request, const BatchDeleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDelete(request), context);
}

void MediaLiveClient::BatchDeleteAsync(const BatchDeleteRequest& request, const BatchDeleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientBatchDeleteAsyncHelper( this, request, handler, context ); } );
}

BatchStartOutcome MediaLiveClient::BatchStart(const BatchStartRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/batch/start");
  return BatchStartOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchStartOutcomeCallable MediaLiveClient::BatchStartCallable(const BatchStartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchStartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchStart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientBatchStartAsyncHelper(MediaLiveClient const * const clientThis, const BatchStartRequest& request, const BatchStartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchStart(request), context);
}

void MediaLiveClient::BatchStartAsync(const BatchStartRequest& request, const BatchStartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientBatchStartAsyncHelper( this, request, handler, context ); } );
}

BatchStopOutcome MediaLiveClient::BatchStop(const BatchStopRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/batch/stop");
  return BatchStopOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchStopOutcomeCallable MediaLiveClient::BatchStopCallable(const BatchStopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchStopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchStop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientBatchStopAsyncHelper(MediaLiveClient const * const clientThis, const BatchStopRequest& request, const BatchStopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchStop(request), context);
}

void MediaLiveClient::BatchStopAsync(const BatchStopRequest& request, const BatchStopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientBatchStopAsyncHelper( this, request, handler, context ); } );
}

BatchUpdateScheduleOutcome MediaLiveClient::BatchUpdateSchedule(const BatchUpdateScheduleRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateSchedule", "Required field: ChannelId, is not set");
    return BatchUpdateScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  uri.AddPathSegments("/schedule");
  return BatchUpdateScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateScheduleOutcomeCallable MediaLiveClient::BatchUpdateScheduleCallable(const BatchUpdateScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientBatchUpdateScheduleAsyncHelper(MediaLiveClient const * const clientThis, const BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchUpdateSchedule(request), context);
}

void MediaLiveClient::BatchUpdateScheduleAsync(const BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientBatchUpdateScheduleAsyncHelper( this, request, handler, context ); } );
}

CancelInputDeviceTransferOutcome MediaLiveClient::CancelInputDeviceTransfer(const CancelInputDeviceTransferRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return CancelInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  uri.AddPathSegments("/cancel");
  return CancelInputDeviceTransferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelInputDeviceTransferOutcomeCallable MediaLiveClient::CancelInputDeviceTransferCallable(const CancelInputDeviceTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelInputDeviceTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelInputDeviceTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCancelInputDeviceTransferAsyncHelper(MediaLiveClient const * const clientThis, const CancelInputDeviceTransferRequest& request, const CancelInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelInputDeviceTransfer(request), context);
}

void MediaLiveClient::CancelInputDeviceTransferAsync(const CancelInputDeviceTransferRequest& request, const CancelInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCancelInputDeviceTransferAsyncHelper( this, request, handler, context ); } );
}

ClaimDeviceOutcome MediaLiveClient::ClaimDevice(const ClaimDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/claimDevice");
  return ClaimDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ClaimDeviceOutcomeCallable MediaLiveClient::ClaimDeviceCallable(const ClaimDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClaimDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClaimDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientClaimDeviceAsyncHelper(MediaLiveClient const * const clientThis, const ClaimDeviceRequest& request, const ClaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ClaimDevice(request), context);
}

void MediaLiveClient::ClaimDeviceAsync(const ClaimDeviceRequest& request, const ClaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientClaimDeviceAsyncHelper( this, request, handler, context ); } );
}

CreateChannelOutcome MediaLiveClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels");
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable MediaLiveClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCreateChannelAsyncHelper(MediaLiveClient const * const clientThis, const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateChannel(request), context);
}

void MediaLiveClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCreateChannelAsyncHelper( this, request, handler, context ); } );
}

CreateInputOutcome MediaLiveClient::CreateInput(const CreateInputRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputs");
  return CreateInputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInputOutcomeCallable MediaLiveClient::CreateInputCallable(const CreateInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCreateInputAsyncHelper(MediaLiveClient const * const clientThis, const CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInput(request), context);
}

void MediaLiveClient::CreateInputAsync(const CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCreateInputAsyncHelper( this, request, handler, context ); } );
}

CreateInputSecurityGroupOutcome MediaLiveClient::CreateInputSecurityGroup(const CreateInputSecurityGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputSecurityGroups");
  return CreateInputSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInputSecurityGroupOutcomeCallable MediaLiveClient::CreateInputSecurityGroupCallable(const CreateInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCreateInputSecurityGroupAsyncHelper(MediaLiveClient const * const clientThis, const CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInputSecurityGroup(request), context);
}

void MediaLiveClient::CreateInputSecurityGroupAsync(const CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCreateInputSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

CreateMultiplexOutcome MediaLiveClient::CreateMultiplex(const CreateMultiplexRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes");
  return CreateMultiplexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMultiplexOutcomeCallable MediaLiveClient::CreateMultiplexCallable(const CreateMultiplexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMultiplexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMultiplex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCreateMultiplexAsyncHelper(MediaLiveClient const * const clientThis, const CreateMultiplexRequest& request, const CreateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMultiplex(request), context);
}

void MediaLiveClient::CreateMultiplexAsync(const CreateMultiplexRequest& request, const CreateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCreateMultiplexAsyncHelper( this, request, handler, context ); } );
}

CreateMultiplexProgramOutcome MediaLiveClient::CreateMultiplexProgram(const CreateMultiplexProgramRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultiplexProgram", "Required field: MultiplexId, is not set");
    return CreateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  uri.AddPathSegments("/programs");
  return CreateMultiplexProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMultiplexProgramOutcomeCallable MediaLiveClient::CreateMultiplexProgramCallable(const CreateMultiplexProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMultiplexProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMultiplexProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCreateMultiplexProgramAsyncHelper(MediaLiveClient const * const clientThis, const CreateMultiplexProgramRequest& request, const CreateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMultiplexProgram(request), context);
}

void MediaLiveClient::CreateMultiplexProgramAsync(const CreateMultiplexProgramRequest& request, const CreateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCreateMultiplexProgramAsyncHelper( this, request, handler, context ); } );
}

CreatePartnerInputOutcome MediaLiveClient::CreatePartnerInput(const CreatePartnerInputRequest& request) const
{
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePartnerInput", "Required field: InputId, is not set");
    return CreatePartnerInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputs/");
  uri.AddPathSegment(request.GetInputId());
  uri.AddPathSegments("/partners");
  return CreatePartnerInputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePartnerInputOutcomeCallable MediaLiveClient::CreatePartnerInputCallable(const CreatePartnerInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePartnerInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePartnerInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCreatePartnerInputAsyncHelper(MediaLiveClient const * const clientThis, const CreatePartnerInputRequest& request, const CreatePartnerInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePartnerInput(request), context);
}

void MediaLiveClient::CreatePartnerInputAsync(const CreatePartnerInputRequest& request, const CreatePartnerInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCreatePartnerInputAsyncHelper( this, request, handler, context ); } );
}

CreateTagsOutcome MediaLiveClient::CreateTags(const CreateTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTags", "Required field: ResourceArn, is not set");
    return CreateTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return CreateTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagsOutcomeCallable MediaLiveClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientCreateTagsAsyncHelper(MediaLiveClient const * const clientThis, const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTags(request), context);
}

void MediaLiveClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientCreateTagsAsyncHelper( this, request, handler, context ); } );
}

DeleteChannelOutcome MediaLiveClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelId, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable MediaLiveClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteChannelAsyncHelper(MediaLiveClient const * const clientThis, const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteChannel(request), context);
}

void MediaLiveClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteInputOutcome MediaLiveClient::DeleteInput(const DeleteInputRequest& request) const
{
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInput", "Required field: InputId, is not set");
    return DeleteInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputs/");
  uri.AddPathSegment(request.GetInputId());
  return DeleteInputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInputOutcomeCallable MediaLiveClient::DeleteInputCallable(const DeleteInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteInputAsyncHelper(MediaLiveClient const * const clientThis, const DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInput(request), context);
}

void MediaLiveClient::DeleteInputAsync(const DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteInputAsyncHelper( this, request, handler, context ); } );
}

DeleteInputSecurityGroupOutcome MediaLiveClient::DeleteInputSecurityGroup(const DeleteInputSecurityGroupRequest& request) const
{
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DeleteInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputSecurityGroups/");
  uri.AddPathSegment(request.GetInputSecurityGroupId());
  return DeleteInputSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInputSecurityGroupOutcomeCallable MediaLiveClient::DeleteInputSecurityGroupCallable(const DeleteInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteInputSecurityGroupAsyncHelper(MediaLiveClient const * const clientThis, const DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInputSecurityGroup(request), context);
}

void MediaLiveClient::DeleteInputSecurityGroupAsync(const DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteInputSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteMultiplexOutcome MediaLiveClient::DeleteMultiplex(const DeleteMultiplexRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiplex", "Required field: MultiplexId, is not set");
    return DeleteMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  return DeleteMultiplexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMultiplexOutcomeCallable MediaLiveClient::DeleteMultiplexCallable(const DeleteMultiplexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMultiplexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMultiplex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteMultiplexAsyncHelper(MediaLiveClient const * const clientThis, const DeleteMultiplexRequest& request, const DeleteMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMultiplex(request), context);
}

void MediaLiveClient::DeleteMultiplexAsync(const DeleteMultiplexRequest& request, const DeleteMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteMultiplexAsyncHelper( this, request, handler, context ); } );
}

DeleteMultiplexProgramOutcome MediaLiveClient::DeleteMultiplexProgram(const DeleteMultiplexProgramRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiplexProgram", "Required field: MultiplexId, is not set");
    return DeleteMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiplexProgram", "Required field: ProgramName, is not set");
    return DeleteMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  uri.AddPathSegments("/programs/");
  uri.AddPathSegment(request.GetProgramName());
  return DeleteMultiplexProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMultiplexProgramOutcomeCallable MediaLiveClient::DeleteMultiplexProgramCallable(const DeleteMultiplexProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMultiplexProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMultiplexProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteMultiplexProgramAsyncHelper(MediaLiveClient const * const clientThis, const DeleteMultiplexProgramRequest& request, const DeleteMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMultiplexProgram(request), context);
}

void MediaLiveClient::DeleteMultiplexProgramAsync(const DeleteMultiplexProgramRequest& request, const DeleteMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteMultiplexProgramAsyncHelper( this, request, handler, context ); } );
}

DeleteReservationOutcome MediaLiveClient::DeleteReservation(const DeleteReservationRequest& request) const
{
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReservation", "Required field: ReservationId, is not set");
    return DeleteReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/reservations/");
  uri.AddPathSegment(request.GetReservationId());
  return DeleteReservationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteReservationOutcomeCallable MediaLiveClient::DeleteReservationCallable(const DeleteReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteReservationAsyncHelper(MediaLiveClient const * const clientThis, const DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReservation(request), context);
}

void MediaLiveClient::DeleteReservationAsync(const DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteReservationAsyncHelper( this, request, handler, context ); } );
}

DeleteScheduleOutcome MediaLiveClient::DeleteSchedule(const DeleteScheduleRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchedule", "Required field: ChannelId, is not set");
    return DeleteScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  uri.AddPathSegments("/schedule");
  return DeleteScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteScheduleOutcomeCallable MediaLiveClient::DeleteScheduleCallable(const DeleteScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteScheduleAsyncHelper(MediaLiveClient const * const clientThis, const DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSchedule(request), context);
}

void MediaLiveClient::DeleteScheduleAsync(const DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteScheduleAsyncHelper( this, request, handler, context ); } );
}

DeleteTagsOutcome MediaLiveClient::DeleteTags(const DeleteTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: ResourceArn, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: TagKeys, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return DeleteTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsOutcomeCallable MediaLiveClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDeleteTagsAsyncHelper(MediaLiveClient const * const clientThis, const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTags(request), context);
}

void MediaLiveClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDeleteTagsAsyncHelper( this, request, handler, context ); } );
}

DescribeChannelOutcome MediaLiveClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelId, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  return DescribeChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable MediaLiveClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeChannelAsyncHelper(MediaLiveClient const * const clientThis, const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeChannel(request), context);
}

void MediaLiveClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeChannelAsyncHelper( this, request, handler, context ); } );
}

DescribeInputOutcome MediaLiveClient::DescribeInput(const DescribeInputRequest& request) const
{
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInput", "Required field: InputId, is not set");
    return DescribeInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputs/");
  uri.AddPathSegment(request.GetInputId());
  return DescribeInputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInputOutcomeCallable MediaLiveClient::DescribeInputCallable(const DescribeInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeInputAsyncHelper(MediaLiveClient const * const clientThis, const DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInput(request), context);
}

void MediaLiveClient::DescribeInputAsync(const DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeInputAsyncHelper( this, request, handler, context ); } );
}

DescribeInputDeviceOutcome MediaLiveClient::DescribeInputDevice(const DescribeInputDeviceRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputDevice", "Required field: InputDeviceId, is not set");
    return DescribeInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  return DescribeInputDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInputDeviceOutcomeCallable MediaLiveClient::DescribeInputDeviceCallable(const DescribeInputDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInputDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInputDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeInputDeviceAsyncHelper(MediaLiveClient const * const clientThis, const DescribeInputDeviceRequest& request, const DescribeInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInputDevice(request), context);
}

void MediaLiveClient::DescribeInputDeviceAsync(const DescribeInputDeviceRequest& request, const DescribeInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeInputDeviceAsyncHelper( this, request, handler, context ); } );
}

DescribeInputDeviceThumbnailOutcome MediaLiveClient::DescribeInputDeviceThumbnail(const DescribeInputDeviceThumbnailRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputDeviceThumbnail", "Required field: InputDeviceId, is not set");
    return DescribeInputDeviceThumbnailOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputDeviceThumbnail", "Required field: Accept, is not set");
    return DescribeInputDeviceThumbnailOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  uri.AddPathSegments("/thumbnailData");
  return DescribeInputDeviceThumbnailOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

DescribeInputDeviceThumbnailOutcomeCallable MediaLiveClient::DescribeInputDeviceThumbnailCallable(const DescribeInputDeviceThumbnailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInputDeviceThumbnailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInputDeviceThumbnail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeInputDeviceThumbnailAsyncHelper(MediaLiveClient const * const clientThis, const DescribeInputDeviceThumbnailRequest& request, const DescribeInputDeviceThumbnailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInputDeviceThumbnail(request), context);
}

void MediaLiveClient::DescribeInputDeviceThumbnailAsync(const DescribeInputDeviceThumbnailRequest& request, const DescribeInputDeviceThumbnailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeInputDeviceThumbnailAsyncHelper( this, request, handler, context ); } );
}

DescribeInputSecurityGroupOutcome MediaLiveClient::DescribeInputSecurityGroup(const DescribeInputSecurityGroupRequest& request) const
{
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DescribeInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputSecurityGroups/");
  uri.AddPathSegment(request.GetInputSecurityGroupId());
  return DescribeInputSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInputSecurityGroupOutcomeCallable MediaLiveClient::DescribeInputSecurityGroupCallable(const DescribeInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeInputSecurityGroupAsyncHelper(MediaLiveClient const * const clientThis, const DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInputSecurityGroup(request), context);
}

void MediaLiveClient::DescribeInputSecurityGroupAsync(const DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeInputSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeMultiplexOutcome MediaLiveClient::DescribeMultiplex(const DescribeMultiplexRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiplex", "Required field: MultiplexId, is not set");
    return DescribeMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  return DescribeMultiplexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMultiplexOutcomeCallable MediaLiveClient::DescribeMultiplexCallable(const DescribeMultiplexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMultiplexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMultiplex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeMultiplexAsyncHelper(MediaLiveClient const * const clientThis, const DescribeMultiplexRequest& request, const DescribeMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMultiplex(request), context);
}

void MediaLiveClient::DescribeMultiplexAsync(const DescribeMultiplexRequest& request, const DescribeMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeMultiplexAsyncHelper( this, request, handler, context ); } );
}

DescribeMultiplexProgramOutcome MediaLiveClient::DescribeMultiplexProgram(const DescribeMultiplexProgramRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiplexProgram", "Required field: MultiplexId, is not set");
    return DescribeMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiplexProgram", "Required field: ProgramName, is not set");
    return DescribeMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  uri.AddPathSegments("/programs/");
  uri.AddPathSegment(request.GetProgramName());
  return DescribeMultiplexProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeMultiplexProgramOutcomeCallable MediaLiveClient::DescribeMultiplexProgramCallable(const DescribeMultiplexProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMultiplexProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMultiplexProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeMultiplexProgramAsyncHelper(MediaLiveClient const * const clientThis, const DescribeMultiplexProgramRequest& request, const DescribeMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMultiplexProgram(request), context);
}

void MediaLiveClient::DescribeMultiplexProgramAsync(const DescribeMultiplexProgramRequest& request, const DescribeMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeMultiplexProgramAsyncHelper( this, request, handler, context ); } );
}

DescribeOfferingOutcome MediaLiveClient::DescribeOffering(const DescribeOfferingRequest& request) const
{
  if (!request.OfferingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingId, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/offerings/");
  uri.AddPathSegment(request.GetOfferingId());
  return DescribeOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOfferingOutcomeCallable MediaLiveClient::DescribeOfferingCallable(const DescribeOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeOfferingAsyncHelper(MediaLiveClient const * const clientThis, const DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOffering(request), context);
}

void MediaLiveClient::DescribeOfferingAsync(const DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeOfferingAsyncHelper( this, request, handler, context ); } );
}

DescribeReservationOutcome MediaLiveClient::DescribeReservation(const DescribeReservationRequest& request) const
{
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationId, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/reservations/");
  uri.AddPathSegment(request.GetReservationId());
  return DescribeReservationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservationOutcomeCallable MediaLiveClient::DescribeReservationCallable(const DescribeReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeReservationAsyncHelper(MediaLiveClient const * const clientThis, const DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReservation(request), context);
}

void MediaLiveClient::DescribeReservationAsync(const DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeReservationAsyncHelper( this, request, handler, context ); } );
}

DescribeScheduleOutcome MediaLiveClient::DescribeSchedule(const DescribeScheduleRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchedule", "Required field: ChannelId, is not set");
    return DescribeScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  uri.AddPathSegments("/schedule");
  return DescribeScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeScheduleOutcomeCallable MediaLiveClient::DescribeScheduleCallable(const DescribeScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientDescribeScheduleAsyncHelper(MediaLiveClient const * const clientThis, const DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSchedule(request), context);
}

void MediaLiveClient::DescribeScheduleAsync(const DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientDescribeScheduleAsyncHelper( this, request, handler, context ); } );
}

ListChannelsOutcome MediaLiveClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels");
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable MediaLiveClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListChannelsAsyncHelper(MediaLiveClient const * const clientThis, const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListChannels(request), context);
}

void MediaLiveClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListChannelsAsyncHelper( this, request, handler, context ); } );
}

ListInputDeviceTransfersOutcome MediaLiveClient::ListInputDeviceTransfers(const ListInputDeviceTransfersRequest& request) const
{
  if (!request.TransferTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInputDeviceTransfers", "Required field: TransferType, is not set");
    return ListInputDeviceTransfersOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransferType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDeviceTransfers");
  return ListInputDeviceTransfersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInputDeviceTransfersOutcomeCallable MediaLiveClient::ListInputDeviceTransfersCallable(const ListInputDeviceTransfersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputDeviceTransfersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputDeviceTransfers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListInputDeviceTransfersAsyncHelper(MediaLiveClient const * const clientThis, const ListInputDeviceTransfersRequest& request, const ListInputDeviceTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInputDeviceTransfers(request), context);
}

void MediaLiveClient::ListInputDeviceTransfersAsync(const ListInputDeviceTransfersRequest& request, const ListInputDeviceTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListInputDeviceTransfersAsyncHelper( this, request, handler, context ); } );
}

ListInputDevicesOutcome MediaLiveClient::ListInputDevices(const ListInputDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices");
  return ListInputDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInputDevicesOutcomeCallable MediaLiveClient::ListInputDevicesCallable(const ListInputDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListInputDevicesAsyncHelper(MediaLiveClient const * const clientThis, const ListInputDevicesRequest& request, const ListInputDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInputDevices(request), context);
}

void MediaLiveClient::ListInputDevicesAsync(const ListInputDevicesRequest& request, const ListInputDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListInputDevicesAsyncHelper( this, request, handler, context ); } );
}

ListInputSecurityGroupsOutcome MediaLiveClient::ListInputSecurityGroups(const ListInputSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputSecurityGroups");
  return ListInputSecurityGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInputSecurityGroupsOutcomeCallable MediaLiveClient::ListInputSecurityGroupsCallable(const ListInputSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListInputSecurityGroupsAsyncHelper(MediaLiveClient const * const clientThis, const ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInputSecurityGroups(request), context);
}

void MediaLiveClient::ListInputSecurityGroupsAsync(const ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListInputSecurityGroupsAsyncHelper( this, request, handler, context ); } );
}

ListInputsOutcome MediaLiveClient::ListInputs(const ListInputsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputs");
  return ListInputsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInputsOutcomeCallable MediaLiveClient::ListInputsCallable(const ListInputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListInputsAsyncHelper(MediaLiveClient const * const clientThis, const ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInputs(request), context);
}

void MediaLiveClient::ListInputsAsync(const ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListInputsAsyncHelper( this, request, handler, context ); } );
}

ListMultiplexProgramsOutcome MediaLiveClient::ListMultiplexPrograms(const ListMultiplexProgramsRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultiplexPrograms", "Required field: MultiplexId, is not set");
    return ListMultiplexProgramsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  uri.AddPathSegments("/programs");
  return ListMultiplexProgramsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMultiplexProgramsOutcomeCallable MediaLiveClient::ListMultiplexProgramsCallable(const ListMultiplexProgramsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMultiplexProgramsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMultiplexPrograms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListMultiplexProgramsAsyncHelper(MediaLiveClient const * const clientThis, const ListMultiplexProgramsRequest& request, const ListMultiplexProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMultiplexPrograms(request), context);
}

void MediaLiveClient::ListMultiplexProgramsAsync(const ListMultiplexProgramsRequest& request, const ListMultiplexProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListMultiplexProgramsAsyncHelper( this, request, handler, context ); } );
}

ListMultiplexesOutcome MediaLiveClient::ListMultiplexes(const ListMultiplexesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes");
  return ListMultiplexesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMultiplexesOutcomeCallable MediaLiveClient::ListMultiplexesCallable(const ListMultiplexesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMultiplexesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMultiplexes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListMultiplexesAsyncHelper(MediaLiveClient const * const clientThis, const ListMultiplexesRequest& request, const ListMultiplexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMultiplexes(request), context);
}

void MediaLiveClient::ListMultiplexesAsync(const ListMultiplexesRequest& request, const ListMultiplexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListMultiplexesAsyncHelper( this, request, handler, context ); } );
}

ListOfferingsOutcome MediaLiveClient::ListOfferings(const ListOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/offerings");
  return ListOfferingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingsOutcomeCallable MediaLiveClient::ListOfferingsCallable(const ListOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListOfferingsAsyncHelper(MediaLiveClient const * const clientThis, const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOfferings(request), context);
}

void MediaLiveClient::ListOfferingsAsync(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListOfferingsAsyncHelper( this, request, handler, context ); } );
}

ListReservationsOutcome MediaLiveClient::ListReservations(const ListReservationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/reservations");
  return ListReservationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReservationsOutcomeCallable MediaLiveClient::ListReservationsCallable(const ListReservationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReservationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReservations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListReservationsAsyncHelper(MediaLiveClient const * const clientThis, const ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReservations(request), context);
}

void MediaLiveClient::ListReservationsAsync(const ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListReservationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome MediaLiveClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaLiveClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientListTagsForResourceAsyncHelper(MediaLiveClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void MediaLiveClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PurchaseOfferingOutcome MediaLiveClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  if (!request.OfferingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingId, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/offerings/");
  uri.AddPathSegment(request.GetOfferingId());
  uri.AddPathSegments("/purchase");
  return PurchaseOfferingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PurchaseOfferingOutcomeCallable MediaLiveClient::PurchaseOfferingCallable(const PurchaseOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientPurchaseOfferingAsyncHelper(MediaLiveClient const * const clientThis, const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PurchaseOffering(request), context);
}

void MediaLiveClient::PurchaseOfferingAsync(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientPurchaseOfferingAsyncHelper( this, request, handler, context ); } );
}

RebootInputDeviceOutcome MediaLiveClient::RebootInputDevice(const RebootInputDeviceRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RebootInputDevice", "Required field: InputDeviceId, is not set");
    return RebootInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  uri.AddPathSegments("/reboot");
  return RebootInputDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootInputDeviceOutcomeCallable MediaLiveClient::RebootInputDeviceCallable(const RebootInputDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootInputDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootInputDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientRebootInputDeviceAsyncHelper(MediaLiveClient const * const clientThis, const RebootInputDeviceRequest& request, const RebootInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootInputDevice(request), context);
}

void MediaLiveClient::RebootInputDeviceAsync(const RebootInputDeviceRequest& request, const RebootInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientRebootInputDeviceAsyncHelper( this, request, handler, context ); } );
}

RejectInputDeviceTransferOutcome MediaLiveClient::RejectInputDeviceTransfer(const RejectInputDeviceTransferRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return RejectInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  uri.AddPathSegments("/reject");
  return RejectInputDeviceTransferOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectInputDeviceTransferOutcomeCallable MediaLiveClient::RejectInputDeviceTransferCallable(const RejectInputDeviceTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectInputDeviceTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectInputDeviceTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientRejectInputDeviceTransferAsyncHelper(MediaLiveClient const * const clientThis, const RejectInputDeviceTransferRequest& request, const RejectInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectInputDeviceTransfer(request), context);
}

void MediaLiveClient::RejectInputDeviceTransferAsync(const RejectInputDeviceTransferRequest& request, const RejectInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientRejectInputDeviceTransferAsyncHelper( this, request, handler, context ); } );
}

StartChannelOutcome MediaLiveClient::StartChannel(const StartChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelId, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  uri.AddPathSegments("/start");
  return StartChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartChannelOutcomeCallable MediaLiveClient::StartChannelCallable(const StartChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientStartChannelAsyncHelper(MediaLiveClient const * const clientThis, const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartChannel(request), context);
}

void MediaLiveClient::StartChannelAsync(const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientStartChannelAsyncHelper( this, request, handler, context ); } );
}

StartInputDeviceMaintenanceWindowOutcome MediaLiveClient::StartInputDeviceMaintenanceWindow(const StartInputDeviceMaintenanceWindowRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartInputDeviceMaintenanceWindow", "Required field: InputDeviceId, is not set");
    return StartInputDeviceMaintenanceWindowOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  uri.AddPathSegments("/startInputDeviceMaintenanceWindow");
  return StartInputDeviceMaintenanceWindowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartInputDeviceMaintenanceWindowOutcomeCallable MediaLiveClient::StartInputDeviceMaintenanceWindowCallable(const StartInputDeviceMaintenanceWindowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInputDeviceMaintenanceWindowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInputDeviceMaintenanceWindow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientStartInputDeviceMaintenanceWindowAsyncHelper(MediaLiveClient const * const clientThis, const StartInputDeviceMaintenanceWindowRequest& request, const StartInputDeviceMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartInputDeviceMaintenanceWindow(request), context);
}

void MediaLiveClient::StartInputDeviceMaintenanceWindowAsync(const StartInputDeviceMaintenanceWindowRequest& request, const StartInputDeviceMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientStartInputDeviceMaintenanceWindowAsyncHelper( this, request, handler, context ); } );
}

StartMultiplexOutcome MediaLiveClient::StartMultiplex(const StartMultiplexRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMultiplex", "Required field: MultiplexId, is not set");
    return StartMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  uri.AddPathSegments("/start");
  return StartMultiplexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMultiplexOutcomeCallable MediaLiveClient::StartMultiplexCallable(const StartMultiplexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMultiplexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMultiplex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientStartMultiplexAsyncHelper(MediaLiveClient const * const clientThis, const StartMultiplexRequest& request, const StartMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMultiplex(request), context);
}

void MediaLiveClient::StartMultiplexAsync(const StartMultiplexRequest& request, const StartMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientStartMultiplexAsyncHelper( this, request, handler, context ); } );
}

StopChannelOutcome MediaLiveClient::StopChannel(const StopChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelId, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  uri.AddPathSegments("/stop");
  return StopChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopChannelOutcomeCallable MediaLiveClient::StopChannelCallable(const StopChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientStopChannelAsyncHelper(MediaLiveClient const * const clientThis, const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopChannel(request), context);
}

void MediaLiveClient::StopChannelAsync(const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientStopChannelAsyncHelper( this, request, handler, context ); } );
}

StopMultiplexOutcome MediaLiveClient::StopMultiplex(const StopMultiplexRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopMultiplex", "Required field: MultiplexId, is not set");
    return StopMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  uri.AddPathSegments("/stop");
  return StopMultiplexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMultiplexOutcomeCallable MediaLiveClient::StopMultiplexCallable(const StopMultiplexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMultiplexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMultiplex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientStopMultiplexAsyncHelper(MediaLiveClient const * const clientThis, const StopMultiplexRequest& request, const StopMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopMultiplex(request), context);
}

void MediaLiveClient::StopMultiplexAsync(const StopMultiplexRequest& request, const StopMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientStopMultiplexAsyncHelper( this, request, handler, context ); } );
}

TransferInputDeviceOutcome MediaLiveClient::TransferInputDevice(const TransferInputDeviceRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TransferInputDevice", "Required field: InputDeviceId, is not set");
    return TransferInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  uri.AddPathSegments("/transfer");
  return TransferInputDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransferInputDeviceOutcomeCallable MediaLiveClient::TransferInputDeviceCallable(const TransferInputDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransferInputDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransferInputDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientTransferInputDeviceAsyncHelper(MediaLiveClient const * const clientThis, const TransferInputDeviceRequest& request, const TransferInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TransferInputDevice(request), context);
}

void MediaLiveClient::TransferInputDeviceAsync(const TransferInputDeviceRequest& request, const TransferInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientTransferInputDeviceAsyncHelper( this, request, handler, context ); } );
}

UpdateChannelOutcome MediaLiveClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelId, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable MediaLiveClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateChannelAsyncHelper(MediaLiveClient const * const clientThis, const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateChannel(request), context);
}

void MediaLiveClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateChannelClassOutcome MediaLiveClient::UpdateChannelClass(const UpdateChannelClassRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelClass", "Required field: ChannelId, is not set");
    return UpdateChannelClassOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/channels/");
  uri.AddPathSegment(request.GetChannelId());
  uri.AddPathSegments("/channelClass");
  return UpdateChannelClassOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelClassOutcomeCallable MediaLiveClient::UpdateChannelClassCallable(const UpdateChannelClassRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelClassOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannelClass(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateChannelClassAsyncHelper(MediaLiveClient const * const clientThis, const UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateChannelClass(request), context);
}

void MediaLiveClient::UpdateChannelClassAsync(const UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateChannelClassAsyncHelper( this, request, handler, context ); } );
}

UpdateInputOutcome MediaLiveClient::UpdateInput(const UpdateInputRequest& request) const
{
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInput", "Required field: InputId, is not set");
    return UpdateInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputs/");
  uri.AddPathSegment(request.GetInputId());
  return UpdateInputOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInputOutcomeCallable MediaLiveClient::UpdateInputCallable(const UpdateInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateInputAsyncHelper(MediaLiveClient const * const clientThis, const UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInput(request), context);
}

void MediaLiveClient::UpdateInputAsync(const UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateInputAsyncHelper( this, request, handler, context ); } );
}

UpdateInputDeviceOutcome MediaLiveClient::UpdateInputDevice(const UpdateInputDeviceRequest& request) const
{
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInputDevice", "Required field: InputDeviceId, is not set");
    return UpdateInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputDevices/");
  uri.AddPathSegment(request.GetInputDeviceId());
  return UpdateInputDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInputDeviceOutcomeCallable MediaLiveClient::UpdateInputDeviceCallable(const UpdateInputDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInputDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInputDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateInputDeviceAsyncHelper(MediaLiveClient const * const clientThis, const UpdateInputDeviceRequest& request, const UpdateInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInputDevice(request), context);
}

void MediaLiveClient::UpdateInputDeviceAsync(const UpdateInputDeviceRequest& request, const UpdateInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateInputDeviceAsyncHelper( this, request, handler, context ); } );
}

UpdateInputSecurityGroupOutcome MediaLiveClient::UpdateInputSecurityGroup(const UpdateInputSecurityGroupRequest& request) const
{
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return UpdateInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/inputSecurityGroups/");
  uri.AddPathSegment(request.GetInputSecurityGroupId());
  return UpdateInputSecurityGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInputSecurityGroupOutcomeCallable MediaLiveClient::UpdateInputSecurityGroupCallable(const UpdateInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateInputSecurityGroupAsyncHelper(MediaLiveClient const * const clientThis, const UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInputSecurityGroup(request), context);
}

void MediaLiveClient::UpdateInputSecurityGroupAsync(const UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateInputSecurityGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateMultiplexOutcome MediaLiveClient::UpdateMultiplex(const UpdateMultiplexRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMultiplex", "Required field: MultiplexId, is not set");
    return UpdateMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  return UpdateMultiplexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateMultiplexOutcomeCallable MediaLiveClient::UpdateMultiplexCallable(const UpdateMultiplexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMultiplexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMultiplex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateMultiplexAsyncHelper(MediaLiveClient const * const clientThis, const UpdateMultiplexRequest& request, const UpdateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMultiplex(request), context);
}

void MediaLiveClient::UpdateMultiplexAsync(const UpdateMultiplexRequest& request, const UpdateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateMultiplexAsyncHelper( this, request, handler, context ); } );
}

UpdateMultiplexProgramOutcome MediaLiveClient::UpdateMultiplexProgram(const UpdateMultiplexProgramRequest& request) const
{
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMultiplexProgram", "Required field: MultiplexId, is not set");
    return UpdateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMultiplexProgram", "Required field: ProgramName, is not set");
    return UpdateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/multiplexes/");
  uri.AddPathSegment(request.GetMultiplexId());
  uri.AddPathSegments("/programs/");
  uri.AddPathSegment(request.GetProgramName());
  return UpdateMultiplexProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateMultiplexProgramOutcomeCallable MediaLiveClient::UpdateMultiplexProgramCallable(const UpdateMultiplexProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMultiplexProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMultiplexProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateMultiplexProgramAsyncHelper(MediaLiveClient const * const clientThis, const UpdateMultiplexProgramRequest& request, const UpdateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMultiplexProgram(request), context);
}

void MediaLiveClient::UpdateMultiplexProgramAsync(const UpdateMultiplexProgramRequest& request, const UpdateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateMultiplexProgramAsyncHelper( this, request, handler, context ); } );
}

UpdateReservationOutcome MediaLiveClient::UpdateReservation(const UpdateReservationRequest& request) const
{
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReservation", "Required field: ReservationId, is not set");
    return UpdateReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prod/reservations/");
  uri.AddPathSegment(request.GetReservationId());
  return UpdateReservationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateReservationOutcomeCallable MediaLiveClient::UpdateReservationCallable(const UpdateReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClientUpdateReservationAsyncHelper(MediaLiveClient const * const clientThis, const UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateReservation(request), context);
}

void MediaLiveClient::UpdateReservationAsync(const UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaLiveClientUpdateReservationAsyncHelper( this, request, handler, context ); } );
}

