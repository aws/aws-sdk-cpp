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
#include <aws/greengrass/GreengrassClient.h>
#include <aws/greengrass/GreengrassEndpoint.h>
#include <aws/greengrass/GreengrassErrorMarshaller.h>
#include <aws/greengrass/model/AssociateRoleToGroupRequest.h>
#include <aws/greengrass/model/AssociateServiceRoleToAccountRequest.h>
#include <aws/greengrass/model/CreateCoreDefinitionRequest.h>
#include <aws/greengrass/model/CreateCoreDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateDeploymentRequest.h>
#include <aws/greengrass/model/CreateDeviceDefinitionRequest.h>
#include <aws/greengrass/model/CreateDeviceDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateFunctionDefinitionRequest.h>
#include <aws/greengrass/model/CreateFunctionDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateGroupRequest.h>
#include <aws/greengrass/model/CreateGroupCertificateAuthorityRequest.h>
#include <aws/greengrass/model/CreateGroupVersionRequest.h>
#include <aws/greengrass/model/CreateLoggerDefinitionRequest.h>
#include <aws/greengrass/model/CreateLoggerDefinitionVersionRequest.h>
#include <aws/greengrass/model/CreateSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/CreateSubscriptionDefinitionVersionRequest.h>
#include <aws/greengrass/model/DeleteCoreDefinitionRequest.h>
#include <aws/greengrass/model/DeleteDeviceDefinitionRequest.h>
#include <aws/greengrass/model/DeleteFunctionDefinitionRequest.h>
#include <aws/greengrass/model/DeleteGroupRequest.h>
#include <aws/greengrass/model/DeleteLoggerDefinitionRequest.h>
#include <aws/greengrass/model/DeleteSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/DisassociateRoleFromGroupRequest.h>
#include <aws/greengrass/model/DisassociateServiceRoleFromAccountRequest.h>
#include <aws/greengrass/model/GetAssociatedRoleRequest.h>
#include <aws/greengrass/model/GetConnectivityInfoRequest.h>
#include <aws/greengrass/model/GetCoreDefinitionRequest.h>
#include <aws/greengrass/model/GetCoreDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetDeploymentStatusRequest.h>
#include <aws/greengrass/model/GetDeviceDefinitionRequest.h>
#include <aws/greengrass/model/GetDeviceDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetFunctionDefinitionRequest.h>
#include <aws/greengrass/model/GetFunctionDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetGroupRequest.h>
#include <aws/greengrass/model/GetGroupCertificateAuthorityRequest.h>
#include <aws/greengrass/model/GetGroupCertificateConfigurationRequest.h>
#include <aws/greengrass/model/GetGroupVersionRequest.h>
#include <aws/greengrass/model/GetLoggerDefinitionRequest.h>
#include <aws/greengrass/model/GetLoggerDefinitionVersionRequest.h>
#include <aws/greengrass/model/GetServiceRoleForAccountRequest.h>
#include <aws/greengrass/model/GetSubscriptionDefinitionRequest.h>
#include <aws/greengrass/model/GetSubscriptionDefinitionVersionRequest.h>
#include <aws/greengrass/model/ListCoreDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListCoreDefinitionsRequest.h>
#include <aws/greengrass/model/ListDeploymentsRequest.h>
#include <aws/greengrass/model/ListDeviceDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListDeviceDefinitionsRequest.h>
#include <aws/greengrass/model/ListFunctionDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListFunctionDefinitionsRequest.h>
#include <aws/greengrass/model/ListGroupCertificateAuthoritiesRequest.h>
#include <aws/greengrass/model/ListGroupVersionsRequest.h>
#include <aws/greengrass/model/ListGroupsRequest.h>
#include <aws/greengrass/model/ListLoggerDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListLoggerDefinitionsRequest.h>
#include <aws/greengrass/model/ListSubscriptionDefinitionVersionsRequest.h>
#include <aws/greengrass/model/ListSubscriptionDefinitionsRequest.h>
#include <aws/greengrass/model/ResetDeploymentsRequest.h>
#include <aws/greengrass/model/UpdateConnectivityInfoRequest.h>
#include <aws/greengrass/model/UpdateCoreDefinitionRequest.h>
#include <aws/greengrass/model/UpdateDeviceDefinitionRequest.h>
#include <aws/greengrass/model/UpdateFunctionDefinitionRequest.h>
#include <aws/greengrass/model/UpdateGroupRequest.h>
#include <aws/greengrass/model/UpdateGroupCertificateConfigurationRequest.h>
#include <aws/greengrass/model/UpdateLoggerDefinitionRequest.h>
#include <aws/greengrass/model/UpdateSubscriptionDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Greengrass;
using namespace Aws::Greengrass::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "greengrass";
static const char* ALLOCATION_TAG = "GreengrassClient";


GreengrassClient::GreengrassClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GreengrassClient::GreengrassClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GreengrassClient::GreengrassClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GreengrassErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GreengrassClient::~GreengrassClient()
{
}

void GreengrassClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << GreengrassEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AssociateRoleToGroupOutcome GreengrassClient::AssociateRoleToGroup(const AssociateRoleToGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/role";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateRoleToGroupOutcome(AssociateRoleToGroupResult(outcome.GetResult()));
  }
  else
  {
    return AssociateRoleToGroupOutcome(outcome.GetError());
  }
}

AssociateRoleToGroupOutcomeCallable GreengrassClient::AssociateRoleToGroupCallable(const AssociateRoleToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateRoleToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateRoleToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::AssociateRoleToGroupAsync(const AssociateRoleToGroupRequest& request, const AssociateRoleToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateRoleToGroupAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::AssociateRoleToGroupAsyncHelper(const AssociateRoleToGroupRequest& request, const AssociateRoleToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateRoleToGroup(request), context);
}

AssociateServiceRoleToAccountOutcome GreengrassClient::AssociateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/servicerole";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateServiceRoleToAccountOutcome(AssociateServiceRoleToAccountResult(outcome.GetResult()));
  }
  else
  {
    return AssociateServiceRoleToAccountOutcome(outcome.GetError());
  }
}

