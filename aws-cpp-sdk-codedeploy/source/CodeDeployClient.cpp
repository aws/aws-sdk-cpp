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
#include <aws/codedeploy/CodeDeployClient.h>
#include <aws/codedeploy/CodeDeployEndpoint.h>
#include <aws/codedeploy/CodeDeployErrorMarshaller.h>
#include <aws/codedeploy/model/AddTagsToOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentInstancesRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentsRequest.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/CreateApplicationRequest.h>
#include <aws/codedeploy/model/CreateDeploymentRequest.h>
#include <aws/codedeploy/model/CreateDeploymentConfigRequest.h>
#include <aws/codedeploy/model/CreateDeploymentGroupRequest.h>
#include <aws/codedeploy/model/DeleteApplicationRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentConfigRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupRequest.h>
#include <aws/codedeploy/model/DeregisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/GetApplicationRequest.h>
#include <aws/codedeploy/model/GetApplicationRevisionRequest.h>
#include <aws/codedeploy/model/GetDeploymentRequest.h>
#include <aws/codedeploy/model/GetDeploymentConfigRequest.h>
#include <aws/codedeploy/model/GetDeploymentGroupRequest.h>
#include <aws/codedeploy/model/GetDeploymentInstanceRequest.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/ListApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/ListApplicationsRequest.h>
#include <aws/codedeploy/model/ListDeploymentConfigsRequest.h>
#include <aws/codedeploy/model/ListDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/ListDeploymentInstancesRequest.h>
#include <aws/codedeploy/model/ListDeploymentsRequest.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/RegisterApplicationRevisionRequest.h>
#include <aws/codedeploy/model/RegisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/RemoveTagsFromOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/StopDeploymentRequest.h>
#include <aws/codedeploy/model/UpdateApplicationRequest.h>
#include <aws/codedeploy/model/UpdateDeploymentGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeDeploy;
using namespace Aws::CodeDeploy::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codedeploy";
static const char* ALLOCATION_TAG = "CodeDeployClient";

CodeDeployClient::CodeDeployClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::~CodeDeployClient()
{
}

void CodeDeployClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << CodeDeployEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsToOnPremisesInstancesOutcome CodeDeployClient::AddTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsToOnPremisesInstancesOutcome(NoResult());
  }
  else
  {
    return AddTagsToOnPremisesInstancesOutcome(outcome.GetError());
  }
}

AddTagsToOnPremisesInstancesOutcomeCallable CodeDeployClient::AddTagsToOnPremisesInstancesCallable(const AddTagsToOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::AddTagsToOnPremisesInstances, this, request);
}

void CodeDeployClient::AddTagsToOnPremisesInstancesAsync(const AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::AddTagsToOnPremisesInstancesAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::AddTagsToOnPremisesInstancesAsyncHelper(const AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToOnPremisesInstances(request), context);
}

BatchGetApplicationRevisionsOutcome CodeDeployClient::BatchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetApplicationRevisionsOutcome(BatchGetApplicationRevisionsResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetApplicationRevisionsOutcome(outcome.GetError());
  }
}

BatchGetApplicationRevisionsOutcomeCallable CodeDeployClient::BatchGetApplicationRevisionsCallable(const BatchGetApplicationRevisionsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::BatchGetApplicationRevisions, this, request);
}

void CodeDeployClient::BatchGetApplicationRevisionsAsync(const BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::BatchGetApplicationRevisionsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::BatchGetApplicationRevisionsAsyncHelper(const BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetApplicationRevisions(request), context);
}

BatchGetApplicationsOutcome CodeDeployClient::BatchGetApplications(const BatchGetApplicationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetApplicationsOutcome(BatchGetApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetApplicationsOutcome(outcome.GetError());
  }
}

BatchGetApplicationsOutcomeCallable CodeDeployClient::BatchGetApplicationsCallable(const BatchGetApplicationsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::BatchGetApplications, this, request);
}

void CodeDeployClient::BatchGetApplicationsAsync(const BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::BatchGetApplicationsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::BatchGetApplicationsAsyncHelper(const BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetApplications(request), context);
}

BatchGetDeploymentGroupsOutcome CodeDeployClient::BatchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetDeploymentGroupsOutcome(BatchGetDeploymentGroupsResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetDeploymentGroupsOutcome(outcome.GetError());
  }
}

BatchGetDeploymentGroupsOutcomeCallable CodeDeployClient::BatchGetDeploymentGroupsCallable(const BatchGetDeploymentGroupsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::BatchGetDeploymentGroups, this, request);
}

