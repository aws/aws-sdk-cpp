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
#include <aws/appsync/AppSyncClient.h>
#include <aws/appsync/AppSyncEndpoint.h>
#include <aws/appsync/AppSyncErrorMarshaller.h>
#include <aws/appsync/model/CreateApiKeyRequest.h>
#include <aws/appsync/model/CreateDataSourceRequest.h>
#include <aws/appsync/model/CreateGraphqlApiRequest.h>
#include <aws/appsync/model/CreateResolverRequest.h>
#include <aws/appsync/model/CreateTypeRequest.h>
#include <aws/appsync/model/DeleteApiKeyRequest.h>
#include <aws/appsync/model/DeleteDataSourceRequest.h>
#include <aws/appsync/model/DeleteGraphqlApiRequest.h>
#include <aws/appsync/model/DeleteResolverRequest.h>
#include <aws/appsync/model/DeleteTypeRequest.h>
#include <aws/appsync/model/GetDataSourceRequest.h>
#include <aws/appsync/model/GetGraphqlApiRequest.h>
#include <aws/appsync/model/GetIntrospectionSchemaRequest.h>
#include <aws/appsync/model/GetResolverRequest.h>
#include <aws/appsync/model/GetSchemaCreationStatusRequest.h>
#include <aws/appsync/model/GetTypeRequest.h>
#include <aws/appsync/model/ListApiKeysRequest.h>
#include <aws/appsync/model/ListDataSourcesRequest.h>
#include <aws/appsync/model/ListGraphqlApisRequest.h>
#include <aws/appsync/model/ListResolversRequest.h>
#include <aws/appsync/model/ListTypesRequest.h>
#include <aws/appsync/model/StartSchemaCreationRequest.h>
#include <aws/appsync/model/UpdateApiKeyRequest.h>
#include <aws/appsync/model/UpdateDataSourceRequest.h>
#include <aws/appsync/model/UpdateGraphqlApiRequest.h>
#include <aws/appsync/model/UpdateResolverRequest.h>
#include <aws/appsync/model/UpdateTypeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppSync;
using namespace Aws::AppSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "appsync";
static const char* ALLOCATION_TAG = "AppSyncClient";


AppSyncClient::AppSyncClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppSyncClient::AppSyncClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppSyncClient::AppSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppSyncClient::~AppSyncClient()
{
}

void AppSyncClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << AppSyncEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateApiKeyOutcome AppSyncClient::CreateApiKey(const CreateApiKeyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/apikeys";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateApiKeyOutcome(CreateApiKeyResult(outcome.GetResult()));
  }
  else
  {
    return CreateApiKeyOutcome(outcome.GetError());
  }
}

CreateApiKeyOutcomeCallable AppSyncClient::CreateApiKeyCallable(const CreateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApiKeyAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::CreateApiKeyAsyncHelper(const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApiKey(request), context);
}

CreateDataSourceOutcome AppSyncClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/datasources";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDataSourceOutcome(CreateDataSourceResult(outcome.GetResult()));
  }
  else
  {
    return CreateDataSourceOutcome(outcome.GetError());
  }
}

CreateDataSourceOutcomeCallable AppSyncClient::CreateDataSourceCallable(const CreateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataSourceAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::CreateDataSourceAsyncHelper(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataSource(request), context);
}

CreateGraphqlApiOutcome AppSyncClient::CreateGraphqlApi(const CreateGraphqlApiRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGraphqlApiOutcome(CreateGraphqlApiResult(outcome.GetResult()));
  }
  else
  {
    return CreateGraphqlApiOutcome(outcome.GetError());
  }
}

CreateGraphqlApiOutcomeCallable AppSyncClient::CreateGraphqlApiCallable(const CreateGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::CreateGraphqlApiAsync(const CreateGraphqlApiRequest& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGraphqlApiAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::CreateGraphqlApiAsyncHelper(const CreateGraphqlApiRequest& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGraphqlApi(request), context);
}

CreateResolverOutcome AppSyncClient::CreateResolver(const CreateResolverRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  ss << "/resolvers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateResolverOutcome(CreateResolverResult(outcome.GetResult()));
  }
  else
  {
    return CreateResolverOutcome(outcome.GetError());
  }
}

