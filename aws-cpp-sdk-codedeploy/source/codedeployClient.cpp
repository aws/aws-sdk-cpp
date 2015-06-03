/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeployClient.h>
#include <aws/codedeploy/codedeployEndpoint.h>
#include <aws/codedeploy/codedeployErrorMarshaller.h>
#include <aws/codedeploy/model/AddTagsToOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationsRequest.h>
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
using namespace Aws::codedeploy;
using namespace Aws::codedeploy::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codedeploy";
static const char* ALLOCATION_TAG = "codedeployClient";

codedeployClient::codedeployClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<codedeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

codedeployClient::codedeployClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<codedeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

codedeployClient::codedeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<codedeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

codedeployClient::~codedeployClient()
{
}

void codedeployClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << codedeployEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsToOnPremisesInstancesOutcome codedeployClient::AddTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest& request) const
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

AddTagsToOnPremisesInstancesOutcomeCallable codedeployClient::AddTagsToOnPremisesInstancesCallable(const AddTagsToOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::AddTagsToOnPremisesInstances, this, request);
}

void codedeployClient::AddTagsToOnPremisesInstancesAsync(const AddTagsToOnPremisesInstancesRequest& request) const
{
  m_executor->Submit(&codedeployClient::AddTagsToOnPremisesInstancesAsyncHelper, this, request);
}

void codedeployClient::AddTagsToOnPremisesInstancesAsyncHelper(const AddTagsToOnPremisesInstancesRequest& request) const
{
  m_onAddTagsToOnPremisesInstancesOutcomeReceived(this, request, AddTagsToOnPremisesInstances(request));
}

BatchGetApplicationsOutcome codedeployClient::BatchGetApplications(const BatchGetApplicationsRequest& request) const
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

BatchGetApplicationsOutcomeCallable codedeployClient::BatchGetApplicationsCallable(const BatchGetApplicationsRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::BatchGetApplications, this, request);
}

void codedeployClient::BatchGetApplicationsAsync(const BatchGetApplicationsRequest& request) const
{
  m_executor->Submit(&codedeployClient::BatchGetApplicationsAsyncHelper, this, request);
}

void codedeployClient::BatchGetApplicationsAsyncHelper(const BatchGetApplicationsRequest& request) const
{
  m_onBatchGetApplicationsOutcomeReceived(this, request, BatchGetApplications(request));
}

BatchGetDeploymentsOutcome codedeployClient::BatchGetDeployments(const BatchGetDeploymentsRequest& request) const
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

BatchGetDeploymentsOutcomeCallable codedeployClient::BatchGetDeploymentsCallable(const BatchGetDeploymentsRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::BatchGetDeployments, this, request);
}

void codedeployClient::BatchGetDeploymentsAsync(const BatchGetDeploymentsRequest& request) const
{
  m_executor->Submit(&codedeployClient::BatchGetDeploymentsAsyncHelper, this, request);
}

void codedeployClient::BatchGetDeploymentsAsyncHelper(const BatchGetDeploymentsRequest& request) const
{
  m_onBatchGetDeploymentsOutcomeReceived(this, request, BatchGetDeployments(request));
}

BatchGetOnPremisesInstancesOutcome codedeployClient::BatchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest& request) const
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

BatchGetOnPremisesInstancesOutcomeCallable codedeployClient::BatchGetOnPremisesInstancesCallable(const BatchGetOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::BatchGetOnPremisesInstances, this, request);
}

void codedeployClient::BatchGetOnPremisesInstancesAsync(const BatchGetOnPremisesInstancesRequest& request) const
{
  m_executor->Submit(&codedeployClient::BatchGetOnPremisesInstancesAsyncHelper, this, request);
}

void codedeployClient::BatchGetOnPremisesInstancesAsyncHelper(const BatchGetOnPremisesInstancesRequest& request) const
{
  m_onBatchGetOnPremisesInstancesOutcomeReceived(this, request, BatchGetOnPremisesInstances(request));
}

CreateApplicationOutcome codedeployClient::CreateApplication(const CreateApplicationRequest& request) const
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

