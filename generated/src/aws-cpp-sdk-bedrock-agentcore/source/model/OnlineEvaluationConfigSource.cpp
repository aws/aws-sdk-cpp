/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/OnlineEvaluationConfigSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

OnlineEvaluationConfigSource::OnlineEvaluationConfigSource(JsonView jsonValue) { *this = jsonValue; }

OnlineEvaluationConfigSource& OnlineEvaluationConfigSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("onlineEvaluationConfigArn")) {
    m_onlineEvaluationConfigArn = jsonValue.GetString("onlineEvaluationConfigArn");
    m_onlineEvaluationConfigArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionFilterConfig")) {
    m_sessionFilterConfig = jsonValue.GetObject("sessionFilterConfig");
    m_sessionFilterConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue OnlineEvaluationConfigSource::Jsonize() const {
  JsonValue payload;

  if (m_onlineEvaluationConfigArnHasBeenSet) {
    payload.WithString("onlineEvaluationConfigArn", m_onlineEvaluationConfigArn);
  }

  if (m_sessionFilterConfigHasBeenSet) {
    payload.WithObject("sessionFilterConfig", m_sessionFilterConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
