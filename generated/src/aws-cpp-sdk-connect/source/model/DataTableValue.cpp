/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

DataTableValue::DataTableValue(JsonView jsonValue) { *this = jsonValue; }

DataTableValue& DataTableValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrimaryValues")) {
    Aws::Utils::Array<JsonView> primaryValuesJsonList = jsonValue.GetArray("PrimaryValues");
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      m_primaryValues.push_back(primaryValuesJsonList[primaryValuesIndex].AsObject());
    }
    m_primaryValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeName")) {
    m_attributeName = jsonValue.GetString("AttributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LockVersion")) {
    m_lockVersion = jsonValue.GetObject("LockVersion");
    m_lockVersionHasBeenSet = true;
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

JsonValue DataTableValue::Jsonize() const {
  JsonValue payload;

  if (m_primaryValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> primaryValuesJsonList(m_primaryValues.size());
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      primaryValuesJsonList[primaryValuesIndex].AsObject(m_primaryValues[primaryValuesIndex].Jsonize());
    }
    payload.WithArray("PrimaryValues", std::move(primaryValuesJsonList));
  }

  if (m_attributeNameHasBeenSet) {
    payload.WithString("AttributeName", m_attributeName);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_lockVersionHasBeenSet) {
    payload.WithObject("LockVersion", m_lockVersion.Jsonize());
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
