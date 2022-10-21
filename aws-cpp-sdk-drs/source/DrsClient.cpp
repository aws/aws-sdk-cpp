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

#include <aws/drs/DrsClient.h>
#include <aws/drs/DrsEndpoint.h>
#include <aws/drs/DrsErrorMarshaller.h>
#include <aws/drs/model/CreateExtendedSourceServerRequest.h>
#include <aws/drs/model/CreateReplicationConfigurationTemplateRequest.h>
#include <aws/drs/model/DeleteJobRequest.h>
#include <aws/drs/model/DeleteRecoveryInstanceRequest.h>
#include <aws/drs/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/drs/model/DeleteSourceServerRequest.h>
#include <aws/drs/model/DescribeJobLogItemsRequest.h>
#include <aws/drs/model/DescribeJobsRequest.h>
#include <aws/drs/model/DescribeRecoveryInstancesRequest.h>
#include <aws/drs/model/DescribeRecoverySnapshotsRequest.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/drs/model/DescribeSourceServersRequest.h>
#include <aws/drs/model/DisconnectRecoveryInstanceRequest.h>
#include <aws/drs/model/DisconnectSourceServerRequest.h>
#include <aws/drs/model/GetFailbackReplicationConfigurationRequest.h>
#include <aws/drs/model/GetLaunchConfigurationRequest.h>
#include <aws/drs/model/GetReplicationConfigurationRequest.h>
#include <aws/drs/model/InitializeServiceRequest.h>
#include <aws/drs/model/ListExtensibleSourceServersRequest.h>
#include <aws/drs/model/ListStagingAccountsRequest.h>
#include <aws/drs/model/ListTagsForResourceRequest.h>
#include <aws/drs/model/RetryDataReplicationRequest.h>
#include <aws/drs/model/StartFailbackLaunchRequest.h>
#include <aws/drs/model/StartRecoveryRequest.h>
#include <aws/drs/model/StopFailbackRequest.h>
#include <aws/drs/model/TagResourceRequest.h>
#include <aws/drs/model/TerminateRecoveryInstancesRequest.h>
#include <aws/drs/model/UntagResourceRequest.h>
#include <aws/drs/model/UpdateFailbackReplicationConfigurationRequest.h>
#include <aws/drs/model/UpdateLaunchConfigurationRequest.h>
#include <aws/drs/model/UpdateReplicationConfigurationRequest.h>
#include <aws/drs/model/UpdateReplicationConfigurationTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::drs;
using namespace Aws::drs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* DrsClient::SERVICE_NAME = "drs";
const char* DrsClient::ALLOCATION_TAG = "DrsClient";

DrsClient::DrsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DrsClient::DrsClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DrsClient::DrsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DrsClient::~DrsClient()
{
}

void DrsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("drs");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DrsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DrsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateExtendedSourceServerOutcome DrsClient::CreateExtendedSourceServer(const CreateExtendedSourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateExtendedSourceServer");
  return CreateExtendedSourceServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExtendedSourceServerOutcomeCallable DrsClient::CreateExtendedSourceServerCallable(const CreateExtendedSourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExtendedSourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExtendedSourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::CreateExtendedSourceServerAsync(const CreateExtendedSourceServerRequest& request, const CreateExtendedSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExtendedSourceServer(request), context);
    } );
}

CreateReplicationConfigurationTemplateOutcome DrsClient::CreateReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateReplicationConfigurationTemplate");
  return CreateReplicationConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationConfigurationTemplateOutcomeCallable DrsClient::CreateReplicationConfigurationTemplateCallable(const CreateReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::CreateReplicationConfigurationTemplateAsync(const CreateReplicationConfigurationTemplateRequest& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationConfigurationTemplate(request), context);
    } );
}

DeleteJobOutcome DrsClient::DeleteJob(const DeleteJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteJob");
  return DeleteJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable DrsClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJob(request), context);
    } );
}

