/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/NetworkAccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

NetworkAccessConfiguration::NetworkAccessConfiguration(JsonView jsonValue) { *this = jsonValue; }

NetworkAccessConfiguration& NetworkAccessConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EniPrivateIpAddress")) {
    m_eniPrivateIpAddress = jsonValue.GetString("EniPrivateIpAddress");
    m_eniPrivateIpAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EniIpv6Addresses")) {
    Aws::Utils::Array<JsonView> eniIpv6AddressesJsonList = jsonValue.GetArray("EniIpv6Addresses");
    for (unsigned eniIpv6AddressesIndex = 0; eniIpv6AddressesIndex < eniIpv6AddressesJsonList.GetLength(); ++eniIpv6AddressesIndex) {
      m_eniIpv6Addresses.push_back(eniIpv6AddressesJsonList[eniIpv6AddressesIndex].AsString());
    }
    m_eniIpv6AddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EniId")) {
    m_eniId = jsonValue.GetString("EniId");
    m_eniIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkAccessConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_eniPrivateIpAddressHasBeenSet) {
    payload.WithString("EniPrivateIpAddress", m_eniPrivateIpAddress);
  }

  if (m_eniIpv6AddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> eniIpv6AddressesJsonList(m_eniIpv6Addresses.size());
    for (unsigned eniIpv6AddressesIndex = 0; eniIpv6AddressesIndex < eniIpv6AddressesJsonList.GetLength(); ++eniIpv6AddressesIndex) {
      eniIpv6AddressesJsonList[eniIpv6AddressesIndex].AsString(m_eniIpv6Addresses[eniIpv6AddressesIndex]);
    }
    payload.WithArray("EniIpv6Addresses", std::move(eniIpv6AddressesJsonList));
  }

  if (m_eniIdHasBeenSet) {
    payload.WithString("EniId", m_eniId);
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
