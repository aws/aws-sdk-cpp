/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveTraceEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveTraceEventAttributes::AgenticRetrieveTraceEventAttributes(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveTraceEventAttributes& AgenticRetrieveTraceEventAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("actions")) {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failures")) {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalMetadata")) {
    Aws::Utils::Array<JsonView> retrievalMetadataJsonList = jsonValue.GetArray("retrievalMetadata");
    for (unsigned retrievalMetadataIndex = 0; retrievalMetadataIndex < retrievalMetadataJsonList.GetLength(); ++retrievalMetadataIndex) {
      m_retrievalMetadata.push_back(retrievalMetadataJsonList[retrievalMetadataIndex].AsObject());
    }
    m_retrievalMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalResponse")) {
    Aws::Utils::Array<JsonView> retrievalResponseJsonList = jsonValue.GetArray("retrievalResponse");
    for (unsigned retrievalResponseIndex = 0; retrievalResponseIndex < retrievalResponseJsonList.GetLength(); ++retrievalResponseIndex) {
      m_retrievalResponse.push_back(retrievalResponseJsonList[retrievalResponseIndex].AsObject());
    }
    m_retrievalResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AgenticRetrieveStatusMapper::GetAgenticRetrieveStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("step")) {
    m_step = AgenticRetrieveStepMapper::GetAgenticRetrieveStepForName(jsonValue.GetString("step"));
    m_stepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("warnings")) {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for (unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex) {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
    m_warningsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveTraceEventAttributes::Jsonize() const {
  JsonValue payload;

  if (m_actionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
    }
    payload.WithArray("actions", std::move(actionsJsonList));
  }

  if (m_failuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> failuresJsonList(m_failures.size());
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      failuresJsonList[failuresIndex].AsObject(m_failures[failuresIndex].Jsonize());
    }
    payload.WithArray("failures", std::move(failuresJsonList));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_retrievalMetadataHasBeenSet) {
    Aws::Utils::Array<JsonValue> retrievalMetadataJsonList(m_retrievalMetadata.size());
    for (unsigned retrievalMetadataIndex = 0; retrievalMetadataIndex < retrievalMetadataJsonList.GetLength(); ++retrievalMetadataIndex) {
      retrievalMetadataJsonList[retrievalMetadataIndex].AsObject(m_retrievalMetadata[retrievalMetadataIndex].Jsonize());
    }
    payload.WithArray("retrievalMetadata", std::move(retrievalMetadataJsonList));
  }

  if (m_retrievalResponseHasBeenSet) {
    Aws::Utils::Array<JsonValue> retrievalResponseJsonList(m_retrievalResponse.size());
    for (unsigned retrievalResponseIndex = 0; retrievalResponseIndex < retrievalResponseJsonList.GetLength(); ++retrievalResponseIndex) {
      retrievalResponseJsonList[retrievalResponseIndex].AsObject(m_retrievalResponse[retrievalResponseIndex].Jsonize());
    }
    payload.WithArray("retrievalResponse", std::move(retrievalResponseJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AgenticRetrieveStatusMapper::GetNameForAgenticRetrieveStatus(m_status));
  }

  if (m_stepHasBeenSet) {
    payload.WithString("step", AgenticRetrieveStepMapper::GetNameForAgenticRetrieveStep(m_step));
  }

  if (m_warningsHasBeenSet) {
    Aws::Utils::Array<JsonValue> warningsJsonList(m_warnings.size());
    for (unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex) {
      warningsJsonList[warningsIndex].AsObject(m_warnings[warningsIndex].Jsonize());
    }
    payload.WithArray("warnings", std::move(warningsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
