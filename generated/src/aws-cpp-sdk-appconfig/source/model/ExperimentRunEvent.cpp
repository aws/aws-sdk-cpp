/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentRunEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

ExperimentRunEvent::ExperimentRunEvent(JsonView jsonValue) { *this = jsonValue; }

ExperimentRunEvent& ExperimentRunEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedDeployment")) {
    m_associatedDeployment = jsonValue.GetString("AssociatedDeployment");
    m_associatedDeploymentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventType")) {
    m_eventType = ExperimentRunEventTypeMapper::GetExperimentRunEventTypeForName(jsonValue.GetString("EventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OccurredAt")) {
    m_occurredAt = jsonValue.GetString("OccurredAt");
    m_occurredAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TriggeredBy")) {
    m_triggeredBy = TriggeredByMapper::GetTriggeredByForName(jsonValue.GetString("TriggeredBy"));
    m_triggeredByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExposurePercentage")) {
    m_exposurePercentage = jsonValue.GetDouble("ExposurePercentage");
    m_exposurePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TreatmentOverrides")) {
    m_treatmentOverrides = jsonValue.GetObject("TreatmentOverrides");
    m_treatmentOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentRunEvent::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_associatedDeploymentHasBeenSet) {
    payload.WithString("AssociatedDeployment", m_associatedDeployment);
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("EventType", ExperimentRunEventTypeMapper::GetNameForExperimentRunEventType(m_eventType));
  }

  if (m_occurredAtHasBeenSet) {
    payload.WithString("OccurredAt", m_occurredAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_triggeredByHasBeenSet) {
    payload.WithString("TriggeredBy", TriggeredByMapper::GetNameForTriggeredBy(m_triggeredBy));
  }

  if (m_exposurePercentageHasBeenSet) {
    payload.WithDouble("ExposurePercentage", m_exposurePercentage);
  }

  if (m_treatmentOverridesHasBeenSet) {
    payload.WithObject("TreatmentOverrides", m_treatmentOverrides.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
