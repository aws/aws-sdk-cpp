/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConnectorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ConnectorConfiguration::ConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectorConfiguration& ConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameterValues")) {
    m_parameterValues = jsonValue.GetObject("parameterValues");
    m_parameterValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameterOverrides")) {
    Aws::Utils::Array<JsonView> parameterOverridesJsonList = jsonValue.GetArray("parameterOverrides");
    for (unsigned parameterOverridesIndex = 0; parameterOverridesIndex < parameterOverridesJsonList.GetLength();
         ++parameterOverridesIndex) {
      m_parameterOverrides.push_back(parameterOverridesJsonList[parameterOverridesIndex].AsObject());
    }
    m_parameterOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_parameterValuesHasBeenSet) {
    if (!m_parameterValues.View().IsNull()) {
      payload.WithObject("parameterValues", JsonValue(m_parameterValues.View()));
    }
  }

  if (m_parameterOverridesHasBeenSet) {
    Aws::Utils::Array<JsonValue> parameterOverridesJsonList(m_parameterOverrides.size());
    for (unsigned parameterOverridesIndex = 0; parameterOverridesIndex < parameterOverridesJsonList.GetLength();
         ++parameterOverridesIndex) {
      parameterOverridesJsonList[parameterOverridesIndex].AsObject(m_parameterOverrides[parameterOverridesIndex].Jsonize());
    }
    payload.WithArray("parameterOverrides", std::move(parameterOverridesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
