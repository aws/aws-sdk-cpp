/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

FieldsConfiguration::FieldsConfiguration(JsonView jsonValue) { *this = jsonValue; }

FieldsConfiguration& FieldsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fieldIds")) {
    Aws::Utils::Array<JsonView> fieldIdsJsonList = jsonValue.GetArray("fieldIds");
    for (unsigned fieldIdsIndex = 0; fieldIdsIndex < fieldIdsJsonList.GetLength(); ++fieldIdsIndex) {
      m_fieldIds.push_back(fieldIdsJsonList[fieldIdsIndex].AsObject());
    }
    m_fieldIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceCaseId")) {
    m_sourceCaseId = jsonValue.GetString("sourceCaseId");
    m_sourceCaseIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fieldIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldIdsJsonList(m_fieldIds.size());
    for (unsigned fieldIdsIndex = 0; fieldIdsIndex < fieldIdsJsonList.GetLength(); ++fieldIdsIndex) {
      fieldIdsJsonList[fieldIdsIndex].AsObject(m_fieldIds[fieldIdsIndex].Jsonize());
    }
    payload.WithArray("fieldIds", std::move(fieldIdsJsonList));
  }

  if (m_sourceCaseIdHasBeenSet) {
    payload.WithString("sourceCaseId", m_sourceCaseId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
