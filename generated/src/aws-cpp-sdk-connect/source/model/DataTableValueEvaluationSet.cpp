/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableValueEvaluationSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

DataTableValueEvaluationSet::DataTableValueEvaluationSet(JsonView jsonValue) { *this = jsonValue; }

DataTableValueEvaluationSet& DataTableValueEvaluationSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrimaryValues")) {
    Aws::Utils::Array<JsonView> primaryValuesJsonList = jsonValue.GetArray("PrimaryValues");
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      m_primaryValues.push_back(primaryValuesJsonList[primaryValuesIndex].AsObject());
    }
    m_primaryValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeNames")) {
    Aws::Utils::Array<JsonView> attributeNamesJsonList = jsonValue.GetArray("AttributeNames");
    for (unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex) {
      m_attributeNames.push_back(attributeNamesJsonList[attributeNamesIndex].AsString());
    }
    m_attributeNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataTableValueEvaluationSet::Jsonize() const {
  JsonValue payload;

  if (m_primaryValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> primaryValuesJsonList(m_primaryValues.size());
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      primaryValuesJsonList[primaryValuesIndex].AsObject(m_primaryValues[primaryValuesIndex].Jsonize());
    }
    payload.WithArray("PrimaryValues", std::move(primaryValuesJsonList));
  }

  if (m_attributeNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
    for (unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex) {
      attributeNamesJsonList[attributeNamesIndex].AsString(m_attributeNames[attributeNamesIndex]);
    }
    payload.WithArray("AttributeNames", std::move(attributeNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
