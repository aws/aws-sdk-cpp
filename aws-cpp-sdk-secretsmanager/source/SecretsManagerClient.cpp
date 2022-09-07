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

#include <aws/secretsmanager/SecretsManagerClient.h>
#include <aws/secretsmanager/SecretsManagerEndpoint.h>
#include <aws/secretsmanager/SecretsManagerErrorMarshaller.h>
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

static const char* SERVICE_NAME = "secretsmanager";
static const char* ALLOCATION_TAG = "SecretsManagerClient";

SecretsManagerClient::SecretsManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecretsManagerClient::~SecretsManagerClient()
{
}

void SecretsManagerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Secrets Manager");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SecretsManagerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SecretsManagerClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelRotateSecretOutcome SecretsManagerClient::CancelRotateSecret(const CancelRotateSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelRotateSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelRotateSecretOutcomeCallable SecretsManagerClient::CancelRotateSecretCallable(const CancelRotateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelRotateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelRotateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientCancelRotateSecretAsyncHelper(SecretsManagerClient const * const clientThis, const CancelRotateSecretRequest& request, const CancelRotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelRotateSecret(request), context);
}

void SecretsManagerClient::CancelRotateSecretAsync(const CancelRotateSecretRequest& request, const CancelRotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientCancelRotateSecretAsyncHelper( this, request, handler, context ); } );
}

CreateSecretOutcome SecretsManagerClient::CreateSecret(const CreateSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecretOutcomeCallable SecretsManagerClient::CreateSecretCallable(const CreateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientCreateSecretAsyncHelper(SecretsManagerClient const * const clientThis, const CreateSecretRequest& request, const CreateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSecret(request), context);
}

void SecretsManagerClient::CreateSecretAsync(const CreateSecretRequest& request, const CreateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientCreateSecretAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome SecretsManagerClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable SecretsManagerClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientDeleteResourcePolicyAsyncHelper(SecretsManagerClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void SecretsManagerClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteSecretOutcome SecretsManagerClient::DeleteSecret(const DeleteSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecretOutcomeCallable SecretsManagerClient::DeleteSecretCallable(const DeleteSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientDeleteSecretAsyncHelper(SecretsManagerClient const * const clientThis, const DeleteSecretRequest& request, const DeleteSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSecret(request), context);
}

void SecretsManagerClient::DeleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientDeleteSecretAsyncHelper( this, request, handler, context ); } );
}

DescribeSecretOutcome SecretsManagerClient::DescribeSecret(const DescribeSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecretOutcomeCallable SecretsManagerClient::DescribeSecretCallable(const DescribeSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientDescribeSecretAsyncHelper(SecretsManagerClient const * const clientThis, const DescribeSecretRequest& request, const DescribeSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSecret(request), context);
}

void SecretsManagerClient::DescribeSecretAsync(const DescribeSecretRequest& request, const DescribeSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientDescribeSecretAsyncHelper( this, request, handler, context ); } );
}

GetRandomPasswordOutcome SecretsManagerClient::GetRandomPassword(const GetRandomPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRandomPasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRandomPasswordOutcomeCallable SecretsManagerClient::GetRandomPasswordCallable(const GetRandomPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRandomPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRandomPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientGetRandomPasswordAsyncHelper(SecretsManagerClient const * const clientThis, const GetRandomPasswordRequest& request, const GetRandomPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRandomPassword(request), context);
}

void SecretsManagerClient::GetRandomPasswordAsync(const GetRandomPasswordRequest& request, const GetRandomPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientGetRandomPasswordAsyncHelper( this, request, handler, context ); } );
}

GetResourcePolicyOutcome SecretsManagerClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable SecretsManagerClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientGetResourcePolicyAsyncHelper(SecretsManagerClient const * const clientThis, const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicy(request), context);
}

void SecretsManagerClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientGetResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

