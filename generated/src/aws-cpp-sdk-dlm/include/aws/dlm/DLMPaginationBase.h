/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace DLM {

class DLMClient;

template <typename DerivedClient>
class DLMPaginationBase {
 public:
  virtual ~DLMPaginationBase() = default;
};
}  // namespace DLM
}  // namespace Aws
