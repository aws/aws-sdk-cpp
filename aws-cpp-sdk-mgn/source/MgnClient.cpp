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

#include <aws/mgn/MgnClient.h>
#include <aws/mgn/MgnEndpoint.h>
#include <aws/mgn/MgnErrorMarshaller.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateRequest.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteJobRequest.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteSourceServerRequest.h>
#include <aws/mgn/model/DescribeJobLogItemsRequest.h>
#include <aws/mgn/model/DescribeJobsRequest.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeSourceServersRequest.h>
#include <aws/mgn/model/DisconnectFromServiceRequest.h>
#include <aws/mgn/model/FinalizeCutoverRequest.h>
#include <aws/mgn/model/GetLaunchConfigurationRequest.h>
#include <aws/mgn/model/GetReplicationConfigurationRequest.h>
#include <aws/mgn/model/InitializeServiceRequest.h>
#include <aws/mgn/model/ListTagsForResourceRequest.h>
#include <aws/mgn/model/MarkAsArchivedRequest.h>
#include <aws/mgn/model/RetryDataReplicationRequest.h>
#include <aws/mgn/model/StartCutoverRequest.h>
#include <aws/mgn/model/StartTestRequest.h>
#include <aws/mgn/model/TagResourceRequest.h>
#include <aws/mgn/model/TerminateTargetInstancesRequest.h>
#include <aws/mgn/model/UntagResourceRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::mgn;
using namespace Aws::mgn::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mgn";
static const char* ALLOCATION_TAG = "MgnClient";


MgnClient::MgnClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MgnClient::MgnClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MgnClient::MgnClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MgnClient::~MgnClient()
{
}

void MgnClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("mgn");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MgnEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MgnClient::OverrideEndpoint(const Aws::String& endpoint)
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

ChangeServerLifeCycleStateOutcome MgnClient::ChangeServerLifeCycleState(const ChangeServerLifeCycleStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ChangeServerLifeCycleState";
  uri.SetPath(uri.GetPath() + ss.str());
  return ChangeServerLifeCycleStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ChangeServerLifeCycleStateOutcomeCallable MgnClient::ChangeServerLifeCycleStateCallable(const ChangeServerLifeCycleStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeServerLifeCycleStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeServerLifeCycleState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::ChangeServerLifeCycleStateAsync(const ChangeServerLifeCycleStateRequest& request, const ChangeServerLifeCycleStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangeServerLifeCycleStateAsyncHelper( request, handler, context ); } );
}

void MgnClient::ChangeServerLifeCycleStateAsyncHelper(const ChangeServerLifeCycleStateRequest& request, const ChangeServerLifeCycleStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeServerLifeCycleState(request), context);
}

CreateReplicationConfigurationTemplateOutcome MgnClient::CreateReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CreateReplicationConfigurationTemplate";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateReplicationConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationConfigurationTemplateOutcomeCallable MgnClient::CreateReplicationConfigurationTemplateCallable(const CreateReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::CreateReplicationConfigurationTemplateAsync(const CreateReplicationConfigurationTemplateRequest& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReplicationConfigurationTemplateAsyncHelper( request, handler, context ); } );
}

void MgnClient::CreateReplicationConfigurationTemplateAsyncHelper(const CreateReplicationConfigurationTemplateRequest& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReplicationConfigurationTemplate(request), context);
}

DeleteJobOutcome MgnClient::DeleteJob(const DeleteJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DeleteJob";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable MgnClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteJobAsyncHelper( request, handler, context ); } );
}

void MgnClient::DeleteJobAsyncHelper(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteJob(request), context);
}

DeleteReplicationConfigurationTemplateOutcome MgnClient::DeleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DeleteReplicationConfigurationTemplate";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteReplicationConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationConfigurationTemplateOutcomeCallable MgnClient::DeleteReplicationConfigurationTemplateCallable(const DeleteReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteReplicationConfigurationTemplateAsync(const DeleteReplicationConfigurationTemplateRequest& request, const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReplicationConfigurationTemplateAsyncHelper( request, handler, context ); } );
}

void MgnClient::DeleteReplicationConfigurationTemplateAsyncHelper(const DeleteReplicationConfigurationTemplateRequest& request, const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReplicationConfigurationTemplate(request), context);
}

DeleteSourceServerOutcome MgnClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DeleteSourceServer";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSourceServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceServerOutcomeCallable MgnClient::DeleteSourceServerCallable(const DeleteSourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteSourceServerAsync(const DeleteSourceServerRequest& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSourceServerAsyncHelper( request, handler, context ); } );
}

void MgnClient::DeleteSourceServerAsyncHelper(const DeleteSourceServerRequest& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSourceServer(request), context);
}

DescribeJobLogItemsOutcome MgnClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeJobLogItems";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeJobLogItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobLogItemsOutcomeCallable MgnClient::DescribeJobLogItemsCallable(const DescribeJobLogItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobLogItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobLogItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeJobLogItemsAsync(const DescribeJobLogItemsRequest& request, const DescribeJobLogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobLogItemsAsyncHelper( request, handler, context ); } );
}

