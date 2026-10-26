/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/ReplicationBackfillProgress.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

ReplicationBackfillProgress::ReplicationBackfillProgress(JsonView jsonValue) { *this = jsonValue; }

ReplicationBackfillProgress& ReplicationBackfillProgress::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalReplicationCount")) {
    m_totalReplicationCount = jsonValue.GetInteger("totalReplicationCount");
    m_totalReplicationCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedReplicationCount")) {
    m_completedReplicationCount = jsonValue.GetInteger("completedReplicationCount");
    m_completedReplicationCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedReplicationCount")) {
    m_failedReplicationCount = jsonValue.GetInteger("failedReplicationCount");
    m_failedReplicationCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCodes")) {
    Aws::Utils::Array<JsonView> failureCodesJsonList = jsonValue.GetArray("failureCodes");
    for (unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex) {
      m_failureCodes.push_back(failureCodesJsonList[failureCodesIndex].AsString());
    }
    m_failureCodesHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationBackfillProgress::Jsonize() const {
  JsonValue payload;

  if (m_totalReplicationCountHasBeenSet) {
    payload.WithInteger("totalReplicationCount", m_totalReplicationCount);
  }

  if (m_completedReplicationCountHasBeenSet) {
    payload.WithInteger("completedReplicationCount", m_completedReplicationCount);
  }

  if (m_failedReplicationCountHasBeenSet) {
    payload.WithInteger("failedReplicationCount", m_failedReplicationCount);
  }

  if (m_failureCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> failureCodesJsonList(m_failureCodes.size());
    for (unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex) {
      failureCodesJsonList[failureCodesIndex].AsString(m_failureCodes[failureCodesIndex]);
    }
    payload.WithArray("failureCodes", std::move(failureCodesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
