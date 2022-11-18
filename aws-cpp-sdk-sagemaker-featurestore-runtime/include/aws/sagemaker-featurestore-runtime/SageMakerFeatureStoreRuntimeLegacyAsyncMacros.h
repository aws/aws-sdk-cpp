/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchGetRecordAsync(...)  SubmitAsync(&SageMakerFeatureStoreRuntimeClient::BatchGetRecord, __VA_ARGS__)
#define BatchGetRecordCallable(REQUEST)  SubmitCallable(&SageMakerFeatureStoreRuntimeClient::BatchGetRecord, REQUEST)

#define DeleteRecordAsync(...)  SubmitAsync(&SageMakerFeatureStoreRuntimeClient::DeleteRecord, __VA_ARGS__)
#define DeleteRecordCallable(REQUEST)  SubmitCallable(&SageMakerFeatureStoreRuntimeClient::DeleteRecord, REQUEST)

#define GetRecordAsync(...)  SubmitAsync(&SageMakerFeatureStoreRuntimeClient::GetRecord, __VA_ARGS__)
#define GetRecordCallable(REQUEST)  SubmitCallable(&SageMakerFeatureStoreRuntimeClient::GetRecord, REQUEST)

#define PutRecordAsync(...)  SubmitAsync(&SageMakerFeatureStoreRuntimeClient::PutRecord, __VA_ARGS__)
#define PutRecordCallable(REQUEST)  SubmitCallable(&SageMakerFeatureStoreRuntimeClient::PutRecord, REQUEST)

