/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/TransformationJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

TransformationJobSummary::TransformationJobSummary(JsonView jsonValue) { *this = jsonValue; }

TransformationJobSummary& TransformationJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("JobId")) {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobStatus")) {
    m_jobStatus = TransformationJobStatusMapper::GetTransformationJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubmitTime")) {
    m_submitTime = jsonValue.GetDouble("SubmitTime");
    m_submitTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobName")) {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceFormat")) {
    m_sourceFormat = SourceFormatMapper::GetSourceFormatForName(jsonValue.GetString("SourceFormat"));
    m_sourceFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformationJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("JobId", m_jobId);
  }

  if (m_jobStatusHasBeenSet) {
    payload.WithString("JobStatus", TransformationJobStatusMapper::GetNameForTransformationJobStatus(m_jobStatus));
  }

  if (m_submitTimeHasBeenSet) {
    payload.WithDouble("SubmitTime", m_submitTime.SecondsWithMSPrecision());
  }

  if (m_jobNameHasBeenSet) {
    payload.WithString("JobName", m_jobName);
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_sourceFormatHasBeenSet) {
    payload.WithString("SourceFormat", SourceFormatMapper::GetNameForSourceFormat(m_sourceFormat));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
