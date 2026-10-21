/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnectionAlbResources.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnectionAlbResources::GatewayConnectionAlbResources(JsonView jsonValue) { *this = jsonValue; }

GatewayConnectionAlbResources& GatewayConnectionAlbResources::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("acmCertificateArn")) {
    m_acmCertificateArn = jsonValue.GetString("acmCertificateArn");
    m_acmCertificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadBalancerArn")) {
    m_loadBalancerArn = jsonValue.GetString("loadBalancerArn");
    m_loadBalancerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadBalancerSecurityGroupArns")) {
    Aws::Utils::Array<JsonView> loadBalancerSecurityGroupArnsJsonList = jsonValue.GetArray("loadBalancerSecurityGroupArns");
    for (unsigned loadBalancerSecurityGroupArnsIndex = 0;
         loadBalancerSecurityGroupArnsIndex < loadBalancerSecurityGroupArnsJsonList.GetLength(); ++loadBalancerSecurityGroupArnsIndex) {
      m_loadBalancerSecurityGroupArns.push_back(loadBalancerSecurityGroupArnsJsonList[loadBalancerSecurityGroupArnsIndex].AsString());
    }
    m_loadBalancerSecurityGroupArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listenerArn")) {
    m_listenerArn = jsonValue.GetString("listenerArn");
    m_listenerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listenerRuleArn")) {
    m_listenerRuleArn = jsonValue.GetString("listenerRuleArn");
    m_listenerRuleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testListenerRuleArn")) {
    m_testListenerRuleArn = jsonValue.GetString("testListenerRuleArn");
    m_testListenerRuleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetGroupArn")) {
    m_targetGroupArn = jsonValue.GetString("targetGroupArn");
    m_targetGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alternateTargetGroupArn")) {
    m_alternateTargetGroupArn = jsonValue.GetString("alternateTargetGroupArn");
    m_alternateTargetGroupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnectionAlbResources::Jsonize() const {
  JsonValue payload;

  if (m_acmCertificateArnHasBeenSet) {
    payload.WithString("acmCertificateArn", m_acmCertificateArn);
  }

  if (m_loadBalancerArnHasBeenSet) {
    payload.WithString("loadBalancerArn", m_loadBalancerArn);
  }

  if (m_loadBalancerSecurityGroupArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> loadBalancerSecurityGroupArnsJsonList(m_loadBalancerSecurityGroupArns.size());
    for (unsigned loadBalancerSecurityGroupArnsIndex = 0;
         loadBalancerSecurityGroupArnsIndex < loadBalancerSecurityGroupArnsJsonList.GetLength(); ++loadBalancerSecurityGroupArnsIndex) {
      loadBalancerSecurityGroupArnsJsonList[loadBalancerSecurityGroupArnsIndex].AsString(
          m_loadBalancerSecurityGroupArns[loadBalancerSecurityGroupArnsIndex]);
    }
    payload.WithArray("loadBalancerSecurityGroupArns", std::move(loadBalancerSecurityGroupArnsJsonList));
  }

  if (m_listenerArnHasBeenSet) {
    payload.WithString("listenerArn", m_listenerArn);
  }

  if (m_listenerRuleArnHasBeenSet) {
    payload.WithString("listenerRuleArn", m_listenerRuleArn);
  }

  if (m_testListenerRuleArnHasBeenSet) {
    payload.WithString("testListenerRuleArn", m_testListenerRuleArn);
  }

  if (m_targetGroupArnHasBeenSet) {
    payload.WithString("targetGroupArn", m_targetGroupArn);
  }

  if (m_alternateTargetGroupArnHasBeenSet) {
    payload.WithString("alternateTargetGroupArn", m_alternateTargetGroupArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
