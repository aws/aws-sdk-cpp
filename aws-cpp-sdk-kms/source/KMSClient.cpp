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

#include <aws/kms/KMSClient.h>
#include <aws/kms/KMSEndpoint.h>
#include <aws/kms/KMSErrorMarshaller.h>
#include <aws/kms/model/CancelKeyDeletionRequest.h>
#include <aws/kms/model/ConnectCustomKeyStoreRequest.h>
#include <aws/kms/model/CreateAliasRequest.h>
#include <aws/kms/model/CreateCustomKeyStoreRequest.h>
#include <aws/kms/model/CreateGrantRequest.h>
#include <aws/kms/model/CreateKeyRequest.h>
#include <aws/kms/model/DecryptRequest.h>
#include <aws/kms/model/DeleteAliasRequest.h>
#include <aws/kms/model/DeleteCustomKeyStoreRequest.h>
#include <aws/kms/model/DeleteImportedKeyMaterialRequest.h>
#include <aws/kms/model/DescribeCustomKeyStoresRequest.h>
#include <aws/kms/model/DescribeKeyRequest.h>
#include <aws/kms/model/DisableKeyRequest.h>
#include <aws/kms/model/DisableKeyRotationRequest.h>
#include <aws/kms/model/DisconnectCustomKeyStoreRequest.h>
#include <aws/kms/model/EnableKeyRequest.h>
#include <aws/kms/model/EnableKeyRotationRequest.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/GenerateDataKeyRequest.h>
#include <aws/kms/model/GenerateDataKeyWithoutPlaintextRequest.h>
#include <aws/kms/model/GenerateRandomRequest.h>
#include <aws/kms/model/GetKeyPolicyRequest.h>
#include <aws/kms/model/GetKeyRotationStatusRequest.h>
#include <aws/kms/model/GetParametersForImportRequest.h>
#include <aws/kms/model/ImportKeyMaterialRequest.h>
#include <aws/kms/model/ListAliasesRequest.h>
#include <aws/kms/model/ListGrantsRequest.h>
#include <aws/kms/model/ListKeyPoliciesRequest.h>
#include <aws/kms/model/ListKeysRequest.h>
#include <aws/kms/model/ListResourceTagsRequest.h>
#include <aws/kms/model/ListRetirableGrantsRequest.h>
#include <aws/kms/model/PutKeyPolicyRequest.h>
#include <aws/kms/model/ReEncryptRequest.h>
#include <aws/kms/model/RetireGrantRequest.h>
#include <aws/kms/model/RevokeGrantRequest.h>
#include <aws/kms/model/ScheduleKeyDeletionRequest.h>
#include <aws/kms/model/TagResourceRequest.h>
#include <aws/kms/model/UntagResourceRequest.h>
#include <aws/kms/model/UpdateAliasRequest.h>
#include <aws/kms/model/UpdateCustomKeyStoreRequest.h>
#include <aws/kms/model/UpdateKeyDescriptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kms";
static const char* ALLOCATION_TAG = "KMSClient";


KMSClient::KMSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::KMSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::KMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::~KMSClient()
{
}

void KMSClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KMSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KMSClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelKeyDeletionOutcome KMSClient::CancelKeyDeletion(const CancelKeyDeletionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelKeyDeletionOutcome(CancelKeyDeletionResult(outcome.GetResult()));
  }
  else
  {
    return CancelKeyDeletionOutcome(outcome.GetError());
  }
}

CancelKeyDeletionOutcomeCallable KMSClient::CancelKeyDeletionCallable(const CancelKeyDeletionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelKeyDeletionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelKeyDeletion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::CancelKeyDeletionAsync(const CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelKeyDeletionAsyncHelper( request, handler, context ); } );
}

void KMSClient::CancelKeyDeletionAsyncHelper(const CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelKeyDeletion(request), context);
}

ConnectCustomKeyStoreOutcome KMSClient::ConnectCustomKeyStore(const ConnectCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ConnectCustomKeyStoreOutcome(ConnectCustomKeyStoreResult(outcome.GetResult()));
  }
  else
  {
    return ConnectCustomKeyStoreOutcome(outcome.GetError());
  }
}

ConnectCustomKeyStoreOutcomeCallable KMSClient::ConnectCustomKeyStoreCallable(const ConnectCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConnectCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConnectCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ConnectCustomKeyStoreAsync(const ConnectCustomKeyStoreRequest& request, const ConnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConnectCustomKeyStoreAsyncHelper( request, handler, context ); } );
}

