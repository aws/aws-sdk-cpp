/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BulkPublishAsync(...)  SubmitAsync(&CognitoSyncClient::BulkPublish, __VA_ARGS__)
#define BulkPublishCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::BulkPublish, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&CognitoSyncClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::DeleteDataset, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&CognitoSyncClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::DescribeDataset, REQUEST)

#define DescribeIdentityPoolUsageAsync(...)  SubmitAsync(&CognitoSyncClient::DescribeIdentityPoolUsage, __VA_ARGS__)
#define DescribeIdentityPoolUsageCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::DescribeIdentityPoolUsage, REQUEST)

#define DescribeIdentityUsageAsync(...)  SubmitAsync(&CognitoSyncClient::DescribeIdentityUsage, __VA_ARGS__)
#define DescribeIdentityUsageCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::DescribeIdentityUsage, REQUEST)

#define GetBulkPublishDetailsAsync(...)  SubmitAsync(&CognitoSyncClient::GetBulkPublishDetails, __VA_ARGS__)
#define GetBulkPublishDetailsCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::GetBulkPublishDetails, REQUEST)

#define GetCognitoEventsAsync(...)  SubmitAsync(&CognitoSyncClient::GetCognitoEvents, __VA_ARGS__)
#define GetCognitoEventsCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::GetCognitoEvents, REQUEST)

#define GetIdentityPoolConfigurationAsync(...)  SubmitAsync(&CognitoSyncClient::GetIdentityPoolConfiguration, __VA_ARGS__)
#define GetIdentityPoolConfigurationCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::GetIdentityPoolConfiguration, REQUEST)

#define ListDatasetsAsync(...)  SubmitAsync(&CognitoSyncClient::ListDatasets, __VA_ARGS__)
#define ListDatasetsCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::ListDatasets, REQUEST)

#define ListIdentityPoolUsageAsync(...)  SubmitAsync(&CognitoSyncClient::ListIdentityPoolUsage, __VA_ARGS__)
#define ListIdentityPoolUsageCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::ListIdentityPoolUsage, REQUEST)

#define ListRecordsAsync(...)  SubmitAsync(&CognitoSyncClient::ListRecords, __VA_ARGS__)
#define ListRecordsCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::ListRecords, REQUEST)

#define RegisterDeviceAsync(...)  SubmitAsync(&CognitoSyncClient::RegisterDevice, __VA_ARGS__)
#define RegisterDeviceCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::RegisterDevice, REQUEST)

#define SetCognitoEventsAsync(...)  SubmitAsync(&CognitoSyncClient::SetCognitoEvents, __VA_ARGS__)
#define SetCognitoEventsCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::SetCognitoEvents, REQUEST)

#define SetIdentityPoolConfigurationAsync(...)  SubmitAsync(&CognitoSyncClient::SetIdentityPoolConfiguration, __VA_ARGS__)
#define SetIdentityPoolConfigurationCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::SetIdentityPoolConfiguration, REQUEST)

#define SubscribeToDatasetAsync(...)  SubmitAsync(&CognitoSyncClient::SubscribeToDataset, __VA_ARGS__)
#define SubscribeToDatasetCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::SubscribeToDataset, REQUEST)

#define UnsubscribeFromDatasetAsync(...)  SubmitAsync(&CognitoSyncClient::UnsubscribeFromDataset, __VA_ARGS__)
#define UnsubscribeFromDatasetCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::UnsubscribeFromDataset, REQUEST)

#define UpdateRecordsAsync(...)  SubmitAsync(&CognitoSyncClient::UpdateRecords, __VA_ARGS__)
#define UpdateRecordsCallable(REQUEST)  SubmitCallable(&CognitoSyncClient::UpdateRecords, REQUEST)