CreateResolverOutcomeCallable AppSyncClient::CreateResolverCallable(const CreateResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::CreateResolverAsync(const CreateResolverRequest& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateResolverAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::CreateResolverAsyncHelper(const CreateResolverRequest& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResolver(request), context);
}

CreateTypeOutcome AppSyncClient::CreateType(const CreateTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTypeOutcome(CreateTypeResult(outcome.GetResult()));
  }
  else
  {
    return CreateTypeOutcome(outcome.GetError());
  }
}

CreateTypeOutcomeCallable AppSyncClient::CreateTypeCallable(const CreateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::CreateTypeAsync(const CreateTypeRequest& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTypeAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::CreateTypeAsyncHelper(const CreateTypeRequest& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateType(request), context);
}

DeleteApiKeyOutcome AppSyncClient::DeleteApiKey(const DeleteApiKeyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/apikeys/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApiKeyOutcome(DeleteApiKeyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteApiKeyOutcome(outcome.GetError());
  }
}

DeleteApiKeyOutcomeCallable AppSyncClient::DeleteApiKeyCallable(const DeleteApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApiKeyAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::DeleteApiKeyAsyncHelper(const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApiKey(request), context);
}

DeleteDataSourceOutcome AppSyncClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/datasources/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDataSourceOutcome(DeleteDataSourceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDataSourceOutcome(outcome.GetError());
  }
}

DeleteDataSourceOutcomeCallable AppSyncClient::DeleteDataSourceCallable(const DeleteDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDataSourceAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::DeleteDataSourceAsyncHelper(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataSource(request), context);
}

DeleteGraphqlApiOutcome AppSyncClient::DeleteGraphqlApi(const DeleteGraphqlApiRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGraphqlApiOutcome(DeleteGraphqlApiResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGraphqlApiOutcome(outcome.GetError());
  }
}

DeleteGraphqlApiOutcomeCallable AppSyncClient::DeleteGraphqlApiCallable(const DeleteGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::DeleteGraphqlApiAsync(const DeleteGraphqlApiRequest& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGraphqlApiAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::DeleteGraphqlApiAsyncHelper(const DeleteGraphqlApiRequest& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGraphqlApi(request), context);
}

DeleteResolverOutcome AppSyncClient::DeleteResolver(const DeleteResolverRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  ss << "/resolvers/";
  ss << request.GetFieldName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteResolverOutcome(DeleteResolverResult(outcome.GetResult()));
  }
  else
  {
    return DeleteResolverOutcome(outcome.GetError());
  }
}

