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
#include <aws/kms/model/GenerateDataKeyPairRequest.h>
#include <aws/kms/model/GenerateDataKeyPairWithoutPlaintextRequest.h>
#include <aws/kms/model/GenerateDataKeyWithoutPlaintextRequest.h>
#include <aws/kms/model/GenerateMacRequest.h>
#include <aws/kms/model/GenerateRandomRequest.h>
#include <aws/kms/model/GetKeyPolicyRequest.h>
#include <aws/kms/model/GetKeyRotationStatusRequest.h>
#include <aws/kms/model/GetParametersForImportRequest.h>
#include <aws/kms/model/GetPublicKeyRequest.h>
#include <aws/kms/model/ImportKeyMaterialRequest.h>
#include <aws/kms/model/ListAliasesRequest.h>
#include <aws/kms/model/ListGrantsRequest.h>
#include <aws/kms/model/ListKeyPoliciesRequest.h>
#include <aws/kms/model/ListKeysRequest.h>
#include <aws/kms/model/ListResourceTagsRequest.h>
#include <aws/kms/model/ListRetirableGrantsRequest.h>
#include <aws/kms/model/PutKeyPolicyRequest.h>
#include <aws/kms/model/ReEncryptRequest.h>
#include <aws/kms/model/ReplicateKeyRequest.h>
#include <aws/kms/model/RetireGrantRequest.h>
#include <aws/kms/model/RevokeGrantRequest.h>
#include <aws/kms/model/ScheduleKeyDeletionRequest.h>
#include <aws/kms/model/SignRequest.h>
#include <aws/kms/model/TagResourceRequest.h>
#include <aws/kms/model/UntagResourceRequest.h>
#include <aws/kms/model/UpdateAliasRequest.h>
#include <aws/kms/model/UpdateCustomKeyStoreRequest.h>
#include <aws/kms/model/UpdateKeyDescriptionRequest.h>
#include <aws/kms/model/UpdatePrimaryRegionRequest.h>
#include <aws/kms/model/VerifyRequest.h>
#include <aws/kms/model/VerifyMacRequest.h>

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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::KMSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::KMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::~KMSClient()
{
}

void KMSClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("KMS");
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
  return CancelKeyDeletionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelKeyDeletionOutcomeCallable KMSClient::CancelKeyDeletionCallable(const CancelKeyDeletionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelKeyDeletionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelKeyDeletion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientCancelKeyDeletionAsyncHelper(KMSClient const * const clientThis, const CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelKeyDeletion(request), context);
}

void KMSClient::CancelKeyDeletionAsync(const CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientCancelKeyDeletionAsyncHelper( this, request, handler, context ); } );
}

ConnectCustomKeyStoreOutcome KMSClient::ConnectCustomKeyStore(const ConnectCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ConnectCustomKeyStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ConnectCustomKeyStoreOutcomeCallable KMSClient::ConnectCustomKeyStoreCallable(const ConnectCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConnectCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConnectCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientConnectCustomKeyStoreAsyncHelper(KMSClient const * const clientThis, const ConnectCustomKeyStoreRequest& request, const ConnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ConnectCustomKeyStore(request), context);
}

void KMSClient::ConnectCustomKeyStoreAsync(const ConnectCustomKeyStoreRequest& request, const ConnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientConnectCustomKeyStoreAsyncHelper( this, request, handler, context ); } );
}

CreateAliasOutcome KMSClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAliasOutcomeCallable KMSClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientCreateAliasAsyncHelper(KMSClient const * const clientThis, const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAlias(request), context);
}

void KMSClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientCreateAliasAsyncHelper( this, request, handler, context ); } );
}

CreateCustomKeyStoreOutcome KMSClient::CreateCustomKeyStore(const CreateCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomKeyStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomKeyStoreOutcomeCallable KMSClient::CreateCustomKeyStoreCallable(const CreateCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientCreateCustomKeyStoreAsyncHelper(KMSClient const * const clientThis, const CreateCustomKeyStoreRequest& request, const CreateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomKeyStore(request), context);
}

void KMSClient::CreateCustomKeyStoreAsync(const CreateCustomKeyStoreRequest& request, const CreateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientCreateCustomKeyStoreAsyncHelper( this, request, handler, context ); } );
}

CreateGrantOutcome KMSClient::CreateGrant(const CreateGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGrantOutcomeCallable KMSClient::CreateGrantCallable(const CreateGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientCreateGrantAsyncHelper(KMSClient const * const clientThis, const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGrant(request), context);
}

void KMSClient::CreateGrantAsync(const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientCreateGrantAsyncHelper( this, request, handler, context ); } );
}