void CodeDeployClient::BatchGetDeploymentGroupsAsync(const BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::BatchGetDeploymentGroupsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::BatchGetDeploymentGroupsAsyncHelper(const BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetDeploymentGroups(request), context);
}

BatchGetDeploymentInstancesOutcome CodeDeployClient::BatchGetDeploymentInstances(const BatchGetDeploymentInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetDeploymentInstancesOutcome(BatchGetDeploymentInstancesResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetDeploymentInstancesOutcome(outcome.GetError());
  }
}

BatchGetDeploymentInstancesOutcomeCallable CodeDeployClient::BatchGetDeploymentInstancesCallable(const BatchGetDeploymentInstancesRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::BatchGetDeploymentInstances, this, request);
}

void CodeDeployClient::BatchGetDeploymentInstancesAsync(const BatchGetDeploymentInstancesRequest& request, const BatchGetDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::BatchGetDeploymentInstancesAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::BatchGetDeploymentInstancesAsyncHelper(const BatchGetDeploymentInstancesRequest& request, const BatchGetDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetDeploymentInstances(request), context);
}

BatchGetDeploymentsOutcome CodeDeployClient::BatchGetDeployments(const BatchGetDeploymentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetDeploymentsOutcome(BatchGetDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetDeploymentsOutcome(outcome.GetError());
  }
}

BatchGetDeploymentsOutcomeCallable CodeDeployClient::BatchGetDeploymentsCallable(const BatchGetDeploymentsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::BatchGetDeployments, this, request);
}

void CodeDeployClient::BatchGetDeploymentsAsync(const BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::BatchGetDeploymentsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::BatchGetDeploymentsAsyncHelper(const BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetDeployments(request), context);
}

BatchGetOnPremisesInstancesOutcome CodeDeployClient::BatchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetOnPremisesInstancesOutcome(BatchGetOnPremisesInstancesResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetOnPremisesInstancesOutcome(outcome.GetError());
  }
}

BatchGetOnPremisesInstancesOutcomeCallable CodeDeployClient::BatchGetOnPremisesInstancesCallable(const BatchGetOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::BatchGetOnPremisesInstances, this, request);
}

void CodeDeployClient::BatchGetOnPremisesInstancesAsync(const BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::BatchGetOnPremisesInstancesAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::BatchGetOnPremisesInstancesAsyncHelper(const BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetOnPremisesInstances(request), context);
}

CreateApplicationOutcome CodeDeployClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateApplicationOutcome(CreateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationOutcome(outcome.GetError());
  }
}

CreateApplicationOutcomeCallable CodeDeployClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::CreateApplication, this, request);
}

void CodeDeployClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::CreateApplicationAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateDeploymentOutcome CodeDeployClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentOutcome(CreateDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentOutcome(outcome.GetError());
  }
}

CreateDeploymentOutcomeCallable CodeDeployClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::CreateDeployment, this, request);
}

void CodeDeployClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::CreateDeploymentAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeployment(request), context);
}

CreateDeploymentConfigOutcome CodeDeployClient::CreateDeploymentConfig(const CreateDeploymentConfigRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentConfigOutcome(CreateDeploymentConfigResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentConfigOutcome(outcome.GetError());
  }
}

CreateDeploymentConfigOutcomeCallable CodeDeployClient::CreateDeploymentConfigCallable(const CreateDeploymentConfigRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::CreateDeploymentConfig, this, request);
}

void CodeDeployClient::CreateDeploymentConfigAsync(const CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::CreateDeploymentConfigAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::CreateDeploymentConfigAsyncHelper(const CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeploymentConfig(request), context);
}

CreateDeploymentGroupOutcome CodeDeployClient::CreateDeploymentGroup(const CreateDeploymentGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentGroupOutcome(CreateDeploymentGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentGroupOutcome(outcome.GetError());
  }
}

CreateDeploymentGroupOutcomeCallable CodeDeployClient::CreateDeploymentGroupCallable(const CreateDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::CreateDeploymentGroup, this, request);
}

void CodeDeployClient::CreateDeploymentGroupAsync(const CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::CreateDeploymentGroupAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::CreateDeploymentGroupAsyncHelper(const CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeploymentGroup(request), context);
}

DeleteApplicationOutcome CodeDeployClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteApplicationOutcome(NoResult());
  }
  else
  {
    return DeleteApplicationOutcome(outcome.GetError());
  }
}

DeleteApplicationOutcomeCallable CodeDeployClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::DeleteApplication, this, request);
}

void CodeDeployClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::DeleteApplicationAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteDeploymentConfigOutcome CodeDeployClient::DeleteDeploymentConfig(const DeleteDeploymentConfigRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDeploymentConfigOutcome(NoResult());
  }
  else
  {
    return DeleteDeploymentConfigOutcome(outcome.GetError());
  }
}

