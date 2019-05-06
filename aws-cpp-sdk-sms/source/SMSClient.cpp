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

#include <aws/sms/SMSClient.h>
#include <aws/sms/SMSEndpoint.h>
#include <aws/sms/SMSErrorMarshaller.h>
#include <aws/sms/model/CreateAppRequest.h>
#include <aws/sms/model/CreateReplicationJobRequest.h>
#include <aws/sms/model/DeleteAppRequest.h>
#include <aws/sms/model/DeleteAppLaunchConfigurationRequest.h>
#include <aws/sms/model/DeleteAppReplicationConfigurationRequest.h>
#include <aws/sms/model/DeleteReplicationJobRequest.h>
#include <aws/sms/model/DeleteServerCatalogRequest.h>
#include <aws/sms/model/DisassociateConnectorRequest.h>
#include <aws/sms/model/GenerateChangeSetRequest.h>
#include <aws/sms/model/GenerateTemplateRequest.h>
#include <aws/sms/model/GetAppRequest.h>
#include <aws/sms/model/GetAppLaunchConfigurationRequest.h>
#include <aws/sms/model/GetAppReplicationConfigurationRequest.h>
#include <aws/sms/model/GetConnectorsRequest.h>
#include <aws/sms/model/GetReplicationJobsRequest.h>
#include <aws/sms/model/GetReplicationRunsRequest.h>
#include <aws/sms/model/GetServersRequest.h>
#include <aws/sms/model/ImportServerCatalogRequest.h>
#include <aws/sms/model/LaunchAppRequest.h>
#include <aws/sms/model/ListAppsRequest.h>
#include <aws/sms/model/PutAppLaunchConfigurationRequest.h>
#include <aws/sms/model/PutAppReplicationConfigurationRequest.h>
#include <aws/sms/model/StartAppReplicationRequest.h>
#include <aws/sms/model/StartOnDemandReplicationRunRequest.h>
#include <aws/sms/model/StopAppReplicationRequest.h>
#include <aws/sms/model/TerminateAppRequest.h>
#include <aws/sms/model/UpdateAppRequest.h>
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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SMSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SMSClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAppOutcome SMSClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAppOutcome(CreateAppResult(outcome.GetResult()));
  }
  else
  {
    return CreateAppOutcome(outcome.GetError());
  }
}

CreateAppOutcomeCallable SMSClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppAsyncHelper( request, handler, context ); } );
}

void SMSClient::CreateAppAsyncHelper(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApp(request), context);
}

CreateReplicationJobOutcome SMSClient::CreateReplicationJob(const CreateReplicationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

DeleteAppOutcome SMSClient::DeleteApp(const DeleteAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAppOutcome(DeleteAppResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAppOutcome(outcome.GetError());
  }
}

DeleteAppOutcomeCallable SMSClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppAsyncHelper( request, handler, context ); } );
}

void SMSClient::DeleteAppAsyncHelper(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApp(request), context);
}

DeleteAppLaunchConfigurationOutcome SMSClient::DeleteAppLaunchConfiguration(const DeleteAppLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAppLaunchConfigurationOutcome(DeleteAppLaunchConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAppLaunchConfigurationOutcome(outcome.GetError());
  }
}

DeleteAppLaunchConfigurationOutcomeCallable SMSClient::DeleteAppLaunchConfigurationCallable(const DeleteAppLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteAppLaunchConfigurationAsync(const DeleteAppLaunchConfigurationRequest& request, const DeleteAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppLaunchConfigurationAsyncHelper( request, handler, context ); } );
}

void SMSClient::DeleteAppLaunchConfigurationAsyncHelper(const DeleteAppLaunchConfigurationRequest& request, const DeleteAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAppLaunchConfiguration(request), context);
}

DeleteAppReplicationConfigurationOutcome SMSClient::DeleteAppReplicationConfiguration(const DeleteAppReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAppReplicationConfigurationOutcome(DeleteAppReplicationConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAppReplicationConfigurationOutcome(outcome.GetError());
  }
}

DeleteAppReplicationConfigurationOutcomeCallable SMSClient::DeleteAppReplicationConfigurationCallable(const DeleteAppReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteAppReplicationConfigurationAsync(const DeleteAppReplicationConfigurationRequest& request, const DeleteAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppReplicationConfigurationAsyncHelper( request, handler, context ); } );
}

