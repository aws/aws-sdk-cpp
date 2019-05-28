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

#include <aws/robomaker/RoboMakerClient.h>
#include <aws/robomaker/RoboMakerEndpoint.h>
#include <aws/robomaker/RoboMakerErrorMarshaller.h>
#include <aws/robomaker/model/BatchDescribeSimulationJobRequest.h>
#include <aws/robomaker/model/CancelDeploymentJobRequest.h>
#include <aws/robomaker/model/CancelSimulationJobRequest.h>
#include <aws/robomaker/model/CreateDeploymentJobRequest.h>
#include <aws/robomaker/model/CreateFleetRequest.h>
#include <aws/robomaker/model/CreateRobotRequest.h>
#include <aws/robomaker/model/CreateRobotApplicationRequest.h>
#include <aws/robomaker/model/CreateRobotApplicationVersionRequest.h>
#include <aws/robomaker/model/CreateSimulationApplicationRequest.h>
#include <aws/robomaker/model/CreateSimulationApplicationVersionRequest.h>
#include <aws/robomaker/model/CreateSimulationJobRequest.h>
#include <aws/robomaker/model/DeleteFleetRequest.h>
#include <aws/robomaker/model/DeleteRobotRequest.h>
#include <aws/robomaker/model/DeleteRobotApplicationRequest.h>
#include <aws/robomaker/model/DeleteSimulationApplicationRequest.h>
#include <aws/robomaker/model/DeregisterRobotRequest.h>
#include <aws/robomaker/model/DescribeDeploymentJobRequest.h>
#include <aws/robomaker/model/DescribeFleetRequest.h>
#include <aws/robomaker/model/DescribeRobotRequest.h>
#include <aws/robomaker/model/DescribeRobotApplicationRequest.h>
#include <aws/robomaker/model/DescribeSimulationApplicationRequest.h>
#include <aws/robomaker/model/DescribeSimulationJobRequest.h>
#include <aws/robomaker/model/ListDeploymentJobsRequest.h>
#include <aws/robomaker/model/ListFleetsRequest.h>
#include <aws/robomaker/model/ListRobotApplicationsRequest.h>
#include <aws/robomaker/model/ListRobotsRequest.h>
#include <aws/robomaker/model/ListSimulationApplicationsRequest.h>
#include <aws/robomaker/model/ListSimulationJobsRequest.h>
#include <aws/robomaker/model/ListTagsForResourceRequest.h>
#include <aws/robomaker/model/RegisterRobotRequest.h>
#include <aws/robomaker/model/RestartSimulationJobRequest.h>
#include <aws/robomaker/model/SyncDeploymentJobRequest.h>
#include <aws/robomaker/model/TagResourceRequest.h>
#include <aws/robomaker/model/UntagResourceRequest.h>
#include <aws/robomaker/model/UpdateRobotApplicationRequest.h>
#include <aws/robomaker/model/UpdateSimulationApplicationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RoboMaker;
using namespace Aws::RoboMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "robomaker";
static const char* ALLOCATION_TAG = "RoboMakerClient";


RoboMakerClient::RoboMakerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RoboMakerClient::~RoboMakerClient()
{
}

void RoboMakerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RoboMakerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RoboMakerClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchDescribeSimulationJobOutcome RoboMakerClient::BatchDescribeSimulationJob(const BatchDescribeSimulationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/batchDescribeSimulationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDescribeSimulationJobOutcome(BatchDescribeSimulationJobResult(outcome.GetResult()));
  }
  else
  {
    return BatchDescribeSimulationJobOutcome(outcome.GetError());
  }
}

BatchDescribeSimulationJobOutcomeCallable RoboMakerClient::BatchDescribeSimulationJobCallable(const BatchDescribeSimulationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDescribeSimulationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDescribeSimulationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::BatchDescribeSimulationJobAsync(const BatchDescribeSimulationJobRequest& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDescribeSimulationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::BatchDescribeSimulationJobAsyncHelper(const BatchDescribeSimulationJobRequest& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDescribeSimulationJob(request), context);
}

CancelDeploymentJobOutcome RoboMakerClient::CancelDeploymentJob(const CancelDeploymentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/cancelDeploymentJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelDeploymentJobOutcome(CancelDeploymentJobResult(outcome.GetResult()));
  }
  else
  {
    return CancelDeploymentJobOutcome(outcome.GetError());
  }
}

