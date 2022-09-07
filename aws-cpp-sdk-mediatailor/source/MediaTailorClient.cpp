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

#include <aws/mediatailor/MediaTailorClient.h>
#include <aws/mediatailor/MediaTailorEndpoint.h>
#include <aws/mediatailor/MediaTailorErrorMarshaller.h>
#include <aws/mediatailor/model/ConfigureLogsForPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/CreateChannelRequest.h>
#include <aws/mediatailor/model/CreateLiveSourceRequest.h>
#include <aws/mediatailor/model/CreatePrefetchScheduleRequest.h>
#include <aws/mediatailor/model/CreateProgramRequest.h>
#include <aws/mediatailor/model/CreateSourceLocationRequest.h>
#include <aws/mediatailor/model/CreateVodSourceRequest.h>
#include <aws/mediatailor/model/DeleteChannelRequest.h>
#include <aws/mediatailor/model/DeleteChannelPolicyRequest.h>
#include <aws/mediatailor/model/DeleteLiveSourceRequest.h>
#include <aws/mediatailor/model/DeletePlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/DeletePrefetchScheduleRequest.h>
#include <aws/mediatailor/model/DeleteProgramRequest.h>
#include <aws/mediatailor/model/DeleteSourceLocationRequest.h>
#include <aws/mediatailor/model/DeleteVodSourceRequest.h>
#include <aws/mediatailor/model/DescribeChannelRequest.h>
#include <aws/mediatailor/model/DescribeLiveSourceRequest.h>
#include <aws/mediatailor/model/DescribeProgramRequest.h>
#include <aws/mediatailor/model/DescribeSourceLocationRequest.h>
#include <aws/mediatailor/model/DescribeVodSourceRequest.h>
#include <aws/mediatailor/model/GetChannelPolicyRequest.h>
#include <aws/mediatailor/model/GetChannelScheduleRequest.h>
#include <aws/mediatailor/model/GetPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/GetPrefetchScheduleRequest.h>
#include <aws/mediatailor/model/ListAlertsRequest.h>
#include <aws/mediatailor/model/ListChannelsRequest.h>
#include <aws/mediatailor/model/ListLiveSourcesRequest.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsRequest.h>
#include <aws/mediatailor/model/ListPrefetchSchedulesRequest.h>
#include <aws/mediatailor/model/ListSourceLocationsRequest.h>
#include <aws/mediatailor/model/ListTagsForResourceRequest.h>
#include <aws/mediatailor/model/ListVodSourcesRequest.h>
#include <aws/mediatailor/model/PutChannelPolicyRequest.h>
#include <aws/mediatailor/model/PutPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/StartChannelRequest.h>
#include <aws/mediatailor/model/StopChannelRequest.h>
#include <aws/mediatailor/model/TagResourceRequest.h>
#include <aws/mediatailor/model/UntagResourceRequest.h>
#include <aws/mediatailor/model/UpdateChannelRequest.h>
#include <aws/mediatailor/model/UpdateLiveSourceRequest.h>
#include <aws/mediatailor/model/UpdateSourceLocationRequest.h>
#include <aws/mediatailor/model/UpdateVodSourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaTailor;
using namespace Aws::MediaTailor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediatailor";
static const char* ALLOCATION_TAG = "MediaTailorClient";

MediaTailorClient::MediaTailorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::~MediaTailorClient()
{
}

void MediaTailorClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaTailor");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaTailorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaTailorClient::OverrideEndpoint(const Aws::String& endpoint)
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

ConfigureLogsForPlaybackConfigurationOutcome MediaTailorClient::ConfigureLogsForPlaybackConfiguration(const ConfigureLogsForPlaybackConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/configureLogs/playbackConfiguration");
  return ConfigureLogsForPlaybackConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ConfigureLogsForPlaybackConfigurationOutcomeCallable MediaTailorClient::ConfigureLogsForPlaybackConfigurationCallable(const ConfigureLogsForPlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureLogsForPlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureLogsForPlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientConfigureLogsForPlaybackConfigurationAsyncHelper(MediaTailorClient const * const clientThis, const ConfigureLogsForPlaybackConfigurationRequest& request, const ConfigureLogsForPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ConfigureLogsForPlaybackConfiguration(request), context);
}

void MediaTailorClient::ConfigureLogsForPlaybackConfigurationAsync(const ConfigureLogsForPlaybackConfigurationRequest& request, const ConfigureLogsForPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientConfigureLogsForPlaybackConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateChannelOutcome MediaTailorClient::CreateChannel(const CreateChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable MediaTailorClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientCreateChannelAsyncHelper(MediaTailorClient const * const clientThis, const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateChannel(request), context);
}

void MediaTailorClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientCreateChannelAsyncHelper( this, request, handler, context ); } );
}

