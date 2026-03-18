/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kinesis-video-media/KinesisVideoMediaClient.h>

#include <algorithm>

namespace Aws {
namespace KinesisVideoMedia {

template <typename DerivedClient = KinesisVideoMediaClient>
class KinesisVideoMediaWaiter {
 public:
};
}  // namespace KinesisVideoMedia
}  // namespace Aws
