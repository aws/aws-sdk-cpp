/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ApprovalPattern.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ApprovalPattern::ApprovalPattern(JsonView jsonValue) { *this = jsonValue; }

ApprovalPattern& ApprovalPattern::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tool")) {
    m_tool = jsonValue.GetString("tool");
    m_toolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("argumentPins")) {
    Aws::Map<Aws::String, JsonView> argumentPinsJsonMap = jsonValue.GetObject("argumentPins").GetAllObjects();
    for (auto& argumentPinsItem : argumentPinsJsonMap) {
      m_argumentPins[argumentPinsItem.first] = argumentPinsItem.second.AsString();
    }
    m_argumentPinsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApprovalPattern::Jsonize() const {
  JsonValue payload;

  if (m_toolHasBeenSet) {
    payload.WithString("tool", m_tool);
  }

  if (m_argumentPinsHasBeenSet) {
    JsonValue argumentPinsJsonMap;
    for (auto& argumentPinsItem : m_argumentPins) {
      argumentPinsJsonMap.WithString(argumentPinsItem.first, argumentPinsItem.second);
    }
    payload.WithObject("argumentPins", std::move(argumentPinsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
