/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/kms/KMSClient.h>
#include <aws/kms/KMSEndpointProvider.h>
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
#include <aws/kms/model/DeriveSharedSecretRequest.h>
#include <aws/kms/model/DescribeCustomKeyStoresRequest.h>
#include <aws/kms/model/DescribeKeyRequest.h>
#include <aws/kms/model/DisableKeyRequest.h>
#include <aws/kms/model/DisableKeyRotationRequest.h>
#include <aws/kms/model/DisconnectCustomKeyStoreRequest.h>
#include <aws/kms/model/EnableKeyRequest.h>
#include <aws/kms/model/EnableKeyRotationRequest.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/GenerateDataKeyPairRequest.h>
#include <aws/kms/model/GenerateDataKeyPairWithoutPlaintextRequest.h>
#include <aws/kms/model/GenerateDataKeyRequest.h>
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
#include <aws/kms/model/ListKeyRotationsRequest.h>
#include <aws/kms/model/ListKeysRequest.h>
#include <aws/kms/model/ListResourceTagsRequest.h>
#include <aws/kms/model/ListRetirableGrantsRequest.h>
#include <aws/kms/model/PutKeyPolicyRequest.h>
#include <aws/kms/model/ReEncryptRequest.h>
#include <aws/kms/model/ReplicateKeyRequest.h>
#include <aws/kms/model/RetireGrantRequest.h>
#include <aws/kms/model/RevokeGrantRequest.h>
#include <aws/kms/model/RotateKeyOnDemandRequest.h>
#include <aws/kms/model/ScheduleKeyDeletionRequest.h>
#include <aws/kms/model/SignRequest.h>
#include <aws/kms/model/TagResourceRequest.h>
#include <aws/kms/model/UntagResourceRequest.h>
#include <aws/kms/model/UpdateAliasRequest.h>
#include <aws/kms/model/UpdateCustomKeyStoreRequest.h>
#include <aws/kms/model/UpdateKeyDescriptionRequest.h>
#include <aws/kms/model/UpdatePrimaryRegionRequest.h>
#include <aws/kms/model/VerifyMacRequest.h>
#include <aws/kms/model/VerifyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace KMS {
const char SERVICE_NAME[] = "kms";
const char ALLOCATION_TAG[] = "KMSClient";
}  // namespace KMS
}  // namespace Aws
const char* KMSClient::GetServiceName() { return SERVICE_NAME; }
const char* KMSClient::GetAllocationTag() { return ALLOCATION_TAG; }

