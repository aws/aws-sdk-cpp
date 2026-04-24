/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

ScanResult::ScanResult(JsonView jsonValue) { *this = jsonValue; }

ScanResult& ScanResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MalwareScanner")) {
    m_malwareScanner = MalwareScannerMapper::GetMalwareScannerForName(jsonValue.GetString("MalwareScanner"));
    m_malwareScannerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScanJobState")) {
    m_scanJobState = ScanJobStateMapper::GetScanJobStateForName(jsonValue.GetString("ScanJobState"));
    m_scanJobStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastScanTimestamp")) {
    m_lastScanTimestamp = jsonValue.GetDouble("LastScanTimestamp");
    m_lastScanTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("Findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(ScanFindingMapper::GetScanFindingForName(findingsJsonList[findingsIndex].AsString()));
    }
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanResult::Jsonize() const {
  JsonValue payload;

  if (m_malwareScannerHasBeenSet) {
    payload.WithString("MalwareScanner", MalwareScannerMapper::GetNameForMalwareScanner(m_malwareScanner));
  }

  if (m_scanJobStateHasBeenSet) {
    payload.WithString("ScanJobState", ScanJobStateMapper::GetNameForScanJobState(m_scanJobState));
  }

  if (m_lastScanTimestampHasBeenSet) {
    payload.WithDouble("LastScanTimestamp", m_lastScanTimestamp.SecondsWithMSPrecision());
  }

  if (m_findingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      findingsJsonList[findingsIndex].AsString(ScanFindingMapper::GetNameForScanFinding(m_findings[findingsIndex]));
    }
    payload.WithArray("Findings", std::move(findingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
