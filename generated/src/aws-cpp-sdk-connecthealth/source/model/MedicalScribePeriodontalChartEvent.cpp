/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribePeriodontalChartEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribePeriodontalChartEvent::MedicalScribePeriodontalChartEvent(JsonView jsonValue) { *this = jsonValue; }

MedicalScribePeriodontalChartEvent& MedicalScribePeriodontalChartEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("snapshotVersion")) {
    m_snapshotVersion = jsonValue.GetInt64("snapshotVersion");
    m_snapshotVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("teeth")) {
    Aws::Utils::Array<JsonView> teethJsonList = jsonValue.GetArray("teeth");
    for (unsigned teethIndex = 0; teethIndex < teethJsonList.GetLength(); ++teethIndex) {
      m_teeth.push_back(teethJsonList[teethIndex].AsObject());
    }
    m_teethHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reviewItems")) {
    Aws::Utils::Array<JsonView> reviewItemsJsonList = jsonValue.GetArray("reviewItems");
    for (unsigned reviewItemsIndex = 0; reviewItemsIndex < reviewItemsJsonList.GetLength(); ++reviewItemsIndex) {
      m_reviewItems.push_back(reviewItemsJsonList[reviewItemsIndex].AsObject());
    }
    m_reviewItemsHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribePeriodontalChartEvent::Jsonize() const {
  JsonValue payload;

  if (m_snapshotVersionHasBeenSet) {
    payload.WithInt64("snapshotVersion", m_snapshotVersion);
  }

  if (m_teethHasBeenSet) {
    Aws::Utils::Array<JsonValue> teethJsonList(m_teeth.size());
    for (unsigned teethIndex = 0; teethIndex < teethJsonList.GetLength(); ++teethIndex) {
      teethJsonList[teethIndex].AsObject(m_teeth[teethIndex].Jsonize());
    }
    payload.WithArray("teeth", std::move(teethJsonList));
  }

  if (m_reviewItemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> reviewItemsJsonList(m_reviewItems.size());
    for (unsigned reviewItemsIndex = 0; reviewItemsIndex < reviewItemsJsonList.GetLength(); ++reviewItemsIndex) {
      reviewItemsJsonList[reviewItemsIndex].AsObject(m_reviewItems[reviewItemsIndex].Jsonize());
    }
    payload.WithArray("reviewItems", std::move(reviewItemsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
