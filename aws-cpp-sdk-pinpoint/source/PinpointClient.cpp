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

#include <aws/pinpoint/PinpointClient.h>
#include <aws/pinpoint/PinpointEndpoint.h>
#include <aws/pinpoint/PinpointErrorMarshaller.h>
#include <aws/pinpoint/model/CreateAppRequest.h>
#include <aws/pinpoint/model/CreateCampaignRequest.h>
#include <aws/pinpoint/model/CreateExportJobRequest.h>
#include <aws/pinpoint/model/CreateImportJobRequest.h>
#include <aws/pinpoint/model/CreateSegmentRequest.h>
#include <aws/pinpoint/model/DeleteAdmChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/DeleteAppRequest.h>
#include <aws/pinpoint/model/DeleteBaiduChannelRequest.h>
#include <aws/pinpoint/model/DeleteCampaignRequest.h>
#include <aws/pinpoint/model/DeleteEmailChannelRequest.h>
#include <aws/pinpoint/model/DeleteEndpointRequest.h>
#include <aws/pinpoint/model/DeleteEventStreamRequest.h>
#include <aws/pinpoint/model/DeleteGcmChannelRequest.h>
#include <aws/pinpoint/model/DeleteSegmentRequest.h>
#include <aws/pinpoint/model/DeleteSmsChannelRequest.h>
#include <aws/pinpoint/model/DeleteUserEndpointsRequest.h>
#include <aws/pinpoint/model/DeleteVoiceChannelRequest.h>
#include <aws/pinpoint/model/GetAdmChannelRequest.h>
#include <aws/pinpoint/model/GetApnsChannelRequest.h>
#include <aws/pinpoint/model/GetApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/GetApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/GetApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/GetAppRequest.h>
#include <aws/pinpoint/model/GetApplicationSettingsRequest.h>
#include <aws/pinpoint/model/GetAppsRequest.h>
#include <aws/pinpoint/model/GetBaiduChannelRequest.h>
#include <aws/pinpoint/model/GetCampaignRequest.h>
#include <aws/pinpoint/model/GetCampaignActivitiesRequest.h>
#include <aws/pinpoint/model/GetCampaignVersionRequest.h>
#include <aws/pinpoint/model/GetCampaignVersionsRequest.h>
#include <aws/pinpoint/model/GetCampaignsRequest.h>
#include <aws/pinpoint/model/GetChannelsRequest.h>
#include <aws/pinpoint/model/GetEmailChannelRequest.h>
#include <aws/pinpoint/model/GetEndpointRequest.h>
#include <aws/pinpoint/model/GetEventStreamRequest.h>
#include <aws/pinpoint/model/GetExportJobRequest.h>
#include <aws/pinpoint/model/GetExportJobsRequest.h>
#include <aws/pinpoint/model/GetGcmChannelRequest.h>
#include <aws/pinpoint/model/GetImportJobRequest.h>
#include <aws/pinpoint/model/GetImportJobsRequest.h>
#include <aws/pinpoint/model/GetSegmentRequest.h>
#include <aws/pinpoint/model/GetSegmentExportJobsRequest.h>
#include <aws/pinpoint/model/GetSegmentImportJobsRequest.h>
#include <aws/pinpoint/model/GetSegmentVersionRequest.h>
#include <aws/pinpoint/model/GetSegmentVersionsRequest.h>
#include <aws/pinpoint/model/GetSegmentsRequest.h>
#include <aws/pinpoint/model/GetSmsChannelRequest.h>
#include <aws/pinpoint/model/GetUserEndpointsRequest.h>
#include <aws/pinpoint/model/GetVoiceChannelRequest.h>
#include <aws/pinpoint/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint/model/PhoneNumberValidateRequest.h>
#include <aws/pinpoint/model/PutEventStreamRequest.h>
#include <aws/pinpoint/model/PutEventsRequest.h>
#include <aws/pinpoint/model/RemoveAttributesRequest.h>
#include <aws/pinpoint/model/SendMessagesRequest.h>
#include <aws/pinpoint/model/SendUsersMessagesRequest.h>
#include <aws/pinpoint/model/TagResourceRequest.h>
#include <aws/pinpoint/model/UntagResourceRequest.h>
#include <aws/pinpoint/model/UpdateAdmChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/UpdateApplicationSettingsRequest.h>
#include <aws/pinpoint/model/UpdateBaiduChannelRequest.h>
#include <aws/pinpoint/model/UpdateCampaignRequest.h>
#include <aws/pinpoint/model/UpdateEmailChannelRequest.h>
#include <aws/pinpoint/model/UpdateEndpointRequest.h>
#include <aws/pinpoint/model/UpdateEndpointsBatchRequest.h>
#include <aws/pinpoint/model/UpdateGcmChannelRequest.h>
#include <aws/pinpoint/model/UpdateSegmentRequest.h>
#include <aws/pinpoint/model/UpdateSmsChannelRequest.h>
#include <aws/pinpoint/model/UpdateVoiceChannelRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Pinpoint;
using namespace Aws::Pinpoint::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mobiletargeting";
static const char* ALLOCATION_TAG = "PinpointClient";


PinpointClient::PinpointClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointClient::PinpointClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointClient::PinpointClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointClient::~PinpointClient()
{
}

void PinpointClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PinpointEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PinpointClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAppOutcome PinpointClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAppOutcome(CreateAppResult(outcome.GetResult()));
  }
  else
  {
    return CreateAppOutcome(outcome.GetError());
  }
}

CreateAppOutcomeCallable PinpointClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppAsyncHelper( request, handler, context ); } );
}

void PinpointClient::CreateAppAsyncHelper(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApp(request), context);
}

CreateCampaignOutcome PinpointClient::CreateCampaign(const CreateCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCampaign", "Required field: ApplicationId, is not set");
    return CreateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCampaignOutcome(CreateCampaignResult(outcome.GetResult()));
  }
  else
  {
    return CreateCampaignOutcome(outcome.GetError());
  }
}

CreateCampaignOutcomeCallable PinpointClient::CreateCampaignCallable(const CreateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCampaignAsyncHelper( request, handler, context ); } );
}

