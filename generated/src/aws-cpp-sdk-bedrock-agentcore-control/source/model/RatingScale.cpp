/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RatingScale.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RatingScale::RatingScale(JsonView jsonValue) { *this = jsonValue; }

RatingScale& RatingScale::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("numerical")) {
    Aws::Utils::Array<JsonView> numericalJsonList = jsonValue.GetArray("numerical");
    for (unsigned numericalIndex = 0; numericalIndex < numericalJsonList.GetLength(); ++numericalIndex) {
      m_numerical.push_back(numericalJsonList[numericalIndex].AsObject());
    }
    m_numericalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("categorical")) {
    Aws::Utils::Array<JsonView> categoricalJsonList = jsonValue.GetArray("categorical");
    for (unsigned categoricalIndex = 0; categoricalIndex < categoricalJsonList.GetLength(); ++categoricalIndex) {
      m_categorical.push_back(categoricalJsonList[categoricalIndex].AsObject());
    }
    m_categoricalHasBeenSet = true;
  }
  return *this;
}

JsonValue RatingScale::Jsonize() const {
  JsonValue payload;

  if (m_numericalHasBeenSet) {
    Aws::Utils::Array<JsonValue> numericalJsonList(m_numerical.size());
    for (unsigned numericalIndex = 0; numericalIndex < numericalJsonList.GetLength(); ++numericalIndex) {
      numericalJsonList[numericalIndex].AsObject(m_numerical[numericalIndex].Jsonize());
    }
    payload.WithArray("numerical", std::move(numericalJsonList));
  }

  if (m_categoricalHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoricalJsonList(m_categorical.size());
    for (unsigned categoricalIndex = 0; categoricalIndex < categoricalJsonList.GetLength(); ++categoricalIndex) {
      categoricalJsonList[categoricalIndex].AsObject(m_categorical[categoricalIndex].Jsonize());
    }
    payload.WithArray("categorical", std::move(categoricalJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