CreateLiveSourceOutcome MediaTailorClient::CreateLiveSource(const CreateLiveSourceRequest& request) const
{
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLiveSource", "Required field: LiveSourceName, is not set");
    return CreateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLiveSource", "Required field: SourceLocationName, is not set");
    return CreateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/liveSource/");
  uri.AddPathSegment(request.GetLiveSourceName());
  return CreateLiveSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLiveSourceOutcomeCallable MediaTailorClient::CreateLiveSourceCallable(const CreateLiveSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLiveSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLiveSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientCreateLiveSourceAsyncHelper(MediaTailorClient const * const clientThis, const CreateLiveSourceRequest& request, const CreateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLiveSource(request), context);
}

void MediaTailorClient::CreateLiveSourceAsync(const CreateLiveSourceRequest& request, const CreateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientCreateLiveSourceAsyncHelper( this, request, handler, context ); } );
}

CreatePrefetchScheduleOutcome MediaTailorClient::CreatePrefetchSchedule(const CreatePrefetchScheduleRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePrefetchSchedule", "Required field: Name, is not set");
    return CreatePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return CreatePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prefetchSchedule/");
  uri.AddPathSegment(request.GetPlaybackConfigurationName());
  uri.AddPathSegment(request.GetName());
  return CreatePrefetchScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePrefetchScheduleOutcomeCallable MediaTailorClient::CreatePrefetchScheduleCallable(const CreatePrefetchScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePrefetchScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePrefetchSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientCreatePrefetchScheduleAsyncHelper(MediaTailorClient const * const clientThis, const CreatePrefetchScheduleRequest& request, const CreatePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePrefetchSchedule(request), context);
}

void MediaTailorClient::CreatePrefetchScheduleAsync(const CreatePrefetchScheduleRequest& request, const CreatePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientCreatePrefetchScheduleAsyncHelper( this, request, handler, context ); } );
}

CreateProgramOutcome MediaTailorClient::CreateProgram(const CreateProgramRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProgram", "Required field: ChannelName, is not set");
    return CreateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProgram", "Required field: ProgramName, is not set");
    return CreateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/program/");
  uri.AddPathSegment(request.GetProgramName());
  return CreateProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProgramOutcomeCallable MediaTailorClient::CreateProgramCallable(const CreateProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientCreateProgramAsyncHelper(MediaTailorClient const * const clientThis, const CreateProgramRequest& request, const CreateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProgram(request), context);
}

void MediaTailorClient::CreateProgramAsync(const CreateProgramRequest& request, const CreateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientCreateProgramAsyncHelper( this, request, handler, context ); } );
}

CreateSourceLocationOutcome MediaTailorClient::CreateSourceLocation(const CreateSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceLocation", "Required field: SourceLocationName, is not set");
    return CreateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  return CreateSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSourceLocationOutcomeCallable MediaTailorClient::CreateSourceLocationCallable(const CreateSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientCreateSourceLocationAsyncHelper(MediaTailorClient const * const clientThis, const CreateSourceLocationRequest& request, const CreateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSourceLocation(request), context);
}

void MediaTailorClient::CreateSourceLocationAsync(const CreateSourceLocationRequest& request, const CreateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientCreateSourceLocationAsyncHelper( this, request, handler, context ); } );
}

CreateVodSourceOutcome MediaTailorClient::CreateVodSource(const CreateVodSourceRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVodSource", "Required field: SourceLocationName, is not set");
    return CreateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVodSource", "Required field: VodSourceName, is not set");
    return CreateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/vodSource/");
  uri.AddPathSegment(request.GetVodSourceName());
  return CreateVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVodSourceOutcomeCallable MediaTailorClient::CreateVodSourceCallable(const CreateVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientCreateVodSourceAsyncHelper(MediaTailorClient const * const clientThis, const CreateVodSourceRequest& request, const CreateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVodSource(request), context);
}

void MediaTailorClient::CreateVodSourceAsync(const CreateVodSourceRequest& request, const CreateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientCreateVodSourceAsyncHelper( this, request, handler, context ); } );
}