void PinpointClient::CreateCampaignAsyncHelper(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCampaign(request), context);
}

CreateExportJobOutcome PinpointClient::CreateExportJob(const CreateExportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateExportJob", "Required field: ApplicationId, is not set");
    return CreateExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/jobs/export";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateExportJobOutcome(CreateExportJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateExportJobOutcome(outcome.GetError());
  }
}

CreateExportJobOutcomeCallable PinpointClient::CreateExportJobCallable(const CreateExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateExportJobAsync(const CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateExportJobAsyncHelper( request, handler, context ); } );
}

void PinpointClient::CreateExportJobAsyncHelper(const CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateExportJob(request), context);
}

CreateImportJobOutcome PinpointClient::CreateImportJob(const CreateImportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateImportJob", "Required field: ApplicationId, is not set");
    return CreateImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/jobs/import";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateImportJobOutcome(CreateImportJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateImportJobOutcome(outcome.GetError());
  }
}

CreateImportJobOutcomeCallable PinpointClient::CreateImportJobCallable(const CreateImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateImportJobAsync(const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateImportJobAsyncHelper( request, handler, context ); } );
}

void PinpointClient::CreateImportJobAsyncHelper(const CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateImportJob(request), context);
}

CreateSegmentOutcome PinpointClient::CreateSegment(const CreateSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSegment", "Required field: ApplicationId, is not set");
    return CreateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSegmentOutcome(CreateSegmentResult(outcome.GetResult()));
  }
  else
  {
    return CreateSegmentOutcome(outcome.GetError());
  }
}

CreateSegmentOutcomeCallable PinpointClient::CreateSegmentCallable(const CreateSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::CreateSegmentAsync(const CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSegmentAsyncHelper( request, handler, context ); } );
}

void PinpointClient::CreateSegmentAsyncHelper(const CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSegment(request), context);
}

DeleteAdmChannelOutcome PinpointClient::DeleteAdmChannel(const DeleteAdmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAdmChannel", "Required field: ApplicationId, is not set");
    return DeleteAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/adm";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAdmChannelOutcome(DeleteAdmChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAdmChannelOutcome(outcome.GetError());
  }
}

DeleteAdmChannelOutcomeCallable PinpointClient::DeleteAdmChannelCallable(const DeleteAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteAdmChannelAsync(const DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAdmChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteAdmChannelAsyncHelper(const DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAdmChannel(request), context);
}

DeleteApnsChannelOutcome PinpointClient::DeleteApnsChannel(const DeleteApnsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApnsChannelOutcome(DeleteApnsChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteApnsChannelOutcome(outcome.GetError());
  }
}

DeleteApnsChannelOutcomeCallable PinpointClient::DeleteApnsChannelCallable(const DeleteApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsChannelAsync(const DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApnsChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteApnsChannelAsyncHelper(const DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApnsChannel(request), context);
}

DeleteApnsSandboxChannelOutcome PinpointClient::DeleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_sandbox";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApnsSandboxChannelOutcome(DeleteApnsSandboxChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteApnsSandboxChannelOutcome(outcome.GetError());
  }
}

DeleteApnsSandboxChannelOutcomeCallable PinpointClient::DeleteApnsSandboxChannelCallable(const DeleteApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsSandboxChannelAsync(const DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApnsSandboxChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteApnsSandboxChannelAsyncHelper(const DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApnsSandboxChannel(request), context);
}

DeleteApnsVoipChannelOutcome PinpointClient::DeleteApnsVoipChannel(const DeleteApnsVoipChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_voip";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApnsVoipChannelOutcome(DeleteApnsVoipChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteApnsVoipChannelOutcome(outcome.GetError());
  }
}

DeleteApnsVoipChannelOutcomeCallable PinpointClient::DeleteApnsVoipChannelCallable(const DeleteApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsVoipChannelAsync(const DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApnsVoipChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteApnsVoipChannelAsyncHelper(const DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApnsVoipChannel(request), context);
}

DeleteApnsVoipSandboxChannelOutcome PinpointClient::DeleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_voip_sandbox";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApnsVoipSandboxChannelOutcome(DeleteApnsVoipSandboxChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteApnsVoipSandboxChannelOutcome(outcome.GetError());
  }
}

DeleteApnsVoipSandboxChannelOutcomeCallable PinpointClient::DeleteApnsVoipSandboxChannelCallable(const DeleteApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteApnsVoipSandboxChannelAsync(const DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApnsVoipSandboxChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteApnsVoipSandboxChannelAsyncHelper(const DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApnsVoipSandboxChannel(request), context);
}

DeleteAppOutcome PinpointClient::DeleteApp(const DeleteAppRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: ApplicationId, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAppOutcome(DeleteAppResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAppOutcome(outcome.GetError());
  }
}

DeleteAppOutcomeCallable PinpointClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteAppAsyncHelper(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApp(request), context);
}

DeleteBaiduChannelOutcome PinpointClient::DeleteBaiduChannel(const DeleteBaiduChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBaiduChannel", "Required field: ApplicationId, is not set");
    return DeleteBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/baidu";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBaiduChannelOutcome(DeleteBaiduChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBaiduChannelOutcome(outcome.GetError());
  }
}

