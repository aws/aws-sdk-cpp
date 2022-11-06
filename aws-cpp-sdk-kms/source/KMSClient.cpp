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

#include <aws/kms/KMSClient.h>
#include <aws/kms/KMSErrorMarshaller.h>
#include <aws/kms/KMSEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* KMSClient::SERVICE_NAME = "kms";
const char* KMSClient::ALLOCATION_TAG = "KMSClient";

KMSClient::KMSClient(const KMS::KMSClientConfiguration& clientConfiguration,
                     std::shared_ptr<KMSEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const AWSCredentials& credentials,
                     std::shared_ptr<KMSEndpointProviderBase> endpointProvider,
                     const KMS::KMSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<KMSEndpointProviderBase> endpointProvider,
                     const KMS::KMSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KMSClient::KMSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KMSClient::~KMSClient()
{
}

std::shared_ptr<KMSEndpointProviderBase>& KMSClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KMSClient::init(const KMS::KMSClientConfiguration& config)
{
  AWSClient::SetServiceClientName("KMS");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void KMSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelKeyDeletionOutcome KMSClient::CancelKeyDeletion(const CancelKeyDeletionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelKeyDeletion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelKeyDeletion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelKeyDeletionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelKeyDeletion(request), context);
    } );
}

ConnectCustomKeyStoreOutcome KMSClient::ConnectCustomKeyStore(const ConnectCustomKeyStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConnectCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConnectCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConnectCustomKeyStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ConnectCustomKeyStore(request), context);
    } );
}

CreateAliasOutcome KMSClient::CreateAlias(const CreateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAlias(request), context);
    } );
}

CreateCustomKeyStoreOutcome KMSClient::CreateCustomKeyStore(const CreateCustomKeyStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCustomKeyStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomKeyStore(request), context);
    } );
}

CreateGrantOutcome KMSClient::CreateGrant(const CreateGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGrant(request), context);
    } );
}

CreateKeyOutcome KMSClient::CreateKey(const CreateKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateKey(request), context);
    } );
}

DecryptOutcome KMSClient::Decrypt(const DecryptRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Decrypt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Decrypt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DecryptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Decrypt(request), context);
    } );
}

DeleteAliasOutcome KMSClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAlias(request), context);
    } );
}

DeleteCustomKeyStoreOutcome KMSClient::DeleteCustomKeyStore(const DeleteCustomKeyStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCustomKeyStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomKeyStore(request), context);
    } );
}

DeleteImportedKeyMaterialOutcome KMSClient::DeleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImportedKeyMaterial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImportedKeyMaterial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteImportedKeyMaterialOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImportedKeyMaterial(request), context);
    } );
}

DescribeCustomKeyStoresOutcome KMSClient::DescribeCustomKeyStores(const DescribeCustomKeyStoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomKeyStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomKeyStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomKeyStoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomKeyStores(request), context);
    } );
}

DescribeKeyOutcome KMSClient::DescribeKey(const DescribeKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeKey(request), context);
    } );
}

DisableKeyOutcome KMSClient::DisableKey(const DisableKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableKey(request), context);
    } );
}

DisableKeyRotationOutcome KMSClient::DisableKeyRotation(const DisableKeyRotationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableKeyRotation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableKeyRotation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableKeyRotationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableKeyRotation(request), context);
    } );
}

DisconnectCustomKeyStoreOutcome KMSClient::DisconnectCustomKeyStore(const DisconnectCustomKeyStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisconnectCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisconnectCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisconnectCustomKeyStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisconnectCustomKeyStore(request), context);
    } );
}

EnableKeyOutcome KMSClient::EnableKey(const EnableKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableKey(request), context);
    } );
}

EnableKeyRotationOutcome KMSClient::EnableKeyRotation(const EnableKeyRotationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableKeyRotation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableKeyRotation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableKeyRotationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableKeyRotation(request), context);
    } );
}

EncryptOutcome KMSClient::Encrypt(const EncryptRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Encrypt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Encrypt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EncryptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Encrypt(request), context);
    } );
}

GenerateDataKeyOutcome KMSClient::GenerateDataKey(const GenerateDataKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateDataKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateDataKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateDataKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateDataKey(request), context);
    } );
}

GenerateDataKeyPairOutcome KMSClient::GenerateDataKeyPair(const GenerateDataKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateDataKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateDataKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateDataKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateDataKeyPairOutcomeCallable KMSClient::GenerateDataKeyPairCallable(const GenerateDataKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GenerateDataKeyPairAsync(const GenerateDataKeyPairRequest& request, const GenerateDataKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateDataKeyPair(request), context);
    } );
}

GenerateDataKeyPairWithoutPlaintextOutcome KMSClient::GenerateDataKeyPairWithoutPlaintext(const GenerateDataKeyPairWithoutPlaintextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateDataKeyPairWithoutPlaintext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateDataKeyPairWithoutPlaintext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateDataKeyPairWithoutPlaintextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateDataKeyPairWithoutPlaintextOutcomeCallable KMSClient::GenerateDataKeyPairWithoutPlaintextCallable(const GenerateDataKeyPairWithoutPlaintextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataKeyPairWithoutPlaintextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataKeyPairWithoutPlaintext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GenerateDataKeyPairWithoutPlaintextAsync(const GenerateDataKeyPairWithoutPlaintextRequest& request, const GenerateDataKeyPairWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateDataKeyPairWithoutPlaintext(request), context);
    } );
}

GenerateDataKeyWithoutPlaintextOutcome KMSClient::GenerateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateDataKeyWithoutPlaintext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateDataKeyWithoutPlaintext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateDataKeyWithoutPlaintextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateDataKeyWithoutPlaintext(request), context);
    } );
}