DeleteDeploymentConfigOutcomeCallable CodeDeployClient::DeleteDeploymentConfigCallable(const DeleteDeploymentConfigRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::DeleteDeploymentConfig, this, request);
}

void CodeDeployClient::DeleteDeploymentConfigAsync(const DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::DeleteDeploymentConfigAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::DeleteDeploymentConfigAsyncHelper(const DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeploymentConfig(request), context);
}

DeleteDeploymentGroupOutcome CodeDeployClient::DeleteDeploymentGroup(const DeleteDeploymentGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDeploymentGroupOutcome(DeleteDeploymentGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDeploymentGroupOutcome(outcome.GetError());
  }
}

DeleteDeploymentGroupOutcomeCallable CodeDeployClient::DeleteDeploymentGroupCallable(const DeleteDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::DeleteDeploymentGroup, this, request);
}

void CodeDeployClient::DeleteDeploymentGroupAsync(const DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::DeleteDeploymentGroupAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::DeleteDeploymentGroupAsyncHelper(const DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeploymentGroup(request), context);
}

DeregisterOnPremisesInstanceOutcome CodeDeployClient::DeregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterOnPremisesInstanceOutcome(NoResult());
  }
  else
  {
    return DeregisterOnPremisesInstanceOutcome(outcome.GetError());
  }
}

DeregisterOnPremisesInstanceOutcomeCallable CodeDeployClient::DeregisterOnPremisesInstanceCallable(const DeregisterOnPremisesInstanceRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::DeregisterOnPremisesInstance, this, request);
}

void CodeDeployClient::DeregisterOnPremisesInstanceAsync(const DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::DeregisterOnPremisesInstanceAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::DeregisterOnPremisesInstanceAsyncHelper(const DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterOnPremisesInstance(request), context);
}

GetApplicationOutcome CodeDeployClient::GetApplication(const GetApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetApplicationOutcome(GetApplicationResult(outcome.GetResult()));
  }
  else
  {
    return GetApplicationOutcome(outcome.GetError());
  }
}

GetApplicationOutcomeCallable CodeDeployClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::GetApplication, this, request);
}

void CodeDeployClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::GetApplicationAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::GetApplicationAsyncHelper(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplication(request), context);
}

GetApplicationRevisionOutcome CodeDeployClient::GetApplicationRevision(const GetApplicationRevisionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetApplicationRevisionOutcome(GetApplicationRevisionResult(outcome.GetResult()));
  }
  else
  {
    return GetApplicationRevisionOutcome(outcome.GetError());
  }
}

GetApplicationRevisionOutcomeCallable CodeDeployClient::GetApplicationRevisionCallable(const GetApplicationRevisionRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::GetApplicationRevision, this, request);
}

void CodeDeployClient::GetApplicationRevisionAsync(const GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::GetApplicationRevisionAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::GetApplicationRevisionAsyncHelper(const GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplicationRevision(request), context);
}

GetDeploymentOutcome CodeDeployClient::GetDeployment(const GetDeploymentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDeploymentOutcome(GetDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentOutcome(outcome.GetError());
  }
}

GetDeploymentOutcomeCallable CodeDeployClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::GetDeployment, this, request);
}

void CodeDeployClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::GetDeploymentAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::GetDeploymentAsyncHelper(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeployment(request), context);
}

GetDeploymentConfigOutcome CodeDeployClient::GetDeploymentConfig(const GetDeploymentConfigRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDeploymentConfigOutcome(GetDeploymentConfigResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentConfigOutcome(outcome.GetError());
  }
}

GetDeploymentConfigOutcomeCallable CodeDeployClient::GetDeploymentConfigCallable(const GetDeploymentConfigRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::GetDeploymentConfig, this, request);
}

void CodeDeployClient::GetDeploymentConfigAsync(const GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::GetDeploymentConfigAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::GetDeploymentConfigAsyncHelper(const GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentConfig(request), context);
}

GetDeploymentGroupOutcome CodeDeployClient::GetDeploymentGroup(const GetDeploymentGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDeploymentGroupOutcome(GetDeploymentGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentGroupOutcome(outcome.GetError());
  }
}

GetDeploymentGroupOutcomeCallable CodeDeployClient::GetDeploymentGroupCallable(const GetDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::GetDeploymentGroup, this, request);
}

void CodeDeployClient::GetDeploymentGroupAsync(const GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::GetDeploymentGroupAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::GetDeploymentGroupAsyncHelper(const GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentGroup(request), context);
}

