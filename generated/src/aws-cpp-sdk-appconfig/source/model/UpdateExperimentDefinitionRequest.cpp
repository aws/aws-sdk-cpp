/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/UpdateExperimentDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateExperimentDefinitionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_treatmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> treatmentsJsonList(m_treatments.size());
    for (unsigned treatmentsIndex = 0; treatmentsIndex < treatmentsJsonList.GetLength(); ++treatmentsIndex) {
      treatmentsJsonList[treatmentsIndex].AsObject(m_treatments[treatmentsIndex].Jsonize());
    }
    payload.WithArray("Treatments", std::move(treatmentsJsonList));
  }

  if (m_controlHasBeenSet) {
    payload.WithObject("Control", m_control.Jsonize());
  }

  if (m_hypothesisHasBeenSet) {
    payload.WithString("Hypothesis", m_hypothesis);
  }

  if (m_audienceRuleHasBeenSet) {
    payload.WithString("AudienceRule", m_audienceRule);
  }

  if (m_audienceDescriptionHasBeenSet) {
    payload.WithString("AudienceDescription", m_audienceDescription);
  }

  if (m_launchCriteriaHasBeenSet) {
    payload.WithString("LaunchCriteria", m_launchCriteria);
  }

  return payload.View().WriteReadable();
}
