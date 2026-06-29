/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentDefinitionSnapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

ExperimentDefinitionSnapshot::ExperimentDefinitionSnapshot(JsonView jsonValue) { *this = jsonValue; }

ExperimentDefinitionSnapshot& ExperimentDefinitionSnapshot::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ApplicationId")) {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Hypothesis")) {
    m_hypothesis = jsonValue.GetString("Hypothesis");
    m_hypothesisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfigurationProfileId")) {
    m_configurationProfileId = jsonValue.GetString("ConfigurationProfileId");
    m_configurationProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnvironmentId")) {
    m_environmentId = jsonValue.GetString("EnvironmentId");
    m_environmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlagKey")) {
    m_flagKey = jsonValue.GetString("FlagKey");
    m_flagKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AudienceRule")) {
    m_audienceRule = jsonValue.GetString("AudienceRule");
    m_audienceRuleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AudienceDescription")) {
    m_audienceDescription = jsonValue.GetString("AudienceDescription");
    m_audienceDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LaunchCriteria")) {
    m_launchCriteria = jsonValue.GetString("LaunchCriteria");
    m_launchCriteriaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Treatments")) {
    Aws::Utils::Array<JsonView> treatmentsJsonList = jsonValue.GetArray("Treatments");
    for (unsigned treatmentsIndex = 0; treatmentsIndex < treatmentsJsonList.GetLength(); ++treatmentsIndex) {
      m_treatments.push_back(treatmentsJsonList[treatmentsIndex].AsObject());
    }
    m_treatmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Control")) {
    m_control = jsonValue.GetObject("Control");
    m_controlHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentDefinitionSnapshot::Jsonize() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("ApplicationId", m_applicationId);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_hypothesisHasBeenSet) {
    payload.WithString("Hypothesis", m_hypothesis);
  }

  if (m_configurationProfileIdHasBeenSet) {
    payload.WithString("ConfigurationProfileId", m_configurationProfileId);
  }

  if (m_environmentIdHasBeenSet) {
    payload.WithString("EnvironmentId", m_environmentId);
  }

  if (m_flagKeyHasBeenSet) {
    payload.WithString("FlagKey", m_flagKey);
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

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
