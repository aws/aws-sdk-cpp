/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Firehose {

class FirehoseClient;

template <typename DerivedClient>
class FirehosePaginationBase {
 public:
  virtual ~FirehosePaginationBase() = default;
};
}  // namespace Firehose
}  // namespace Aws
