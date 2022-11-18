/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAccessAsync(...)  SubmitAsync(&TransferClient::CreateAccess, __VA_ARGS__)
#define CreateAccessCallable(REQUEST)  SubmitCallable(&TransferClient::CreateAccess, REQUEST)

#define CreateAgreementAsync(...)  SubmitAsync(&TransferClient::CreateAgreement, __VA_ARGS__)
#define CreateAgreementCallable(REQUEST)  SubmitCallable(&TransferClient::CreateAgreement, REQUEST)

#define CreateConnectorAsync(...)  SubmitAsync(&TransferClient::CreateConnector, __VA_ARGS__)
#define CreateConnectorCallable(REQUEST)  SubmitCallable(&TransferClient::CreateConnector, REQUEST)

#define CreateProfileAsync(...)  SubmitAsync(&TransferClient::CreateProfile, __VA_ARGS__)
#define CreateProfileCallable(REQUEST)  SubmitCallable(&TransferClient::CreateProfile, REQUEST)

#define CreateServerAsync(...)  SubmitAsync(&TransferClient::CreateServer, __VA_ARGS__)
#define CreateServerCallable(REQUEST)  SubmitCallable(&TransferClient::CreateServer, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&TransferClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&TransferClient::CreateUser, REQUEST)

#define CreateWorkflowAsync(...)  SubmitAsync(&TransferClient::CreateWorkflow, __VA_ARGS__)
#define CreateWorkflowCallable(REQUEST)  SubmitCallable(&TransferClient::CreateWorkflow, REQUEST)

#define DeleteAccessAsync(...)  SubmitAsync(&TransferClient::DeleteAccess, __VA_ARGS__)
#define DeleteAccessCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteAccess, REQUEST)

#define DeleteAgreementAsync(...)  SubmitAsync(&TransferClient::DeleteAgreement, __VA_ARGS__)
#define DeleteAgreementCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteAgreement, REQUEST)

#define DeleteCertificateAsync(...)  SubmitAsync(&TransferClient::DeleteCertificate, __VA_ARGS__)
#define DeleteCertificateCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteCertificate, REQUEST)

#define DeleteConnectorAsync(...)  SubmitAsync(&TransferClient::DeleteConnector, __VA_ARGS__)
#define DeleteConnectorCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteConnector, REQUEST)

#define DeleteHostKeyAsync(...)  SubmitAsync(&TransferClient::DeleteHostKey, __VA_ARGS__)
#define DeleteHostKeyCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteHostKey, REQUEST)

#define DeleteProfileAsync(...)  SubmitAsync(&TransferClient::DeleteProfile, __VA_ARGS__)
#define DeleteProfileCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteProfile, REQUEST)

#define DeleteServerAsync(...)  SubmitAsync(&TransferClient::DeleteServer, __VA_ARGS__)
#define DeleteServerCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteServer, REQUEST)

#define DeleteSshPublicKeyAsync(...)  SubmitAsync(&TransferClient::DeleteSshPublicKey, __VA_ARGS__)
#define DeleteSshPublicKeyCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteSshPublicKey, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&TransferClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteUser, REQUEST)

#define DeleteWorkflowAsync(...)  SubmitAsync(&TransferClient::DeleteWorkflow, __VA_ARGS__)
#define DeleteWorkflowCallable(REQUEST)  SubmitCallable(&TransferClient::DeleteWorkflow, REQUEST)

#define DescribeAccessAsync(...)  SubmitAsync(&TransferClient::DescribeAccess, __VA_ARGS__)
#define DescribeAccessCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeAccess, REQUEST)

#define DescribeAgreementAsync(...)  SubmitAsync(&TransferClient::DescribeAgreement, __VA_ARGS__)
#define DescribeAgreementCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeAgreement, REQUEST)

#define DescribeCertificateAsync(...)  SubmitAsync(&TransferClient::DescribeCertificate, __VA_ARGS__)
#define DescribeCertificateCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeCertificate, REQUEST)

