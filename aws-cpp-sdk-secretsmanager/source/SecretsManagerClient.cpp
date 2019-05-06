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
#include <aws/secretsmanager/model/RestoreSecretRequest.h>
#include <aws/secretsmanager/model/RotateSecretRequest.h>
#include <aws/secretsmanager/model/TagResourceRequest.h>
#include <aws/secretsmanager/model/UntagResourceRequest.h>
#include <aws/secretsmanager/model/UpdateSecretRequest.h>
#include <aws/secretsmanager/model/UpdateSecretVersionStageRequest.h>

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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecretsManagerClient::~SecretsManagerClient()
{
}

void SecretsManagerClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelRotateSecretOutcome(CancelRotateSecretResult(outcome.GetResult()));
  }
  else
  {
    return CancelRotateSecretOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelRotateSecretAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::CancelRotateSecretAsyncHelper(const CancelRotateSecretRequest& request, const CancelRotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelRotateSecret(request), context);
}

CreateSecretOutcome SecretsManagerClient::CreateSecret(const CreateSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSecretOutcome(CreateSecretResult(outcome.GetResult()));
  }
  else
  {
    return CreateSecretOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateSecretAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::CreateSecretAsyncHelper(const CreateSecretRequest& request, const CreateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSecret(request), context);
}

DeleteResourcePolicyOutcome SecretsManagerClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteResourcePolicyOutcome(DeleteResourcePolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteResourcePolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::DeleteResourcePolicyAsyncHelper(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicy(request), context);
}

DeleteSecretOutcome SecretsManagerClient::DeleteSecret(const DeleteSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSecretOutcome(DeleteSecretResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSecretOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSecretAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::DeleteSecretAsyncHelper(const DeleteSecretRequest& request, const DeleteSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSecret(request), context);
}

DescribeSecretOutcome SecretsManagerClient::DescribeSecret(const DescribeSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSecretOutcome(DescribeSecretResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSecretOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSecretAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::DescribeSecretAsyncHelper(const DescribeSecretRequest& request, const DescribeSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecret(request), context);
}

GetRandomPasswordOutcome SecretsManagerClient::GetRandomPassword(const GetRandomPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRandomPasswordOutcome(GetRandomPasswordResult(outcome.GetResult()));
  }
  else
  {
    return GetRandomPasswordOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRandomPasswordAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::GetRandomPasswordAsyncHelper(const GetRandomPasswordRequest& request, const GetRandomPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRandomPassword(request), context);
}

GetResourcePolicyOutcome SecretsManagerClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetResourcePolicyOutcome(GetResourcePolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetResourcePolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcePolicyAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::GetResourcePolicyAsyncHelper(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourcePolicy(request), context);
}

GetSecretValueOutcome SecretsManagerClient::GetSecretValue(const GetSecretValueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSecretValueOutcome(GetSecretValueResult(outcome.GetResult()));
  }
  else
  {
    return GetSecretValueOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetSecretValueAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::GetSecretValueAsyncHelper(const GetSecretValueRequest& request, const GetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSecretValue(request), context);
}

ListSecretVersionIdsOutcome SecretsManagerClient::ListSecretVersionIds(const ListSecretVersionIdsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSecretVersionIdsOutcome(ListSecretVersionIdsResult(outcome.GetResult()));
  }
  else
  {
    return ListSecretVersionIdsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListSecretVersionIdsAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::ListSecretVersionIdsAsyncHelper(const ListSecretVersionIdsRequest& request, const ListSecretVersionIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecretVersionIds(request), context);
}

ListSecretsOutcome SecretsManagerClient::ListSecrets(const ListSecretsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSecretsOutcome(ListSecretsResult(outcome.GetResult()));
  }
  else
  {
    return ListSecretsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListSecretsAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::ListSecretsAsyncHelper(const ListSecretsRequest& request, const ListSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecrets(request), context);
}

PutResourcePolicyOutcome SecretsManagerClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutResourcePolicyOutcome(PutResourcePolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutResourcePolicyOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutResourcePolicyAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::PutResourcePolicyAsyncHelper(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResourcePolicy(request), context);
}

PutSecretValueOutcome SecretsManagerClient::PutSecretValue(const PutSecretValueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutSecretValueOutcome(PutSecretValueResult(outcome.GetResult()));
  }
  else
  {
    return PutSecretValueOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutSecretValueAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::PutSecretValueAsyncHelper(const PutSecretValueRequest& request, const PutSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSecretValue(request), context);
}

RestoreSecretOutcome SecretsManagerClient::RestoreSecret(const RestoreSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestoreSecretOutcome(RestoreSecretResult(outcome.GetResult()));
  }
  else
  {
    return RestoreSecretOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RestoreSecretAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::RestoreSecretAsyncHelper(const RestoreSecretRequest& request, const RestoreSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreSecret(request), context);
}

RotateSecretOutcome SecretsManagerClient::RotateSecret(const RotateSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RotateSecretOutcome(RotateSecretResult(outcome.GetResult()));
  }
  else
  {
    return RotateSecretOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RotateSecretAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::RotateSecretAsyncHelper(const RotateSecretRequest& request, const RotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RotateSecret(request), context);
}

TagResourceOutcome SecretsManagerClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SecretsManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateSecretOutcome SecretsManagerClient::UpdateSecret(const UpdateSecretRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSecretOutcome(UpdateSecretResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSecretOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSecretAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::UpdateSecretAsyncHelper(const UpdateSecretRequest& request, const UpdateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSecret(request), context);
}

UpdateSecretVersionStageOutcome SecretsManagerClient::UpdateSecretVersionStage(const UpdateSecretVersionStageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSecretVersionStageOutcome(UpdateSecretVersionStageResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSecretVersionStageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSecretVersionStageAsyncHelper( request, handler, context ); } );
}

void SecretsManagerClient::UpdateSecretVersionStageAsyncHelper(const UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSecretVersionStage(request), context);
}

