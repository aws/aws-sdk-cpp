/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/BatchGetSessionActionIdentifier.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

BatchGetSessionActionIdentifier::BatchGetSessionActionIdentifier(JsonView jsonValue) { *this = jsonValue; }

BatchGetSessionActionIdentifier& BatchGetSessionActionIdentifier::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("sessionActionId")) {
    m_sessionActionId = jsonValue.GetString("sessionActionId");
    m_sessionActionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetSessionActionIdentifier::Jsonize() const {
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

  if (m_sessionActionIdHasBeenSet) {
    payload.WithString("sessionActionId", m_sessionActionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