DeleteChannelOutcome MediaTailorClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable MediaTailorClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeleteChannelAsyncHelper(MediaTailorClient const * const clientThis, const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteChannel(request), context);
}

void MediaTailorClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeleteChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteChannelPolicyOutcome MediaTailorClient::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/policy");
  return DeleteChannelPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelPolicyOutcomeCallable MediaTailorClient::DeleteChannelPolicyCallable(const DeleteChannelPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeleteChannelPolicyAsyncHelper(MediaTailorClient const * const clientThis, const DeleteChannelPolicyRequest& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteChannelPolicy(request), context);
}

void MediaTailorClient::DeleteChannelPolicyAsync(const DeleteChannelPolicyRequest& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeleteChannelPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteLiveSourceOutcome MediaTailorClient::DeleteLiveSource(const DeleteLiveSourceRequest& request) const
{
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLiveSource", "Required field: LiveSourceName, is not set");
    return DeleteLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLiveSource", "Required field: SourceLocationName, is not set");
    return DeleteLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/liveSource/");
  uri.AddPathSegment(request.GetLiveSourceName());
  return DeleteLiveSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLiveSourceOutcomeCallable MediaTailorClient::DeleteLiveSourceCallable(const DeleteLiveSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLiveSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLiveSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeleteLiveSourceAsyncHelper(MediaTailorClient const * const clientThis, const DeleteLiveSourceRequest& request, const DeleteLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLiveSource(request), context);
}

void MediaTailorClient::DeleteLiveSourceAsync(const DeleteLiveSourceRequest& request, const DeleteLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeleteLiveSourceAsyncHelper( this, request, handler, context ); } );
}

DeletePlaybackConfigurationOutcome MediaTailorClient::DeletePlaybackConfiguration(const DeletePlaybackConfigurationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlaybackConfiguration", "Required field: Name, is not set");
    return DeletePlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/playbackConfiguration/");
  uri.AddPathSegment(request.GetName());
  return DeletePlaybackConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePlaybackConfigurationOutcomeCallable MediaTailorClient::DeletePlaybackConfigurationCallable(const DeletePlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeletePlaybackConfigurationAsyncHelper(MediaTailorClient const * const clientThis, const DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePlaybackConfiguration(request), context);
}

void MediaTailorClient::DeletePlaybackConfigurationAsync(const DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeletePlaybackConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeletePrefetchScheduleOutcome MediaTailorClient::DeletePrefetchSchedule(const DeletePrefetchScheduleRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePrefetchSchedule", "Required field: Name, is not set");
    return DeletePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return DeletePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prefetchSchedule/");
  uri.AddPathSegment(request.GetPlaybackConfigurationName());
  uri.AddPathSegment(request.GetName());
  return DeletePrefetchScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePrefetchScheduleOutcomeCallable MediaTailorClient::DeletePrefetchScheduleCallable(const DeletePrefetchScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePrefetchScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePrefetchSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeletePrefetchScheduleAsyncHelper(MediaTailorClient const * const clientThis, const DeletePrefetchScheduleRequest& request, const DeletePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePrefetchSchedule(request), context);
}

void MediaTailorClient::DeletePrefetchScheduleAsync(const DeletePrefetchScheduleRequest& request, const DeletePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeletePrefetchScheduleAsyncHelper( this, request, handler, context ); } );
}

DeleteProgramOutcome MediaTailorClient::DeleteProgram(const DeleteProgramRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProgram", "Required field: ChannelName, is not set");
    return DeleteProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProgram", "Required field: ProgramName, is not set");
    return DeleteProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/program/");
  uri.AddPathSegment(request.GetProgramName());
  return DeleteProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProgramOutcomeCallable MediaTailorClient::DeleteProgramCallable(const DeleteProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeleteProgramAsyncHelper(MediaTailorClient const * const clientThis, const DeleteProgramRequest& request, const DeleteProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProgram(request), context);
}

void MediaTailorClient::DeleteProgramAsync(const DeleteProgramRequest& request, const DeleteProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeleteProgramAsyncHelper( this, request, handler, context ); } );
}