CreateApplicationOutcomeCallable codedeployClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::CreateApplication, this, request);
}

void codedeployClient::CreateApplicationAsync(const CreateApplicationRequest& request) const
{
  m_executor->Submit(&codedeployClient::CreateApplicationAsyncHelper, this, request);
}

void codedeployClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request) const
{
  m_onCreateApplicationOutcomeReceived(this, request, CreateApplication(request));
}

CreateDeploymentOutcome codedeployClient::CreateDeployment(const CreateDeploymentRequest& request) const
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

CreateDeploymentOutcomeCallable codedeployClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::CreateDeployment, this, request);
}

void codedeployClient::CreateDeploymentAsync(const CreateDeploymentRequest& request) const
{
  m_executor->Submit(&codedeployClient::CreateDeploymentAsyncHelper, this, request);
}

void codedeployClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request) const
{
  m_onCreateDeploymentOutcomeReceived(this, request, CreateDeployment(request));
}

CreateDeploymentConfigOutcome codedeployClient::CreateDeploymentConfig(const CreateDeploymentConfigRequest& request) const
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

CreateDeploymentConfigOutcomeCallable codedeployClient::CreateDeploymentConfigCallable(const CreateDeploymentConfigRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::CreateDeploymentConfig, this, request);
}

void codedeployClient::CreateDeploymentConfigAsync(const CreateDeploymentConfigRequest& request) const
{
  m_executor->Submit(&codedeployClient::CreateDeploymentConfigAsyncHelper, this, request);
}

void codedeployClient::CreateDeploymentConfigAsyncHelper(const CreateDeploymentConfigRequest& request) const
{
  m_onCreateDeploymentConfigOutcomeReceived(this, request, CreateDeploymentConfig(request));
}

CreateDeploymentGroupOutcome codedeployClient::CreateDeploymentGroup(const CreateDeploymentGroupRequest& request) const
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

CreateDeploymentGroupOutcomeCallable codedeployClient::CreateDeploymentGroupCallable(const CreateDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::CreateDeploymentGroup, this, request);
}

void codedeployClient::CreateDeploymentGroupAsync(const CreateDeploymentGroupRequest& request) const
{
  m_executor->Submit(&codedeployClient::CreateDeploymentGroupAsyncHelper, this, request);
}

void codedeployClient::CreateDeploymentGroupAsyncHelper(const CreateDeploymentGroupRequest& request) const
{
  m_onCreateDeploymentGroupOutcomeReceived(this, request, CreateDeploymentGroup(request));
}

DeleteApplicationOutcome codedeployClient::DeleteApplication(const DeleteApplicationRequest& request) const
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

DeleteApplicationOutcomeCallable codedeployClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::DeleteApplication, this, request);
}

void codedeployClient::DeleteApplicationAsync(const DeleteApplicationRequest& request) const
{
  m_executor->Submit(&codedeployClient::DeleteApplicationAsyncHelper, this, request);
}

void codedeployClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request) const
{
  m_onDeleteApplicationOutcomeReceived(this, request, DeleteApplication(request));
}

DeleteDeploymentConfigOutcome codedeployClient::DeleteDeploymentConfig(const DeleteDeploymentConfigRequest& request) const
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

DeleteDeploymentConfigOutcomeCallable codedeployClient::DeleteDeploymentConfigCallable(const DeleteDeploymentConfigRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::DeleteDeploymentConfig, this, request);
}

void codedeployClient::DeleteDeploymentConfigAsync(const DeleteDeploymentConfigRequest& request) const
{
  m_executor->Submit(&codedeployClient::DeleteDeploymentConfigAsyncHelper, this, request);
}

void codedeployClient::DeleteDeploymentConfigAsyncHelper(const DeleteDeploymentConfigRequest& request) const
{
  m_onDeleteDeploymentConfigOutcomeReceived(this, request, DeleteDeploymentConfig(request));
}

DeleteDeploymentGroupOutcome codedeployClient::DeleteDeploymentGroup(const DeleteDeploymentGroupRequest& request) const
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

