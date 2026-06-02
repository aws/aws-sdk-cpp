/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteAttribution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteAttribution::RouteAttribution(JsonView jsonValue) { *this = jsonValue; }

RouteAttribution& RouteAttribution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributionType")) {
    m_attributionType = RouteAttributionTypeMapper::GetRouteAttributionTypeForName(jsonValue.GetString("AttributionType"));
    m_attributionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebLink")) {
    m_webLink = jsonValue.GetObject("WebLink");
    m_webLinkHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteAttribution::Jsonize() const {
  JsonValue payload;

  if (m_attributionTypeHasBeenSet) {
    payload.WithString("AttributionType", RouteAttributionTypeMapper::GetNameForRouteAttributionType(m_attributionType));
  }

  if (m_webLinkHasBeenSet) {
    payload.WithObject("WebLink", m_webLink.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
