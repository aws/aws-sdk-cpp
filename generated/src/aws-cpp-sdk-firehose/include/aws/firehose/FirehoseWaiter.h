/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/firehose/FirehoseClient.h>

#include <algorithm>

namespace Aws {
namespace Firehose {

template <typename DerivedClient = FirehoseClient>
class FirehoseWaiter {
 public:
};
}  // namespace Firehose
}  // namespace Aws
