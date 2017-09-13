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
#include <aws/sms/SMSClient.h>
#include <aws/sms/SMSEndpoint.h>
#include <aws/sms/SMSErrorMarshaller.h>
#include <aws/sms/model/CreateReplicationJobRequest.h>
#include <aws/sms/model/DeleteReplicationJobRequest.h>
#include <aws/sms/model/DeleteServerCatalogRequest.h>
#include <aws/sms/model/DisassociateConnectorRequest.h>
#include <aws/sms/model/GetConnectorsRequest.h>
#include <aws/sms/model/GetReplicationJobsRequest.h>
#include <aws/sms/model/GetReplicationRunsRequest.h>
#include <aws/sms/model/GetServersRequest.h>
#include <aws/sms/model/ImportServerCatalogRequest.h>
#include <aws/sms/model/StartOnDemandReplicationRunRequest.h>
#include <aws/sms/model/UpdateReplicationJobRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SMS;
using namespace Aws::SMS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "sms";
static const char* ALLOCATION_TAG = "SMSClient";


SMSClient::SMSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SMSClient::SMSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SMSClient::SMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SMSClient::~SMSClient()
{
}

void SMSClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << SMSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateReplicationJobOutcome SMSClient::CreateReplicationJob(const CreateReplicationJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateReplicationJobOutcome(CreateReplicationJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateReplicationJobOutcome(outcome.GetError());
  }
}

CreateReplicationJobOutcomeCallable SMSClient::CreateReplicationJobCallable(const CreateReplicationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::CreateReplicationJobAsync(const CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReplicationJobAsyncHelper( request, handler, context ); } );
}

void SMSClient::CreateReplicationJobAsyncHelper(const CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReplicationJob(request), context);
}

DeleteReplicationJobOutcome SMSClient::DeleteReplicationJob(const DeleteReplicationJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteReplicationJobOutcome(DeleteReplicationJobResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReplicationJobOutcome(outcome.GetError());
  }
}

DeleteReplicationJobOutcomeCallable SMSClient::DeleteReplicationJobCallable(const DeleteReplicationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteReplicationJobAsync(const DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReplicationJobAsyncHelper( request, handler, context ); } );
}

void SMSClient::DeleteReplicationJobAsyncHelper(const DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReplicationJob(request), context);
}

DeleteServerCatalogOutcome SMSClient::DeleteServerCatalog(const DeleteServerCatalogRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteServerCatalogOutcome(DeleteServerCatalogResult(outcome.GetResult()));
  }
  else
  {
    return DeleteServerCatalogOutcome(outcome.GetError());
  }
}

DeleteServerCatalogOutcomeCallable SMSClient::DeleteServerCatalogCallable(const DeleteServerCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServerCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServerCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteServerCatalogAsync(const DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServerCatalogAsyncHelper( request, handler, context ); } );
}

void SMSClient::DeleteServerCatalogAsyncHelper(const DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServerCatalog(request), context);
}

DisassociateConnectorOutcome SMSClient::DisassociateConnector(const DisassociateConnectorRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateConnectorOutcome(DisassociateConnectorResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateConnectorOutcome(outcome.GetError());
  }
}

DisassociateConnectorOutcomeCallable SMSClient::DisassociateConnectorCallable(const DisassociateConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DisassociateConnectorAsync(const DisassociateConnectorRequest& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateConnectorAsyncHelper( request, handler, context ); } );
}

void SMSClient::DisassociateConnectorAsyncHelper(const DisassociateConnectorRequest& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateConnector(request), context);
}

GetConnectorsOutcome SMSClient::GetConnectors(const GetConnectorsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConnectorsOutcome(GetConnectorsResult(outcome.GetResult()));
  }
  else
  {
    return GetConnectorsOutcome(outcome.GetError());
  }
}

GetConnectorsOutcomeCallable SMSClient::GetConnectorsCallable(const GetConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetConnectorsAsync(const GetConnectorsRequest& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectorsAsyncHelper( request, handler, context ); } );
}

