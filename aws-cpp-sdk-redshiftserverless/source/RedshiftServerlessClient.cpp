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

#include <aws/redshiftserverless/RedshiftServerlessClient.h>
#include <aws/redshiftserverless/RedshiftServerlessEndpoint.h>
#include <aws/redshiftserverless/RedshiftServerlessErrorMarshaller.h>
#include <aws/redshiftserverless/model/ConvertRecoveryPointToSnapshotRequest.h>
#include <aws/redshiftserverless/model/CreateEndpointAccessRequest.h>
#include <aws/redshiftserverless/model/CreateNamespaceRequest.h>
#include <aws/redshiftserverless/model/CreateSnapshotRequest.h>
#include <aws/redshiftserverless/model/CreateUsageLimitRequest.h>
#include <aws/redshiftserverless/model/CreateWorkgroupRequest.h>
#include <aws/redshiftserverless/model/DeleteEndpointAccessRequest.h>
#include <aws/redshiftserverless/model/DeleteNamespaceRequest.h>
#include <aws/redshiftserverless/model/DeleteResourcePolicyRequest.h>
#include <aws/redshiftserverless/model/DeleteSnapshotRequest.h>
#include <aws/redshiftserverless/model/DeleteUsageLimitRequest.h>
#include <aws/redshiftserverless/model/DeleteWorkgroupRequest.h>
#include <aws/redshiftserverless/model/GetCredentialsRequest.h>
#include <aws/redshiftserverless/model/GetEndpointAccessRequest.h>
#include <aws/redshiftserverless/model/GetNamespaceRequest.h>
#include <aws/redshiftserverless/model/GetRecoveryPointRequest.h>
#include <aws/redshiftserverless/model/GetResourcePolicyRequest.h>
#include <aws/redshiftserverless/model/GetSnapshotRequest.h>
#include <aws/redshiftserverless/model/GetUsageLimitRequest.h>
#include <aws/redshiftserverless/model/GetWorkgroupRequest.h>
#include <aws/redshiftserverless/model/ListEndpointAccessRequest.h>
#include <aws/redshiftserverless/model/ListNamespacesRequest.h>
#include <aws/redshiftserverless/model/ListRecoveryPointsRequest.h>
#include <aws/redshiftserverless/model/ListSnapshotsRequest.h>
#include <aws/redshiftserverless/model/ListTagsForResourceRequest.h>
#include <aws/redshiftserverless/model/ListUsageLimitsRequest.h>
#include <aws/redshiftserverless/model/ListWorkgroupsRequest.h>
#include <aws/redshiftserverless/model/PutResourcePolicyRequest.h>
#include <aws/redshiftserverless/model/RestoreFromRecoveryPointRequest.h>
#include <aws/redshiftserverless/model/RestoreFromSnapshotRequest.h>
#include <aws/redshiftserverless/model/TagResourceRequest.h>
#include <aws/redshiftserverless/model/UntagResourceRequest.h>
#include <aws/redshiftserverless/model/UpdateEndpointAccessRequest.h>
#include <aws/redshiftserverless/model/UpdateNamespaceRequest.h>
#include <aws/redshiftserverless/model/UpdateSnapshotRequest.h>
#include <aws/redshiftserverless/model/UpdateUsageLimitRequest.h>
#include <aws/redshiftserverless/model/UpdateWorkgroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RedshiftServerless;
using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "redshift-serverless";
static const char* ALLOCATION_TAG = "RedshiftServerlessClient";


RedshiftServerlessClient::RedshiftServerlessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftServerlessClient::~RedshiftServerlessClient()
{
}

void RedshiftServerlessClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("RedshiftServerless");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RedshiftServerlessEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RedshiftServerlessClient::OverrideEndpoint(const Aws::String& endpoint)
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

