/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaClient.h>

#include <algorithm>

namespace Aws {
namespace KinesisVideoArchivedMedia {

template <typename DerivedClient = KinesisVideoArchivedMediaClient>
class KinesisVideoArchivedMediaWaiter {
 public:
};
}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws
