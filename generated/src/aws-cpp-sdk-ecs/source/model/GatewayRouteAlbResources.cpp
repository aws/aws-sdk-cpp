/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayRouteAlbResources.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayRouteAlbResources::GatewayRouteAlbResources(JsonView jsonValue) { *this = jsonValue; }

GatewayRouteAlbResources& GatewayRouteAlbResources::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("acmCertificateArn")) {
    m_acmCertificateArn = jsonValue.GetString("acmCertificateArn");
    m_acmCertificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadBalancerArn")) {
    m_loadBalancerArn = jsonValue.GetString("loadBalancerArn");
    m_loadBalancerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listenerArn")) {
    m_listenerArn = jsonValue.GetString("listenerArn");
    m_listenerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listenerRuleArn")) {
    m_listenerRuleArn = jsonValue.GetString("listenerRuleArn");
    m_listenerRuleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testListenerRuleArns")) {
    Aws::Utils::Array<JsonView> testListenerRuleArnsJsonList = jsonValue.GetArray("testListenerRuleArns");
    for (unsigned testListenerRuleArnsIndex = 0; testListenerRuleArnsIndex < testListenerRuleArnsJsonList.GetLength();
         ++testListenerRuleArnsIndex) {
      m_testListenerRuleArns.push_back(testListenerRuleArnsJsonList[testListenerRuleArnsIndex].AsString());
    }
    m_testListenerRuleArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadBalancerSecurityGroups")) {
    Aws::Utils::Array<JsonView> loadBalancerSecurityGroupsJsonList = jsonValue.GetArray("loadBalancerSecurityGroups");
    for (unsigned loadBalancerSecurityGroupsIndex = 0; loadBalancerSecurityGroupsIndex < loadBalancerSecurityGroupsJsonList.GetLength();
         ++loadBalancerSecurityGroupsIndex) {
      m_loadBalancerSecurityGroups.push_back(loadBalancerSecurityGroupsJsonList[loadBalancerSecurityGroupsIndex].AsObject());
    }
    m_loadBalancerSecurityGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceSecurityGroupArn")) {
    m_serviceSecurityGroupArn = jsonValue.GetString("serviceSecurityGroupArn");
    m_serviceSecurityGroupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayRouteAlbResources::Jsonize() const {
  JsonValue payload;

  if (m_acmCertificateArnHasBeenSet) {
    payload.WithString("acmCertificateArn", m_acmCertificateArn);
  }

  if (m_loadBalancerArnHasBeenSet) {
    payload.WithString("loadBalancerArn", m_loadBalancerArn);
  }

  if (m_listenerArnHasBeenSet) {
    payload.WithString("listenerArn", m_listenerArn);
  }

  if (m_listenerRuleArnHasBeenSet) {
    payload.WithString("listenerRuleArn", m_listenerRuleArn);
  }

  if (m_testListenerRuleArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> testListenerRuleArnsJsonList(m_testListenerRuleArns.size());
    for (unsigned testListenerRuleArnsIndex = 0; testListenerRuleArnsIndex < testListenerRuleArnsJsonList.GetLength();
         ++testListenerRuleArnsIndex) {
      testListenerRuleArnsJsonList[testListenerRuleArnsIndex].AsString(m_testListenerRuleArns[testListenerRuleArnsIndex]);
    }
    payload.WithArray("testListenerRuleArns", std::move(testListenerRuleArnsJsonList));
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

  if (m_serviceSecurityGroupArnHasBeenSet) {
    payload.WithString("serviceSecurityGroupArn", m_serviceSecurityGroupArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