void KMSClient::ConnectCustomKeyStoreAsyncHelper(const ConnectCustomKeyStoreRequest& request, const ConnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConnectCustomKeyStore(request), context);
}

CreateAliasOutcome KMSClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAliasOutcome(NoResult());
  }
  else
  {
    return CreateAliasOutcome(outcome.GetError());
  }
}

CreateAliasOutcomeCallable KMSClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAliasAsyncHelper( request, handler, context ); } );
}

void KMSClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateCustomKeyStoreOutcome KMSClient::CreateCustomKeyStore(const CreateCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCustomKeyStoreOutcome(CreateCustomKeyStoreResult(outcome.GetResult()));
  }
  else
  {
    return CreateCustomKeyStoreOutcome(outcome.GetError());
  }
}

CreateCustomKeyStoreOutcomeCallable KMSClient::CreateCustomKeyStoreCallable(const CreateCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::CreateCustomKeyStoreAsync(const CreateCustomKeyStoreRequest& request, const CreateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomKeyStoreAsyncHelper( request, handler, context ); } );
}

void KMSClient::CreateCustomKeyStoreAsyncHelper(const CreateCustomKeyStoreRequest& request, const CreateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomKeyStore(request), context);
}

CreateGrantOutcome KMSClient::CreateGrant(const CreateGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGrantOutcome(CreateGrantResult(outcome.GetResult()));
  }
  else
  {
    return CreateGrantOutcome(outcome.GetError());
  }
}

CreateGrantOutcomeCallable KMSClient::CreateGrantCallable(const CreateGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::CreateGrantAsync(const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGrantAsyncHelper( request, handler, context ); } );
}

void KMSClient::CreateGrantAsyncHelper(const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGrant(request), context);
}

CreateKeyOutcome KMSClient::CreateKey(const CreateKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateKeyOutcome(CreateKeyResult(outcome.GetResult()));
  }
  else
  {
    return CreateKeyOutcome(outcome.GetError());
  }
}

CreateKeyOutcomeCallable KMSClient::CreateKeyCallable(const CreateKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::CreateKeyAsync(const CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateKeyAsyncHelper( request, handler, context ); } );
}

void KMSClient::CreateKeyAsyncHelper(const CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKey(request), context);
}

DecryptOutcome KMSClient::Decrypt(const DecryptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DecryptOutcome(DecryptResult(outcome.GetResult()));
  }
  else
  {
    return DecryptOutcome(outcome.GetError());
  }
}

DecryptOutcomeCallable KMSClient::DecryptCallable(const DecryptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecryptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Decrypt(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DecryptAsync(const DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DecryptAsyncHelper( request, handler, context ); } );
}

void KMSClient::DecryptAsyncHelper(const DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Decrypt(request), context);
}

DeleteAliasOutcome KMSClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAliasOutcome(NoResult());
  }
  else
  {
    return DeleteAliasOutcome(outcome.GetError());
  }
}

DeleteAliasOutcomeCallable KMSClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAliasAsyncHelper( request, handler, context ); } );
}

void KMSClient::DeleteAliasAsyncHelper(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlias(request), context);
}

DeleteCustomKeyStoreOutcome KMSClient::DeleteCustomKeyStore(const DeleteCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCustomKeyStoreOutcome(DeleteCustomKeyStoreResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCustomKeyStoreOutcome(outcome.GetError());
  }
}

DeleteCustomKeyStoreOutcomeCallable KMSClient::DeleteCustomKeyStoreCallable(const DeleteCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DeleteCustomKeyStoreAsync(const DeleteCustomKeyStoreRequest& request, const DeleteCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomKeyStoreAsyncHelper( request, handler, context ); } );
}

void KMSClient::DeleteCustomKeyStoreAsyncHelper(const DeleteCustomKeyStoreRequest& request, const DeleteCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomKeyStore(request), context);
}

DeleteImportedKeyMaterialOutcome KMSClient::DeleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteImportedKeyMaterialOutcome(NoResult());
  }
  else
  {
    return DeleteImportedKeyMaterialOutcome(outcome.GetError());
  }
}

DeleteImportedKeyMaterialOutcomeCallable KMSClient::DeleteImportedKeyMaterialCallable(const DeleteImportedKeyMaterialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImportedKeyMaterialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImportedKeyMaterial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DeleteImportedKeyMaterialAsync(const DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteImportedKeyMaterialAsyncHelper( request, handler, context ); } );
}

void KMSClient::DeleteImportedKeyMaterialAsyncHelper(const DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteImportedKeyMaterial(request), context);
}