DeleteBaiduChannelOutcomeCallable PinpointClient::DeleteBaiduChannelCallable(const DeleteBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteBaiduChannelAsync(const DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBaiduChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteBaiduChannelAsyncHelper(const DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBaiduChannel(request), context);
}

DeleteCampaignOutcome PinpointClient::DeleteCampaign(const DeleteCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: ApplicationId, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: CampaignId, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns/";
  ss << request.GetCampaignId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCampaignOutcome(DeleteCampaignResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCampaignOutcome(outcome.GetError());
  }
}

DeleteCampaignOutcomeCallable PinpointClient::DeleteCampaignCallable(const DeleteCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteCampaignAsync(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCampaignAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteCampaignAsyncHelper(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCampaign(request), context);
}

DeleteEmailChannelOutcome PinpointClient::DeleteEmailChannel(const DeleteEmailChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailChannel", "Required field: ApplicationId, is not set");
    return DeleteEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/email";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEmailChannelOutcome(DeleteEmailChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEmailChannelOutcome(outcome.GetError());
  }
}

DeleteEmailChannelOutcomeCallable PinpointClient::DeleteEmailChannelCallable(const DeleteEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteEmailChannelAsync(const DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEmailChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteEmailChannelAsyncHelper(const DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEmailChannel(request), context);
}

DeleteEndpointOutcome PinpointClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEndpoint", "Required field: ApplicationId, is not set");
    return DeleteEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEndpoint", "Required field: EndpointId, is not set");
    return DeleteEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/endpoints/";
  ss << request.GetEndpointId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEndpointOutcome(DeleteEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEndpointOutcome(outcome.GetError());
  }
}

DeleteEndpointOutcomeCallable PinpointClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEndpointAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteEndpointAsyncHelper(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEndpoint(request), context);
}

DeleteEventStreamOutcome PinpointClient::DeleteEventStream(const DeleteEventStreamRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventStream", "Required field: ApplicationId, is not set");
    return DeleteEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/eventstream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEventStreamOutcome(DeleteEventStreamResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEventStreamOutcome(outcome.GetError());
  }
}

DeleteEventStreamOutcomeCallable PinpointClient::DeleteEventStreamCallable(const DeleteEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteEventStreamAsync(const DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventStreamAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteEventStreamAsyncHelper(const DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventStream(request), context);
}

DeleteGcmChannelOutcome PinpointClient::DeleteGcmChannel(const DeleteGcmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGcmChannel", "Required field: ApplicationId, is not set");
    return DeleteGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/gcm";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGcmChannelOutcome(DeleteGcmChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGcmChannelOutcome(outcome.GetError());
  }
}

