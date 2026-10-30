/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/DryRunResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

DryRunResult::DryRunResult(JsonView jsonValue) { *this = jsonValue; }

DryRunResult& DryRunResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalMatchedLogGroups")) {
    m_totalMatchedLogGroups = jsonValue.GetInteger("totalMatchedLogGroups");
    m_totalMatchedLogGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("increasedRetentionLogGroupCount")) {
    m_increasedRetentionLogGroupCount = jsonValue.GetInteger("increasedRetentionLogGroupCount");
    m_increasedRetentionLogGroupCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decreasedRetentionLogGroupCount")) {
    m_decreasedRetentionLogGroupCount = jsonValue.GetInteger("decreasedRetentionLogGroupCount");
    m_decreasedRetentionLogGroupCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unchangedRetentionLogGroupCount")) {
    m_unchangedRetentionLogGroupCount = jsonValue.GetInteger("unchangedRetentionLogGroupCount");
    m_unchangedRetentionLogGroupCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedAnalysisCount")) {
    m_failedAnalysisCount = jsonValue.GetInteger("failedAnalysisCount");
    m_failedAnalysisCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topLogGroupsImpacted")) {
    Aws::Utils::Array<JsonView> topLogGroupsImpactedJsonList = jsonValue.GetArray("topLogGroupsImpacted");
    for (unsigned topLogGroupsImpactedIndex = 0; topLogGroupsImpactedIndex < topLogGroupsImpactedJsonList.GetLength();
         ++topLogGroupsImpactedIndex) {
      m_topLogGroupsImpacted.push_back(topLogGroupsImpactedJsonList[topLogGroupsImpactedIndex].AsObject());
    }
    m_topLogGroupsImpactedHasBeenSet = true;
  }
  return *this;
}

JsonValue DryRunResult::Jsonize() const {
  JsonValue payload;

  if (m_totalMatchedLogGroupsHasBeenSet) {
    payload.WithInteger("totalMatchedLogGroups", m_totalMatchedLogGroups);
  }

  if (m_increasedRetentionLogGroupCountHasBeenSet) {
    payload.WithInteger("increasedRetentionLogGroupCount", m_increasedRetentionLogGroupCount);
  }

  if (m_decreasedRetentionLogGroupCountHasBeenSet) {
    payload.WithInteger("decreasedRetentionLogGroupCount", m_decreasedRetentionLogGroupCount);
  }

  if (m_unchangedRetentionLogGroupCountHasBeenSet) {
    payload.WithInteger("unchangedRetentionLogGroupCount", m_unchangedRetentionLogGroupCount);
  }

  if (m_failedAnalysisCountHasBeenSet) {
    payload.WithInteger("failedAnalysisCount", m_failedAnalysisCount);
  }

  if (m_topLogGroupsImpactedHasBeenSet) {
    Aws::Utils::Array<JsonValue> topLogGroupsImpactedJsonList(m_topLogGroupsImpacted.size());
    for (unsigned topLogGroupsImpactedIndex = 0; topLogGroupsImpactedIndex < topLogGroupsImpactedJsonList.GetLength();
         ++topLogGroupsImpactedIndex) {
      topLogGroupsImpactedJsonList[topLogGroupsImpactedIndex].AsObject(m_topLogGroupsImpacted[topLogGroupsImpactedIndex].Jsonize());
    }
    payload.WithArray("topLogGroupsImpacted", std::move(topLogGroupsImpactedJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
