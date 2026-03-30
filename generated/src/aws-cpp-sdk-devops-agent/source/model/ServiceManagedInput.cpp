/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ServiceManagedInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ServiceManagedInput::ServiceManagedInput(JsonView jsonValue) { *this = jsonValue; }

ServiceManagedInput& ServiceManagedInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hostAddress")) {
    m_hostAddress = jsonValue.GetString("hostAddress");
    m_hostAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddressType")) {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("ipAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4AddressesPerEni")) {
    m_ipv4AddressesPerEni = jsonValue.GetInteger("ipv4AddressesPerEni");
    m_ipv4AddressesPerEniHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portRanges")) {
    Aws::Utils::Array<JsonView> portRangesJsonList = jsonValue.GetArray("portRanges");
    for (unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex) {
      m_portRanges.push_back(portRangesJsonList[portRangesIndex].AsString());
    }
    m_portRangesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificate")) {
    m_certificate = jsonValue.GetString("certificate");
    m_certificateHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceManagedInput::Jsonize() const {
  JsonValue payload;

  if (m_hostAddressHasBeenSet) {
    payload.WithString("hostAddress", m_hostAddress);
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));
  }

  if (m_ipAddressTypeHasBeenSet) {
    payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if (m_ipv4AddressesPerEniHasBeenSet) {
    payload.WithInteger("ipv4AddressesPerEni", m_ipv4AddressesPerEni);
  }

  if (m_portRangesHasBeenSet) {
    Aws::Utils::Array<JsonValue> portRangesJsonList(m_portRanges.size());
    for (unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex) {
      portRangesJsonList[portRangesIndex].AsString(m_portRanges[portRangesIndex]);
    }
    payload.WithArray("portRanges", std::move(portRangesJsonList));
  }

  if (m_certificateHasBeenSet) {
    payload.WithString("certificate", m_certificate);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
