/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace IoTThingsGraph {

class IoTThingsGraphClient;

template <typename DerivedClient>
class IoTThingsGraphPaginationBase {
 public:
  virtual ~IoTThingsGraphPaginationBase() = default;
};
}  // namespace IoTThingsGraph
}  // namespace Aws
