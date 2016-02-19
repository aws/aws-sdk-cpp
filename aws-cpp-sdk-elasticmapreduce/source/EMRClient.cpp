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
#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/EMREndpoint.h>
#include <aws/elasticmapreduce/EMRErrorMarshaller.h>
#include <aws/elasticmapreduce/model/AddInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/AddJobFlowStepsRequest.h>
#include <aws/elasticmapreduce/model/AddTagsRequest.h>
#include <aws/elasticmapreduce/model/DescribeClusterRequest.h>
#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsRequest.h>
#include <aws/elasticmapreduce/model/ListClustersRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/ListInstancesRequest.h>
#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/RemoveTagsRequest.h>
#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/elasticmapreduce/model/SetTerminationProtectionRequest.h>
#include <aws/elasticmapreduce/model/SetVisibleToAllUsersRequest.h>
#include <aws/elasticmapreduce/model/TerminateJobFlowsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMR;
using namespace Aws::EMR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "elasticmapreduce";
static const char* ALLOCATION_TAG = "EMRClient";

EMRClient::EMRClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::~EMRClient()
{
}

void EMRClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << EMREndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AddInstanceGroupsOutcome EMRClient::AddInstanceGroups(const AddInstanceGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddInstanceGroupsOutcome(AddInstanceGroupsResult(outcome.GetResult()));
  }
  else
  {
    return AddInstanceGroupsOutcome(outcome.GetError());
  }
}

AddInstanceGroupsOutcomeCallable EMRClient::AddInstanceGroupsCallable(const AddInstanceGroupsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::AddInstanceGroups, this, request);
}

void EMRClient::AddInstanceGroupsAsync(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::AddInstanceGroupsAsyncHelper, this, request, handler, context);
}

void EMRClient::AddInstanceGroupsAsyncHelper(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddInstanceGroups(request), context);
}

AddJobFlowStepsOutcome EMRClient::AddJobFlowSteps(const AddJobFlowStepsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddJobFlowStepsOutcome(AddJobFlowStepsResult(outcome.GetResult()));
  }
  else
  {
    return AddJobFlowStepsOutcome(outcome.GetError());
  }
}

AddJobFlowStepsOutcomeCallable EMRClient::AddJobFlowStepsCallable(const AddJobFlowStepsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::AddJobFlowSteps, this, request);
}

void EMRClient::AddJobFlowStepsAsync(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::AddJobFlowStepsAsyncHelper, this, request, handler, context);
}

void EMRClient::AddJobFlowStepsAsyncHelper(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddJobFlowSteps(request), context);
}

AddTagsOutcome EMRClient::AddTags(const AddTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable EMRClient::AddTagsCallable(const AddTagsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::AddTags, this, request);
}

void EMRClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::AddTagsAsyncHelper, this, request, handler, context);
}

void EMRClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

DescribeClusterOutcome EMRClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeClusterOutcome(DescribeClusterResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClusterOutcome(outcome.GetError());
  }
}

DescribeClusterOutcomeCallable EMRClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::DescribeCluster, this, request);
}

void EMRClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::DescribeClusterAsyncHelper, this, request, handler, context);
}

void EMRClient::DescribeClusterAsyncHelper(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCluster(request), context);
}

DescribeStepOutcome EMRClient::DescribeStep(const DescribeStepRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeStepOutcome(DescribeStepResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStepOutcome(outcome.GetError());
  }
}

DescribeStepOutcomeCallable EMRClient::DescribeStepCallable(const DescribeStepRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::DescribeStep, this, request);
}

void EMRClient::DescribeStepAsync(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::DescribeStepAsyncHelper, this, request, handler, context);
}

void EMRClient::DescribeStepAsyncHelper(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStep(request), context);
}

ListBootstrapActionsOutcome EMRClient::ListBootstrapActions(const ListBootstrapActionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListBootstrapActionsOutcome(ListBootstrapActionsResult(outcome.GetResult()));
  }
  else
  {
    return ListBootstrapActionsOutcome(outcome.GetError());
  }
}

ListBootstrapActionsOutcomeCallable EMRClient::ListBootstrapActionsCallable(const ListBootstrapActionsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::ListBootstrapActions, this, request);
}

void EMRClient::ListBootstrapActionsAsync(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::ListBootstrapActionsAsyncHelper, this, request, handler, context);
}

void EMRClient::ListBootstrapActionsAsyncHelper(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBootstrapActions(request), context);
}

ListClustersOutcome EMRClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListClustersOutcome(ListClustersResult(outcome.GetResult()));
  }
  else
  {
    return ListClustersOutcome(outcome.GetError());
  }
}

ListClustersOutcomeCallable EMRClient::ListClustersCallable(const ListClustersRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::ListClusters, this, request);
}

void EMRClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::ListClustersAsyncHelper, this, request, handler, context);
}

void EMRClient::ListClustersAsyncHelper(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClusters(request), context);
}

ListInstanceGroupsOutcome EMRClient::ListInstanceGroups(const ListInstanceGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListInstanceGroupsOutcome(ListInstanceGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListInstanceGroupsOutcome(outcome.GetError());
  }
}

