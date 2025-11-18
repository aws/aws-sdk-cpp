/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ResourceSelection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

ResourceSelection::ResourceSelection(JsonView jsonValue) { *this = jsonValue; }

ResourceSelection& ResourceSelection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TieringDownSettingsInDays")) {
    m_tieringDownSettingsInDays = jsonValue.GetInteger("TieringDownSettingsInDays");
    m_tieringDownSettingsInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSelection::Jsonize() const {
  JsonValue payload;

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
    }
    payload.WithArray("Resources", std::move(resourcesJsonList));
  }

  if (m_tieringDownSettingsInDaysHasBeenSet) {
    payload.WithInteger("TieringDownSettingsInDays", m_tieringDownSettingsInDays);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
