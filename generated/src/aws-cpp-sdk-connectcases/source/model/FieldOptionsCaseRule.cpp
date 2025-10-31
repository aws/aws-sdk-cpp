/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldOptionsCaseRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

FieldOptionsCaseRule::FieldOptionsCaseRule(JsonView jsonValue) { *this = jsonValue; }

FieldOptionsCaseRule& FieldOptionsCaseRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("parentFieldId")) {
    m_parentFieldId = jsonValue.GetString("parentFieldId");
    m_parentFieldIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("childFieldId")) {
    m_childFieldId = jsonValue.GetString("childFieldId");
    m_childFieldIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentChildFieldOptionsMappings")) {
    Aws::Utils::Array<JsonView> parentChildFieldOptionsMappingsJsonList = jsonValue.GetArray("parentChildFieldOptionsMappings");
    for (unsigned parentChildFieldOptionsMappingsIndex = 0;
         parentChildFieldOptionsMappingsIndex < parentChildFieldOptionsMappingsJsonList.GetLength();
         ++parentChildFieldOptionsMappingsIndex) {
      m_parentChildFieldOptionsMappings.push_back(parentChildFieldOptionsMappingsJsonList[parentChildFieldOptionsMappingsIndex].AsObject());
    }
    m_parentChildFieldOptionsMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldOptionsCaseRule::Jsonize() const {
  JsonValue payload;

  if (m_parentFieldIdHasBeenSet) {
    payload.WithString("parentFieldId", m_parentFieldId);
  }

  if (m_childFieldIdHasBeenSet) {
    payload.WithString("childFieldId", m_childFieldId);
  }

  if (m_parentChildFieldOptionsMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> parentChildFieldOptionsMappingsJsonList(m_parentChildFieldOptionsMappings.size());
    for (unsigned parentChildFieldOptionsMappingsIndex = 0;
         parentChildFieldOptionsMappingsIndex < parentChildFieldOptionsMappingsJsonList.GetLength();
         ++parentChildFieldOptionsMappingsIndex) {
      parentChildFieldOptionsMappingsJsonList[parentChildFieldOptionsMappingsIndex].AsObject(
          m_parentChildFieldOptionsMappings[parentChildFieldOptionsMappingsIndex].Jsonize());
    }
    payload.WithArray("parentChildFieldOptionsMappings", std::move(parentChildFieldOptionsMappingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
