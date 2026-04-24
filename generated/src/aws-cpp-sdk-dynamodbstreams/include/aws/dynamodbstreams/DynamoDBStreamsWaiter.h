/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/dynamodbstreams/DynamoDBStreamsClient.h>

#include <algorithm>

namespace Aws {
namespace DynamoDBStreams {

template <typename DerivedClient = DynamoDBStreamsClient>
class DynamoDBStreamsWaiter {
 public:
};
}  // namespace DynamoDBStreams
}  // namespace Aws
