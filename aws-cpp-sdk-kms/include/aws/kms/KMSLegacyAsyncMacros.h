/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelKeyDeletionAsync(...)  SubmitAsync(&KMSClient::CancelKeyDeletion, __VA_ARGS__)
#define CancelKeyDeletionCallable(REQUEST)  SubmitCallable(&KMSClient::CancelKeyDeletion, REQUEST)

#define ConnectCustomKeyStoreAsync(...)  SubmitAsync(&KMSClient::ConnectCustomKeyStore, __VA_ARGS__)
#define ConnectCustomKeyStoreCallable(REQUEST)  SubmitCallable(&KMSClient::ConnectCustomKeyStore, REQUEST)

#define CreateAliasAsync(...)  SubmitAsync(&KMSClient::CreateAlias, __VA_ARGS__)
#define CreateAliasCallable(REQUEST)  SubmitCallable(&KMSClient::CreateAlias, REQUEST)

#define CreateCustomKeyStoreAsync(...)  SubmitAsync(&KMSClient::CreateCustomKeyStore, __VA_ARGS__)
#define CreateCustomKeyStoreCallable(REQUEST)  SubmitCallable(&KMSClient::CreateCustomKeyStore, REQUEST)

#define CreateGrantAsync(...)  SubmitAsync(&KMSClient::CreateGrant, __VA_ARGS__)
#define CreateGrantCallable(REQUEST)  SubmitCallable(&KMSClient::CreateGrant, REQUEST)

#define CreateKeyAsync(...)  SubmitAsync(&KMSClient::CreateKey, __VA_ARGS__)
#define CreateKeyCallable(REQUEST)  SubmitCallable(&KMSClient::CreateKey, REQUEST)

#define DecryptAsync(...)  SubmitAsync(&KMSClient::Decrypt, __VA_ARGS__)
#define DecryptCallable(REQUEST)  SubmitCallable(&KMSClient::Decrypt, REQUEST)

#define DeleteAliasAsync(...)  SubmitAsync(&KMSClient::DeleteAlias, __VA_ARGS__)
#define DeleteAliasCallable(REQUEST)  SubmitCallable(&KMSClient::DeleteAlias, REQUEST)

#define DeleteCustomKeyStoreAsync(...)  SubmitAsync(&KMSClient::DeleteCustomKeyStore, __VA_ARGS__)
#define DeleteCustomKeyStoreCallable(REQUEST)  SubmitCallable(&KMSClient::DeleteCustomKeyStore, REQUEST)

#define DeleteImportedKeyMaterialAsync(...)  SubmitAsync(&KMSClient::DeleteImportedKeyMaterial, __VA_ARGS__)
#define DeleteImportedKeyMaterialCallable(REQUEST)  SubmitCallable(&KMSClient::DeleteImportedKeyMaterial, REQUEST)

#define DescribeCustomKeyStoresAsync(...)  SubmitAsync(&KMSClient::DescribeCustomKeyStores, __VA_ARGS__)
#define DescribeCustomKeyStoresCallable(REQUEST)  SubmitCallable(&KMSClient::DescribeCustomKeyStores, REQUEST)

#define DescribeKeyAsync(...)  SubmitAsync(&KMSClient::DescribeKey, __VA_ARGS__)
#define DescribeKeyCallable(REQUEST)  SubmitCallable(&KMSClient::DescribeKey, REQUEST)

#define DisableKeyAsync(...)  SubmitAsync(&KMSClient::DisableKey, __VA_ARGS__)
#define DisableKeyCallable(REQUEST)  SubmitCallable(&KMSClient::DisableKey, REQUEST)

#define DisableKeyRotationAsync(...)  SubmitAsync(&KMSClient::DisableKeyRotation, __VA_ARGS__)
#define DisableKeyRotationCallable(REQUEST)  SubmitCallable(&KMSClient::DisableKeyRotation, REQUEST)

#define DisconnectCustomKeyStoreAsync(...)  SubmitAsync(&KMSClient::DisconnectCustomKeyStore, __VA_ARGS__)
#define DisconnectCustomKeyStoreCallable(REQUEST)  SubmitCallable(&KMSClient::DisconnectCustomKeyStore, REQUEST)

#define EnableKeyAsync(...)  SubmitAsync(&KMSClient::EnableKey, __VA_ARGS__)
#define EnableKeyCallable(REQUEST)  SubmitCallable(&KMSClient::EnableKey, REQUEST)

