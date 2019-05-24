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

#include <aws/codedeploy/CodeDeployClient.h>
#include <aws/codedeploy/CodeDeployEndpoint.h>
#include <aws/codedeploy/CodeDeployErrorMarshaller.h>
#include <aws/codedeploy/model/AddTagsToOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentTargetsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentsRequest.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/ContinueDeploymentRequest.h>
#include <aws/codedeploy/model/CreateApplicationRequest.h>
#include <aws/codedeploy/model/CreateDeploymentRequest.h>
#include <aws/codedeploy/model/CreateDeploymentConfigRequest.h>
#include <aws/codedeploy/model/CreateDeploymentGroupRequest.h>
#include <aws/codedeploy/model/DeleteApplicationRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentConfigRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupRequest.h>
#include <aws/codedeploy/model/DeleteGitHubAccountTokenRequest.h>
#include <aws/codedeploy/model/DeregisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/GetApplicationRequest.h>
#include <aws/codedeploy/model/GetApplicationRevisionRequest.h>
#include <aws/codedeploy/model/GetDeploymentRequest.h>
#include <aws/codedeploy/model/GetDeploymentConfigRequest.h>
#include <aws/codedeploy/model/GetDeploymentGroupRequest.h>
#include <aws/codedeploy/model/GetDeploymentTargetRequest.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/ListApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/ListApplicationsRequest.h>
#include <aws/codedeploy/model/ListDeploymentConfigsRequest.h>
#include <aws/codedeploy/model/ListDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/ListDeploymentTargetsRequest.h>
#include <aws/codedeploy/model/ListDeploymentsRequest.h>
#include <aws/codedeploy/model/ListGitHubAccountTokenNamesRequest.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/ListTagsForResourceRequest.h>
#include <aws/codedeploy/model/PutLifecycleEventHookExecutionStatusRequest.h>
#include <aws/codedeploy/model/RegisterApplicationRevisionRequest.h>
#include <aws/codedeploy/model/RegisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/RemoveTagsFromOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/StopDeploymentRequest.h>
#include <aws/codedeploy/model/TagResourceRequest.h>
#include <aws/codedeploy/model/UntagResourceRequest.h>
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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeDeployEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeDeployClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsToOnPremisesInstancesOutcome CodeDeployClient::AddTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::AddTagsToOnPremisesInstancesAsync(const AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToOnPremisesInstancesAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::AddTagsToOnPremisesInstancesAsyncHelper(const AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToOnPremisesInstances(request), context);
}

BatchGetApplicationRevisionsOutcome CodeDeployClient::BatchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< BatchGetApplicationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetApplicationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetApplicationRevisionsAsync(const BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetApplicationRevisionsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::BatchGetApplicationRevisionsAsyncHelper(const BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetApplicationRevisions(request), context);
}

