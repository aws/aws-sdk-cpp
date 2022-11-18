/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelRotateSecretAsync(...)  SubmitAsync(&SecretsManagerClient::CancelRotateSecret, __VA_ARGS__)
#define CancelRotateSecretCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::CancelRotateSecret, REQUEST)

#define CreateSecretAsync(...)  SubmitAsync(&SecretsManagerClient::CreateSecret, __VA_ARGS__)
#define CreateSecretCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::CreateSecret, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&SecretsManagerClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::DeleteResourcePolicy, REQUEST)

#define DeleteSecretAsync(...)  SubmitAsync(&SecretsManagerClient::DeleteSecret, __VA_ARGS__)
#define DeleteSecretCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::DeleteSecret, REQUEST)

#define DescribeSecretAsync(...)  SubmitAsync(&SecretsManagerClient::DescribeSecret, __VA_ARGS__)
#define DescribeSecretCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::DescribeSecret, REQUEST)

#define GetRandomPasswordAsync(...)  SubmitAsync(&SecretsManagerClient::GetRandomPassword, __VA_ARGS__)
#define GetRandomPasswordCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::GetRandomPassword, REQUEST)

#define GetResourcePolicyAsync(...)  SubmitAsync(&SecretsManagerClient::GetResourcePolicy, __VA_ARGS__)
#define GetResourcePolicyCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::GetResourcePolicy, REQUEST)

#define GetSecretValueAsync(...)  SubmitAsync(&SecretsManagerClient::GetSecretValue, __VA_ARGS__)
#define GetSecretValueCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::GetSecretValue, REQUEST)

#define ListSecretVersionIdsAsync(...)  SubmitAsync(&SecretsManagerClient::ListSecretVersionIds, __VA_ARGS__)
#define ListSecretVersionIdsCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::ListSecretVersionIds, REQUEST)

#define ListSecretsAsync(...)  SubmitAsync(&SecretsManagerClient::ListSecrets, __VA_ARGS__)
#define ListSecretsCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::ListSecrets, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&SecretsManagerClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::PutResourcePolicy, REQUEST)

#define PutSecretValueAsync(...)  SubmitAsync(&SecretsManagerClient::PutSecretValue, __VA_ARGS__)
#define PutSecretValueCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::PutSecretValue, REQUEST)

#define RemoveRegionsFromReplicationAsync(...)  SubmitAsync(&SecretsManagerClient::RemoveRegionsFromReplication, __VA_ARGS__)
#define RemoveRegionsFromReplicationCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::RemoveRegionsFromReplication, REQUEST)

#define ReplicateSecretToRegionsAsync(...)  SubmitAsync(&SecretsManagerClient::ReplicateSecretToRegions, __VA_ARGS__)
#define ReplicateSecretToRegionsCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::ReplicateSecretToRegions, REQUEST)

#define RestoreSecretAsync(...)  SubmitAsync(&SecretsManagerClient::RestoreSecret, __VA_ARGS__)
#define RestoreSecretCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::RestoreSecret, REQUEST)

#define RotateSecretAsync(...)  SubmitAsync(&SecretsManagerClient::RotateSecret, __VA_ARGS__)
#define RotateSecretCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::RotateSecret, REQUEST)

#define StopReplicationToReplicaAsync(...)  SubmitAsync(&SecretsManagerClient::StopReplicationToReplica, __VA_ARGS__)
#define StopReplicationToReplicaCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::StopReplicationToReplica, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SecretsManagerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SecretsManagerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::UntagResource, REQUEST)

#define UpdateSecretAsync(...)  SubmitAsync(&SecretsManagerClient::UpdateSecret, __VA_ARGS__)
#define UpdateSecretCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::UpdateSecret, REQUEST)

#define UpdateSecretVersionStageAsync(...)  SubmitAsync(&SecretsManagerClient::UpdateSecretVersionStage, __VA_ARGS__)
#define UpdateSecretVersionStageCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::UpdateSecretVersionStage, REQUEST)

#define ValidateResourcePolicyAsync(...)  SubmitAsync(&SecretsManagerClient::ValidateResourcePolicy, __VA_ARGS__)
#define ValidateResourcePolicyCallable(REQUEST)  SubmitCallable(&SecretsManagerClient::ValidateResourcePolicy, REQUEST)

