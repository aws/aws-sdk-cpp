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

#include <aws/codeguruprofiler/CodeGuruProfilerClient.h>
#include <aws/codeguruprofiler/CodeGuruProfilerEndpoint.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrorMarshaller.h>
#include <aws/codeguruprofiler/model/ConfigureAgentRequest.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/GetProfileRequest.h>
#include <aws/codeguruprofiler/model/ListProfileTimesRequest.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsRequest.h>
#include <aws/codeguruprofiler/model/PostAgentProfileRequest.h>
#include <aws/codeguruprofiler/model/UpdateProfilingGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeGuruProfiler;
using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codeguru-profiler";
static const char* ALLOCATION_TAG = "CodeGuruProfilerClient";


CodeGuruProfilerClient::CodeGuruProfilerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruProfilerClient::~CodeGuruProfilerClient()
{
}

void CodeGuruProfilerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeGuruProfilerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeGuruProfilerClient::OverrideEndpoint(const Aws::String& endpoint)
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

ConfigureAgentOutcome CodeGuruProfilerClient::ConfigureAgent(const ConfigureAgentRequest& request) const
{
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ConfigureAgent", "Required field: ProfilingGroupName, is not set");
    return ConfigureAgentOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups/";
  ss << request.GetProfilingGroupName();
  ss << "/configureAgent";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ConfigureAgentOutcome(ConfigureAgentResult(outcome.GetResult()));
  }
  else
  {
    return ConfigureAgentOutcome(outcome.GetError());
  }
}