#define DescribeConnectorAsync(...)  SubmitAsync(&TransferClient::DescribeConnector, __VA_ARGS__)
#define DescribeConnectorCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeConnector, REQUEST)

#define DescribeExecutionAsync(...)  SubmitAsync(&TransferClient::DescribeExecution, __VA_ARGS__)
#define DescribeExecutionCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeExecution, REQUEST)

#define DescribeHostKeyAsync(...)  SubmitAsync(&TransferClient::DescribeHostKey, __VA_ARGS__)
#define DescribeHostKeyCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeHostKey, REQUEST)

#define DescribeProfileAsync(...)  SubmitAsync(&TransferClient::DescribeProfile, __VA_ARGS__)
#define DescribeProfileCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeProfile, REQUEST)

#define DescribeSecurityPolicyAsync(...)  SubmitAsync(&TransferClient::DescribeSecurityPolicy, __VA_ARGS__)
#define DescribeSecurityPolicyCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeSecurityPolicy, REQUEST)

#define DescribeServerAsync(...)  SubmitAsync(&TransferClient::DescribeServer, __VA_ARGS__)
#define DescribeServerCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeServer, REQUEST)

#define DescribeUserAsync(...)  SubmitAsync(&TransferClient::DescribeUser, __VA_ARGS__)
#define DescribeUserCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeUser, REQUEST)

#define DescribeWorkflowAsync(...)  SubmitAsync(&TransferClient::DescribeWorkflow, __VA_ARGS__)
#define DescribeWorkflowCallable(REQUEST)  SubmitCallable(&TransferClient::DescribeWorkflow, REQUEST)

#define ImportCertificateAsync(...)  SubmitAsync(&TransferClient::ImportCertificate, __VA_ARGS__)
#define ImportCertificateCallable(REQUEST)  SubmitCallable(&TransferClient::ImportCertificate, REQUEST)

#define ImportHostKeyAsync(...)  SubmitAsync(&TransferClient::ImportHostKey, __VA_ARGS__)
#define ImportHostKeyCallable(REQUEST)  SubmitCallable(&TransferClient::ImportHostKey, REQUEST)

#define ImportSshPublicKeyAsync(...)  SubmitAsync(&TransferClient::ImportSshPublicKey, __VA_ARGS__)
#define ImportSshPublicKeyCallable(REQUEST)  SubmitCallable(&TransferClient::ImportSshPublicKey, REQUEST)

#define ListAccessesAsync(...)  SubmitAsync(&TransferClient::ListAccesses, __VA_ARGS__)
#define ListAccessesCallable(REQUEST)  SubmitCallable(&TransferClient::ListAccesses, REQUEST)

#define ListAgreementsAsync(...)  SubmitAsync(&TransferClient::ListAgreements, __VA_ARGS__)
#define ListAgreementsCallable(REQUEST)  SubmitCallable(&TransferClient::ListAgreements, REQUEST)

#define ListCertificatesAsync(...)  SubmitAsync(&TransferClient::ListCertificates, __VA_ARGS__)
#define ListCertificatesCallable(REQUEST)  SubmitCallable(&TransferClient::ListCertificates, REQUEST)

#define ListConnectorsAsync(...)  SubmitAsync(&TransferClient::ListConnectors, __VA_ARGS__)
#define ListConnectorsCallable(REQUEST)  SubmitCallable(&TransferClient::ListConnectors, REQUEST)

#define ListExecutionsAsync(...)  SubmitAsync(&TransferClient::ListExecutions, __VA_ARGS__)
#define ListExecutionsCallable(REQUEST)  SubmitCallable(&TransferClient::ListExecutions, REQUEST)

#define ListHostKeysAsync(...)  SubmitAsync(&TransferClient::ListHostKeys, __VA_ARGS__)
#define ListHostKeysCallable(REQUEST)  SubmitCallable(&TransferClient::ListHostKeys, REQUEST)

