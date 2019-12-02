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

#include <aws/schemas/SchemasClient.h>
#include <aws/schemas/SchemasEndpoint.h>
#include <aws/schemas/SchemasErrorMarshaller.h>
#include <aws/schemas/model/CreateDiscovererRequest.h>
#include <aws/schemas/model/CreateRegistryRequest.h>
#include <aws/schemas/model/CreateSchemaRequest.h>
#include <aws/schemas/model/DeleteDiscovererRequest.h>
#include <aws/schemas/model/DeleteRegistryRequest.h>
#include <aws/schemas/model/DeleteSchemaRequest.h>
#include <aws/schemas/model/DeleteSchemaVersionRequest.h>
#include <aws/schemas/model/DescribeCodeBindingRequest.h>
#include <aws/schemas/model/DescribeDiscovererRequest.h>
#include <aws/schemas/model/DescribeRegistryRequest.h>
#include <aws/schemas/model/DescribeSchemaRequest.h>
#include <aws/schemas/model/GetCodeBindingSourceRequest.h>
#include <aws/schemas/model/GetDiscoveredSchemaRequest.h>
#include <aws/schemas/model/ListDiscoverersRequest.h>
#include <aws/schemas/model/ListRegistriesRequest.h>
#include <aws/schemas/model/ListSchemaVersionsRequest.h>
#include <aws/schemas/model/ListSchemasRequest.h>
#include <aws/schemas/model/ListTagsForResourceRequest.h>
#include <aws/schemas/model/LockServiceLinkedRoleRequest.h>
#include <aws/schemas/model/PutCodeBindingRequest.h>
#include <aws/schemas/model/SearchSchemasRequest.h>
#include <aws/schemas/model/StartDiscovererRequest.h>
#include <aws/schemas/model/StopDiscovererRequest.h>
#include <aws/schemas/model/TagResourceRequest.h>
#include <aws/schemas/model/UnlockServiceLinkedRoleRequest.h>
#include <aws/schemas/model/UntagResourceRequest.h>
#include <aws/schemas/model/UpdateDiscovererRequest.h>
#include <aws/schemas/model/UpdateRegistryRequest.h>
#include <aws/schemas/model/UpdateSchemaRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Schemas;
using namespace Aws::Schemas::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "schemas";
static const char* ALLOCATION_TAG = "SchemasClient";


SchemasClient::SchemasClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SchemasClient::SchemasClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SchemasClient::SchemasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SchemasClient::~SchemasClient()
{
}

void SchemasClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SchemasEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SchemasClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateDiscovererOutcome SchemasClient::CreateDiscoverer(const CreateDiscovererRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discoverers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDiscovererOutcome(CreateDiscovererResult(outcome.GetResult()));
  }
  else
  {
    return CreateDiscovererOutcome(outcome.GetError());
  }
}

CreateDiscovererOutcomeCallable SchemasClient::CreateDiscovererCallable(const CreateDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::CreateDiscovererAsync(const CreateDiscovererRequest& request, const CreateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDiscovererAsyncHelper( request, handler, context ); } );
}

void SchemasClient::CreateDiscovererAsyncHelper(const CreateDiscovererRequest& request, const CreateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDiscoverer(request), context);
}

CreateRegistryOutcome SchemasClient::CreateRegistry(const CreateRegistryRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRegistry", "Required field: RegistryName, is not set");
    return CreateRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRegistryOutcome(CreateRegistryResult(outcome.GetResult()));
  }
  else
  {
    return CreateRegistryOutcome(outcome.GetError());
  }
}

CreateRegistryOutcomeCallable SchemasClient::CreateRegistryCallable(const CreateRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::CreateRegistryAsync(const CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRegistryAsyncHelper( request, handler, context ); } );
}

void SchemasClient::CreateRegistryAsyncHelper(const CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRegistry(request), context);
}

CreateSchemaOutcome SchemasClient::CreateSchema(const CreateSchemaRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSchema", "Required field: RegistryName, is not set");
    return CreateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSchema", "Required field: SchemaName, is not set");
    return CreateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSchemaOutcome(CreateSchemaResult(outcome.GetResult()));
  }
  else
  {
    return CreateSchemaOutcome(outcome.GetError());
  }
}

CreateSchemaOutcomeCallable SchemasClient::CreateSchemaCallable(const CreateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSchemaAsyncHelper( request, handler, context ); } );
}

