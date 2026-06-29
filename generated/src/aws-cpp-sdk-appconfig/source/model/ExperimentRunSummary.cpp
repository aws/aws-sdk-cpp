/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ExperimentRunSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

ExperimentRunSummary::ExperimentRunSummary(JsonView jsonValue) { *this = jsonValue; }

ExperimentRunSummary& ExperimentRunSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExperimentDefinitionId")) {
    m_experimentDefinitionId = jsonValue.GetString("ExperimentDefinitionId");
    m_experimentDefinitionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Run")) {
    m_run = jsonValue.GetInteger("Run");
    m_runHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExperimentRunStatusMapper::GetExperimentRunStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetString("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentRunSummary::Jsonize() const {
  JsonValue payload;

  if (m_experimentDefinitionIdHasBeenSet) {
    payload.WithString("ExperimentDefinitionId", m_experimentDefinitionId);
  }

  if (m_runHasBeenSet) {
    payload.WithInteger("Run", m_run);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ExperimentRunStatusMapper::GetNameForExperimentRunStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("StartedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("EndedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