DeleteSourceLocationOutcome MediaTailorClient::DeleteSourceLocation(const DeleteSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSourceLocation", "Required field: SourceLocationName, is not set");
    return DeleteSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  return DeleteSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceLocationOutcomeCallable MediaTailorClient::DeleteSourceLocationCallable(const DeleteSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeleteSourceLocationAsyncHelper(MediaTailorClient const * const clientThis, const DeleteSourceLocationRequest& request, const DeleteSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSourceLocation(request), context);
}

void MediaTailorClient::DeleteSourceLocationAsync(const DeleteSourceLocationRequest& request, const DeleteSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeleteSourceLocationAsyncHelper( this, request, handler, context ); } );
}

DeleteVodSourceOutcome MediaTailorClient::DeleteVodSource(const DeleteVodSourceRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVodSource", "Required field: SourceLocationName, is not set");
    return DeleteVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVodSource", "Required field: VodSourceName, is not set");
    return DeleteVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/vodSource/");
  uri.AddPathSegment(request.GetVodSourceName());
  return DeleteVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVodSourceOutcomeCallable MediaTailorClient::DeleteVodSourceCallable(const DeleteVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDeleteVodSourceAsyncHelper(MediaTailorClient const * const clientThis, const DeleteVodSourceRequest& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVodSource(request), context);
}

void MediaTailorClient::DeleteVodSourceAsync(const DeleteVodSourceRequest& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDeleteVodSourceAsyncHelper( this, request, handler, context ); } );
}

DescribeChannelOutcome MediaTailorClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelName, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  return DescribeChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable MediaTailorClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDescribeChannelAsyncHelper(MediaTailorClient const * const clientThis, const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeChannel(request), context);
}

void MediaTailorClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDescribeChannelAsyncHelper( this, request, handler, context ); } );
}

DescribeLiveSourceOutcome MediaTailorClient::DescribeLiveSource(const DescribeLiveSourceRequest& request) const
{
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLiveSource", "Required field: LiveSourceName, is not set");
    return DescribeLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLiveSource", "Required field: SourceLocationName, is not set");
    return DescribeLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/liveSource/");
  uri.AddPathSegment(request.GetLiveSourceName());
  return DescribeLiveSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLiveSourceOutcomeCallable MediaTailorClient::DescribeLiveSourceCallable(const DescribeLiveSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLiveSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLiveSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDescribeLiveSourceAsyncHelper(MediaTailorClient const * const clientThis, const DescribeLiveSourceRequest& request, const DescribeLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLiveSource(request), context);
}

void MediaTailorClient::DescribeLiveSourceAsync(const DescribeLiveSourceRequest& request, const DescribeLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDescribeLiveSourceAsyncHelper( this, request, handler, context ); } );
}

DescribeProgramOutcome MediaTailorClient::DescribeProgram(const DescribeProgramRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProgram", "Required field: ChannelName, is not set");
    return DescribeProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProgram", "Required field: ProgramName, is not set");
    return DescribeProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/program/");
  uri.AddPathSegment(request.GetProgramName());
  return DescribeProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProgramOutcomeCallable MediaTailorClient::DescribeProgramCallable(const DescribeProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDescribeProgramAsyncHelper(MediaTailorClient const * const clientThis, const DescribeProgramRequest& request, const DescribeProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProgram(request), context);
}

void MediaTailorClient::DescribeProgramAsync(const DescribeProgramRequest& request, const DescribeProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDescribeProgramAsyncHelper( this, request, handler, context ); } );
}

DescribeSourceLocationOutcome MediaTailorClient::DescribeSourceLocation(const DescribeSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSourceLocation", "Required field: SourceLocationName, is not set");
    return DescribeSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  return DescribeSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSourceLocationOutcomeCallable MediaTailorClient::DescribeSourceLocationCallable(const DescribeSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDescribeSourceLocationAsyncHelper(MediaTailorClient const * const clientThis, const DescribeSourceLocationRequest& request, const DescribeSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSourceLocation(request), context);
}

void MediaTailorClient::DescribeSourceLocationAsync(const DescribeSourceLocationRequest& request, const DescribeSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDescribeSourceLocationAsyncHelper( this, request, handler, context ); } );
}

