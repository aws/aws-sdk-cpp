/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/AggregatedScanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

AggregatedScanResult::AggregatedScanResult(JsonView jsonValue) { *this = jsonValue; }

AggregatedScanResult& AggregatedScanResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FailedScan")) {
    m_failedScan = jsonValue.GetBool("FailedScan");
    m_failedScanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("Findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(ScanFindingMapper::GetScanFindingForName(findingsJsonList[findingsIndex].AsString()));
    }
    m_findingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastComputed")) {
    m_lastComputed = jsonValue.GetDouble("LastComputed");
    m_lastComputedHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregatedScanResult::Jsonize() const {
  JsonValue payload;

  if (m_failedScanHasBeenSet) {
    payload.WithBool("FailedScan", m_failedScan);
  }

  if (m_findingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      findingsJsonList[findingsIndex].AsString(ScanFindingMapper::GetNameForScanFinding(m_findings[findingsIndex]));
    }
    payload.WithArray("Findings", std::move(findingsJsonList));
  }

  if (m_lastComputedHasBeenSet) {
    payload.WithDouble("LastComputed", m_lastComputed.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
