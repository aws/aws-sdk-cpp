/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PerVariantOnlineEvaluationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PerVariantOnlineEvaluationConfig::PerVariantOnlineEvaluationConfig(JsonView jsonValue) { *this = jsonValue; }

PerVariantOnlineEvaluationConfig& PerVariantOnlineEvaluationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onlineEvaluationConfigArn")) {
    m_onlineEvaluationConfigArn = jsonValue.GetString("onlineEvaluationConfigArn");
    m_onlineEvaluationConfigArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PerVariantOnlineEvaluationConfig::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_onlineEvaluationConfigArnHasBeenSet) {
    payload.WithString("onlineEvaluationConfigArn", m_onlineEvaluationConfigArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
