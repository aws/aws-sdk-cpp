/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeAcceleratorOfferingsAsync(...)  SubmitAsync(&ElasticInferenceClient::DescribeAcceleratorOfferings, __VA_ARGS__)
#define DescribeAcceleratorOfferingsCallable(REQUEST)  SubmitCallable(&ElasticInferenceClient::DescribeAcceleratorOfferings, REQUEST)

#define DescribeAcceleratorTypesAsync(...)  SubmitAsync(&ElasticInferenceClient::DescribeAcceleratorTypes, __VA_ARGS__)
#define DescribeAcceleratorTypesCallable(REQUEST)  SubmitCallable(&ElasticInferenceClient::DescribeAcceleratorTypes, REQUEST)

#define DescribeAcceleratorsAsync(...)  SubmitAsync(&ElasticInferenceClient::DescribeAccelerators, __VA_ARGS__)
#define DescribeAcceleratorsCallable(REQUEST)  SubmitCallable(&ElasticInferenceClient::DescribeAccelerators, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ElasticInferenceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ElasticInferenceClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ElasticInferenceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ElasticInferenceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ElasticInferenceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ElasticInferenceClient::UntagResource, REQUEST)

