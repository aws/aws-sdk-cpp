/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ABTestEvaluationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ABTestEvaluationConfig::ABTestEvaluationConfig(JsonView jsonValue) { *this = jsonValue; }

ABTestEvaluationConfig& ABTestEvaluationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("onlineEvaluationConfigArn")) {
    m_onlineEvaluationConfigArn = jsonValue.GetString("onlineEvaluationConfigArn");
    m_onlineEvaluationConfigArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("perVariantOnlineEvaluationConfig")) {
    Aws::Utils::Array<JsonView> perVariantOnlineEvaluationConfigJsonList = jsonValue.GetArray("perVariantOnlineEvaluationConfig");
    for (unsigned perVariantOnlineEvaluationConfigIndex = 0;
         perVariantOnlineEvaluationConfigIndex < perVariantOnlineEvaluationConfigJsonList.GetLength();
         ++perVariantOnlineEvaluationConfigIndex) {
      m_perVariantOnlineEvaluationConfig.push_back(
          perVariantOnlineEvaluationConfigJsonList[perVariantOnlineEvaluationConfigIndex].AsObject());
    }
    m_perVariantOnlineEvaluationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ABTestEvaluationConfig::Jsonize() const {
  JsonValue payload;

  if (m_onlineEvaluationConfigArnHasBeenSet) {
    payload.WithString("onlineEvaluationConfigArn", m_onlineEvaluationConfigArn);
  }

  if (m_perVariantOnlineEvaluationConfigHasBeenSet) {
    Aws::Utils::Array<JsonValue> perVariantOnlineEvaluationConfigJsonList(m_perVariantOnlineEvaluationConfig.size());
    for (unsigned perVariantOnlineEvaluationConfigIndex = 0;
         perVariantOnlineEvaluationConfigIndex < perVariantOnlineEvaluationConfigJsonList.GetLength();
         ++perVariantOnlineEvaluationConfigIndex) {
      perVariantOnlineEvaluationConfigJsonList[perVariantOnlineEvaluationConfigIndex].AsObject(
          m_perVariantOnlineEvaluationConfig[perVariantOnlineEvaluationConfigIndex].Jsonize());
    }
    payload.WithArray("perVariantOnlineEvaluationConfig", std::move(perVariantOnlineEvaluationConfigJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
