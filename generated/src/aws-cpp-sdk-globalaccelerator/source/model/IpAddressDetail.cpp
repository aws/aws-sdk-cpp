/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/globalaccelerator/model/IpAddressDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GlobalAccelerator {
namespace Model {

IpAddressDetail::IpAddressDetail(JsonView jsonValue) { *this = jsonValue; }

IpAddressDetail& IpAddressDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IpAddress")) {
    m_ipAddress = jsonValue.GetString("IpAddress");
    m_ipAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NetworkZone")) {
    m_networkZone = jsonValue.GetString("NetworkZone");
    m_networkZoneHasBeenSet = true;
  }
  return *this;
}

JsonValue IpAddressDetail::Jsonize() const {
  JsonValue payload;

  if (m_ipAddressHasBeenSet) {
    payload.WithString("IpAddress", m_ipAddress);
  }

  if (m_networkZoneHasBeenSet) {
    payload.WithString("NetworkZone", m_networkZone);
  }

  return payload;
}

}  // namespace Model
}  // namespace GlobalAccelerator
}  // namespace Aws
