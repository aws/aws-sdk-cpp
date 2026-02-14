/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace GeoRoutes {

class GeoRoutesClient;

template <typename DerivedClient>
class GeoRoutesPaginationBase {
 public:
  virtual ~GeoRoutesPaginationBase() = default;
};
}  // namespace GeoRoutes
}  // namespace Aws