DeleteDeploymentGroupOutcomeCallable codedeployClient::DeleteDeploymentGroupCallable(const DeleteDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::DeleteDeploymentGroup, this, request);
}

void codedeployClient::DeleteDeploymentGroupAsync(const DeleteDeploymentGroupRequest& request) const
{
  m_executor->Submit(&codedeployClient::DeleteDeploymentGroupAsyncHelper, this, request);
}

void codedeployClient::DeleteDeploymentGroupAsyncHelper(const DeleteDeploymentGroupRequest& request) const
{
  m_onDeleteDeploymentGroupOutcomeReceived(this, request, DeleteDeploymentGroup(request));
}

DeregisterOnPremisesInstanceOutcome codedeployClient::DeregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest& request) const
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

DeregisterOnPremisesInstanceOutcomeCallable codedeployClient::DeregisterOnPremisesInstanceCallable(const DeregisterOnPremisesInstanceRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::DeregisterOnPremisesInstance, this, request);
}

void codedeployClient::DeregisterOnPremisesInstanceAsync(const DeregisterOnPremisesInstanceRequest& request) const
{
  m_executor->Submit(&codedeployClient::DeregisterOnPremisesInstanceAsyncHelper, this, request);
}

void codedeployClient::DeregisterOnPremisesInstanceAsyncHelper(const DeregisterOnPremisesInstanceRequest& request) const
{
  m_onDeregisterOnPremisesInstanceOutcomeReceived(this, request, DeregisterOnPremisesInstance(request));
}

GetApplicationOutcome codedeployClient::GetApplication(const GetApplicationRequest& request) const
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

GetApplicationOutcomeCallable codedeployClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::GetApplication, this, request);
}

void codedeployClient::GetApplicationAsync(const GetApplicationRequest& request) const
{
  m_executor->Submit(&codedeployClient::GetApplicationAsyncHelper, this, request);
}

void codedeployClient::GetApplicationAsyncHelper(const GetApplicationRequest& request) const
{
  m_onGetApplicationOutcomeReceived(this, request, GetApplication(request));
}

GetApplicationRevisionOutcome codedeployClient::GetApplicationRevision(const GetApplicationRevisionRequest& request) const
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

GetApplicationRevisionOutcomeCallable codedeployClient::GetApplicationRevisionCallable(const GetApplicationRevisionRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::GetApplicationRevision, this, request);
}

void codedeployClient::GetApplicationRevisionAsync(const GetApplicationRevisionRequest& request) const
{
  m_executor->Submit(&codedeployClient::GetApplicationRevisionAsyncHelper, this, request);
}

void codedeployClient::GetApplicationRevisionAsyncHelper(const GetApplicationRevisionRequest& request) const
{
  m_onGetApplicationRevisionOutcomeReceived(this, request, GetApplicationRevision(request));
}

GetDeploymentOutcome codedeployClient::GetDeployment(const GetDeploymentRequest& request) const
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

GetDeploymentOutcomeCallable codedeployClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::GetDeployment, this, request);
}

void codedeployClient::GetDeploymentAsync(const GetDeploymentRequest& request) const
{
  m_executor->Submit(&codedeployClient::GetDeploymentAsyncHelper, this, request);
}

void codedeployClient::GetDeploymentAsyncHelper(const GetDeploymentRequest& request) const
{
  m_onGetDeploymentOutcomeReceived(this, request, GetDeployment(request));
}

GetDeploymentConfigOutcome codedeployClient::GetDeploymentConfig(const GetDeploymentConfigRequest& request) const
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

GetDeploymentConfigOutcomeCallable codedeployClient::GetDeploymentConfigCallable(const GetDeploymentConfigRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::GetDeploymentConfig, this, request);
}

void codedeployClient::GetDeploymentConfigAsync(const GetDeploymentConfigRequest& request) const
{
  m_executor->Submit(&codedeployClient::GetDeploymentConfigAsyncHelper, this, request);
}