AssociateServiceRoleToAccountOutcomeCallable GreengrassClient::AssociateServiceRoleToAccountCallable(const AssociateServiceRoleToAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateServiceRoleToAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateServiceRoleToAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::AssociateServiceRoleToAccountAsync(const AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateServiceRoleToAccountAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::AssociateServiceRoleToAccountAsyncHelper(const AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateServiceRoleToAccount(request), context);
}

CreateCoreDefinitionOutcome GreengrassClient::CreateCoreDefinition(const CreateCoreDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCoreDefinitionOutcome(CreateCoreDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return CreateCoreDefinitionOutcome(outcome.GetError());
  }
}

CreateCoreDefinitionOutcomeCallable GreengrassClient::CreateCoreDefinitionCallable(const CreateCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateCoreDefinitionAsync(const CreateCoreDefinitionRequest& request, const CreateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCoreDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateCoreDefinitionAsyncHelper(const CreateCoreDefinitionRequest& request, const CreateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCoreDefinition(request), context);
}

CreateCoreDefinitionVersionOutcome GreengrassClient::CreateCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores/";
  ss << request.GetCoreDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCoreDefinitionVersionOutcome(CreateCoreDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateCoreDefinitionVersionOutcome(outcome.GetError());
  }
}

CreateCoreDefinitionVersionOutcomeCallable GreengrassClient::CreateCoreDefinitionVersionCallable(const CreateCoreDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCoreDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCoreDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateCoreDefinitionVersionAsync(const CreateCoreDefinitionVersionRequest& request, const CreateCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCoreDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateCoreDefinitionVersionAsyncHelper(const CreateCoreDefinitionVersionRequest& request, const CreateCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCoreDefinitionVersion(request), context);
}

CreateDeploymentOutcome GreengrassClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/deployments";
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

CreateDeploymentOutcomeCallable GreengrassClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeployment(request), context);
}

CreateDeviceDefinitionOutcome GreengrassClient::CreateDeviceDefinition(const CreateDeviceDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDeviceDefinitionOutcome(CreateDeviceDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeviceDefinitionOutcome(outcome.GetError());
  }
}

CreateDeviceDefinitionOutcomeCallable GreengrassClient::CreateDeviceDefinitionCallable(const CreateDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateDeviceDefinitionAsync(const CreateDeviceDefinitionRequest& request, const CreateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeviceDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateDeviceDefinitionAsyncHelper(const CreateDeviceDefinitionRequest& request, const CreateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeviceDefinition(request), context);
}

CreateDeviceDefinitionVersionOutcome GreengrassClient::CreateDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices/";
  ss << request.GetDeviceDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDeviceDefinitionVersionOutcome(CreateDeviceDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeviceDefinitionVersionOutcome(outcome.GetError());
  }
}

CreateDeviceDefinitionVersionOutcomeCallable GreengrassClient::CreateDeviceDefinitionVersionCallable(const CreateDeviceDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeviceDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateDeviceDefinitionVersionAsync(const CreateDeviceDefinitionVersionRequest& request, const CreateDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeviceDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateDeviceDefinitionVersionAsyncHelper(const CreateDeviceDefinitionVersionRequest& request, const CreateDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeviceDefinitionVersion(request), context);
}

CreateFunctionDefinitionOutcome GreengrassClient::CreateFunctionDefinition(const CreateFunctionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFunctionDefinitionOutcome(CreateFunctionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return CreateFunctionDefinitionOutcome(outcome.GetError());
  }
}

CreateFunctionDefinitionOutcomeCallable GreengrassClient::CreateFunctionDefinitionCallable(const CreateFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateFunctionDefinitionAsync(const CreateFunctionDefinitionRequest& request, const CreateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFunctionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateFunctionDefinitionAsyncHelper(const CreateFunctionDefinitionRequest& request, const CreateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFunctionDefinition(request), context);
}

CreateFunctionDefinitionVersionOutcome GreengrassClient::CreateFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions/";
  ss << request.GetFunctionDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFunctionDefinitionVersionOutcome(CreateFunctionDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateFunctionDefinitionVersionOutcome(outcome.GetError());
  }
}

CreateFunctionDefinitionVersionOutcomeCallable GreengrassClient::CreateFunctionDefinitionVersionCallable(const CreateFunctionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunctionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunctionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateFunctionDefinitionVersionAsync(const CreateFunctionDefinitionVersionRequest& request, const CreateFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFunctionDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateFunctionDefinitionVersionAsyncHelper(const CreateFunctionDefinitionVersionRequest& request, const CreateFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFunctionDefinitionVersion(request), context);
}

CreateGroupOutcome GreengrassClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGroupOutcome(CreateGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateGroupOutcome(outcome.GetError());
  }
}

CreateGroupOutcomeCallable GreengrassClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGroupAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateGroupAsyncHelper(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroup(request), context);
}

CreateGroupCertificateAuthorityOutcome GreengrassClient::CreateGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/certificateauthorities";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGroupCertificateAuthorityOutcome(CreateGroupCertificateAuthorityResult(outcome.GetResult()));
  }
  else
  {
    return CreateGroupCertificateAuthorityOutcome(outcome.GetError());
  }
}