ConfigureAgentOutcomeCallable CodeGuruProfilerClient::ConfigureAgentCallable(const ConfigureAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ConfigureAgentAsync(const ConfigureAgentRequest& request, const ConfigureAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfigureAgentAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::ConfigureAgentAsyncHelper(const ConfigureAgentRequest& request, const ConfigureAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfigureAgent(request), context);
}

CreateProfilingGroupOutcome CodeGuruProfilerClient::CreateProfilingGroup(const CreateProfilingGroupRequest& request) const
{
  if (!request.ClientTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProfilingGroup", "Required field: ClientToken, is not set");
    return CreateProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProfilingGroupOutcome(CreateProfilingGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateProfilingGroupOutcome(outcome.GetError());
  }
}

CreateProfilingGroupOutcomeCallable CodeGuruProfilerClient::CreateProfilingGroupCallable(const CreateProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::CreateProfilingGroupAsync(const CreateProfilingGroupRequest& request, const CreateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProfilingGroupAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::CreateProfilingGroupAsyncHelper(const CreateProfilingGroupRequest& request, const CreateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProfilingGroup(request), context);
}

DeleteProfilingGroupOutcome CodeGuruProfilerClient::DeleteProfilingGroup(const DeleteProfilingGroupRequest& request) const
{
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return DeleteProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups/";
  ss << request.GetProfilingGroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProfilingGroupOutcome(DeleteProfilingGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProfilingGroupOutcome(outcome.GetError());
  }
}

DeleteProfilingGroupOutcomeCallable CodeGuruProfilerClient::DeleteProfilingGroupCallable(const DeleteProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::DeleteProfilingGroupAsync(const DeleteProfilingGroupRequest& request, const DeleteProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfilingGroupAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::DeleteProfilingGroupAsyncHelper(const DeleteProfilingGroupRequest& request, const DeleteProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfilingGroup(request), context);
}

DescribeProfilingGroupOutcome CodeGuruProfilerClient::DescribeProfilingGroup(const DescribeProfilingGroupRequest& request) const
{
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return DescribeProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups/";
  ss << request.GetProfilingGroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProfilingGroupOutcome(DescribeProfilingGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProfilingGroupOutcome(outcome.GetError());
  }
}

DescribeProfilingGroupOutcomeCallable CodeGuruProfilerClient::DescribeProfilingGroupCallable(const DescribeProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::DescribeProfilingGroupAsync(const DescribeProfilingGroupRequest& request, const DescribeProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProfilingGroupAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::DescribeProfilingGroupAsyncHelper(const DescribeProfilingGroupRequest& request, const DescribeProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProfilingGroup(request), context);
}

GetProfileOutcome CodeGuruProfilerClient::GetProfile(const GetProfileRequest& request) const
{
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfilingGroupName, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups/";
  ss << request.GetProfilingGroupName();
  ss << "/profile";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetProfileOutcome(GetProfileResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetProfileOutcome(outcome.GetError());
  }
}

GetProfileOutcomeCallable CodeGuruProfilerClient::GetProfileCallable(const GetProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::GetProfileAsync(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProfileAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::GetProfileAsyncHelper(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProfile(request), context);
}

ListProfileTimesOutcome CodeGuruProfilerClient::ListProfileTimes(const ListProfileTimesRequest& request) const
{
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: EndTime, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  if (!request.PeriodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: Period, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Period]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: ProfilingGroupName, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: StartTime, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups/";
  ss << request.GetProfilingGroupName();
  ss << "/profileTimes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProfileTimesOutcome(ListProfileTimesResult(outcome.GetResult()));
  }
  else
  {
    return ListProfileTimesOutcome(outcome.GetError());
  }
}

ListProfileTimesOutcomeCallable CodeGuruProfilerClient::ListProfileTimesCallable(const ListProfileTimesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileTimesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileTimes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ListProfileTimesAsync(const ListProfileTimesRequest& request, const ListProfileTimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfileTimesAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::ListProfileTimesAsyncHelper(const ListProfileTimesRequest& request, const ListProfileTimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfileTimes(request), context);
}

ListProfilingGroupsOutcome CodeGuruProfilerClient::ListProfilingGroups(const ListProfilingGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProfilingGroupsOutcome(ListProfilingGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListProfilingGroupsOutcome(outcome.GetError());
  }
}

ListProfilingGroupsOutcomeCallable CodeGuruProfilerClient::ListProfilingGroupsCallable(const ListProfilingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfilingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfilingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ListProfilingGroupsAsync(const ListProfilingGroupsRequest& request, const ListProfilingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfilingGroupsAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::ListProfilingGroupsAsyncHelper(const ListProfilingGroupsRequest& request, const ListProfilingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfilingGroups(request), context);
}

PostAgentProfileOutcome CodeGuruProfilerClient::PostAgentProfile(const PostAgentProfileRequest& request) const
{
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostAgentProfile", "Required field: ProfilingGroupName, is not set");
    return PostAgentProfileOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups/";
  ss << request.GetProfilingGroupName();
  ss << "/agentProfile";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PostAgentProfileOutcome(PostAgentProfileResult(outcome.GetResult()));
  }
  else
  {
    return PostAgentProfileOutcome(outcome.GetError());
  }
}

PostAgentProfileOutcomeCallable CodeGuruProfilerClient::PostAgentProfileCallable(const PostAgentProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostAgentProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostAgentProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::PostAgentProfileAsync(const PostAgentProfileRequest& request, const PostAgentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PostAgentProfileAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::PostAgentProfileAsyncHelper(const PostAgentProfileRequest& request, const PostAgentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PostAgentProfile(request), context);
}

UpdateProfilingGroupOutcome CodeGuruProfilerClient::UpdateProfilingGroup(const UpdateProfilingGroupRequest& request) const
{
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return UpdateProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/profilingGroups/";
  ss << request.GetProfilingGroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProfilingGroupOutcome(UpdateProfilingGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProfilingGroupOutcome(outcome.GetError());
  }
}

UpdateProfilingGroupOutcomeCallable CodeGuruProfilerClient::UpdateProfilingGroupCallable(const UpdateProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::UpdateProfilingGroupAsync(const UpdateProfilingGroupRequest& request, const UpdateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProfilingGroupAsyncHelper( request, handler, context ); } );
}

void CodeGuruProfilerClient::UpdateProfilingGroupAsyncHelper(const UpdateProfilingGroupRequest& request, const UpdateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProfilingGroup(request), context);
}