void codedeployClient::GetDeploymentConfigAsyncHelper(const GetDeploymentConfigRequest& request) const
{
  m_onGetDeploymentConfigOutcomeReceived(this, request, GetDeploymentConfig(request));
}

GetDeploymentGroupOutcome codedeployClient::GetDeploymentGroup(const GetDeploymentGroupRequest& request) const
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

GetDeploymentGroupOutcomeCallable codedeployClient::GetDeploymentGroupCallable(const GetDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::GetDeploymentGroup, this, request);
}

void codedeployClient::GetDeploymentGroupAsync(const GetDeploymentGroupRequest& request) const
{
  m_executor->Submit(&codedeployClient::GetDeploymentGroupAsyncHelper, this, request);
}

void codedeployClient::GetDeploymentGroupAsyncHelper(const GetDeploymentGroupRequest& request) const
{
  m_onGetDeploymentGroupOutcomeReceived(this, request, GetDeploymentGroup(request));
}

GetDeploymentInstanceOutcome codedeployClient::GetDeploymentInstance(const GetDeploymentInstanceRequest& request) const
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

GetDeploymentInstanceOutcomeCallable codedeployClient::GetDeploymentInstanceCallable(const GetDeploymentInstanceRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::GetDeploymentInstance, this, request);
}

void codedeployClient::GetDeploymentInstanceAsync(const GetDeploymentInstanceRequest& request) const
{
  m_executor->Submit(&codedeployClient::GetDeploymentInstanceAsyncHelper, this, request);
}

void codedeployClient::GetDeploymentInstanceAsyncHelper(const GetDeploymentInstanceRequest& request) const
{
  m_onGetDeploymentInstanceOutcomeReceived(this, request, GetDeploymentInstance(request));
}

GetOnPremisesInstanceOutcome codedeployClient::GetOnPremisesInstance(const GetOnPremisesInstanceRequest& request) const
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

GetOnPremisesInstanceOutcomeCallable codedeployClient::GetOnPremisesInstanceCallable(const GetOnPremisesInstanceRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::GetOnPremisesInstance, this, request);
}

void codedeployClient::GetOnPremisesInstanceAsync(const GetOnPremisesInstanceRequest& request) const
{
  m_executor->Submit(&codedeployClient::GetOnPremisesInstanceAsyncHelper, this, request);
}

void codedeployClient::GetOnPremisesInstanceAsyncHelper(const GetOnPremisesInstanceRequest& request) const
{
  m_onGetOnPremisesInstanceOutcomeReceived(this, request, GetOnPremisesInstance(request));
}

ListApplicationRevisionsOutcome codedeployClient::ListApplicationRevisions(const ListApplicationRevisionsRequest& request) const
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

ListApplicationRevisionsOutcomeCallable codedeployClient::ListApplicationRevisionsCallable(const ListApplicationRevisionsRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::ListApplicationRevisions, this, request);
}

void codedeployClient::ListApplicationRevisionsAsync(const ListApplicationRevisionsRequest& request) const
{
  m_executor->Submit(&codedeployClient::ListApplicationRevisionsAsyncHelper, this, request);
}

void codedeployClient::ListApplicationRevisionsAsyncHelper(const ListApplicationRevisionsRequest& request) const
{
  m_onListApplicationRevisionsOutcomeReceived(this, request, ListApplicationRevisions(request));
}

ListApplicationsOutcome codedeployClient::ListApplications(const ListApplicationsRequest& request) const
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

ListApplicationsOutcomeCallable codedeployClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::ListApplications, this, request);
}

void codedeployClient::ListApplicationsAsync(const ListApplicationsRequest& request) const
{
  m_executor->Submit(&codedeployClient::ListApplicationsAsyncHelper, this, request);
}

void codedeployClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request) const
{
  m_onListApplicationsOutcomeReceived(this, request, ListApplications(request));
}

ListDeploymentConfigsOutcome codedeployClient::ListDeploymentConfigs(const ListDeploymentConfigsRequest& request) const
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

ListDeploymentConfigsOutcomeCallable codedeployClient::ListDeploymentConfigsCallable(const ListDeploymentConfigsRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::ListDeploymentConfigs, this, request);
}

