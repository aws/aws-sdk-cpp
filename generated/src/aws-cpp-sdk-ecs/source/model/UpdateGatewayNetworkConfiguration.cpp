/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/UpdateGatewayNetworkConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

UpdateGatewayNetworkConfiguration::UpdateGatewayNetworkConfiguration(JsonView jsonValue) { *this = jsonValue; }

UpdateGatewayNetworkConfiguration& UpdateGatewayNetworkConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inboundSecurityGroup")) {
    m_inboundSecurityGroup = jsonValue.GetString("inboundSecurityGroup");
    m_inboundSecurityGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateGatewayNetworkConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_inboundSecurityGroupHasBeenSet) {
    payload.WithString("inboundSecurityGroup", m_inboundSecurityGroup);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
