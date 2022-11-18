/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateMemberAccountAsync(...)  SubmitAsync(&MacieClient::AssociateMemberAccount, __VA_ARGS__)
#define AssociateMemberAccountCallable(REQUEST)  SubmitCallable(&MacieClient::AssociateMemberAccount, REQUEST)

#define AssociateS3ResourcesAsync(...)  SubmitAsync(&MacieClient::AssociateS3Resources, __VA_ARGS__)
#define AssociateS3ResourcesCallable(REQUEST)  SubmitCallable(&MacieClient::AssociateS3Resources, REQUEST)

#define DisassociateMemberAccountAsync(...)  SubmitAsync(&MacieClient::DisassociateMemberAccount, __VA_ARGS__)
#define DisassociateMemberAccountCallable(REQUEST)  SubmitCallable(&MacieClient::DisassociateMemberAccount, REQUEST)

#define DisassociateS3ResourcesAsync(...)  SubmitAsync(&MacieClient::DisassociateS3Resources, __VA_ARGS__)
#define DisassociateS3ResourcesCallable(REQUEST)  SubmitCallable(&MacieClient::DisassociateS3Resources, REQUEST)

#define ListMemberAccountsAsync(...)  SubmitAsync(&MacieClient::ListMemberAccounts, __VA_ARGS__)
#define ListMemberAccountsCallable(REQUEST)  SubmitCallable(&MacieClient::ListMemberAccounts, REQUEST)

#define ListS3ResourcesAsync(...)  SubmitAsync(&MacieClient::ListS3Resources, __VA_ARGS__)
#define ListS3ResourcesCallable(REQUEST)  SubmitCallable(&MacieClient::ListS3Resources, REQUEST)

#define UpdateS3ResourcesAsync(...)  SubmitAsync(&MacieClient::UpdateS3Resources, __VA_ARGS__)
#define UpdateS3ResourcesCallable(REQUEST)  SubmitCallable(&MacieClient::UpdateS3Resources, REQUEST)

