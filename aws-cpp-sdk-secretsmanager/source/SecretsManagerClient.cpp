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

#include <aws/secretsmanager/SecretsManagerClient.h>
#include <aws/secretsmanager/SecretsManagerErrorMarshaller.h>
#include <aws/secretsmanager/SecretsManagerEndpointProvider.h>
#include <aws/secretsmanager/model/CancelRotateSecretRequest.h>
#include <aws/secretsmanager/model/CreateSecretRequest.h>
#include <aws/secretsmanager/model/DeleteResourcePolicyRequest.h>
#include <aws/secretsmanager/model/DeleteSecretRequest.h>
#include <aws/secretsmanager/model/DescribeSecretRequest.h>
#include <aws/secretsmanager/model/GetRandomPasswordRequest.h>
#include <aws/secretsmanager/model/GetResourcePolicyRequest.h>
#include <aws/secretsmanager/model/GetSecretValueRequest.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsRequest.h>
#include <aws/secretsmanager/model/ListSecretsRequest.h>
#include <aws/secretsmanager/model/PutResourcePolicyRequest.h>
#include <aws/secretsmanager/model/PutSecretValueRequest.h>
#include <aws/secretsmanager/model/RemoveRegionsFromReplicationRequest.h>
#include <aws/secretsmanager/model/ReplicateSecretToRegionsRequest.h>
#include <aws/secretsmanager/model/RestoreSecretRequest.h>
#include <aws/secretsmanager/model/RotateSecretRequest.h>
#include <aws/secretsmanager/model/StopReplicationToReplicaRequest.h>
#include <aws/secretsmanager/model/TagResourceRequest.h>
#include <aws/secretsmanager/model/UntagResourceRequest.h>
#include <aws/secretsmanager/model/UpdateSecretRequest.h>
#include <aws/secretsmanager/model/UpdateSecretVersionStageRequest.h>
#include <aws/secretsmanager/model/ValidateResourcePolicyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecretsManager;
using namespace Aws::SecretsManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SecretsManagerClient::SERVICE_NAME = "secretsmanager";
const char* SecretsManagerClient::ALLOCATION_TAG = "SecretsManagerClient";

SecretsManagerClient::SecretsManagerClient(const SecretsManager::SecretsManagerClientConfiguration& clientConfiguration,
                                           std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const AWSCredentials& credentials,
                                           std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider,
                                           const SecretsManager::SecretsManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider,
                                           const SecretsManager::SecretsManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SecretsManagerClient::SecretsManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SecretsManagerClient::~SecretsManagerClient()
{
}

std::shared_ptr<SecretsManagerEndpointProviderBase>& SecretsManagerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SecretsManagerClient::init(const SecretsManager::SecretsManagerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Secrets Manager");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SecretsManagerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelRotateSecretOutcome SecretsManagerClient::CancelRotateSecret(const CancelRotateSecretRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelRotateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelRotateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelRotateSecretOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelRotateSecretOutcomeCallable SecretsManagerClient::CancelRotateSecretCallable(const CancelRotateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelRotateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelRotateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::CancelRotateSecretAsync(const CancelRotateSecretRequest& request, const CancelRotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelRotateSecret(request), context);
    } );
}

CreateSecretOutcome SecretsManagerClient::CreateSecret(const CreateSecretRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSecretOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecretOutcomeCallable SecretsManagerClient::CreateSecretCallable(const CreateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::CreateSecretAsync(const CreateSecretRequest& request, const CreateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSecret(request), context);
    } );
}

DeleteResourcePolicyOutcome SecretsManagerClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable SecretsManagerClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeleteSecretOutcome SecretsManagerClient::DeleteSecret(const DeleteSecretRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSecretOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecretOutcomeCallable SecretsManagerClient::DeleteSecretCallable(const DeleteSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::DeleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSecret(request), context);
    } );
}

DescribeSecretOutcome SecretsManagerClient::DescribeSecret(const DescribeSecretRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecretOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecretOutcomeCallable SecretsManagerClient::DescribeSecretCallable(const DescribeSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::DescribeSecretAsync(const DescribeSecretRequest& request, const DescribeSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSecret(request), context);
    } );
}

GetRandomPasswordOutcome SecretsManagerClient::GetRandomPassword(const GetRandomPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRandomPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRandomPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRandomPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRandomPasswordOutcomeCallable SecretsManagerClient::GetRandomPasswordCallable(const GetRandomPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRandomPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRandomPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::GetRandomPasswordAsync(const GetRandomPasswordRequest& request, const GetRandomPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRandomPassword(request), context);
    } );
}

GetResourcePolicyOutcome SecretsManagerClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable SecretsManagerClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourcePolicy(request), context);
    } );
}

GetSecretValueOutcome SecretsManagerClient::GetSecretValue(const GetSecretValueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSecretValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSecretValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSecretValueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSecretValueOutcomeCallable SecretsManagerClient::GetSecretValueCallable(const GetSecretValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSecretValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSecretValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::GetSecretValueAsync(const GetSecretValueRequest& request, const GetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSecretValue(request), context);
    } );
}

