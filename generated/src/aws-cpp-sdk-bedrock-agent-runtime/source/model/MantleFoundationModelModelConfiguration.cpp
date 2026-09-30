/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/MantleFoundationModelModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

MantleFoundationModelModelConfiguration::MantleFoundationModelModelConfiguration(JsonView jsonValue) { *this = jsonValue; }

MantleFoundationModelModelConfiguration& MantleFoundationModelModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelArn")) {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectId")) {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MantleFoundationModelModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_modelArnHasBeenSet) {
    payload.WithString("modelArn", m_modelArn);
  }

  if (m_projectIdHasBeenSet) {
    payload.WithString("projectId", m_projectId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
