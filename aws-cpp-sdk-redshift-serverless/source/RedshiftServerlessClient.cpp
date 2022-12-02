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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/redshift-serverless/RedshiftServerlessClient.h>
#include <aws/redshift-serverless/RedshiftServerlessErrorMarshaller.h>
#include <aws/redshift-serverless/RedshiftServerlessEndpointProvider.h>
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
#include <aws/redshift-serverless/model/GetTableRestoreStatusRequest.h>
#include <aws/redshift-serverless/model/GetUsageLimitRequest.h>
#include <aws/redshift-serverless/model/GetWorkgroupRequest.h>
#include <aws/redshift-serverless/model/ListEndpointAccessRequest.h>
#include <aws/redshift-serverless/model/ListNamespacesRequest.h>
#include <aws/redshift-serverless/model/ListRecoveryPointsRequest.h>
#include <aws/redshift-serverless/model/ListSnapshotsRequest.h>
#include <aws/redshift-serverless/model/ListTableRestoreStatusRequest.h>
#include <aws/redshift-serverless/model/ListTagsForResourceRequest.h>
#include <aws/redshift-serverless/model/ListUsageLimitsRequest.h>
#include <aws/redshift-serverless/model/ListWorkgroupsRequest.h>
#include <aws/redshift-serverless/model/PutResourcePolicyRequest.h>
#include <aws/redshift-serverless/model/RestoreFromRecoveryPointRequest.h>
#include <aws/redshift-serverless/model/RestoreFromSnapshotRequest.h>
#include <aws/redshift-serverless/model/RestoreTableFromSnapshotRequest.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* RedshiftServerlessClient::SERVICE_NAME = "redshift-serverless";
const char* RedshiftServerlessClient::ALLOCATION_TAG = "RedshiftServerlessClient";

RedshiftServerlessClient::RedshiftServerlessClient(const RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider,
                                                   const RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider,
                                                   const RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  RedshiftServerlessClient::RedshiftServerlessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RedshiftServerlessClient::RedshiftServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
RedshiftServerlessClient::~RedshiftServerlessClient()
{
}

std::shared_ptr<RedshiftServerlessEndpointProviderBase>& RedshiftServerlessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void RedshiftServerlessClient::init(const RedshiftServerless::RedshiftServerlessClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Redshift Serverless");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void RedshiftServerlessClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ConvertRecoveryPointToSnapshotOutcome RedshiftServerlessClient::ConvertRecoveryPointToSnapshot(const ConvertRecoveryPointToSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConvertRecoveryPointToSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConvertRecoveryPointToSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConvertRecoveryPointToSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ConvertRecoveryPointToSnapshot(request), context);
    } );
}

CreateEndpointAccessOutcome RedshiftServerlessClient::CreateEndpointAccess(const CreateEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEndpointAccess(request), context);
    } );
}

CreateNamespaceOutcome RedshiftServerlessClient::CreateNamespace(const CreateNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNamespace(request), context);
    } );
}

CreateSnapshotOutcome RedshiftServerlessClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSnapshot(request), context);
    } );
}

CreateUsageLimitOutcome RedshiftServerlessClient::CreateUsageLimit(const CreateUsageLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUsageLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUsageLimit(request), context);
    } );
}

CreateWorkgroupOutcome RedshiftServerlessClient::CreateWorkgroup(const CreateWorkgroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWorkgroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkgroup(request), context);
    } );
}

DeleteEndpointAccessOutcome RedshiftServerlessClient::DeleteEndpointAccess(const DeleteEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpointAccess(request), context);
    } );
}

DeleteNamespaceOutcome RedshiftServerlessClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNamespace(request), context);
    } );
}

DeleteResourcePolicyOutcome RedshiftServerlessClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeleteSnapshotOutcome RedshiftServerlessClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSnapshot(request), context);
    } );
}

DeleteUsageLimitOutcome RedshiftServerlessClient::DeleteUsageLimit(const DeleteUsageLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUsageLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUsageLimit(request), context);
    } );
}

DeleteWorkgroupOutcome RedshiftServerlessClient::DeleteWorkgroup(const DeleteWorkgroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWorkgroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkgroup(request), context);
    } );
}

GetCredentialsOutcome RedshiftServerlessClient::GetCredentials(const GetCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCredentials(request), context);
    } );
}

GetEndpointAccessOutcome RedshiftServerlessClient::GetEndpointAccess(const GetEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEndpointAccess(request), context);
    } );
}

GetNamespaceOutcome RedshiftServerlessClient::GetNamespace(const GetNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetNamespace(request), context);
    } );
}