GenerateMacOutcome KMSClient::GenerateMac(const GenerateMacRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateMacOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateMacOutcomeCallable KMSClient::GenerateMacCallable(const GenerateMacRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateMacOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateMac(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GenerateMacAsync(const GenerateMacRequest& request, const GenerateMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateMac(request), context);
    } );
}

GenerateRandomOutcome KMSClient::GenerateRandom(const GenerateRandomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateRandom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateRandom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateRandomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateRandom(request), context);
    } );
}

GetKeyPolicyOutcome KMSClient::GetKeyPolicy(const GetKeyPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetKeyPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetKeyPolicy(request), context);
    } );
}

GetKeyRotationStatusOutcome KMSClient::GetKeyRotationStatus(const GetKeyRotationStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyRotationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyRotationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetKeyRotationStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetKeyRotationStatus(request), context);
    } );
}

GetParametersForImportOutcome KMSClient::GetParametersForImport(const GetParametersForImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetParametersForImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetParametersForImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetParametersForImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetParametersForImport(request), context);
    } );
}

GetPublicKeyOutcome KMSClient::GetPublicKey(const GetPublicKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPublicKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPublicKeyOutcomeCallable KMSClient::GetPublicKeyCallable(const GetPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::GetPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPublicKey(request), context);
    } );
}

ImportKeyMaterialOutcome KMSClient::ImportKeyMaterial(const ImportKeyMaterialRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportKeyMaterial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportKeyMaterial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportKeyMaterialOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportKeyMaterial(request), context);
    } );
}

ListAliasesOutcome KMSClient::ListAliases(const ListAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAliases(request), context);
    } );
}

ListGrantsOutcome KMSClient::ListGrants(const ListGrantsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGrantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGrants(request), context);
    } );
}

ListKeyPoliciesOutcome KMSClient::ListKeyPolicies(const ListKeyPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKeyPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKeyPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListKeyPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListKeyPolicies(request), context);
    } );
}

ListKeysOutcome KMSClient::ListKeys(const ListKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListKeys(request), context);
    } );
}

ListResourceTagsOutcome KMSClient::ListResourceTags(const ListResourceTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourceTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceTags(request), context);
    } );
}

ListRetirableGrantsOutcome KMSClient::ListRetirableGrants(const ListRetirableGrantsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRetirableGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRetirableGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRetirableGrantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRetirableGrants(request), context);
    } );
}

PutKeyPolicyOutcome KMSClient::PutKeyPolicy(const PutKeyPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutKeyPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutKeyPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutKeyPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutKeyPolicy(request), context);
    } );
}

ReEncryptOutcome KMSClient::ReEncrypt(const ReEncryptRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReEncrypt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReEncrypt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReEncryptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReEncrypt(request), context);
    } );
}

ReplicateKeyOutcome KMSClient::ReplicateKey(const ReplicateKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplicateKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplicateKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplicateKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReplicateKeyOutcomeCallable KMSClient::ReplicateKeyCallable(const ReplicateKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplicateKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplicateKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::ReplicateKeyAsync(const ReplicateKeyRequest& request, const ReplicateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReplicateKey(request), context);
    } );
}

RetireGrantOutcome KMSClient::RetireGrant(const RetireGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetireGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetireGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetireGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetireGrant(request), context);
    } );
}

RevokeGrantOutcome KMSClient::RevokeGrant(const RevokeGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokeGrant(request), context);
    } );
}

ScheduleKeyDeletionOutcome KMSClient::ScheduleKeyDeletion(const ScheduleKeyDeletionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ScheduleKeyDeletion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ScheduleKeyDeletion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ScheduleKeyDeletionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ScheduleKeyDeletion(request), context);
    } );
}

SignOutcome KMSClient::Sign(const SignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Sign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Sign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SignOutcomeCallable KMSClient::SignCallable(const SignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Sign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::SignAsync(const SignRequest& request, const SignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Sign(request), context);
    } );
}

TagResourceOutcome KMSClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome KMSClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAliasOutcome KMSClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAlias(request), context);
    } );
}

UpdateCustomKeyStoreOutcome KMSClient::UpdateCustomKeyStore(const UpdateCustomKeyStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCustomKeyStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCustomKeyStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCustomKeyStore(request), context);
    } );
}

UpdateKeyDescriptionOutcome KMSClient::UpdateKeyDescription(const UpdateKeyDescriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKeyDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKeyDescription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateKeyDescriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateKeyDescription(request), context);
    } );
}

UpdatePrimaryRegionOutcome KMSClient::UpdatePrimaryRegion(const UpdatePrimaryRegionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePrimaryRegion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePrimaryRegion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePrimaryRegionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePrimaryRegionOutcomeCallable KMSClient::UpdatePrimaryRegionCallable(const UpdatePrimaryRegionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePrimaryRegionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePrimaryRegion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::UpdatePrimaryRegionAsync(const UpdatePrimaryRegionRequest& request, const UpdatePrimaryRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePrimaryRegion(request), context);
    } );
}

VerifyOutcome KMSClient::Verify(const VerifyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Verify, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Verify, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return VerifyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyOutcomeCallable KMSClient::VerifyCallable(const VerifyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Verify(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::VerifyAsync(const VerifyRequest& request, const VerifyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Verify(request), context);
    } );
}

VerifyMacOutcome KMSClient::VerifyMac(const VerifyMacRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyMac, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return VerifyMacOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyMacOutcomeCallable KMSClient::VerifyMacCallable(const VerifyMacRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyMacOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyMac(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KMSClient::VerifyMacAsync(const VerifyMacRequest& request, const VerifyMacResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, VerifyMac(request), context);
    } );
}

