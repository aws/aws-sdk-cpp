/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExtractionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExtractionDefinition::ExtractionDefinition(JsonView jsonValue) { *this = jsonValue; }

ExtractionDefinition& ExtractionDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractionDefinitionId")) {
    m_extractionDefinitionId = jsonValue.GetString("ExtractionDefinitionId");
    m_extractionDefinitionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractionDefinitionArn")) {
    m_extractionDefinitionArn = jsonValue.GetString("ExtractionDefinitionArn");
    m_extractionDefinitionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractionConfiguration")) {
    m_extractionConfiguration = jsonValue.GetObject("ExtractionConfiguration");
    m_extractionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Display")) {
    m_display = jsonValue.GetObject("Display");
    m_displayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedBy")) {
    m_lastUpdatedBy = jsonValue.GetString("LastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionDefinition::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_extractionDefinitionIdHasBeenSet) {
    payload.WithString("ExtractionDefinitionId", m_extractionDefinitionId);
  }

  if (m_extractionDefinitionArnHasBeenSet) {
    payload.WithString("ExtractionDefinitionArn", m_extractionDefinitionArn);
  }

  if (m_extractionConfigurationHasBeenSet) {
    payload.WithObject("ExtractionConfiguration", m_extractionConfiguration.Jsonize());
  }

  if (m_displayHasBeenSet) {
    payload.WithObject("Display", m_display.Jsonize());
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedByHasBeenSet) {
    payload.WithString("LastUpdatedBy", m_lastUpdatedBy);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
