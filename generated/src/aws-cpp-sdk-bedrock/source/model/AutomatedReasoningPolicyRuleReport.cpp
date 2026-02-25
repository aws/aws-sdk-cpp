/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyRuleReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyRuleReport::AutomatedReasoningPolicyRuleReport(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyRuleReport& AutomatedReasoningPolicyRuleReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rule")) {
    m_rule = jsonValue.GetString("rule");
    m_ruleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groundingStatements")) {
    Aws::Utils::Array<JsonView> groundingStatementsJsonList = jsonValue.GetArray("groundingStatements");
    for (unsigned groundingStatementsIndex = 0; groundingStatementsIndex < groundingStatementsJsonList.GetLength();
         ++groundingStatementsIndex) {
      m_groundingStatements.push_back(groundingStatementsJsonList[groundingStatementsIndex].AsObject());
    }
    m_groundingStatementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groundingJustifications")) {
    Aws::Utils::Array<JsonView> groundingJustificationsJsonList = jsonValue.GetArray("groundingJustifications");
    for (unsigned groundingJustificationsIndex = 0; groundingJustificationsIndex < groundingJustificationsJsonList.GetLength();
         ++groundingJustificationsIndex) {
      m_groundingJustifications.push_back(groundingJustificationsJsonList[groundingJustificationsIndex].AsString());
    }
    m_groundingJustificationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accuracyScore")) {
    m_accuracyScore = jsonValue.GetDouble("accuracyScore");
    m_accuracyScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accuracyJustification")) {
    m_accuracyJustification = jsonValue.GetString("accuracyJustification");
    m_accuracyJustificationHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyRuleReport::Jsonize() const {
  JsonValue payload;

  if (m_ruleHasBeenSet) {
    payload.WithString("rule", m_rule);
  }

  if (m_groundingStatementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groundingStatementsJsonList(m_groundingStatements.size());
    for (unsigned groundingStatementsIndex = 0; groundingStatementsIndex < groundingStatementsJsonList.GetLength();
         ++groundingStatementsIndex) {
      groundingStatementsJsonList[groundingStatementsIndex].AsObject(m_groundingStatements[groundingStatementsIndex].Jsonize());
    }
    payload.WithArray("groundingStatements", std::move(groundingStatementsJsonList));
  }

  if (m_groundingJustificationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groundingJustificationsJsonList(m_groundingJustifications.size());
    for (unsigned groundingJustificationsIndex = 0; groundingJustificationsIndex < groundingJustificationsJsonList.GetLength();
         ++groundingJustificationsIndex) {
      groundingJustificationsJsonList[groundingJustificationsIndex].AsString(m_groundingJustifications[groundingJustificationsIndex]);
    }
    payload.WithArray("groundingJustifications", std::move(groundingJustificationsJsonList));
  }

  if (m_accuracyScoreHasBeenSet) {
    payload.WithDouble("accuracyScore", m_accuracyScore);
  }

  if (m_accuracyJustificationHasBeenSet) {
    payload.WithString("accuracyJustification", m_accuracyJustification);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