#define EnableKeyRotationAsync(...)  SubmitAsync(&KMSClient::EnableKeyRotation, __VA_ARGS__)
#define EnableKeyRotationCallable(REQUEST)  SubmitCallable(&KMSClient::EnableKeyRotation, REQUEST)

#define EncryptAsync(...)  SubmitAsync(&KMSClient::Encrypt, __VA_ARGS__)
#define EncryptCallable(REQUEST)  SubmitCallable(&KMSClient::Encrypt, REQUEST)

#define GenerateDataKeyAsync(...)  SubmitAsync(&KMSClient::GenerateDataKey, __VA_ARGS__)
#define GenerateDataKeyCallable(REQUEST)  SubmitCallable(&KMSClient::GenerateDataKey, REQUEST)

#define GenerateDataKeyPairAsync(...)  SubmitAsync(&KMSClient::GenerateDataKeyPair, __VA_ARGS__)
#define GenerateDataKeyPairCallable(REQUEST)  SubmitCallable(&KMSClient::GenerateDataKeyPair, REQUEST)

#define GenerateDataKeyPairWithoutPlaintextAsync(...)  SubmitAsync(&KMSClient::GenerateDataKeyPairWithoutPlaintext, __VA_ARGS__)
#define GenerateDataKeyPairWithoutPlaintextCallable(REQUEST)  SubmitCallable(&KMSClient::GenerateDataKeyPairWithoutPlaintext, REQUEST)

#define GenerateDataKeyWithoutPlaintextAsync(...)  SubmitAsync(&KMSClient::GenerateDataKeyWithoutPlaintext, __VA_ARGS__)
#define GenerateDataKeyWithoutPlaintextCallable(REQUEST)  SubmitCallable(&KMSClient::GenerateDataKeyWithoutPlaintext, REQUEST)

#define GenerateMacAsync(...)  SubmitAsync(&KMSClient::GenerateMac, __VA_ARGS__)
#define GenerateMacCallable(REQUEST)  SubmitCallable(&KMSClient::GenerateMac, REQUEST)

#define GenerateRandomAsync(...)  SubmitAsync(&KMSClient::GenerateRandom, __VA_ARGS__)
#define GenerateRandomCallable(REQUEST)  SubmitCallable(&KMSClient::GenerateRandom, REQUEST)

#define GetKeyPolicyAsync(...)  SubmitAsync(&KMSClient::GetKeyPolicy, __VA_ARGS__)
#define GetKeyPolicyCallable(REQUEST)  SubmitCallable(&KMSClient::GetKeyPolicy, REQUEST)

#define GetKeyRotationStatusAsync(...)  SubmitAsync(&KMSClient::GetKeyRotationStatus, __VA_ARGS__)
#define GetKeyRotationStatusCallable(REQUEST)  SubmitCallable(&KMSClient::GetKeyRotationStatus, REQUEST)

#define GetParametersForImportAsync(...)  SubmitAsync(&KMSClient::GetParametersForImport, __VA_ARGS__)
#define GetParametersForImportCallable(REQUEST)  SubmitCallable(&KMSClient::GetParametersForImport, REQUEST)

#define GetPublicKeyAsync(...)  SubmitAsync(&KMSClient::GetPublicKey, __VA_ARGS__)
#define GetPublicKeyCallable(REQUEST)  SubmitCallable(&KMSClient::GetPublicKey, REQUEST)

#define ImportKeyMaterialAsync(...)  SubmitAsync(&KMSClient::ImportKeyMaterial, __VA_ARGS__)
#define ImportKeyMaterialCallable(REQUEST)  SubmitCallable(&KMSClient::ImportKeyMaterial, REQUEST)

#define ListAliasesAsync(...)  SubmitAsync(&KMSClient::ListAliases, __VA_ARGS__)
#define ListAliasesCallable(REQUEST)  SubmitCallable(&KMSClient::ListAliases, REQUEST)

#define ListGrantsAsync(...)  SubmitAsync(&KMSClient::ListGrants, __VA_ARGS__)
#define ListGrantsCallable(REQUEST)  SubmitCallable(&KMSClient::ListGrants, REQUEST)

#define ListKeyPoliciesAsync(...)  SubmitAsync(&KMSClient::ListKeyPolicies, __VA_ARGS__)
#define ListKeyPoliciesCallable(REQUEST)  SubmitCallable(&KMSClient::ListKeyPolicies, REQUEST)