void codedeployClient::ListDeploymentConfigsAsync(const ListDeploymentConfigsRequest& request) const
{
  m_executor->Submit(&codedeployClient::ListDeploymentConfigsAsyncHelper, this, request);
}

void codedeployClient::ListDeploymentConfigsAsyncHelper(const ListDeploymentConfigsRequest& request) const
{
  m_onListDeploymentConfigsOutcomeReceived(this, request, ListDeploymentConfigs(request));
}

ListDeploymentGroupsOutcome codedeployClient::ListDeploymentGroups(const ListDeploymentGroupsRequest& request) const
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

ListDeploymentGroupsOutcomeCallable codedeployClient::ListDeploymentGroupsCallable(const ListDeploymentGroupsRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::ListDeploymentGroups, this, request);
}

void codedeployClient::ListDeploymentGroupsAsync(const ListDeploymentGroupsRequest& request) const
{
  m_executor->Submit(&codedeployClient::ListDeploymentGroupsAsyncHelper, this, request);
}

void codedeployClient::ListDeploymentGroupsAsyncHelper(const ListDeploymentGroupsRequest& request) const
{
  m_onListDeploymentGroupsOutcomeReceived(this, request, ListDeploymentGroups(request));
}

ListDeploymentInstancesOutcome codedeployClient::ListDeploymentInstances(const ListDeploymentInstancesRequest& request) const
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

ListDeploymentInstancesOutcomeCallable codedeployClient::ListDeploymentInstancesCallable(const ListDeploymentInstancesRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::ListDeploymentInstances, this, request);
}

void codedeployClient::ListDeploymentInstancesAsync(const ListDeploymentInstancesRequest& request) const
{
  m_executor->Submit(&codedeployClient::ListDeploymentInstancesAsyncHelper, this, request);
}

void codedeployClient::ListDeploymentInstancesAsyncHelper(const ListDeploymentInstancesRequest& request) const
{
  m_onListDeploymentInstancesOutcomeReceived(this, request, ListDeploymentInstances(request));
}

ListDeploymentsOutcome codedeployClient::ListDeployments(const ListDeploymentsRequest& request) const
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

ListDeploymentsOutcomeCallable codedeployClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::ListDeployments, this, request);
}

void codedeployClient::ListDeploymentsAsync(const ListDeploymentsRequest& request) const
{
  m_executor->Submit(&codedeployClient::ListDeploymentsAsyncHelper, this, request);
}

void codedeployClient::ListDeploymentsAsyncHelper(const ListDeploymentsRequest& request) const
{
  m_onListDeploymentsOutcomeReceived(this, request, ListDeployments(request));
}

ListOnPremisesInstancesOutcome codedeployClient::ListOnPremisesInstances(const ListOnPremisesInstancesRequest& request) const
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

ListOnPremisesInstancesOutcomeCallable codedeployClient::ListOnPremisesInstancesCallable(const ListOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::ListOnPremisesInstances, this, request);
}

void codedeployClient::ListOnPremisesInstancesAsync(const ListOnPremisesInstancesRequest& request) const
{
  m_executor->Submit(&codedeployClient::ListOnPremisesInstancesAsyncHelper, this, request);
}

void codedeployClient::ListOnPremisesInstancesAsyncHelper(const ListOnPremisesInstancesRequest& request) const
{
  m_onListOnPremisesInstancesOutcomeReceived(this, request, ListOnPremisesInstances(request));
}

RegisterApplicationRevisionOutcome codedeployClient::RegisterApplicationRevision(const RegisterApplicationRevisionRequest& request) const
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

RegisterApplicationRevisionOutcomeCallable codedeployClient::RegisterApplicationRevisionCallable(const RegisterApplicationRevisionRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::RegisterApplicationRevision, this, request);
}

void codedeployClient::RegisterApplicationRevisionAsync(const RegisterApplicationRevisionRequest& request) const
{
  m_executor->Submit(&codedeployClient::RegisterApplicationRevisionAsyncHelper, this, request);
}

