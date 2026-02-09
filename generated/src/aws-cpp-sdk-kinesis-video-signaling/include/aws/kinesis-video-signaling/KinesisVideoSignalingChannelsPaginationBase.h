/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace KinesisVideoSignalingChannels {

class KinesisVideoSignalingChannelsClient;

template <typename DerivedClient>
class KinesisVideoSignalingChannelsPaginationBase {
 public:
  virtual ~KinesisVideoSignalingChannelsPaginationBase() = default;
};
}  // namespace KinesisVideoSignalingChannels
}  // namespace Aws