void MgnClient::DescribeJobLogItemsAsyncHelper(const DescribeJobLogItemsRequest& request, const DescribeJobLogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJobLogItems(request), context);
}

DescribeJobsOutcome MgnClient::DescribeJobs(const DescribeJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeJobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobsOutcomeCallable MgnClient::DescribeJobsCallable(const DescribeJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobsAsyncHelper( request, handler, context ); } );
}

void MgnClient::DescribeJobsAsyncHelper(const DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJobs(request), context);
}

DescribeReplicationConfigurationTemplatesOutcome MgnClient::DescribeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeReplicationConfigurationTemplates";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeReplicationConfigurationTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationConfigurationTemplatesOutcomeCallable MgnClient::DescribeReplicationConfigurationTemplatesCallable(const DescribeReplicationConfigurationTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationConfigurationTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationConfigurationTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeReplicationConfigurationTemplatesAsync(const DescribeReplicationConfigurationTemplatesRequest& request, const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplicationConfigurationTemplatesAsyncHelper( request, handler, context ); } );
}

void MgnClient::DescribeReplicationConfigurationTemplatesAsyncHelper(const DescribeReplicationConfigurationTemplatesRequest& request, const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplicationConfigurationTemplates(request), context);
}

DescribeSourceServersOutcome MgnClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeSourceServers";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeSourceServersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSourceServersOutcomeCallable MgnClient::DescribeSourceServersCallable(const DescribeSourceServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSourceServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSourceServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeSourceServersAsync(const DescribeSourceServersRequest& request, const DescribeSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSourceServersAsyncHelper( request, handler, context ); } );
}

void MgnClient::DescribeSourceServersAsyncHelper(const DescribeSourceServersRequest& request, const DescribeSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSourceServers(request), context);
}

DisconnectFromServiceOutcome MgnClient::DisconnectFromService(const DisconnectFromServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DisconnectFromService";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisconnectFromServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisconnectFromServiceOutcomeCallable MgnClient::DisconnectFromServiceCallable(const DisconnectFromServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectFromServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectFromService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DisconnectFromServiceAsync(const DisconnectFromServiceRequest& request, const DisconnectFromServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisconnectFromServiceAsyncHelper( request, handler, context ); } );
}

void MgnClient::DisconnectFromServiceAsyncHelper(const DisconnectFromServiceRequest& request, const DisconnectFromServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisconnectFromService(request), context);
}

FinalizeCutoverOutcome MgnClient::FinalizeCutover(const FinalizeCutoverRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/FinalizeCutover";
  uri.SetPath(uri.GetPath() + ss.str());
  return FinalizeCutoverOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

FinalizeCutoverOutcomeCallable MgnClient::FinalizeCutoverCallable(const FinalizeCutoverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FinalizeCutoverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FinalizeCutover(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::FinalizeCutoverAsync(const FinalizeCutoverRequest& request, const FinalizeCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->FinalizeCutoverAsyncHelper( request, handler, context ); } );
}

void MgnClient::FinalizeCutoverAsyncHelper(const FinalizeCutoverRequest& request, const FinalizeCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FinalizeCutover(request), context);
}

GetLaunchConfigurationOutcome MgnClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/GetLaunchConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetLaunchConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchConfigurationOutcomeCallable MgnClient::GetLaunchConfigurationCallable(const GetLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::GetLaunchConfigurationAsync(const GetLaunchConfigurationRequest& request, const GetLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLaunchConfigurationAsyncHelper( request, handler, context ); } );
}

void MgnClient::GetLaunchConfigurationAsyncHelper(const GetLaunchConfigurationRequest& request, const GetLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLaunchConfiguration(request), context);
}

GetReplicationConfigurationOutcome MgnClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/GetReplicationConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetReplicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReplicationConfigurationOutcomeCallable MgnClient::GetReplicationConfigurationCallable(const GetReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::GetReplicationConfigurationAsync(const GetReplicationConfigurationRequest& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReplicationConfigurationAsyncHelper( request, handler, context ); } );
}

void MgnClient::GetReplicationConfigurationAsyncHelper(const GetReplicationConfigurationRequest& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReplicationConfiguration(request), context);
}

InitializeServiceOutcome MgnClient::InitializeService(const InitializeServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/InitializeService";
  uri.SetPath(uri.GetPath() + ss.str());
  return InitializeServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InitializeServiceOutcomeCallable MgnClient::InitializeServiceCallable(const InitializeServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitializeServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitializeService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::InitializeServiceAsync(const InitializeServiceRequest& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InitializeServiceAsyncHelper( request, handler, context ); } );
}

void MgnClient::InitializeServiceAsyncHelper(const InitializeServiceRequest& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitializeService(request), context);
}

ListTagsForResourceOutcome MgnClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MgnClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MgnClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

