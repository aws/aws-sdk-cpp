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
#include <aws/mediatailor/model/CreateChannelRequest.h>
#include <aws/mediatailor/model/CreateProgramRequest.h>
#include <aws/mediatailor/model/CreateSourceLocationRequest.h>
#include <aws/mediatailor/model/CreateVodSourceRequest.h>
#include <aws/mediatailor/model/DeleteChannelRequest.h>
#include <aws/mediatailor/model/DeleteChannelPolicyRequest.h>
#include <aws/mediatailor/model/DeletePlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/DeleteProgramRequest.h>
#include <aws/mediatailor/model/DeleteSourceLocationRequest.h>
#include <aws/mediatailor/model/DeleteVodSourceRequest.h>
#include <aws/mediatailor/model/DescribeChannelRequest.h>
#include <aws/mediatailor/model/DescribeProgramRequest.h>
#include <aws/mediatailor/model/DescribeSourceLocationRequest.h>
#include <aws/mediatailor/model/DescribeVodSourceRequest.h>
#include <aws/mediatailor/model/GetChannelPolicyRequest.h>
#include <aws/mediatailor/model/GetChannelScheduleRequest.h>
#include <aws/mediatailor/model/GetPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/ListChannelsRequest.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsRequest.h>
#include <aws/mediatailor/model/ListProgramsRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaTailorClient::~MediaTailorClient()
{
}

void MediaTailorClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("MediaTailor");
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