#define ListProfilesAsync(...)  SubmitAsync(&TransferClient::ListProfiles, __VA_ARGS__)
#define ListProfilesCallable(REQUEST)  SubmitCallable(&TransferClient::ListProfiles, REQUEST)

#define ListSecurityPoliciesAsync(...)  SubmitAsync(&TransferClient::ListSecurityPolicies, __VA_ARGS__)
#define ListSecurityPoliciesCallable(REQUEST)  SubmitCallable(&TransferClient::ListSecurityPolicies, REQUEST)

#define ListServersAsync(...)  SubmitAsync(&TransferClient::ListServers, __VA_ARGS__)
#define ListServersCallable(REQUEST)  SubmitCallable(&TransferClient::ListServers, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&TransferClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&TransferClient::ListTagsForResource, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&TransferClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&TransferClient::ListUsers, REQUEST)

#define ListWorkflowsAsync(...)  SubmitAsync(&TransferClient::ListWorkflows, __VA_ARGS__)
#define ListWorkflowsCallable(REQUEST)  SubmitCallable(&TransferClient::ListWorkflows, REQUEST)

#define SendWorkflowStepStateAsync(...)  SubmitAsync(&TransferClient::SendWorkflowStepState, __VA_ARGS__)
#define SendWorkflowStepStateCallable(REQUEST)  SubmitCallable(&TransferClient::SendWorkflowStepState, REQUEST)

#define StartFileTransferAsync(...)  SubmitAsync(&TransferClient::StartFileTransfer, __VA_ARGS__)
#define StartFileTransferCallable(REQUEST)  SubmitCallable(&TransferClient::StartFileTransfer, REQUEST)

#define StartServerAsync(...)  SubmitAsync(&TransferClient::StartServer, __VA_ARGS__)
#define StartServerCallable(REQUEST)  SubmitCallable(&TransferClient::StartServer, REQUEST)

#define StopServerAsync(...)  SubmitAsync(&TransferClient::StopServer, __VA_ARGS__)
#define StopServerCallable(REQUEST)  SubmitCallable(&TransferClient::StopServer, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&TransferClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&TransferClient::TagResource, REQUEST)

#define TestIdentityProviderAsync(...)  SubmitAsync(&TransferClient::TestIdentityProvider, __VA_ARGS__)
#define TestIdentityProviderCallable(REQUEST)  SubmitCallable(&TransferClient::TestIdentityProvider, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&TransferClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&TransferClient::UntagResource, REQUEST)

#define UpdateAccessAsync(...)  SubmitAsync(&TransferClient::UpdateAccess, __VA_ARGS__)
#define UpdateAccessCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateAccess, REQUEST)

#define UpdateAgreementAsync(...)  SubmitAsync(&TransferClient::UpdateAgreement, __VA_ARGS__)
#define UpdateAgreementCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateAgreement, REQUEST)

#define UpdateCertificateAsync(...)  SubmitAsync(&TransferClient::UpdateCertificate, __VA_ARGS__)
#define UpdateCertificateCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateCertificate, REQUEST)

#define UpdateConnectorAsync(...)  SubmitAsync(&TransferClient::UpdateConnector, __VA_ARGS__)
#define UpdateConnectorCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateConnector, REQUEST)

#define UpdateHostKeyAsync(...)  SubmitAsync(&TransferClient::UpdateHostKey, __VA_ARGS__)
#define UpdateHostKeyCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateHostKey, REQUEST)

#define UpdateProfileAsync(...)  SubmitAsync(&TransferClient::UpdateProfile, __VA_ARGS__)
#define UpdateProfileCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateProfile, REQUEST)

#define UpdateServerAsync(...)  SubmitAsync(&TransferClient::UpdateServer, __VA_ARGS__)
#define UpdateServerCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateServer, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&TransferClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&TransferClient::UpdateUser, REQUEST)