DeleteGcmChannelOutcomeCallable PinpointClient::DeleteGcmChannelCallable(const DeleteGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteGcmChannelAsync(const DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGcmChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteGcmChannelAsyncHelper(const DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGcmChannel(request), context);
}

DeleteSegmentOutcome PinpointClient::DeleteSegment(const DeleteSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: ApplicationId, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: SegmentId, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments/";
  ss << request.GetSegmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSegmentOutcome(DeleteSegmentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSegmentOutcome(outcome.GetError());
  }
}

DeleteSegmentOutcomeCallable PinpointClient::DeleteSegmentCallable(const DeleteSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteSegmentAsync(const DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSegmentAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteSegmentAsyncHelper(const DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSegment(request), context);
}

DeleteSmsChannelOutcome PinpointClient::DeleteSmsChannel(const DeleteSmsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSmsChannel", "Required field: ApplicationId, is not set");
    return DeleteSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/sms";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSmsChannelOutcome(DeleteSmsChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSmsChannelOutcome(outcome.GetError());
  }
}

DeleteSmsChannelOutcomeCallable PinpointClient::DeleteSmsChannelCallable(const DeleteSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteSmsChannelAsync(const DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSmsChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteSmsChannelAsyncHelper(const DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSmsChannel(request), context);
}

DeleteUserEndpointsOutcome PinpointClient::DeleteUserEndpoints(const DeleteUserEndpointsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserEndpoints", "Required field: ApplicationId, is not set");
    return DeleteUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserEndpoints", "Required field: UserId, is not set");
    return DeleteUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserEndpointsOutcome(DeleteUserEndpointsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserEndpointsOutcome(outcome.GetError());
  }
}

DeleteUserEndpointsOutcomeCallable PinpointClient::DeleteUserEndpointsCallable(const DeleteUserEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteUserEndpointsAsync(const DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserEndpointsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteUserEndpointsAsyncHelper(const DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserEndpoints(request), context);
}

DeleteVoiceChannelOutcome PinpointClient::DeleteVoiceChannel(const DeleteVoiceChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceChannel", "Required field: ApplicationId, is not set");
    return DeleteVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/voice";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVoiceChannelOutcome(DeleteVoiceChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVoiceChannelOutcome(outcome.GetError());
  }
}

DeleteVoiceChannelOutcomeCallable PinpointClient::DeleteVoiceChannelCallable(const DeleteVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::DeleteVoiceChannelAsync(const DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::DeleteVoiceChannelAsyncHelper(const DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceChannel(request), context);
}

GetAdmChannelOutcome PinpointClient::GetAdmChannel(const GetAdmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAdmChannel", "Required field: ApplicationId, is not set");
    return GetAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/adm";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAdmChannelOutcome(GetAdmChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetAdmChannelOutcome(outcome.GetError());
  }
}

GetAdmChannelOutcomeCallable PinpointClient::GetAdmChannelCallable(const GetAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetAdmChannelAsync(const GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAdmChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetAdmChannelAsyncHelper(const GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAdmChannel(request), context);
}

GetApnsChannelOutcome PinpointClient::GetApnsChannel(const GetApnsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsChannel", "Required field: ApplicationId, is not set");
    return GetApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApnsChannelOutcome(GetApnsChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetApnsChannelOutcome(outcome.GetError());
  }
}

GetApnsChannelOutcomeCallable PinpointClient::GetApnsChannelCallable(const GetApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsChannelAsync(const GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApnsChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetApnsChannelAsyncHelper(const GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApnsChannel(request), context);
}

GetApnsSandboxChannelOutcome PinpointClient::GetApnsSandboxChannel(const GetApnsSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_sandbox";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApnsSandboxChannelOutcome(GetApnsSandboxChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetApnsSandboxChannelOutcome(outcome.GetError());
  }
}

GetApnsSandboxChannelOutcomeCallable PinpointClient::GetApnsSandboxChannelCallable(const GetApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsSandboxChannelAsync(const GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApnsSandboxChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetApnsSandboxChannelAsyncHelper(const GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApnsSandboxChannel(request), context);
}

GetApnsVoipChannelOutcome PinpointClient::GetApnsVoipChannel(const GetApnsVoipChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsVoipChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_voip";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApnsVoipChannelOutcome(GetApnsVoipChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetApnsVoipChannelOutcome(outcome.GetError());
  }
}

GetApnsVoipChannelOutcomeCallable PinpointClient::GetApnsVoipChannelCallable(const GetApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsVoipChannelAsync(const GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApnsVoipChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetApnsVoipChannelAsyncHelper(const GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApnsVoipChannel(request), context);
}

GetApnsVoipSandboxChannelOutcome PinpointClient::GetApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_voip_sandbox";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApnsVoipSandboxChannelOutcome(GetApnsVoipSandboxChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetApnsVoipSandboxChannelOutcome(outcome.GetError());
  }
}

GetApnsVoipSandboxChannelOutcomeCallable PinpointClient::GetApnsVoipSandboxChannelCallable(const GetApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApnsVoipSandboxChannelAsync(const GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApnsVoipSandboxChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetApnsVoipSandboxChannelAsyncHelper(const GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApnsVoipSandboxChannel(request), context);
}

GetAppOutcome PinpointClient::GetApp(const GetAppRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApp", "Required field: ApplicationId, is not set");
    return GetAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAppOutcome(GetAppResult(outcome.GetResult()));
  }
  else
  {
    return GetAppOutcome(outcome.GetError());
  }
}

GetAppOutcomeCallable PinpointClient::GetAppCallable(const GetAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetAppAsync(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetAppAsyncHelper(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApp(request), context);
}

GetApplicationSettingsOutcome PinpointClient::GetApplicationSettings(const GetApplicationSettingsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationSettings", "Required field: ApplicationId, is not set");
    return GetApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApplicationSettingsOutcome(GetApplicationSettingsResult(outcome.GetResult()));
  }
  else
  {
    return GetApplicationSettingsOutcome(outcome.GetError());
  }
}

GetApplicationSettingsOutcomeCallable PinpointClient::GetApplicationSettingsCallable(const GetApplicationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetApplicationSettingsAsync(const GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationSettingsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetApplicationSettingsAsyncHelper(const GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplicationSettings(request), context);
}

GetAppsOutcome PinpointClient::GetApps(const GetAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAppsOutcome(GetAppsResult(outcome.GetResult()));
  }
  else
  {
    return GetAppsOutcome(outcome.GetError());
  }
}

GetAppsOutcomeCallable PinpointClient::GetAppsCallable(const GetAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetAppsAsync(const GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetAppsAsyncHelper(const GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApps(request), context);
}

GetBaiduChannelOutcome PinpointClient::GetBaiduChannel(const GetBaiduChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBaiduChannel", "Required field: ApplicationId, is not set");
    return GetBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/baidu";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBaiduChannelOutcome(GetBaiduChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetBaiduChannelOutcome(outcome.GetError());
  }
}

GetBaiduChannelOutcomeCallable PinpointClient::GetBaiduChannelCallable(const GetBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetBaiduChannelAsync(const GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBaiduChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetBaiduChannelAsyncHelper(const GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBaiduChannel(request), context);
}

GetCampaignOutcome PinpointClient::GetCampaign(const GetCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaign", "Required field: ApplicationId, is not set");
    return GetCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaign", "Required field: CampaignId, is not set");
    return GetCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns/";
  ss << request.GetCampaignId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCampaignOutcome(GetCampaignResult(outcome.GetResult()));
  }
  else
  {
    return GetCampaignOutcome(outcome.GetError());
  }
}

GetCampaignOutcomeCallable PinpointClient::GetCampaignCallable(const GetCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignAsync(const GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCampaignAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetCampaignAsyncHelper(const GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCampaign(request), context);
}

GetCampaignActivitiesOutcome PinpointClient::GetCampaignActivities(const GetCampaignActivitiesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignActivities", "Required field: ApplicationId, is not set");
    return GetCampaignActivitiesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignActivities", "Required field: CampaignId, is not set");
    return GetCampaignActivitiesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns/";
  ss << request.GetCampaignId();
  ss << "/activities";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCampaignActivitiesOutcome(GetCampaignActivitiesResult(outcome.GetResult()));
  }
  else
  {
    return GetCampaignActivitiesOutcome(outcome.GetError());
  }
}

GetCampaignActivitiesOutcomeCallable PinpointClient::GetCampaignActivitiesCallable(const GetCampaignActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignActivitiesAsync(const GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCampaignActivitiesAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetCampaignActivitiesAsyncHelper(const GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCampaignActivities(request), context);
}

GetCampaignVersionOutcome PinpointClient::GetCampaignVersion(const GetCampaignVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: ApplicationId, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: CampaignId, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: Version, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns/";
  ss << request.GetCampaignId();
  ss << "/versions/";
  ss << request.GetVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCampaignVersionOutcome(GetCampaignVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetCampaignVersionOutcome(outcome.GetError());
  }
}

GetCampaignVersionOutcomeCallable PinpointClient::GetCampaignVersionCallable(const GetCampaignVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignVersionAsync(const GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCampaignVersionAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetCampaignVersionAsyncHelper(const GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCampaignVersion(request), context);
}

GetCampaignVersionsOutcome PinpointClient::GetCampaignVersions(const GetCampaignVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersions", "Required field: ApplicationId, is not set");
    return GetCampaignVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaignVersions", "Required field: CampaignId, is not set");
    return GetCampaignVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns/";
  ss << request.GetCampaignId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCampaignVersionsOutcome(GetCampaignVersionsResult(outcome.GetResult()));
  }
  else
  {
    return GetCampaignVersionsOutcome(outcome.GetError());
  }
}

GetCampaignVersionsOutcomeCallable PinpointClient::GetCampaignVersionsCallable(const GetCampaignVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaignVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignVersionsAsync(const GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCampaignVersionsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetCampaignVersionsAsyncHelper(const GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCampaignVersions(request), context);
}

GetCampaignsOutcome PinpointClient::GetCampaigns(const GetCampaignsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCampaigns", "Required field: ApplicationId, is not set");
    return GetCampaignsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCampaignsOutcome(GetCampaignsResult(outcome.GetResult()));
  }
  else
  {
    return GetCampaignsOutcome(outcome.GetError());
  }
}

GetCampaignsOutcomeCallable PinpointClient::GetCampaignsCallable(const GetCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetCampaignsAsync(const GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCampaignsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetCampaignsAsyncHelper(const GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCampaigns(request), context);
}

GetChannelsOutcome PinpointClient::GetChannels(const GetChannelsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannels", "Required field: ApplicationId, is not set");
    return GetChannelsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetChannelsOutcome(GetChannelsResult(outcome.GetResult()));
  }
  else
  {
    return GetChannelsOutcome(outcome.GetError());
  }
}

GetChannelsOutcomeCallable PinpointClient::GetChannelsCallable(const GetChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetChannelsAsync(const GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetChannelsAsyncHelper(const GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannels(request), context);
}

GetEmailChannelOutcome PinpointClient::GetEmailChannel(const GetEmailChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailChannel", "Required field: ApplicationId, is not set");
    return GetEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/email";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEmailChannelOutcome(GetEmailChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetEmailChannelOutcome(outcome.GetError());
  }
}

GetEmailChannelOutcomeCallable PinpointClient::GetEmailChannelCallable(const GetEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetEmailChannelAsync(const GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEmailChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetEmailChannelAsyncHelper(const GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEmailChannel(request), context);
}

GetEndpointOutcome PinpointClient::GetEndpoint(const GetEndpointRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEndpoint", "Required field: ApplicationId, is not set");
    return GetEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEndpoint", "Required field: EndpointId, is not set");
    return GetEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/endpoints/";
  ss << request.GetEndpointId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEndpointOutcome(GetEndpointResult(outcome.GetResult()));
  }
  else
  {
    return GetEndpointOutcome(outcome.GetError());
  }
}

GetEndpointOutcomeCallable PinpointClient::GetEndpointCallable(const GetEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetEndpointAsync(const GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEndpointAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetEndpointAsyncHelper(const GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEndpoint(request), context);
}

GetEventStreamOutcome PinpointClient::GetEventStream(const GetEventStreamRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventStream", "Required field: ApplicationId, is not set");
    return GetEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/eventstream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEventStreamOutcome(GetEventStreamResult(outcome.GetResult()));
  }
  else
  {
    return GetEventStreamOutcome(outcome.GetError());
  }
}

GetEventStreamOutcomeCallable PinpointClient::GetEventStreamCallable(const GetEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetEventStreamAsync(const GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEventStreamAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetEventStreamAsyncHelper(const GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventStream(request), context);
}

GetExportJobOutcome PinpointClient::GetExportJob(const GetExportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExportJob", "Required field: ApplicationId, is not set");
    return GetExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExportJob", "Required field: JobId, is not set");
    return GetExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/jobs/export/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetExportJobOutcome(GetExportJobResult(outcome.GetResult()));
  }
  else
  {
    return GetExportJobOutcome(outcome.GetError());
  }
}

GetExportJobOutcomeCallable PinpointClient::GetExportJobCallable(const GetExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetExportJobAsync(const GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExportJobAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetExportJobAsyncHelper(const GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExportJob(request), context);
}

GetExportJobsOutcome PinpointClient::GetExportJobs(const GetExportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExportJobs", "Required field: ApplicationId, is not set");
    return GetExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/jobs/export";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetExportJobsOutcome(GetExportJobsResult(outcome.GetResult()));
  }
  else
  {
    return GetExportJobsOutcome(outcome.GetError());
  }
}

GetExportJobsOutcomeCallable PinpointClient::GetExportJobsCallable(const GetExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetExportJobsAsync(const GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExportJobsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetExportJobsAsyncHelper(const GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExportJobs(request), context);
}

GetGcmChannelOutcome PinpointClient::GetGcmChannel(const GetGcmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGcmChannel", "Required field: ApplicationId, is not set");
    return GetGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/gcm";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGcmChannelOutcome(GetGcmChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetGcmChannelOutcome(outcome.GetError());
  }
}

GetGcmChannelOutcomeCallable PinpointClient::GetGcmChannelCallable(const GetGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetGcmChannelAsync(const GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGcmChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetGcmChannelAsyncHelper(const GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGcmChannel(request), context);
}

GetImportJobOutcome PinpointClient::GetImportJob(const GetImportJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: ApplicationId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: JobId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/jobs/import/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetImportJobOutcome(GetImportJobResult(outcome.GetResult()));
  }
  else
  {
    return GetImportJobOutcome(outcome.GetError());
  }
}

GetImportJobOutcomeCallable PinpointClient::GetImportJobCallable(const GetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetImportJobAsync(const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetImportJobAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetImportJobAsyncHelper(const GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetImportJob(request), context);
}

GetImportJobsOutcome PinpointClient::GetImportJobs(const GetImportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJobs", "Required field: ApplicationId, is not set");
    return GetImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/jobs/import";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetImportJobsOutcome(GetImportJobsResult(outcome.GetResult()));
  }
  else
  {
    return GetImportJobsOutcome(outcome.GetError());
  }
}

GetImportJobsOutcomeCallable PinpointClient::GetImportJobsCallable(const GetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetImportJobsAsync(const GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetImportJobsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetImportJobsAsyncHelper(const GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetImportJobs(request), context);
}

GetSegmentOutcome PinpointClient::GetSegment(const GetSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: ApplicationId, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: SegmentId, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments/";
  ss << request.GetSegmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSegmentOutcome(GetSegmentResult(outcome.GetResult()));
  }
  else
  {
    return GetSegmentOutcome(outcome.GetError());
  }
}

GetSegmentOutcomeCallable PinpointClient::GetSegmentCallable(const GetSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentAsync(const GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSegmentAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetSegmentAsyncHelper(const GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSegment(request), context);
}

GetSegmentExportJobsOutcome PinpointClient::GetSegmentExportJobs(const GetSegmentExportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentExportJobs", "Required field: ApplicationId, is not set");
    return GetSegmentExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentExportJobs", "Required field: SegmentId, is not set");
    return GetSegmentExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments/";
  ss << request.GetSegmentId();
  ss << "/jobs/export";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSegmentExportJobsOutcome(GetSegmentExportJobsResult(outcome.GetResult()));
  }
  else
  {
    return GetSegmentExportJobsOutcome(outcome.GetError());
  }
}

GetSegmentExportJobsOutcomeCallable PinpointClient::GetSegmentExportJobsCallable(const GetSegmentExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentExportJobsAsync(const GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSegmentExportJobsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetSegmentExportJobsAsyncHelper(const GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSegmentExportJobs(request), context);
}

GetSegmentImportJobsOutcome PinpointClient::GetSegmentImportJobs(const GetSegmentImportJobsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentImportJobs", "Required field: ApplicationId, is not set");
    return GetSegmentImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentImportJobs", "Required field: SegmentId, is not set");
    return GetSegmentImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments/";
  ss << request.GetSegmentId();
  ss << "/jobs/import";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSegmentImportJobsOutcome(GetSegmentImportJobsResult(outcome.GetResult()));
  }
  else
  {
    return GetSegmentImportJobsOutcome(outcome.GetError());
  }
}

GetSegmentImportJobsOutcomeCallable PinpointClient::GetSegmentImportJobsCallable(const GetSegmentImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentImportJobsAsync(const GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSegmentImportJobsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetSegmentImportJobsAsyncHelper(const GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSegmentImportJobs(request), context);
}

GetSegmentVersionOutcome PinpointClient::GetSegmentVersion(const GetSegmentVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: ApplicationId, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: SegmentId, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  if (!request.VersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: Version, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Version]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments/";
  ss << request.GetSegmentId();
  ss << "/versions/";
  ss << request.GetVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSegmentVersionOutcome(GetSegmentVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetSegmentVersionOutcome(outcome.GetError());
  }
}

GetSegmentVersionOutcomeCallable PinpointClient::GetSegmentVersionCallable(const GetSegmentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentVersionAsync(const GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSegmentVersionAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetSegmentVersionAsyncHelper(const GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSegmentVersion(request), context);
}

GetSegmentVersionsOutcome PinpointClient::GetSegmentVersions(const GetSegmentVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersions", "Required field: ApplicationId, is not set");
    return GetSegmentVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegmentVersions", "Required field: SegmentId, is not set");
    return GetSegmentVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments/";
  ss << request.GetSegmentId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSegmentVersionsOutcome(GetSegmentVersionsResult(outcome.GetResult()));
  }
  else
  {
    return GetSegmentVersionsOutcome(outcome.GetError());
  }
}

GetSegmentVersionsOutcomeCallable PinpointClient::GetSegmentVersionsCallable(const GetSegmentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegmentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentVersionsAsync(const GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSegmentVersionsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetSegmentVersionsAsyncHelper(const GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSegmentVersions(request), context);
}

GetSegmentsOutcome PinpointClient::GetSegments(const GetSegmentsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegments", "Required field: ApplicationId, is not set");
    return GetSegmentsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSegmentsOutcome(GetSegmentsResult(outcome.GetResult()));
  }
  else
  {
    return GetSegmentsOutcome(outcome.GetError());
  }
}

GetSegmentsOutcomeCallable PinpointClient::GetSegmentsCallable(const GetSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSegmentsAsync(const GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSegmentsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetSegmentsAsyncHelper(const GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSegments(request), context);
}

GetSmsChannelOutcome PinpointClient::GetSmsChannel(const GetSmsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSmsChannel", "Required field: ApplicationId, is not set");
    return GetSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/sms";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSmsChannelOutcome(GetSmsChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetSmsChannelOutcome(outcome.GetError());
  }
}

GetSmsChannelOutcomeCallable PinpointClient::GetSmsChannelCallable(const GetSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetSmsChannelAsync(const GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSmsChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetSmsChannelAsyncHelper(const GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSmsChannel(request), context);
}

GetUserEndpointsOutcome PinpointClient::GetUserEndpoints(const GetUserEndpointsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserEndpoints", "Required field: ApplicationId, is not set");
    return GetUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserEndpoints", "Required field: UserId, is not set");
    return GetUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserEndpointsOutcome(GetUserEndpointsResult(outcome.GetResult()));
  }
  else
  {
    return GetUserEndpointsOutcome(outcome.GetError());
  }
}

GetUserEndpointsOutcomeCallable PinpointClient::GetUserEndpointsCallable(const GetUserEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetUserEndpointsAsync(const GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserEndpointsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetUserEndpointsAsyncHelper(const GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserEndpoints(request), context);
}

GetVoiceChannelOutcome PinpointClient::GetVoiceChannel(const GetVoiceChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceChannel", "Required field: ApplicationId, is not set");
    return GetVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/voice";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceChannelOutcome(GetVoiceChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceChannelOutcome(outcome.GetError());
  }
}

GetVoiceChannelOutcomeCallable PinpointClient::GetVoiceChannelCallable(const GetVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::GetVoiceChannelAsync(const GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::GetVoiceChannelAsyncHelper(const GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceChannel(request), context);
}

ListTagsForResourceOutcome PinpointClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable PinpointClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void PinpointClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PhoneNumberValidateOutcome PinpointClient::PhoneNumberValidate(const PhoneNumberValidateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/phone/number/validate";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PhoneNumberValidateOutcome(PhoneNumberValidateResult(outcome.GetResult()));
  }
  else
  {
    return PhoneNumberValidateOutcome(outcome.GetError());
  }
}

PhoneNumberValidateOutcomeCallable PinpointClient::PhoneNumberValidateCallable(const PhoneNumberValidateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PhoneNumberValidateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PhoneNumberValidate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::PhoneNumberValidateAsync(const PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PhoneNumberValidateAsyncHelper( request, handler, context ); } );
}

void PinpointClient::PhoneNumberValidateAsyncHelper(const PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PhoneNumberValidate(request), context);
}

PutEventStreamOutcome PinpointClient::PutEventStream(const PutEventStreamRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEventStream", "Required field: ApplicationId, is not set");
    return PutEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/eventstream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEventStreamOutcome(PutEventStreamResult(outcome.GetResult()));
  }
  else
  {
    return PutEventStreamOutcome(outcome.GetError());
  }
}

PutEventStreamOutcomeCallable PinpointClient::PutEventStreamCallable(const PutEventStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::PutEventStreamAsync(const PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEventStreamAsyncHelper( request, handler, context ); } );
}

