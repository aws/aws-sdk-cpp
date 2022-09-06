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

#include <aws/keyspaces/KeyspacesClient.h>
#include <aws/keyspaces/KeyspacesEndpoint.h>
#include <aws/keyspaces/KeyspacesErrorMarshaller.h>
#include <aws/keyspaces/model/CreateKeyspaceRequest.h>
#include <aws/keyspaces/model/CreateTableRequest.h>
#include <aws/keyspaces/model/DeleteKeyspaceRequest.h>
#include <aws/keyspaces/model/DeleteTableRequest.h>
#include <aws/keyspaces/model/GetKeyspaceRequest.h>
#include <aws/keyspaces/model/GetTableRequest.h>
#include <aws/keyspaces/model/ListKeyspacesRequest.h>
#include <aws/keyspaces/model/ListTablesRequest.h>
#include <aws/keyspaces/model/ListTagsForResourceRequest.h>
#include <aws/keyspaces/model/RestoreTableRequest.h>
#include <aws/keyspaces/model/TagResourceRequest.h>
#include <aws/keyspaces/model/UntagResourceRequest.h>
#include <aws/keyspaces/model/UpdateTableRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Keyspaces;
using namespace Aws::Keyspaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cassandra";
static const char* ALLOCATION_TAG = "KeyspacesClient";

KeyspacesClient::KeyspacesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KeyspacesClient::KeyspacesClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KeyspacesClient::KeyspacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KeyspacesClient::~KeyspacesClient()
{
}

void KeyspacesClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Keyspaces");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KeyspacesEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KeyspacesClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateKeyspaceOutcome KeyspacesClient::CreateKeyspace(const CreateKeyspaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateKeyspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateKeyspaceOutcomeCallable KeyspacesClient::CreateKeyspaceCallable(const CreateKeyspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeyspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKeyspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::CreateKeyspaceAsync(const CreateKeyspaceRequest& request, const CreateKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateKeyspaceAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::CreateKeyspaceAsyncHelper(const CreateKeyspaceRequest& request, const CreateKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeyspace(request), context);
}

CreateTableOutcome KeyspacesClient::CreateTable(const CreateTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTableOutcomeCallable KeyspacesClient::CreateTableCallable(const CreateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTableAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::CreateTableAsyncHelper(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTable(request), context);
}

DeleteKeyspaceOutcome KeyspacesClient::DeleteKeyspace(const DeleteKeyspaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteKeyspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteKeyspaceOutcomeCallable KeyspacesClient::DeleteKeyspaceCallable(const DeleteKeyspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKeyspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKeyspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::DeleteKeyspaceAsync(const DeleteKeyspaceRequest& request, const DeleteKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteKeyspaceAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::DeleteKeyspaceAsyncHelper(const DeleteKeyspaceRequest& request, const DeleteKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKeyspace(request), context);
}

DeleteTableOutcome KeyspacesClient::DeleteTable(const DeleteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTableOutcomeCallable KeyspacesClient::DeleteTableCallable(const DeleteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTableAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::DeleteTableAsyncHelper(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTable(request), context);
}

GetKeyspaceOutcome KeyspacesClient::GetKeyspace(const GetKeyspaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetKeyspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetKeyspaceOutcomeCallable KeyspacesClient::GetKeyspaceCallable(const GetKeyspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::GetKeyspaceAsync(const GetKeyspaceRequest& request, const GetKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetKeyspaceAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::GetKeyspaceAsyncHelper(const GetKeyspaceRequest& request, const GetKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyspace(request), context);
}

GetTableOutcome KeyspacesClient::GetTable(const GetTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableOutcomeCallable KeyspacesClient::GetTableCallable(const GetTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::GetTableAsync(const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTableAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::GetTableAsyncHelper(const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTable(request), context);
}

ListKeyspacesOutcome KeyspacesClient::ListKeyspaces(const ListKeyspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListKeyspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListKeyspacesOutcomeCallable KeyspacesClient::ListKeyspacesCallable(const ListKeyspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeyspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeyspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::ListKeyspacesAsync(const ListKeyspacesRequest& request, const ListKeyspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListKeyspacesAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::ListKeyspacesAsyncHelper(const ListKeyspacesRequest& request, const ListKeyspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeyspaces(request), context);
}

ListTablesOutcome KeyspacesClient::ListTables(const ListTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcomeCallable KeyspacesClient::ListTablesCallable(const ListTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTablesAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::ListTablesAsyncHelper(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTables(request), context);
}

ListTagsForResourceOutcome KeyspacesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable KeyspacesClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

RestoreTableOutcome KeyspacesClient::RestoreTable(const RestoreTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreTableOutcomeCallable KeyspacesClient::RestoreTableCallable(const RestoreTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::RestoreTableAsync(const RestoreTableRequest& request, const RestoreTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreTableAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::RestoreTableAsyncHelper(const RestoreTableRequest& request, const RestoreTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreTable(request), context);
}

TagResourceOutcome KeyspacesClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KeyspacesClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome KeyspacesClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KeyspacesClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateTableOutcome KeyspacesClient::UpdateTable(const UpdateTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableOutcomeCallable KeyspacesClient::UpdateTableCallable(const UpdateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KeyspacesClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTableAsyncHelper( request, handler, context ); } );
}

void KeyspacesClient::UpdateTableAsyncHelper(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTable(request), context);
}