CreateKeyOutcome KMSClient::CreateKey(const CreateKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateKeyOutcomeCallable KMSClient::CreateKeyCallable(const CreateKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientCreateKeyAsyncHelper(KMSClient const * const clientThis, const CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateKey(request), context);
}

void KMSClient::CreateKeyAsync(const CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientCreateKeyAsyncHelper( this, request, handler, context ); } );
}

DecryptOutcome KMSClient::Decrypt(const DecryptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DecryptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DecryptOutcomeCallable KMSClient::DecryptCallable(const DecryptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecryptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Decrypt(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDecryptAsyncHelper(KMSClient const * const clientThis, const DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Decrypt(request), context);
}

void KMSClient::DecryptAsync(const DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDecryptAsyncHelper( this, request, handler, context ); } );
}

DeleteAliasOutcome KMSClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAliasOutcomeCallable KMSClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDeleteAliasAsyncHelper(KMSClient const * const clientThis, const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAlias(request), context);
}

void KMSClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDeleteAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomKeyStoreOutcome KMSClient::DeleteCustomKeyStore(const DeleteCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomKeyStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomKeyStoreOutcomeCallable KMSClient::DeleteCustomKeyStoreCallable(const DeleteCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDeleteCustomKeyStoreAsyncHelper(KMSClient const * const clientThis, const DeleteCustomKeyStoreRequest& request, const DeleteCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomKeyStore(request), context);
}

void KMSClient::DeleteCustomKeyStoreAsync(const DeleteCustomKeyStoreRequest& request, const DeleteCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDeleteCustomKeyStoreAsyncHelper( this, request, handler, context ); } );
}

DeleteImportedKeyMaterialOutcome KMSClient::DeleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteImportedKeyMaterialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImportedKeyMaterialOutcomeCallable KMSClient::DeleteImportedKeyMaterialCallable(const DeleteImportedKeyMaterialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImportedKeyMaterialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImportedKeyMaterial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDeleteImportedKeyMaterialAsyncHelper(KMSClient const * const clientThis, const DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImportedKeyMaterial(request), context);
}

void KMSClient::DeleteImportedKeyMaterialAsync(const DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDeleteImportedKeyMaterialAsyncHelper( this, request, handler, context ); } );
}

DescribeCustomKeyStoresOutcome KMSClient::DescribeCustomKeyStores(const DescribeCustomKeyStoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCustomKeyStoresOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomKeyStoresOutcomeCallable KMSClient::DescribeCustomKeyStoresCallable(const DescribeCustomKeyStoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomKeyStoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomKeyStores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDescribeCustomKeyStoresAsyncHelper(KMSClient const * const clientThis, const DescribeCustomKeyStoresRequest& request, const DescribeCustomKeyStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCustomKeyStores(request), context);
}

void KMSClient::DescribeCustomKeyStoresAsync(const DescribeCustomKeyStoresRequest& request, const DescribeCustomKeyStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDescribeCustomKeyStoresAsyncHelper( this, request, handler, context ); } );
}

DescribeKeyOutcome KMSClient::DescribeKey(const DescribeKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeKeyOutcomeCallable KMSClient::DescribeKeyCallable(const DescribeKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDescribeKeyAsyncHelper(KMSClient const * const clientThis, const DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeKey(request), context);
}

void KMSClient::DescribeKeyAsync(const DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDescribeKeyAsyncHelper( this, request, handler, context ); } );
}

DisableKeyOutcome KMSClient::DisableKey(const DisableKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableKeyOutcomeCallable KMSClient::DisableKeyCallable(const DisableKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDisableKeyAsyncHelper(KMSClient const * const clientThis, const DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableKey(request), context);
}

void KMSClient::DisableKeyAsync(const DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDisableKeyAsyncHelper( this, request, handler, context ); } );
}

DisableKeyRotationOutcome KMSClient::DisableKeyRotation(const DisableKeyRotationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableKeyRotationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableKeyRotationOutcomeCallable KMSClient::DisableKeyRotationCallable(const DisableKeyRotationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableKeyRotationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableKeyRotation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDisableKeyRotationAsyncHelper(KMSClient const * const clientThis, const DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableKeyRotation(request), context);
}

void KMSClient::DisableKeyRotationAsync(const DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDisableKeyRotationAsyncHelper( this, request, handler, context ); } );
}