ListSecretVersionIdsOutcome SecretsManagerClient::ListSecretVersionIds(const ListSecretVersionIdsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecretVersionIds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecretVersionIds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSecretVersionIdsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecretVersionIdsOutcomeCallable SecretsManagerClient::ListSecretVersionIdsCallable(const ListSecretVersionIdsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecretVersionIdsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecretVersionIds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::ListSecretVersionIdsAsync(const ListSecretVersionIdsRequest& request, const ListSecretVersionIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSecretVersionIds(request), context);
    } );
}

ListSecretsOutcome SecretsManagerClient::ListSecrets(const ListSecretsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecrets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecrets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSecretsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecretsOutcomeCallable SecretsManagerClient::ListSecretsCallable(const ListSecretsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecretsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecrets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::ListSecretsAsync(const ListSecretsRequest& request, const ListSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSecrets(request), context);
    } );
}

PutResourcePolicyOutcome SecretsManagerClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable SecretsManagerClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

PutSecretValueOutcome SecretsManagerClient::PutSecretValue(const PutSecretValueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSecretValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSecretValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutSecretValueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutSecretValueOutcomeCallable SecretsManagerClient::PutSecretValueCallable(const PutSecretValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSecretValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSecretValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::PutSecretValueAsync(const PutSecretValueRequest& request, const PutSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSecretValue(request), context);
    } );
}

RemoveRegionsFromReplicationOutcome SecretsManagerClient::RemoveRegionsFromReplication(const RemoveRegionsFromReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveRegionsFromReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveRegionsFromReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveRegionsFromReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveRegionsFromReplicationOutcomeCallable SecretsManagerClient::RemoveRegionsFromReplicationCallable(const RemoveRegionsFromReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRegionsFromReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRegionsFromReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::RemoveRegionsFromReplicationAsync(const RemoveRegionsFromReplicationRequest& request, const RemoveRegionsFromReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveRegionsFromReplication(request), context);
    } );
}

ReplicateSecretToRegionsOutcome SecretsManagerClient::ReplicateSecretToRegions(const ReplicateSecretToRegionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplicateSecretToRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplicateSecretToRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplicateSecretToRegionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReplicateSecretToRegionsOutcomeCallable SecretsManagerClient::ReplicateSecretToRegionsCallable(const ReplicateSecretToRegionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplicateSecretToRegionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplicateSecretToRegions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::ReplicateSecretToRegionsAsync(const ReplicateSecretToRegionsRequest& request, const ReplicateSecretToRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReplicateSecretToRegions(request), context);
    } );
}

RestoreSecretOutcome SecretsManagerClient::RestoreSecret(const RestoreSecretRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreSecretOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreSecretOutcomeCallable SecretsManagerClient::RestoreSecretCallable(const RestoreSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::RestoreSecretAsync(const RestoreSecretRequest& request, const RestoreSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreSecret(request), context);
    } );
}

RotateSecretOutcome SecretsManagerClient::RotateSecret(const RotateSecretRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RotateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RotateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RotateSecretOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RotateSecretOutcomeCallable SecretsManagerClient::RotateSecretCallable(const RotateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RotateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RotateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::RotateSecretAsync(const RotateSecretRequest& request, const RotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RotateSecret(request), context);
    } );
}

StopReplicationToReplicaOutcome SecretsManagerClient::StopReplicationToReplica(const StopReplicationToReplicaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopReplicationToReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopReplicationToReplica, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopReplicationToReplicaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopReplicationToReplicaOutcomeCallable SecretsManagerClient::StopReplicationToReplicaCallable(const StopReplicationToReplicaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopReplicationToReplicaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopReplicationToReplica(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::StopReplicationToReplicaAsync(const StopReplicationToReplicaRequest& request, const StopReplicationToReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopReplicationToReplica(request), context);
    } );
}

TagResourceOutcome SecretsManagerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SecretsManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome SecretsManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SecretsManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateSecretOutcome SecretsManagerClient::UpdateSecret(const UpdateSecretRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecret, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecretOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecretOutcomeCallable SecretsManagerClient::UpdateSecretCallable(const UpdateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::UpdateSecretAsync(const UpdateSecretRequest& request, const UpdateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSecret(request), context);
    } );
}

UpdateSecretVersionStageOutcome SecretsManagerClient::UpdateSecretVersionStage(const UpdateSecretVersionStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecretVersionStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecretVersionStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecretVersionStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecretVersionStageOutcomeCallable SecretsManagerClient::UpdateSecretVersionStageCallable(const UpdateSecretVersionStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecretVersionStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecretVersionStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::UpdateSecretVersionStageAsync(const UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSecretVersionStage(request), context);
    } );
}

ValidateResourcePolicyOutcome SecretsManagerClient::ValidateResourcePolicy(const ValidateResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ValidateResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateResourcePolicyOutcomeCallable SecretsManagerClient::ValidateResourcePolicyCallable(const ValidateResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClient::ValidateResourcePolicyAsync(const ValidateResourcePolicyRequest& request, const ValidateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidateResourcePolicy(request), context);
    } );
}