DescribeCustomKeyStoresOutcome KMSClient::DescribeCustomKeyStores(const DescribeCustomKeyStoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCustomKeyStoresOutcome(DescribeCustomKeyStoresResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCustomKeyStoresOutcome(outcome.GetError());
  }
}

DescribeCustomKeyStoresOutcomeCallable KMSClient::DescribeCustomKeyStoresCallable(const DescribeCustomKeyStoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomKeyStoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomKeyStores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DescribeCustomKeyStoresAsync(const DescribeCustomKeyStoresRequest& request, const DescribeCustomKeyStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCustomKeyStoresAsyncHelper( request, handler, context ); } );
}

void KMSClient::DescribeCustomKeyStoresAsyncHelper(const DescribeCustomKeyStoresRequest& request, const DescribeCustomKeyStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCustomKeyStores(request), context);
}

DescribeKeyOutcome KMSClient::DescribeKey(const DescribeKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeKeyOutcome(DescribeKeyResult(outcome.GetResult()));
  }
  else
  {
    return DescribeKeyOutcome(outcome.GetError());
  }
}

DescribeKeyOutcomeCallable KMSClient::DescribeKeyCallable(const DescribeKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DescribeKeyAsync(const DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeKeyAsyncHelper( request, handler, context ); } );
}

void KMSClient::DescribeKeyAsyncHelper(const DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeKey(request), context);
}

DisableKeyOutcome KMSClient::DisableKey(const DisableKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableKeyOutcome(NoResult());
  }
  else
  {
    return DisableKeyOutcome(outcome.GetError());
  }
}

DisableKeyOutcomeCallable KMSClient::DisableKeyCallable(const DisableKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DisableKeyAsync(const DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableKeyAsyncHelper( request, handler, context ); } );
}

void KMSClient::DisableKeyAsyncHelper(const DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableKey(request), context);
}

DisableKeyRotationOutcome KMSClient::DisableKeyRotation(const DisableKeyRotationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableKeyRotationOutcome(NoResult());
  }
  else
  {
    return DisableKeyRotationOutcome(outcome.GetError());
  }
}

DisableKeyRotationOutcomeCallable KMSClient::DisableKeyRotationCallable(const DisableKeyRotationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableKeyRotationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableKeyRotation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DisableKeyRotationAsync(const DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableKeyRotationAsyncHelper( request, handler, context ); } );
}

void KMSClient::DisableKeyRotationAsyncHelper(const DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableKeyRotation(request), context);
}

DisconnectCustomKeyStoreOutcome KMSClient::DisconnectCustomKeyStore(const DisconnectCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisconnectCustomKeyStoreOutcome(DisconnectCustomKeyStoreResult(outcome.GetResult()));
  }
  else
  {
    return DisconnectCustomKeyStoreOutcome(outcome.GetError());
  }
}

DisconnectCustomKeyStoreOutcomeCallable KMSClient::DisconnectCustomKeyStoreCallable(const DisconnectCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::DisconnectCustomKeyStoreAsync(const DisconnectCustomKeyStoreRequest& request, const DisconnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisconnectCustomKeyStoreAsyncHelper( request, handler, context ); } );
}

void KMSClient::DisconnectCustomKeyStoreAsyncHelper(const DisconnectCustomKeyStoreRequest& request, const DisconnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisconnectCustomKeyStore(request), context);
}

EnableKeyOutcome KMSClient::EnableKey(const EnableKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableKeyOutcome(NoResult());
  }
  else
  {
    return EnableKeyOutcome(outcome.GetError());
  }
}

EnableKeyOutcomeCallable KMSClient::EnableKeyCallable(const EnableKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::EnableKeyAsync(const EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableKeyAsyncHelper( request, handler, context ); } );
}

void KMSClient::EnableKeyAsyncHelper(const EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableKey(request), context);
}

EnableKeyRotationOutcome KMSClient::EnableKeyRotation(const EnableKeyRotationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableKeyRotationOutcome(NoResult());
  }
  else
  {
    return EnableKeyRotationOutcome(outcome.GetError());
  }
}

EnableKeyRotationOutcomeCallable KMSClient::EnableKeyRotationCallable(const EnableKeyRotationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableKeyRotationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableKeyRotation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::EnableKeyRotationAsync(const EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableKeyRotationAsyncHelper( request, handler, context ); } );
}

void KMSClient::EnableKeyRotationAsyncHelper(const EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableKeyRotation(request), context);
}

