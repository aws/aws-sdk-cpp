/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/FileSystemEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

FileSystemEndpoint::FileSystemEndpoint(JsonView jsonValue) { *this = jsonValue; }

FileSystemEndpoint& FileSystemEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DNSName")) {
    m_dNSName = jsonValue.GetString("DNSName");
    m_dNSNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IpAddresses")) {
    Aws::Utils::Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("IpAddresses");
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsString());
    }
    m_ipAddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Ipv6Addresses")) {
    Aws::Utils::Array<JsonView> ipv6AddressesJsonList = jsonValue.GetArray("Ipv6Addresses");
    for (unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex) {
      m_ipv6Addresses.push_back(ipv6AddressesJsonList[ipv6AddressesIndex].AsString());
    }
    m_ipv6AddressesHasBeenSet = true;
  }
  return *this;
}

JsonValue FileSystemEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_dNSNameHasBeenSet) {
    payload.WithString("DNSName", m_dNSName);
  }

  if (m_ipAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      ipAddressesJsonList[ipAddressesIndex].AsString(m_ipAddresses[ipAddressesIndex]);
    }
    payload.WithArray("IpAddresses", std::move(ipAddressesJsonList));
  }

  if (m_ipv6AddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipv6AddressesJsonList(m_ipv6Addresses.size());
    for (unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex) {
      ipv6AddressesJsonList[ipv6AddressesIndex].AsString(m_ipv6Addresses[ipv6AddressesIndex]);
    }
    payload.WithArray("Ipv6Addresses", std::move(ipv6AddressesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
