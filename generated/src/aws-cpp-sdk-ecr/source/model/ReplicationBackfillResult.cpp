/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/ReplicationBackfillResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

ReplicationBackfillResult::ReplicationBackfillResult(JsonView jsonValue) { *this = jsonValue; }

ReplicationBackfillResult& ReplicationBackfillResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("repositoryName")) {
    m_repositoryName = jsonValue.GetString("repositoryName");
    m_repositoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageId")) {
    m_imageId = jsonValue.GetObject("imageId");
    m_imageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ReplicationBackfillResultStatusMapper::GetReplicationBackfillResultStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCode")) {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subImageFailureCodes")) {
    Aws::Utils::Array<JsonView> subImageFailureCodesJsonList = jsonValue.GetArray("subImageFailureCodes");
    for (unsigned subImageFailureCodesIndex = 0; subImageFailureCodesIndex < subImageFailureCodesJsonList.GetLength();
         ++subImageFailureCodesIndex) {
      m_subImageFailureCodes.push_back(subImageFailureCodesJsonList[subImageFailureCodesIndex].AsString());
    }
    m_subImageFailureCodesHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationBackfillResult::Jsonize() const {
  JsonValue payload;

  if (m_repositoryNameHasBeenSet) {
    payload.WithString("repositoryName", m_repositoryName);
  }

  if (m_imageIdHasBeenSet) {
    payload.WithObject("imageId", m_imageId.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ReplicationBackfillResultStatusMapper::GetNameForReplicationBackfillResultStatus(m_status));
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("failureCode", m_failureCode);
  }

  if (m_subImageFailureCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> subImageFailureCodesJsonList(m_subImageFailureCodes.size());
    for (unsigned subImageFailureCodesIndex = 0; subImageFailureCodesIndex < subImageFailureCodesJsonList.GetLength();
         ++subImageFailureCodesIndex) {
      subImageFailureCodesJsonList[subImageFailureCodesIndex].AsString(m_subImageFailureCodes[subImageFailureCodesIndex]);
    }
    payload.WithArray("subImageFailureCodes", std::move(subImageFailureCodesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