EncryptOutcome KMSClient::Encrypt(const EncryptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EncryptOutcome(EncryptResult(outcome.GetResult()));
  }
  else
  {
    return EncryptOutcome(outcome.GetError());
  }
}

EncryptOutcomeCallable KMSClient::EncryptCallable(const EncryptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EncryptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Encrypt(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::EncryptAsync(const EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EncryptAsyncHelper( request, handler, context ); } );
}

void KMSClient::EncryptAsyncHelper(const EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Encrypt(request), context);
}

GenerateDataKeyOutcome KMSClient::GenerateDataKey(const GenerateDataKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GenerateDataKeyOutcome(GenerateDataKeyResult(outcome.GetResult()));
  }
  else
  {
    return GenerateDataKeyOutcome(outcome.GetError());
  }
}

GenerateDataKeyOutcomeCallable KMSClient::GenerateDataKeyCallable(const GenerateDataKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GenerateDataKeyAsync(const GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateDataKeyAsyncHelper( request, handler, context ); } );
}

void KMSClient::GenerateDataKeyAsyncHelper(const GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateDataKey(request), context);
}

GenerateDataKeyWithoutPlaintextOutcome KMSClient::GenerateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GenerateDataKeyWithoutPlaintextOutcome(GenerateDataKeyWithoutPlaintextResult(outcome.GetResult()));
  }
  else
  {
    return GenerateDataKeyWithoutPlaintextOutcome(outcome.GetError());
  }
}

GenerateDataKeyWithoutPlaintextOutcomeCallable KMSClient::GenerateDataKeyWithoutPlaintextCallable(const GenerateDataKeyWithoutPlaintextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyWithoutPlaintextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKeyWithoutPlaintext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GenerateDataKeyWithoutPlaintextAsync(const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateDataKeyWithoutPlaintextAsyncHelper( request, handler, context ); } );
}

void KMSClient::GenerateDataKeyWithoutPlaintextAsyncHelper(const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateDataKeyWithoutPlaintext(request), context);
}

GenerateRandomOutcome KMSClient::GenerateRandom(const GenerateRandomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GenerateRandomOutcome(GenerateRandomResult(outcome.GetResult()));
  }
  else
  {
    return GenerateRandomOutcome(outcome.GetError());
  }
}

GenerateRandomOutcomeCallable KMSClient::GenerateRandomCallable(const GenerateRandomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateRandomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateRandom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GenerateRandomAsync(const GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateRandomAsyncHelper( request, handler, context ); } );
}

void KMSClient::GenerateRandomAsyncHelper(const GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateRandom(request), context);
}

GetKeyPolicyOutcome KMSClient::GetKeyPolicy(const GetKeyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetKeyPolicyOutcome(GetKeyPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetKeyPolicyOutcome(outcome.GetError());
  }
}

GetKeyPolicyOutcomeCallable KMSClient::GetKeyPolicyCallable(const GetKeyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GetKeyPolicyAsync(const GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetKeyPolicyAsyncHelper( request, handler, context ); } );
}

void KMSClient::GetKeyPolicyAsyncHelper(const GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyPolicy(request), context);
}

GetKeyRotationStatusOutcome KMSClient::GetKeyRotationStatus(const GetKeyRotationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetKeyRotationStatusOutcome(GetKeyRotationStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetKeyRotationStatusOutcome(outcome.GetError());
  }
}

GetKeyRotationStatusOutcomeCallable KMSClient::GetKeyRotationStatusCallable(const GetKeyRotationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyRotationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyRotationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GetKeyRotationStatusAsync(const GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetKeyRotationStatusAsyncHelper( request, handler, context ); } );
}

void KMSClient::GetKeyRotationStatusAsyncHelper(const GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyRotationStatus(request), context);
}

GetParametersForImportOutcome KMSClient::GetParametersForImport(const GetParametersForImportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetParametersForImportOutcome(GetParametersForImportResult(outcome.GetResult()));
  }
  else
  {
    return GetParametersForImportOutcome(outcome.GetError());
  }
}

GetParametersForImportOutcomeCallable KMSClient::GetParametersForImportCallable(const GetParametersForImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParametersForImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParametersForImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GetParametersForImportAsync(const GetParametersForImportRequest& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetParametersForImportAsyncHelper( request, handler, context ); } );
}

void KMSClient::GetParametersForImportAsyncHelper(const GetParametersForImportRequest& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetParametersForImport(request), context);
}

