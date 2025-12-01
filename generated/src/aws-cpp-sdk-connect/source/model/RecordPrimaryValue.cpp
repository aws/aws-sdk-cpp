/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RecordPrimaryValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

RecordPrimaryValue::RecordPrimaryValue(JsonView jsonValue) { *this = jsonValue; }

RecordPrimaryValue& RecordPrimaryValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecordId")) {
    m_recordId = jsonValue.GetString("RecordId");
    m_recordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryValues")) {
    Aws::Utils::Array<JsonView> primaryValuesJsonList = jsonValue.GetArray("PrimaryValues");
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      m_primaryValues.push_back(primaryValuesJsonList[primaryValuesIndex].AsObject());
    }
    m_primaryValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedRegion")) {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordPrimaryValue::Jsonize() const {
  JsonValue payload;

  if (m_recordIdHasBeenSet) {
    payload.WithString("RecordId", m_recordId);
  }

  if (m_primaryValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> primaryValuesJsonList(m_primaryValues.size());
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      primaryValuesJsonList[primaryValuesIndex].AsObject(m_primaryValues[primaryValuesIndex].Jsonize());
    }
    payload.WithArray("PrimaryValues", std::move(primaryValuesJsonList));
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedRegionHasBeenSet) {
    payload.WithString("LastModifiedRegion", m_lastModifiedRegion);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
