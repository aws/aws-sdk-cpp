/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/DomainFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

DomainFilter::DomainFilter(JsonView jsonValue) { *this = jsonValue; }

DomainFilter& DomainFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("include")) {
    Aws::Utils::Array<JsonView> includeJsonList = jsonValue.GetArray("include");
    for (unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex) {
      m_include.push_back(includeJsonList[includeIndex].AsString());
    }
    m_includeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exclude")) {
    Aws::Utils::Array<JsonView> excludeJsonList = jsonValue.GetArray("exclude");
    for (unsigned excludeIndex = 0; excludeIndex < excludeJsonList.GetLength(); ++excludeIndex) {
      m_exclude.push_back(excludeJsonList[excludeIndex].AsString());
    }
    m_excludeHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainFilter::Jsonize() const {
  JsonValue payload;

  if (m_includeHasBeenSet) {
    Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
    for (unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex) {
      includeJsonList[includeIndex].AsString(m_include[includeIndex]);
    }
    payload.WithArray("include", std::move(includeJsonList));
  }

  if (m_excludeHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludeJsonList(m_exclude.size());
    for (unsigned excludeIndex = 0; excludeIndex < excludeJsonList.GetLength(); ++excludeIndex) {
      excludeJsonList[excludeIndex].AsString(m_exclude[excludeIndex]);
    }
    payload.WithArray("exclude", std::move(excludeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