ImportKeyMaterialOutcome KMSClient::ImportKeyMaterial(const ImportKeyMaterialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportKeyMaterialOutcome(ImportKeyMaterialResult(outcome.GetResult()));
  }
  else
  {
    return ImportKeyMaterialOutcome(outcome.GetError());
  }
}

ImportKeyMaterialOutcomeCallable KMSClient::ImportKeyMaterialCallable(const ImportKeyMaterialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportKeyMaterialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportKeyMaterial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ImportKeyMaterialAsync(const ImportKeyMaterialRequest& request, const ImportKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportKeyMaterialAsyncHelper( request, handler, context ); } );
}

void KMSClient::ImportKeyMaterialAsyncHelper(const ImportKeyMaterialRequest& request, const ImportKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportKeyMaterial(request), context);
}

ListAliasesOutcome KMSClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAliasesOutcome(ListAliasesResult(outcome.GetResult()));
  }
  else
  {
    return ListAliasesOutcome(outcome.GetError());
  }
}

ListAliasesOutcomeCallable KMSClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAliasesAsyncHelper( request, handler, context ); } );
}

void KMSClient::ListAliasesAsyncHelper(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAliases(request), context);
}

ListGrantsOutcome KMSClient::ListGrants(const ListGrantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGrantsOutcome(ListGrantsResult(outcome.GetResult()));
  }
  else
  {
    return ListGrantsOutcome(outcome.GetError());
  }
}

ListGrantsOutcomeCallable KMSClient::ListGrantsCallable(const ListGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ListGrantsAsync(const ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGrantsAsyncHelper( request, handler, context ); } );
}

void KMSClient::ListGrantsAsyncHelper(const ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGrants(request), context);
}

ListKeyPoliciesOutcome KMSClient::ListKeyPolicies(const ListKeyPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListKeyPoliciesOutcome(ListKeyPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListKeyPoliciesOutcome(outcome.GetError());
  }
}

ListKeyPoliciesOutcomeCallable KMSClient::ListKeyPoliciesCallable(const ListKeyPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeyPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeyPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ListKeyPoliciesAsync(const ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListKeyPoliciesAsyncHelper( request, handler, context ); } );
}

void KMSClient::ListKeyPoliciesAsyncHelper(const ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeyPolicies(request), context);
}

ListKeysOutcome KMSClient::ListKeys(const ListKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListKeysOutcome(ListKeysResult(outcome.GetResult()));
  }
  else
  {
    return ListKeysOutcome(outcome.GetError());
  }
}

ListKeysOutcomeCallable KMSClient::ListKeysCallable(const ListKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ListKeysAsync(const ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListKeysAsyncHelper( request, handler, context ); } );
}

void KMSClient::ListKeysAsyncHelper(const ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeys(request), context);
}

ListResourceTagsOutcome KMSClient::ListResourceTags(const ListResourceTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResourceTagsOutcome(ListResourceTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListResourceTagsOutcome(outcome.GetError());
  }
}

ListResourceTagsOutcomeCallable KMSClient::ListResourceTagsCallable(const ListResourceTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ListResourceTagsAsync(const ListResourceTagsRequest& request, const ListResourceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceTagsAsyncHelper( request, handler, context ); } );
}

void KMSClient::ListResourceTagsAsyncHelper(const ListResourceTagsRequest& request, const ListResourceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceTags(request), context);
}

ListRetirableGrantsOutcome KMSClient::ListRetirableGrants(const ListRetirableGrantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRetirableGrantsOutcome(ListRetirableGrantsResult(outcome.GetResult()));
  }
  else
  {
    return ListRetirableGrantsOutcome(outcome.GetError());
  }
}

ListRetirableGrantsOutcomeCallable KMSClient::ListRetirableGrantsCallable(const ListRetirableGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRetirableGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRetirableGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ListRetirableGrantsAsync(const ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRetirableGrantsAsyncHelper( request, handler, context ); } );
}

void KMSClient::ListRetirableGrantsAsyncHelper(const ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRetirableGrants(request), context);
}

PutKeyPolicyOutcome KMSClient::PutKeyPolicy(const PutKeyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutKeyPolicyOutcome(NoResult());
  }
  else
  {
    return PutKeyPolicyOutcome(outcome.GetError());
  }
}

PutKeyPolicyOutcomeCallable KMSClient::PutKeyPolicyCallable(const PutKeyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutKeyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutKeyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::PutKeyPolicyAsync(const PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutKeyPolicyAsyncHelper( request, handler, context ); } );
}

