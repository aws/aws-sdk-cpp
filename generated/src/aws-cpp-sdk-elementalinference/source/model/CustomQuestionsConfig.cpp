/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/CustomQuestionsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

CustomQuestionsConfig::CustomQuestionsConfig(JsonView jsonValue) { *this = jsonValue; }

CustomQuestionsConfig& CustomQuestionsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("shot")) {
    m_shot = jsonValue.GetObject("shot");
    m_shotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scene")) {
    m_scene = jsonValue.GetObject("scene");
    m_sceneHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomQuestionsConfig::Jsonize() const {
  JsonValue payload;

  if (m_shotHasBeenSet) {
    payload.WithObject("shot", m_shot.Jsonize());
  }

  if (m_sceneHasBeenSet) {
    payload.WithObject("scene", m_scene.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