DescribeVodSourceOutcome MediaTailorClient::DescribeVodSource(const DescribeVodSourceRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVodSource", "Required field: SourceLocationName, is not set");
    return DescribeVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVodSource", "Required field: VodSourceName, is not set");
    return DescribeVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/vodSource/");
  uri.AddPathSegment(request.GetVodSourceName());
  return DescribeVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVodSourceOutcomeCallable MediaTailorClient::DescribeVodSourceCallable(const DescribeVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientDescribeVodSourceAsyncHelper(MediaTailorClient const * const clientThis, const DescribeVodSourceRequest& request, const DescribeVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVodSource(request), context);
}

void MediaTailorClient::DescribeVodSourceAsync(const DescribeVodSourceRequest& request, const DescribeVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientDescribeVodSourceAsyncHelper( this, request, handler, context ); } );
}

GetChannelPolicyOutcome MediaTailorClient::GetChannelPolicy(const GetChannelPolicyRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/policy");
  return GetChannelPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelPolicyOutcomeCallable MediaTailorClient::GetChannelPolicyCallable(const GetChannelPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientGetChannelPolicyAsyncHelper(MediaTailorClient const * const clientThis, const GetChannelPolicyRequest& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChannelPolicy(request), context);
}

void MediaTailorClient::GetChannelPolicyAsync(const GetChannelPolicyRequest& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientGetChannelPolicyAsyncHelper( this, request, handler, context ); } );
}

GetChannelScheduleOutcome MediaTailorClient::GetChannelSchedule(const GetChannelScheduleRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelSchedule", "Required field: ChannelName, is not set");
    return GetChannelScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/schedule");
  return GetChannelScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelScheduleOutcomeCallable MediaTailorClient::GetChannelScheduleCallable(const GetChannelScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientGetChannelScheduleAsyncHelper(MediaTailorClient const * const clientThis, const GetChannelScheduleRequest& request, const GetChannelScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChannelSchedule(request), context);
}

void MediaTailorClient::GetChannelScheduleAsync(const GetChannelScheduleRequest& request, const GetChannelScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientGetChannelScheduleAsyncHelper( this, request, handler, context ); } );
}

GetPlaybackConfigurationOutcome MediaTailorClient::GetPlaybackConfiguration(const GetPlaybackConfigurationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlaybackConfiguration", "Required field: Name, is not set");
    return GetPlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/playbackConfiguration/");
  uri.AddPathSegment(request.GetName());
  return GetPlaybackConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPlaybackConfigurationOutcomeCallable MediaTailorClient::GetPlaybackConfigurationCallable(const GetPlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientGetPlaybackConfigurationAsyncHelper(MediaTailorClient const * const clientThis, const GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPlaybackConfiguration(request), context);
}

void MediaTailorClient::GetPlaybackConfigurationAsync(const GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientGetPlaybackConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetPrefetchScheduleOutcome MediaTailorClient::GetPrefetchSchedule(const GetPrefetchScheduleRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPrefetchSchedule", "Required field: Name, is not set");
    return GetPrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return GetPrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prefetchSchedule/");
  uri.AddPathSegment(request.GetPlaybackConfigurationName());
  uri.AddPathSegment(request.GetName());
  return GetPrefetchScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPrefetchScheduleOutcomeCallable MediaTailorClient::GetPrefetchScheduleCallable(const GetPrefetchScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPrefetchScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPrefetchSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientGetPrefetchScheduleAsyncHelper(MediaTailorClient const * const clientThis, const GetPrefetchScheduleRequest& request, const GetPrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPrefetchSchedule(request), context);
}

void MediaTailorClient::GetPrefetchScheduleAsync(const GetPrefetchScheduleRequest& request, const GetPrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientGetPrefetchScheduleAsyncHelper( this, request, handler, context ); } );
}

ListAlertsOutcome MediaTailorClient::ListAlerts(const ListAlertsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAlerts", "Required field: ResourceArn, is not set");
    return ListAlertsOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/alerts");
  return ListAlertsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAlertsOutcomeCallable MediaTailorClient::ListAlertsCallable(const ListAlertsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlertsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlerts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListAlertsAsyncHelper(MediaTailorClient const * const clientThis, const ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAlerts(request), context);
}

void MediaTailorClient::ListAlertsAsync(const ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListAlertsAsyncHelper( this, request, handler, context ); } );
}

ListChannelsOutcome MediaTailorClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable MediaTailorClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListChannelsAsyncHelper(MediaTailorClient const * const clientThis, const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListChannels(request), context);
}

void MediaTailorClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListChannelsAsyncHelper( this, request, handler, context ); } );
}

