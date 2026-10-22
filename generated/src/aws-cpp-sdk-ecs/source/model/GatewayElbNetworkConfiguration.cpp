/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayElbNetworkConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayElbNetworkConfiguration::GatewayElbNetworkConfiguration(JsonView jsonValue) { *this = jsonValue; }

GatewayElbNetworkConfiguration& GatewayElbNetworkConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inboundSecurityGroup")) {
    m_inboundSecurityGroup = jsonValue.GetString("inboundSecurityGroup");
    m_inboundSecurityGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnets")) {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("subnets");
    for (unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex) {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddressType")) {
    m_ipAddressType = GatewayElbIpAddressTypeMapper::GetGatewayElbIpAddressTypeForName(jsonValue.GetString("ipAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayElbNetworkConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_inboundSecurityGroupHasBeenSet) {
    payload.WithString("inboundSecurityGroup", m_inboundSecurityGroup);
  }

  if (m_subnetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
    for (unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex) {
      subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
    }
    payload.WithArray("subnets", std::move(subnetsJsonList));
  }

  if (m_ipAddressTypeHasBeenSet) {
    payload.WithString("ipAddressType", GatewayElbIpAddressTypeMapper::GetNameForGatewayElbIpAddressType(m_ipAddressType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
