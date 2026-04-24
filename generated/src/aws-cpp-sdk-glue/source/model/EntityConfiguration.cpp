/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/EntityConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

EntityConfiguration::EntityConfiguration(JsonView jsonValue) { *this = jsonValue; }

EntityConfiguration& EntityConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceConfiguration")) {
    m_sourceConfiguration = jsonValue.GetObject("SourceConfiguration");
    m_sourceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Schema")) {
    Aws::Map<Aws::String, JsonView> schemaJsonMap = jsonValue.GetObject("Schema").GetAllObjects();
    for (auto& schemaItem : schemaJsonMap) {
      m_schema[schemaItem.first] = schemaItem.second.AsObject();
    }
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue EntityConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceConfigurationHasBeenSet) {
    payload.WithObject("SourceConfiguration", m_sourceConfiguration.Jsonize());
  }

  if (m_schemaHasBeenSet) {
    JsonValue schemaJsonMap;
    for (auto& schemaItem : m_schema) {
      schemaJsonMap.WithObject(schemaItem.first, schemaItem.second.Jsonize());
    }
    payload.WithObject("Schema", std::move(schemaJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