ConvertRecoveryPointToSnapshotOutcome RedshiftServerlessClient::ConvertRecoveryPointToSnapshot(const ConvertRecoveryPointToSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ConvertRecoveryPointToSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ConvertRecoveryPointToSnapshotOutcomeCallable RedshiftServerlessClient::ConvertRecoveryPointToSnapshotCallable(const ConvertRecoveryPointToSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConvertRecoveryPointToSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConvertRecoveryPointToSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ConvertRecoveryPointToSnapshotAsync(const ConvertRecoveryPointToSnapshotRequest& request, const ConvertRecoveryPointToSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConvertRecoveryPointToSnapshotAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ConvertRecoveryPointToSnapshotAsyncHelper(const ConvertRecoveryPointToSnapshotRequest& request, const ConvertRecoveryPointToSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConvertRecoveryPointToSnapshot(request), context);
}

CreateEndpointAccessOutcome RedshiftServerlessClient::CreateEndpointAccess(const CreateEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointAccessOutcomeCallable RedshiftServerlessClient::CreateEndpointAccessCallable(const CreateEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::CreateEndpointAccessAsync(const CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEndpointAccessAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::CreateEndpointAccessAsyncHelper(const CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEndpointAccess(request), context);
}

CreateNamespaceOutcome RedshiftServerlessClient::CreateNamespace(const CreateNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNamespaceOutcomeCallable RedshiftServerlessClient::CreateNamespaceCallable(const CreateNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNamespaceAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::CreateNamespaceAsyncHelper(const CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNamespace(request), context);
}

CreateSnapshotOutcome RedshiftServerlessClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable RedshiftServerlessClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateUsageLimitOutcome RedshiftServerlessClient::CreateUsageLimit(const CreateUsageLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUsageLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUsageLimitOutcomeCallable RedshiftServerlessClient::CreateUsageLimitCallable(const CreateUsageLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsageLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsageLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::CreateUsageLimitAsync(const CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUsageLimitAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::CreateUsageLimitAsyncHelper(const CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUsageLimit(request), context);
}

CreateWorkgroupOutcome RedshiftServerlessClient::CreateWorkgroup(const CreateWorkgroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkgroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkgroupOutcomeCallable RedshiftServerlessClient::CreateWorkgroupCallable(const CreateWorkgroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkgroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkgroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::CreateWorkgroupAsync(const CreateWorkgroupRequest& request, const CreateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkgroupAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::CreateWorkgroupAsyncHelper(const CreateWorkgroupRequest& request, const CreateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkgroup(request), context);
}

DeleteEndpointAccessOutcome RedshiftServerlessClient::DeleteEndpointAccess(const DeleteEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointAccessOutcomeCallable RedshiftServerlessClient::DeleteEndpointAccessCallable(const DeleteEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::DeleteEndpointAccessAsync(const DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEndpointAccessAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::DeleteEndpointAccessAsyncHelper(const DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEndpointAccess(request), context);
}

DeleteNamespaceOutcome RedshiftServerlessClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNamespaceOutcomeCallable RedshiftServerlessClient::DeleteNamespaceCallable(const DeleteNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNamespaceAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::DeleteNamespaceAsyncHelper(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNamespace(request), context);
}

DeleteResourcePolicyOutcome RedshiftServerlessClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable RedshiftServerlessClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::DeleteResourcePolicyAsyncHelper(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicy(request), context);
}

DeleteSnapshotOutcome RedshiftServerlessClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSnapshotOutcomeCallable RedshiftServerlessClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSnapshotAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::DeleteSnapshotAsyncHelper(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSnapshot(request), context);
}

DeleteUsageLimitOutcome RedshiftServerlessClient::DeleteUsageLimit(const DeleteUsageLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUsageLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUsageLimitOutcomeCallable RedshiftServerlessClient::DeleteUsageLimitCallable(const DeleteUsageLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsageLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsageLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::DeleteUsageLimitAsync(const DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUsageLimitAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::DeleteUsageLimitAsyncHelper(const DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUsageLimit(request), context);
}

DeleteWorkgroupOutcome RedshiftServerlessClient::DeleteWorkgroup(const DeleteWorkgroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkgroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkgroupOutcomeCallable RedshiftServerlessClient::DeleteWorkgroupCallable(const DeleteWorkgroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkgroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkgroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::DeleteWorkgroupAsync(const DeleteWorkgroupRequest& request, const DeleteWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorkgroupAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::DeleteWorkgroupAsyncHelper(const DeleteWorkgroupRequest& request, const DeleteWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorkgroup(request), context);
}

GetCredentialsOutcome RedshiftServerlessClient::GetCredentials(const GetCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCredentialsOutcomeCallable RedshiftServerlessClient::GetCredentialsCallable(const GetCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetCredentialsAsync(const GetCredentialsRequest& request, const GetCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCredentialsAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetCredentialsAsyncHelper(const GetCredentialsRequest& request, const GetCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCredentials(request), context);
}

GetEndpointAccessOutcome RedshiftServerlessClient::GetEndpointAccess(const GetEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEndpointAccessOutcomeCallable RedshiftServerlessClient::GetEndpointAccessCallable(const GetEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetEndpointAccessAsync(const GetEndpointAccessRequest& request, const GetEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEndpointAccessAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetEndpointAccessAsyncHelper(const GetEndpointAccessRequest& request, const GetEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEndpointAccess(request), context);
}

GetNamespaceOutcome RedshiftServerlessClient::GetNamespace(const GetNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNamespaceOutcomeCallable RedshiftServerlessClient::GetNamespaceCallable(const GetNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetNamespaceAsync(const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNamespaceAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetNamespaceAsyncHelper(const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNamespace(request), context);
}

GetRecoveryPointOutcome RedshiftServerlessClient::GetRecoveryPoint(const GetRecoveryPointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRecoveryPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRecoveryPointOutcomeCallable RedshiftServerlessClient::GetRecoveryPointCallable(const GetRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetRecoveryPointAsync(const GetRecoveryPointRequest& request, const GetRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRecoveryPointAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetRecoveryPointAsyncHelper(const GetRecoveryPointRequest& request, const GetRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRecoveryPoint(request), context);
}

GetResourcePolicyOutcome RedshiftServerlessClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable RedshiftServerlessClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcePolicyAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetResourcePolicyAsyncHelper(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourcePolicy(request), context);
}

GetSnapshotOutcome RedshiftServerlessClient::GetSnapshot(const GetSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSnapshotOutcomeCallable RedshiftServerlessClient::GetSnapshotCallable(const GetSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetSnapshotAsync(const GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSnapshotAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetSnapshotAsyncHelper(const GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSnapshot(request), context);
}

GetUsageLimitOutcome RedshiftServerlessClient::GetUsageLimit(const GetUsageLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUsageLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUsageLimitOutcomeCallable RedshiftServerlessClient::GetUsageLimitCallable(const GetUsageLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetUsageLimitAsync(const GetUsageLimitRequest& request, const GetUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsageLimitAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetUsageLimitAsyncHelper(const GetUsageLimitRequest& request, const GetUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsageLimit(request), context);
}

GetWorkgroupOutcome RedshiftServerlessClient::GetWorkgroup(const GetWorkgroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWorkgroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkgroupOutcomeCallable RedshiftServerlessClient::GetWorkgroupCallable(const GetWorkgroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkgroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkgroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetWorkgroupAsync(const GetWorkgroupRequest& request, const GetWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkgroupAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::GetWorkgroupAsyncHelper(const GetWorkgroupRequest& request, const GetWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkgroup(request), context);
}

ListEndpointAccessOutcome RedshiftServerlessClient::ListEndpointAccess(const ListEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointAccessOutcomeCallable RedshiftServerlessClient::ListEndpointAccessCallable(const ListEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListEndpointAccessAsync(const ListEndpointAccessRequest& request, const ListEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEndpointAccessAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ListEndpointAccessAsyncHelper(const ListEndpointAccessRequest& request, const ListEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEndpointAccess(request), context);
}

ListNamespacesOutcome RedshiftServerlessClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListNamespacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNamespacesOutcomeCallable RedshiftServerlessClient::ListNamespacesCallable(const ListNamespacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamespacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamespaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNamespacesAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ListNamespacesAsyncHelper(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNamespaces(request), context);
}

ListRecoveryPointsOutcome RedshiftServerlessClient::ListRecoveryPoints(const ListRecoveryPointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRecoveryPointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecoveryPointsOutcomeCallable RedshiftServerlessClient::ListRecoveryPointsCallable(const ListRecoveryPointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecoveryPointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecoveryPoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListRecoveryPointsAsync(const ListRecoveryPointsRequest& request, const ListRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecoveryPointsAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ListRecoveryPointsAsyncHelper(const ListRecoveryPointsRequest& request, const ListRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecoveryPoints(request), context);
}

ListSnapshotsOutcome RedshiftServerlessClient::ListSnapshots(const ListSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSnapshotsOutcomeCallable RedshiftServerlessClient::ListSnapshotsCallable(const ListSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListSnapshotsAsync(const ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSnapshotsAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ListSnapshotsAsyncHelper(const ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSnapshots(request), context);
}

ListTagsForResourceOutcome RedshiftServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable RedshiftServerlessClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListUsageLimitsOutcome RedshiftServerlessClient::ListUsageLimits(const ListUsageLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUsageLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsageLimitsOutcomeCallable RedshiftServerlessClient::ListUsageLimitsCallable(const ListUsageLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsageLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsageLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListUsageLimitsAsync(const ListUsageLimitsRequest& request, const ListUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsageLimitsAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ListUsageLimitsAsyncHelper(const ListUsageLimitsRequest& request, const ListUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsageLimits(request), context);
}

ListWorkgroupsOutcome RedshiftServerlessClient::ListWorkgroups(const ListWorkgroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkgroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkgroupsOutcomeCallable RedshiftServerlessClient::ListWorkgroupsCallable(const ListWorkgroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkgroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkgroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListWorkgroupsAsync(const ListWorkgroupsRequest& request, const ListWorkgroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkgroupsAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::ListWorkgroupsAsyncHelper(const ListWorkgroupsRequest& request, const ListWorkgroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkgroups(request), context);
}

PutResourcePolicyOutcome RedshiftServerlessClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable RedshiftServerlessClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutResourcePolicyAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::PutResourcePolicyAsyncHelper(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResourcePolicy(request), context);
}

RestoreFromRecoveryPointOutcome RedshiftServerlessClient::RestoreFromRecoveryPoint(const RestoreFromRecoveryPointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreFromRecoveryPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreFromRecoveryPointOutcomeCallable RedshiftServerlessClient::RestoreFromRecoveryPointCallable(const RestoreFromRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreFromRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreFromRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::RestoreFromRecoveryPointAsync(const RestoreFromRecoveryPointRequest& request, const RestoreFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreFromRecoveryPointAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::RestoreFromRecoveryPointAsyncHelper(const RestoreFromRecoveryPointRequest& request, const RestoreFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreFromRecoveryPoint(request), context);
}

RestoreFromSnapshotOutcome RedshiftServerlessClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreFromSnapshotOutcomeCallable RedshiftServerlessClient::RestoreFromSnapshotCallable(const RestoreFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::RestoreFromSnapshotAsync(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreFromSnapshotAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::RestoreFromSnapshotAsyncHelper(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreFromSnapshot(request), context);
}

TagResourceOutcome RedshiftServerlessClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable RedshiftServerlessClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome RedshiftServerlessClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable RedshiftServerlessClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateEndpointAccessOutcome RedshiftServerlessClient::UpdateEndpointAccess(const UpdateEndpointAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEndpointAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointAccessOutcomeCallable RedshiftServerlessClient::UpdateEndpointAccessCallable(const UpdateEndpointAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::UpdateEndpointAccessAsync(const UpdateEndpointAccessRequest& request, const UpdateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEndpointAccessAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::UpdateEndpointAccessAsyncHelper(const UpdateEndpointAccessRequest& request, const UpdateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEndpointAccess(request), context);
}

UpdateNamespaceOutcome RedshiftServerlessClient::UpdateNamespace(const UpdateNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNamespaceOutcomeCallable RedshiftServerlessClient::UpdateNamespaceCallable(const UpdateNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::UpdateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNamespaceAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::UpdateNamespaceAsyncHelper(const UpdateNamespaceRequest& request, const UpdateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNamespace(request), context);
}

UpdateSnapshotOutcome RedshiftServerlessClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSnapshotOutcomeCallable RedshiftServerlessClient::UpdateSnapshotCallable(const UpdateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::UpdateSnapshotAsync(const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSnapshotAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::UpdateSnapshotAsyncHelper(const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSnapshot(request), context);
}

UpdateUsageLimitOutcome RedshiftServerlessClient::UpdateUsageLimit(const UpdateUsageLimitRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUsageLimitOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUsageLimitOutcomeCallable RedshiftServerlessClient::UpdateUsageLimitCallable(const UpdateUsageLimitRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUsageLimitOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUsageLimit(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::UpdateUsageLimitAsync(const UpdateUsageLimitRequest& request, const UpdateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUsageLimitAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::UpdateUsageLimitAsyncHelper(const UpdateUsageLimitRequest& request, const UpdateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUsageLimit(request), context);
}

UpdateWorkgroupOutcome RedshiftServerlessClient::UpdateWorkgroup(const UpdateWorkgroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWorkgroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkgroupOutcomeCallable RedshiftServerlessClient::UpdateWorkgroupCallable(const UpdateWorkgroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkgroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkgroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::UpdateWorkgroupAsync(const UpdateWorkgroupRequest& request, const UpdateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWorkgroupAsyncHelper( request, handler, context ); } );
}

void RedshiftServerlessClient::UpdateWorkgroupAsyncHelper(const UpdateWorkgroupRequest& request, const UpdateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWorkgroup(request), context);
}

