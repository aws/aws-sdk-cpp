/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentDefinitionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

ExperimentDefinitionSummary::ExperimentDefinitionSummary(JsonView jsonValue) { *this = jsonValue; }

ExperimentDefinitionSummary& ExperimentDefinitionSummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("Status")) {
    m_status = ExperimentDefinitionStatusMapper::GetExperimentDefinitionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
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
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentDefinitionSummary::Jsonize() const {
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

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ExperimentDefinitionStatusMapper::GetNameForExperimentDefinitionStatus(m_status));
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

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
