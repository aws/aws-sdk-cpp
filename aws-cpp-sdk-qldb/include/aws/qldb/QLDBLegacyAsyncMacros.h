/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJournalKinesisStreamAsync(...)  SubmitAsync(&QLDBClient::CancelJournalKinesisStream, __VA_ARGS__)
#define CancelJournalKinesisStreamCallable(REQUEST)  SubmitCallable(&QLDBClient::CancelJournalKinesisStream, REQUEST)

#define CreateLedgerAsync(...)  SubmitAsync(&QLDBClient::CreateLedger, __VA_ARGS__)
#define CreateLedgerCallable(REQUEST)  SubmitCallable(&QLDBClient::CreateLedger, REQUEST)

#define DeleteLedgerAsync(...)  SubmitAsync(&QLDBClient::DeleteLedger, __VA_ARGS__)
#define DeleteLedgerCallable(REQUEST)  SubmitCallable(&QLDBClient::DeleteLedger, REQUEST)

#define DescribeJournalKinesisStreamAsync(...)  SubmitAsync(&QLDBClient::DescribeJournalKinesisStream, __VA_ARGS__)
#define DescribeJournalKinesisStreamCallable(REQUEST)  SubmitCallable(&QLDBClient::DescribeJournalKinesisStream, REQUEST)

#define DescribeJournalS3ExportAsync(...)  SubmitAsync(&QLDBClient::DescribeJournalS3Export, __VA_ARGS__)
#define DescribeJournalS3ExportCallable(REQUEST)  SubmitCallable(&QLDBClient::DescribeJournalS3Export, REQUEST)

#define DescribeLedgerAsync(...)  SubmitAsync(&QLDBClient::DescribeLedger, __VA_ARGS__)
#define DescribeLedgerCallable(REQUEST)  SubmitCallable(&QLDBClient::DescribeLedger, REQUEST)

#define ExportJournalToS3Async(...)  SubmitAsync(&QLDBClient::ExportJournalToS3, __VA_ARGS__)
#define ExportJournalToS3Callable(REQUEST)  SubmitCallable(&QLDBClient::ExportJournalToS3, REQUEST)

#define GetBlockAsync(...)  SubmitAsync(&QLDBClient::GetBlock, __VA_ARGS__)
#define GetBlockCallable(REQUEST)  SubmitCallable(&QLDBClient::GetBlock, REQUEST)

#define GetDigestAsync(...)  SubmitAsync(&QLDBClient::GetDigest, __VA_ARGS__)
#define GetDigestCallable(REQUEST)  SubmitCallable(&QLDBClient::GetDigest, REQUEST)

#define GetRevisionAsync(...)  SubmitAsync(&QLDBClient::GetRevision, __VA_ARGS__)
#define GetRevisionCallable(REQUEST)  SubmitCallable(&QLDBClient::GetRevision, REQUEST)

#define ListJournalKinesisStreamsForLedgerAsync(...)  SubmitAsync(&QLDBClient::ListJournalKinesisStreamsForLedger, __VA_ARGS__)
#define ListJournalKinesisStreamsForLedgerCallable(REQUEST)  SubmitCallable(&QLDBClient::ListJournalKinesisStreamsForLedger, REQUEST)

#define ListJournalS3ExportsAsync(...)  SubmitAsync(&QLDBClient::ListJournalS3Exports, __VA_ARGS__)
#define ListJournalS3ExportsCallable(REQUEST)  SubmitCallable(&QLDBClient::ListJournalS3Exports, REQUEST)

#define ListJournalS3ExportsForLedgerAsync(...)  SubmitAsync(&QLDBClient::ListJournalS3ExportsForLedger, __VA_ARGS__)
#define ListJournalS3ExportsForLedgerCallable(REQUEST)  SubmitCallable(&QLDBClient::ListJournalS3ExportsForLedger, REQUEST)

#define ListLedgersAsync(...)  SubmitAsync(&QLDBClient::ListLedgers, __VA_ARGS__)
#define ListLedgersCallable(REQUEST)  SubmitCallable(&QLDBClient::ListLedgers, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&QLDBClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&QLDBClient::ListTagsForResource, REQUEST)

#define StreamJournalToKinesisAsync(...)  SubmitAsync(&QLDBClient::StreamJournalToKinesis, __VA_ARGS__)
#define StreamJournalToKinesisCallable(REQUEST)  SubmitCallable(&QLDBClient::StreamJournalToKinesis, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&QLDBClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&QLDBClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&QLDBClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&QLDBClient::UntagResource, REQUEST)

#define UpdateLedgerAsync(...)  SubmitAsync(&QLDBClient::UpdateLedger, __VA_ARGS__)
#define UpdateLedgerCallable(REQUEST)  SubmitCallable(&QLDBClient::UpdateLedger, REQUEST)

#define UpdateLedgerPermissionsModeAsync(...)  SubmitAsync(&QLDBClient::UpdateLedgerPermissionsMode, __VA_ARGS__)
#define UpdateLedgerPermissionsModeCallable(REQUEST)  SubmitCallable(&QLDBClient::UpdateLedgerPermissionsMode, REQUEST)

