/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAccessorAsync(...)  SubmitAsync(&ManagedBlockchainClient::CreateAccessor, __VA_ARGS__)
#define CreateAccessorCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::CreateAccessor, REQUEST)

#define CreateMemberAsync(...)  SubmitAsync(&ManagedBlockchainClient::CreateMember, __VA_ARGS__)
#define CreateMemberCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::CreateMember, REQUEST)

#define CreateNetworkAsync(...)  SubmitAsync(&ManagedBlockchainClient::CreateNetwork, __VA_ARGS__)
#define CreateNetworkCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::CreateNetwork, REQUEST)

#define CreateNodeAsync(...)  SubmitAsync(&ManagedBlockchainClient::CreateNode, __VA_ARGS__)
#define CreateNodeCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::CreateNode, REQUEST)

#define CreateProposalAsync(...)  SubmitAsync(&ManagedBlockchainClient::CreateProposal, __VA_ARGS__)
#define CreateProposalCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::CreateProposal, REQUEST)

#define DeleteAccessorAsync(...)  SubmitAsync(&ManagedBlockchainClient::DeleteAccessor, __VA_ARGS__)
#define DeleteAccessorCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::DeleteAccessor, REQUEST)

#define DeleteMemberAsync(...)  SubmitAsync(&ManagedBlockchainClient::DeleteMember, __VA_ARGS__)
#define DeleteMemberCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::DeleteMember, REQUEST)

#define DeleteNodeAsync(...)  SubmitAsync(&ManagedBlockchainClient::DeleteNode, __VA_ARGS__)
#define DeleteNodeCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::DeleteNode, REQUEST)

#define GetAccessorAsync(...)  SubmitAsync(&ManagedBlockchainClient::GetAccessor, __VA_ARGS__)
#define GetAccessorCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::GetAccessor, REQUEST)

#define GetMemberAsync(...)  SubmitAsync(&ManagedBlockchainClient::GetMember, __VA_ARGS__)
#define GetMemberCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::GetMember, REQUEST)

#define GetNetworkAsync(...)  SubmitAsync(&ManagedBlockchainClient::GetNetwork, __VA_ARGS__)
#define GetNetworkCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::GetNetwork, REQUEST)

#define GetNodeAsync(...)  SubmitAsync(&ManagedBlockchainClient::GetNode, __VA_ARGS__)
#define GetNodeCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::GetNode, REQUEST)

#define GetProposalAsync(...)  SubmitAsync(&ManagedBlockchainClient::GetProposal, __VA_ARGS__)
#define GetProposalCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::GetProposal, REQUEST)

#define ListAccessorsAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListAccessors, __VA_ARGS__)
#define ListAccessorsCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListAccessors, REQUEST)

#define ListInvitationsAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListInvitations, __VA_ARGS__)
#define ListInvitationsCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListInvitations, REQUEST)

#define ListMembersAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListMembers, __VA_ARGS__)
#define ListMembersCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListMembers, REQUEST)

#define ListNetworksAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListNetworks, __VA_ARGS__)
#define ListNetworksCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListNetworks, REQUEST)

#define ListNodesAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListNodes, __VA_ARGS__)
#define ListNodesCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListNodes, REQUEST)

#define ListProposalVotesAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListProposalVotes, __VA_ARGS__)
#define ListProposalVotesCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListProposalVotes, REQUEST)

#define ListProposalsAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListProposals, __VA_ARGS__)
#define ListProposalsCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListProposals, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ManagedBlockchainClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::ListTagsForResource, REQUEST)

#define RejectInvitationAsync(...)  SubmitAsync(&ManagedBlockchainClient::RejectInvitation, __VA_ARGS__)
#define RejectInvitationCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::RejectInvitation, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ManagedBlockchainClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ManagedBlockchainClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::UntagResource, REQUEST)

#define UpdateMemberAsync(...)  SubmitAsync(&ManagedBlockchainClient::UpdateMember, __VA_ARGS__)
#define UpdateMemberCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::UpdateMember, REQUEST)

#define UpdateNodeAsync(...)  SubmitAsync(&ManagedBlockchainClient::UpdateNode, __VA_ARGS__)
#define UpdateNodeCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::UpdateNode, REQUEST)

#define VoteOnProposalAsync(...)  SubmitAsync(&ManagedBlockchainClient::VoteOnProposal, __VA_ARGS__)
#define VoteOnProposalCallable(REQUEST)  SubmitCallable(&ManagedBlockchainClient::VoteOnProposal, REQUEST)

