/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateSavingsPlanAsync(...)  SubmitAsync(&SavingsPlansClient::CreateSavingsPlan, __VA_ARGS__)
#define CreateSavingsPlanCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::CreateSavingsPlan, REQUEST)

#define DeleteQueuedSavingsPlanAsync(...)  SubmitAsync(&SavingsPlansClient::DeleteQueuedSavingsPlan, __VA_ARGS__)
#define DeleteQueuedSavingsPlanCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::DeleteQueuedSavingsPlan, REQUEST)

#define DescribeSavingsPlanRatesAsync(...)  SubmitAsync(&SavingsPlansClient::DescribeSavingsPlanRates, __VA_ARGS__)
#define DescribeSavingsPlanRatesCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::DescribeSavingsPlanRates, REQUEST)

#define DescribeSavingsPlansAsync(...)  SubmitAsync(&SavingsPlansClient::DescribeSavingsPlans, __VA_ARGS__)
#define DescribeSavingsPlansCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::DescribeSavingsPlans, REQUEST)

#define DescribeSavingsPlansOfferingRatesAsync(...)  SubmitAsync(&SavingsPlansClient::DescribeSavingsPlansOfferingRates, __VA_ARGS__)
#define DescribeSavingsPlansOfferingRatesCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::DescribeSavingsPlansOfferingRates, REQUEST)

#define DescribeSavingsPlansOfferingsAsync(...)  SubmitAsync(&SavingsPlansClient::DescribeSavingsPlansOfferings, __VA_ARGS__)
#define DescribeSavingsPlansOfferingsCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::DescribeSavingsPlansOfferings, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SavingsPlansClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SavingsPlansClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SavingsPlansClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SavingsPlansClient::UntagResource, REQUEST)

