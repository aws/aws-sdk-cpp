/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kinesisvideo/KinesisVideoClient.h>

#include <algorithm>

namespace Aws {
namespace KinesisVideo {

template <typename DerivedClient = KinesisVideoClient>
class KinesisVideoWaiter {
 public:
};
}  // namespace KinesisVideo
}  // namespace Aws
