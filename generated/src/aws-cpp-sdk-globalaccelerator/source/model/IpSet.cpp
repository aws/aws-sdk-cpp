/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/globalaccelerator/model/IpSet.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GlobalAccelerator {
namespace Model {

IpSet::IpSet(JsonView jsonValue) { *this = jsonValue; }

IpSet& IpSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IpAddresses")) {
    Aws::Utils::Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("IpAddresses");
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsString());
    }
    m_ipAddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IpAddressFamily")) {
    m_ipAddressFamily = IpAddressFamilyMapper::GetIpAddressFamilyForName(jsonValue.GetString("IpAddressFamily"));
    m_ipAddressFamilyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IpAddressDetails")) {
    Aws::Utils::Array<JsonView> ipAddressDetailsJsonList = jsonValue.GetArray("IpAddressDetails");
    for (unsigned ipAddressDetailsIndex = 0; ipAddressDetailsIndex < ipAddressDetailsJsonList.GetLength(); ++ipAddressDetailsIndex) {
      m_ipAddressDetails.push_back(ipAddressDetailsJsonList[ipAddressDetailsIndex].AsObject());
    }
    m_ipAddressDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue IpSet::Jsonize() const {
  JsonValue payload;

  if (m_ipAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      ipAddressesJsonList[ipAddressesIndex].AsString(m_ipAddresses[ipAddressesIndex]);
    }
    payload.WithArray("IpAddresses", std::move(ipAddressesJsonList));
  }

  if (m_ipAddressFamilyHasBeenSet) {
    payload.WithString("IpAddressFamily", IpAddressFamilyMapper::GetNameForIpAddressFamily(m_ipAddressFamily));
  }

  if (m_ipAddressDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipAddressDetailsJsonList(m_ipAddressDetails.size());
    for (unsigned ipAddressDetailsIndex = 0; ipAddressDetailsIndex < ipAddressDetailsJsonList.GetLength(); ++ipAddressDetailsIndex) {
      ipAddressDetailsJsonList[ipAddressDetailsIndex].AsObject(m_ipAddressDetails[ipAddressDetailsIndex].Jsonize());
    }
    payload.WithArray("IpAddressDetails", std::move(ipAddressDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GlobalAccelerator
}  // namespace Aws
