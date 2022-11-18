/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAssistantAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::CreateAssistant, __VA_ARGS__)
#define CreateAssistantCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::CreateAssistant, REQUEST)

#define CreateAssistantAssociationAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::CreateAssistantAssociation, __VA_ARGS__)
#define CreateAssistantAssociationCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::CreateAssistantAssociation, REQUEST)

#define CreateContentAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::CreateContent, __VA_ARGS__)
#define CreateContentCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::CreateContent, REQUEST)

#define CreateKnowledgeBaseAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::CreateKnowledgeBase, __VA_ARGS__)
#define CreateKnowledgeBaseCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::CreateKnowledgeBase, REQUEST)

#define CreateSessionAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::CreateSession, __VA_ARGS__)
#define CreateSessionCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::CreateSession, REQUEST)

#define DeleteAssistantAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::DeleteAssistant, __VA_ARGS__)
#define DeleteAssistantCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::DeleteAssistant, REQUEST)

#define DeleteAssistantAssociationAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::DeleteAssistantAssociation, __VA_ARGS__)
#define DeleteAssistantAssociationCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::DeleteAssistantAssociation, REQUEST)

#define DeleteContentAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::DeleteContent, __VA_ARGS__)
#define DeleteContentCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::DeleteContent, REQUEST)

#define DeleteKnowledgeBaseAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::DeleteKnowledgeBase, __VA_ARGS__)
#define DeleteKnowledgeBaseCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::DeleteKnowledgeBase, REQUEST)

#define GetAssistantAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::GetAssistant, __VA_ARGS__)
#define GetAssistantCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::GetAssistant, REQUEST)

#define GetAssistantAssociationAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::GetAssistantAssociation, __VA_ARGS__)
#define GetAssistantAssociationCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::GetAssistantAssociation, REQUEST)

#define GetContentAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::GetContent, __VA_ARGS__)
#define GetContentCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::GetContent, REQUEST)

#define GetContentSummaryAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::GetContentSummary, __VA_ARGS__)
#define GetContentSummaryCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::GetContentSummary, REQUEST)

#define GetKnowledgeBaseAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::GetKnowledgeBase, __VA_ARGS__)
#define GetKnowledgeBaseCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::GetKnowledgeBase, REQUEST)

#define GetRecommendationsAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::GetRecommendations, __VA_ARGS__)
#define GetRecommendationsCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::GetRecommendations, REQUEST)

#define GetSessionAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::GetSession, __VA_ARGS__)
#define GetSessionCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::GetSession, REQUEST)

#define ListAssistantAssociationsAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::ListAssistantAssociations, __VA_ARGS__)
#define ListAssistantAssociationsCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::ListAssistantAssociations, REQUEST)

#define ListAssistantsAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::ListAssistants, __VA_ARGS__)
#define ListAssistantsCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::ListAssistants, REQUEST)

#define ListContentsAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::ListContents, __VA_ARGS__)
#define ListContentsCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::ListContents, REQUEST)

#define ListKnowledgeBasesAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::ListKnowledgeBases, __VA_ARGS__)
#define ListKnowledgeBasesCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::ListKnowledgeBases, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::ListTagsForResource, REQUEST)

#define NotifyRecommendationsReceivedAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::NotifyRecommendationsReceived, __VA_ARGS__)
#define NotifyRecommendationsReceivedCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::NotifyRecommendationsReceived, REQUEST)

#define QueryAssistantAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::QueryAssistant, __VA_ARGS__)
#define QueryAssistantCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::QueryAssistant, REQUEST)

#define RemoveKnowledgeBaseTemplateUriAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUri, __VA_ARGS__)
#define RemoveKnowledgeBaseTemplateUriCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUri, REQUEST)

#define SearchContentAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::SearchContent, __VA_ARGS__)
#define SearchContentCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::SearchContent, REQUEST)

#define SearchSessionsAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::SearchSessions, __VA_ARGS__)
#define SearchSessionsCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::SearchSessions, REQUEST)

#define StartContentUploadAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::StartContentUpload, __VA_ARGS__)
#define StartContentUploadCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::StartContentUpload, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::UntagResource, REQUEST)

#define UpdateContentAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::UpdateContent, __VA_ARGS__)
#define UpdateContentCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::UpdateContent, REQUEST)

#define UpdateKnowledgeBaseTemplateUriAsync(...)  SubmitAsync(&ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUri, __VA_ARGS__)
#define UpdateKnowledgeBaseTemplateUriCallable(REQUEST)  SubmitCallable(&ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUri, REQUEST)

