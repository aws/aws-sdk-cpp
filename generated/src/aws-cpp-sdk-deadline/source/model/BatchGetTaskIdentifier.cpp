/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/BatchGetTaskIdentifier.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

BatchGetTaskIdentifier::BatchGetTaskIdentifier(JsonView jsonValue) { *this = jsonValue; }

BatchGetTaskIdentifier& BatchGetTaskIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("farmId")) {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queueId")) {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepId")) {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetTaskIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_farmIdHasBeenSet) {
    payload.WithString("farmId", m_farmId);
  }

  if (m_queueIdHasBeenSet) {
    payload.WithString("queueId", m_queueId);
  }

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_stepIdHasBeenSet) {
    payload.WithString("stepId", m_stepId);
  }

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
