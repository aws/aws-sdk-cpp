/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockDataAutomationRuntime {

class BedrockDataAutomationRuntimeClient;

template <typename DerivedClient>
class BedrockDataAutomationRuntimePaginationBase {
 public:
  virtual ~BedrockDataAutomationRuntimePaginationBase() = default;
};
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
