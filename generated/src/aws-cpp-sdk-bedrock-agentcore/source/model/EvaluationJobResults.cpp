/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluationJobResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluationJobResults::EvaluationJobResults(JsonView jsonValue) { *this = jsonValue; }

EvaluationJobResults& EvaluationJobResults::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("numberOfSessionsCompleted")) {
    m_numberOfSessionsCompleted = jsonValue.GetInteger("numberOfSessionsCompleted");
    m_numberOfSessionsCompletedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfSessionsInProgress")) {
    m_numberOfSessionsInProgress = jsonValue.GetInteger("numberOfSessionsInProgress");
    m_numberOfSessionsInProgressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfSessionsFailed")) {
    m_numberOfSessionsFailed = jsonValue.GetInteger("numberOfSessionsFailed");
    m_numberOfSessionsFailedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalNumberOfSessions")) {
    m_totalNumberOfSessions = jsonValue.GetInteger("totalNumberOfSessions");
    m_totalNumberOfSessionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfSessionsIgnored")) {
    m_numberOfSessionsIgnored = jsonValue.GetInteger("numberOfSessionsIgnored");
    m_numberOfSessionsIgnoredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorSummaries")) {
    Aws::Utils::Array<JsonView> evaluatorSummariesJsonList = jsonValue.GetArray("evaluatorSummaries");
    for (unsigned evaluatorSummariesIndex = 0; evaluatorSummariesIndex < evaluatorSummariesJsonList.GetLength();
         ++evaluatorSummariesIndex) {
      m_evaluatorSummaries.push_back(evaluatorSummariesJsonList[evaluatorSummariesIndex].AsObject());
    }
    m_evaluatorSummariesHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationJobResults::Jsonize() const {
  JsonValue payload;

  if (m_numberOfSessionsCompletedHasBeenSet) {
    payload.WithInteger("numberOfSessionsCompleted", m_numberOfSessionsCompleted);
  }

  if (m_numberOfSessionsInProgressHasBeenSet) {
    payload.WithInteger("numberOfSessionsInProgress", m_numberOfSessionsInProgress);
  }

  if (m_numberOfSessionsFailedHasBeenSet) {
    payload.WithInteger("numberOfSessionsFailed", m_numberOfSessionsFailed);
  }

  if (m_totalNumberOfSessionsHasBeenSet) {
    payload.WithInteger("totalNumberOfSessions", m_totalNumberOfSessions);
  }

  if (m_numberOfSessionsIgnoredHasBeenSet) {
    payload.WithInteger("numberOfSessionsIgnored", m_numberOfSessionsIgnored);
  }

  if (m_evaluatorSummariesHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluatorSummariesJsonList(m_evaluatorSummaries.size());
    for (unsigned evaluatorSummariesIndex = 0; evaluatorSummariesIndex < evaluatorSummariesJsonList.GetLength();
         ++evaluatorSummariesIndex) {
      evaluatorSummariesJsonList[evaluatorSummariesIndex].AsObject(m_evaluatorSummaries[evaluatorSummariesIndex].Jsonize());
    }
    payload.WithArray("evaluatorSummaries", std::move(evaluatorSummariesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