KMSClient::KMSClient(const KMS::KMSClientConfiguration& clientConfiguration, std::shared_ptr<KMSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const AWSCredentials& credentials, std::shared_ptr<KMSEndpointProviderBase> endpointProvider,
                     const KMS::KMSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<KMSEndpointProviderBase> endpointProvider, const KMS::KMSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KMSClient::KMSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KMSClient::KMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KMSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KMSClient::~KMSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KMSEndpointProviderBase>& KMSClient::accessEndpointProvider() { return m_endpointProvider; }

void KMSClient::init(const KMS::KMSClientConfiguration& config) {
  AWSClient::SetServiceClientName("KMS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "kms");
}

void KMSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KMSClient::InvokeOperationOutcome KMSClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CancelKeyDeletionOutcome KMSClient::CancelKeyDeletion(const CancelKeyDeletionRequest& request) const {
  return CancelKeyDeletionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConnectCustomKeyStoreOutcome KMSClient::ConnectCustomKeyStore(const ConnectCustomKeyStoreRequest& request) const {
  return ConnectCustomKeyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAliasOutcome KMSClient::CreateAlias(const CreateAliasRequest& request) const {
  return CreateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomKeyStoreOutcome KMSClient::CreateCustomKeyStore(const CreateCustomKeyStoreRequest& request) const {
  return CreateCustomKeyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGrantOutcome KMSClient::CreateGrant(const CreateGrantRequest& request) const {
  return CreateGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKeyOutcome KMSClient::CreateKey(const CreateKeyRequest& request) const {
  return CreateKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DecryptOutcome KMSClient::Decrypt(const DecryptRequest& request) const {
  return DecryptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAliasOutcome KMSClient::DeleteAlias(const DeleteAliasRequest& request) const {
  return DeleteAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomKeyStoreOutcome KMSClient::DeleteCustomKeyStore(const DeleteCustomKeyStoreRequest& request) const {
  return DeleteCustomKeyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteImportedKeyMaterialOutcome KMSClient::DeleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest& request) const {
  return DeleteImportedKeyMaterialOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeriveSharedSecretOutcome KMSClient::DeriveSharedSecret(const DeriveSharedSecretRequest& request) const {
  return DeriveSharedSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomKeyStoresOutcome KMSClient::DescribeCustomKeyStores(const DescribeCustomKeyStoresRequest& request) const {
  return DescribeCustomKeyStoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeKeyOutcome KMSClient::DescribeKey(const DescribeKeyRequest& request) const {
  return DescribeKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableKeyOutcome KMSClient::DisableKey(const DisableKeyRequest& request) const {
  return DisableKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableKeyRotationOutcome KMSClient::DisableKeyRotation(const DisableKeyRotationRequest& request) const {
  return DisableKeyRotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisconnectCustomKeyStoreOutcome KMSClient::DisconnectCustomKeyStore(const DisconnectCustomKeyStoreRequest& request) const {
  return DisconnectCustomKeyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableKeyOutcome KMSClient::EnableKey(const EnableKeyRequest& request) const {
  return EnableKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableKeyRotationOutcome KMSClient::EnableKeyRotation(const EnableKeyRotationRequest& request) const {
  return EnableKeyRotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EncryptOutcome KMSClient::Encrypt(const EncryptRequest& request) const {
  return EncryptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateDataKeyOutcome KMSClient::GenerateDataKey(const GenerateDataKeyRequest& request) const {
  return GenerateDataKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateDataKeyPairOutcome KMSClient::GenerateDataKeyPair(const GenerateDataKeyPairRequest& request) const {
  return GenerateDataKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateDataKeyPairWithoutPlaintextOutcome KMSClient::GenerateDataKeyPairWithoutPlaintext(
    const GenerateDataKeyPairWithoutPlaintextRequest& request) const {
  return GenerateDataKeyPairWithoutPlaintextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateDataKeyWithoutPlaintextOutcome KMSClient::GenerateDataKeyWithoutPlaintext(
    const GenerateDataKeyWithoutPlaintextRequest& request) const {
  return GenerateDataKeyWithoutPlaintextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateMacOutcome KMSClient::GenerateMac(const GenerateMacRequest& request) const {
  return GenerateMacOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateRandomOutcome KMSClient::GenerateRandom(const GenerateRandomRequest& request) const {
  return GenerateRandomOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetKeyPolicyOutcome KMSClient::GetKeyPolicy(const GetKeyPolicyRequest& request) const {
  return GetKeyPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetKeyRotationStatusOutcome KMSClient::GetKeyRotationStatus(const GetKeyRotationStatusRequest& request) const {
  return GetKeyRotationStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParametersForImportOutcome KMSClient::GetParametersForImport(const GetParametersForImportRequest& request) const {
  return GetParametersForImportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPublicKeyOutcome KMSClient::GetPublicKey(const GetPublicKeyRequest& request) const {
  return GetPublicKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportKeyMaterialOutcome KMSClient::ImportKeyMaterial(const ImportKeyMaterialRequest& request) const {
  return ImportKeyMaterialOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAliasesOutcome KMSClient::ListAliases(const ListAliasesRequest& request) const {
  return ListAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGrantsOutcome KMSClient::ListGrants(const ListGrantsRequest& request) const {
  return ListGrantsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListKeyPoliciesOutcome KMSClient::ListKeyPolicies(const ListKeyPoliciesRequest& request) const {
  return ListKeyPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListKeyRotationsOutcome KMSClient::ListKeyRotations(const ListKeyRotationsRequest& request) const {
  return ListKeyRotationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListKeysOutcome KMSClient::ListKeys(const ListKeysRequest& request) const {
  return ListKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceTagsOutcome KMSClient::ListResourceTags(const ListResourceTagsRequest& request) const {
  return ListResourceTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRetirableGrantsOutcome KMSClient::ListRetirableGrants(const ListRetirableGrantsRequest& request) const {
  return ListRetirableGrantsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutKeyPolicyOutcome KMSClient::PutKeyPolicy(const PutKeyPolicyRequest& request) const {
  return PutKeyPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReEncryptOutcome KMSClient::ReEncrypt(const ReEncryptRequest& request) const {
  return ReEncryptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplicateKeyOutcome KMSClient::ReplicateKey(const ReplicateKeyRequest& request) const {
  return ReplicateKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetireGrantOutcome KMSClient::RetireGrant(const RetireGrantRequest& request) const {
  return RetireGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeGrantOutcome KMSClient::RevokeGrant(const RevokeGrantRequest& request) const {
  return RevokeGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RotateKeyOnDemandOutcome KMSClient::RotateKeyOnDemand(const RotateKeyOnDemandRequest& request) const {
  return RotateKeyOnDemandOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ScheduleKeyDeletionOutcome KMSClient::ScheduleKeyDeletion(const ScheduleKeyDeletionRequest& request) const {
  return ScheduleKeyDeletionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SignOutcome KMSClient::Sign(const SignRequest& request) const {
  return SignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome KMSClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KMSClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAliasOutcome KMSClient::UpdateAlias(const UpdateAliasRequest& request) const {
  return UpdateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCustomKeyStoreOutcome KMSClient::UpdateCustomKeyStore(const UpdateCustomKeyStoreRequest& request) const {
  return UpdateCustomKeyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateKeyDescriptionOutcome KMSClient::UpdateKeyDescription(const UpdateKeyDescriptionRequest& request) const {
  return UpdateKeyDescriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePrimaryRegionOutcome KMSClient::UpdatePrimaryRegion(const UpdatePrimaryRegionRequest& request) const {
  return UpdatePrimaryRegionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyOutcome KMSClient::Verify(const VerifyRequest& request) const {
  return VerifyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyMacOutcome KMSClient::VerifyMac(const VerifyMacRequest& request) const {
  return VerifyMacOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