DeleteRecoveryInstanceOutcome DrsClient::DeleteRecoveryInstance(const DeleteRecoveryInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteRecoveryInstance");
  return DeleteRecoveryInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecoveryInstanceOutcomeCallable DrsClient::DeleteRecoveryInstanceCallable(const DeleteRecoveryInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecoveryInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecoveryInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DeleteRecoveryInstanceAsync(const DeleteRecoveryInstanceRequest& request, const DeleteRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecoveryInstance(request), context);
    } );
}

DeleteReplicationConfigurationTemplateOutcome DrsClient::DeleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteReplicationConfigurationTemplate");
  return DeleteReplicationConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationConfigurationTemplateOutcomeCallable DrsClient::DeleteReplicationConfigurationTemplateCallable(const DeleteReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DeleteReplicationConfigurationTemplateAsync(const DeleteReplicationConfigurationTemplateRequest& request, const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationConfigurationTemplate(request), context);
    } );
}

DeleteSourceServerOutcome DrsClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteSourceServer");
  return DeleteSourceServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceServerOutcomeCallable DrsClient::DeleteSourceServerCallable(const DeleteSourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DeleteSourceServerAsync(const DeleteSourceServerRequest& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSourceServer(request), context);
    } );
}

DescribeJobLogItemsOutcome DrsClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeJobLogItems");
  return DescribeJobLogItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobLogItemsOutcomeCallable DrsClient::DescribeJobLogItemsCallable(const DescribeJobLogItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobLogItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobLogItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DescribeJobLogItemsAsync(const DescribeJobLogItemsRequest& request, const DescribeJobLogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobLogItems(request), context);
    } );
}

DescribeJobsOutcome DrsClient::DescribeJobs(const DescribeJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeJobs");
  return DescribeJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobsOutcomeCallable DrsClient::DescribeJobsCallable(const DescribeJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobs(request), context);
    } );
}

DescribeRecoveryInstancesOutcome DrsClient::DescribeRecoveryInstances(const DescribeRecoveryInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeRecoveryInstances");
  return DescribeRecoveryInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecoveryInstancesOutcomeCallable DrsClient::DescribeRecoveryInstancesCallable(const DescribeRecoveryInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecoveryInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecoveryInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DescribeRecoveryInstancesAsync(const DescribeRecoveryInstancesRequest& request, const DescribeRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRecoveryInstances(request), context);
    } );
}

DescribeRecoverySnapshotsOutcome DrsClient::DescribeRecoverySnapshots(const DescribeRecoverySnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeRecoverySnapshots");
  return DescribeRecoverySnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecoverySnapshotsOutcomeCallable DrsClient::DescribeRecoverySnapshotsCallable(const DescribeRecoverySnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecoverySnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecoverySnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DescribeRecoverySnapshotsAsync(const DescribeRecoverySnapshotsRequest& request, const DescribeRecoverySnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRecoverySnapshots(request), context);
    } );
}

DescribeReplicationConfigurationTemplatesOutcome DrsClient::DescribeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeReplicationConfigurationTemplates");
  return DescribeReplicationConfigurationTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplicationConfigurationTemplatesOutcomeCallable DrsClient::DescribeReplicationConfigurationTemplatesCallable(const DescribeReplicationConfigurationTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplicationConfigurationTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplicationConfigurationTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DescribeReplicationConfigurationTemplatesAsync(const DescribeReplicationConfigurationTemplatesRequest& request, const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeReplicationConfigurationTemplates(request), context);
    } );
}

DescribeSourceServersOutcome DrsClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DescribeSourceServers");
  return DescribeSourceServersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSourceServersOutcomeCallable DrsClient::DescribeSourceServersCallable(const DescribeSourceServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSourceServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSourceServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DescribeSourceServersAsync(const DescribeSourceServersRequest& request, const DescribeSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSourceServers(request), context);
    } );
}