GetSecretValueOutcome SecretsManagerClient::GetSecretValue(const GetSecretValueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSecretValueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSecretValueOutcomeCallable SecretsManagerClient::GetSecretValueCallable(const GetSecretValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSecretValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSecretValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientGetSecretValueAsyncHelper(SecretsManagerClient const * const clientThis, const GetSecretValueRequest& request, const GetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSecretValue(request), context);
}

void SecretsManagerClient::GetSecretValueAsync(const GetSecretValueRequest& request, const GetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientGetSecretValueAsyncHelper( this, request, handler, context ); } );
}

ListSecretVersionIdsOutcome SecretsManagerClient::ListSecretVersionIds(const ListSecretVersionIdsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSecretVersionIdsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecretVersionIdsOutcomeCallable SecretsManagerClient::ListSecretVersionIdsCallable(const ListSecretVersionIdsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecretVersionIdsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecretVersionIds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientListSecretVersionIdsAsyncHelper(SecretsManagerClient const * const clientThis, const ListSecretVersionIdsRequest& request, const ListSecretVersionIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSecretVersionIds(request), context);
}

void SecretsManagerClient::ListSecretVersionIdsAsync(const ListSecretVersionIdsRequest& request, const ListSecretVersionIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientListSecretVersionIdsAsyncHelper( this, request, handler, context ); } );
}

ListSecretsOutcome SecretsManagerClient::ListSecrets(const ListSecretsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSecretsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecretsOutcomeCallable SecretsManagerClient::ListSecretsCallable(const ListSecretsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecretsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecrets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientListSecretsAsyncHelper(SecretsManagerClient const * const clientThis, const ListSecretsRequest& request, const ListSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSecrets(request), context);
}

void SecretsManagerClient::ListSecretsAsync(const ListSecretsRequest& request, const ListSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientListSecretsAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome SecretsManagerClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable SecretsManagerClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientPutResourcePolicyAsyncHelper(SecretsManagerClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void SecretsManagerClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

PutSecretValueOutcome SecretsManagerClient::PutSecretValue(const PutSecretValueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutSecretValueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutSecretValueOutcomeCallable SecretsManagerClient::PutSecretValueCallable(const PutSecretValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSecretValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSecretValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientPutSecretValueAsyncHelper(SecretsManagerClient const * const clientThis, const PutSecretValueRequest& request, const PutSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutSecretValue(request), context);
}

void SecretsManagerClient::PutSecretValueAsync(const PutSecretValueRequest& request, const PutSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientPutSecretValueAsyncHelper( this, request, handler, context ); } );
}

RemoveRegionsFromReplicationOutcome SecretsManagerClient::RemoveRegionsFromReplication(const RemoveRegionsFromReplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveRegionsFromReplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveRegionsFromReplicationOutcomeCallable SecretsManagerClient::RemoveRegionsFromReplicationCallable(const RemoveRegionsFromReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRegionsFromReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRegionsFromReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientRemoveRegionsFromReplicationAsyncHelper(SecretsManagerClient const * const clientThis, const RemoveRegionsFromReplicationRequest& request, const RemoveRegionsFromReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveRegionsFromReplication(request), context);
}

void SecretsManagerClient::RemoveRegionsFromReplicationAsync(const RemoveRegionsFromReplicationRequest& request, const RemoveRegionsFromReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientRemoveRegionsFromReplicationAsyncHelper( this, request, handler, context ); } );
}

ReplicateSecretToRegionsOutcome SecretsManagerClient::ReplicateSecretToRegions(const ReplicateSecretToRegionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ReplicateSecretToRegionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReplicateSecretToRegionsOutcomeCallable SecretsManagerClient::ReplicateSecretToRegionsCallable(const ReplicateSecretToRegionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplicateSecretToRegionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplicateSecretToRegions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientReplicateSecretToRegionsAsyncHelper(SecretsManagerClient const * const clientThis, const ReplicateSecretToRegionsRequest& request, const ReplicateSecretToRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReplicateSecretToRegions(request), context);
}

void SecretsManagerClient::ReplicateSecretToRegionsAsync(const ReplicateSecretToRegionsRequest& request, const ReplicateSecretToRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientReplicateSecretToRegionsAsyncHelper( this, request, handler, context ); } );
}

