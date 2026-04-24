/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/BatchGetWorkerError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

BatchGetWorkerError::BatchGetWorkerError(JsonView jsonValue) { *this = jsonValue; }

BatchGetWorkerError& BatchGetWorkerError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("farmId")) {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fleetId")) {
    m_fleetId = jsonValue.GetString("fleetId");
    m_fleetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workerId")) {
    m_workerId = jsonValue.GetString("workerId");
    m_workerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = BatchGetWorkerErrorCodeMapper::GetBatchGetWorkerErrorCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetWorkerError::Jsonize() const {
  JsonValue payload;

  if (m_farmIdHasBeenSet) {
    payload.WithString("farmId", m_farmId);
  }

  if (m_fleetIdHasBeenSet) {
    payload.WithString("fleetId", m_fleetId);
  }

  if (m_workerIdHasBeenSet) {
    payload.WithString("workerId", m_workerId);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", BatchGetWorkerErrorCodeMapper::GetNameForBatchGetWorkerErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