DisconnectRecoveryInstanceOutcome DrsClient::DisconnectRecoveryInstance(const DisconnectRecoveryInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DisconnectRecoveryInstance");
  return DisconnectRecoveryInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisconnectRecoveryInstanceOutcomeCallable DrsClient::DisconnectRecoveryInstanceCallable(const DisconnectRecoveryInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectRecoveryInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectRecoveryInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DisconnectRecoveryInstanceAsync(const DisconnectRecoveryInstanceRequest& request, const DisconnectRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisconnectRecoveryInstance(request), context);
    } );
}

DisconnectSourceServerOutcome DrsClient::DisconnectSourceServer(const DisconnectSourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DisconnectSourceServer");
  return DisconnectSourceServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisconnectSourceServerOutcomeCallable DrsClient::DisconnectSourceServerCallable(const DisconnectSourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectSourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectSourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::DisconnectSourceServerAsync(const DisconnectSourceServerRequest& request, const DisconnectSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisconnectSourceServer(request), context);
    } );
}

GetFailbackReplicationConfigurationOutcome DrsClient::GetFailbackReplicationConfiguration(const GetFailbackReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetFailbackReplicationConfiguration");
  return GetFailbackReplicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFailbackReplicationConfigurationOutcomeCallable DrsClient::GetFailbackReplicationConfigurationCallable(const GetFailbackReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFailbackReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFailbackReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::GetFailbackReplicationConfigurationAsync(const GetFailbackReplicationConfigurationRequest& request, const GetFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFailbackReplicationConfiguration(request), context);
    } );
}

GetLaunchConfigurationOutcome DrsClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetLaunchConfiguration");
  return GetLaunchConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchConfigurationOutcomeCallable DrsClient::GetLaunchConfigurationCallable(const GetLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::GetLaunchConfigurationAsync(const GetLaunchConfigurationRequest& request, const GetLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLaunchConfiguration(request), context);
    } );
}

GetReplicationConfigurationOutcome DrsClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetReplicationConfiguration");
  return GetReplicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReplicationConfigurationOutcomeCallable DrsClient::GetReplicationConfigurationCallable(const GetReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::GetReplicationConfigurationAsync(const GetReplicationConfigurationRequest& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReplicationConfiguration(request), context);
    } );
}

InitializeServiceOutcome DrsClient::InitializeService(const InitializeServiceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/InitializeService");
  return InitializeServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InitializeServiceOutcomeCallable DrsClient::InitializeServiceCallable(const InitializeServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitializeServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitializeService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::InitializeServiceAsync(const InitializeServiceRequest& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InitializeService(request), context);
    } );
}

ListExtensibleSourceServersOutcome DrsClient::ListExtensibleSourceServers(const ListExtensibleSourceServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListExtensibleSourceServers");
  return ListExtensibleSourceServersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExtensibleSourceServersOutcomeCallable DrsClient::ListExtensibleSourceServersCallable(const ListExtensibleSourceServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExtensibleSourceServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExtensibleSourceServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::ListExtensibleSourceServersAsync(const ListExtensibleSourceServersRequest& request, const ListExtensibleSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExtensibleSourceServers(request), context);
    } );
}

ListStagingAccountsOutcome DrsClient::ListStagingAccounts(const ListStagingAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListStagingAccounts");
  return ListStagingAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStagingAccountsOutcomeCallable DrsClient::ListStagingAccountsCallable(const ListStagingAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStagingAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStagingAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::ListStagingAccountsAsync(const ListStagingAccountsRequest& request, const ListStagingAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStagingAccounts(request), context);
    } );
}

ListTagsForResourceOutcome DrsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DrsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

RetryDataReplicationOutcome DrsClient::RetryDataReplication(const RetryDataReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/RetryDataReplication");
  return RetryDataReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryDataReplicationOutcomeCallable DrsClient::RetryDataReplicationCallable(const RetryDataReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryDataReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryDataReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::RetryDataReplicationAsync(const RetryDataReplicationRequest& request, const RetryDataReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetryDataReplication(request), context);
    } );
}