GetRecoveryPointOutcome RedshiftServerlessClient::GetRecoveryPoint(const GetRecoveryPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRecoveryPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecoveryPoint(request), context);
    } );
}

GetResourcePolicyOutcome RedshiftServerlessClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourcePolicy(request), context);
    } );
}

GetSnapshotOutcome RedshiftServerlessClient::GetSnapshot(const GetSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSnapshot(request), context);
    } );
}

GetTableRestoreStatusOutcome RedshiftServerlessClient::GetTableRestoreStatus(const GetTableRestoreStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableRestoreStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableRestoreStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTableRestoreStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableRestoreStatusOutcomeCallable RedshiftServerlessClient::GetTableRestoreStatusCallable(const GetTableRestoreStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableRestoreStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableRestoreStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::GetTableRestoreStatusAsync(const GetTableRestoreStatusRequest& request, const GetTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTableRestoreStatus(request), context);
    } );
}

GetUsageLimitOutcome RedshiftServerlessClient::GetUsageLimit(const GetUsageLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUsageLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUsageLimit(request), context);
    } );
}

GetWorkgroupOutcome RedshiftServerlessClient::GetWorkgroup(const GetWorkgroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetWorkgroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkgroup(request), context);
    } );
}

ListEndpointAccessOutcome RedshiftServerlessClient::ListEndpointAccess(const ListEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEndpointAccess(request), context);
    } );
}

ListNamespacesOutcome RedshiftServerlessClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListNamespacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNamespaces(request), context);
    } );
}

ListRecoveryPointsOutcome RedshiftServerlessClient::ListRecoveryPoints(const ListRecoveryPointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecoveryPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecoveryPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRecoveryPointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecoveryPoints(request), context);
    } );
}

ListSnapshotsOutcome RedshiftServerlessClient::ListSnapshots(const ListSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSnapshots(request), context);
    } );
}

ListTableRestoreStatusOutcome RedshiftServerlessClient::ListTableRestoreStatus(const ListTableRestoreStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableRestoreStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableRestoreStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTableRestoreStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTableRestoreStatusOutcomeCallable RedshiftServerlessClient::ListTableRestoreStatusCallable(const ListTableRestoreStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTableRestoreStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTableRestoreStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::ListTableRestoreStatusAsync(const ListTableRestoreStatusRequest& request, const ListTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTableRestoreStatus(request), context);
    } );
}

ListTagsForResourceOutcome RedshiftServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListUsageLimitsOutcome RedshiftServerlessClient::ListUsageLimits(const ListUsageLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsageLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsageLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUsageLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUsageLimits(request), context);
    } );
}

ListWorkgroupsOutcome RedshiftServerlessClient::ListWorkgroups(const ListWorkgroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkgroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkgroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWorkgroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkgroups(request), context);
    } );
}

PutResourcePolicyOutcome RedshiftServerlessClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

RestoreFromRecoveryPointOutcome RedshiftServerlessClient::RestoreFromRecoveryPoint(const RestoreFromRecoveryPointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreFromRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreFromRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreFromRecoveryPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreFromRecoveryPoint(request), context);
    } );
}

RestoreFromSnapshotOutcome RedshiftServerlessClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreFromSnapshot(request), context);
    } );
}

RestoreTableFromSnapshotOutcome RedshiftServerlessClient::RestoreTableFromSnapshot(const RestoreTableFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreTableFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreTableFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreTableFromSnapshotOutcomeCallable RedshiftServerlessClient::RestoreTableFromSnapshotCallable(const RestoreTableFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreTableFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreTableFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RedshiftServerlessClient::RestoreTableFromSnapshotAsync(const RestoreTableFromSnapshotRequest& request, const RestoreTableFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreTableFromSnapshot(request), context);
    } );
}

TagResourceOutcome RedshiftServerlessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome RedshiftServerlessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateEndpointAccessOutcome RedshiftServerlessClient::UpdateEndpointAccess(const UpdateEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEndpointAccess(request), context);
    } );
}

UpdateNamespaceOutcome RedshiftServerlessClient::UpdateNamespace(const UpdateNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNamespace(request), context);
    } );
}

UpdateSnapshotOutcome RedshiftServerlessClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSnapshot(request), context);
    } );
}

UpdateUsageLimitOutcome RedshiftServerlessClient::UpdateUsageLimit(const UpdateUsageLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUsageLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUsageLimit(request), context);
    } );
}

UpdateWorkgroupOutcome RedshiftServerlessClient::UpdateWorkgroup(const UpdateWorkgroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkgroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateWorkgroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkgroup(request), context);
    } );
}

