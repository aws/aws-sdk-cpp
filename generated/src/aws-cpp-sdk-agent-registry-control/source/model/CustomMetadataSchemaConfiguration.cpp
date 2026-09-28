/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/CustomMetadataSchemaConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

CustomMetadataSchemaConfiguration::CustomMetadataSchemaConfiguration(JsonView jsonValue) { *this = jsonValue; }

CustomMetadataSchemaConfiguration& CustomMetadataSchemaConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("defaultSchema")) {
    m_defaultSchema = jsonValue.GetString("defaultSchema");
    m_defaultSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordTypeSchemaOverrides")) {
    Aws::Utils::Array<JsonView> recordTypeSchemaOverridesJsonList = jsonValue.GetArray("recordTypeSchemaOverrides");
    for (unsigned recordTypeSchemaOverridesIndex = 0; recordTypeSchemaOverridesIndex < recordTypeSchemaOverridesJsonList.GetLength();
         ++recordTypeSchemaOverridesIndex) {
      m_recordTypeSchemaOverrides.push_back(recordTypeSchemaOverridesJsonList[recordTypeSchemaOverridesIndex].AsObject());
    }
    m_recordTypeSchemaOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomMetadataSchemaConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_defaultSchemaHasBeenSet) {
    payload.WithString("defaultSchema", m_defaultSchema);
  }

  if (m_recordTypeSchemaOverridesHasBeenSet) {
    Aws::Utils::Array<JsonValue> recordTypeSchemaOverridesJsonList(m_recordTypeSchemaOverrides.size());
    for (unsigned recordTypeSchemaOverridesIndex = 0; recordTypeSchemaOverridesIndex < recordTypeSchemaOverridesJsonList.GetLength();
         ++recordTypeSchemaOverridesIndex) {
      recordTypeSchemaOverridesJsonList[recordTypeSchemaOverridesIndex].AsObject(
          m_recordTypeSchemaOverrides[recordTypeSchemaOverridesIndex].Jsonize());
    }
    payload.WithArray("recordTypeSchemaOverrides", std::move(recordTypeSchemaOverridesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
