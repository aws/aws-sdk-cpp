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

#include <aws/robomaker/RoboMakerClient.h>
#include <aws/robomaker/RoboMakerEndpoint.h>
#include <aws/robomaker/RoboMakerErrorMarshaller.h>
#include <aws/robomaker/model/BatchDeleteWorldsRequest.h>
#include <aws/robomaker/model/BatchDescribeSimulationJobRequest.h>
#include <aws/robomaker/model/CancelDeploymentJobRequest.h>
#include <aws/robomaker/model/CancelSimulationJobRequest.h>
#include <aws/robomaker/model/CancelSimulationJobBatchRequest.h>
#include <aws/robomaker/model/CancelWorldExportJobRequest.h>
#include <aws/robomaker/model/CancelWorldGenerationJobRequest.h>
#include <aws/robomaker/model/CreateDeploymentJobRequest.h>
#include <aws/robomaker/model/CreateFleetRequest.h>
#include <aws/robomaker/model/CreateRobotRequest.h>
#include <aws/robomaker/model/CreateRobotApplicationRequest.h>
#include <aws/robomaker/model/CreateRobotApplicationVersionRequest.h>
#include <aws/robomaker/model/CreateSimulationApplicationRequest.h>
#include <aws/robomaker/model/CreateSimulationApplicationVersionRequest.h>
#include <aws/robomaker/model/CreateSimulationJobRequest.h>
#include <aws/robomaker/model/CreateWorldExportJobRequest.h>
#include <aws/robomaker/model/CreateWorldGenerationJobRequest.h>
#include <aws/robomaker/model/CreateWorldTemplateRequest.h>
#include <aws/robomaker/model/DeleteFleetRequest.h>
#include <aws/robomaker/model/DeleteRobotRequest.h>
#include <aws/robomaker/model/DeleteRobotApplicationRequest.h>
#include <aws/robomaker/model/DeleteSimulationApplicationRequest.h>
#include <aws/robomaker/model/DeleteWorldTemplateRequest.h>
#include <aws/robomaker/model/DeregisterRobotRequest.h>
#include <aws/robomaker/model/DescribeDeploymentJobRequest.h>
#include <aws/robomaker/model/DescribeFleetRequest.h>
#include <aws/robomaker/model/DescribeRobotRequest.h>
#include <aws/robomaker/model/DescribeRobotApplicationRequest.h>
#include <aws/robomaker/model/DescribeSimulationApplicationRequest.h>
#include <aws/robomaker/model/DescribeSimulationJobRequest.h>
#include <aws/robomaker/model/DescribeSimulationJobBatchRequest.h>
#include <aws/robomaker/model/DescribeWorldRequest.h>
#include <aws/robomaker/model/DescribeWorldExportJobRequest.h>
#include <aws/robomaker/model/DescribeWorldGenerationJobRequest.h>
#include <aws/robomaker/model/DescribeWorldTemplateRequest.h>
#include <aws/robomaker/model/GetWorldTemplateBodyRequest.h>
#include <aws/robomaker/model/ListDeploymentJobsRequest.h>
#include <aws/robomaker/model/ListFleetsRequest.h>
#include <aws/robomaker/model/ListRobotApplicationsRequest.h>
#include <aws/robomaker/model/ListRobotsRequest.h>
#include <aws/robomaker/model/ListSimulationApplicationsRequest.h>
#include <aws/robomaker/model/ListSimulationJobBatchesRequest.h>
#include <aws/robomaker/model/ListSimulationJobsRequest.h>
#include <aws/robomaker/model/ListTagsForResourceRequest.h>
#include <aws/robomaker/model/ListWorldExportJobsRequest.h>
#include <aws/robomaker/model/ListWorldGenerationJobsRequest.h>
#include <aws/robomaker/model/ListWorldTemplatesRequest.h>
#include <aws/robomaker/model/ListWorldsRequest.h>
#include <aws/robomaker/model/RegisterRobotRequest.h>
#include <aws/robomaker/model/RestartSimulationJobRequest.h>
#include <aws/robomaker/model/StartSimulationJobBatchRequest.h>
#include <aws/robomaker/model/SyncDeploymentJobRequest.h>
#include <aws/robomaker/model/TagResourceRequest.h>
#include <aws/robomaker/model/UntagResourceRequest.h>
#include <aws/robomaker/model/UpdateRobotApplicationRequest.h>
#include <aws/robomaker/model/UpdateSimulationApplicationRequest.h>
#include <aws/robomaker/model/UpdateWorldTemplateRequest.h>

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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("RoboMaker");
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

