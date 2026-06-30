/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/StartExperimentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartExperimentRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_exposurePercentageHasBeenSet) {
    payload.WithDouble("ExposurePercentage", m_exposurePercentage);
  }

  if (m_treatmentOverridesHasBeenSet) {
    payload.WithObject("TreatmentOverrides", m_treatmentOverrides.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_deploymentParametersHasBeenSet) {
    payload.WithObject("DeploymentParameters", m_deploymentParameters.Jsonize());
  }

  return payload.View().WriteReadable();
}
