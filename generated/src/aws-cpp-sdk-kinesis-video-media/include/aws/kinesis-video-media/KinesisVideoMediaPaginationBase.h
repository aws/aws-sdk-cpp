/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace KinesisVideoMedia {

class KinesisVideoMediaClient;

template <typename DerivedClient>
class KinesisVideoMediaPaginationBase {
 public:
  virtual ~KinesisVideoMediaPaginationBase() = default;
};
}  // namespace KinesisVideoMedia
}  // namespace Aws
