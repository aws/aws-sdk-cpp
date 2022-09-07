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

void KeyspacesClientCreateKeyspaceAsyncHelper(KeyspacesClient const * const clientThis, const CreateKeyspaceRequest& request, const CreateKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateKeyspace(request), context);
}

void KeyspacesClient::CreateKeyspaceAsync(const CreateKeyspaceRequest& request, const CreateKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientCreateKeyspaceAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientCreateTableAsyncHelper(KeyspacesClient const * const clientThis, const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTable(request), context);
}

void KeyspacesClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientCreateTableAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientDeleteKeyspaceAsyncHelper(KeyspacesClient const * const clientThis, const DeleteKeyspaceRequest& request, const DeleteKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteKeyspace(request), context);
}

void KeyspacesClient::DeleteKeyspaceAsync(const DeleteKeyspaceRequest& request, const DeleteKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientDeleteKeyspaceAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientDeleteTableAsyncHelper(KeyspacesClient const * const clientThis, const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTable(request), context);
}

void KeyspacesClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientDeleteTableAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientGetKeyspaceAsyncHelper(KeyspacesClient const * const clientThis, const GetKeyspaceRequest& request, const GetKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetKeyspace(request), context);
}

void KeyspacesClient::GetKeyspaceAsync(const GetKeyspaceRequest& request, const GetKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientGetKeyspaceAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientGetTableAsyncHelper(KeyspacesClient const * const clientThis, const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTable(request), context);
}

void KeyspacesClient::GetTableAsync(const GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientGetTableAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientListKeyspacesAsyncHelper(KeyspacesClient const * const clientThis, const ListKeyspacesRequest& request, const ListKeyspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListKeyspaces(request), context);
}

void KeyspacesClient::ListKeyspacesAsync(const ListKeyspacesRequest& request, const ListKeyspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientListKeyspacesAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientListTablesAsyncHelper(KeyspacesClient const * const clientThis, const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTables(request), context);
}

void KeyspacesClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientListTablesAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientListTagsForResourceAsyncHelper(KeyspacesClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void KeyspacesClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientRestoreTableAsyncHelper(KeyspacesClient const * const clientThis, const RestoreTableRequest& request, const RestoreTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreTable(request), context);
}

void KeyspacesClient::RestoreTableAsync(const RestoreTableRequest& request, const RestoreTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientRestoreTableAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientTagResourceAsyncHelper(KeyspacesClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void KeyspacesClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientUntagResourceAsyncHelper(KeyspacesClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void KeyspacesClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void KeyspacesClientUpdateTableAsyncHelper(KeyspacesClient const * const clientThis, const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTable(request), context);
}

void KeyspacesClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KeyspacesClientUpdateTableAsyncHelper( this, request, handler, context ); } );
}

