/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteWebLink.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteWebLink::RouteWebLink(JsonView jsonValue) { *this = jsonValue; }

RouteWebLink& RouteWebLink::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AnchorText")) {
    m_anchorText = jsonValue.GetString("AnchorText");
    m_anchorTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeviceType")) {
    m_deviceType = RouteWebLinkDeviceTypeMapper::GetRouteWebLinkDeviceTypeForName(jsonValue.GetString("DeviceType"));
    m_deviceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteWebLink::Jsonize() const {
  JsonValue payload;

  if (m_anchorTextHasBeenSet) {
    payload.WithString("AnchorText", m_anchorText);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_deviceTypeHasBeenSet) {
    payload.WithString("DeviceType", RouteWebLinkDeviceTypeMapper::GetNameForRouteWebLinkDeviceType(m_deviceType));
  }

  if (m_urlHasBeenSet) {
    payload.WithString("Url", m_url);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