DisconnectCustomKeyStoreOutcome KMSClient::DisconnectCustomKeyStore(const DisconnectCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisconnectCustomKeyStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisconnectCustomKeyStoreOutcomeCallable KMSClient::DisconnectCustomKeyStoreCallable(const DisconnectCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientDisconnectCustomKeyStoreAsyncHelper(KMSClient const * const clientThis, const DisconnectCustomKeyStoreRequest& request, const DisconnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisconnectCustomKeyStore(request), context);
}

void KMSClient::DisconnectCustomKeyStoreAsync(const DisconnectCustomKeyStoreRequest& request, const DisconnectCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientDisconnectCustomKeyStoreAsyncHelper( this, request, handler, context ); } );
}

EnableKeyOutcome KMSClient::EnableKey(const EnableKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableKeyOutcomeCallable KMSClient::EnableKeyCallable(const EnableKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientEnableKeyAsyncHelper(KMSClient const * const clientThis, const EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableKey(request), context);
}

void KMSClient::EnableKeyAsync(const EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientEnableKeyAsyncHelper( this, request, handler, context ); } );
}

EnableKeyRotationOutcome KMSClient::EnableKeyRotation(const EnableKeyRotationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableKeyRotationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableKeyRotationOutcomeCallable KMSClient::EnableKeyRotationCallable(const EnableKeyRotationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableKeyRotationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableKeyRotation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientEnableKeyRotationAsyncHelper(KMSClient const * const clientThis, const EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableKeyRotation(request), context);
}

void KMSClient::EnableKeyRotationAsync(const EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientEnableKeyRotationAsyncHelper( this, request, handler, context ); } );
}

EncryptOutcome KMSClient::Encrypt(const EncryptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EncryptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EncryptOutcomeCallable KMSClient::EncryptCallable(const EncryptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EncryptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Encrypt(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientEncryptAsyncHelper(KMSClient const * const clientThis, const EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Encrypt(request), context);
}

void KMSClient::EncryptAsync(const EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientEncryptAsyncHelper( this, request, handler, context ); } );
}

GenerateDataKeyOutcome KMSClient::GenerateDataKey(const GenerateDataKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateDataKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateDataKeyOutcomeCallable KMSClient::GenerateDataKeyCallable(const GenerateDataKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGenerateDataKeyAsyncHelper(KMSClient const * const clientThis, const GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateDataKey(request), context);
}

void KMSClient::GenerateDataKeyAsync(const GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGenerateDataKeyAsyncHelper( this, request, handler, context ); } );
}

GenerateDataKeyPairOutcome KMSClient::GenerateDataKeyPair(const GenerateDataKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateDataKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateDataKeyPairOutcomeCallable KMSClient::GenerateDataKeyPairCallable(const GenerateDataKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGenerateDataKeyPairAsyncHelper(KMSClient const * const clientThis, const GenerateDataKeyPairRequest& request, const GenerateDataKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateDataKeyPair(request), context);
}

void KMSClient::GenerateDataKeyPairAsync(const GenerateDataKeyPairRequest& request, const GenerateDataKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGenerateDataKeyPairAsyncHelper( this, request, handler, context ); } );
}

GenerateDataKeyPairWithoutPlaintextOutcome KMSClient::GenerateDataKeyPairWithoutPlaintext(const GenerateDataKeyPairWithoutPlaintextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateDataKeyPairWithoutPlaintextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateDataKeyPairWithoutPlaintextOutcomeCallable KMSClient::GenerateDataKeyPairWithoutPlaintextCallable(const GenerateDataKeyPairWithoutPlaintextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyPairWithoutPlaintextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKeyPairWithoutPlaintext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGenerateDataKeyPairWithoutPlaintextAsyncHelper(KMSClient const * const clientThis, const GenerateDataKeyPairWithoutPlaintextRequest& request, const GenerateDataKeyPairWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateDataKeyPairWithoutPlaintext(request), context);
}

void KMSClient::GenerateDataKeyPairWithoutPlaintextAsync(const GenerateDataKeyPairWithoutPlaintextRequest& request, const GenerateDataKeyPairWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGenerateDataKeyPairWithoutPlaintextAsyncHelper( this, request, handler, context ); } );
}

GenerateDataKeyWithoutPlaintextOutcome KMSClient::GenerateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateDataKeyWithoutPlaintextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateDataKeyWithoutPlaintextOutcomeCallable KMSClient::GenerateDataKeyWithoutPlaintextCallable(const GenerateDataKeyWithoutPlaintextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyWithoutPlaintextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKeyWithoutPlaintext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGenerateDataKeyWithoutPlaintextAsyncHelper(KMSClient const * const clientThis, const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateDataKeyWithoutPlaintext(request), context);
}