void PinpointClient::PutEventStreamAsyncHelper(const PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEventStream(request), context);
}

PutEventsOutcome PinpointClient::PutEvents(const PutEventsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEvents", "Required field: ApplicationId, is not set");
    return PutEventsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/events";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEventsOutcome(PutEventsResult(outcome.GetResult()));
  }
  else
  {
    return PutEventsOutcome(outcome.GetError());
  }
}

PutEventsOutcomeCallable PinpointClient::PutEventsCallable(const PutEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEventsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::PutEventsAsyncHelper(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEvents(request), context);
}

RemoveAttributesOutcome PinpointClient::RemoveAttributes(const RemoveAttributesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAttributes", "Required field: ApplicationId, is not set");
    return RemoveAttributesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.AttributeTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAttributes", "Required field: AttributeType, is not set");
    return RemoveAttributesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/attributes/";
  ss << request.GetAttributeType();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveAttributesOutcome(RemoveAttributesResult(outcome.GetResult()));
  }
  else
  {
    return RemoveAttributesOutcome(outcome.GetError());
  }
}

RemoveAttributesOutcomeCallable PinpointClient::RemoveAttributesCallable(const RemoveAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::RemoveAttributesAsync(const RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveAttributesAsyncHelper( request, handler, context ); } );
}

void PinpointClient::RemoveAttributesAsyncHelper(const RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveAttributes(request), context);
}