DeleteResolverOutcomeCallable AppSyncClient::DeleteResolverCallable(const DeleteResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::DeleteResolverAsync(const DeleteResolverRequest& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResolverAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::DeleteResolverAsyncHelper(const DeleteResolverRequest& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResolver(request), context);
}

DeleteTypeOutcome AppSyncClient::DeleteType(const DeleteTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTypeOutcome(DeleteTypeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTypeOutcome(outcome.GetError());
  }
}

DeleteTypeOutcomeCallable AppSyncClient::DeleteTypeCallable(const DeleteTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::DeleteTypeAsync(const DeleteTypeRequest& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTypeAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::DeleteTypeAsyncHelper(const DeleteTypeRequest& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteType(request), context);
}

GetDataSourceOutcome AppSyncClient::GetDataSource(const GetDataSourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/datasources/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDataSourceOutcome(GetDataSourceResult(outcome.GetResult()));
  }
  else
  {
    return GetDataSourceOutcome(outcome.GetError());
  }
}

GetDataSourceOutcomeCallable AppSyncClient::GetDataSourceCallable(const GetDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::GetDataSourceAsync(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataSourceAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::GetDataSourceAsyncHelper(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataSource(request), context);
}

GetGraphqlApiOutcome AppSyncClient::GetGraphqlApi(const GetGraphqlApiRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGraphqlApiOutcome(GetGraphqlApiResult(outcome.GetResult()));
  }
  else
  {
    return GetGraphqlApiOutcome(outcome.GetError());
  }
}

GetGraphqlApiOutcomeCallable AppSyncClient::GetGraphqlApiCallable(const GetGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::GetGraphqlApiAsync(const GetGraphqlApiRequest& request, const GetGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGraphqlApiAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::GetGraphqlApiAsyncHelper(const GetGraphqlApiRequest& request, const GetGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGraphqlApi(request), context);
}

GetIntrospectionSchemaOutcome AppSyncClient::GetIntrospectionSchema(const GetIntrospectionSchemaRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/schema";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetIntrospectionSchemaOutcome(GetIntrospectionSchemaResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetIntrospectionSchemaOutcome(outcome.GetError());
  }
}

GetIntrospectionSchemaOutcomeCallable AppSyncClient::GetIntrospectionSchemaCallable(const GetIntrospectionSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntrospectionSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntrospectionSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::GetIntrospectionSchemaAsync(const GetIntrospectionSchemaRequest& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntrospectionSchemaAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::GetIntrospectionSchemaAsyncHelper(const GetIntrospectionSchemaRequest& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntrospectionSchema(request), context);
}

GetResolverOutcome AppSyncClient::GetResolver(const GetResolverRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  ss << "/resolvers/";
  ss << request.GetFieldName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetResolverOutcome(GetResolverResult(outcome.GetResult()));
  }
  else
  {
    return GetResolverOutcome(outcome.GetError());
  }
}

GetResolverOutcomeCallable AppSyncClient::GetResolverCallable(const GetResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::GetResolverAsync(const GetResolverRequest& request, const GetResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::GetResolverAsyncHelper(const GetResolverRequest& request, const GetResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolver(request), context);
}

GetSchemaCreationStatusOutcome AppSyncClient::GetSchemaCreationStatus(const GetSchemaCreationStatusRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/schemacreation";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSchemaCreationStatusOutcome(GetSchemaCreationStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetSchemaCreationStatusOutcome(outcome.GetError());
  }
}

GetSchemaCreationStatusOutcomeCallable AppSyncClient::GetSchemaCreationStatusCallable(const GetSchemaCreationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSchemaCreationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSchemaCreationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::GetSchemaCreationStatusAsync(const GetSchemaCreationStatusRequest& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSchemaCreationStatusAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::GetSchemaCreationStatusAsyncHelper(const GetSchemaCreationStatusRequest& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSchemaCreationStatus(request), context);
}

GetTypeOutcome AppSyncClient::GetType(const GetTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTypeOutcome(GetTypeResult(outcome.GetResult()));
  }
  else
  {
    return GetTypeOutcome(outcome.GetError());
  }
}

GetTypeOutcomeCallable AppSyncClient::GetTypeCallable(const GetTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::GetTypeAsync(const GetTypeRequest& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTypeAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::GetTypeAsyncHelper(const GetTypeRequest& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetType(request), context);
}

ListApiKeysOutcome AppSyncClient::ListApiKeys(const ListApiKeysRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/apikeys";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListApiKeysOutcome(ListApiKeysResult(outcome.GetResult()));
  }
  else
  {
    return ListApiKeysOutcome(outcome.GetError());
  }
}

ListApiKeysOutcomeCallable AppSyncClient::ListApiKeysCallable(const ListApiKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApiKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApiKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::ListApiKeysAsync(const ListApiKeysRequest& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApiKeysAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::ListApiKeysAsyncHelper(const ListApiKeysRequest& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApiKeys(request), context);
}

ListDataSourcesOutcome AppSyncClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/datasources";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDataSourcesOutcome(ListDataSourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListDataSourcesOutcome(outcome.GetError());
  }
}

ListDataSourcesOutcomeCallable AppSyncClient::ListDataSourcesCallable(const ListDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::ListDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataSourcesAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::ListDataSourcesAsyncHelper(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataSources(request), context);
}

ListGraphqlApisOutcome AppSyncClient::ListGraphqlApis(const ListGraphqlApisRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGraphqlApisOutcome(ListGraphqlApisResult(outcome.GetResult()));
  }
  else
  {
    return ListGraphqlApisOutcome(outcome.GetError());
  }
}

ListGraphqlApisOutcomeCallable AppSyncClient::ListGraphqlApisCallable(const ListGraphqlApisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGraphqlApisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGraphqlApis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::ListGraphqlApisAsync(const ListGraphqlApisRequest& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGraphqlApisAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::ListGraphqlApisAsyncHelper(const ListGraphqlApisRequest& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGraphqlApis(request), context);
}

ListResolversOutcome AppSyncClient::ListResolvers(const ListResolversRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  ss << "/resolvers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResolversOutcome(ListResolversResult(outcome.GetResult()));
  }
  else
  {
    return ListResolversOutcome(outcome.GetError());
  }
}

