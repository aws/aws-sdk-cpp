/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace KinesisVideoWebRTCStorage {

template <typename DerivedClient>
class KinesisVideoWebRTCStoragePaginationBase {
 public:
  virtual ~KinesisVideoWebRTCStoragePaginationBase() = default;
};
}  // namespace KinesisVideoWebRTCStorage
}  // namespace Aws
