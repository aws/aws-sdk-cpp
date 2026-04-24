/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/ParentChildFieldOptionsMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

ParentChildFieldOptionsMapping::ParentChildFieldOptionsMapping(JsonView jsonValue) { *this = jsonValue; }

ParentChildFieldOptionsMapping& ParentChildFieldOptionsMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("parentFieldOptionValue")) {
    m_parentFieldOptionValue = jsonValue.GetString("parentFieldOptionValue");
    m_parentFieldOptionValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("childFieldOptionValues")) {
    Aws::Utils::Array<JsonView> childFieldOptionValuesJsonList = jsonValue.GetArray("childFieldOptionValues");
    for (unsigned childFieldOptionValuesIndex = 0; childFieldOptionValuesIndex < childFieldOptionValuesJsonList.GetLength();
         ++childFieldOptionValuesIndex) {
      m_childFieldOptionValues.push_back(childFieldOptionValuesJsonList[childFieldOptionValuesIndex].AsString());
    }
    m_childFieldOptionValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue ParentChildFieldOptionsMapping::Jsonize() const {
  JsonValue payload;

  if (m_parentFieldOptionValueHasBeenSet) {
    payload.WithString("parentFieldOptionValue", m_parentFieldOptionValue);
  }

  if (m_childFieldOptionValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> childFieldOptionValuesJsonList(m_childFieldOptionValues.size());
    for (unsigned childFieldOptionValuesIndex = 0; childFieldOptionValuesIndex < childFieldOptionValuesJsonList.GetLength();
         ++childFieldOptionValuesIndex) {
      childFieldOptionValuesJsonList[childFieldOptionValuesIndex].AsString(m_childFieldOptionValues[childFieldOptionValuesIndex]);
    }
    payload.WithArray("childFieldOptionValues", std::move(childFieldOptionValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
