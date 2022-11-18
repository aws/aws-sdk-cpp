/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteObjectAsync(...)  SubmitAsync(&BackupStorageClient::DeleteObject, __VA_ARGS__)
#define DeleteObjectCallable(REQUEST)  SubmitCallable(&BackupStorageClient::DeleteObject, REQUEST)

#define GetChunkAsync(...)  SubmitAsync(&BackupStorageClient::GetChunk, __VA_ARGS__)
#define GetChunkCallable(REQUEST)  SubmitCallable(&BackupStorageClient::GetChunk, REQUEST)

#define GetObjectMetadataAsync(...)  SubmitAsync(&BackupStorageClient::GetObjectMetadata, __VA_ARGS__)
#define GetObjectMetadataCallable(REQUEST)  SubmitCallable(&BackupStorageClient::GetObjectMetadata, REQUEST)

#define ListChunksAsync(...)  SubmitAsync(&BackupStorageClient::ListChunks, __VA_ARGS__)
#define ListChunksCallable(REQUEST)  SubmitCallable(&BackupStorageClient::ListChunks, REQUEST)

#define ListObjectsAsync(...)  SubmitAsync(&BackupStorageClient::ListObjects, __VA_ARGS__)
#define ListObjectsCallable(REQUEST)  SubmitCallable(&BackupStorageClient::ListObjects, REQUEST)

#define NotifyObjectCompleteAsync(...)  SubmitAsync(&BackupStorageClient::NotifyObjectComplete, __VA_ARGS__)
#define NotifyObjectCompleteCallable(REQUEST)  SubmitCallable(&BackupStorageClient::NotifyObjectComplete, REQUEST)

#define PutChunkAsync(...)  SubmitAsync(&BackupStorageClient::PutChunk, __VA_ARGS__)
#define PutChunkCallable(REQUEST)  SubmitCallable(&BackupStorageClient::PutChunk, REQUEST)

#define PutObjectAsync(...)  SubmitAsync(&BackupStorageClient::PutObject, __VA_ARGS__)
#define PutObjectCallable(REQUEST)  SubmitCallable(&BackupStorageClient::PutObject, REQUEST)

#define StartObjectAsync(...)  SubmitAsync(&BackupStorageClient::StartObject, __VA_ARGS__)
#define StartObjectCallable(REQUEST)  SubmitCallable(&BackupStorageClient::StartObject, REQUEST)

