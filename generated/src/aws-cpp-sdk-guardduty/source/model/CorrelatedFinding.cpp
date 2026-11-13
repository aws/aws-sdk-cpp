/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/CorrelatedFinding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

CorrelatedFinding::CorrelatedFinding(JsonView jsonValue) { *this = jsonValue; }

CorrelatedFinding& CorrelatedFinding::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("correlationReasons")) {
    Aws::Utils::Array<JsonView> correlationReasonsJsonList = jsonValue.GetArray("correlationReasons");
    for (unsigned correlationReasonsIndex = 0; correlationReasonsIndex < correlationReasonsJsonList.GetLength();
         ++correlationReasonsIndex) {
      m_correlationReasons.push_back(
          CorrelationReasonMapper::GetCorrelationReasonForName(correlationReasonsJsonList[correlationReasonsIndex].AsString()));
    }
    m_correlationReasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingIds")) {
    Aws::Utils::Array<JsonView> findingIdsJsonList = jsonValue.GetArray("findingIds");
    for (unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex) {
      m_findingIds.push_back(findingIdsJsonList[findingIdsIndex].AsString());
    }
    m_findingIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sharedResources")) {
    Aws::Utils::Array<JsonView> sharedResourcesJsonList = jsonValue.GetArray("sharedResources");
    for (unsigned sharedResourcesIndex = 0; sharedResourcesIndex < sharedResourcesJsonList.GetLength(); ++sharedResourcesIndex) {
      m_sharedResources.push_back(sharedResourcesJsonList[sharedResourcesIndex].AsObject());
    }
    m_sharedResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sharedBehaviors")) {
    Aws::Utils::Array<JsonView> sharedBehaviorsJsonList = jsonValue.GetArray("sharedBehaviors");
    for (unsigned sharedBehaviorsIndex = 0; sharedBehaviorsIndex < sharedBehaviorsJsonList.GetLength(); ++sharedBehaviorsIndex) {
      m_sharedBehaviors.push_back(sharedBehaviorsJsonList[sharedBehaviorsIndex].AsObject());
    }
    m_sharedBehaviorsHasBeenSet = true;
  }
  return *this;
}

JsonValue CorrelatedFinding::Jsonize() const {
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

  if (m_correlationReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> correlationReasonsJsonList(m_correlationReasons.size());
    for (unsigned correlationReasonsIndex = 0; correlationReasonsIndex < correlationReasonsJsonList.GetLength();
         ++correlationReasonsIndex) {
      correlationReasonsJsonList[correlationReasonsIndex].AsString(
          CorrelationReasonMapper::GetNameForCorrelationReason(m_correlationReasons[correlationReasonsIndex]));
    }
    payload.WithArray("correlationReasons", std::move(correlationReasonsJsonList));
  }

  if (m_findingIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingIdsJsonList(m_findingIds.size());
    for (unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex) {
      findingIdsJsonList[findingIdsIndex].AsString(m_findingIds[findingIdsIndex]);
    }
    payload.WithArray("findingIds", std::move(findingIdsJsonList));
  }

  if (m_sharedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sharedResourcesJsonList(m_sharedResources.size());
    for (unsigned sharedResourcesIndex = 0; sharedResourcesIndex < sharedResourcesJsonList.GetLength(); ++sharedResourcesIndex) {
      sharedResourcesJsonList[sharedResourcesIndex].AsObject(m_sharedResources[sharedResourcesIndex].Jsonize());
    }
    payload.WithArray("sharedResources", std::move(sharedResourcesJsonList));
  }

  if (m_sharedBehaviorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sharedBehaviorsJsonList(m_sharedBehaviors.size());
    for (unsigned sharedBehaviorsIndex = 0; sharedBehaviorsIndex < sharedBehaviorsJsonList.GetLength(); ++sharedBehaviorsIndex) {
      sharedBehaviorsJsonList[sharedBehaviorsIndex].AsObject(m_sharedBehaviors[sharedBehaviorsIndex].Jsonize());
    }
    payload.WithArray("sharedBehaviors", std::move(sharedBehaviorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