void SchemasClient::CreateSchemaAsyncHelper(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSchema(request), context);
}

DeleteDiscovererOutcome SchemasClient::DeleteDiscoverer(const DeleteDiscovererRequest& request) const
{
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDiscoverer", "Required field: DiscovererId, is not set");
    return DeleteDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discoverers/id/";
  ss << request.GetDiscovererId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDiscovererOutcome(NoResult());
  }
  else
  {
    return DeleteDiscovererOutcome(outcome.GetError());
  }
}

DeleteDiscovererOutcomeCallable SchemasClient::DeleteDiscovererCallable(const DeleteDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteDiscovererAsync(const DeleteDiscovererRequest& request, const DeleteDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDiscovererAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DeleteDiscovererAsyncHelper(const DeleteDiscovererRequest& request, const DeleteDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDiscoverer(request), context);
}

DeleteRegistryOutcome SchemasClient::DeleteRegistry(const DeleteRegistryRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRegistry", "Required field: RegistryName, is not set");
    return DeleteRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRegistryOutcome(NoResult());
  }
  else
  {
    return DeleteRegistryOutcome(outcome.GetError());
  }
}

DeleteRegistryOutcomeCallable SchemasClient::DeleteRegistryCallable(const DeleteRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteRegistryAsync(const DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRegistryAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DeleteRegistryAsyncHelper(const DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRegistry(request), context);
}

DeleteSchemaOutcome SchemasClient::DeleteSchema(const DeleteSchemaRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: RegistryName, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: SchemaName, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSchemaOutcome(NoResult());
  }
  else
  {
    return DeleteSchemaOutcome(outcome.GetError());
  }
}

DeleteSchemaOutcomeCallable SchemasClient::DeleteSchemaCallable(const DeleteSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSchemaAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DeleteSchemaAsyncHelper(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSchema(request), context);
}

DeleteSchemaVersionOutcome SchemasClient::DeleteSchemaVersion(const DeleteSchemaVersionRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: RegistryName, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: SchemaName, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  if (!request.SchemaVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: SchemaVersion, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  ss << "/version/";
  ss << request.GetSchemaVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSchemaVersionOutcome(NoResult());
  }
  else
  {
    return DeleteSchemaVersionOutcome(outcome.GetError());
  }
}

DeleteSchemaVersionOutcomeCallable SchemasClient::DeleteSchemaVersionCallable(const DeleteSchemaVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchemaVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteSchemaVersionAsync(const DeleteSchemaVersionRequest& request, const DeleteSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSchemaVersionAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DeleteSchemaVersionAsyncHelper(const DeleteSchemaVersionRequest& request, const DeleteSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSchemaVersion(request), context);
}

DescribeCodeBindingOutcome SchemasClient::DescribeCodeBinding(const DescribeCodeBindingRequest& request) const
{
  if (!request.LanguageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: Language, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: RegistryName, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: SchemaName, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  ss << "/language/";
  ss << request.GetLanguage();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCodeBindingOutcome(DescribeCodeBindingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCodeBindingOutcome(outcome.GetError());
  }
}

DescribeCodeBindingOutcomeCallable SchemasClient::DescribeCodeBindingCallable(const DescribeCodeBindingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeBindingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeBinding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeCodeBindingAsync(const DescribeCodeBindingRequest& request, const DescribeCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCodeBindingAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DescribeCodeBindingAsyncHelper(const DescribeCodeBindingRequest& request, const DescribeCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCodeBinding(request), context);
}

DescribeDiscovererOutcome SchemasClient::DescribeDiscoverer(const DescribeDiscovererRequest& request) const
{
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDiscoverer", "Required field: DiscovererId, is not set");
    return DescribeDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discoverers/id/";
  ss << request.GetDiscovererId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDiscovererOutcome(DescribeDiscovererResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDiscovererOutcome(outcome.GetError());
  }
}

DescribeDiscovererOutcomeCallable SchemasClient::DescribeDiscovererCallable(const DescribeDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeDiscovererAsync(const DescribeDiscovererRequest& request, const DescribeDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDiscovererAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DescribeDiscovererAsyncHelper(const DescribeDiscovererRequest& request, const DescribeDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDiscoverer(request), context);
}

DescribeRegistryOutcome SchemasClient::DescribeRegistry(const DescribeRegistryRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRegistry", "Required field: RegistryName, is not set");
    return DescribeRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRegistryOutcome(DescribeRegistryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRegistryOutcome(outcome.GetError());
  }
}

DescribeRegistryOutcomeCallable SchemasClient::DescribeRegistryCallable(const DescribeRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeRegistryAsync(const DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRegistryAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DescribeRegistryAsyncHelper(const DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRegistry(request), context);
}

DescribeSchemaOutcome SchemasClient::DescribeSchema(const DescribeSchemaRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchema", "Required field: RegistryName, is not set");
    return DescribeSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchema", "Required field: SchemaName, is not set");
    return DescribeSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSchemaOutcome(DescribeSchemaResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSchemaOutcome(outcome.GetError());
  }
}

DescribeSchemaOutcomeCallable SchemasClient::DescribeSchemaCallable(const DescribeSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeSchemaAsync(const DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSchemaAsyncHelper( request, handler, context ); } );
}

void SchemasClient::DescribeSchemaAsyncHelper(const DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSchema(request), context);
}

GetCodeBindingSourceOutcome SchemasClient::GetCodeBindingSource(const GetCodeBindingSourceRequest& request) const
{
  if (!request.LanguageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: Language, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: RegistryName, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: SchemaName, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  ss << "/language/";
  ss << request.GetLanguage();
  ss << "/source";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCodeBindingSourceOutcome(GetCodeBindingSourceResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetCodeBindingSourceOutcome(outcome.GetError());
  }
}

GetCodeBindingSourceOutcomeCallable SchemasClient::GetCodeBindingSourceCallable(const GetCodeBindingSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCodeBindingSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCodeBindingSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::GetCodeBindingSourceAsync(const GetCodeBindingSourceRequest& request, const GetCodeBindingSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCodeBindingSourceAsyncHelper( request, handler, context ); } );
}

void SchemasClient::GetCodeBindingSourceAsyncHelper(const GetCodeBindingSourceRequest& request, const GetCodeBindingSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCodeBindingSource(request), context);
}

GetDiscoveredSchemaOutcome SchemasClient::GetDiscoveredSchema(const GetDiscoveredSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discover";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDiscoveredSchemaOutcome(GetDiscoveredSchemaResult(outcome.GetResult()));
  }
  else
  {
    return GetDiscoveredSchemaOutcome(outcome.GetError());
  }
}

GetDiscoveredSchemaOutcomeCallable SchemasClient::GetDiscoveredSchemaCallable(const GetDiscoveredSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiscoveredSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDiscoveredSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::GetDiscoveredSchemaAsync(const GetDiscoveredSchemaRequest& request, const GetDiscoveredSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDiscoveredSchemaAsyncHelper( request, handler, context ); } );
}

void SchemasClient::GetDiscoveredSchemaAsyncHelper(const GetDiscoveredSchemaRequest& request, const GetDiscoveredSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDiscoveredSchema(request), context);
}

ListDiscoverersOutcome SchemasClient::ListDiscoverers(const ListDiscoverersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discoverers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDiscoverersOutcome(ListDiscoverersResult(outcome.GetResult()));
  }
  else
  {
    return ListDiscoverersOutcome(outcome.GetError());
  }
}

ListDiscoverersOutcomeCallable SchemasClient::ListDiscoverersCallable(const ListDiscoverersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDiscoverersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDiscoverers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListDiscoverersAsync(const ListDiscoverersRequest& request, const ListDiscoverersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDiscoverersAsyncHelper( request, handler, context ); } );
}

void SchemasClient::ListDiscoverersAsyncHelper(const ListDiscoverersRequest& request, const ListDiscoverersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDiscoverers(request), context);
}

ListRegistriesOutcome SchemasClient::ListRegistries(const ListRegistriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRegistriesOutcome(ListRegistriesResult(outcome.GetResult()));
  }
  else
  {
    return ListRegistriesOutcome(outcome.GetError());
  }
}

ListRegistriesOutcomeCallable SchemasClient::ListRegistriesCallable(const ListRegistriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegistriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegistries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListRegistriesAsync(const ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRegistriesAsyncHelper( request, handler, context ); } );
}

void SchemasClient::ListRegistriesAsyncHelper(const ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRegistries(request), context);
}

ListSchemaVersionsOutcome SchemasClient::ListSchemaVersions(const ListSchemaVersionsRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemaVersions", "Required field: RegistryName, is not set");
    return ListSchemaVersionsOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemaVersions", "Required field: SchemaName, is not set");
    return ListSchemaVersionsOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSchemaVersionsOutcome(ListSchemaVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSchemaVersionsOutcome(outcome.GetError());
  }
}