BatchGetApplicationsOutcome CodeDeployClient::BatchGetApplications(const BatchGetApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< BatchGetApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetApplicationsAsync(const BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetApplicationsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::BatchGetApplicationsAsyncHelper(const BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetApplications(request), context);
}

BatchGetDeploymentGroupsOutcome CodeDeployClient::BatchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeploymentGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetDeploymentGroupsAsync(const BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetDeploymentGroupsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::BatchGetDeploymentGroupsAsyncHelper(const BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetDeploymentGroups(request), context);
}

BatchGetDeploymentTargetsOutcome CodeDeployClient::BatchGetDeploymentTargets(const BatchGetDeploymentTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetDeploymentTargetsOutcome(BatchGetDeploymentTargetsResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetDeploymentTargetsOutcome(outcome.GetError());
  }
}

BatchGetDeploymentTargetsOutcomeCallable CodeDeployClient::BatchGetDeploymentTargetsCallable(const BatchGetDeploymentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeploymentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetDeploymentTargetsAsync(const BatchGetDeploymentTargetsRequest& request, const BatchGetDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetDeploymentTargetsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::BatchGetDeploymentTargetsAsyncHelper(const BatchGetDeploymentTargetsRequest& request, const BatchGetDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetDeploymentTargets(request), context);
}

BatchGetDeploymentsOutcome CodeDeployClient::BatchGetDeployments(const BatchGetDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetDeploymentsAsync(const BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetDeploymentsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::BatchGetDeploymentsAsyncHelper(const BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetDeployments(request), context);
}

BatchGetOnPremisesInstancesOutcome CodeDeployClient::BatchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< BatchGetOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetOnPremisesInstancesAsync(const BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetOnPremisesInstancesAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::BatchGetOnPremisesInstancesAsyncHelper(const BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetOnPremisesInstances(request), context);
}

ContinueDeploymentOutcome CodeDeployClient::ContinueDeployment(const ContinueDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ContinueDeploymentOutcome(NoResult());
  }
  else
  {
    return ContinueDeploymentOutcome(outcome.GetError());
  }
}

ContinueDeploymentOutcomeCallable CodeDeployClient::ContinueDeploymentCallable(const ContinueDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ContinueDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ContinueDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ContinueDeploymentAsync(const ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ContinueDeploymentAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ContinueDeploymentAsyncHelper(const ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ContinueDeployment(request), context);
}

CreateApplicationOutcome CodeDeployClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateDeploymentOutcome CodeDeployClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeployment(request), context);
}

CreateDeploymentConfigOutcome CodeDeployClient::CreateDeploymentConfig(const CreateDeploymentConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateDeploymentConfigAsync(const CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentConfigAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::CreateDeploymentConfigAsyncHelper(const CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeploymentConfig(request), context);
}

CreateDeploymentGroupOutcome CodeDeployClient::CreateDeploymentGroup(const CreateDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateDeploymentGroupAsync(const CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentGroupAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::CreateDeploymentGroupAsyncHelper(const CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeploymentGroup(request), context);
}

DeleteApplicationOutcome CodeDeployClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteDeploymentConfigOutcome CodeDeployClient::DeleteDeploymentConfig(const DeleteDeploymentConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteDeploymentConfigAsync(const DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeploymentConfigAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::DeleteDeploymentConfigAsyncHelper(const DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeploymentConfig(request), context);
}

DeleteDeploymentGroupOutcome CodeDeployClient::DeleteDeploymentGroup(const DeleteDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteDeploymentGroupAsync(const DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeploymentGroupAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::DeleteDeploymentGroupAsyncHelper(const DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeploymentGroup(request), context);
}

DeleteGitHubAccountTokenOutcome CodeDeployClient::DeleteGitHubAccountToken(const DeleteGitHubAccountTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGitHubAccountTokenOutcome(DeleteGitHubAccountTokenResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGitHubAccountTokenOutcome(outcome.GetError());
  }
}

DeleteGitHubAccountTokenOutcomeCallable CodeDeployClient::DeleteGitHubAccountTokenCallable(const DeleteGitHubAccountTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGitHubAccountTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGitHubAccountToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteGitHubAccountTokenAsync(const DeleteGitHubAccountTokenRequest& request, const DeleteGitHubAccountTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGitHubAccountTokenAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::DeleteGitHubAccountTokenAsyncHelper(const DeleteGitHubAccountTokenRequest& request, const DeleteGitHubAccountTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGitHubAccountToken(request), context);
}

DeregisterOnPremisesInstanceOutcome CodeDeployClient::DeregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeregisterOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeregisterOnPremisesInstanceAsync(const DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterOnPremisesInstanceAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::DeregisterOnPremisesInstanceAsyncHelper(const DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterOnPremisesInstance(request), context);
}

GetApplicationOutcome CodeDeployClient::GetApplication(const GetApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::GetApplicationAsyncHelper(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplication(request), context);
}

GetApplicationRevisionOutcome CodeDeployClient::GetApplicationRevision(const GetApplicationRevisionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetApplicationRevisionAsync(const GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApplicationRevisionAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::GetApplicationRevisionAsyncHelper(const GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApplicationRevision(request), context);
}

GetDeploymentOutcome CodeDeployClient::GetDeployment(const GetDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::GetDeploymentAsyncHelper(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeployment(request), context);
}

GetDeploymentConfigOutcome CodeDeployClient::GetDeploymentConfig(const GetDeploymentConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentConfigAsync(const GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentConfigAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::GetDeploymentConfigAsyncHelper(const GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentConfig(request), context);
}

GetDeploymentGroupOutcome CodeDeployClient::GetDeploymentGroup(const GetDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentGroupAsync(const GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentGroupAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::GetDeploymentGroupAsyncHelper(const GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentGroup(request), context);
}

GetDeploymentTargetOutcome CodeDeployClient::GetDeploymentTarget(const GetDeploymentTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeploymentTargetOutcome(GetDeploymentTargetResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentTargetOutcome(outcome.GetError());
  }
}

GetDeploymentTargetOutcomeCallable CodeDeployClient::GetDeploymentTargetCallable(const GetDeploymentTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentTargetAsync(const GetDeploymentTargetRequest& request, const GetDeploymentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentTargetAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::GetDeploymentTargetAsyncHelper(const GetDeploymentTargetRequest& request, const GetDeploymentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentTarget(request), context);
}

GetOnPremisesInstanceOutcome CodeDeployClient::GetOnPremisesInstance(const GetOnPremisesInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< GetOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetOnPremisesInstanceAsync(const GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOnPremisesInstanceAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::GetOnPremisesInstanceAsyncHelper(const GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOnPremisesInstance(request), context);
}

ListApplicationRevisionsOutcome CodeDeployClient::ListApplicationRevisions(const ListApplicationRevisionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListApplicationRevisionsAsync(const ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationRevisionsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListApplicationRevisionsAsyncHelper(const ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplicationRevisions(request), context);
}

ListApplicationsOutcome CodeDeployClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListDeploymentConfigsOutcome CodeDeployClient::ListDeploymentConfigs(const ListDeploymentConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentConfigsAsync(const ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentConfigsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListDeploymentConfigsAsyncHelper(const ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentConfigs(request), context);
}

ListDeploymentGroupsOutcome CodeDeployClient::ListDeploymentGroups(const ListDeploymentGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentGroupsAsync(const ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentGroupsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListDeploymentGroupsAsyncHelper(const ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentGroups(request), context);
}

ListDeploymentTargetsOutcome CodeDeployClient::ListDeploymentTargets(const ListDeploymentTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeploymentTargetsOutcome(ListDeploymentTargetsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentTargetsOutcome(outcome.GetError());
  }
}

ListDeploymentTargetsOutcomeCallable CodeDeployClient::ListDeploymentTargetsCallable(const ListDeploymentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentTargetsAsync(const ListDeploymentTargetsRequest& request, const ListDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentTargetsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListDeploymentTargetsAsyncHelper(const ListDeploymentTargetsRequest& request, const ListDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentTargets(request), context);
}

ListDeploymentsOutcome CodeDeployClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentsAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListDeploymentsAsyncHelper(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeployments(request), context);
}

ListGitHubAccountTokenNamesOutcome CodeDeployClient::ListGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGitHubAccountTokenNamesOutcome(ListGitHubAccountTokenNamesResult(outcome.GetResult()));
  }
  else
  {
    return ListGitHubAccountTokenNamesOutcome(outcome.GetError());
  }
}

ListGitHubAccountTokenNamesOutcomeCallable CodeDeployClient::ListGitHubAccountTokenNamesCallable(const ListGitHubAccountTokenNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGitHubAccountTokenNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGitHubAccountTokenNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListGitHubAccountTokenNamesAsync(const ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGitHubAccountTokenNamesAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListGitHubAccountTokenNamesAsyncHelper(const ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGitHubAccountTokenNames(request), context);
}

ListOnPremisesInstancesOutcome CodeDeployClient::ListOnPremisesInstances(const ListOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ListOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListOnPremisesInstancesAsync(const ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOnPremisesInstancesAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListOnPremisesInstancesAsyncHelper(const ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOnPremisesInstances(request), context);
}

ListTagsForResourceOutcome CodeDeployClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable CodeDeployClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutLifecycleEventHookExecutionStatusOutcome CodeDeployClient::PutLifecycleEventHookExecutionStatus(const PutLifecycleEventHookExecutionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutLifecycleEventHookExecutionStatusOutcome(PutLifecycleEventHookExecutionStatusResult(outcome.GetResult()));
  }
  else
  {
    return PutLifecycleEventHookExecutionStatusOutcome(outcome.GetError());
  }
}

PutLifecycleEventHookExecutionStatusOutcomeCallable CodeDeployClient::PutLifecycleEventHookExecutionStatusCallable(const PutLifecycleEventHookExecutionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleEventHookExecutionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecycleEventHookExecutionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::PutLifecycleEventHookExecutionStatusAsync(const PutLifecycleEventHookExecutionStatusRequest& request, const PutLifecycleEventHookExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLifecycleEventHookExecutionStatusAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::PutLifecycleEventHookExecutionStatusAsyncHelper(const PutLifecycleEventHookExecutionStatusRequest& request, const PutLifecycleEventHookExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLifecycleEventHookExecutionStatus(request), context);
}

RegisterApplicationRevisionOutcome CodeDeployClient::RegisterApplicationRevision(const RegisterApplicationRevisionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< RegisterApplicationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterApplicationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::RegisterApplicationRevisionAsync(const RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterApplicationRevisionAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::RegisterApplicationRevisionAsyncHelper(const RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterApplicationRevision(request), context);
}

RegisterOnPremisesInstanceOutcome CodeDeployClient::RegisterOnPremisesInstance(const RegisterOnPremisesInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< RegisterOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::RegisterOnPremisesInstanceAsync(const RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterOnPremisesInstanceAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::RegisterOnPremisesInstanceAsyncHelper(const RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterOnPremisesInstance(request), context);
}

RemoveTagsFromOnPremisesInstancesOutcome CodeDeployClient::RemoveTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::RemoveTagsFromOnPremisesInstancesAsync(const RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromOnPremisesInstancesAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::RemoveTagsFromOnPremisesInstancesAsyncHelper(const RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromOnPremisesInstances(request), context);
}

StopDeploymentOutcome CodeDeployClient::StopDeployment(const StopDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< StopDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::StopDeploymentAsync(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDeploymentAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::StopDeploymentAsyncHelper(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDeployment(request), context);
}

TagResourceOutcome CodeDeployClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable CodeDeployClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome CodeDeployClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable CodeDeployClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateApplicationOutcome CodeDeployClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

UpdateDeploymentGroupOutcome CodeDeployClient::UpdateDeploymentGroup(const UpdateDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::UpdateDeploymentGroupAsync(const UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeploymentGroupAsyncHelper( request, handler, context ); } );
}

void CodeDeployClient::UpdateDeploymentGroupAsyncHelper(const UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeploymentGroup(request), context);
}