StartFailbackLaunchOutcome DrsClient::StartFailbackLaunch(const StartFailbackLaunchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StartFailbackLaunch");
  return StartFailbackLaunchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFailbackLaunchOutcomeCallable DrsClient::StartFailbackLaunchCallable(const StartFailbackLaunchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFailbackLaunchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFailbackLaunch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::StartFailbackLaunchAsync(const StartFailbackLaunchRequest& request, const StartFailbackLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFailbackLaunch(request), context);
    } );
}

StartRecoveryOutcome DrsClient::StartRecovery(const StartRecoveryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StartRecovery");
  return StartRecoveryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRecoveryOutcomeCallable DrsClient::StartRecoveryCallable(const StartRecoveryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRecoveryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRecovery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::StartRecoveryAsync(const StartRecoveryRequest& request, const StartRecoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartRecovery(request), context);
    } );
}

StopFailbackOutcome DrsClient::StopFailback(const StopFailbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/StopFailback");
  return StopFailbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFailbackOutcomeCallable DrsClient::StopFailbackCallable(const StopFailbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFailbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFailback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::StopFailbackAsync(const StopFailbackRequest& request, const StopFailbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopFailback(request), context);
    } );
}

TagResourceOutcome DrsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DrsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TerminateRecoveryInstancesOutcome DrsClient::TerminateRecoveryInstances(const TerminateRecoveryInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TerminateRecoveryInstances");
  return TerminateRecoveryInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateRecoveryInstancesOutcomeCallable DrsClient::TerminateRecoveryInstancesCallable(const TerminateRecoveryInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateRecoveryInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateRecoveryInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::TerminateRecoveryInstancesAsync(const TerminateRecoveryInstancesRequest& request, const TerminateRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TerminateRecoveryInstances(request), context);
    } );
}

UntagResourceOutcome DrsClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DrsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateFailbackReplicationConfigurationOutcome DrsClient::UpdateFailbackReplicationConfiguration(const UpdateFailbackReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateFailbackReplicationConfiguration");
  return UpdateFailbackReplicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFailbackReplicationConfigurationOutcomeCallable DrsClient::UpdateFailbackReplicationConfigurationCallable(const UpdateFailbackReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFailbackReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFailbackReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::UpdateFailbackReplicationConfigurationAsync(const UpdateFailbackReplicationConfigurationRequest& request, const UpdateFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFailbackReplicationConfiguration(request), context);
    } );
}

UpdateLaunchConfigurationOutcome DrsClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateLaunchConfiguration");
  return UpdateLaunchConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchConfigurationOutcomeCallable DrsClient::UpdateLaunchConfigurationCallable(const UpdateLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::UpdateLaunchConfigurationAsync(const UpdateLaunchConfigurationRequest& request, const UpdateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLaunchConfiguration(request), context);
    } );
}

UpdateReplicationConfigurationOutcome DrsClient::UpdateReplicationConfiguration(const UpdateReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateReplicationConfiguration");
  return UpdateReplicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationConfigurationOutcomeCallable DrsClient::UpdateReplicationConfigurationCallable(const UpdateReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::UpdateReplicationConfigurationAsync(const UpdateReplicationConfigurationRequest& request, const UpdateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationConfiguration(request), context);
    } );
}

UpdateReplicationConfigurationTemplateOutcome DrsClient::UpdateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateReplicationConfigurationTemplate");
  return UpdateReplicationConfigurationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationConfigurationTemplateOutcomeCallable DrsClient::UpdateReplicationConfigurationTemplateCallable(const UpdateReplicationConfigurationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationConfigurationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationConfigurationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DrsClient::UpdateReplicationConfigurationTemplateAsync(const UpdateReplicationConfigurationTemplateRequest& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationConfigurationTemplate(request), context);
    } );
}