CancelDeploymentJobOutcomeCallable RoboMakerClient::CancelDeploymentJobCallable(const CancelDeploymentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelDeploymentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelDeploymentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CancelDeploymentJobAsync(const CancelDeploymentJobRequest& request, const CancelDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelDeploymentJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CancelDeploymentJobAsyncHelper(const CancelDeploymentJobRequest& request, const CancelDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelDeploymentJob(request), context);
}

CancelSimulationJobOutcome RoboMakerClient::CancelSimulationJob(const CancelSimulationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/cancelSimulationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelSimulationJobOutcome(CancelSimulationJobResult(outcome.GetResult()));
  }
  else
  {
    return CancelSimulationJobOutcome(outcome.GetError());
  }
}

CancelSimulationJobOutcomeCallable RoboMakerClient::CancelSimulationJobCallable(const CancelSimulationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSimulationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSimulationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CancelSimulationJobAsync(const CancelSimulationJobRequest& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelSimulationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CancelSimulationJobAsyncHelper(const CancelSimulationJobRequest& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSimulationJob(request), context);
}

CreateDeploymentJobOutcome RoboMakerClient::CreateDeploymentJob(const CreateDeploymentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createDeploymentJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentJobOutcome(CreateDeploymentJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentJobOutcome(outcome.GetError());
  }
}

CreateDeploymentJobOutcomeCallable RoboMakerClient::CreateDeploymentJobCallable(const CreateDeploymentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateDeploymentJobAsync(const CreateDeploymentJobRequest& request, const CreateDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateDeploymentJobAsyncHelper(const CreateDeploymentJobRequest& request, const CreateDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeploymentJob(request), context);
}

CreateFleetOutcome RoboMakerClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createFleet";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFleetOutcome(CreateFleetResult(outcome.GetResult()));
  }
  else
  {
    return CreateFleetOutcome(outcome.GetError());
  }
}

CreateFleetOutcomeCallable RoboMakerClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFleetAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateFleetAsyncHelper(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFleet(request), context);
}

CreateRobotOutcome RoboMakerClient::CreateRobot(const CreateRobotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createRobot";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRobotOutcome(CreateRobotResult(outcome.GetResult()));
  }
  else
  {
    return CreateRobotOutcome(outcome.GetError());
  }
}