ListLiveSourcesOutcome MediaTailorClient::ListLiveSources(const ListLiveSourcesRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLiveSources", "Required field: SourceLocationName, is not set");
    return ListLiveSourcesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/liveSources");
  return ListLiveSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLiveSourcesOutcomeCallable MediaTailorClient::ListLiveSourcesCallable(const ListLiveSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLiveSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLiveSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListLiveSourcesAsyncHelper(MediaTailorClient const * const clientThis, const ListLiveSourcesRequest& request, const ListLiveSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLiveSources(request), context);
}

void MediaTailorClient::ListLiveSourcesAsync(const ListLiveSourcesRequest& request, const ListLiveSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListLiveSourcesAsyncHelper( this, request, handler, context ); } );
}

ListPlaybackConfigurationsOutcome MediaTailorClient::ListPlaybackConfigurations(const ListPlaybackConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/playbackConfigurations");
  return ListPlaybackConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPlaybackConfigurationsOutcomeCallable MediaTailorClient::ListPlaybackConfigurationsCallable(const ListPlaybackConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlaybackConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlaybackConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListPlaybackConfigurationsAsyncHelper(MediaTailorClient const * const clientThis, const ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPlaybackConfigurations(request), context);
}

void MediaTailorClient::ListPlaybackConfigurationsAsync(const ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListPlaybackConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListPrefetchSchedulesOutcome MediaTailorClient::ListPrefetchSchedules(const ListPrefetchSchedulesRequest& request) const
{
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrefetchSchedules", "Required field: PlaybackConfigurationName, is not set");
    return ListPrefetchSchedulesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/prefetchSchedule/");
  uri.AddPathSegment(request.GetPlaybackConfigurationName());
  return ListPrefetchSchedulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPrefetchSchedulesOutcomeCallable MediaTailorClient::ListPrefetchSchedulesCallable(const ListPrefetchSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPrefetchSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrefetchSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListPrefetchSchedulesAsyncHelper(MediaTailorClient const * const clientThis, const ListPrefetchSchedulesRequest& request, const ListPrefetchSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPrefetchSchedules(request), context);
}

void MediaTailorClient::ListPrefetchSchedulesAsync(const ListPrefetchSchedulesRequest& request, const ListPrefetchSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListPrefetchSchedulesAsyncHelper( this, request, handler, context ); } );
}

ListSourceLocationsOutcome MediaTailorClient::ListSourceLocations(const ListSourceLocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocations");
  return ListSourceLocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSourceLocationsOutcomeCallable MediaTailorClient::ListSourceLocationsCallable(const ListSourceLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSourceLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSourceLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListSourceLocationsAsyncHelper(MediaTailorClient const * const clientThis, const ListSourceLocationsRequest& request, const ListSourceLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSourceLocations(request), context);
}

void MediaTailorClient::ListSourceLocationsAsync(const ListSourceLocationsRequest& request, const ListSourceLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListSourceLocationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome MediaTailorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaTailorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListTagsForResourceAsyncHelper(MediaTailorClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void MediaTailorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListVodSourcesOutcome MediaTailorClient::ListVodSources(const ListVodSourcesRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVodSources", "Required field: SourceLocationName, is not set");
    return ListVodSourcesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/vodSources");
  return ListVodSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVodSourcesOutcomeCallable MediaTailorClient::ListVodSourcesCallable(const ListVodSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVodSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVodSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientListVodSourcesAsyncHelper(MediaTailorClient const * const clientThis, const ListVodSourcesRequest& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVodSources(request), context);
}

void MediaTailorClient::ListVodSourcesAsync(const ListVodSourcesRequest& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientListVodSourcesAsyncHelper( this, request, handler, context ); } );
}

PutChannelPolicyOutcome MediaTailorClient::PutChannelPolicy(const PutChannelPolicyRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/policy");
  return PutChannelPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutChannelPolicyOutcomeCallable MediaTailorClient::PutChannelPolicyCallable(const PutChannelPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutChannelPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutChannelPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientPutChannelPolicyAsyncHelper(MediaTailorClient const * const clientThis, const PutChannelPolicyRequest& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutChannelPolicy(request), context);
}

void MediaTailorClient::PutChannelPolicyAsync(const PutChannelPolicyRequest& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientPutChannelPolicyAsyncHelper( this, request, handler, context ); } );
}

PutPlaybackConfigurationOutcome MediaTailorClient::PutPlaybackConfiguration(const PutPlaybackConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/playbackConfiguration");
  return PutPlaybackConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutPlaybackConfigurationOutcomeCallable MediaTailorClient::PutPlaybackConfigurationCallable(const PutPlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientPutPlaybackConfigurationAsyncHelper(MediaTailorClient const * const clientThis, const PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPlaybackConfiguration(request), context);
}

void MediaTailorClient::PutPlaybackConfigurationAsync(const PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientPutPlaybackConfigurationAsyncHelper( this, request, handler, context ); } );
}

StartChannelOutcome MediaTailorClient::StartChannel(const StartChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelName, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/start");
  return StartChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartChannelOutcomeCallable MediaTailorClient::StartChannelCallable(const StartChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientStartChannelAsyncHelper(MediaTailorClient const * const clientThis, const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartChannel(request), context);
}

void MediaTailorClient::StartChannelAsync(const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientStartChannelAsyncHelper( this, request, handler, context ); } );
}

