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
#include <aws/mq/MQClient.h>
#include <aws/mq/MQEndpoint.h>
#include <aws/mq/MQErrorMarshaller.h>
#include <aws/mq/model/CreateBrokerRequest.h>
#include <aws/mq/model/CreateConfigurationRequest.h>
#include <aws/mq/model/CreateUserRequest.h>
#include <aws/mq/model/DeleteBrokerRequest.h>
#include <aws/mq/model/DeleteUserRequest.h>
#include <aws/mq/model/DescribeBrokerRequest.h>
#include <aws/mq/model/DescribeConfigurationRequest.h>
#include <aws/mq/model/DescribeConfigurationRevisionRequest.h>
#include <aws/mq/model/DescribeUserRequest.h>
#include <aws/mq/model/ListBrokersRequest.h>
#include <aws/mq/model/ListConfigurationRevisionsRequest.h>
#include <aws/mq/model/ListConfigurationsRequest.h>
#include <aws/mq/model/ListUsersRequest.h>
#include <aws/mq/model/RebootBrokerRequest.h>
#include <aws/mq/model/UpdateBrokerRequest.h>
#include <aws/mq/model/UpdateConfigurationRequest.h>
#include <aws/mq/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MQ;
using namespace Aws::MQ::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mq";
static const char* ALLOCATION_TAG = "MQClient";


MQClient::MQClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MQClient::MQClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MQClient::MQClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MQClient::~MQClient()
{
}

void MQClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << MQEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateBrokerOutcome MQClient::CreateBroker(const CreateBrokerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBrokerOutcome(CreateBrokerResult(outcome.GetResult()));
  }
  else
  {
    return CreateBrokerOutcome(outcome.GetError());
  }
}

CreateBrokerOutcomeCallable MQClient::CreateBrokerCallable(const CreateBrokerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBrokerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBroker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::CreateBrokerAsync(const CreateBrokerRequest& request, const CreateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBrokerAsyncHelper( request, handler, context ); } );
}

void MQClient::CreateBrokerAsyncHelper(const CreateBrokerRequest& request, const CreateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBroker(request), context);
}

CreateConfigurationOutcome MQClient::CreateConfiguration(const CreateConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateConfigurationOutcome(CreateConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigurationOutcome(outcome.GetError());
  }
}

CreateConfigurationOutcomeCallable MQClient::CreateConfigurationCallable(const CreateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::CreateConfigurationAsync(const CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationAsyncHelper( request, handler, context ); } );
}

void MQClient::CreateConfigurationAsyncHelper(const CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfiguration(request), context);
}

CreateUserOutcome MQClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}/users/";
  ss << request.GetUsername();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserOutcome(CreateUserResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserOutcome(outcome.GetError());
  }
}

CreateUserOutcomeCallable MQClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void MQClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeleteBrokerOutcome MQClient::DeleteBroker(const DeleteBrokerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBrokerOutcome(DeleteBrokerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBrokerOutcome(outcome.GetError());
  }
}

DeleteBrokerOutcomeCallable MQClient::DeleteBrokerCallable(const DeleteBrokerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBrokerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBroker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::DeleteBrokerAsync(const DeleteBrokerRequest& request, const DeleteBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBrokerAsyncHelper( request, handler, context ); } );
}

void MQClient::DeleteBrokerAsyncHelper(const DeleteBrokerRequest& request, const DeleteBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBroker(request), context);
}

DeleteUserOutcome MQClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}/users/";
  ss << request.GetUsername();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserOutcome(DeleteUserResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserOutcome(outcome.GetError());
  }
}

DeleteUserOutcomeCallable MQClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void MQClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DescribeBrokerOutcome MQClient::DescribeBroker(const DescribeBrokerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBrokerOutcome(DescribeBrokerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBrokerOutcome(outcome.GetError());
  }
}

DescribeBrokerOutcomeCallable MQClient::DescribeBrokerCallable(const DescribeBrokerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBrokerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBroker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::DescribeBrokerAsync(const DescribeBrokerRequest& request, const DescribeBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBrokerAsyncHelper( request, handler, context ); } );
}

void MQClient::DescribeBrokerAsyncHelper(const DescribeBrokerRequest& request, const DescribeBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBroker(request), context);
}

DescribeConfigurationOutcome MQClient::DescribeConfiguration(const DescribeConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/configurations/{configuration-id}";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationOutcome(DescribeConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationOutcome(outcome.GetError());
  }
}

DescribeConfigurationOutcomeCallable MQClient::DescribeConfigurationCallable(const DescribeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::DescribeConfigurationAsync(const DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationAsyncHelper( request, handler, context ); } );
}

void MQClient::DescribeConfigurationAsyncHelper(const DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfiguration(request), context);
}

DescribeConfigurationRevisionOutcome MQClient::DescribeConfigurationRevision(const DescribeConfigurationRevisionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/configurations/{configuration-id}/revisions/{configuration-revision}";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationRevisionOutcome(DescribeConfigurationRevisionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationRevisionOutcome(outcome.GetError());
  }
}

