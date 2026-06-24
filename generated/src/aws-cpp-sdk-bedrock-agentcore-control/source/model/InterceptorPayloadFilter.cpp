/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InterceptorPayloadFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InterceptorPayloadFilter::InterceptorPayloadFilter(JsonView jsonValue) { *this = jsonValue; }

InterceptorPayloadFilter& InterceptorPayloadFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exclude")) {
    Aws::Utils::Array<JsonView> excludeJsonList = jsonValue.GetArray("exclude");
    for (unsigned excludeIndex = 0; excludeIndex < excludeJsonList.GetLength(); ++excludeIndex) {
      m_exclude.push_back(excludeJsonList[excludeIndex].AsObject());
    }
    m_excludeHasBeenSet = true;
  }
  return *this;
}

JsonValue InterceptorPayloadFilter::Jsonize() const {
  JsonValue payload;

  if (m_excludeHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludeJsonList(m_exclude.size());
    for (unsigned excludeIndex = 0; excludeIndex < excludeJsonList.GetLength(); ++excludeIndex) {
      excludeJsonList[excludeIndex].AsObject(m_exclude[excludeIndex].Jsonize());
    }
    payload.WithArray("exclude", std::move(excludeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
