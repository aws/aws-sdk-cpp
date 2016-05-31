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
#include <aws/workspaces/WorkSpacesClient.h>
#include <aws/workspaces/WorkSpacesEndpoint.h>
#include <aws/workspaces/WorkSpacesErrorMarshaller.h>
#include <aws/workspaces/model/CreateTagsRequest.h>
#include <aws/workspaces/model/CreateWorkspacesRequest.h>
#include <aws/workspaces/model/DeleteTagsRequest.h>
#include <aws/workspaces/model/DescribeTagsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesRequest.h>
#include <aws/workspaces/model/RebootWorkspacesRequest.h>
#include <aws/workspaces/model/RebuildWorkspacesRequest.h>
#include <aws/workspaces/model/TerminateWorkspacesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpaces;
using namespace Aws::WorkSpaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "workspaces";
static const char* ALLOCATION_TAG = "WorkSpacesClient";

WorkSpacesClient::WorkSpacesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::~WorkSpacesClient()
{
}

void WorkSpacesClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << WorkSpacesEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateTagsOutcome WorkSpacesClient::CreateTags(const CreateTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTagsOutcome(CreateTagsResult(outcome.GetResult()));
  }
  else
  {
    return CreateTagsOutcome(outcome.GetError());
  }
}

CreateTagsOutcomeCallable WorkSpacesClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::CreateTags, this, request);
}

void WorkSpacesClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::CreateTagsAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

CreateWorkspacesOutcome WorkSpacesClient::CreateWorkspaces(const CreateWorkspacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateWorkspacesOutcome(CreateWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return CreateWorkspacesOutcome(outcome.GetError());
  }
}

CreateWorkspacesOutcomeCallable WorkSpacesClient::CreateWorkspacesCallable(const CreateWorkspacesRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::CreateWorkspaces, this, request);
}

void WorkSpacesClient::CreateWorkspacesAsync(const CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::CreateWorkspacesAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::CreateWorkspacesAsyncHelper(const CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkspaces(request), context);
}

DeleteTagsOutcome WorkSpacesClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(DeleteTagsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable WorkSpacesClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::DeleteTags, this, request);
}

void WorkSpacesClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::DeleteTagsAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeTagsOutcome WorkSpacesClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable WorkSpacesClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::DescribeTags, this, request);
}

void WorkSpacesClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::DescribeTagsAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DescribeWorkspaceBundlesOutcome WorkSpacesClient::DescribeWorkspaceBundles(const DescribeWorkspaceBundlesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspaceBundlesOutcome(DescribeWorkspaceBundlesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspaceBundlesOutcome(outcome.GetError());
  }
}

DescribeWorkspaceBundlesOutcomeCallable WorkSpacesClient::DescribeWorkspaceBundlesCallable(const DescribeWorkspaceBundlesRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::DescribeWorkspaceBundles, this, request);
}

void WorkSpacesClient::DescribeWorkspaceBundlesAsync(const DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::DescribeWorkspaceBundlesAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::DescribeWorkspaceBundlesAsyncHelper(const DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspaceBundles(request), context);
}

DescribeWorkspaceDirectoriesOutcome WorkSpacesClient::DescribeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspaceDirectoriesOutcome(DescribeWorkspaceDirectoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspaceDirectoriesOutcome(outcome.GetError());
  }
}

DescribeWorkspaceDirectoriesOutcomeCallable WorkSpacesClient::DescribeWorkspaceDirectoriesCallable(const DescribeWorkspaceDirectoriesRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::DescribeWorkspaceDirectories, this, request);
}

void WorkSpacesClient::DescribeWorkspaceDirectoriesAsync(const DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::DescribeWorkspaceDirectoriesAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::DescribeWorkspaceDirectoriesAsyncHelper(const DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspaceDirectories(request), context);
}

DescribeWorkspacesOutcome WorkSpacesClient::DescribeWorkspaces(const DescribeWorkspacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspacesOutcome(DescribeWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspacesOutcome(outcome.GetError());
  }
}

DescribeWorkspacesOutcomeCallable WorkSpacesClient::DescribeWorkspacesCallable(const DescribeWorkspacesRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::DescribeWorkspaces, this, request);
}

void WorkSpacesClient::DescribeWorkspacesAsync(const DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::DescribeWorkspacesAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::DescribeWorkspacesAsyncHelper(const DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspaces(request), context);
}

RebootWorkspacesOutcome WorkSpacesClient::RebootWorkspaces(const RebootWorkspacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebootWorkspacesOutcome(RebootWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return RebootWorkspacesOutcome(outcome.GetError());
  }
}

RebootWorkspacesOutcomeCallable WorkSpacesClient::RebootWorkspacesCallable(const RebootWorkspacesRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::RebootWorkspaces, this, request);
}

void WorkSpacesClient::RebootWorkspacesAsync(const RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::RebootWorkspacesAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::RebootWorkspacesAsyncHelper(const RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootWorkspaces(request), context);
}

RebuildWorkspacesOutcome WorkSpacesClient::RebuildWorkspaces(const RebuildWorkspacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebuildWorkspacesOutcome(RebuildWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return RebuildWorkspacesOutcome(outcome.GetError());
  }
}

RebuildWorkspacesOutcomeCallable WorkSpacesClient::RebuildWorkspacesCallable(const RebuildWorkspacesRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::RebuildWorkspaces, this, request);
}

void WorkSpacesClient::RebuildWorkspacesAsync(const RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::RebuildWorkspacesAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::RebuildWorkspacesAsyncHelper(const RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebuildWorkspaces(request), context);
}

TerminateWorkspacesOutcome WorkSpacesClient::TerminateWorkspaces(const TerminateWorkspacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TerminateWorkspacesOutcome(TerminateWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return TerminateWorkspacesOutcome(outcome.GetError());
  }
}

TerminateWorkspacesOutcomeCallable WorkSpacesClient::TerminateWorkspacesCallable(const TerminateWorkspacesRequest& request) const
{
  return std::async(std::launch::async, &WorkSpacesClient::TerminateWorkspaces, this, request);
}

void WorkSpacesClient::TerminateWorkspacesAsync(const TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&WorkSpacesClient::TerminateWorkspacesAsyncHelper, this, request, handler, context);
}

void WorkSpacesClient::TerminateWorkspacesAsyncHelper(const TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateWorkspaces(request), context);
}

