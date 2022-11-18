/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CompleteAttachmentUploadAsync(...)  SubmitAsync(&ConnectParticipantClient::CompleteAttachmentUpload, __VA_ARGS__)
#define CompleteAttachmentUploadCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::CompleteAttachmentUpload, REQUEST)

#define CreateParticipantConnectionAsync(...)  SubmitAsync(&ConnectParticipantClient::CreateParticipantConnection, __VA_ARGS__)
#define CreateParticipantConnectionCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::CreateParticipantConnection, REQUEST)

#define DisconnectParticipantAsync(...)  SubmitAsync(&ConnectParticipantClient::DisconnectParticipant, __VA_ARGS__)
#define DisconnectParticipantCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::DisconnectParticipant, REQUEST)

#define GetAttachmentAsync(...)  SubmitAsync(&ConnectParticipantClient::GetAttachment, __VA_ARGS__)
#define GetAttachmentCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::GetAttachment, REQUEST)

#define GetTranscriptAsync(...)  SubmitAsync(&ConnectParticipantClient::GetTranscript, __VA_ARGS__)
#define GetTranscriptCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::GetTranscript, REQUEST)

#define SendEventAsync(...)  SubmitAsync(&ConnectParticipantClient::SendEvent, __VA_ARGS__)
#define SendEventCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::SendEvent, REQUEST)

#define SendMessageAsync(...)  SubmitAsync(&ConnectParticipantClient::SendMessage, __VA_ARGS__)
#define SendMessageCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::SendMessage, REQUEST)

#define StartAttachmentUploadAsync(...)  SubmitAsync(&ConnectParticipantClient::StartAttachmentUpload, __VA_ARGS__)
#define StartAttachmentUploadCallable(REQUEST)  SubmitCallable(&ConnectParticipantClient::StartAttachmentUpload, REQUEST)

