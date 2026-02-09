/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace GeoPlaces {

class GeoPlacesClient;

template <typename DerivedClient>
class GeoPlacesPaginationBase {
 public:
  virtual ~GeoPlacesPaginationBase() = default;
};
}  // namespace GeoPlaces
}  // namespace Aws
