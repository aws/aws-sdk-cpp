/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/BotAnalyzerHistorySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

BotAnalyzerHistorySummary::BotAnalyzerHistorySummary(JsonView jsonValue) { *this = jsonValue; }

BotAnalyzerHistorySummary& BotAnalyzerHistorySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("botAnalyzerStatus")) {
    m_botAnalyzerStatus = BotAnalyzerStatusMapper::GetBotAnalyzerStatusForName(jsonValue.GetString("botAnalyzerStatus"));
    m_botAnalyzerStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationDateTime")) {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("botAnalyzerRequestId")) {
    m_botAnalyzerRequestId = jsonValue.GetString("botAnalyzerRequestId");
    m_botAnalyzerRequestIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BotAnalyzerHistorySummary::Jsonize() const {
  JsonValue payload;

  if (m_botAnalyzerStatusHasBeenSet) {
    payload.WithString("botAnalyzerStatus", BotAnalyzerStatusMapper::GetNameForBotAnalyzerStatus(m_botAnalyzerStatus));
  }

  if (m_creationDateTimeHasBeenSet) {
    payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if (m_botAnalyzerRequestIdHasBeenSet) {
    payload.WithString("botAnalyzerRequestId", m_botAnalyzerRequestId);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
