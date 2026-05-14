/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AdvancedPromptOptimizationJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AdvancedPromptOptimizationJobSummary::AdvancedPromptOptimizationJobSummary(JsonView jsonValue) { *this = jsonValue; }

AdvancedPromptOptimizationJobSummary& AdvancedPromptOptimizationJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobArn")) {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobName")) {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobStatus")) {
    m_jobStatus =
        AdvancedPromptOptimizationJobStatusMapper::GetAdvancedPromptOptimizationJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue AdvancedPromptOptimizationJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobArnHasBeenSet) {
    payload.WithString("jobArn", m_jobArn);
  }

  if (m_jobNameHasBeenSet) {
    payload.WithString("jobName", m_jobName);
  }

  if (m_jobStatusHasBeenSet) {
    payload.WithString("jobStatus", AdvancedPromptOptimizationJobStatusMapper::GetNameForAdvancedPromptOptimizationJobStatus(m_jobStatus));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithString("lastModifiedTime", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