ListInstanceGroupsOutcomeCallable EMRClient::ListInstanceGroupsCallable(const ListInstanceGroupsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::ListInstanceGroups, this, request);
}

void EMRClient::ListInstanceGroupsAsync(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::ListInstanceGroupsAsyncHelper, this, request, handler, context);
}

void EMRClient::ListInstanceGroupsAsyncHelper(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceGroups(request), context);
}

ListInstancesOutcome EMRClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListInstancesOutcome(ListInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListInstancesOutcome(outcome.GetError());
  }
}

ListInstancesOutcomeCallable EMRClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::ListInstances, this, request);
}

void EMRClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::ListInstancesAsyncHelper, this, request, handler, context);
}

void EMRClient::ListInstancesAsyncHelper(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstances(request), context);
}

ListStepsOutcome EMRClient::ListSteps(const ListStepsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListStepsOutcome(ListStepsResult(outcome.GetResult()));
  }
  else
  {
    return ListStepsOutcome(outcome.GetError());
  }
}

ListStepsOutcomeCallable EMRClient::ListStepsCallable(const ListStepsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::ListSteps, this, request);
}

void EMRClient::ListStepsAsync(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::ListStepsAsyncHelper, this, request, handler, context);
}

void EMRClient::ListStepsAsyncHelper(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSteps(request), context);
}

ModifyInstanceGroupsOutcome EMRClient::ModifyInstanceGroups(const ModifyInstanceGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyInstanceGroupsOutcome(NoResult());
  }
  else
  {
    return ModifyInstanceGroupsOutcome(outcome.GetError());
  }
}

ModifyInstanceGroupsOutcomeCallable EMRClient::ModifyInstanceGroupsCallable(const ModifyInstanceGroupsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::ModifyInstanceGroups, this, request);
}

void EMRClient::ModifyInstanceGroupsAsync(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::ModifyInstanceGroupsAsyncHelper, this, request, handler, context);
}

void EMRClient::ModifyInstanceGroupsAsyncHelper(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceGroups(request), context);
}

RemoveTagsOutcome EMRClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable EMRClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::RemoveTags, this, request);
}

void EMRClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::RemoveTagsAsyncHelper, this, request, handler, context);
}

void EMRClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

RunJobFlowOutcome EMRClient::RunJobFlow(const RunJobFlowRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RunJobFlowOutcome(RunJobFlowResult(outcome.GetResult()));
  }
  else
  {
    return RunJobFlowOutcome(outcome.GetError());
  }
}

RunJobFlowOutcomeCallable EMRClient::RunJobFlowCallable(const RunJobFlowRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::RunJobFlow, this, request);
}

void EMRClient::RunJobFlowAsync(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::RunJobFlowAsyncHelper, this, request, handler, context);
}

void EMRClient::RunJobFlowAsyncHelper(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunJobFlow(request), context);
}

SetTerminationProtectionOutcome EMRClient::SetTerminationProtection(const SetTerminationProtectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetTerminationProtectionOutcome(NoResult());
  }
  else
  {
    return SetTerminationProtectionOutcome(outcome.GetError());
  }
}

SetTerminationProtectionOutcomeCallable EMRClient::SetTerminationProtectionCallable(const SetTerminationProtectionRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::SetTerminationProtection, this, request);
}

void EMRClient::SetTerminationProtectionAsync(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::SetTerminationProtectionAsyncHelper, this, request, handler, context);
}

void EMRClient::SetTerminationProtectionAsyncHelper(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTerminationProtection(request), context);
}

SetVisibleToAllUsersOutcome EMRClient::SetVisibleToAllUsers(const SetVisibleToAllUsersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetVisibleToAllUsersOutcome(NoResult());
  }
  else
  {
    return SetVisibleToAllUsersOutcome(outcome.GetError());
  }
}

SetVisibleToAllUsersOutcomeCallable EMRClient::SetVisibleToAllUsersCallable(const SetVisibleToAllUsersRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::SetVisibleToAllUsers, this, request);
}

void EMRClient::SetVisibleToAllUsersAsync(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::SetVisibleToAllUsersAsyncHelper, this, request, handler, context);
}

void EMRClient::SetVisibleToAllUsersAsyncHelper(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetVisibleToAllUsers(request), context);
}

TerminateJobFlowsOutcome EMRClient::TerminateJobFlows(const TerminateJobFlowsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TerminateJobFlowsOutcome(NoResult());
  }
  else
  {
    return TerminateJobFlowsOutcome(outcome.GetError());
  }
}

TerminateJobFlowsOutcomeCallable EMRClient::TerminateJobFlowsCallable(const TerminateJobFlowsRequest& request) const
{
  return std::async(std::launch::async, &EMRClient::TerminateJobFlows, this, request);
}

void EMRClient::TerminateJobFlowsAsync(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EMRClient::TerminateJobFlowsAsyncHelper, this, request, handler, context);
}

void EMRClient::TerminateJobFlowsAsyncHelper(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateJobFlows(request), context);
}