SendMessagesOutcome PinpointClient::SendMessages(const SendMessagesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendMessages", "Required field: ApplicationId, is not set");
    return SendMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/messages";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendMessagesOutcome(SendMessagesResult(outcome.GetResult()));
  }
  else
  {
    return SendMessagesOutcome(outcome.GetError());
  }
}

SendMessagesOutcomeCallable PinpointClient::SendMessagesCallable(const SendMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::SendMessagesAsync(const SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendMessagesAsyncHelper( request, handler, context ); } );
}

void PinpointClient::SendMessagesAsyncHelper(const SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendMessages(request), context);
}

SendUsersMessagesOutcome PinpointClient::SendUsersMessages(const SendUsersMessagesRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendUsersMessages", "Required field: ApplicationId, is not set");
    return SendUsersMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/users-messages";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendUsersMessagesOutcome(SendUsersMessagesResult(outcome.GetResult()));
  }
  else
  {
    return SendUsersMessagesOutcome(outcome.GetError());
  }
}

SendUsersMessagesOutcomeCallable PinpointClient::SendUsersMessagesCallable(const SendUsersMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendUsersMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendUsersMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::SendUsersMessagesAsync(const SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendUsersMessagesAsyncHelper( request, handler, context ); } );
}

void PinpointClient::SendUsersMessagesAsyncHelper(const SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendUsersMessages(request), context);
}

