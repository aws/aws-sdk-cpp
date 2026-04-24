/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ApiGatewayToolFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ApiGatewayToolFilter::ApiGatewayToolFilter(JsonView jsonValue) { *this = jsonValue; }

ApiGatewayToolFilter& ApiGatewayToolFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filterPath")) {
    m_filterPath = jsonValue.GetString("filterPath");
    m_filterPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("methods")) {
    Aws::Utils::Array<JsonView> methodsJsonList = jsonValue.GetArray("methods");
    for (unsigned methodsIndex = 0; methodsIndex < methodsJsonList.GetLength(); ++methodsIndex) {
      m_methods.push_back(RestApiMethodMapper::GetRestApiMethodForName(methodsJsonList[methodsIndex].AsString()));
    }
    m_methodsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiGatewayToolFilter::Jsonize() const {
  JsonValue payload;

  if (m_filterPathHasBeenSet) {
    payload.WithString("filterPath", m_filterPath);
  }

  if (m_methodsHasBeenSet) {
    Aws::Utils::Array<JsonValue> methodsJsonList(m_methods.size());
    for (unsigned methodsIndex = 0; methodsIndex < methodsJsonList.GetLength(); ++methodsIndex) {
      methodsJsonList[methodsIndex].AsString(RestApiMethodMapper::GetNameForRestApiMethod(m_methods[methodsIndex]));
    }
    payload.WithArray("methods", std::move(methodsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
