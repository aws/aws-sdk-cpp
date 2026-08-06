/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {

BatchGetDiscoverableRegistryRecordError::BatchGetDiscoverableRegistryRecordError(JsonView jsonValue) { *this = jsonValue; }

BatchGetDiscoverableRegistryRecordError& BatchGetDiscoverableRegistryRecordError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("registryId")) {
    m_registryId = jsonValue.GetString("registryId");
    m_registryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordId")) {
    m_recordId = jsonValue.GetString("recordId");
    m_recordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = BatchGetDiscoverableRegistryRecordErrorCodeMapper::GetBatchGetDiscoverableRegistryRecordErrorCodeForName(
        jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetDiscoverableRegistryRecordError::Jsonize() const {
  JsonValue payload;

  if (m_registryIdHasBeenSet) {
    payload.WithString("registryId", m_registryId);
  }

  if (m_recordIdHasBeenSet) {
    payload.WithString("recordId", m_recordId);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString(
        "errorCode", BatchGetDiscoverableRegistryRecordErrorCodeMapper::GetNameForBatchGetDiscoverableRegistryRecordErrorCode(m_errorCode));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