ListResolversOutcomeCallable AppSyncClient::ListResolversCallable(const ListResolversRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolversOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolvers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::ListResolversAsync(const ListResolversRequest& request, const ListResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResolversAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::ListResolversAsyncHelper(const ListResolversRequest& request, const ListResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResolvers(request), context);
}

ListTypesOutcome AppSyncClient::ListTypes(const ListTypesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTypesOutcome(ListTypesResult(outcome.GetResult()));
  }
  else
  {
    return ListTypesOutcome(outcome.GetError());
  }
}

ListTypesOutcomeCallable AppSyncClient::ListTypesCallable(const ListTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::ListTypesAsync(const ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTypesAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::ListTypesAsyncHelper(const ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTypes(request), context);
}

StartSchemaCreationOutcome AppSyncClient::StartSchemaCreation(const StartSchemaCreationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/schemacreation";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartSchemaCreationOutcome(StartSchemaCreationResult(outcome.GetResult()));
  }
  else
  {
    return StartSchemaCreationOutcome(outcome.GetError());
  }
}

StartSchemaCreationOutcomeCallable AppSyncClient::StartSchemaCreationCallable(const StartSchemaCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSchemaCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSchemaCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::StartSchemaCreationAsync(const StartSchemaCreationRequest& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSchemaCreationAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::StartSchemaCreationAsyncHelper(const StartSchemaCreationRequest& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSchemaCreation(request), context);
}

UpdateApiKeyOutcome AppSyncClient::UpdateApiKey(const UpdateApiKeyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/apikeys/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApiKeyOutcome(UpdateApiKeyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApiKeyOutcome(outcome.GetError());
  }
}

UpdateApiKeyOutcomeCallable AppSyncClient::UpdateApiKeyCallable(const UpdateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::UpdateApiKeyAsync(const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApiKeyAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::UpdateApiKeyAsyncHelper(const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApiKey(request), context);
}

UpdateDataSourceOutcome AppSyncClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/datasources/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDataSourceOutcome(UpdateDataSourceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDataSourceOutcome(outcome.GetError());
  }
}

UpdateDataSourceOutcomeCallable AppSyncClient::UpdateDataSourceCallable(const UpdateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDataSourceAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::UpdateDataSourceAsyncHelper(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataSource(request), context);
}

UpdateGraphqlApiOutcome AppSyncClient::UpdateGraphqlApi(const UpdateGraphqlApiRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGraphqlApiOutcome(UpdateGraphqlApiResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGraphqlApiOutcome(outcome.GetError());
  }
}

UpdateGraphqlApiOutcomeCallable AppSyncClient::UpdateGraphqlApiCallable(const UpdateGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::UpdateGraphqlApiAsync(const UpdateGraphqlApiRequest& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGraphqlApiAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::UpdateGraphqlApiAsyncHelper(const UpdateGraphqlApiRequest& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGraphqlApi(request), context);
}

UpdateResolverOutcome AppSyncClient::UpdateResolver(const UpdateResolverRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  ss << "/resolvers/";
  ss << request.GetFieldName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateResolverOutcome(UpdateResolverResult(outcome.GetResult()));
  }
  else
  {
    return UpdateResolverOutcome(outcome.GetError());
  }
}

UpdateResolverOutcomeCallable AppSyncClient::UpdateResolverCallable(const UpdateResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::UpdateResolverAsync(const UpdateResolverRequest& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResolverAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::UpdateResolverAsyncHelper(const UpdateResolverRequest& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResolver(request), context);
}

UpdateTypeOutcome AppSyncClient::UpdateType(const UpdateTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v1/apis/";
  ss << request.GetApiId();
  ss << "/types/";
  ss << request.GetTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTypeOutcome(UpdateTypeResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTypeOutcome(outcome.GetError());
  }
}

UpdateTypeOutcomeCallable AppSyncClient::UpdateTypeCallable(const UpdateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClient::UpdateTypeAsync(const UpdateTypeRequest& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTypeAsyncHelper( request, handler, context ); } );
}

void AppSyncClient::UpdateTypeAsyncHelper(const UpdateTypeRequest& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateType(request), context);
}

