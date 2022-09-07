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

#include <aws/redshift-serverless/RedshiftServerlessClient.h>
#include <aws/redshift-serverless/RedshiftServerlessEndpoint.h>
#include <aws/redshift-serverless/RedshiftServerlessErrorMarshaller.h>
#include <aws/redshift-serverless/model/ConvertRecoveryPointToSnapshotRequest.h>
#include <aws/redshift-serverless/model/CreateEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/CreateNamespaceRequest.h>
#include <aws/redshift-serverless/model/CreateSnapshotRequest.h>
#include <aws/redshift-serverless/model/CreateUsageLimitRequest.h>
#include <aws/redshift-serverless/model/CreateWorkgroupRequest.h>
#include <aws/redshift-serverless/model/DeleteEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/DeleteNamespaceRequest.h>
#include <aws/redshift-serverless/model/DeleteResourcePolicyRequest.h>
#include <aws/redshift-serverless/model/DeleteSnapshotRequest.h>
#include <aws/redshift-serverless/model/DeleteUsageLimitRequest.h>
#include <aws/redshift-serverless/model/DeleteWorkgroupRequest.h>
#include <aws/redshift-serverless/model/GetCredentialsRequest.h>
#include <aws/redshift-serverless/model/GetEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/GetNamespaceRequest.h>
#include <aws/redshift-serverless/model/GetRecoveryPointRequest.h>
#include <aws/redshift-serverless/model/GetResourcePolicyRequest.h>
#include <aws/redshift-serverless/model/GetSnapshotRequest.h>
#include <aws/redshift-serverless/model/GetUsageLimitRequest.h>
#include <aws/redshift-serverless/model/GetWorkgroupRequest.h>
#include <aws/redshift-serverless/model/ListEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/ListNamespacesRequest.h>
#include <aws/redshift-serverless/model/ListRecoveryPointsRequest.h>
#include <aws/redshift-serverless/model/ListSnapshotsRequest.h>
#include <aws/redshift-serverless/model/ListTagsForResourceRequest.h>
#include <aws/redshift-serverless/model/ListUsageLimitsRequest.h>
#include <aws/redshift-serverless/model/ListWorkgroupsRequest.h>
#include <aws/redshift-serverless/model/PutResourcePolicyRequest.h>
#include <aws/redshift-serverless/model/RestoreFromRecoveryPointRequest.h>
#include <aws/redshift-serverless/model/RestoreFromSnapshotRequest.h>
#include <aws/redshift-serverless/model/TagResourceRequest.h>
#include <aws/redshift-serverless/model/UntagResourceRequest.h>
#include <aws/redshift-serverless/model/UpdateEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/UpdateNamespaceRequest.h>
#include <aws/redshift-serverless/model/UpdateSnapshotRequest.h>
#include <aws/redshift-serverless/model/UpdateUsageLimitRequest.h>
#include <aws/redshift-serverless/model/UpdateWorkgroupRequest.h>

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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  AWSClient::SetServiceClientName("Redshift Serverless");
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

void RedshiftServerlessClientConvertRecoveryPointToSnapshotAsyncHelper(RedshiftServerlessClient const * const clientThis, const ConvertRecoveryPointToSnapshotRequest& request, const ConvertRecoveryPointToSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ConvertRecoveryPointToSnapshot(request), context);
}

void RedshiftServerlessClient::ConvertRecoveryPointToSnapshotAsync(const ConvertRecoveryPointToSnapshotRequest& request, const ConvertRecoveryPointToSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientConvertRecoveryPointToSnapshotAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientCreateEndpointAccessAsyncHelper(RedshiftServerlessClient const * const clientThis, const CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEndpointAccess(request), context);
}

void RedshiftServerlessClient::CreateEndpointAccessAsync(const CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientCreateEndpointAccessAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientCreateNamespaceAsyncHelper(RedshiftServerlessClient const * const clientThis, const CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNamespace(request), context);
}

void RedshiftServerlessClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientCreateNamespaceAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientCreateSnapshotAsyncHelper(RedshiftServerlessClient const * const clientThis, const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSnapshot(request), context);
}

void RedshiftServerlessClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientCreateSnapshotAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientCreateUsageLimitAsyncHelper(RedshiftServerlessClient const * const clientThis, const CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUsageLimit(request), context);
}

void RedshiftServerlessClient::CreateUsageLimitAsync(const CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientCreateUsageLimitAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientCreateWorkgroupAsyncHelper(RedshiftServerlessClient const * const clientThis, const CreateWorkgroupRequest& request, const CreateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkgroup(request), context);
}

void RedshiftServerlessClient::CreateWorkgroupAsync(const CreateWorkgroupRequest& request, const CreateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientCreateWorkgroupAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientDeleteEndpointAccessAsyncHelper(RedshiftServerlessClient const * const clientThis, const DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpointAccess(request), context);
}

void RedshiftServerlessClient::DeleteEndpointAccessAsync(const DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientDeleteEndpointAccessAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientDeleteNamespaceAsyncHelper(RedshiftServerlessClient const * const clientThis, const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNamespace(request), context);
}

void RedshiftServerlessClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientDeleteNamespaceAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientDeleteResourcePolicyAsyncHelper(RedshiftServerlessClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void RedshiftServerlessClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientDeleteSnapshotAsyncHelper(RedshiftServerlessClient const * const clientThis, const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSnapshot(request), context);
}

void RedshiftServerlessClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientDeleteSnapshotAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientDeleteUsageLimitAsyncHelper(RedshiftServerlessClient const * const clientThis, const DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUsageLimit(request), context);
}

void RedshiftServerlessClient::DeleteUsageLimitAsync(const DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientDeleteUsageLimitAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientDeleteWorkgroupAsyncHelper(RedshiftServerlessClient const * const clientThis, const DeleteWorkgroupRequest& request, const DeleteWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkgroup(request), context);
}

void RedshiftServerlessClient::DeleteWorkgroupAsync(const DeleteWorkgroupRequest& request, const DeleteWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientDeleteWorkgroupAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetCredentialsAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetCredentialsRequest& request, const GetCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCredentials(request), context);
}

void RedshiftServerlessClient::GetCredentialsAsync(const GetCredentialsRequest& request, const GetCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetCredentialsAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetEndpointAccessAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetEndpointAccessRequest& request, const GetEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEndpointAccess(request), context);
}

void RedshiftServerlessClient::GetEndpointAccessAsync(const GetEndpointAccessRequest& request, const GetEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetEndpointAccessAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetNamespaceAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNamespace(request), context);
}

void RedshiftServerlessClient::GetNamespaceAsync(const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetNamespaceAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetRecoveryPointAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetRecoveryPointRequest& request, const GetRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRecoveryPoint(request), context);
}

void RedshiftServerlessClient::GetRecoveryPointAsync(const GetRecoveryPointRequest& request, const GetRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetRecoveryPointAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetResourcePolicyAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicy(request), context);
}

void RedshiftServerlessClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetResourcePolicyAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetSnapshotAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSnapshot(request), context);
}

void RedshiftServerlessClient::GetSnapshotAsync(const GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetSnapshotAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetUsageLimitAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetUsageLimitRequest& request, const GetUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsageLimit(request), context);
}

void RedshiftServerlessClient::GetUsageLimitAsync(const GetUsageLimitRequest& request, const GetUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetUsageLimitAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientGetWorkgroupAsyncHelper(RedshiftServerlessClient const * const clientThis, const GetWorkgroupRequest& request, const GetWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkgroup(request), context);
}

void RedshiftServerlessClient::GetWorkgroupAsync(const GetWorkgroupRequest& request, const GetWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientGetWorkgroupAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientListEndpointAccessAsyncHelper(RedshiftServerlessClient const * const clientThis, const ListEndpointAccessRequest& request, const ListEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEndpointAccess(request), context);
}

void RedshiftServerlessClient::ListEndpointAccessAsync(const ListEndpointAccessRequest& request, const ListEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientListEndpointAccessAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientListNamespacesAsyncHelper(RedshiftServerlessClient const * const clientThis, const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNamespaces(request), context);
}

void RedshiftServerlessClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientListNamespacesAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientListRecoveryPointsAsyncHelper(RedshiftServerlessClient const * const clientThis, const ListRecoveryPointsRequest& request, const ListRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRecoveryPoints(request), context);
}

void RedshiftServerlessClient::ListRecoveryPointsAsync(const ListRecoveryPointsRequest& request, const ListRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientListRecoveryPointsAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientListSnapshotsAsyncHelper(RedshiftServerlessClient const * const clientThis, const ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSnapshots(request), context);
}

void RedshiftServerlessClient::ListSnapshotsAsync(const ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientListSnapshotsAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientListTagsForResourceAsyncHelper(RedshiftServerlessClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void RedshiftServerlessClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientListUsageLimitsAsyncHelper(RedshiftServerlessClient const * const clientThis, const ListUsageLimitsRequest& request, const ListUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsageLimits(request), context);
}

void RedshiftServerlessClient::ListUsageLimitsAsync(const ListUsageLimitsRequest& request, const ListUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientListUsageLimitsAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientListWorkgroupsAsyncHelper(RedshiftServerlessClient const * const clientThis, const ListWorkgroupsRequest& request, const ListWorkgroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkgroups(request), context);
}

void RedshiftServerlessClient::ListWorkgroupsAsync(const ListWorkgroupsRequest& request, const ListWorkgroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientListWorkgroupsAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientPutResourcePolicyAsyncHelper(RedshiftServerlessClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void RedshiftServerlessClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientRestoreFromRecoveryPointAsyncHelper(RedshiftServerlessClient const * const clientThis, const RestoreFromRecoveryPointRequest& request, const RestoreFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreFromRecoveryPoint(request), context);
}

void RedshiftServerlessClient::RestoreFromRecoveryPointAsync(const RestoreFromRecoveryPointRequest& request, const RestoreFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientRestoreFromRecoveryPointAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientRestoreFromSnapshotAsyncHelper(RedshiftServerlessClient const * const clientThis, const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreFromSnapshot(request), context);
}

void RedshiftServerlessClient::RestoreFromSnapshotAsync(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientRestoreFromSnapshotAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientTagResourceAsyncHelper(RedshiftServerlessClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void RedshiftServerlessClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientUntagResourceAsyncHelper(RedshiftServerlessClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void RedshiftServerlessClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientUpdateEndpointAccessAsyncHelper(RedshiftServerlessClient const * const clientThis, const UpdateEndpointAccessRequest& request, const UpdateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpointAccess(request), context);
}

void RedshiftServerlessClient::UpdateEndpointAccessAsync(const UpdateEndpointAccessRequest& request, const UpdateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientUpdateEndpointAccessAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientUpdateNamespaceAsyncHelper(RedshiftServerlessClient const * const clientThis, const UpdateNamespaceRequest& request, const UpdateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNamespace(request), context);
}

void RedshiftServerlessClient::UpdateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientUpdateNamespaceAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientUpdateSnapshotAsyncHelper(RedshiftServerlessClient const * const clientThis, const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSnapshot(request), context);
}

void RedshiftServerlessClient::UpdateSnapshotAsync(const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientUpdateSnapshotAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientUpdateUsageLimitAsyncHelper(RedshiftServerlessClient const * const clientThis, const UpdateUsageLimitRequest& request, const UpdateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUsageLimit(request), context);
}

void RedshiftServerlessClient::UpdateUsageLimitAsync(const UpdateUsageLimitRequest& request, const UpdateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientUpdateUsageLimitAsyncHelper( this, request, handler, context ); } );
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

void RedshiftServerlessClientUpdateWorkgroupAsyncHelper(RedshiftServerlessClient const * const clientThis, const UpdateWorkgroupRequest& request, const UpdateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkgroup(request), context);
}

void RedshiftServerlessClient::UpdateWorkgroupAsync(const UpdateWorkgroupRequest& request, const UpdateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RedshiftServerlessClientUpdateWorkgroupAsyncHelper( this, request, handler, context ); } );
}

