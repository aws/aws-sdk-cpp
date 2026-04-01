/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/JournalRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

JournalRecord::JournalRecord(JsonView jsonValue) { *this = jsonValue; }

JournalRecord& JournalRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionId")) {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordId")) {
    m_recordId = jsonValue.GetString("recordId");
    m_recordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordType")) {
    m_recordType = jsonValue.GetString("recordType");
    m_recordTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userReference")) {
    m_userReference = jsonValue.GetObject("userReference");
    m_userReferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue JournalRecord::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_executionIdHasBeenSet) {
    payload.WithString("executionId", m_executionId);
  }

  if (m_recordIdHasBeenSet) {
    payload.WithString("recordId", m_recordId);
  }

  if (m_contentHasBeenSet) {
    if (!m_content.View().IsNull()) {
      payload.WithObject("content", JsonValue(m_content.View()));
    }
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_recordTypeHasBeenSet) {
    payload.WithString("recordType", m_recordType);
  }

  if (m_userReferenceHasBeenSet) {
    payload.WithObject("userReference", m_userReference.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
