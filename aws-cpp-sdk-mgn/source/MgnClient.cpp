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
#include <aws/mgn/model/CreateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteJobRequest.h>
#include <aws/mgn/model/DeleteLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteSourceServerRequest.h>
#include <aws/mgn/model/DeleteVcenterClientRequest.h>
#include <aws/mgn/model/DescribeJobLogItemsRequest.h>
#include <aws/mgn/model/DescribeJobsRequest.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeSourceServersRequest.h>
#include <aws/mgn/model/DescribeVcenterClientsRequest.h>
#include <aws/mgn/model/DisconnectFromServiceRequest.h>
#include <aws/mgn/model/FinalizeCutoverRequest.h>
#include <aws/mgn/model/GetLaunchConfigurationRequest.h>
#include <aws/mgn/model/GetReplicationConfigurationRequest.h>
#include <aws/mgn/model/InitializeServiceRequest.h>
#include <aws/mgn/model/ListTagsForResourceRequest.h>
#include <aws/mgn/model/MarkAsArchivedRequest.h>
#include <aws/mgn/model/RetryDataReplicationRequest.h>
#include <aws/mgn/model/StartCutoverRequest.h>
#include <aws/mgn/model/StartReplicationRequest.h>
#include <aws/mgn/model/StartTestRequest.h>
#include <aws/mgn/model/TagResourceRequest.h>
#include <aws/mgn/model/TerminateTargetInstancesRequest.h>
#include <aws/mgn/model/UntagResourceRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateSourceServerReplicationTypeRequest.h>

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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MgnClient::MgnClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MgnClient::MgnClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MgnErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MgnClient::~MgnClient()
{
}

void MgnClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("mgn");
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
  uri.AddPathSegments("/ChangeServerLifeCycleState");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ChangeServerLifeCycleState(request), context);
    } );
}

CreateLaunchConfigurationTemplateOutcome MgnClient::CreateLaunchConfigurationTemplate(const CreateLaunchConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateLaunchConfigurationTemplate");
  return CreateLaunchConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLaunchConfigurationTemplateOutcomeCallable MgnClient::CreateLaunchConfigurationTemplateCallable(const CreateLaunchConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunchConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::CreateLaunchConfigurationTemplateAsync(const CreateLaunchConfigurationTemplateRequest& request, const CreateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLaunchConfigurationTemplate(request), context);
    } );
}

CreateReplicationConfigurationTemplateOutcome MgnClient::CreateReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateReplicationConfigurationTemplate");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationConfigurationTemplate(request), context);
    } );
}

DeleteJobOutcome MgnClient::DeleteJob(const DeleteJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteJob");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJob(request), context);
    } );
}

DeleteLaunchConfigurationTemplateOutcome MgnClient::DeleteLaunchConfigurationTemplate(const DeleteLaunchConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteLaunchConfigurationTemplate");
  return DeleteLaunchConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLaunchConfigurationTemplateOutcomeCallable MgnClient::DeleteLaunchConfigurationTemplateCallable(const DeleteLaunchConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteLaunchConfigurationTemplateAsync(const DeleteLaunchConfigurationTemplateRequest& request, const DeleteLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLaunchConfigurationTemplate(request), context);
    } );
}

DeleteReplicationConfigurationTemplateOutcome MgnClient::DeleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteReplicationConfigurationTemplate");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationConfigurationTemplate(request), context);
    } );
}

DeleteSourceServerOutcome MgnClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteSourceServer");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSourceServer(request), context);
    } );
}

DeleteVcenterClientOutcome MgnClient::DeleteVcenterClient(const DeleteVcenterClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteVcenterClient");
  return DeleteVcenterClientOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVcenterClientOutcomeCallable MgnClient::DeleteVcenterClientCallable(const DeleteVcenterClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVcenterClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVcenterClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DeleteVcenterClientAsync(const DeleteVcenterClientRequest& request, const DeleteVcenterClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVcenterClient(request), context);
    } );
}

DescribeJobLogItemsOutcome MgnClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeJobLogItems");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobLogItems(request), context);
    } );
}

DescribeJobsOutcome MgnClient::DescribeJobs(const DescribeJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeJobs");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobs(request), context);
    } );
}

DescribeLaunchConfigurationTemplatesOutcome MgnClient::DescribeLaunchConfigurationTemplates(const DescribeLaunchConfigurationTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeLaunchConfigurationTemplates");
  return DescribeLaunchConfigurationTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLaunchConfigurationTemplatesOutcomeCallable MgnClient::DescribeLaunchConfigurationTemplatesCallable(const DescribeLaunchConfigurationTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchConfigurationTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLaunchConfigurationTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeLaunchConfigurationTemplatesAsync(const DescribeLaunchConfigurationTemplatesRequest& request, const DescribeLaunchConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLaunchConfigurationTemplates(request), context);
    } );
}

