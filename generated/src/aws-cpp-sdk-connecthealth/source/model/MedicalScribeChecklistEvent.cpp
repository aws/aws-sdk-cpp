/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeChecklistEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeChecklistEvent::MedicalScribeChecklistEvent(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeChecklistEvent& MedicalScribeChecklistEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("snapshotVersion")) {
    m_snapshotVersion = jsonValue.GetInt64("snapshotVersion");
    m_snapshotVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checklists")) {
    Aws::Utils::Array<JsonView> checklistsJsonList = jsonValue.GetArray("checklists");
    for (unsigned checklistsIndex = 0; checklistsIndex < checklistsJsonList.GetLength(); ++checklistsIndex) {
      m_checklists.push_back(checklistsJsonList[checklistsIndex].AsObject());
    }
    m_checklistsHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeChecklistEvent::Jsonize() const {
  JsonValue payload;

  if (m_snapshotVersionHasBeenSet) {
    payload.WithInt64("snapshotVersion", m_snapshotVersion);
  }

  if (m_checklistsHasBeenSet) {
    Aws::Utils::Array<JsonValue> checklistsJsonList(m_checklists.size());
    for (unsigned checklistsIndex = 0; checklistsIndex < checklistsJsonList.GetLength(); ++checklistsIndex) {
      checklistsJsonList[checklistsIndex].AsObject(m_checklists[checklistsIndex].Jsonize());
    }
    payload.WithArray("checklists", std::move(checklistsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
