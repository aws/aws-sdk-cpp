/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ScanFinding.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {

/**
 * <p>Contains aggregated scan results across multiple scan operations, providing a
 * summary of scan status and findings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/AggregatedScanResult">AWS
 * API Reference</a></p>
 */
class AggregatedScanResult {
 public:
  AWS_BACKUP_API AggregatedScanResult() = default;
  AWS_BACKUP_API AggregatedScanResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API AggregatedScanResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A Boolean value indicating whether any of the aggregated scans failed.</p>
   */
  inline bool GetFailedScan() const { return m_failedScan; }
  inline bool FailedScanHasBeenSet() const { return m_failedScanHasBeenSet; }
  inline void SetFailedScan(bool value) {
    m_failedScanHasBeenSet = true;
    m_failedScan = value;
  }
  inline AggregatedScanResult& WithFailedScan(bool value) {
    SetFailedScan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of findings discovered across all aggregated scans.</p>
   */
  inline const Aws::Vector<ScanFinding>& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::Vector<ScanFinding>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<ScanFinding>>
  AggregatedScanResult& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  inline AggregatedScanResult& AddFindings(ScanFinding value) {
    m_findingsHasBeenSet = true;
    m_findings.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the aggregated scan result was last computed, in Unix
   * format and Coordinated Universal Time (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetLastComputed() const { return m_lastComputed; }
  inline bool LastComputedHasBeenSet() const { return m_lastComputedHasBeenSet; }
  template <typename LastComputedT = Aws::Utils::DateTime>
  void SetLastComputed(LastComputedT&& value) {
    m_lastComputedHasBeenSet = true;
    m_lastComputed = std::forward<LastComputedT>(value);
  }
  template <typename LastComputedT = Aws::Utils::DateTime>
  AggregatedScanResult& WithLastComputed(LastComputedT&& value) {
    SetLastComputed(std::forward<LastComputedT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_failedScan{false};
  bool m_failedScanHasBeenSet = false;

  Aws::Vector<ScanFinding> m_findings;
  bool m_findingsHasBeenSet = false;

  Aws::Utils::DateTime m_lastComputed{};
  bool m_lastComputedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