CreateRobotOutcomeCallable RoboMakerClient::CreateRobotCallable(const CreateRobotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRobotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRobot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateRobotAsync(const CreateRobotRequest& request, const CreateRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRobotAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateRobotAsyncHelper(const CreateRobotRequest& request, const CreateRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRobot(request), context);
}

CreateRobotApplicationOutcome RoboMakerClient::CreateRobotApplication(const CreateRobotApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createRobotApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRobotApplicationOutcome(CreateRobotApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateRobotApplicationOutcome(outcome.GetError());
  }
}

CreateRobotApplicationOutcomeCallable RoboMakerClient::CreateRobotApplicationCallable(const CreateRobotApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRobotApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRobotApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateRobotApplicationAsync(const CreateRobotApplicationRequest& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRobotApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateRobotApplicationAsyncHelper(const CreateRobotApplicationRequest& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRobotApplication(request), context);
}

CreateRobotApplicationVersionOutcome RoboMakerClient::CreateRobotApplicationVersion(const CreateRobotApplicationVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createRobotApplicationVersion";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRobotApplicationVersionOutcome(CreateRobotApplicationVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateRobotApplicationVersionOutcome(outcome.GetError());
  }
}

CreateRobotApplicationVersionOutcomeCallable RoboMakerClient::CreateRobotApplicationVersionCallable(const CreateRobotApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRobotApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRobotApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateRobotApplicationVersionAsync(const CreateRobotApplicationVersionRequest& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRobotApplicationVersionAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateRobotApplicationVersionAsyncHelper(const CreateRobotApplicationVersionRequest& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRobotApplicationVersion(request), context);
}

CreateSimulationApplicationOutcome RoboMakerClient::CreateSimulationApplication(const CreateSimulationApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createSimulationApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSimulationApplicationOutcome(CreateSimulationApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateSimulationApplicationOutcome(outcome.GetError());
  }
}

CreateSimulationApplicationOutcomeCallable RoboMakerClient::CreateSimulationApplicationCallable(const CreateSimulationApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSimulationApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSimulationApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateSimulationApplicationAsync(const CreateSimulationApplicationRequest& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSimulationApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateSimulationApplicationAsyncHelper(const CreateSimulationApplicationRequest& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSimulationApplication(request), context);
}

CreateSimulationApplicationVersionOutcome RoboMakerClient::CreateSimulationApplicationVersion(const CreateSimulationApplicationVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createSimulationApplicationVersion";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSimulationApplicationVersionOutcome(CreateSimulationApplicationVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateSimulationApplicationVersionOutcome(outcome.GetError());
  }
}

CreateSimulationApplicationVersionOutcomeCallable RoboMakerClient::CreateSimulationApplicationVersionCallable(const CreateSimulationApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSimulationApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSimulationApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateSimulationApplicationVersionAsync(const CreateSimulationApplicationVersionRequest& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSimulationApplicationVersionAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateSimulationApplicationVersionAsyncHelper(const CreateSimulationApplicationVersionRequest& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSimulationApplicationVersion(request), context);
}

CreateSimulationJobOutcome RoboMakerClient::CreateSimulationJob(const CreateSimulationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createSimulationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSimulationJobOutcome(CreateSimulationJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateSimulationJobOutcome(outcome.GetError());
  }
}

CreateSimulationJobOutcomeCallable RoboMakerClient::CreateSimulationJobCallable(const CreateSimulationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSimulationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSimulationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateSimulationJobAsync(const CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSimulationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateSimulationJobAsyncHelper(const CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSimulationJob(request), context);
}

DeleteFleetOutcome RoboMakerClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteFleet";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFleetOutcome(DeleteFleetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFleetOutcome(outcome.GetError());
  }
}

DeleteFleetOutcomeCallable RoboMakerClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFleetAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DeleteFleetAsyncHelper(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFleet(request), context);
}

DeleteRobotOutcome RoboMakerClient::DeleteRobot(const DeleteRobotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteRobot";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRobotOutcome(DeleteRobotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRobotOutcome(outcome.GetError());
  }
}

