/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudFrontKeyValueStore {

template <typename DerivedClient = CloudFrontKeyValueStoreClient>
class CloudFrontKeyValueStoreWaiter {
 public:
};
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