RestoreSecretOutcome SecretsManagerClient::RestoreSecret(const RestoreSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreSecretOutcomeCallable SecretsManagerClient::RestoreSecretCallable(const RestoreSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientRestoreSecretAsyncHelper(SecretsManagerClient const * const clientThis, const RestoreSecretRequest& request, const RestoreSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreSecret(request), context);
}

void SecretsManagerClient::RestoreSecretAsync(const RestoreSecretRequest& request, const RestoreSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientRestoreSecretAsyncHelper( this, request, handler, context ); } );
}

RotateSecretOutcome SecretsManagerClient::RotateSecret(const RotateSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RotateSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RotateSecretOutcomeCallable SecretsManagerClient::RotateSecretCallable(const RotateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RotateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RotateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientRotateSecretAsyncHelper(SecretsManagerClient const * const clientThis, const RotateSecretRequest& request, const RotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RotateSecret(request), context);
}

void SecretsManagerClient::RotateSecretAsync(const RotateSecretRequest& request, const RotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientRotateSecretAsyncHelper( this, request, handler, context ); } );
}

StopReplicationToReplicaOutcome SecretsManagerClient::StopReplicationToReplica(const StopReplicationToReplicaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopReplicationToReplicaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopReplicationToReplicaOutcomeCallable SecretsManagerClient::StopReplicationToReplicaCallable(const StopReplicationToReplicaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopReplicationToReplicaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopReplicationToReplica(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientStopReplicationToReplicaAsyncHelper(SecretsManagerClient const * const clientThis, const StopReplicationToReplicaRequest& request, const StopReplicationToReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopReplicationToReplica(request), context);
}

void SecretsManagerClient::StopReplicationToReplicaAsync(const StopReplicationToReplicaRequest& request, const StopReplicationToReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientStopReplicationToReplicaAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome SecretsManagerClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SecretsManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientTagResourceAsyncHelper(SecretsManagerClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SecretsManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome SecretsManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SecretsManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientUntagResourceAsyncHelper(SecretsManagerClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SecretsManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateSecretOutcome SecretsManagerClient::UpdateSecret(const UpdateSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSecretOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecretOutcomeCallable SecretsManagerClient::UpdateSecretCallable(const UpdateSecretRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecretOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecret(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientUpdateSecretAsyncHelper(SecretsManagerClient const * const clientThis, const UpdateSecretRequest& request, const UpdateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSecret(request), context);
}

void SecretsManagerClient::UpdateSecretAsync(const UpdateSecretRequest& request, const UpdateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientUpdateSecretAsyncHelper( this, request, handler, context ); } );
}

UpdateSecretVersionStageOutcome SecretsManagerClient::UpdateSecretVersionStage(const UpdateSecretVersionStageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSecretVersionStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecretVersionStageOutcomeCallable SecretsManagerClient::UpdateSecretVersionStageCallable(const UpdateSecretVersionStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecretVersionStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecretVersionStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientUpdateSecretVersionStageAsyncHelper(SecretsManagerClient const * const clientThis, const UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSecretVersionStage(request), context);
}

void SecretsManagerClient::UpdateSecretVersionStageAsync(const UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientUpdateSecretVersionStageAsyncHelper( this, request, handler, context ); } );
}

ValidateResourcePolicyOutcome SecretsManagerClient::ValidateResourcePolicy(const ValidateResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ValidateResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateResourcePolicyOutcomeCallable SecretsManagerClient::ValidateResourcePolicyCallable(const ValidateResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecretsManagerClientValidateResourcePolicyAsyncHelper(SecretsManagerClient const * const clientThis, const ValidateResourcePolicyRequest& request, const ValidateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ValidateResourcePolicy(request), context);
}

void SecretsManagerClient::ValidateResourcePolicyAsync(const ValidateResourcePolicyRequest& request, const ValidateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SecretsManagerClientValidateResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