MarkAsArchivedOutcome MgnClient::MarkAsArchived(const MarkAsArchivedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/MarkAsArchived";
  uri.SetPath(uri.GetPath() + ss.str());
  return MarkAsArchivedOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MarkAsArchivedOutcomeCallable MgnClient::MarkAsArchivedCallable(const MarkAsArchivedRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MarkAsArchivedOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MarkAsArchived(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::MarkAsArchivedAsync(const MarkAsArchivedRequest& request, const MarkAsArchivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->MarkAsArchivedAsyncHelper( request, handler, context ); } );
}

void MgnClient::MarkAsArchivedAsyncHelper(const MarkAsArchivedRequest& request, const MarkAsArchivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MarkAsArchived(request), context);
}

RetryDataReplicationOutcome MgnClient::RetryDataReplication(const RetryDataReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/RetryDataReplication";
  uri.SetPath(uri.GetPath() + ss.str());
  return RetryDataReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryDataReplicationOutcomeCallable MgnClient::RetryDataReplicationCallable(const RetryDataReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryDataReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryDataReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::RetryDataReplicationAsync(const RetryDataReplicationRequest& request, const RetryDataReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RetryDataReplicationAsyncHelper( request, handler, context ); } );
}

void MgnClient::RetryDataReplicationAsyncHelper(const RetryDataReplicationRequest& request, const RetryDataReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetryDataReplication(request), context);
}

StartCutoverOutcome MgnClient::StartCutover(const StartCutoverRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/StartCutover";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartCutoverOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCutoverOutcomeCallable MgnClient::StartCutoverCallable(const StartCutoverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCutoverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCutover(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::StartCutoverAsync(const StartCutoverRequest& request, const StartCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartCutoverAsyncHelper( request, handler, context ); } );
}

void MgnClient::StartCutoverAsyncHelper(const StartCutoverRequest& request, const StartCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartCutover(request), context);
}

StartTestOutcome MgnClient::StartTest(const StartTestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/StartTest";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartTestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTestOutcomeCallable MgnClient::StartTestCallable(const StartTestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::StartTestAsync(const StartTestRequest& request, const StartTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTestAsyncHelper( request, handler, context ); } );
}

void MgnClient::StartTestAsyncHelper(const StartTestRequest& request, const StartTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTest(request), context);
}

TagResourceOutcome MgnClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MgnClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MgnClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

TerminateTargetInstancesOutcome MgnClient::TerminateTargetInstances(const TerminateTargetInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TerminateTargetInstances";
  uri.SetPath(uri.GetPath() + ss.str());
  return TerminateTargetInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateTargetInstancesOutcomeCallable MgnClient::TerminateTargetInstancesCallable(const TerminateTargetInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateTargetInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateTargetInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::TerminateTargetInstancesAsync(const TerminateTargetInstancesRequest& request, const TerminateTargetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateTargetInstancesAsyncHelper( request, handler, context ); } );
}

void MgnClient::TerminateTargetInstancesAsyncHelper(const TerminateTargetInstancesRequest& request, const TerminateTargetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateTargetInstances(request), context);
}

UntagResourceOutcome MgnClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MgnClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MgnClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateLaunchConfigurationOutcome MgnClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateLaunchConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateLaunchConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchConfigurationOutcomeCallable MgnClient::UpdateLaunchConfigurationCallable(const UpdateLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateLaunchConfigurationAsync(const UpdateLaunchConfigurationRequest& request, const UpdateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLaunchConfigurationAsyncHelper( request, handler, context ); } );
}

void MgnClient::UpdateLaunchConfigurationAsyncHelper(const UpdateLaunchConfigurationRequest& request, const UpdateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLaunchConfiguration(request), context);
}

UpdateReplicationConfigurationOutcome MgnClient::UpdateReplicationConfiguration(const UpdateReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateReplicationConfiguration";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateReplicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationConfigurationOutcomeCallable MgnClient::UpdateReplicationConfigurationCallable(const UpdateReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateReplicationConfigurationAsync(const UpdateReplicationConfigurationRequest& request, const UpdateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateReplicationConfigurationAsyncHelper( request, handler, context ); } );
}

void MgnClient::UpdateReplicationConfigurationAsyncHelper(const UpdateReplicationConfigurationRequest& request, const UpdateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateReplicationConfiguration(request), context);
}

UpdateReplicationConfigurationTemplateOutcome MgnClient::UpdateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateReplicationConfigurationTemplate";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateReplicationConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationConfigurationTemplateOutcomeCallable MgnClient::UpdateReplicationConfigurationTemplateCallable(const UpdateReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateReplicationConfigurationTemplateAsync(const UpdateReplicationConfigurationTemplateRequest& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateReplicationConfigurationTemplateAsyncHelper( request, handler, context ); } );
}

void MgnClient::UpdateReplicationConfigurationTemplateAsyncHelper(const UpdateReplicationConfigurationTemplateRequest& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateReplicationConfigurationTemplate(request), context);
}

