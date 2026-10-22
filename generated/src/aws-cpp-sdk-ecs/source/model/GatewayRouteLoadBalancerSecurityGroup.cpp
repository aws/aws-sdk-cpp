/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayRouteLoadBalancerSecurityGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayRouteLoadBalancerSecurityGroup::GatewayRouteLoadBalancerSecurityGroup(JsonView jsonValue) { *this = jsonValue; }

GatewayRouteLoadBalancerSecurityGroup& GatewayRouteLoadBalancerSecurityGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleArns")) {
    Aws::Utils::Array<JsonView> ruleArnsJsonList = jsonValue.GetArray("ruleArns");
    for (unsigned ruleArnsIndex = 0; ruleArnsIndex < ruleArnsJsonList.GetLength(); ++ruleArnsIndex) {
      m_ruleArns.push_back(ruleArnsJsonList[ruleArnsIndex].AsString());
    }
    m_ruleArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayRouteLoadBalancerSecurityGroup::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_ruleArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleArnsJsonList(m_ruleArns.size());
    for (unsigned ruleArnsIndex = 0; ruleArnsIndex < ruleArnsJsonList.GetLength(); ++ruleArnsIndex) {
      ruleArnsJsonList[ruleArnsIndex].AsString(m_ruleArns[ruleArnsIndex]);
    }
    payload.WithArray("ruleArns", std::move(ruleArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
