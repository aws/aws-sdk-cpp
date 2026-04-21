/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/ListJobsResponseEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

ListJobsResponseEntry::ListJobsResponseEntry(JsonView jsonValue) { *this = jsonValue; }

ListJobsResponseEntry& ListJobsResponseEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = JobActionMapper::GetJobActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActionOptions")) {
    m_actionOptions = jsonValue.GetObject("ActionOptions");
    m_actionOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetString("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputOptions")) {
    m_inputOptions = jsonValue.GetObject("InputOptions");
    m_inputOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobId")) {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobArn")) {
    m_jobArn = jsonValue.GetString("JobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputOptions")) {
    m_outputOptions = jsonValue.GetObject("OutputOptions");
    m_outputOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ListJobsResponseEntry::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", JobActionMapper::GetNameForJobAction(m_action));
  }

  if (m_actionOptionsHasBeenSet) {
    payload.WithObject("ActionOptions", m_actionOptions.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_executionRoleArnHasBeenSet) {
    payload.WithString("ExecutionRoleArn", m_executionRoleArn);
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("EndedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  if (m_inputOptionsHasBeenSet) {
    payload.WithObject("InputOptions", m_inputOptions.Jsonize());
  }

  if (m_jobIdHasBeenSet) {
    payload.WithString("JobId", m_jobId);
  }

  if (m_jobArnHasBeenSet) {
    payload.WithString("JobArn", m_jobArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_outputOptionsHasBeenSet) {
    payload.WithObject("OutputOptions", m_outputOptions.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
