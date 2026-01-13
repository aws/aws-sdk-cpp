/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace LexRuntimeV2 {

class LexRuntimeV2Client;

template <typename DerivedClient>
class LexRuntimeV2PaginationBase {
 public:
  virtual ~LexRuntimeV2PaginationBase() = default;
};
}  // namespace LexRuntimeV2
}  // namespace Aws