TagResourceOutcome PinpointClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable PinpointClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void PinpointClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome PinpointClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable PinpointClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAdmChannelOutcome PinpointClient::UpdateAdmChannel(const UpdateAdmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAdmChannel", "Required field: ApplicationId, is not set");
    return UpdateAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/adm";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAdmChannelOutcome(UpdateAdmChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAdmChannelOutcome(outcome.GetError());
  }
}

UpdateAdmChannelOutcomeCallable PinpointClient::UpdateAdmChannelCallable(const UpdateAdmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAdmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAdmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateAdmChannelAsync(const UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAdmChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateAdmChannelAsyncHelper(const UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAdmChannel(request), context);
}

UpdateApnsChannelOutcome PinpointClient::UpdateApnsChannel(const UpdateApnsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApnsChannelOutcome(UpdateApnsChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApnsChannelOutcome(outcome.GetError());
  }
}

UpdateApnsChannelOutcomeCallable PinpointClient::UpdateApnsChannelCallable(const UpdateApnsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsChannelAsync(const UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApnsChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateApnsChannelAsyncHelper(const UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApnsChannel(request), context);
}

UpdateApnsSandboxChannelOutcome PinpointClient::UpdateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_sandbox";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApnsSandboxChannelOutcome(UpdateApnsSandboxChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApnsSandboxChannelOutcome(outcome.GetError());
  }
}

UpdateApnsSandboxChannelOutcomeCallable PinpointClient::UpdateApnsSandboxChannelCallable(const UpdateApnsSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsSandboxChannelAsync(const UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApnsSandboxChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateApnsSandboxChannelAsyncHelper(const UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApnsSandboxChannel(request), context);
}

UpdateApnsVoipChannelOutcome PinpointClient::UpdateApnsVoipChannel(const UpdateApnsVoipChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_voip";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApnsVoipChannelOutcome(UpdateApnsVoipChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApnsVoipChannelOutcome(outcome.GetError());
  }
}

UpdateApnsVoipChannelOutcomeCallable PinpointClient::UpdateApnsVoipChannelCallable(const UpdateApnsVoipChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsVoipChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsVoipChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsVoipChannelAsync(const UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApnsVoipChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateApnsVoipChannelAsyncHelper(const UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApnsVoipChannel(request), context);
}

UpdateApnsVoipSandboxChannelOutcome PinpointClient::UpdateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/apns_voip_sandbox";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApnsVoipSandboxChannelOutcome(UpdateApnsVoipSandboxChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApnsVoipSandboxChannelOutcome(outcome.GetError());
  }
}

