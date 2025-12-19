/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/backup/model/ScanFinding.h>
#include <aws/backup/model/ScanJobState.h>
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
 * <p>Contains the results of a security scan, including scanner information, scan
 * state, and any findings discovered.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScanResult">AWS
 * API Reference</a></p>
 */
class ScanResult {
 public:
  AWS_BACKUP_API ScanResult() = default;
  AWS_BACKUP_API ScanResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScanResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The malware scanner used to perform the scan. Currently only
   * <code>GUARDDUTY</code> is supported.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline bool MalwareScannerHasBeenSet() const { return m_malwareScannerHasBeenSet; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline ScanResult& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final state of the scan job.</p> <p>Valid values: <code>COMPLETED</code>
   * | <code>FAILED</code> | <code>CANCELED</code>.</p>
   */
  inline ScanJobState GetScanJobState() const { return m_scanJobState; }
  inline bool ScanJobStateHasBeenSet() const { return m_scanJobStateHasBeenSet; }
  inline void SetScanJobState(ScanJobState value) {
    m_scanJobStateHasBeenSet = true;
    m_scanJobState = value;
  }
  inline ScanResult& WithScanJobState(ScanJobState value) {
    SetScanJobState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the last scan was performed, in Unix format and
   * Coordinated Universal Time (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetLastScanTimestamp() const { return m_lastScanTimestamp; }
  inline bool LastScanTimestampHasBeenSet() const { return m_lastScanTimestampHasBeenSet; }
  template <typename LastScanTimestampT = Aws::Utils::DateTime>
  void SetLastScanTimestamp(LastScanTimestampT&& value) {
    m_lastScanTimestampHasBeenSet = true;
    m_lastScanTimestamp = std::forward<LastScanTimestampT>(value);
  }
  template <typename LastScanTimestampT = Aws::Utils::DateTime>
  ScanResult& WithLastScanTimestamp(LastScanTimestampT&& value) {
    SetLastScanTimestamp(std::forward<LastScanTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of findings discovered during the scan.</p>
   */
  inline const Aws::Vector<ScanFinding>& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::Vector<ScanFinding>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<ScanFinding>>
  ScanResult& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  inline ScanResult& AddFindings(ScanFinding value) {
    m_findingsHasBeenSet = true;
    m_findings.push_back(value);
    return *this;
  }
  ///@}
 private:
  MalwareScanner m_malwareScanner{MalwareScanner::NOT_SET};

  ScanJobState m_scanJobState{ScanJobState::NOT_SET};

  Aws::Utils::DateTime m_lastScanTimestamp{};

  Aws::Vector<ScanFinding> m_findings;
  bool m_malwareScannerHasBeenSet = false;
  bool m_scanJobStateHasBeenSet = false;
  bool m_lastScanTimestampHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