DescribeReplicationConfigurationTemplatesOutcome MgnClient::DescribeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeReplicationConfigurationTemplates");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationConfigurationTemplates(request), context);
    } );
}

DescribeSourceServersOutcome MgnClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeSourceServers");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSourceServers(request), context);
    } );
}

DescribeVcenterClientsOutcome MgnClient::DescribeVcenterClients(const DescribeVcenterClientsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeVcenterClients");
  return DescribeVcenterClientsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVcenterClientsOutcomeCallable MgnClient::DescribeVcenterClientsCallable(const DescribeVcenterClientsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVcenterClientsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVcenterClients(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::DescribeVcenterClientsAsync(const DescribeVcenterClientsRequest& request, const DescribeVcenterClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVcenterClients(request), context);
    } );
}

DisconnectFromServiceOutcome MgnClient::DisconnectFromService(const DisconnectFromServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DisconnectFromService");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisconnectFromService(request), context);
    } );
}

FinalizeCutoverOutcome MgnClient::FinalizeCutover(const FinalizeCutoverRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/FinalizeCutover");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, FinalizeCutover(request), context);
    } );
}

GetLaunchConfigurationOutcome MgnClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetLaunchConfiguration");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLaunchConfiguration(request), context);
    } );
}

GetReplicationConfigurationOutcome MgnClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetReplicationConfiguration");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReplicationConfiguration(request), context);
    } );
}

InitializeServiceOutcome MgnClient::InitializeService(const InitializeServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/InitializeService");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InitializeService(request), context);
    } );
}

ListTagsForResourceOutcome MgnClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

MarkAsArchivedOutcome MgnClient::MarkAsArchived(const MarkAsArchivedRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/MarkAsArchived");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, MarkAsArchived(request), context);
    } );
}

RetryDataReplicationOutcome MgnClient::RetryDataReplication(const RetryDataReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/RetryDataReplication");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetryDataReplication(request), context);
    } );
}

StartCutoverOutcome MgnClient::StartCutover(const StartCutoverRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StartCutover");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartCutover(request), context);
    } );
}

StartReplicationOutcome MgnClient::StartReplication(const StartReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StartReplication");
  return StartReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplicationOutcomeCallable MgnClient::StartReplicationCallable(const StartReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::StartReplicationAsync(const StartReplicationRequest& request, const StartReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartReplication(request), context);
    } );
}

StartTestOutcome MgnClient::StartTest(const StartTestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StartTest");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTest(request), context);
    } );
}

TagResourceOutcome MgnClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MgnErrors>(MgnErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TerminateTargetInstancesOutcome MgnClient::TerminateTargetInstances(const TerminateTargetInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TerminateTargetInstances");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TerminateTargetInstances(request), context);
    } );
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
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateLaunchConfigurationOutcome MgnClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateLaunchConfiguration");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLaunchConfiguration(request), context);
    } );
}

UpdateLaunchConfigurationTemplateOutcome MgnClient::UpdateLaunchConfigurationTemplate(const UpdateLaunchConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateLaunchConfigurationTemplate");
  return UpdateLaunchConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchConfigurationTemplateOutcomeCallable MgnClient::UpdateLaunchConfigurationTemplateCallable(const UpdateLaunchConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunchConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateLaunchConfigurationTemplateAsync(const UpdateLaunchConfigurationTemplateRequest& request, const UpdateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLaunchConfigurationTemplate(request), context);
    } );
}

UpdateReplicationConfigurationOutcome MgnClient::UpdateReplicationConfiguration(const UpdateReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateReplicationConfiguration");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationConfiguration(request), context);
    } );
}

UpdateReplicationConfigurationTemplateOutcome MgnClient::UpdateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateReplicationConfigurationTemplate");
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationConfigurationTemplate(request), context);
    } );
}

UpdateSourceServerReplicationTypeOutcome MgnClient::UpdateSourceServerReplicationType(const UpdateSourceServerReplicationTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateSourceServerReplicationType");
  return UpdateSourceServerReplicationTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSourceServerReplicationTypeOutcomeCallable MgnClient::UpdateSourceServerReplicationTypeCallable(const UpdateSourceServerReplicationTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSourceServerReplicationTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSourceServerReplicationType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MgnClient::UpdateSourceServerReplicationTypeAsync(const UpdateSourceServerReplicationTypeRequest& request, const UpdateSourceServerReplicationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSourceServerReplicationType(request), context);
    } );
}

