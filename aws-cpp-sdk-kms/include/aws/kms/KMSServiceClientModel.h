/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kms/KMSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kms/KMSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KMSClient header */
#include <aws/kms/model/CancelKeyDeletionResult.h>
#include <aws/kms/model/ConnectCustomKeyStoreResult.h>
#include <aws/kms/model/CreateCustomKeyStoreResult.h>
#include <aws/kms/model/CreateGrantResult.h>
#include <aws/kms/model/CreateKeyResult.h>
#include <aws/kms/model/DecryptResult.h>
#include <aws/kms/model/DeleteCustomKeyStoreResult.h>
#include <aws/kms/model/DescribeCustomKeyStoresResult.h>
#include <aws/kms/model/DescribeKeyResult.h>
#include <aws/kms/model/DisconnectCustomKeyStoreResult.h>
#include <aws/kms/model/EncryptResult.h>
#include <aws/kms/model/GenerateDataKeyResult.h>
#include <aws/kms/model/GenerateDataKeyPairResult.h>
#include <aws/kms/model/GenerateDataKeyPairWithoutPlaintextResult.h>
#include <aws/kms/model/GenerateDataKeyWithoutPlaintextResult.h>
#include <aws/kms/model/GenerateMacResult.h>
#include <aws/kms/model/GenerateRandomResult.h>
#include <aws/kms/model/GetKeyPolicyResult.h>
#include <aws/kms/model/GetKeyRotationStatusResult.h>
#include <aws/kms/model/GetParametersForImportResult.h>
#include <aws/kms/model/GetPublicKeyResult.h>
#include <aws/kms/model/ImportKeyMaterialResult.h>
#include <aws/kms/model/ListAliasesResult.h>
#include <aws/kms/model/ListGrantsResult.h>
#include <aws/kms/model/ListKeyPoliciesResult.h>
#include <aws/kms/model/ListKeysResult.h>
#include <aws/kms/model/ListResourceTagsResult.h>
#include <aws/kms/model/ListRetirableGrantsResult.h>
#include <aws/kms/model/ReEncryptResult.h>
#include <aws/kms/model/ReplicateKeyResult.h>
#include <aws/kms/model/ScheduleKeyDeletionResult.h>
#include <aws/kms/model/SignResult.h>
#include <aws/kms/model/UpdateCustomKeyStoreResult.h>
#include <aws/kms/model/VerifyResult.h>
#include <aws/kms/model/VerifyMacResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in KMSClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace KMS
  {
    using KMSClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KMSEndpointProviderBase = Aws::KMS::Endpoint::KMSEndpointProviderBase;
    using KMSEndpointProvider = Aws::KMS::Endpoint::KMSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KMSClient header */
      class CancelKeyDeletionRequest;
      class ConnectCustomKeyStoreRequest;
      class CreateAliasRequest;
      class CreateCustomKeyStoreRequest;
      class CreateGrantRequest;
      class CreateKeyRequest;
      class DecryptRequest;
      class DeleteAliasRequest;
      class DeleteCustomKeyStoreRequest;
      class DeleteImportedKeyMaterialRequest;
      class DescribeCustomKeyStoresRequest;
      class DescribeKeyRequest;
      class DisableKeyRequest;
      class DisableKeyRotationRequest;
      class DisconnectCustomKeyStoreRequest;
      class EnableKeyRequest;
      class EnableKeyRotationRequest;
      class EncryptRequest;
      class GenerateDataKeyRequest;
      class GenerateDataKeyPairRequest;
      class GenerateDataKeyPairWithoutPlaintextRequest;
      class GenerateDataKeyWithoutPlaintextRequest;
      class GenerateMacRequest;
      class GenerateRandomRequest;
      class GetKeyPolicyRequest;
      class GetKeyRotationStatusRequest;
      class GetParametersForImportRequest;
      class GetPublicKeyRequest;
      class ImportKeyMaterialRequest;
      class ListAliasesRequest;
      class ListGrantsRequest;
      class ListKeyPoliciesRequest;
      class ListKeysRequest;
      class ListResourceTagsRequest;
      class ListRetirableGrantsRequest;
      class PutKeyPolicyRequest;
      class ReEncryptRequest;
      class ReplicateKeyRequest;
      class RetireGrantRequest;
      class RevokeGrantRequest;
      class ScheduleKeyDeletionRequest;
      class SignRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAliasRequest;
      class UpdateCustomKeyStoreRequest;
      class UpdateKeyDescriptionRequest;
      class UpdatePrimaryRegionRequest;
      class VerifyRequest;
      class VerifyMacRequest;
      /* End of service model forward declarations required in KMSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelKeyDeletionResult, KMSError> CancelKeyDeletionOutcome;
      typedef Aws::Utils::Outcome<ConnectCustomKeyStoreResult, KMSError> ConnectCustomKeyStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> CreateAliasOutcome;
      typedef Aws::Utils::Outcome<CreateCustomKeyStoreResult, KMSError> CreateCustomKeyStoreOutcome;
      typedef Aws::Utils::Outcome<CreateGrantResult, KMSError> CreateGrantOutcome;
      typedef Aws::Utils::Outcome<CreateKeyResult, KMSError> CreateKeyOutcome;
      typedef Aws::Utils::Outcome<DecryptResult, KMSError> DecryptOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> DeleteAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomKeyStoreResult, KMSError> DeleteCustomKeyStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> DeleteImportedKeyMaterialOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomKeyStoresResult, KMSError> DescribeCustomKeyStoresOutcome;
      typedef Aws::Utils::Outcome<DescribeKeyResult, KMSError> DescribeKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> DisableKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> DisableKeyRotationOutcome;
      typedef Aws::Utils::Outcome<DisconnectCustomKeyStoreResult, KMSError> DisconnectCustomKeyStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> EnableKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> EnableKeyRotationOutcome;
      typedef Aws::Utils::Outcome<EncryptResult, KMSError> EncryptOutcome;
      typedef Aws::Utils::Outcome<GenerateDataKeyResult, KMSError> GenerateDataKeyOutcome;
      typedef Aws::Utils::Outcome<GenerateDataKeyPairResult, KMSError> GenerateDataKeyPairOutcome;
      typedef Aws::Utils::Outcome<GenerateDataKeyPairWithoutPlaintextResult, KMSError> GenerateDataKeyPairWithoutPlaintextOutcome;
      typedef Aws::Utils::Outcome<GenerateDataKeyWithoutPlaintextResult, KMSError> GenerateDataKeyWithoutPlaintextOutcome;
      typedef Aws::Utils::Outcome<GenerateMacResult, KMSError> GenerateMacOutcome;
      typedef Aws::Utils::Outcome<GenerateRandomResult, KMSError> GenerateRandomOutcome;
      typedef Aws::Utils::Outcome<GetKeyPolicyResult, KMSError> GetKeyPolicyOutcome;
      typedef Aws::Utils::Outcome<GetKeyRotationStatusResult, KMSError> GetKeyRotationStatusOutcome;
      typedef Aws::Utils::Outcome<GetParametersForImportResult, KMSError> GetParametersForImportOutcome;
      typedef Aws::Utils::Outcome<GetPublicKeyResult, KMSError> GetPublicKeyOutcome;
      typedef Aws::Utils::Outcome<ImportKeyMaterialResult, KMSError> ImportKeyMaterialOutcome;
      typedef Aws::Utils::Outcome<ListAliasesResult, KMSError> ListAliasesOutcome;
      typedef Aws::Utils::Outcome<ListGrantsResult, KMSError> ListGrantsOutcome;
      typedef Aws::Utils::Outcome<ListKeyPoliciesResult, KMSError> ListKeyPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListKeysResult, KMSError> ListKeysOutcome;
      typedef Aws::Utils::Outcome<ListResourceTagsResult, KMSError> ListResourceTagsOutcome;
      typedef Aws::Utils::Outcome<ListRetirableGrantsResult, KMSError> ListRetirableGrantsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> PutKeyPolicyOutcome;
      typedef Aws::Utils::Outcome<ReEncryptResult, KMSError> ReEncryptOutcome;
      typedef Aws::Utils::Outcome<ReplicateKeyResult, KMSError> ReplicateKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> RetireGrantOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> RevokeGrantOutcome;
      typedef Aws::Utils::Outcome<ScheduleKeyDeletionResult, KMSError> ScheduleKeyDeletionOutcome;
      typedef Aws::Utils::Outcome<SignResult, KMSError> SignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> UpdateAliasOutcome;
      typedef Aws::Utils::Outcome<UpdateCustomKeyStoreResult, KMSError> UpdateCustomKeyStoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> UpdateKeyDescriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KMSError> UpdatePrimaryRegionOutcome;
      typedef Aws::Utils::Outcome<VerifyResult, KMSError> VerifyOutcome;
      typedef Aws::Utils::Outcome<VerifyMacResult, KMSError> VerifyMacOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelKeyDeletionOutcome> CancelKeyDeletionOutcomeCallable;
      typedef std::future<ConnectCustomKeyStoreOutcome> ConnectCustomKeyStoreOutcomeCallable;
      typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
      typedef std::future<CreateCustomKeyStoreOutcome> CreateCustomKeyStoreOutcomeCallable;
      typedef std::future<CreateGrantOutcome> CreateGrantOutcomeCallable;
      typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
      typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
      typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
      typedef std::future<DeleteCustomKeyStoreOutcome> DeleteCustomKeyStoreOutcomeCallable;
      typedef std::future<DeleteImportedKeyMaterialOutcome> DeleteImportedKeyMaterialOutcomeCallable;
      typedef std::future<DescribeCustomKeyStoresOutcome> DescribeCustomKeyStoresOutcomeCallable;
      typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
      typedef std::future<DisableKeyOutcome> DisableKeyOutcomeCallable;
      typedef std::future<DisableKeyRotationOutcome> DisableKeyRotationOutcomeCallable;
      typedef std::future<DisconnectCustomKeyStoreOutcome> DisconnectCustomKeyStoreOutcomeCallable;
      typedef std::future<EnableKeyOutcome> EnableKeyOutcomeCallable;
      typedef std::future<EnableKeyRotationOutcome> EnableKeyRotationOutcomeCallable;
      typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
      typedef std::future<GenerateDataKeyOutcome> GenerateDataKeyOutcomeCallable;
      typedef std::future<GenerateDataKeyPairOutcome> GenerateDataKeyPairOutcomeCallable;
      typedef std::future<GenerateDataKeyPairWithoutPlaintextOutcome> GenerateDataKeyPairWithoutPlaintextOutcomeCallable;
      typedef std::future<GenerateDataKeyWithoutPlaintextOutcome> GenerateDataKeyWithoutPlaintextOutcomeCallable;
      typedef std::future<GenerateMacOutcome> GenerateMacOutcomeCallable;
      typedef std::future<GenerateRandomOutcome> GenerateRandomOutcomeCallable;
      typedef std::future<GetKeyPolicyOutcome> GetKeyPolicyOutcomeCallable;
      typedef std::future<GetKeyRotationStatusOutcome> GetKeyRotationStatusOutcomeCallable;
      typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
      typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
      typedef std::future<ImportKeyMaterialOutcome> ImportKeyMaterialOutcomeCallable;
      typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
      typedef std::future<ListGrantsOutcome> ListGrantsOutcomeCallable;
      typedef std::future<ListKeyPoliciesOutcome> ListKeyPoliciesOutcomeCallable;
      typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
      typedef std::future<ListResourceTagsOutcome> ListResourceTagsOutcomeCallable;
      typedef std::future<ListRetirableGrantsOutcome> ListRetirableGrantsOutcomeCallable;
      typedef std::future<PutKeyPolicyOutcome> PutKeyPolicyOutcomeCallable;
      typedef std::future<ReEncryptOutcome> ReEncryptOutcomeCallable;
      typedef std::future<ReplicateKeyOutcome> ReplicateKeyOutcomeCallable;
      typedef std::future<RetireGrantOutcome> RetireGrantOutcomeCallable;
      typedef std::future<RevokeGrantOutcome> RevokeGrantOutcomeCallable;
      typedef std::future<ScheduleKeyDeletionOutcome> ScheduleKeyDeletionOutcomeCallable;
      typedef std::future<SignOutcome> SignOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
      typedef std::future<UpdateCustomKeyStoreOutcome> UpdateCustomKeyStoreOutcomeCallable;
      typedef std::future<UpdateKeyDescriptionOutcome> UpdateKeyDescriptionOutcomeCallable;
      typedef std::future<UpdatePrimaryRegionOutcome> UpdatePrimaryRegionOutcomeCallable;
      typedef std::future<VerifyOutcome> VerifyOutcomeCallable;
      typedef std::future<VerifyMacOutcome> VerifyMacOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KMSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KMSClient*, const Model::CancelKeyDeletionRequest&, const Model::CancelKeyDeletionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelKeyDeletionResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ConnectCustomKeyStoreRequest&, const Model::ConnectCustomKeyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConnectCustomKeyStoreResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::CreateCustomKeyStoreRequest&, const Model::CreateCustomKeyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomKeyStoreResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::CreateGrantRequest&, const Model::CreateGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGrantResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::CreateKeyRequest&, const Model::CreateKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DecryptRequest&, const Model::DecryptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecryptResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DeleteCustomKeyStoreRequest&, const Model::DeleteCustomKeyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomKeyStoreResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DeleteImportedKeyMaterialRequest&, const Model::DeleteImportedKeyMaterialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImportedKeyMaterialResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DescribeCustomKeyStoresRequest&, const Model::DescribeCustomKeyStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomKeyStoresResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DescribeKeyRequest&, const Model::DescribeKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DisableKeyRequest&, const Model::DisableKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DisableKeyRotationRequest&, const Model::DisableKeyRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableKeyRotationResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::DisconnectCustomKeyStoreRequest&, const Model::DisconnectCustomKeyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectCustomKeyStoreResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::EnableKeyRequest&, const Model::EnableKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::EnableKeyRotationRequest&, const Model::EnableKeyRotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableKeyRotationResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::EncryptRequest&, const Model::EncryptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EncryptResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateDataKeyRequest&, const Model::GenerateDataKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateDataKeyPairRequest&, const Model::GenerateDataKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataKeyPairResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateDataKeyPairWithoutPlaintextRequest&, const Model::GenerateDataKeyPairWithoutPlaintextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataKeyPairWithoutPlaintextResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateDataKeyWithoutPlaintextRequest&, const Model::GenerateDataKeyWithoutPlaintextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateDataKeyWithoutPlaintextResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateMacRequest&, const Model::GenerateMacOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateMacResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GenerateRandomRequest&, const Model::GenerateRandomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateRandomResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GetKeyPolicyRequest&, const Model::GetKeyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyPolicyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GetKeyRotationStatusRequest&, const Model::GetKeyRotationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyRotationStatusResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GetParametersForImportRequest&, const Model::GetParametersForImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersForImportResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::GetPublicKeyRequest&, const Model::GetPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ImportKeyMaterialRequest&, const Model::ImportKeyMaterialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportKeyMaterialResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListGrantsRequest&, const Model::ListGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGrantsResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListKeyPoliciesRequest&, const Model::ListKeyPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyPoliciesResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListKeysRequest&, const Model::ListKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeysResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListResourceTagsRequest&, const Model::ListResourceTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceTagsResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ListRetirableGrantsRequest&, const Model::ListRetirableGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRetirableGrantsResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::PutKeyPolicyRequest&, const Model::PutKeyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutKeyPolicyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ReEncryptRequest&, const Model::ReEncryptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReEncryptResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ReplicateKeyRequest&, const Model::ReplicateKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplicateKeyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::RetireGrantRequest&, const Model::RetireGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetireGrantResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::RevokeGrantRequest&, const Model::RevokeGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeGrantResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::ScheduleKeyDeletionRequest&, const Model::ScheduleKeyDeletionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScheduleKeyDeletionResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::SignRequest&, const Model::SignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::UpdateCustomKeyStoreRequest&, const Model::UpdateCustomKeyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomKeyStoreResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::UpdateKeyDescriptionRequest&, const Model::UpdateKeyDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKeyDescriptionResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::UpdatePrimaryRegionRequest&, const Model::UpdatePrimaryRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePrimaryRegionResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::VerifyRequest&, const Model::VerifyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyResponseReceivedHandler;
    typedef std::function<void(const KMSClient*, const Model::VerifyMacRequest&, const Model::VerifyMacOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyMacResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KMS
} // namespace Aws