void KMSClient::GenerateDataKeyWithoutPlaintextAsync(const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGenerateDataKeyWithoutPlaintextAsyncHelper( this, request, handler, context ); } );
}

GenerateMacOutcome KMSClient::GenerateMac(const GenerateMacRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateMacOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateMacOutcomeCallable KMSClient::GenerateMacCallable(const GenerateMacRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateMacOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateMac(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGenerateMacAsyncHelper(KMSClient const * const clientThis, const GenerateMacRequest& request, const GenerateMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateMac(request), context);
}

void KMSClient::GenerateMacAsync(const GenerateMacRequest& request, const GenerateMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGenerateMacAsyncHelper( this, request, handler, context ); } );
}

GenerateRandomOutcome KMSClient::GenerateRandom(const GenerateRandomRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateRandomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateRandomOutcomeCallable KMSClient::GenerateRandomCallable(const GenerateRandomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateRandomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateRandom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGenerateRandomAsyncHelper(KMSClient const * const clientThis, const GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateRandom(request), context);
}

void KMSClient::GenerateRandomAsync(const GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGenerateRandomAsyncHelper( this, request, handler, context ); } );
}

GetKeyPolicyOutcome KMSClient::GetKeyPolicy(const GetKeyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetKeyPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetKeyPolicyOutcomeCallable KMSClient::GetKeyPolicyCallable(const GetKeyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGetKeyPolicyAsyncHelper(KMSClient const * const clientThis, const GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetKeyPolicy(request), context);
}

void KMSClient::GetKeyPolicyAsync(const GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGetKeyPolicyAsyncHelper( this, request, handler, context ); } );
}

GetKeyRotationStatusOutcome KMSClient::GetKeyRotationStatus(const GetKeyRotationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetKeyRotationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetKeyRotationStatusOutcomeCallable KMSClient::GetKeyRotationStatusCallable(const GetKeyRotationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyRotationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyRotationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGetKeyRotationStatusAsyncHelper(KMSClient const * const clientThis, const GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetKeyRotationStatus(request), context);
}

void KMSClient::GetKeyRotationStatusAsync(const GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGetKeyRotationStatusAsyncHelper( this, request, handler, context ); } );
}

GetParametersForImportOutcome KMSClient::GetParametersForImport(const GetParametersForImportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetParametersForImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParametersForImportOutcomeCallable KMSClient::GetParametersForImportCallable(const GetParametersForImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParametersForImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParametersForImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGetParametersForImportAsyncHelper(KMSClient const * const clientThis, const GetParametersForImportRequest& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetParametersForImport(request), context);
}

void KMSClient::GetParametersForImportAsync(const GetParametersForImportRequest& request, const GetParametersForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGetParametersForImportAsyncHelper( this, request, handler, context ); } );
}

GetPublicKeyOutcome KMSClient::GetPublicKey(const GetPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPublicKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPublicKeyOutcomeCallable KMSClient::GetPublicKeyCallable(const GetPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientGetPublicKeyAsyncHelper(KMSClient const * const clientThis, const GetPublicKeyRequest& request, const GetPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPublicKey(request), context);
}

void KMSClient::GetPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientGetPublicKeyAsyncHelper( this, request, handler, context ); } );
}

ImportKeyMaterialOutcome KMSClient::ImportKeyMaterial(const ImportKeyMaterialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportKeyMaterialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportKeyMaterialOutcomeCallable KMSClient::ImportKeyMaterialCallable(const ImportKeyMaterialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportKeyMaterialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportKeyMaterial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientImportKeyMaterialAsyncHelper(KMSClient const * const clientThis, const ImportKeyMaterialRequest& request, const ImportKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportKeyMaterial(request), context);
}

void KMSClient::ImportKeyMaterialAsync(const ImportKeyMaterialRequest& request, const ImportKeyMaterialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientImportKeyMaterialAsyncHelper( this, request, handler, context ); } );
}

ListAliasesOutcome KMSClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAliasesOutcomeCallable KMSClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientListAliasesAsyncHelper(KMSClient const * const clientThis, const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAliases(request), context);
}

void KMSClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientListAliasesAsyncHelper( this, request, handler, context ); } );
}