DeleteRobotOutcomeCallable RoboMakerClient::DeleteRobotCallable(const DeleteRobotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRobotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRobot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DeleteRobotAsync(const DeleteRobotRequest& request, const DeleteRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRobotAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DeleteRobotAsyncHelper(const DeleteRobotRequest& request, const DeleteRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRobot(request), context);
}

DeleteRobotApplicationOutcome RoboMakerClient::DeleteRobotApplication(const DeleteRobotApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteRobotApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRobotApplicationOutcome(DeleteRobotApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRobotApplicationOutcome(outcome.GetError());
  }
}

DeleteRobotApplicationOutcomeCallable RoboMakerClient::DeleteRobotApplicationCallable(const DeleteRobotApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRobotApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRobotApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DeleteRobotApplicationAsync(const DeleteRobotApplicationRequest& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRobotApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DeleteRobotApplicationAsyncHelper(const DeleteRobotApplicationRequest& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRobotApplication(request), context);
}

DeleteSimulationApplicationOutcome RoboMakerClient::DeleteSimulationApplication(const DeleteSimulationApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteSimulationApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSimulationApplicationOutcome(DeleteSimulationApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSimulationApplicationOutcome(outcome.GetError());
  }
}

DeleteSimulationApplicationOutcomeCallable RoboMakerClient::DeleteSimulationApplicationCallable(const DeleteSimulationApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSimulationApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSimulationApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DeleteSimulationApplicationAsync(const DeleteSimulationApplicationRequest& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSimulationApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DeleteSimulationApplicationAsyncHelper(const DeleteSimulationApplicationRequest& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSimulationApplication(request), context);
}

DeregisterRobotOutcome RoboMakerClient::DeregisterRobot(const DeregisterRobotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deregisterRobot";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterRobotOutcome(DeregisterRobotResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterRobotOutcome(outcome.GetError());
  }
}

DeregisterRobotOutcomeCallable RoboMakerClient::DeregisterRobotCallable(const DeregisterRobotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterRobotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterRobot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DeregisterRobotAsync(const DeregisterRobotRequest& request, const DeregisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterRobotAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DeregisterRobotAsyncHelper(const DeregisterRobotRequest& request, const DeregisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterRobot(request), context);
}

DescribeDeploymentJobOutcome RoboMakerClient::DescribeDeploymentJob(const DescribeDeploymentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeDeploymentJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDeploymentJobOutcome(DescribeDeploymentJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeploymentJobOutcome(outcome.GetError());
  }
}

DescribeDeploymentJobOutcomeCallable RoboMakerClient::DescribeDeploymentJobCallable(const DescribeDeploymentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeploymentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeploymentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeDeploymentJobAsync(const DescribeDeploymentJobRequest& request, const DescribeDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeploymentJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeDeploymentJobAsyncHelper(const DescribeDeploymentJobRequest& request, const DescribeDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeploymentJob(request), context);
}

DescribeFleetOutcome RoboMakerClient::DescribeFleet(const DescribeFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeFleet";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetOutcome(DescribeFleetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetOutcome(outcome.GetError());
  }
}

DescribeFleetOutcomeCallable RoboMakerClient::DescribeFleetCallable(const DescribeFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeFleetAsync(const DescribeFleetRequest& request, const DescribeFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeFleetAsyncHelper(const DescribeFleetRequest& request, const DescribeFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleet(request), context);
}

DescribeRobotOutcome RoboMakerClient::DescribeRobot(const DescribeRobotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeRobot";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRobotOutcome(DescribeRobotResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRobotOutcome(outcome.GetError());
  }
}

DescribeRobotOutcomeCallable RoboMakerClient::DescribeRobotCallable(const DescribeRobotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRobotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRobot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeRobotAsync(const DescribeRobotRequest& request, const DescribeRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRobotAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeRobotAsyncHelper(const DescribeRobotRequest& request, const DescribeRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRobot(request), context);
}

DescribeRobotApplicationOutcome RoboMakerClient::DescribeRobotApplication(const DescribeRobotApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeRobotApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRobotApplicationOutcome(DescribeRobotApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRobotApplicationOutcome(outcome.GetError());
  }
}

DescribeRobotApplicationOutcomeCallable RoboMakerClient::DescribeRobotApplicationCallable(const DescribeRobotApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRobotApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRobotApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeRobotApplicationAsync(const DescribeRobotApplicationRequest& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRobotApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeRobotApplicationAsyncHelper(const DescribeRobotApplicationRequest& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRobotApplication(request), context);
}

DescribeSimulationApplicationOutcome RoboMakerClient::DescribeSimulationApplication(const DescribeSimulationApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeSimulationApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSimulationApplicationOutcome(DescribeSimulationApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSimulationApplicationOutcome(outcome.GetError());
  }
}

DescribeSimulationApplicationOutcomeCallable RoboMakerClient::DescribeSimulationApplicationCallable(const DescribeSimulationApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSimulationApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSimulationApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeSimulationApplicationAsync(const DescribeSimulationApplicationRequest& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSimulationApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeSimulationApplicationAsyncHelper(const DescribeSimulationApplicationRequest& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSimulationApplication(request), context);
}

DescribeSimulationJobOutcome RoboMakerClient::DescribeSimulationJob(const DescribeSimulationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeSimulationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSimulationJobOutcome(DescribeSimulationJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSimulationJobOutcome(outcome.GetError());
  }
}

DescribeSimulationJobOutcomeCallable RoboMakerClient::DescribeSimulationJobCallable(const DescribeSimulationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSimulationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSimulationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeSimulationJobAsync(const DescribeSimulationJobRequest& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSimulationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeSimulationJobAsyncHelper(const DescribeSimulationJobRequest& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSimulationJob(request), context);
}

ListDeploymentJobsOutcome RoboMakerClient::ListDeploymentJobs(const ListDeploymentJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listDeploymentJobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeploymentJobsOutcome(ListDeploymentJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentJobsOutcome(outcome.GetError());
  }
}

ListDeploymentJobsOutcomeCallable RoboMakerClient::ListDeploymentJobsCallable(const ListDeploymentJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListDeploymentJobsAsync(const ListDeploymentJobsRequest& request, const ListDeploymentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentJobsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListDeploymentJobsAsyncHelper(const ListDeploymentJobsRequest& request, const ListDeploymentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeploymentJobs(request), context);
}

ListFleetsOutcome RoboMakerClient::ListFleets(const ListFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listFleets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFleetsOutcome(ListFleetsResult(outcome.GetResult()));
  }
  else
  {
    return ListFleetsOutcome(outcome.GetError());
  }
}

ListFleetsOutcomeCallable RoboMakerClient::ListFleetsCallable(const ListFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListFleetsAsync(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFleetsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListFleetsAsyncHelper(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFleets(request), context);
}

ListRobotApplicationsOutcome RoboMakerClient::ListRobotApplications(const ListRobotApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listRobotApplications";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRobotApplicationsOutcome(ListRobotApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListRobotApplicationsOutcome(outcome.GetError());
  }
}

ListRobotApplicationsOutcomeCallable RoboMakerClient::ListRobotApplicationsCallable(const ListRobotApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRobotApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRobotApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListRobotApplicationsAsync(const ListRobotApplicationsRequest& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRobotApplicationsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListRobotApplicationsAsyncHelper(const ListRobotApplicationsRequest& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRobotApplications(request), context);
}

ListRobotsOutcome RoboMakerClient::ListRobots(const ListRobotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listRobots";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRobotsOutcome(ListRobotsResult(outcome.GetResult()));
  }
  else
  {
    return ListRobotsOutcome(outcome.GetError());
  }
}

ListRobotsOutcomeCallable RoboMakerClient::ListRobotsCallable(const ListRobotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRobotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRobots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListRobotsAsync(const ListRobotsRequest& request, const ListRobotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRobotsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListRobotsAsyncHelper(const ListRobotsRequest& request, const ListRobotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRobots(request), context);
}

ListSimulationApplicationsOutcome RoboMakerClient::ListSimulationApplications(const ListSimulationApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listSimulationApplications";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSimulationApplicationsOutcome(ListSimulationApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListSimulationApplicationsOutcome(outcome.GetError());
  }
}

ListSimulationApplicationsOutcomeCallable RoboMakerClient::ListSimulationApplicationsCallable(const ListSimulationApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSimulationApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSimulationApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListSimulationApplicationsAsync(const ListSimulationApplicationsRequest& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSimulationApplicationsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListSimulationApplicationsAsyncHelper(const ListSimulationApplicationsRequest& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSimulationApplications(request), context);
}

ListSimulationJobsOutcome RoboMakerClient::ListSimulationJobs(const ListSimulationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listSimulationJobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSimulationJobsOutcome(ListSimulationJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListSimulationJobsOutcome(outcome.GetError());
  }
}

ListSimulationJobsOutcomeCallable RoboMakerClient::ListSimulationJobsCallable(const ListSimulationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSimulationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSimulationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListSimulationJobsAsync(const ListSimulationJobsRequest& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSimulationJobsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListSimulationJobsAsyncHelper(const ListSimulationJobsRequest& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSimulationJobs(request), context);
}

ListTagsForResourceOutcome RoboMakerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
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

ListTagsForResourceOutcomeCallable RoboMakerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

RegisterRobotOutcome RoboMakerClient::RegisterRobot(const RegisterRobotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/registerRobot";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterRobotOutcome(RegisterRobotResult(outcome.GetResult()));
  }
  else
  {
    return RegisterRobotOutcome(outcome.GetError());
  }
}

RegisterRobotOutcomeCallable RoboMakerClient::RegisterRobotCallable(const RegisterRobotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterRobotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterRobot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::RegisterRobotAsync(const RegisterRobotRequest& request, const RegisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterRobotAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::RegisterRobotAsyncHelper(const RegisterRobotRequest& request, const RegisterRobotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterRobot(request), context);
}

RestartSimulationJobOutcome RoboMakerClient::RestartSimulationJob(const RestartSimulationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restartSimulationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestartSimulationJobOutcome(RestartSimulationJobResult(outcome.GetResult()));
  }
  else
  {
    return RestartSimulationJobOutcome(outcome.GetError());
  }
}

RestartSimulationJobOutcomeCallable RoboMakerClient::RestartSimulationJobCallable(const RestartSimulationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestartSimulationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestartSimulationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::RestartSimulationJobAsync(const RestartSimulationJobRequest& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestartSimulationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::RestartSimulationJobAsyncHelper(const RestartSimulationJobRequest& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestartSimulationJob(request), context);
}

SyncDeploymentJobOutcome RoboMakerClient::SyncDeploymentJob(const SyncDeploymentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/syncDeploymentJob";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SyncDeploymentJobOutcome(SyncDeploymentJobResult(outcome.GetResult()));
  }
  else
  {
    return SyncDeploymentJobOutcome(outcome.GetError());
  }
}

SyncDeploymentJobOutcomeCallable RoboMakerClient::SyncDeploymentJobCallable(const SyncDeploymentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SyncDeploymentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SyncDeploymentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::SyncDeploymentJobAsync(const SyncDeploymentJobRequest& request, const SyncDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SyncDeploymentJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::SyncDeploymentJobAsyncHelper(const SyncDeploymentJobRequest& request, const SyncDeploymentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SyncDeploymentJob(request), context);
}

TagResourceOutcome RoboMakerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
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

TagResourceOutcomeCallable RoboMakerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome RoboMakerClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable RoboMakerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateRobotApplicationOutcome RoboMakerClient::UpdateRobotApplication(const UpdateRobotApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateRobotApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRobotApplicationOutcome(UpdateRobotApplicationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRobotApplicationOutcome(outcome.GetError());
  }
}

UpdateRobotApplicationOutcomeCallable RoboMakerClient::UpdateRobotApplicationCallable(const UpdateRobotApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRobotApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRobotApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::UpdateRobotApplicationAsync(const UpdateRobotApplicationRequest& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRobotApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::UpdateRobotApplicationAsyncHelper(const UpdateRobotApplicationRequest& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRobotApplication(request), context);
}

UpdateSimulationApplicationOutcome RoboMakerClient::UpdateSimulationApplication(const UpdateSimulationApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateSimulationApplication";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSimulationApplicationOutcome(UpdateSimulationApplicationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSimulationApplicationOutcome(outcome.GetError());
  }
}

UpdateSimulationApplicationOutcomeCallable RoboMakerClient::UpdateSimulationApplicationCallable(const UpdateSimulationApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSimulationApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSimulationApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::UpdateSimulationApplicationAsync(const UpdateSimulationApplicationRequest& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSimulationApplicationAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::UpdateSimulationApplicationAsyncHelper(const UpdateSimulationApplicationRequest& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSimulationApplication(request), context);
}