StopChannelOutcome MediaTailorClient::StopChannel(const StopChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelName, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/stop");
  return StopChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StopChannelOutcomeCallable MediaTailorClient::StopChannelCallable(const StopChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientStopChannelAsyncHelper(MediaTailorClient const * const clientThis, const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopChannel(request), context);
}

void MediaTailorClient::StopChannelAsync(const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientStopChannelAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome MediaTailorClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MediaTailorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientTagResourceAsyncHelper(MediaTailorClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void MediaTailorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome MediaTailorClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MediaTailorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientUntagResourceAsyncHelper(MediaTailorClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void MediaTailorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateChannelOutcome MediaTailorClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channel/");
  uri.AddPathSegment(request.GetChannelName());
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable MediaTailorClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientUpdateChannelAsyncHelper(MediaTailorClient const * const clientThis, const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateChannel(request), context);
}

void MediaTailorClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientUpdateChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateLiveSourceOutcome MediaTailorClient::UpdateLiveSource(const UpdateLiveSourceRequest& request) const
{
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLiveSource", "Required field: LiveSourceName, is not set");
    return UpdateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLiveSource", "Required field: SourceLocationName, is not set");
    return UpdateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/liveSource/");
  uri.AddPathSegment(request.GetLiveSourceName());
  return UpdateLiveSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateLiveSourceOutcomeCallable MediaTailorClient::UpdateLiveSourceCallable(const UpdateLiveSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLiveSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLiveSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientUpdateLiveSourceAsyncHelper(MediaTailorClient const * const clientThis, const UpdateLiveSourceRequest& request, const UpdateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLiveSource(request), context);
}

void MediaTailorClient::UpdateLiveSourceAsync(const UpdateLiveSourceRequest& request, const UpdateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientUpdateLiveSourceAsyncHelper( this, request, handler, context ); } );
}

UpdateSourceLocationOutcome MediaTailorClient::UpdateSourceLocation(const UpdateSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSourceLocation", "Required field: SourceLocationName, is not set");
    return UpdateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  return UpdateSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSourceLocationOutcomeCallable MediaTailorClient::UpdateSourceLocationCallable(const UpdateSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientUpdateSourceLocationAsyncHelper(MediaTailorClient const * const clientThis, const UpdateSourceLocationRequest& request, const UpdateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSourceLocation(request), context);
}

void MediaTailorClient::UpdateSourceLocationAsync(const UpdateSourceLocationRequest& request, const UpdateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientUpdateSourceLocationAsyncHelper( this, request, handler, context ); } );
}

UpdateVodSourceOutcome MediaTailorClient::UpdateVodSource(const UpdateVodSourceRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVodSource", "Required field: SourceLocationName, is not set");
    return UpdateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVodSource", "Required field: VodSourceName, is not set");
    return UpdateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sourceLocation/");
  uri.AddPathSegment(request.GetSourceLocationName());
  uri.AddPathSegments("/vodSource/");
  uri.AddPathSegment(request.GetVodSourceName());
  return UpdateVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVodSourceOutcomeCallable MediaTailorClient::UpdateVodSourceCallable(const UpdateVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClientUpdateVodSourceAsyncHelper(MediaTailorClient const * const clientThis, const UpdateVodSourceRequest& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVodSource(request), context);
}

void MediaTailorClient::UpdateVodSourceAsync(const UpdateVodSourceRequest& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MediaTailorClientUpdateVodSourceAsyncHelper( this, request, handler, context ); } );
}

