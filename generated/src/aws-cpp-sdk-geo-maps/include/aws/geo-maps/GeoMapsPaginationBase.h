/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace GeoMaps {

class GeoMapsClient;

template <typename DerivedClient>
class GeoMapsPaginationBase {
 public:
  virtual ~GeoMapsPaginationBase() = default;
};
}  // namespace GeoMaps
}  // namespace Aws