ListSchemaVersionsOutcomeCallable SchemasClient::ListSchemaVersionsCallable(const ListSchemaVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemaVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemaVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListSchemaVersionsAsync(const ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSchemaVersionsAsyncHelper( request, handler, context ); } );
}

void SchemasClient::ListSchemaVersionsAsyncHelper(const ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSchemaVersions(request), context);
}

ListSchemasOutcome SchemasClient::ListSchemas(const ListSchemasRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemas", "Required field: RegistryName, is not set");
    return ListSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSchemasOutcome(ListSchemasResult(outcome.GetResult()));
  }
  else
  {
    return ListSchemasOutcome(outcome.GetError());
  }
}

ListSchemasOutcomeCallable SchemasClient::ListSchemasCallable(const ListSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSchemasAsyncHelper( request, handler, context ); } );
}

void SchemasClient::ListSchemasAsyncHelper(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSchemas(request), context);
}

ListTagsForResourceOutcome SchemasClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable SchemasClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SchemasClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

LockServiceLinkedRoleOutcome SchemasClient::LockServiceLinkedRole(const LockServiceLinkedRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/slr-deletion/lock";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return LockServiceLinkedRoleOutcome(LockServiceLinkedRoleResult(outcome.GetResult()));
  }
  else
  {
    return LockServiceLinkedRoleOutcome(outcome.GetError());
  }
}

LockServiceLinkedRoleOutcomeCallable SchemasClient::LockServiceLinkedRoleCallable(const LockServiceLinkedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LockServiceLinkedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LockServiceLinkedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::LockServiceLinkedRoleAsync(const LockServiceLinkedRoleRequest& request, const LockServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->LockServiceLinkedRoleAsyncHelper( request, handler, context ); } );
}

void SchemasClient::LockServiceLinkedRoleAsyncHelper(const LockServiceLinkedRoleRequest& request, const LockServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LockServiceLinkedRole(request), context);
}

PutCodeBindingOutcome SchemasClient::PutCodeBinding(const PutCodeBindingRequest& request) const
{
  if (!request.LanguageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: Language, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: RegistryName, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: SchemaName, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  ss << "/language/";
  ss << request.GetLanguage();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutCodeBindingOutcome(PutCodeBindingResult(outcome.GetResult()));
  }
  else
  {
    return PutCodeBindingOutcome(outcome.GetError());
  }
}

PutCodeBindingOutcomeCallable SchemasClient::PutCodeBindingCallable(const PutCodeBindingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCodeBindingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCodeBinding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::PutCodeBindingAsync(const PutCodeBindingRequest& request, const PutCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutCodeBindingAsyncHelper( request, handler, context ); } );
}

void SchemasClient::PutCodeBindingAsyncHelper(const PutCodeBindingRequest& request, const PutCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutCodeBinding(request), context);
}

SearchSchemasOutcome SchemasClient::SearchSchemas(const SearchSchemasRequest& request) const
{
  if (!request.KeywordsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSchemas", "Required field: Keywords, is not set");
    return SearchSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Keywords]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSchemas", "Required field: RegistryName, is not set");
    return SearchSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/search";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchSchemasOutcome(SearchSchemasResult(outcome.GetResult()));
  }
  else
  {
    return SearchSchemasOutcome(outcome.GetError());
  }
}

SearchSchemasOutcomeCallable SchemasClient::SearchSchemasCallable(const SearchSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::SearchSchemasAsync(const SearchSchemasRequest& request, const SearchSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchSchemasAsyncHelper( request, handler, context ); } );
}

void SchemasClient::SearchSchemasAsyncHelper(const SearchSchemasRequest& request, const SearchSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchSchemas(request), context);
}

StartDiscovererOutcome SchemasClient::StartDiscoverer(const StartDiscovererRequest& request) const
{
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDiscoverer", "Required field: DiscovererId, is not set");
    return StartDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discoverers/id/";
  ss << request.GetDiscovererId();
  ss << "/start";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDiscovererOutcome(StartDiscovererResult(outcome.GetResult()));
  }
  else
  {
    return StartDiscovererOutcome(outcome.GetError());
  }
}

