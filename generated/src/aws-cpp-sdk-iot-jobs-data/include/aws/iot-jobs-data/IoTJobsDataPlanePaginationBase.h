/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneClient;

template <typename DerivedClient>
class IoTJobsDataPlanePaginationBase {
 public:
  virtual ~IoTJobsDataPlanePaginationBase() = default;
};
}  // namespace IoTJobsDataPlane
}  // namespace Aws