ListGrantsOutcome KMSClient::ListGrants(const ListGrantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGrantsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGrantsOutcomeCallable KMSClient::ListGrantsCallable(const ListGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientListGrantsAsyncHelper(KMSClient const * const clientThis, const ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGrants(request), context);
}

void KMSClient::ListGrantsAsync(const ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientListGrantsAsyncHelper( this, request, handler, context ); } );
}

ListKeyPoliciesOutcome KMSClient::ListKeyPolicies(const ListKeyPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListKeyPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListKeyPoliciesOutcomeCallable KMSClient::ListKeyPoliciesCallable(const ListKeyPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeyPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeyPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientListKeyPoliciesAsyncHelper(KMSClient const * const clientThis, const ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListKeyPolicies(request), context);
}

void KMSClient::ListKeyPoliciesAsync(const ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientListKeyPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListKeysOutcome KMSClient::ListKeys(const ListKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListKeysOutcomeCallable KMSClient::ListKeysCallable(const ListKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientListKeysAsyncHelper(KMSClient const * const clientThis, const ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListKeys(request), context);
}

void KMSClient::ListKeysAsync(const ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientListKeysAsyncHelper( this, request, handler, context ); } );
}

ListResourceTagsOutcome KMSClient::ListResourceTags(const ListResourceTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourceTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceTagsOutcomeCallable KMSClient::ListResourceTagsCallable(const ListResourceTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientListResourceTagsAsyncHelper(KMSClient const * const clientThis, const ListResourceTagsRequest& request, const ListResourceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceTags(request), context);
}

void KMSClient::ListResourceTagsAsync(const ListResourceTagsRequest& request, const ListResourceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientListResourceTagsAsyncHelper( this, request, handler, context ); } );
}

ListRetirableGrantsOutcome KMSClient::ListRetirableGrants(const ListRetirableGrantsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRetirableGrantsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRetirableGrantsOutcomeCallable KMSClient::ListRetirableGrantsCallable(const ListRetirableGrantsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRetirableGrantsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRetirableGrants(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientListRetirableGrantsAsyncHelper(KMSClient const * const clientThis, const ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRetirableGrants(request), context);
}

void KMSClient::ListRetirableGrantsAsync(const ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientListRetirableGrantsAsyncHelper( this, request, handler, context ); } );
}

PutKeyPolicyOutcome KMSClient::PutKeyPolicy(const PutKeyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutKeyPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutKeyPolicyOutcomeCallable KMSClient::PutKeyPolicyCallable(const PutKeyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutKeyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutKeyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientPutKeyPolicyAsyncHelper(KMSClient const * const clientThis, const PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutKeyPolicy(request), context);
}

void KMSClient::PutKeyPolicyAsync(const PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientPutKeyPolicyAsyncHelper( this, request, handler, context ); } );
}

ReEncryptOutcome KMSClient::ReEncrypt(const ReEncryptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ReEncryptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReEncryptOutcomeCallable KMSClient::ReEncryptCallable(const ReEncryptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReEncryptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReEncrypt(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientReEncryptAsyncHelper(KMSClient const * const clientThis, const ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReEncrypt(request), context);
}

void KMSClient::ReEncryptAsync(const ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientReEncryptAsyncHelper( this, request, handler, context ); } );
}

ReplicateKeyOutcome KMSClient::ReplicateKey(const ReplicateKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ReplicateKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReplicateKeyOutcomeCallable KMSClient::ReplicateKeyCallable(const ReplicateKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplicateKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplicateKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientReplicateKeyAsyncHelper(KMSClient const * const clientThis, const ReplicateKeyRequest& request, const ReplicateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReplicateKey(request), context);
}

void KMSClient::ReplicateKeyAsync(const ReplicateKeyRequest& request, const ReplicateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientReplicateKeyAsyncHelper( this, request, handler, context ); } );
}

RetireGrantOutcome KMSClient::RetireGrant(const RetireGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetireGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetireGrantOutcomeCallable KMSClient::RetireGrantCallable(const RetireGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetireGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetireGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientRetireGrantAsyncHelper(KMSClient const * const clientThis, const RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetireGrant(request), context);
}

void KMSClient::RetireGrantAsync(const RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientRetireGrantAsyncHelper( this, request, handler, context ); } );
}

RevokeGrantOutcome KMSClient::RevokeGrant(const RevokeGrantRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeGrantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeGrantOutcomeCallable KMSClient::RevokeGrantCallable(const RevokeGrantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeGrantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeGrant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientRevokeGrantAsyncHelper(KMSClient const * const clientThis, const RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeGrant(request), context);
}

void KMSClient::RevokeGrantAsync(const RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientRevokeGrantAsyncHelper( this, request, handler, context ); } );
}