void SMSClient::DeleteAppReplicationConfigurationAsyncHelper(const DeleteAppReplicationConfigurationRequest& request, const DeleteAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAppReplicationConfiguration(request), context);
}

DeleteReplicationJobOutcome SMSClient::DeleteReplicationJob(const DeleteReplicationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

GenerateChangeSetOutcome SMSClient::GenerateChangeSet(const GenerateChangeSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GenerateChangeSetOutcome(GenerateChangeSetResult(outcome.GetResult()));
  }
  else
  {
    return GenerateChangeSetOutcome(outcome.GetError());
  }
}

GenerateChangeSetOutcomeCallable SMSClient::GenerateChangeSetCallable(const GenerateChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GenerateChangeSetAsync(const GenerateChangeSetRequest& request, const GenerateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateChangeSetAsyncHelper( request, handler, context ); } );
}

void SMSClient::GenerateChangeSetAsyncHelper(const GenerateChangeSetRequest& request, const GenerateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateChangeSet(request), context);
}

GenerateTemplateOutcome SMSClient::GenerateTemplate(const GenerateTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GenerateTemplateOutcome(GenerateTemplateResult(outcome.GetResult()));
  }
  else
  {
    return GenerateTemplateOutcome(outcome.GetError());
  }
}

GenerateTemplateOutcomeCallable SMSClient::GenerateTemplateCallable(const GenerateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GenerateTemplateAsync(const GenerateTemplateRequest& request, const GenerateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateTemplateAsyncHelper( request, handler, context ); } );
}

void SMSClient::GenerateTemplateAsyncHelper(const GenerateTemplateRequest& request, const GenerateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateTemplate(request), context);
}

GetAppOutcome SMSClient::GetApp(const GetAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAppOutcome(GetAppResult(outcome.GetResult()));
  }
  else
  {
    return GetAppOutcome(outcome.GetError());
  }
}

GetAppOutcomeCallable SMSClient::GetAppCallable(const GetAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppAsync(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppAsyncHelper( request, handler, context ); } );
}

void SMSClient::GetAppAsyncHelper(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApp(request), context);
}

GetAppLaunchConfigurationOutcome SMSClient::GetAppLaunchConfiguration(const GetAppLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAppLaunchConfigurationOutcome(GetAppLaunchConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetAppLaunchConfigurationOutcome(outcome.GetError());
  }
}

GetAppLaunchConfigurationOutcomeCallable SMSClient::GetAppLaunchConfigurationCallable(const GetAppLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppLaunchConfigurationAsync(const GetAppLaunchConfigurationRequest& request, const GetAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppLaunchConfigurationAsyncHelper( request, handler, context ); } );
}

void SMSClient::GetAppLaunchConfigurationAsyncHelper(const GetAppLaunchConfigurationRequest& request, const GetAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAppLaunchConfiguration(request), context);
}

GetAppReplicationConfigurationOutcome SMSClient::GetAppReplicationConfiguration(const GetAppReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAppReplicationConfigurationOutcome(GetAppReplicationConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetAppReplicationConfigurationOutcome(outcome.GetError());
  }
}

GetAppReplicationConfigurationOutcomeCallable SMSClient::GetAppReplicationConfigurationCallable(const GetAppReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppReplicationConfigurationAsync(const GetAppReplicationConfigurationRequest& request, const GetAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppReplicationConfigurationAsyncHelper( request, handler, context ); } );
}

void SMSClient::GetAppReplicationConfigurationAsyncHelper(const GetAppReplicationConfigurationRequest& request, const GetAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAppReplicationConfiguration(request), context);
}

GetConnectorsOutcome SMSClient::GetConnectors(const GetConnectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

LaunchAppOutcome SMSClient::LaunchApp(const LaunchAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return LaunchAppOutcome(LaunchAppResult(outcome.GetResult()));
  }
  else
  {
    return LaunchAppOutcome(outcome.GetError());
  }
}

LaunchAppOutcomeCallable SMSClient::LaunchAppCallable(const LaunchAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LaunchAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LaunchApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::LaunchAppAsync(const LaunchAppRequest& request, const LaunchAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->LaunchAppAsyncHelper( request, handler, context ); } );
}

void SMSClient::LaunchAppAsyncHelper(const LaunchAppRequest& request, const LaunchAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LaunchApp(request), context);
}