#define ListKeysAsync(...)  SubmitAsync(&KMSClient::ListKeys, __VA_ARGS__)
#define ListKeysCallable(REQUEST)  SubmitCallable(&KMSClient::ListKeys, REQUEST)

#define ListResourceTagsAsync(...)  SubmitAsync(&KMSClient::ListResourceTags, __VA_ARGS__)
#define ListResourceTagsCallable(REQUEST)  SubmitCallable(&KMSClient::ListResourceTags, REQUEST)

#define ListRetirableGrantsAsync(...)  SubmitAsync(&KMSClient::ListRetirableGrants, __VA_ARGS__)
#define ListRetirableGrantsCallable(REQUEST)  SubmitCallable(&KMSClient::ListRetirableGrants, REQUEST)

#define PutKeyPolicyAsync(...)  SubmitAsync(&KMSClient::PutKeyPolicy, __VA_ARGS__)
#define PutKeyPolicyCallable(REQUEST)  SubmitCallable(&KMSClient::PutKeyPolicy, REQUEST)

#define ReEncryptAsync(...)  SubmitAsync(&KMSClient::ReEncrypt, __VA_ARGS__)
#define ReEncryptCallable(REQUEST)  SubmitCallable(&KMSClient::ReEncrypt, REQUEST)

#define ReplicateKeyAsync(...)  SubmitAsync(&KMSClient::ReplicateKey, __VA_ARGS__)
#define ReplicateKeyCallable(REQUEST)  SubmitCallable(&KMSClient::ReplicateKey, REQUEST)

#define RetireGrantAsync(...)  SubmitAsync(&KMSClient::RetireGrant, __VA_ARGS__)
#define RetireGrantCallable(REQUEST)  SubmitCallable(&KMSClient::RetireGrant, REQUEST)

#define RevokeGrantAsync(...)  SubmitAsync(&KMSClient::RevokeGrant, __VA_ARGS__)
#define RevokeGrantCallable(REQUEST)  SubmitCallable(&KMSClient::RevokeGrant, REQUEST)

#define ScheduleKeyDeletionAsync(...)  SubmitAsync(&KMSClient::ScheduleKeyDeletion, __VA_ARGS__)
#define ScheduleKeyDeletionCallable(REQUEST)  SubmitCallable(&KMSClient::ScheduleKeyDeletion, REQUEST)

#define SignAsync(...)  SubmitAsync(&KMSClient::Sign, __VA_ARGS__)
#define SignCallable(REQUEST)  SubmitCallable(&KMSClient::Sign, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&KMSClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&KMSClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&KMSClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&KMSClient::UntagResource, REQUEST)

#define UpdateAliasAsync(...)  SubmitAsync(&KMSClient::UpdateAlias, __VA_ARGS__)
#define UpdateAliasCallable(REQUEST)  SubmitCallable(&KMSClient::UpdateAlias, REQUEST)

#define UpdateCustomKeyStoreAsync(...)  SubmitAsync(&KMSClient::UpdateCustomKeyStore, __VA_ARGS__)
#define UpdateCustomKeyStoreCallable(REQUEST)  SubmitCallable(&KMSClient::UpdateCustomKeyStore, REQUEST)

#define UpdateKeyDescriptionAsync(...)  SubmitAsync(&KMSClient::UpdateKeyDescription, __VA_ARGS__)
#define UpdateKeyDescriptionCallable(REQUEST)  SubmitCallable(&KMSClient::UpdateKeyDescription, REQUEST)

#define UpdatePrimaryRegionAsync(...)  SubmitAsync(&KMSClient::UpdatePrimaryRegion, __VA_ARGS__)
#define UpdatePrimaryRegionCallable(REQUEST)  SubmitCallable(&KMSClient::UpdatePrimaryRegion, REQUEST)

#define VerifyAsync(...)  SubmitAsync(&KMSClient::Verify, __VA_ARGS__)
#define VerifyCallable(REQUEST)  SubmitCallable(&KMSClient::Verify, REQUEST)

#define VerifyMacAsync(...)  SubmitAsync(&KMSClient::VerifyMac, __VA_ARGS__)
#define VerifyMacCallable(REQUEST)  SubmitCallable(&KMSClient::VerifyMac, REQUEST)

