/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ObservedFindingType.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ObservedFindingType::ObservedFindingType(JsonView jsonValue) { *this = jsonValue; }

ObservedFindingType& ObservedFindingType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityMax")) {
    m_severityMax = jsonValue.GetDouble("severityMax");
    m_severityMaxHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sharedResources")) {
    Aws::Utils::Array<JsonView> sharedResourcesJsonList = jsonValue.GetArray("sharedResources");
    for (unsigned sharedResourcesIndex = 0; sharedResourcesIndex < sharedResourcesJsonList.GetLength(); ++sharedResourcesIndex) {
      m_sharedResources.push_back(sharedResourcesJsonList[sharedResourcesIndex].AsObject());
    }
    m_sharedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue ObservedFindingType::Jsonize() const {
  JsonValue payload;

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  if (m_severityMaxHasBeenSet) {
    payload.WithDouble("severityMax", m_severityMax);
  }

  if (m_sharedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sharedResourcesJsonList(m_sharedResources.size());
    for (unsigned sharedResourcesIndex = 0; sharedResourcesIndex < sharedResourcesJsonList.GetLength(); ++sharedResourcesIndex) {
      sharedResourcesJsonList[sharedResourcesIndex].AsObject(m_sharedResources[sharedResourcesIndex].Jsonize());
    }
    payload.WithArray("sharedResources", std::move(sharedResourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