CreateGroupCertificateAuthorityOutcomeCallable GreengrassClient::CreateGroupCertificateAuthorityCallable(const CreateGroupCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroupCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateGroupCertificateAuthorityAsync(const CreateGroupCertificateAuthorityRequest& request, const CreateGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGroupCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateGroupCertificateAuthorityAsyncHelper(const CreateGroupCertificateAuthorityRequest& request, const CreateGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroupCertificateAuthority(request), context);
}

CreateGroupVersionOutcome GreengrassClient::CreateGroupVersion(const CreateGroupVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGroupVersionOutcome(CreateGroupVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateGroupVersionOutcome(outcome.GetError());
  }
}

CreateGroupVersionOutcomeCallable GreengrassClient::CreateGroupVersionCallable(const CreateGroupVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroupVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateGroupVersionAsync(const CreateGroupVersionRequest& request, const CreateGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGroupVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateGroupVersionAsyncHelper(const CreateGroupVersionRequest& request, const CreateGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroupVersion(request), context);
}

CreateLoggerDefinitionOutcome GreengrassClient::CreateLoggerDefinition(const CreateLoggerDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLoggerDefinitionOutcome(CreateLoggerDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoggerDefinitionOutcome(outcome.GetError());
  }
}

CreateLoggerDefinitionOutcomeCallable GreengrassClient::CreateLoggerDefinitionCallable(const CreateLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateLoggerDefinitionAsync(const CreateLoggerDefinitionRequest& request, const CreateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoggerDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateLoggerDefinitionAsyncHelper(const CreateLoggerDefinitionRequest& request, const CreateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoggerDefinition(request), context);
}

CreateLoggerDefinitionVersionOutcome GreengrassClient::CreateLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers/";
  ss << request.GetLoggerDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLoggerDefinitionVersionOutcome(CreateLoggerDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoggerDefinitionVersionOutcome(outcome.GetError());
  }
}

CreateLoggerDefinitionVersionOutcomeCallable GreengrassClient::CreateLoggerDefinitionVersionCallable(const CreateLoggerDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoggerDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoggerDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateLoggerDefinitionVersionAsync(const CreateLoggerDefinitionVersionRequest& request, const CreateLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoggerDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateLoggerDefinitionVersionAsyncHelper(const CreateLoggerDefinitionVersionRequest& request, const CreateLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoggerDefinitionVersion(request), context);
}

CreateSubscriptionDefinitionOutcome GreengrassClient::CreateSubscriptionDefinition(const CreateSubscriptionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSubscriptionDefinitionOutcome(CreateSubscriptionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return CreateSubscriptionDefinitionOutcome(outcome.GetError());
  }
}

CreateSubscriptionDefinitionOutcomeCallable GreengrassClient::CreateSubscriptionDefinitionCallable(const CreateSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateSubscriptionDefinitionAsync(const CreateSubscriptionDefinitionRequest& request, const CreateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSubscriptionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateSubscriptionDefinitionAsyncHelper(const CreateSubscriptionDefinitionRequest& request, const CreateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSubscriptionDefinition(request), context);
}

CreateSubscriptionDefinitionVersionOutcome GreengrassClient::CreateSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions/";
  ss << request.GetSubscriptionDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSubscriptionDefinitionVersionOutcome(CreateSubscriptionDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateSubscriptionDefinitionVersionOutcome(outcome.GetError());
  }
}

CreateSubscriptionDefinitionVersionOutcomeCallable GreengrassClient::CreateSubscriptionDefinitionVersionCallable(const CreateSubscriptionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriptionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscriptionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::CreateSubscriptionDefinitionVersionAsync(const CreateSubscriptionDefinitionVersionRequest& request, const CreateSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSubscriptionDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::CreateSubscriptionDefinitionVersionAsyncHelper(const CreateSubscriptionDefinitionVersionRequest& request, const CreateSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSubscriptionDefinitionVersion(request), context);
}

DeleteCoreDefinitionOutcome GreengrassClient::DeleteCoreDefinition(const DeleteCoreDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores/";
  ss << request.GetCoreDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCoreDefinitionOutcome(DeleteCoreDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCoreDefinitionOutcome(outcome.GetError());
  }
}

DeleteCoreDefinitionOutcomeCallable GreengrassClient::DeleteCoreDefinitionCallable(const DeleteCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteCoreDefinitionAsync(const DeleteCoreDefinitionRequest& request, const DeleteCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCoreDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DeleteCoreDefinitionAsyncHelper(const DeleteCoreDefinitionRequest& request, const DeleteCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCoreDefinition(request), context);
}

DeleteDeviceDefinitionOutcome GreengrassClient::DeleteDeviceDefinition(const DeleteDeviceDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices/";
  ss << request.GetDeviceDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDeviceDefinitionOutcome(DeleteDeviceDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDeviceDefinitionOutcome(outcome.GetError());
  }
}

DeleteDeviceDefinitionOutcomeCallable GreengrassClient::DeleteDeviceDefinitionCallable(const DeleteDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteDeviceDefinitionAsync(const DeleteDeviceDefinitionRequest& request, const DeleteDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeviceDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DeleteDeviceDefinitionAsyncHelper(const DeleteDeviceDefinitionRequest& request, const DeleteDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeviceDefinition(request), context);
}

DeleteFunctionDefinitionOutcome GreengrassClient::DeleteFunctionDefinition(const DeleteFunctionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions/";
  ss << request.GetFunctionDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFunctionDefinitionOutcome(DeleteFunctionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFunctionDefinitionOutcome(outcome.GetError());
  }
}

DeleteFunctionDefinitionOutcomeCallable GreengrassClient::DeleteFunctionDefinitionCallable(const DeleteFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteFunctionDefinitionAsync(const DeleteFunctionDefinitionRequest& request, const DeleteFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFunctionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DeleteFunctionDefinitionAsyncHelper(const DeleteFunctionDefinitionRequest& request, const DeleteFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFunctionDefinition(request), context);
}

DeleteGroupOutcome GreengrassClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGroupOutcome(DeleteGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGroupOutcome(outcome.GetError());
  }
}

DeleteGroupOutcomeCallable GreengrassClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGroupAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DeleteGroupAsyncHelper(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroup(request), context);
}

DeleteLoggerDefinitionOutcome GreengrassClient::DeleteLoggerDefinition(const DeleteLoggerDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers/";
  ss << request.GetLoggerDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLoggerDefinitionOutcome(DeleteLoggerDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoggerDefinitionOutcome(outcome.GetError());
  }
}

DeleteLoggerDefinitionOutcomeCallable GreengrassClient::DeleteLoggerDefinitionCallable(const DeleteLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteLoggerDefinitionAsync(const DeleteLoggerDefinitionRequest& request, const DeleteLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoggerDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DeleteLoggerDefinitionAsyncHelper(const DeleteLoggerDefinitionRequest& request, const DeleteLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoggerDefinition(request), context);
}

DeleteSubscriptionDefinitionOutcome GreengrassClient::DeleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions/";
  ss << request.GetSubscriptionDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSubscriptionDefinitionOutcome(DeleteSubscriptionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSubscriptionDefinitionOutcome(outcome.GetError());
  }
}

DeleteSubscriptionDefinitionOutcomeCallable GreengrassClient::DeleteSubscriptionDefinitionCallable(const DeleteSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DeleteSubscriptionDefinitionAsync(const DeleteSubscriptionDefinitionRequest& request, const DeleteSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSubscriptionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DeleteSubscriptionDefinitionAsyncHelper(const DeleteSubscriptionDefinitionRequest& request, const DeleteSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSubscriptionDefinition(request), context);
}

DisassociateRoleFromGroupOutcome GreengrassClient::DisassociateRoleFromGroup(const DisassociateRoleFromGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/role";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateRoleFromGroupOutcome(DisassociateRoleFromGroupResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateRoleFromGroupOutcome(outcome.GetError());
  }
}

DisassociateRoleFromGroupOutcomeCallable GreengrassClient::DisassociateRoleFromGroupCallable(const DisassociateRoleFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRoleFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateRoleFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DisassociateRoleFromGroupAsync(const DisassociateRoleFromGroupRequest& request, const DisassociateRoleFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateRoleFromGroupAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DisassociateRoleFromGroupAsyncHelper(const DisassociateRoleFromGroupRequest& request, const DisassociateRoleFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateRoleFromGroup(request), context);
}

DisassociateServiceRoleFromAccountOutcome GreengrassClient::DisassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/servicerole";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateServiceRoleFromAccountOutcome(DisassociateServiceRoleFromAccountResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateServiceRoleFromAccountOutcome(outcome.GetError());
  }
}

DisassociateServiceRoleFromAccountOutcomeCallable GreengrassClient::DisassociateServiceRoleFromAccountCallable(const DisassociateServiceRoleFromAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateServiceRoleFromAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateServiceRoleFromAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::DisassociateServiceRoleFromAccountAsync(const DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateServiceRoleFromAccountAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::DisassociateServiceRoleFromAccountAsyncHelper(const DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateServiceRoleFromAccount(request), context);
}

GetAssociatedRoleOutcome GreengrassClient::GetAssociatedRole(const GetAssociatedRoleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/role";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAssociatedRoleOutcome(GetAssociatedRoleResult(outcome.GetResult()));
  }
  else
  {
    return GetAssociatedRoleOutcome(outcome.GetError());
  }
}

GetAssociatedRoleOutcomeCallable GreengrassClient::GetAssociatedRoleCallable(const GetAssociatedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssociatedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssociatedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetAssociatedRoleAsync(const GetAssociatedRoleRequest& request, const GetAssociatedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAssociatedRoleAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetAssociatedRoleAsyncHelper(const GetAssociatedRoleRequest& request, const GetAssociatedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssociatedRole(request), context);
}

GetConnectivityInfoOutcome GreengrassClient::GetConnectivityInfo(const GetConnectivityInfoRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/things/";
  ss << request.GetThingName();
  ss << "/connectivityInfo";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetConnectivityInfoOutcome(GetConnectivityInfoResult(outcome.GetResult()));
  }
  else
  {
    return GetConnectivityInfoOutcome(outcome.GetError());
  }
}

GetConnectivityInfoOutcomeCallable GreengrassClient::GetConnectivityInfoCallable(const GetConnectivityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectivityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectivityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetConnectivityInfoAsync(const GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetConnectivityInfoAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetConnectivityInfoAsyncHelper(const GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetConnectivityInfo(request), context);
}

GetCoreDefinitionOutcome GreengrassClient::GetCoreDefinition(const GetCoreDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores/";
  ss << request.GetCoreDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCoreDefinitionOutcome(GetCoreDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return GetCoreDefinitionOutcome(outcome.GetError());
  }
}

GetCoreDefinitionOutcomeCallable GreengrassClient::GetCoreDefinitionCallable(const GetCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetCoreDefinitionAsync(const GetCoreDefinitionRequest& request, const GetCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCoreDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetCoreDefinitionAsyncHelper(const GetCoreDefinitionRequest& request, const GetCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCoreDefinition(request), context);
}

GetCoreDefinitionVersionOutcome GreengrassClient::GetCoreDefinitionVersion(const GetCoreDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores/";
  ss << request.GetCoreDefinitionId();
  ss << "/versions/";
  ss << request.GetCoreDefinitionVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCoreDefinitionVersionOutcome(GetCoreDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetCoreDefinitionVersionOutcome(outcome.GetError());
  }
}

GetCoreDefinitionVersionOutcomeCallable GreengrassClient::GetCoreDefinitionVersionCallable(const GetCoreDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCoreDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCoreDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetCoreDefinitionVersionAsync(const GetCoreDefinitionVersionRequest& request, const GetCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCoreDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetCoreDefinitionVersionAsyncHelper(const GetCoreDefinitionVersionRequest& request, const GetCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCoreDefinitionVersion(request), context);
}

GetDeploymentStatusOutcome GreengrassClient::GetDeploymentStatus(const GetDeploymentStatusRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/deployments/";
  ss << request.GetDeploymentId();
  ss << "/status";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeploymentStatusOutcome(GetDeploymentStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentStatusOutcome(outcome.GetError());
  }
}

GetDeploymentStatusOutcomeCallable GreengrassClient::GetDeploymentStatusCallable(const GetDeploymentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetDeploymentStatusAsync(const GetDeploymentStatusRequest& request, const GetDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentStatusAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetDeploymentStatusAsyncHelper(const GetDeploymentStatusRequest& request, const GetDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeploymentStatus(request), context);
}

GetDeviceDefinitionOutcome GreengrassClient::GetDeviceDefinition(const GetDeviceDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices/";
  ss << request.GetDeviceDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceDefinitionOutcome(GetDeviceDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceDefinitionOutcome(outcome.GetError());
  }
}

GetDeviceDefinitionOutcomeCallable GreengrassClient::GetDeviceDefinitionCallable(const GetDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetDeviceDefinitionAsync(const GetDeviceDefinitionRequest& request, const GetDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetDeviceDefinitionAsyncHelper(const GetDeviceDefinitionRequest& request, const GetDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeviceDefinition(request), context);
}

GetDeviceDefinitionVersionOutcome GreengrassClient::GetDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices/";
  ss << request.GetDeviceDefinitionId();
  ss << "/versions/";
  ss << request.GetDeviceDefinitionVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceDefinitionVersionOutcome(GetDeviceDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceDefinitionVersionOutcome(outcome.GetError());
  }
}

GetDeviceDefinitionVersionOutcomeCallable GreengrassClient::GetDeviceDefinitionVersionCallable(const GetDeviceDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetDeviceDefinitionVersionAsync(const GetDeviceDefinitionVersionRequest& request, const GetDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetDeviceDefinitionVersionAsyncHelper(const GetDeviceDefinitionVersionRequest& request, const GetDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeviceDefinitionVersion(request), context);
}

GetFunctionDefinitionOutcome GreengrassClient::GetFunctionDefinition(const GetFunctionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions/";
  ss << request.GetFunctionDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFunctionDefinitionOutcome(GetFunctionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return GetFunctionDefinitionOutcome(outcome.GetError());
  }
}

GetFunctionDefinitionOutcomeCallable GreengrassClient::GetFunctionDefinitionCallable(const GetFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetFunctionDefinitionAsync(const GetFunctionDefinitionRequest& request, const GetFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFunctionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetFunctionDefinitionAsyncHelper(const GetFunctionDefinitionRequest& request, const GetFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFunctionDefinition(request), context);
}

GetFunctionDefinitionVersionOutcome GreengrassClient::GetFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions/";
  ss << request.GetFunctionDefinitionId();
  ss << "/versions/";
  ss << request.GetFunctionDefinitionVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFunctionDefinitionVersionOutcome(GetFunctionDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetFunctionDefinitionVersionOutcome(outcome.GetError());
  }
}

GetFunctionDefinitionVersionOutcomeCallable GreengrassClient::GetFunctionDefinitionVersionCallable(const GetFunctionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetFunctionDefinitionVersionAsync(const GetFunctionDefinitionVersionRequest& request, const GetFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFunctionDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetFunctionDefinitionVersionAsyncHelper(const GetFunctionDefinitionVersionRequest& request, const GetFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFunctionDefinitionVersion(request), context);
}

GetGroupOutcome GreengrassClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGroupOutcome(GetGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupOutcome(outcome.GetError());
  }
}

GetGroupOutcomeCallable GreengrassClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetGroupAsyncHelper(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroup(request), context);
}

GetGroupCertificateAuthorityOutcome GreengrassClient::GetGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/certificateauthorities/";
  ss << request.GetCertificateAuthorityId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGroupCertificateAuthorityOutcome(GetGroupCertificateAuthorityResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupCertificateAuthorityOutcome(outcome.GetError());
  }
}

GetGroupCertificateAuthorityOutcomeCallable GreengrassClient::GetGroupCertificateAuthorityCallable(const GetGroupCertificateAuthorityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupCertificateAuthorityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupCertificateAuthority(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupCertificateAuthorityAsync(const GetGroupCertificateAuthorityRequest& request, const GetGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupCertificateAuthorityAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetGroupCertificateAuthorityAsyncHelper(const GetGroupCertificateAuthorityRequest& request, const GetGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroupCertificateAuthority(request), context);
}

GetGroupCertificateConfigurationOutcome GreengrassClient::GetGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/certificateauthorities/configuration/expiry";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGroupCertificateConfigurationOutcome(GetGroupCertificateConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupCertificateConfigurationOutcome(outcome.GetError());
  }
}

GetGroupCertificateConfigurationOutcomeCallable GreengrassClient::GetGroupCertificateConfigurationCallable(const GetGroupCertificateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupCertificateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupCertificateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupCertificateConfigurationAsync(const GetGroupCertificateConfigurationRequest& request, const GetGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupCertificateConfigurationAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetGroupCertificateConfigurationAsyncHelper(const GetGroupCertificateConfigurationRequest& request, const GetGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroupCertificateConfiguration(request), context);
}

GetGroupVersionOutcome GreengrassClient::GetGroupVersion(const GetGroupVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/versions/";
  ss << request.GetGroupVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGroupVersionOutcome(GetGroupVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupVersionOutcome(outcome.GetError());
  }
}

GetGroupVersionOutcomeCallable GreengrassClient::GetGroupVersionCallable(const GetGroupVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetGroupVersionAsync(const GetGroupVersionRequest& request, const GetGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetGroupVersionAsyncHelper(const GetGroupVersionRequest& request, const GetGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroupVersion(request), context);
}

GetLoggerDefinitionOutcome GreengrassClient::GetLoggerDefinition(const GetLoggerDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers/";
  ss << request.GetLoggerDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoggerDefinitionOutcome(GetLoggerDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return GetLoggerDefinitionOutcome(outcome.GetError());
  }
}

GetLoggerDefinitionOutcomeCallable GreengrassClient::GetLoggerDefinitionCallable(const GetLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetLoggerDefinitionAsync(const GetLoggerDefinitionRequest& request, const GetLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLoggerDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetLoggerDefinitionAsyncHelper(const GetLoggerDefinitionRequest& request, const GetLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoggerDefinition(request), context);
}

GetLoggerDefinitionVersionOutcome GreengrassClient::GetLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers/";
  ss << request.GetLoggerDefinitionId();
  ss << "/versions/";
  ss << request.GetLoggerDefinitionVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoggerDefinitionVersionOutcome(GetLoggerDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetLoggerDefinitionVersionOutcome(outcome.GetError());
  }
}

GetLoggerDefinitionVersionOutcomeCallable GreengrassClient::GetLoggerDefinitionVersionCallable(const GetLoggerDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggerDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggerDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetLoggerDefinitionVersionAsync(const GetLoggerDefinitionVersionRequest& request, const GetLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLoggerDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetLoggerDefinitionVersionAsyncHelper(const GetLoggerDefinitionVersionRequest& request, const GetLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoggerDefinitionVersion(request), context);
}

GetServiceRoleForAccountOutcome GreengrassClient::GetServiceRoleForAccount(const GetServiceRoleForAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/servicerole";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetServiceRoleForAccountOutcome(GetServiceRoleForAccountResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceRoleForAccountOutcome(outcome.GetError());
  }
}

GetServiceRoleForAccountOutcomeCallable GreengrassClient::GetServiceRoleForAccountCallable(const GetServiceRoleForAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceRoleForAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceRoleForAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetServiceRoleForAccountAsync(const GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceRoleForAccountAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetServiceRoleForAccountAsyncHelper(const GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceRoleForAccount(request), context);
}

GetSubscriptionDefinitionOutcome GreengrassClient::GetSubscriptionDefinition(const GetSubscriptionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions/";
  ss << request.GetSubscriptionDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSubscriptionDefinitionOutcome(GetSubscriptionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return GetSubscriptionDefinitionOutcome(outcome.GetError());
  }
}

GetSubscriptionDefinitionOutcomeCallable GreengrassClient::GetSubscriptionDefinitionCallable(const GetSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetSubscriptionDefinitionAsync(const GetSubscriptionDefinitionRequest& request, const GetSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSubscriptionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetSubscriptionDefinitionAsyncHelper(const GetSubscriptionDefinitionRequest& request, const GetSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSubscriptionDefinition(request), context);
}

GetSubscriptionDefinitionVersionOutcome GreengrassClient::GetSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions/";
  ss << request.GetSubscriptionDefinitionId();
  ss << "/versions/";
  ss << request.GetSubscriptionDefinitionVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSubscriptionDefinitionVersionOutcome(GetSubscriptionDefinitionVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetSubscriptionDefinitionVersionOutcome(outcome.GetError());
  }
}

GetSubscriptionDefinitionVersionOutcomeCallable GreengrassClient::GetSubscriptionDefinitionVersionCallable(const GetSubscriptionDefinitionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionDefinitionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionDefinitionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::GetSubscriptionDefinitionVersionAsync(const GetSubscriptionDefinitionVersionRequest& request, const GetSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSubscriptionDefinitionVersionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::GetSubscriptionDefinitionVersionAsyncHelper(const GetSubscriptionDefinitionVersionRequest& request, const GetSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSubscriptionDefinitionVersion(request), context);
}

ListCoreDefinitionVersionsOutcome GreengrassClient::ListCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores/";
  ss << request.GetCoreDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCoreDefinitionVersionsOutcome(ListCoreDefinitionVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListCoreDefinitionVersionsOutcome(outcome.GetError());
  }
}

ListCoreDefinitionVersionsOutcomeCallable GreengrassClient::ListCoreDefinitionVersionsCallable(const ListCoreDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoreDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoreDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListCoreDefinitionVersionsAsync(const ListCoreDefinitionVersionsRequest& request, const ListCoreDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCoreDefinitionVersionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListCoreDefinitionVersionsAsyncHelper(const ListCoreDefinitionVersionsRequest& request, const ListCoreDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCoreDefinitionVersions(request), context);
}

ListCoreDefinitionsOutcome GreengrassClient::ListCoreDefinitions(const ListCoreDefinitionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCoreDefinitionsOutcome(ListCoreDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return ListCoreDefinitionsOutcome(outcome.GetError());
  }
}

ListCoreDefinitionsOutcomeCallable GreengrassClient::ListCoreDefinitionsCallable(const ListCoreDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCoreDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCoreDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListCoreDefinitionsAsync(const ListCoreDefinitionsRequest& request, const ListCoreDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCoreDefinitionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListCoreDefinitionsAsyncHelper(const ListCoreDefinitionsRequest& request, const ListCoreDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCoreDefinitions(request), context);
}

ListDeploymentsOutcome GreengrassClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/deployments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeploymentsOutcome(ListDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeploymentsOutcome(outcome.GetError());
  }
}

ListDeploymentsOutcomeCallable GreengrassClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeploymentsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListDeploymentsAsyncHelper(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeployments(request), context);
}

ListDeviceDefinitionVersionsOutcome GreengrassClient::ListDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices/";
  ss << request.GetDeviceDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeviceDefinitionVersionsOutcome(ListDeviceDefinitionVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeviceDefinitionVersionsOutcome(outcome.GetError());
  }
}

ListDeviceDefinitionVersionsOutcomeCallable GreengrassClient::ListDeviceDefinitionVersionsCallable(const ListDeviceDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListDeviceDefinitionVersionsAsync(const ListDeviceDefinitionVersionsRequest& request, const ListDeviceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceDefinitionVersionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListDeviceDefinitionVersionsAsyncHelper(const ListDeviceDefinitionVersionsRequest& request, const ListDeviceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceDefinitionVersions(request), context);
}

ListDeviceDefinitionsOutcome GreengrassClient::ListDeviceDefinitions(const ListDeviceDefinitionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeviceDefinitionsOutcome(ListDeviceDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeviceDefinitionsOutcome(outcome.GetError());
  }
}

ListDeviceDefinitionsOutcomeCallable GreengrassClient::ListDeviceDefinitionsCallable(const ListDeviceDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListDeviceDefinitionsAsync(const ListDeviceDefinitionsRequest& request, const ListDeviceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceDefinitionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListDeviceDefinitionsAsyncHelper(const ListDeviceDefinitionsRequest& request, const ListDeviceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceDefinitions(request), context);
}

ListFunctionDefinitionVersionsOutcome GreengrassClient::ListFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions/";
  ss << request.GetFunctionDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFunctionDefinitionVersionsOutcome(ListFunctionDefinitionVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListFunctionDefinitionVersionsOutcome(outcome.GetError());
  }
}

ListFunctionDefinitionVersionsOutcomeCallable GreengrassClient::ListFunctionDefinitionVersionsCallable(const ListFunctionDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctionDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListFunctionDefinitionVersionsAsync(const ListFunctionDefinitionVersionsRequest& request, const ListFunctionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFunctionDefinitionVersionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListFunctionDefinitionVersionsAsyncHelper(const ListFunctionDefinitionVersionsRequest& request, const ListFunctionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFunctionDefinitionVersions(request), context);
}

ListFunctionDefinitionsOutcome GreengrassClient::ListFunctionDefinitions(const ListFunctionDefinitionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFunctionDefinitionsOutcome(ListFunctionDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return ListFunctionDefinitionsOutcome(outcome.GetError());
  }
}

ListFunctionDefinitionsOutcomeCallable GreengrassClient::ListFunctionDefinitionsCallable(const ListFunctionDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctionDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListFunctionDefinitionsAsync(const ListFunctionDefinitionsRequest& request, const ListFunctionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFunctionDefinitionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListFunctionDefinitionsAsyncHelper(const ListFunctionDefinitionsRequest& request, const ListFunctionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFunctionDefinitions(request), context);
}

ListGroupCertificateAuthoritiesOutcome GreengrassClient::ListGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/certificateauthorities";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGroupCertificateAuthoritiesOutcome(ListGroupCertificateAuthoritiesResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupCertificateAuthoritiesOutcome(outcome.GetError());
  }
}

ListGroupCertificateAuthoritiesOutcomeCallable GreengrassClient::ListGroupCertificateAuthoritiesCallable(const ListGroupCertificateAuthoritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupCertificateAuthoritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupCertificateAuthorities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListGroupCertificateAuthoritiesAsync(const ListGroupCertificateAuthoritiesRequest& request, const ListGroupCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupCertificateAuthoritiesAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListGroupCertificateAuthoritiesAsyncHelper(const ListGroupCertificateAuthoritiesRequest& request, const ListGroupCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupCertificateAuthorities(request), context);
}

ListGroupVersionsOutcome GreengrassClient::ListGroupVersions(const ListGroupVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGroupVersionsOutcome(ListGroupVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupVersionsOutcome(outcome.GetError());
  }
}

ListGroupVersionsOutcomeCallable GreengrassClient::ListGroupVersionsCallable(const ListGroupVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListGroupVersionsAsync(const ListGroupVersionsRequest& request, const ListGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupVersionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListGroupVersionsAsyncHelper(const ListGroupVersionsRequest& request, const ListGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupVersions(request), context);
}

ListGroupsOutcome GreengrassClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGroupsOutcome(ListGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupsOutcome(outcome.GetError());
  }
}

ListGroupsOutcomeCallable GreengrassClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListGroupsAsyncHelper(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroups(request), context);
}

ListLoggerDefinitionVersionsOutcome GreengrassClient::ListLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers/";
  ss << request.GetLoggerDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLoggerDefinitionVersionsOutcome(ListLoggerDefinitionVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListLoggerDefinitionVersionsOutcome(outcome.GetError());
  }
}

ListLoggerDefinitionVersionsOutcomeCallable GreengrassClient::ListLoggerDefinitionVersionsCallable(const ListLoggerDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggerDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggerDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListLoggerDefinitionVersionsAsync(const ListLoggerDefinitionVersionsRequest& request, const ListLoggerDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLoggerDefinitionVersionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListLoggerDefinitionVersionsAsyncHelper(const ListLoggerDefinitionVersionsRequest& request, const ListLoggerDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLoggerDefinitionVersions(request), context);
}

ListLoggerDefinitionsOutcome GreengrassClient::ListLoggerDefinitions(const ListLoggerDefinitionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLoggerDefinitionsOutcome(ListLoggerDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return ListLoggerDefinitionsOutcome(outcome.GetError());
  }
}

ListLoggerDefinitionsOutcomeCallable GreengrassClient::ListLoggerDefinitionsCallable(const ListLoggerDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggerDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggerDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListLoggerDefinitionsAsync(const ListLoggerDefinitionsRequest& request, const ListLoggerDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLoggerDefinitionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListLoggerDefinitionsAsyncHelper(const ListLoggerDefinitionsRequest& request, const ListLoggerDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLoggerDefinitions(request), context);
}

ListSubscriptionDefinitionVersionsOutcome GreengrassClient::ListSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions/";
  ss << request.GetSubscriptionDefinitionId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSubscriptionDefinitionVersionsOutcome(ListSubscriptionDefinitionVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscriptionDefinitionVersionsOutcome(outcome.GetError());
  }
}

ListSubscriptionDefinitionVersionsOutcomeCallable GreengrassClient::ListSubscriptionDefinitionVersionsCallable(const ListSubscriptionDefinitionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionDefinitionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptionDefinitionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListSubscriptionDefinitionVersionsAsync(const ListSubscriptionDefinitionVersionsRequest& request, const ListSubscriptionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSubscriptionDefinitionVersionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListSubscriptionDefinitionVersionsAsyncHelper(const ListSubscriptionDefinitionVersionsRequest& request, const ListSubscriptionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSubscriptionDefinitionVersions(request), context);
}

ListSubscriptionDefinitionsOutcome GreengrassClient::ListSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSubscriptionDefinitionsOutcome(ListSubscriptionDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscriptionDefinitionsOutcome(outcome.GetError());
  }
}

ListSubscriptionDefinitionsOutcomeCallable GreengrassClient::ListSubscriptionDefinitionsCallable(const ListSubscriptionDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptionDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ListSubscriptionDefinitionsAsync(const ListSubscriptionDefinitionsRequest& request, const ListSubscriptionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSubscriptionDefinitionsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ListSubscriptionDefinitionsAsyncHelper(const ListSubscriptionDefinitionsRequest& request, const ListSubscriptionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSubscriptionDefinitions(request), context);
}

ResetDeploymentsOutcome GreengrassClient::ResetDeployments(const ResetDeploymentsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/deployments/$reset";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResetDeploymentsOutcome(ResetDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return ResetDeploymentsOutcome(outcome.GetError());
  }
}

ResetDeploymentsOutcomeCallable GreengrassClient::ResetDeploymentsCallable(const ResetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::ResetDeploymentsAsync(const ResetDeploymentsRequest& request, const ResetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetDeploymentsAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::ResetDeploymentsAsyncHelper(const ResetDeploymentsRequest& request, const ResetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetDeployments(request), context);
}

UpdateConnectivityInfoOutcome GreengrassClient::UpdateConnectivityInfo(const UpdateConnectivityInfoRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/things/";
  ss << request.GetThingName();
  ss << "/connectivityInfo";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConnectivityInfoOutcome(UpdateConnectivityInfoResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConnectivityInfoOutcome(outcome.GetError());
  }
}

UpdateConnectivityInfoOutcomeCallable GreengrassClient::UpdateConnectivityInfoCallable(const UpdateConnectivityInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectivityInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectivityInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateConnectivityInfoAsync(const UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConnectivityInfoAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateConnectivityInfoAsyncHelper(const UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConnectivityInfo(request), context);
}

UpdateCoreDefinitionOutcome GreengrassClient::UpdateCoreDefinition(const UpdateCoreDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/cores/";
  ss << request.GetCoreDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCoreDefinitionOutcome(UpdateCoreDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCoreDefinitionOutcome(outcome.GetError());
  }
}

UpdateCoreDefinitionOutcomeCallable GreengrassClient::UpdateCoreDefinitionCallable(const UpdateCoreDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCoreDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCoreDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateCoreDefinitionAsync(const UpdateCoreDefinitionRequest& request, const UpdateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCoreDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateCoreDefinitionAsyncHelper(const UpdateCoreDefinitionRequest& request, const UpdateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCoreDefinition(request), context);
}

UpdateDeviceDefinitionOutcome GreengrassClient::UpdateDeviceDefinition(const UpdateDeviceDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/devices/";
  ss << request.GetDeviceDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeviceDefinitionOutcome(UpdateDeviceDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeviceDefinitionOutcome(outcome.GetError());
  }
}

UpdateDeviceDefinitionOutcomeCallable GreengrassClient::UpdateDeviceDefinitionCallable(const UpdateDeviceDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateDeviceDefinitionAsync(const UpdateDeviceDefinitionRequest& request, const UpdateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateDeviceDefinitionAsyncHelper(const UpdateDeviceDefinitionRequest& request, const UpdateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeviceDefinition(request), context);
}

UpdateFunctionDefinitionOutcome GreengrassClient::UpdateFunctionDefinition(const UpdateFunctionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/functions/";
  ss << request.GetFunctionDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFunctionDefinitionOutcome(UpdateFunctionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFunctionDefinitionOutcome(outcome.GetError());
  }
}

UpdateFunctionDefinitionOutcomeCallable GreengrassClient::UpdateFunctionDefinitionCallable(const UpdateFunctionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunctionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunctionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateFunctionDefinitionAsync(const UpdateFunctionDefinitionRequest& request, const UpdateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFunctionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateFunctionDefinitionAsyncHelper(const UpdateFunctionDefinitionRequest& request, const UpdateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFunctionDefinition(request), context);
}

UpdateGroupOutcome GreengrassClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGroupOutcome(UpdateGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGroupOutcome(outcome.GetError());
  }
}

UpdateGroupOutcomeCallable GreengrassClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGroupAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateGroupAsyncHelper(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGroup(request), context);
}

UpdateGroupCertificateConfigurationOutcome GreengrassClient::UpdateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/groups/";
  ss << request.GetGroupId();
  ss << "/certificateauthorities/configuration/expiry";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGroupCertificateConfigurationOutcome(UpdateGroupCertificateConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGroupCertificateConfigurationOutcome(outcome.GetError());
  }
}

UpdateGroupCertificateConfigurationOutcomeCallable GreengrassClient::UpdateGroupCertificateConfigurationCallable(const UpdateGroupCertificateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupCertificateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroupCertificateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateGroupCertificateConfigurationAsync(const UpdateGroupCertificateConfigurationRequest& request, const UpdateGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGroupCertificateConfigurationAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateGroupCertificateConfigurationAsyncHelper(const UpdateGroupCertificateConfigurationRequest& request, const UpdateGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGroupCertificateConfiguration(request), context);
}

UpdateLoggerDefinitionOutcome GreengrassClient::UpdateLoggerDefinition(const UpdateLoggerDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/loggers/";
  ss << request.GetLoggerDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateLoggerDefinitionOutcome(UpdateLoggerDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateLoggerDefinitionOutcome(outcome.GetError());
  }
}

UpdateLoggerDefinitionOutcomeCallable GreengrassClient::UpdateLoggerDefinitionCallable(const UpdateLoggerDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoggerDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoggerDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateLoggerDefinitionAsync(const UpdateLoggerDefinitionRequest& request, const UpdateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLoggerDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateLoggerDefinitionAsyncHelper(const UpdateLoggerDefinitionRequest& request, const UpdateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLoggerDefinition(request), context);
}

UpdateSubscriptionDefinitionOutcome GreengrassClient::UpdateSubscriptionDefinition(const UpdateSubscriptionDefinitionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/greengrass/definition/subscriptions/";
  ss << request.GetSubscriptionDefinitionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSubscriptionDefinitionOutcome(UpdateSubscriptionDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSubscriptionDefinitionOutcome(outcome.GetError());
  }
}

UpdateSubscriptionDefinitionOutcomeCallable GreengrassClient::UpdateSubscriptionDefinitionCallable(const UpdateSubscriptionDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriptionDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscriptionDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GreengrassClient::UpdateSubscriptionDefinitionAsync(const UpdateSubscriptionDefinitionRequest& request, const UpdateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSubscriptionDefinitionAsyncHelper( request, handler, context ); } );
}

void GreengrassClient::UpdateSubscriptionDefinitionAsyncHelper(const UpdateSubscriptionDefinitionRequest& request, const UpdateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSubscriptionDefinition(request), context);
}

