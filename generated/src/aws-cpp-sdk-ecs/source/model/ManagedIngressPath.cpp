/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ManagedIngressPath.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ManagedIngressPath::ManagedIngressPath(JsonView jsonValue) { *this = jsonValue; }

ManagedIngressPath& ManagedIngressPath::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessType")) {
    m_accessType = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadBalancer")) {
    m_loadBalancer = jsonValue.GetObject("loadBalancer");
    m_loadBalancerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadBalancerSecurityGroups")) {
    Aws::Utils::Array<JsonView> loadBalancerSecurityGroupsJsonList = jsonValue.GetArray("loadBalancerSecurityGroups");
    for (unsigned loadBalancerSecurityGroupsIndex = 0; loadBalancerSecurityGroupsIndex < loadBalancerSecurityGroupsJsonList.GetLength();
         ++loadBalancerSecurityGroupsIndex) {
      m_loadBalancerSecurityGroups.push_back(loadBalancerSecurityGroupsJsonList[loadBalancerSecurityGroupsIndex].AsObject());
    }
    m_loadBalancerSecurityGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificate")) {
    m_certificate = jsonValue.GetObject("certificate");
    m_certificateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listener")) {
    m_listener = jsonValue.GetObject("listener");
    m_listenerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rule")) {
    m_rule = jsonValue.GetObject("rule");
    m_ruleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetGroups")) {
    Aws::Utils::Array<JsonView> targetGroupsJsonList = jsonValue.GetArray("targetGroups");
    for (unsigned targetGroupsIndex = 0; targetGroupsIndex < targetGroupsJsonList.GetLength(); ++targetGroupsIndex) {
      m_targetGroups.push_back(targetGroupsJsonList[targetGroupsIndex].AsObject());
    }
    m_targetGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedIngressPath::Jsonize() const {
  JsonValue payload;

  if (m_accessTypeHasBeenSet) {
    payload.WithString("accessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_loadBalancerHasBeenSet) {
    payload.WithObject("loadBalancer", m_loadBalancer.Jsonize());
  }

  if (m_loadBalancerSecurityGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> loadBalancerSecurityGroupsJsonList(m_loadBalancerSecurityGroups.size());
    for (unsigned loadBalancerSecurityGroupsIndex = 0; loadBalancerSecurityGroupsIndex < loadBalancerSecurityGroupsJsonList.GetLength();
         ++loadBalancerSecurityGroupsIndex) {
      loadBalancerSecurityGroupsJsonList[loadBalancerSecurityGroupsIndex].AsObject(
          m_loadBalancerSecurityGroups[loadBalancerSecurityGroupsIndex].Jsonize());
    }
    payload.WithArray("loadBalancerSecurityGroups", std::move(loadBalancerSecurityGroupsJsonList));
  }

  if (m_certificateHasBeenSet) {
    payload.WithObject("certificate", m_certificate.Jsonize());
  }

  if (m_listenerHasBeenSet) {
    payload.WithObject("listener", m_listener.Jsonize());
  }

  if (m_ruleHasBeenSet) {
    payload.WithObject("rule", m_rule.Jsonize());
  }

  if (m_targetGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetGroupsJsonList(m_targetGroups.size());
    for (unsigned targetGroupsIndex = 0; targetGroupsIndex < targetGroupsJsonList.GetLength(); ++targetGroupsIndex) {
      targetGroupsJsonList[targetGroupsIndex].AsObject(m_targetGroups[targetGroupsIndex].Jsonize());
    }
    payload.WithArray("targetGroups", std::move(targetGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