void SMSClient::GetConnectorsAsyncHelper(const GetConnectorsRequest& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnectors(request), context);
}

GetReplicationJobsOutcome SMSClient::GetReplicationJobs(const GetReplicationJobsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetReplicationJobsOutcome(GetReplicationJobsResult(outcome.GetResult()));
  }
  else
  {
    return GetReplicationJobsOutcome(outcome.GetError());
  }
}

GetReplicationJobsOutcomeCallable SMSClient::GetReplicationJobsCallable(const GetReplicationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetReplicationJobsAsync(const GetReplicationJobsRequest& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReplicationJobsAsyncHelper( request, handler, context ); } );
}

void SMSClient::GetReplicationJobsAsyncHelper(const GetReplicationJobsRequest& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReplicationJobs(request), context);
}

GetReplicationRunsOutcome SMSClient::GetReplicationRuns(const GetReplicationRunsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetReplicationRunsOutcome(GetReplicationRunsResult(outcome.GetResult()));
  }
  else
  {
    return GetReplicationRunsOutcome(outcome.GetError());
  }
}

GetReplicationRunsOutcomeCallable SMSClient::GetReplicationRunsCallable(const GetReplicationRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetReplicationRunsAsync(const GetReplicationRunsRequest& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReplicationRunsAsyncHelper( request, handler, context ); } );
}

void SMSClient::GetReplicationRunsAsyncHelper(const GetReplicationRunsRequest& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReplicationRuns(request), context);
}

GetServersOutcome SMSClient::GetServers(const GetServersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetServersOutcome(GetServersResult(outcome.GetResult()));
  }
  else
  {
    return GetServersOutcome(outcome.GetError());
  }
}

GetServersOutcomeCallable SMSClient::GetServersCallable(const GetServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetServersAsync(const GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServersAsyncHelper( request, handler, context ); } );
}

void SMSClient::GetServersAsyncHelper(const GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServers(request), context);
}

ImportServerCatalogOutcome SMSClient::ImportServerCatalog(const ImportServerCatalogRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportServerCatalogOutcome(ImportServerCatalogResult(outcome.GetResult()));
  }
  else
  {
    return ImportServerCatalogOutcome(outcome.GetError());
  }
}

ImportServerCatalogOutcomeCallable SMSClient::ImportServerCatalogCallable(const ImportServerCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportServerCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportServerCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::ImportServerCatalogAsync(const ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportServerCatalogAsyncHelper( request, handler, context ); } );
}

void SMSClient::ImportServerCatalogAsyncHelper(const ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportServerCatalog(request), context);
}

StartOnDemandReplicationRunOutcome SMSClient::StartOnDemandReplicationRun(const StartOnDemandReplicationRunRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartOnDemandReplicationRunOutcome(StartOnDemandReplicationRunResult(outcome.GetResult()));
  }
  else
  {
    return StartOnDemandReplicationRunOutcome(outcome.GetError());
  }
}

StartOnDemandReplicationRunOutcomeCallable SMSClient::StartOnDemandReplicationRunCallable(const StartOnDemandReplicationRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartOnDemandReplicationRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartOnDemandReplicationRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::StartOnDemandReplicationRunAsync(const StartOnDemandReplicationRunRequest& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartOnDemandReplicationRunAsyncHelper( request, handler, context ); } );
}

void SMSClient::StartOnDemandReplicationRunAsyncHelper(const StartOnDemandReplicationRunRequest& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartOnDemandReplicationRun(request), context);
}

UpdateReplicationJobOutcome SMSClient::UpdateReplicationJob(const UpdateReplicationJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateReplicationJobOutcome(UpdateReplicationJobResult(outcome.GetResult()));
  }
  else
  {
    return UpdateReplicationJobOutcome(outcome.GetError());
  }
}

UpdateReplicationJobOutcomeCallable SMSClient::UpdateReplicationJobCallable(const UpdateReplicationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::UpdateReplicationJobAsync(const UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateReplicationJobAsyncHelper( request, handler, context ); } );
}

void SMSClient::UpdateReplicationJobAsyncHelper(const UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateReplicationJob(request), context);
}

