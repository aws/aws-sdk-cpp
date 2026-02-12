/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace KinesisVideoWebRTCStorage {

class KinesisVideoWebRTCStorageClient;

template <typename DerivedClient>
class KinesisVideoWebRTCStoragePaginationBase {
 public:
  virtual ~KinesisVideoWebRTCStoragePaginationBase() = default;
};
}  // namespace KinesisVideoWebRTCStorage
}  // namespace Aws
