/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CompleteSnapshotAsync(...)  SubmitAsync(&EBSClient::CompleteSnapshot, __VA_ARGS__)
#define CompleteSnapshotCallable(REQUEST)  SubmitCallable(&EBSClient::CompleteSnapshot, REQUEST)

#define GetSnapshotBlockAsync(...)  SubmitAsync(&EBSClient::GetSnapshotBlock, __VA_ARGS__)
#define GetSnapshotBlockCallable(REQUEST)  SubmitCallable(&EBSClient::GetSnapshotBlock, REQUEST)

#define ListChangedBlocksAsync(...)  SubmitAsync(&EBSClient::ListChangedBlocks, __VA_ARGS__)
#define ListChangedBlocksCallable(REQUEST)  SubmitCallable(&EBSClient::ListChangedBlocks, REQUEST)

#define ListSnapshotBlocksAsync(...)  SubmitAsync(&EBSClient::ListSnapshotBlocks, __VA_ARGS__)
#define ListSnapshotBlocksCallable(REQUEST)  SubmitCallable(&EBSClient::ListSnapshotBlocks, REQUEST)

#define PutSnapshotBlockAsync(...)  SubmitAsync(&EBSClient::PutSnapshotBlock, __VA_ARGS__)
#define PutSnapshotBlockCallable(REQUEST)  SubmitCallable(&EBSClient::PutSnapshotBlock, REQUEST)

#define StartSnapshotAsync(...)  SubmitAsync(&EBSClient::StartSnapshot, __VA_ARGS__)
#define StartSnapshotCallable(REQUEST)  SubmitCallable(&EBSClient::StartSnapshot, REQUEST)

