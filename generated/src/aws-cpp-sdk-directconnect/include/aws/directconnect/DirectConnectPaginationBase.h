/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace DirectConnect {

class DirectConnectClient;

template <typename DerivedClient>
class DirectConnectPaginationBase {
 public:
  virtual ~DirectConnectPaginationBase() = default;
};
}  // namespace DirectConnect
}  // namespace Aws
