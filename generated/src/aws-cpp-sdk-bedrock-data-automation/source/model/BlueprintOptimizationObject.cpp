/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/BlueprintOptimizationObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

BlueprintOptimizationObject::BlueprintOptimizationObject(JsonView jsonValue) { *this = jsonValue; }

BlueprintOptimizationObject& BlueprintOptimizationObject::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("blueprintArn")) {
    m_blueprintArn = jsonValue.GetString("blueprintArn");
    m_blueprintArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stage")) {
    m_stage = BlueprintStageMapper::GetBlueprintStageForName(jsonValue.GetString("stage"));
    m_stageHasBeenSet = true;
  }
  return *this;
}

JsonValue BlueprintOptimizationObject::Jsonize() const {
  JsonValue payload;

  if (m_blueprintArnHasBeenSet) {
    payload.WithString("blueprintArn", m_blueprintArn);
  }

  if (m_stageHasBeenSet) {
    payload.WithString("stage", BlueprintStageMapper::GetNameForBlueprintStage(m_stage));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