void KMSClient::PutKeyPolicyAsyncHelper(const PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutKeyPolicy(request), context);
}

ReEncryptOutcome KMSClient::ReEncrypt(const ReEncryptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ReEncryptOutcome(ReEncryptResult(outcome.GetResult()));
  }
  else
  {
    return ReEncryptOutcome(outcome.GetError());
  }
}

ReEncryptOutcomeCallable KMSClient::ReEncryptCallable(const ReEncryptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReEncryptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReEncrypt(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ReEncryptAsync(const ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReEncryptAsyncHelper( request, handler, context ); } );
}

void KMSClient::ReEncryptAsyncHelper(const ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReEncrypt(request), context);
}

RetireGrantOutcome KMSClient::RetireGrant(const RetireGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RetireGrantOutcome(NoResult());
  }
  else
  {
    return RetireGrantOutcome(outcome.GetError());
  }
}

RetireGrantOutcomeCallable KMSClient::RetireGrantCallable(const RetireGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetireGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetireGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::RetireGrantAsync(const RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RetireGrantAsyncHelper( request, handler, context ); } );
}

void KMSClient::RetireGrantAsyncHelper(const RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetireGrant(request), context);
}

RevokeGrantOutcome KMSClient::RevokeGrant(const RevokeGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RevokeGrantOutcome(NoResult());
  }
  else
  {
    return RevokeGrantOutcome(outcome.GetError());
  }
}

RevokeGrantOutcomeCallable KMSClient::RevokeGrantCallable(const RevokeGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::RevokeGrantAsync(const RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeGrantAsyncHelper( request, handler, context ); } );
}

void KMSClient::RevokeGrantAsyncHelper(const RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeGrant(request), context);
}

ScheduleKeyDeletionOutcome KMSClient::ScheduleKeyDeletion(const ScheduleKeyDeletionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ScheduleKeyDeletionOutcome(ScheduleKeyDeletionResult(outcome.GetResult()));
  }
  else
  {
    return ScheduleKeyDeletionOutcome(outcome.GetError());
  }
}

ScheduleKeyDeletionOutcomeCallable KMSClient::ScheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScheduleKeyDeletionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ScheduleKeyDeletion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ScheduleKeyDeletionAsync(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ScheduleKeyDeletionAsyncHelper( request, handler, context ); } );
}

void KMSClient::ScheduleKeyDeletionAsyncHelper(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ScheduleKeyDeletion(request), context);
}

TagResourceOutcome KMSClient::TagResource(const TagResourceRequest& request) const
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

TagResourceOutcomeCallable KMSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void KMSClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome KMSClient::UntagResource(const UntagResourceRequest& request) const
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

UntagResourceOutcomeCallable KMSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void KMSClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAliasOutcome KMSClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAliasOutcome(NoResult());
  }
  else
  {
    return UpdateAliasOutcome(outcome.GetError());
  }
}

UpdateAliasOutcomeCallable KMSClient::UpdateAliasCallable(const UpdateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAliasAsyncHelper( request, handler, context ); } );
}

void KMSClient::UpdateAliasAsyncHelper(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAlias(request), context);
}

UpdateCustomKeyStoreOutcome KMSClient::UpdateCustomKeyStore(const UpdateCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCustomKeyStoreOutcome(UpdateCustomKeyStoreResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCustomKeyStoreOutcome(outcome.GetError());
  }
}

UpdateCustomKeyStoreOutcomeCallable KMSClient::UpdateCustomKeyStoreCallable(const UpdateCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::UpdateCustomKeyStoreAsync(const UpdateCustomKeyStoreRequest& request, const UpdateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCustomKeyStoreAsyncHelper( request, handler, context ); } );
}

void KMSClient::UpdateCustomKeyStoreAsyncHelper(const UpdateCustomKeyStoreRequest& request, const UpdateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCustomKeyStore(request), context);
}

UpdateKeyDescriptionOutcome KMSClient::UpdateKeyDescription(const UpdateKeyDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateKeyDescriptionOutcome(NoResult());
  }
  else
  {
    return UpdateKeyDescriptionOutcome(outcome.GetError());
  }
}

UpdateKeyDescriptionOutcomeCallable KMSClient::UpdateKeyDescriptionCallable(const UpdateKeyDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateKeyDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateKeyDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::UpdateKeyDescriptionAsync(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateKeyDescriptionAsyncHelper( request, handler, context ); } );
}

void KMSClient::UpdateKeyDescriptionAsyncHelper(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateKeyDescription(request), context);
}

