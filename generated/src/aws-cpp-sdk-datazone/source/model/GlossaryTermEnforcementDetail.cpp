/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/GlossaryTermEnforcementDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

GlossaryTermEnforcementDetail::GlossaryTermEnforcementDetail(JsonView jsonValue) { *this = jsonValue; }

GlossaryTermEnforcementDetail& GlossaryTermEnforcementDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("requiredGlossaryTermIds")) {
    Aws::Utils::Array<JsonView> requiredGlossaryTermIdsJsonList = jsonValue.GetArray("requiredGlossaryTermIds");
    for (unsigned requiredGlossaryTermIdsIndex = 0; requiredGlossaryTermIdsIndex < requiredGlossaryTermIdsJsonList.GetLength();
         ++requiredGlossaryTermIdsIndex) {
      m_requiredGlossaryTermIds.push_back(requiredGlossaryTermIdsJsonList[requiredGlossaryTermIdsIndex].AsString());
    }
    m_requiredGlossaryTermIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue GlossaryTermEnforcementDetail::Jsonize() const {
  JsonValue payload;

  if (m_requiredGlossaryTermIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requiredGlossaryTermIdsJsonList(m_requiredGlossaryTermIds.size());
    for (unsigned requiredGlossaryTermIdsIndex = 0; requiredGlossaryTermIdsIndex < requiredGlossaryTermIdsJsonList.GetLength();
         ++requiredGlossaryTermIdsIndex) {
      requiredGlossaryTermIdsJsonList[requiredGlossaryTermIdsIndex].AsString(m_requiredGlossaryTermIds[requiredGlossaryTermIdsIndex]);
    }
    payload.WithArray("requiredGlossaryTermIds", std::move(requiredGlossaryTermIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
