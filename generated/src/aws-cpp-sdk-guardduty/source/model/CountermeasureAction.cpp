/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/CountermeasureAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

CountermeasureAction::CountermeasureAction(JsonView jsonValue) { *this = jsonValue; }

CountermeasureAction& CountermeasureAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = ActionPriorityMapper::GetActionPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defenseTechnique")) {
    m_defenseTechnique = jsonValue.GetString("defenseTechnique");
    m_defenseTechniqueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mitigates")) {
    Aws::Utils::Array<JsonView> mitigatesJsonList = jsonValue.GetArray("mitigates");
    for (unsigned mitigatesIndex = 0; mitigatesIndex < mitigatesJsonList.GetLength(); ++mitigatesIndex) {
      m_mitigates.push_back(mitigatesJsonList[mitigatesIndex].AsString());
    }
    m_mitigatesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cliCommands")) {
    Aws::Utils::Array<JsonView> cliCommandsJsonList = jsonValue.GetArray("cliCommands");
    for (unsigned cliCommandsIndex = 0; cliCommandsIndex < cliCommandsJsonList.GetLength(); ++cliCommandsIndex) {
      m_cliCommands.push_back(cliCommandsJsonList[cliCommandsIndex].AsString());
    }
    m_cliCommandsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dispositionId")) {
    m_dispositionId = jsonValue.GetInteger("dispositionId");
    m_dispositionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disposition")) {
    m_disposition = DispositionMapper::GetDispositionForName(jsonValue.GetString("disposition"));
    m_dispositionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedResources")) {
    Aws::Utils::Array<JsonView> affectedResourcesJsonList = jsonValue.GetArray("affectedResources");
    for (unsigned affectedResourcesIndex = 0; affectedResourcesIndex < affectedResourcesJsonList.GetLength(); ++affectedResourcesIndex) {
      m_affectedResources.push_back(affectedResourcesJsonList[affectedResourcesIndex].AsObject());
    }
    m_affectedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue CountermeasureAction::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", ActionPriorityMapper::GetNameForActionPriority(m_priority));
  }

  if (m_defenseTechniqueHasBeenSet) {
    payload.WithString("defenseTechnique", m_defenseTechnique);
  }

  if (m_mitigatesHasBeenSet) {
    Aws::Utils::Array<JsonValue> mitigatesJsonList(m_mitigates.size());
    for (unsigned mitigatesIndex = 0; mitigatesIndex < mitigatesJsonList.GetLength(); ++mitigatesIndex) {
      mitigatesJsonList[mitigatesIndex].AsString(m_mitigates[mitigatesIndex]);
    }
    payload.WithArray("mitigates", std::move(mitigatesJsonList));
  }

  if (m_cliCommandsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cliCommandsJsonList(m_cliCommands.size());
    for (unsigned cliCommandsIndex = 0; cliCommandsIndex < cliCommandsJsonList.GetLength(); ++cliCommandsIndex) {
      cliCommandsJsonList[cliCommandsIndex].AsString(m_cliCommands[cliCommandsIndex]);
    }
    payload.WithArray("cliCommands", std::move(cliCommandsJsonList));
  }

  if (m_dispositionIdHasBeenSet) {
    payload.WithInteger("dispositionId", m_dispositionId);
  }

  if (m_dispositionHasBeenSet) {
    payload.WithString("disposition", DispositionMapper::GetNameForDisposition(m_disposition));
  }

  if (m_affectedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> affectedResourcesJsonList(m_affectedResources.size());
    for (unsigned affectedResourcesIndex = 0; affectedResourcesIndex < affectedResourcesJsonList.GetLength(); ++affectedResourcesIndex) {
      affectedResourcesJsonList[affectedResourcesIndex].AsObject(m_affectedResources[affectedResourcesIndex].Jsonize());
    }
    payload.WithArray("affectedResources", std::move(affectedResourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