CreateChannelOutcome MediaTailorClient::CreateChannel(const CreateChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable MediaTailorClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::CreateChannelAsyncHelper(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannel(request), context);
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
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/program/";
  ss << request.GetProgramName();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProgramOutcomeCallable MediaTailorClient::CreateProgramCallable(const CreateProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::CreateProgramAsync(const CreateProgramRequest& request, const CreateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProgramAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::CreateProgramAsyncHelper(const CreateProgramRequest& request, const CreateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProgram(request), context);
}

CreateSourceLocationOutcome MediaTailorClient::CreateSourceLocation(const CreateSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceLocation", "Required field: SourceLocationName, is not set");
    return CreateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSourceLocationOutcomeCallable MediaTailorClient::CreateSourceLocationCallable(const CreateSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::CreateSourceLocationAsync(const CreateSourceLocationRequest& request, const CreateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSourceLocationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::CreateSourceLocationAsyncHelper(const CreateSourceLocationRequest& request, const CreateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSourceLocation(request), context);
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
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  ss << "/vodSource/";
  ss << request.GetVodSourceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVodSourceOutcomeCallable MediaTailorClient::CreateVodSourceCallable(const CreateVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::CreateVodSourceAsync(const CreateVodSourceRequest& request, const CreateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVodSourceAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::CreateVodSourceAsyncHelper(const CreateVodSourceRequest& request, const CreateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVodSource(request), context);
}

DeleteChannelOutcome MediaTailorClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable MediaTailorClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DeleteChannelAsyncHelper(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannel(request), context);
}

DeleteChannelPolicyOutcome MediaTailorClient::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteChannelPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelPolicyOutcomeCallable MediaTailorClient::DeleteChannelPolicyCallable(const DeleteChannelPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DeleteChannelPolicyAsync(const DeleteChannelPolicyRequest& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelPolicyAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DeleteChannelPolicyAsyncHelper(const DeleteChannelPolicyRequest& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelPolicy(request), context);
}

DeletePlaybackConfigurationOutcome MediaTailorClient::DeletePlaybackConfiguration(const DeletePlaybackConfigurationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlaybackConfiguration", "Required field: Name, is not set");
    return DeletePlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/playbackConfiguration/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePlaybackConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePlaybackConfigurationOutcomeCallable MediaTailorClient::DeletePlaybackConfigurationCallable(const DeletePlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DeletePlaybackConfigurationAsync(const DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePlaybackConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DeletePlaybackConfigurationAsyncHelper(const DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePlaybackConfiguration(request), context);
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
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/program/";
  ss << request.GetProgramName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProgramOutcomeCallable MediaTailorClient::DeleteProgramCallable(const DeleteProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DeleteProgramAsync(const DeleteProgramRequest& request, const DeleteProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProgramAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DeleteProgramAsyncHelper(const DeleteProgramRequest& request, const DeleteProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProgram(request), context);
}

DeleteSourceLocationOutcome MediaTailorClient::DeleteSourceLocation(const DeleteSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSourceLocation", "Required field: SourceLocationName, is not set");
    return DeleteSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceLocationOutcomeCallable MediaTailorClient::DeleteSourceLocationCallable(const DeleteSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DeleteSourceLocationAsync(const DeleteSourceLocationRequest& request, const DeleteSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSourceLocationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DeleteSourceLocationAsyncHelper(const DeleteSourceLocationRequest& request, const DeleteSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSourceLocation(request), context);
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
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  ss << "/vodSource/";
  ss << request.GetVodSourceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVodSourceOutcomeCallable MediaTailorClient::DeleteVodSourceCallable(const DeleteVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DeleteVodSourceAsync(const DeleteVodSourceRequest& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVodSourceAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DeleteVodSourceAsyncHelper(const DeleteVodSourceRequest& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVodSource(request), context);
}

DescribeChannelOutcome MediaTailorClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelName, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable MediaTailorClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DescribeChannelAsyncHelper(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannel(request), context);
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
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/program/";
  ss << request.GetProgramName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProgramOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProgramOutcomeCallable MediaTailorClient::DescribeProgramCallable(const DescribeProgramRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProgramOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProgram(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DescribeProgramAsync(const DescribeProgramRequest& request, const DescribeProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProgramAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DescribeProgramAsyncHelper(const DescribeProgramRequest& request, const DescribeProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProgram(request), context);
}

DescribeSourceLocationOutcome MediaTailorClient::DescribeSourceLocation(const DescribeSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSourceLocation", "Required field: SourceLocationName, is not set");
    return DescribeSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSourceLocationOutcomeCallable MediaTailorClient::DescribeSourceLocationCallable(const DescribeSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DescribeSourceLocationAsync(const DescribeSourceLocationRequest& request, const DescribeSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSourceLocationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DescribeSourceLocationAsyncHelper(const DescribeSourceLocationRequest& request, const DescribeSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSourceLocation(request), context);
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
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  ss << "/vodSource/";
  ss << request.GetVodSourceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVodSourceOutcomeCallable MediaTailorClient::DescribeVodSourceCallable(const DescribeVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::DescribeVodSourceAsync(const DescribeVodSourceRequest& request, const DescribeVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVodSourceAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::DescribeVodSourceAsyncHelper(const DescribeVodSourceRequest& request, const DescribeVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVodSource(request), context);
}

GetChannelPolicyOutcome MediaTailorClient::GetChannelPolicy(const GetChannelPolicyRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetChannelPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelPolicyOutcomeCallable MediaTailorClient::GetChannelPolicyCallable(const GetChannelPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::GetChannelPolicyAsync(const GetChannelPolicyRequest& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelPolicyAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::GetChannelPolicyAsyncHelper(const GetChannelPolicyRequest& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannelPolicy(request), context);
}

GetChannelScheduleOutcome MediaTailorClient::GetChannelSchedule(const GetChannelScheduleRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelSchedule", "Required field: ChannelName, is not set");
    return GetChannelScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/schedule";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetChannelScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelScheduleOutcomeCallable MediaTailorClient::GetChannelScheduleCallable(const GetChannelScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::GetChannelScheduleAsync(const GetChannelScheduleRequest& request, const GetChannelScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelScheduleAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::GetChannelScheduleAsyncHelper(const GetChannelScheduleRequest& request, const GetChannelScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannelSchedule(request), context);
}

GetPlaybackConfigurationOutcome MediaTailorClient::GetPlaybackConfiguration(const GetPlaybackConfigurationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlaybackConfiguration", "Required field: Name, is not set");
    return GetPlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/playbackConfiguration/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetPlaybackConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPlaybackConfigurationOutcomeCallable MediaTailorClient::GetPlaybackConfigurationCallable(const GetPlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::GetPlaybackConfigurationAsync(const GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPlaybackConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::GetPlaybackConfigurationAsyncHelper(const GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPlaybackConfiguration(request), context);
}

ListChannelsOutcome MediaTailorClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable MediaTailorClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::ListChannelsAsyncHelper(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannels(request), context);
}

ListPlaybackConfigurationsOutcome MediaTailorClient::ListPlaybackConfigurations(const ListPlaybackConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/playbackConfigurations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPlaybackConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPlaybackConfigurationsOutcomeCallable MediaTailorClient::ListPlaybackConfigurationsCallable(const ListPlaybackConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlaybackConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlaybackConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::ListPlaybackConfigurationsAsync(const ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPlaybackConfigurationsAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::ListPlaybackConfigurationsAsyncHelper(const ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPlaybackConfigurations(request), context);
}

ListProgramsOutcome MediaTailorClient::ListPrograms(const ListProgramsRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrograms", "Required field: ChannelName, is not set");
    return ListProgramsOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/programs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProgramsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProgramsOutcomeCallable MediaTailorClient::ListProgramsCallable(const ListProgramsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProgramsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrograms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::ListProgramsAsync(const ListProgramsRequest& request, const ListProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProgramsAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::ListProgramsAsyncHelper(const ListProgramsRequest& request, const ListProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrograms(request), context);
}

ListSourceLocationsOutcome MediaTailorClient::ListSourceLocations(const ListSourceLocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sourceLocations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSourceLocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSourceLocationsOutcomeCallable MediaTailorClient::ListSourceLocationsCallable(const ListSourceLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSourceLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSourceLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::ListSourceLocationsAsync(const ListSourceLocationsRequest& request, const ListSourceLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSourceLocationsAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::ListSourceLocationsAsyncHelper(const ListSourceLocationsRequest& request, const ListSourceLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSourceLocations(request), context);
}

ListTagsForResourceOutcome MediaTailorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaTailorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListVodSourcesOutcome MediaTailorClient::ListVodSources(const ListVodSourcesRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVodSources", "Required field: SourceLocationName, is not set");
    return ListVodSourcesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  ss << "/vodSources";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVodSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVodSourcesOutcomeCallable MediaTailorClient::ListVodSourcesCallable(const ListVodSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVodSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVodSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::ListVodSourcesAsync(const ListVodSourcesRequest& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVodSourcesAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::ListVodSourcesAsyncHelper(const ListVodSourcesRequest& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVodSources(request), context);
}

PutChannelPolicyOutcome MediaTailorClient::PutChannelPolicy(const PutChannelPolicyRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/policy";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutChannelPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutChannelPolicyOutcomeCallable MediaTailorClient::PutChannelPolicyCallable(const PutChannelPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutChannelPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutChannelPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::PutChannelPolicyAsync(const PutChannelPolicyRequest& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutChannelPolicyAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::PutChannelPolicyAsyncHelper(const PutChannelPolicyRequest& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutChannelPolicy(request), context);
}

PutPlaybackConfigurationOutcome MediaTailorClient::PutPlaybackConfiguration(const PutPlaybackConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/playbackConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutPlaybackConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutPlaybackConfigurationOutcomeCallable MediaTailorClient::PutPlaybackConfigurationCallable(const PutPlaybackConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPlaybackConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPlaybackConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::PutPlaybackConfigurationAsync(const PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPlaybackConfigurationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::PutPlaybackConfigurationAsyncHelper(const PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPlaybackConfiguration(request), context);
}

StartChannelOutcome MediaTailorClient::StartChannel(const StartChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelName, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/start";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartChannelOutcomeCallable MediaTailorClient::StartChannelCallable(const StartChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::StartChannelAsync(const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartChannelAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::StartChannelAsyncHelper(const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartChannel(request), context);
}

StopChannelOutcome MediaTailorClient::StopChannel(const StopChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelName, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  ss << "/stop";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StopChannelOutcomeCallable MediaTailorClient::StopChannelCallable(const StopChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::StopChannelAsync(const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopChannelAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::StopChannelAsyncHelper(const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopChannel(request), context);
}

TagResourceOutcome MediaTailorClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MediaTailorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MediaTailorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateChannelOutcome MediaTailorClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channel/";
  ss << request.GetChannelName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable MediaTailorClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::UpdateChannelAsyncHelper(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannel(request), context);
}

UpdateSourceLocationOutcome MediaTailorClient::UpdateSourceLocation(const UpdateSourceLocationRequest& request) const
{
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSourceLocation", "Required field: SourceLocationName, is not set");
    return UpdateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateSourceLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSourceLocationOutcomeCallable MediaTailorClient::UpdateSourceLocationCallable(const UpdateSourceLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSourceLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSourceLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::UpdateSourceLocationAsync(const UpdateSourceLocationRequest& request, const UpdateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSourceLocationAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::UpdateSourceLocationAsyncHelper(const UpdateSourceLocationRequest& request, const UpdateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSourceLocation(request), context);
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
  Aws::StringStream ss;
  ss << "/sourceLocation/";
  ss << request.GetSourceLocationName();
  ss << "/vodSource/";
  ss << request.GetVodSourceName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVodSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVodSourceOutcomeCallable MediaTailorClient::UpdateVodSourceCallable(const UpdateVodSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVodSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVodSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaTailorClient::UpdateVodSourceAsync(const UpdateVodSourceRequest& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVodSourceAsyncHelper( request, handler, context ); } );
}

void MediaTailorClient::UpdateVodSourceAsyncHelper(const UpdateVodSourceRequest& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVodSource(request), context);
}