UpdateApnsVoipSandboxChannelOutcomeCallable PinpointClient::UpdateApnsVoipSandboxChannelCallable(const UpdateApnsVoipSandboxChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApnsVoipSandboxChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApnsVoipSandboxChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApnsVoipSandboxChannelAsync(const UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApnsVoipSandboxChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateApnsVoipSandboxChannelAsyncHelper(const UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApnsVoipSandboxChannel(request), context);
}

UpdateApplicationSettingsOutcome PinpointClient::UpdateApplicationSettings(const UpdateApplicationSettingsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplicationSettings", "Required field: ApplicationId, is not set");
    return UpdateApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApplicationSettingsOutcome(UpdateApplicationSettingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApplicationSettingsOutcome(outcome.GetError());
  }
}

UpdateApplicationSettingsOutcomeCallable PinpointClient::UpdateApplicationSettingsCallable(const UpdateApplicationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateApplicationSettingsAsync(const UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationSettingsAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateApplicationSettingsAsyncHelper(const UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplicationSettings(request), context);
}

UpdateBaiduChannelOutcome PinpointClient::UpdateBaiduChannel(const UpdateBaiduChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBaiduChannel", "Required field: ApplicationId, is not set");
    return UpdateBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/baidu";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBaiduChannelOutcome(UpdateBaiduChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBaiduChannelOutcome(outcome.GetError());
  }
}

UpdateBaiduChannelOutcomeCallable PinpointClient::UpdateBaiduChannelCallable(const UpdateBaiduChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBaiduChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBaiduChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateBaiduChannelAsync(const UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBaiduChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateBaiduChannelAsyncHelper(const UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBaiduChannel(request), context);
}

UpdateCampaignOutcome PinpointClient::UpdateCampaign(const UpdateCampaignRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCampaign", "Required field: ApplicationId, is not set");
    return UpdateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCampaign", "Required field: CampaignId, is not set");
    return UpdateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/campaigns/";
  ss << request.GetCampaignId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCampaignOutcome(UpdateCampaignResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCampaignOutcome(outcome.GetError());
  }
}

UpdateCampaignOutcomeCallable PinpointClient::UpdateCampaignCallable(const UpdateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateCampaignAsync(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCampaignAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateCampaignAsyncHelper(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCampaign(request), context);
}

UpdateEmailChannelOutcome PinpointClient::UpdateEmailChannel(const UpdateEmailChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEmailChannel", "Required field: ApplicationId, is not set");
    return UpdateEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/email";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEmailChannelOutcome(UpdateEmailChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEmailChannelOutcome(outcome.GetError());
  }
}

UpdateEmailChannelOutcomeCallable PinpointClient::UpdateEmailChannelCallable(const UpdateEmailChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmailChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmailChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateEmailChannelAsync(const UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEmailChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateEmailChannelAsyncHelper(const UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEmailChannel(request), context);
}

UpdateEndpointOutcome PinpointClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEndpoint", "Required field: ApplicationId, is not set");
    return UpdateEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEndpoint", "Required field: EndpointId, is not set");
    return UpdateEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/endpoints/";
  ss << request.GetEndpointId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEndpointOutcome(UpdateEndpointResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEndpointOutcome(outcome.GetError());
  }
}

UpdateEndpointOutcomeCallable PinpointClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEndpointAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateEndpointAsyncHelper(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEndpoint(request), context);
}

UpdateEndpointsBatchOutcome PinpointClient::UpdateEndpointsBatch(const UpdateEndpointsBatchRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEndpointsBatch", "Required field: ApplicationId, is not set");
    return UpdateEndpointsBatchOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/endpoints";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEndpointsBatchOutcome(UpdateEndpointsBatchResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEndpointsBatchOutcome(outcome.GetError());
  }
}

UpdateEndpointsBatchOutcomeCallable PinpointClient::UpdateEndpointsBatchCallable(const UpdateEndpointsBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointsBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointsBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateEndpointsBatchAsync(const UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEndpointsBatchAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateEndpointsBatchAsyncHelper(const UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEndpointsBatch(request), context);
}

UpdateGcmChannelOutcome PinpointClient::UpdateGcmChannel(const UpdateGcmChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGcmChannel", "Required field: ApplicationId, is not set");
    return UpdateGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/gcm";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGcmChannelOutcome(UpdateGcmChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGcmChannelOutcome(outcome.GetError());
  }
}

UpdateGcmChannelOutcomeCallable PinpointClient::UpdateGcmChannelCallable(const UpdateGcmChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGcmChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGcmChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateGcmChannelAsync(const UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGcmChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateGcmChannelAsyncHelper(const UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGcmChannel(request), context);
}

UpdateSegmentOutcome PinpointClient::UpdateSegment(const UpdateSegmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSegment", "Required field: ApplicationId, is not set");
    return UpdateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSegment", "Required field: SegmentId, is not set");
    return UpdateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SegmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/segments/";
  ss << request.GetSegmentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSegmentOutcome(UpdateSegmentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSegmentOutcome(outcome.GetError());
  }
}

UpdateSegmentOutcomeCallable PinpointClient::UpdateSegmentCallable(const UpdateSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateSegmentAsync(const UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSegmentAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateSegmentAsyncHelper(const UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSegment(request), context);
}

UpdateSmsChannelOutcome PinpointClient::UpdateSmsChannel(const UpdateSmsChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSmsChannel", "Required field: ApplicationId, is not set");
    return UpdateSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/sms";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSmsChannelOutcome(UpdateSmsChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSmsChannelOutcome(outcome.GetError());
  }
}

UpdateSmsChannelOutcomeCallable PinpointClient::UpdateSmsChannelCallable(const UpdateSmsChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSmsChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSmsChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateSmsChannelAsync(const UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSmsChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateSmsChannelAsyncHelper(const UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSmsChannel(request), context);
}

UpdateVoiceChannelOutcome PinpointClient::UpdateVoiceChannel(const UpdateVoiceChannelRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceChannel", "Required field: ApplicationId, is not set");
    return UpdateVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/apps/";
  ss << request.GetApplicationId();
  ss << "/channels/voice";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVoiceChannelOutcome(UpdateVoiceChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVoiceChannelOutcome(outcome.GetError());
  }
}

UpdateVoiceChannelOutcomeCallable PinpointClient::UpdateVoiceChannelCallable(const UpdateVoiceChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointClient::UpdateVoiceChannelAsync(const UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVoiceChannelAsyncHelper( request, handler, context ); } );
}

void PinpointClient::UpdateVoiceChannelAsyncHelper(const UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVoiceChannel(request), context);
}