DescribeConfigurationRevisionOutcomeCallable MQClient::DescribeConfigurationRevisionCallable(const DescribeConfigurationRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::DescribeConfigurationRevisionAsync(const DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationRevisionAsyncHelper( request, handler, context ); } );
}

void MQClient::DescribeConfigurationRevisionAsyncHelper(const DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationRevision(request), context);
}

DescribeUserOutcome MQClient::DescribeUser(const DescribeUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}/users/";
  ss << request.GetUsername();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserOutcome(DescribeUserResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserOutcome(outcome.GetError());
  }
}

DescribeUserOutcomeCallable MQClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserAsyncHelper( request, handler, context ); } );
}

void MQClient::DescribeUserAsyncHelper(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUser(request), context);
}

ListBrokersOutcome MQClient::ListBrokers(const ListBrokersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBrokersOutcome(ListBrokersResult(outcome.GetResult()));
  }
  else
  {
    return ListBrokersOutcome(outcome.GetError());
  }
}

ListBrokersOutcomeCallable MQClient::ListBrokersCallable(const ListBrokersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBrokersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBrokers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::ListBrokersAsync(const ListBrokersRequest& request, const ListBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBrokersAsyncHelper( request, handler, context ); } );
}

void MQClient::ListBrokersAsyncHelper(const ListBrokersRequest& request, const ListBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBrokers(request), context);
}

ListConfigurationRevisionsOutcome MQClient::ListConfigurationRevisions(const ListConfigurationRevisionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/configurations/{configuration-id}/revisions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListConfigurationRevisionsOutcome(ListConfigurationRevisionsResult(outcome.GetResult()));
  }
  else
  {
    return ListConfigurationRevisionsOutcome(outcome.GetError());
  }
}

ListConfigurationRevisionsOutcomeCallable MQClient::ListConfigurationRevisionsCallable(const ListConfigurationRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::ListConfigurationRevisionsAsync(const ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConfigurationRevisionsAsyncHelper( request, handler, context ); } );
}

void MQClient::ListConfigurationRevisionsAsyncHelper(const ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConfigurationRevisions(request), context);
}

ListConfigurationsOutcome MQClient::ListConfigurations(const ListConfigurationsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListConfigurationsOutcome(ListConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return ListConfigurationsOutcome(outcome.GetError());
  }
}

ListConfigurationsOutcomeCallable MQClient::ListConfigurationsCallable(const ListConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::ListConfigurationsAsync(const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConfigurationsAsyncHelper( request, handler, context ); } );
}

void MQClient::ListConfigurationsAsyncHelper(const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConfigurations(request), context);
}

ListUsersOutcome MQClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}/users";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUsersOutcome(ListUsersResult(outcome.GetResult()));
  }
  else
  {
    return ListUsersOutcome(outcome.GetError());
  }
}

ListUsersOutcomeCallable MQClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void MQClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

RebootBrokerOutcome MQClient::RebootBroker(const RebootBrokerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}/reboot";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RebootBrokerOutcome(RebootBrokerResult(outcome.GetResult()));
  }
  else
  {
    return RebootBrokerOutcome(outcome.GetError());
  }
}

RebootBrokerOutcomeCallable MQClient::RebootBrokerCallable(const RebootBrokerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootBrokerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootBroker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::RebootBrokerAsync(const RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootBrokerAsyncHelper( request, handler, context ); } );
}

void MQClient::RebootBrokerAsyncHelper(const RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootBroker(request), context);
}

UpdateBrokerOutcome MQClient::UpdateBroker(const UpdateBrokerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBrokerOutcome(UpdateBrokerResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBrokerOutcome(outcome.GetError());
  }
}

UpdateBrokerOutcomeCallable MQClient::UpdateBrokerCallable(const UpdateBrokerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBrokerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBroker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::UpdateBrokerAsync(const UpdateBrokerRequest& request, const UpdateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBrokerAsyncHelper( request, handler, context ); } );
}

void MQClient::UpdateBrokerAsyncHelper(const UpdateBrokerRequest& request, const UpdateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBroker(request), context);
}

UpdateConfigurationOutcome MQClient::UpdateConfiguration(const UpdateConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/configurations/{configuration-id}";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateConfigurationOutcome(UpdateConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConfigurationOutcome(outcome.GetError());
  }
}

UpdateConfigurationOutcomeCallable MQClient::UpdateConfigurationCallable(const UpdateConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::UpdateConfigurationAsync(const UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConfigurationAsyncHelper( request, handler, context ); } );
}

void MQClient::UpdateConfigurationAsyncHelper(const UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConfiguration(request), context);
}

UpdateUserOutcome MQClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/brokers/{broker-id}/users/";
  ss << request.GetUsername();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserOutcome(UpdateUserResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserOutcome(outcome.GetError());
  }
}

UpdateUserOutcomeCallable MQClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MQClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAsyncHelper( request, handler, context ); } );
}

void MQClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