void codedeployClient::RegisterApplicationRevisionAsyncHelper(const RegisterApplicationRevisionRequest& request) const
{
  m_onRegisterApplicationRevisionOutcomeReceived(this, request, RegisterApplicationRevision(request));
}

RegisterOnPremisesInstanceOutcome codedeployClient::RegisterOnPremisesInstance(const RegisterOnPremisesInstanceRequest& request) const
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

RegisterOnPremisesInstanceOutcomeCallable codedeployClient::RegisterOnPremisesInstanceCallable(const RegisterOnPremisesInstanceRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::RegisterOnPremisesInstance, this, request);
}

void codedeployClient::RegisterOnPremisesInstanceAsync(const RegisterOnPremisesInstanceRequest& request) const
{
  m_executor->Submit(&codedeployClient::RegisterOnPremisesInstanceAsyncHelper, this, request);
}

void codedeployClient::RegisterOnPremisesInstanceAsyncHelper(const RegisterOnPremisesInstanceRequest& request) const
{
  m_onRegisterOnPremisesInstanceOutcomeReceived(this, request, RegisterOnPremisesInstance(request));
}

RemoveTagsFromOnPremisesInstancesOutcome codedeployClient::RemoveTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest& request) const
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

RemoveTagsFromOnPremisesInstancesOutcomeCallable codedeployClient::RemoveTagsFromOnPremisesInstancesCallable(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::RemoveTagsFromOnPremisesInstances, this, request);
}

void codedeployClient::RemoveTagsFromOnPremisesInstancesAsync(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  m_executor->Submit(&codedeployClient::RemoveTagsFromOnPremisesInstancesAsyncHelper, this, request);
}

void codedeployClient::RemoveTagsFromOnPremisesInstancesAsyncHelper(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  m_onRemoveTagsFromOnPremisesInstancesOutcomeReceived(this, request, RemoveTagsFromOnPremisesInstances(request));
}

StopDeploymentOutcome codedeployClient::StopDeployment(const StopDeploymentRequest& request) const
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

StopDeploymentOutcomeCallable codedeployClient::StopDeploymentCallable(const StopDeploymentRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::StopDeployment, this, request);
}

void codedeployClient::StopDeploymentAsync(const StopDeploymentRequest& request) const
{
  m_executor->Submit(&codedeployClient::StopDeploymentAsyncHelper, this, request);
}

void codedeployClient::StopDeploymentAsyncHelper(const StopDeploymentRequest& request) const
{
  m_onStopDeploymentOutcomeReceived(this, request, StopDeployment(request));
}

UpdateApplicationOutcome codedeployClient::UpdateApplication(const UpdateApplicationRequest& request) const
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

UpdateApplicationOutcomeCallable codedeployClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::UpdateApplication, this, request);
}

void codedeployClient::UpdateApplicationAsync(const UpdateApplicationRequest& request) const
{
  m_executor->Submit(&codedeployClient::UpdateApplicationAsyncHelper, this, request);
}

void codedeployClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request) const
{
  m_onUpdateApplicationOutcomeReceived(this, request, UpdateApplication(request));
}

UpdateDeploymentGroupOutcome codedeployClient::UpdateDeploymentGroup(const UpdateDeploymentGroupRequest& request) const
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

UpdateDeploymentGroupOutcomeCallable codedeployClient::UpdateDeploymentGroupCallable(const UpdateDeploymentGroupRequest& request) const
{
  return std::async(std::launch::async, &codedeployClient::UpdateDeploymentGroup, this, request);
}

void codedeployClient::UpdateDeploymentGroupAsync(const UpdateDeploymentGroupRequest& request) const
{
  m_executor->Submit(&codedeployClient::UpdateDeploymentGroupAsyncHelper, this, request);
}

void codedeployClient::UpdateDeploymentGroupAsyncHelper(const UpdateDeploymentGroupRequest& request) const
{
  m_onUpdateDeploymentGroupOutcomeReceived(this, request, UpdateDeploymentGroup(request));
}