StartDiscovererOutcomeCallable SchemasClient::StartDiscovererCallable(const StartDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::StartDiscovererAsync(const StartDiscovererRequest& request, const StartDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDiscovererAsyncHelper( request, handler, context ); } );
}

void SchemasClient::StartDiscovererAsyncHelper(const StartDiscovererRequest& request, const StartDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDiscoverer(request), context);
}

StopDiscovererOutcome SchemasClient::StopDiscoverer(const StopDiscovererRequest& request) const
{
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDiscoverer", "Required field: DiscovererId, is not set");
    return StopDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discoverers/id/";
  ss << request.GetDiscovererId();
  ss << "/stop";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopDiscovererOutcome(StopDiscovererResult(outcome.GetResult()));
  }
  else
  {
    return StopDiscovererOutcome(outcome.GetError());
  }
}

StopDiscovererOutcomeCallable SchemasClient::StopDiscovererCallable(const StopDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::StopDiscovererAsync(const StopDiscovererRequest& request, const StopDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDiscovererAsyncHelper( request, handler, context ); } );
}

void SchemasClient::StopDiscovererAsyncHelper(const StopDiscovererRequest& request, const StopDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDiscoverer(request), context);
}

TagResourceOutcome SchemasClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable SchemasClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SchemasClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UnlockServiceLinkedRoleOutcome SchemasClient::UnlockServiceLinkedRole(const UnlockServiceLinkedRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/slr-deletion/unlock";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnlockServiceLinkedRoleOutcome(UnlockServiceLinkedRoleResult(outcome.GetResult()));
  }
  else
  {
    return UnlockServiceLinkedRoleOutcome(outcome.GetError());
  }
}

UnlockServiceLinkedRoleOutcomeCallable SchemasClient::UnlockServiceLinkedRoleCallable(const UnlockServiceLinkedRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnlockServiceLinkedRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnlockServiceLinkedRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UnlockServiceLinkedRoleAsync(const UnlockServiceLinkedRoleRequest& request, const UnlockServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnlockServiceLinkedRoleAsyncHelper( request, handler, context ); } );
}

void SchemasClient::UnlockServiceLinkedRoleAsyncHelper(const UnlockServiceLinkedRoleRequest& request, const UnlockServiceLinkedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnlockServiceLinkedRole(request), context);
}

UntagResourceOutcome SchemasClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable SchemasClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SchemasClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDiscovererOutcome SchemasClient::UpdateDiscoverer(const UpdateDiscovererRequest& request) const
{
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDiscoverer", "Required field: DiscovererId, is not set");
    return UpdateDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/discoverers/id/";
  ss << request.GetDiscovererId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDiscovererOutcome(UpdateDiscovererResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDiscovererOutcome(outcome.GetError());
  }
}

UpdateDiscovererOutcomeCallable SchemasClient::UpdateDiscovererCallable(const UpdateDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UpdateDiscovererAsync(const UpdateDiscovererRequest& request, const UpdateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDiscovererAsyncHelper( request, handler, context ); } );
}

void SchemasClient::UpdateDiscovererAsyncHelper(const UpdateDiscovererRequest& request, const UpdateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDiscoverer(request), context);
}

UpdateRegistryOutcome SchemasClient::UpdateRegistry(const UpdateRegistryRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRegistry", "Required field: RegistryName, is not set");
    return UpdateRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRegistryOutcome(UpdateRegistryResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRegistryOutcome(outcome.GetError());
  }
}

UpdateRegistryOutcomeCallable SchemasClient::UpdateRegistryCallable(const UpdateRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UpdateRegistryAsync(const UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRegistryAsyncHelper( request, handler, context ); } );
}

void SchemasClient::UpdateRegistryAsyncHelper(const UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRegistry(request), context);
}

UpdateSchemaOutcome SchemasClient::UpdateSchema(const UpdateSchemaRequest& request) const
{
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: RegistryName, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: SchemaName, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/registries/name/";
  ss << request.GetRegistryName();
  ss << "/schemas/name/";
  ss << request.GetSchemaName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSchemaOutcome(UpdateSchemaResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSchemaOutcome(outcome.GetError());
  }
}

UpdateSchemaOutcomeCallable SchemasClient::UpdateSchemaCallable(const UpdateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UpdateSchemaAsync(const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSchemaAsyncHelper( request, handler, context ); } );
}

void SchemasClient::UpdateSchemaAsyncHelper(const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSchema(request), context);
}

