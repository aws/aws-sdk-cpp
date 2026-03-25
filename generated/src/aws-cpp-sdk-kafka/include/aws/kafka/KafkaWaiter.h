/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kafka/KafkaClient.h>

#include <algorithm>

namespace Aws {
namespace Kafka {

template <typename DerivedClient = KafkaClient>
class KafkaWaiter {
 public:
};
}  // namespace Kafka
}  // namespace Aws
