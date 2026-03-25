/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/es/ElasticsearchServiceClient.h>

#include <algorithm>

namespace Aws {
namespace ElasticsearchService {

template <typename DerivedClient = ElasticsearchServiceClient>
class ElasticsearchServiceWaiter {
 public:
};
}  // namespace ElasticsearchService
}  // namespace Aws
