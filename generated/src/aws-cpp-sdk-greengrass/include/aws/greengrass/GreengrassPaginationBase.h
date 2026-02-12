/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Greengrass {

class GreengrassClient;

template <typename DerivedClient>
class GreengrassPaginationBase {
 public:
  virtual ~GreengrassPaginationBase() = default;
};
}  // namespace Greengrass
}  // namespace Aws