GetDeploymentInstanceOutcome CodeDeployClient::GetDeploymentInstance(const GetDeploymentInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDeploymentInstanceOutcome(GetDeploymentInstanceResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentInstanceOutcome(outcome.GetError());
  }
}

GetDeploymentInstanceOutcomeCallable CodeDeployClient::GetDeploymentInstanceCallable(const GetDeploymentInstanceRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::GetDeploymentInstance, this, request);
}

void CodeDeployClient::GetDeploymentInstanceAsync(const GetDeploymentInstanceRequest& request, const GetDeploymentInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::GetDeploymentInstanceAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::GetDeploymentInstanceAsyncHelper(const GetDeploymentInstanceRequest& request, const GetDeploymentInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentInstance(request), context);
}

GetOnPremisesInstanceOutcome CodeDeployClient::GetOnPremisesInstance(const GetOnPremisesInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetOnPremisesInstanceOutcome(GetOnPremisesInstanceResult(outcome.GetResult()));
  }
  else
  {
    return GetOnPremisesInstanceOutcome(outcome.GetError());
  }
}

GetOnPremisesInstanceOutcomeCallable CodeDeployClient::GetOnPremisesInstanceCallable(const GetOnPremisesInstanceRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::GetOnPremisesInstance, this, request);
}

void CodeDeployClient::GetOnPremisesInstanceAsync(const GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::GetOnPremisesInstanceAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::GetOnPremisesInstanceAsyncHelper(const GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOnPremisesInstance(request), context);
}

ListApplicationRevisionsOutcome CodeDeployClient::ListApplicationRevisions(const ListApplicationRevisionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListApplicationRevisionsOutcome(ListApplicationRevisionsResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationRevisionsOutcome(outcome.GetError());
  }
}

ListApplicationRevisionsOutcomeCallable CodeDeployClient::ListApplicationRevisionsCallable(const ListApplicationRevisionsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::ListApplicationRevisions, this, request);
}

void CodeDeployClient::ListApplicationRevisionsAsync(const ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::ListApplicationRevisionsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::ListApplicationRevisionsAsyncHelper(const ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationRevisions(request), context);
}

ListApplicationsOutcome CodeDeployClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListApplicationsOutcome(ListApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationsOutcome(outcome.GetError());
  }
}

ListApplicationsOutcomeCallable CodeDeployClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::ListApplications, this, request);
}

void CodeDeployClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::ListApplicationsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListDeploymentConfigsOutcome CodeDeployClient::ListDeploymentConfigs(const ListDeploymentConfigsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDeploymentConfigsOutcome(ListDeploymentConfigsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentConfigsOutcome(outcome.GetError());
  }
}

ListDeploymentConfigsOutcomeCallable CodeDeployClient::ListDeploymentConfigsCallable(const ListDeploymentConfigsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::ListDeploymentConfigs, this, request);
}

void CodeDeployClient::ListDeploymentConfigsAsync(const ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::ListDeploymentConfigsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::ListDeploymentConfigsAsyncHelper(const ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentConfigs(request), context);
}

ListDeploymentGroupsOutcome CodeDeployClient::ListDeploymentGroups(const ListDeploymentGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDeploymentGroupsOutcome(ListDeploymentGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentGroupsOutcome(outcome.GetError());
  }
}

ListDeploymentGroupsOutcomeCallable CodeDeployClient::ListDeploymentGroupsCallable(const ListDeploymentGroupsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::ListDeploymentGroups, this, request);
}

void CodeDeployClient::ListDeploymentGroupsAsync(const ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::ListDeploymentGroupsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::ListDeploymentGroupsAsyncHelper(const ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentGroups(request), context);
}

ListDeploymentInstancesOutcome CodeDeployClient::ListDeploymentInstances(const ListDeploymentInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDeploymentInstancesOutcome(ListDeploymentInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentInstancesOutcome(outcome.GetError());
  }
}

ListDeploymentInstancesOutcomeCallable CodeDeployClient::ListDeploymentInstancesCallable(const ListDeploymentInstancesRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::ListDeploymentInstances, this, request);
}

void CodeDeployClient::ListDeploymentInstancesAsync(const ListDeploymentInstancesRequest& request, const ListDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::ListDeploymentInstancesAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::ListDeploymentInstancesAsyncHelper(const ListDeploymentInstancesRequest& request, const ListDeploymentInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentInstances(request), context);
}

ListDeploymentsOutcome CodeDeployClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDeploymentsOutcome(ListDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentsOutcome(outcome.GetError());
  }
}

ListDeploymentsOutcomeCallable CodeDeployClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::ListDeployments, this, request);
}

void CodeDeployClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::ListDeploymentsAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::ListDeploymentsAsyncHelper(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeployments(request), context);
}

ListOnPremisesInstancesOutcome CodeDeployClient::ListOnPremisesInstances(const ListOnPremisesInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListOnPremisesInstancesOutcome(ListOnPremisesInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListOnPremisesInstancesOutcome(outcome.GetError());
  }
}

ListOnPremisesInstancesOutcomeCallable CodeDeployClient::ListOnPremisesInstancesCallable(const ListOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::ListOnPremisesInstances, this, request);
}

void CodeDeployClient::ListOnPremisesInstancesAsync(const ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::ListOnPremisesInstancesAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::ListOnPremisesInstancesAsyncHelper(const ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOnPremisesInstances(request), context);
}

RegisterApplicationRevisionOutcome CodeDeployClient::RegisterApplicationRevision(const RegisterApplicationRevisionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterApplicationRevisionOutcome(NoResult());
  }
  else
  {
    return RegisterApplicationRevisionOutcome(outcome.GetError());
  }
}

RegisterApplicationRevisionOutcomeCallable CodeDeployClient::RegisterApplicationRevisionCallable(const RegisterApplicationRevisionRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::RegisterApplicationRevision, this, request);
}

void CodeDeployClient::RegisterApplicationRevisionAsync(const RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::RegisterApplicationRevisionAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::RegisterApplicationRevisionAsyncHelper(const RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterApplicationRevision(request), context);
}

RegisterOnPremisesInstanceOutcome CodeDeployClient::RegisterOnPremisesInstance(const RegisterOnPremisesInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterOnPremisesInstanceOutcome(NoResult());
  }
  else
  {
    return RegisterOnPremisesInstanceOutcome(outcome.GetError());
  }
}

RegisterOnPremisesInstanceOutcomeCallable CodeDeployClient::RegisterOnPremisesInstanceCallable(const RegisterOnPremisesInstanceRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::RegisterOnPremisesInstance, this, request);
}

void CodeDeployClient::RegisterOnPremisesInstanceAsync(const RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::RegisterOnPremisesInstanceAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::RegisterOnPremisesInstanceAsyncHelper(const RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterOnPremisesInstance(request), context);
}

RemoveTagsFromOnPremisesInstancesOutcome CodeDeployClient::RemoveTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromOnPremisesInstancesOutcome(NoResult());
  }
  else
  {
    return RemoveTagsFromOnPremisesInstancesOutcome(outcome.GetError());
  }
}

RemoveTagsFromOnPremisesInstancesOutcomeCallable CodeDeployClient::RemoveTagsFromOnPremisesInstancesCallable(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::RemoveTagsFromOnPremisesInstances, this, request);
}

void CodeDeployClient::RemoveTagsFromOnPremisesInstancesAsync(const RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::RemoveTagsFromOnPremisesInstancesAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::RemoveTagsFromOnPremisesInstancesAsyncHelper(const RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromOnPremisesInstances(request), context);
}

StopDeploymentOutcome CodeDeployClient::StopDeployment(const StopDeploymentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopDeploymentOutcome(StopDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return StopDeploymentOutcome(outcome.GetError());
  }
}

StopDeploymentOutcomeCallable CodeDeployClient::StopDeploymentCallable(const StopDeploymentRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::StopDeployment, this, request);
}

void CodeDeployClient::StopDeploymentAsync(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::StopDeploymentAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::StopDeploymentAsyncHelper(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDeployment(request), context);
}

UpdateApplicationOutcome CodeDeployClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateApplicationOutcome(NoResult());
  }
  else
  {
    return UpdateApplicationOutcome(outcome.GetError());
  }
}

UpdateApplicationOutcomeCallable CodeDeployClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::UpdateApplication, this, request);
}

void CodeDeployClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::UpdateApplicationAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

UpdateDeploymentGroupOutcome CodeDeployClient::UpdateDeploymentGroup(const UpdateDeploymentGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDeploymentGroupOutcome(UpdateDeploymentGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeploymentGroupOutcome(outcome.GetError());
  }
}

UpdateDeploymentGroupOutcomeCallable CodeDeployClient::UpdateDeploymentGroupCallable(const UpdateDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &CodeDeployClient::UpdateDeploymentGroup, this, request);
}

void CodeDeployClient::UpdateDeploymentGroupAsync(const UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodeDeployClient::UpdateDeploymentGroupAsyncHelper, this, request, handler, context);
}

void CodeDeployClient::UpdateDeploymentGroupAsyncHelper(const UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeploymentGroup(request), context);
}