ScheduleKeyDeletionOutcome KMSClient::ScheduleKeyDeletion(const ScheduleKeyDeletionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ScheduleKeyDeletionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScheduleKeyDeletionOutcomeCallable KMSClient::ScheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScheduleKeyDeletionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ScheduleKeyDeletion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientScheduleKeyDeletionAsyncHelper(KMSClient const * const clientThis, const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ScheduleKeyDeletion(request), context);
}

void KMSClient::ScheduleKeyDeletionAsync(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientScheduleKeyDeletionAsyncHelper( this, request, handler, context ); } );
}

SignOutcome KMSClient::Sign(const SignRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SignOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SignOutcomeCallable KMSClient::SignCallable(const SignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Sign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientSignAsyncHelper(KMSClient const * const clientThis, const SignRequest& request, const SignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Sign(request), context);
}

void KMSClient::SignAsync(const SignRequest& request, const SignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientSignAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome KMSClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KMSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientTagResourceAsyncHelper(KMSClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void KMSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome KMSClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KMSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientUntagResourceAsyncHelper(KMSClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void KMSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAliasOutcome KMSClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAliasOutcomeCallable KMSClient::UpdateAliasCallable(const UpdateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientUpdateAliasAsyncHelper(KMSClient const * const clientThis, const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAlias(request), context);
}

void KMSClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientUpdateAliasAsyncHelper( this, request, handler, context ); } );
}

UpdateCustomKeyStoreOutcome KMSClient::UpdateCustomKeyStore(const UpdateCustomKeyStoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCustomKeyStoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCustomKeyStoreOutcomeCallable KMSClient::UpdateCustomKeyStoreCallable(const UpdateCustomKeyStoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCustomKeyStoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCustomKeyStore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientUpdateCustomKeyStoreAsyncHelper(KMSClient const * const clientThis, const UpdateCustomKeyStoreRequest& request, const UpdateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCustomKeyStore(request), context);
}

void KMSClient::UpdateCustomKeyStoreAsync(const UpdateCustomKeyStoreRequest& request, const UpdateCustomKeyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientUpdateCustomKeyStoreAsyncHelper( this, request, handler, context ); } );
}

UpdateKeyDescriptionOutcome KMSClient::UpdateKeyDescription(const UpdateKeyDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateKeyDescriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateKeyDescriptionOutcomeCallable KMSClient::UpdateKeyDescriptionCallable(const UpdateKeyDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateKeyDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateKeyDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientUpdateKeyDescriptionAsyncHelper(KMSClient const * const clientThis, const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateKeyDescription(request), context);
}

void KMSClient::UpdateKeyDescriptionAsync(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientUpdateKeyDescriptionAsyncHelper( this, request, handler, context ); } );
}

UpdatePrimaryRegionOutcome KMSClient::UpdatePrimaryRegion(const UpdatePrimaryRegionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePrimaryRegionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePrimaryRegionOutcomeCallable KMSClient::UpdatePrimaryRegionCallable(const UpdatePrimaryRegionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePrimaryRegionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePrimaryRegion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientUpdatePrimaryRegionAsyncHelper(KMSClient const * const clientThis, const UpdatePrimaryRegionRequest& request, const UpdatePrimaryRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePrimaryRegion(request), context);
}

void KMSClient::UpdatePrimaryRegionAsync(const UpdatePrimaryRegionRequest& request, const UpdatePrimaryRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientUpdatePrimaryRegionAsyncHelper( this, request, handler, context ); } );
}

VerifyOutcome KMSClient::Verify(const VerifyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyOutcomeCallable KMSClient::VerifyCallable(const VerifyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Verify(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientVerifyAsyncHelper(KMSClient const * const clientThis, const VerifyRequest& request, const VerifyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Verify(request), context);
}

void KMSClient::VerifyAsync(const VerifyRequest& request, const VerifyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientVerifyAsyncHelper( this, request, handler, context ); } );
}

VerifyMacOutcome KMSClient::VerifyMac(const VerifyMacRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifyMacOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyMacOutcomeCallable KMSClient::VerifyMacCallable(const VerifyMacRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyMacOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyMac(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClientVerifyMacAsyncHelper(KMSClient const * const clientThis, const VerifyMacRequest& request, const VerifyMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifyMac(request), context);
}

void KMSClient::VerifyMacAsync(const VerifyMacRequest& request, const VerifyMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KMSClientVerifyMacAsyncHelper( this, request, handler, context ); } );
}