BatchDeleteWorldsOutcome RoboMakerClient::BatchDeleteWorlds(const BatchDeleteWorldsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/batchDeleteWorlds";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchDeleteWorldsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteWorldsOutcomeCallable RoboMakerClient::BatchDeleteWorldsCallable(const BatchDeleteWorldsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteWorldsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteWorlds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::BatchDeleteWorldsAsync(const BatchDeleteWorldsRequest& request, const BatchDeleteWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteWorldsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::BatchDeleteWorldsAsyncHelper(const BatchDeleteWorldsRequest& request, const BatchDeleteWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteWorlds(request), context);
}

BatchDescribeSimulationJobOutcome RoboMakerClient::BatchDescribeSimulationJob(const BatchDescribeSimulationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/batchDescribeSimulationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchDescribeSimulationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CancelDeploymentJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CancelSimulationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CancelSimulationJobBatchOutcome RoboMakerClient::CancelSimulationJobBatch(const CancelSimulationJobBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/cancelSimulationJobBatch";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelSimulationJobBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelSimulationJobBatchOutcomeCallable RoboMakerClient::CancelSimulationJobBatchCallable(const CancelSimulationJobBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSimulationJobBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSimulationJobBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CancelSimulationJobBatchAsync(const CancelSimulationJobBatchRequest& request, const CancelSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelSimulationJobBatchAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CancelSimulationJobBatchAsyncHelper(const CancelSimulationJobBatchRequest& request, const CancelSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSimulationJobBatch(request), context);
}

CancelWorldExportJobOutcome RoboMakerClient::CancelWorldExportJob(const CancelWorldExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/cancelWorldExportJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelWorldExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelWorldExportJobOutcomeCallable RoboMakerClient::CancelWorldExportJobCallable(const CancelWorldExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelWorldExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelWorldExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CancelWorldExportJobAsync(const CancelWorldExportJobRequest& request, const CancelWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelWorldExportJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CancelWorldExportJobAsyncHelper(const CancelWorldExportJobRequest& request, const CancelWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelWorldExportJob(request), context);
}

CancelWorldGenerationJobOutcome RoboMakerClient::CancelWorldGenerationJob(const CancelWorldGenerationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/cancelWorldGenerationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelWorldGenerationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelWorldGenerationJobOutcomeCallable RoboMakerClient::CancelWorldGenerationJobCallable(const CancelWorldGenerationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelWorldGenerationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelWorldGenerationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CancelWorldGenerationJobAsync(const CancelWorldGenerationJobRequest& request, const CancelWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelWorldGenerationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CancelWorldGenerationJobAsyncHelper(const CancelWorldGenerationJobRequest& request, const CancelWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelWorldGenerationJob(request), context);
}

CreateDeploymentJobOutcome RoboMakerClient::CreateDeploymentJob(const CreateDeploymentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createDeploymentJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDeploymentJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateRobotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateRobotApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateRobotApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateSimulationApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateSimulationApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateSimulationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateWorldExportJobOutcome RoboMakerClient::CreateWorldExportJob(const CreateWorldExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createWorldExportJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateWorldExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorldExportJobOutcomeCallable RoboMakerClient::CreateWorldExportJobCallable(const CreateWorldExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorldExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorldExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateWorldExportJobAsync(const CreateWorldExportJobRequest& request, const CreateWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorldExportJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateWorldExportJobAsyncHelper(const CreateWorldExportJobRequest& request, const CreateWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorldExportJob(request), context);
}

CreateWorldGenerationJobOutcome RoboMakerClient::CreateWorldGenerationJob(const CreateWorldGenerationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createWorldGenerationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateWorldGenerationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorldGenerationJobOutcomeCallable RoboMakerClient::CreateWorldGenerationJobCallable(const CreateWorldGenerationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorldGenerationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorldGenerationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateWorldGenerationJobAsync(const CreateWorldGenerationJobRequest& request, const CreateWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorldGenerationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateWorldGenerationJobAsyncHelper(const CreateWorldGenerationJobRequest& request, const CreateWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorldGenerationJob(request), context);
}

CreateWorldTemplateOutcome RoboMakerClient::CreateWorldTemplate(const CreateWorldTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createWorldTemplate";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateWorldTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorldTemplateOutcomeCallable RoboMakerClient::CreateWorldTemplateCallable(const CreateWorldTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorldTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorldTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::CreateWorldTemplateAsync(const CreateWorldTemplateRequest& request, const CreateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorldTemplateAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::CreateWorldTemplateAsyncHelper(const CreateWorldTemplateRequest& request, const CreateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorldTemplate(request), context);
}

DeleteFleetOutcome RoboMakerClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteFleet";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteRobotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteRobotApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteSimulationApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

DeleteWorldTemplateOutcome RoboMakerClient::DeleteWorldTemplate(const DeleteWorldTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteWorldTemplate";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteWorldTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorldTemplateOutcomeCallable RoboMakerClient::DeleteWorldTemplateCallable(const DeleteWorldTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorldTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorldTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DeleteWorldTemplateAsync(const DeleteWorldTemplateRequest& request, const DeleteWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorldTemplateAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DeleteWorldTemplateAsyncHelper(const DeleteWorldTemplateRequest& request, const DeleteWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorldTemplate(request), context);
}

DeregisterRobotOutcome RoboMakerClient::DeregisterRobot(const DeregisterRobotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deregisterRobot";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeregisterRobotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeDeploymentJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeRobotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeRobotApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeSimulationApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeSimulationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

DescribeSimulationJobBatchOutcome RoboMakerClient::DescribeSimulationJobBatch(const DescribeSimulationJobBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeSimulationJobBatch";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeSimulationJobBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSimulationJobBatchOutcomeCallable RoboMakerClient::DescribeSimulationJobBatchCallable(const DescribeSimulationJobBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSimulationJobBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSimulationJobBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeSimulationJobBatchAsync(const DescribeSimulationJobBatchRequest& request, const DescribeSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSimulationJobBatchAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeSimulationJobBatchAsyncHelper(const DescribeSimulationJobBatchRequest& request, const DescribeSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSimulationJobBatch(request), context);
}

DescribeWorldOutcome RoboMakerClient::DescribeWorld(const DescribeWorldRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeWorld";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeWorldOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldOutcomeCallable RoboMakerClient::DescribeWorldCallable(const DescribeWorldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorld(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeWorldAsync(const DescribeWorldRequest& request, const DescribeWorldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorldAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeWorldAsyncHelper(const DescribeWorldRequest& request, const DescribeWorldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorld(request), context);
}

DescribeWorldExportJobOutcome RoboMakerClient::DescribeWorldExportJob(const DescribeWorldExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeWorldExportJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeWorldExportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldExportJobOutcomeCallable RoboMakerClient::DescribeWorldExportJobCallable(const DescribeWorldExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorldExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorldExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeWorldExportJobAsync(const DescribeWorldExportJobRequest& request, const DescribeWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorldExportJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeWorldExportJobAsyncHelper(const DescribeWorldExportJobRequest& request, const DescribeWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorldExportJob(request), context);
}

DescribeWorldGenerationJobOutcome RoboMakerClient::DescribeWorldGenerationJob(const DescribeWorldGenerationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeWorldGenerationJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeWorldGenerationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldGenerationJobOutcomeCallable RoboMakerClient::DescribeWorldGenerationJobCallable(const DescribeWorldGenerationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorldGenerationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorldGenerationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeWorldGenerationJobAsync(const DescribeWorldGenerationJobRequest& request, const DescribeWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorldGenerationJobAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeWorldGenerationJobAsyncHelper(const DescribeWorldGenerationJobRequest& request, const DescribeWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorldGenerationJob(request), context);
}

DescribeWorldTemplateOutcome RoboMakerClient::DescribeWorldTemplate(const DescribeWorldTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeWorldTemplate";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeWorldTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldTemplateOutcomeCallable RoboMakerClient::DescribeWorldTemplateCallable(const DescribeWorldTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorldTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorldTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::DescribeWorldTemplateAsync(const DescribeWorldTemplateRequest& request, const DescribeWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorldTemplateAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::DescribeWorldTemplateAsyncHelper(const DescribeWorldTemplateRequest& request, const DescribeWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorldTemplate(request), context);
}

GetWorldTemplateBodyOutcome RoboMakerClient::GetWorldTemplateBody(const GetWorldTemplateBodyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/getWorldTemplateBody";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetWorldTemplateBodyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorldTemplateBodyOutcomeCallable RoboMakerClient::GetWorldTemplateBodyCallable(const GetWorldTemplateBodyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorldTemplateBodyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorldTemplateBody(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::GetWorldTemplateBodyAsync(const GetWorldTemplateBodyRequest& request, const GetWorldTemplateBodyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorldTemplateBodyAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::GetWorldTemplateBodyAsyncHelper(const GetWorldTemplateBodyRequest& request, const GetWorldTemplateBodyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorldTemplateBody(request), context);
}

ListDeploymentJobsOutcome RoboMakerClient::ListDeploymentJobs(const ListDeploymentJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listDeploymentJobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListDeploymentJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListFleetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListRobotApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListRobotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListSimulationApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

ListSimulationJobBatchesOutcome RoboMakerClient::ListSimulationJobBatches(const ListSimulationJobBatchesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listSimulationJobBatches";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSimulationJobBatchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSimulationJobBatchesOutcomeCallable RoboMakerClient::ListSimulationJobBatchesCallable(const ListSimulationJobBatchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSimulationJobBatchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSimulationJobBatches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListSimulationJobBatchesAsync(const ListSimulationJobBatchesRequest& request, const ListSimulationJobBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSimulationJobBatchesAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListSimulationJobBatchesAsyncHelper(const ListSimulationJobBatchesRequest& request, const ListSimulationJobBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSimulationJobBatches(request), context);
}

ListSimulationJobsOutcome RoboMakerClient::ListSimulationJobs(const ListSimulationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listSimulationJobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSimulationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

ListWorldExportJobsOutcome RoboMakerClient::ListWorldExportJobs(const ListWorldExportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listWorldExportJobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListWorldExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldExportJobsOutcomeCallable RoboMakerClient::ListWorldExportJobsCallable(const ListWorldExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorldExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorldExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListWorldExportJobsAsync(const ListWorldExportJobsRequest& request, const ListWorldExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorldExportJobsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListWorldExportJobsAsyncHelper(const ListWorldExportJobsRequest& request, const ListWorldExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorldExportJobs(request), context);
}

ListWorldGenerationJobsOutcome RoboMakerClient::ListWorldGenerationJobs(const ListWorldGenerationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listWorldGenerationJobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListWorldGenerationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldGenerationJobsOutcomeCallable RoboMakerClient::ListWorldGenerationJobsCallable(const ListWorldGenerationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorldGenerationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorldGenerationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListWorldGenerationJobsAsync(const ListWorldGenerationJobsRequest& request, const ListWorldGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorldGenerationJobsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListWorldGenerationJobsAsyncHelper(const ListWorldGenerationJobsRequest& request, const ListWorldGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorldGenerationJobs(request), context);
}

ListWorldTemplatesOutcome RoboMakerClient::ListWorldTemplates(const ListWorldTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listWorldTemplates";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListWorldTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldTemplatesOutcomeCallable RoboMakerClient::ListWorldTemplatesCallable(const ListWorldTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorldTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorldTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListWorldTemplatesAsync(const ListWorldTemplatesRequest& request, const ListWorldTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorldTemplatesAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListWorldTemplatesAsyncHelper(const ListWorldTemplatesRequest& request, const ListWorldTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorldTemplates(request), context);
}

ListWorldsOutcome RoboMakerClient::ListWorlds(const ListWorldsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listWorlds";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListWorldsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldsOutcomeCallable RoboMakerClient::ListWorldsCallable(const ListWorldsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorldsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorlds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::ListWorldsAsync(const ListWorldsRequest& request, const ListWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorldsAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::ListWorldsAsyncHelper(const ListWorldsRequest& request, const ListWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorlds(request), context);
}

RegisterRobotOutcome RoboMakerClient::RegisterRobot(const RegisterRobotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/registerRobot";
  uri.SetPath(uri.GetPath() + ss.str());
  return RegisterRobotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return RestartSimulationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

StartSimulationJobBatchOutcome RoboMakerClient::StartSimulationJobBatch(const StartSimulationJobBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/startSimulationJobBatch";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartSimulationJobBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSimulationJobBatchOutcomeCallable RoboMakerClient::StartSimulationJobBatchCallable(const StartSimulationJobBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSimulationJobBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSimulationJobBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::StartSimulationJobBatchAsync(const StartSimulationJobBatchRequest& request, const StartSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSimulationJobBatchAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::StartSimulationJobBatchAsyncHelper(const StartSimulationJobBatchRequest& request, const StartSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSimulationJobBatch(request), context);
}

SyncDeploymentJobOutcome RoboMakerClient::SyncDeploymentJob(const SyncDeploymentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/syncDeploymentJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return SyncDeploymentJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  return UpdateRobotApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return UpdateSimulationApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

UpdateWorldTemplateOutcome RoboMakerClient::UpdateWorldTemplate(const UpdateWorldTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateWorldTemplate";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateWorldTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorldTemplateOutcomeCallable RoboMakerClient::UpdateWorldTemplateCallable(const UpdateWorldTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorldTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorldTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RoboMakerClient::UpdateWorldTemplateAsync(const UpdateWorldTemplateRequest& request, const UpdateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWorldTemplateAsyncHelper( request, handler, context ); } );
}

void RoboMakerClient::UpdateWorldTemplateAsyncHelper(const UpdateWorldTemplateRequest& request, const UpdateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWorldTemplate(request), context);
}

