/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InstanceRequirements.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InstanceRequirements::InstanceRequirements(JsonView jsonValue) { *this = jsonValue; }

InstanceRequirements& InstanceRequirements::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowedInstanceTypes")) {
    Aws::Utils::Array<JsonView> allowedInstanceTypesJsonList = jsonValue.GetArray("allowedInstanceTypes");
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      m_allowedInstanceTypes.push_back(allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString());
    }
    m_allowedInstanceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceRequirements::Jsonize() const {
  JsonValue payload;

  if (m_allowedInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedInstanceTypesJsonList(m_allowedInstanceTypes.size());
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString(m_allowedInstanceTypes[allowedInstanceTypesIndex]);
    }
    payload.WithArray("allowedInstanceTypes", std::move(allowedInstanceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
