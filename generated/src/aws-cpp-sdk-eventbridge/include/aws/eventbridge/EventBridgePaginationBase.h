/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace EventBridge {

class EventBridgeClient;

template <typename DerivedClient>
class EventBridgePaginationBase {
 public:
  virtual ~EventBridgePaginationBase() = default;
};
}  // namespace EventBridge
}  // namespace Aws