ListAppsOutcome SMSClient::ListApps(const ListAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAppsOutcome(ListAppsResult(outcome.GetResult()));
  }
  else
  {
    return ListAppsOutcome(outcome.GetError());
  }
}

ListAppsOutcomeCallable SMSClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAppsAsyncHelper( request, handler, context ); } );
}

void SMSClient::ListAppsAsyncHelper(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApps(request), context);
}

PutAppLaunchConfigurationOutcome SMSClient::PutAppLaunchConfiguration(const PutAppLaunchConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutAppLaunchConfigurationOutcome(PutAppLaunchConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutAppLaunchConfigurationOutcome(outcome.GetError());
  }
}

PutAppLaunchConfigurationOutcomeCallable SMSClient::PutAppLaunchConfigurationCallable(const PutAppLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::PutAppLaunchConfigurationAsync(const PutAppLaunchConfigurationRequest& request, const PutAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAppLaunchConfigurationAsyncHelper( request, handler, context ); } );
}

void SMSClient::PutAppLaunchConfigurationAsyncHelper(const PutAppLaunchConfigurationRequest& request, const PutAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAppLaunchConfiguration(request), context);
}

PutAppReplicationConfigurationOutcome SMSClient::PutAppReplicationConfiguration(const PutAppReplicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutAppReplicationConfigurationOutcome(PutAppReplicationConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutAppReplicationConfigurationOutcome(outcome.GetError());
  }
}

PutAppReplicationConfigurationOutcomeCallable SMSClient::PutAppReplicationConfigurationCallable(const PutAppReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::PutAppReplicationConfigurationAsync(const PutAppReplicationConfigurationRequest& request, const PutAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAppReplicationConfigurationAsyncHelper( request, handler, context ); } );
}

void SMSClient::PutAppReplicationConfigurationAsyncHelper(const PutAppReplicationConfigurationRequest& request, const PutAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAppReplicationConfiguration(request), context);
}

StartAppReplicationOutcome SMSClient::StartAppReplication(const StartAppReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartAppReplicationOutcome(StartAppReplicationResult(outcome.GetResult()));
  }
  else
  {
    return StartAppReplicationOutcome(outcome.GetError());
  }
}

StartAppReplicationOutcomeCallable SMSClient::StartAppReplicationCallable(const StartAppReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAppReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAppReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::StartAppReplicationAsync(const StartAppReplicationRequest& request, const StartAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartAppReplicationAsyncHelper( request, handler, context ); } );
}

void SMSClient::StartAppReplicationAsyncHelper(const StartAppReplicationRequest& request, const StartAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartAppReplication(request), context);
}

StartOnDemandReplicationRunOutcome SMSClient::StartOnDemandReplicationRun(const StartOnDemandReplicationRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

StopAppReplicationOutcome SMSClient::StopAppReplication(const StopAppReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopAppReplicationOutcome(StopAppReplicationResult(outcome.GetResult()));
  }
  else
  {
    return StopAppReplicationOutcome(outcome.GetError());
  }
}

StopAppReplicationOutcomeCallable SMSClient::StopAppReplicationCallable(const StopAppReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAppReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAppReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::StopAppReplicationAsync(const StopAppReplicationRequest& request, const StopAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopAppReplicationAsyncHelper( request, handler, context ); } );
}

void SMSClient::StopAppReplicationAsyncHelper(const StopAppReplicationRequest& request, const StopAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopAppReplication(request), context);
}

TerminateAppOutcome SMSClient::TerminateApp(const TerminateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TerminateAppOutcome(TerminateAppResult(outcome.GetResult()));
  }
  else
  {
    return TerminateAppOutcome(outcome.GetError());
  }
}

TerminateAppOutcomeCallable SMSClient::TerminateAppCallable(const TerminateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::TerminateAppAsync(const TerminateAppRequest& request, const TerminateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateAppAsyncHelper( request, handler, context ); } );
}

void SMSClient::TerminateAppAsyncHelper(const TerminateAppRequest& request, const TerminateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateApp(request), context);
}

UpdateAppOutcome SMSClient::UpdateApp(const UpdateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAppOutcome(UpdateAppResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAppOutcome(outcome.GetError());
  }
}

UpdateAppOutcomeCallable SMSClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAppAsyncHelper( request, handler, context ); } );
}

void SMSClient::UpdateAppAsyncHelper(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApp(request), context);
}

UpdateReplicationJobOutcome SMSClient::UpdateReplicationJob(const UpdateReplicationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

