/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteAccessPointDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteAccessPointDetails::RouteAccessPointDetails(JsonView jsonValue) { *this = jsonValue; }

RouteAccessPointDetails& RouteAccessPointDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Accessibility")) {
    m_accessibility = jsonValue.GetObject("Accessibility");
    m_accessibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteAccessPointDetails::Jsonize() const {
  JsonValue payload;

  if (m_accessibilityHasBeenSet) {
    payload.WithObject("Accessibility", m_accessibility.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
