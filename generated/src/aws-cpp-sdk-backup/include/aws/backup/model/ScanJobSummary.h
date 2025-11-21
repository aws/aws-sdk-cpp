/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/backup/model/ScanJobStatus.h>
#include <aws/backup/model/ScanResultStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains summary information about scan jobs, including counts and metadata
 * for a specific time period and criteria.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScanJobSummary">AWS
 * API Reference</a></p>
 */
class ScanJobSummary {
 public:
  AWS_BACKUP_API ScanJobSummary() = default;
  AWS_BACKUP_API ScanJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScanJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region where the scan jobs were executed.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ScanJobSummary& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID that owns the scan jobs included in this summary.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ScanJobSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the scan jobs included in this summary.</p> <p>Valid values:
   * <code>CREATED</code> | <code>RUNNING</code> | <code>COMPLETED</code> |
   * <code>COMPLETED_WITH_ISSUES</code> | <code>FAILED</code> |
   * <code>CANCELED</code>.</p>
   */
  inline ScanJobStatus GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScanJobStatus value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ScanJobSummary& WithState(ScanJobStatus value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Amazon Web Services resource for the scan jobs included in this
   * summary.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ScanJobSummary& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of scan jobs that match the specified criteria.</p>
   */
  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline ScanJobSummary& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of time in number format of a job start time.</p> <p>This value is
   * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
   * milliseconds. For example, the value 1516925490.087 represents Friday, January
   * 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ScanJobSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of time in number format of a job end time.</p> <p>This value is
   * the time in Unix format, Coordinated Universal Time (UTC), and accurate to
   * milliseconds. For example, the value 1516925490.087 represents Friday, January
   * 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ScanJobSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the malware scanner used during the scan job. Currently only
   * supports <code>GUARDDUTY</code>.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline bool MalwareScannerHasBeenSet() const { return m_malwareScannerHasBeenSet; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline ScanJobSummary& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan result status for the scan jobs included in this summary.</p>
   * <p>Valid values: <code>THREATS_FOUND</code> | <code>NO_THREATS_FOUND</code>.</p>
   */
  inline ScanResultStatus GetScanResultStatus() const { return m_scanResultStatus; }
  inline bool ScanResultStatusHasBeenSet() const { return m_scanResultStatusHasBeenSet; }
  inline void SetScanResultStatus(ScanResultStatus value) {
    m_scanResultStatusHasBeenSet = true;
    m_scanResultStatus = value;
  }
  inline ScanJobSummary& WithScanResultStatus(ScanResultStatus value) {
    SetScanResultStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;
  bool m_regionHasBeenSet = false;

  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  ScanJobStatus m_state{ScanJobStatus::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::String m_resourceType;
  bool m_resourceTypeHasBeenSet = false;

  int m_count{0};
  bool m_countHasBeenSet = false;

  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

  MalwareScanner m_malwareScanner{MalwareScanner::NOT_SET};
  bool m_malwareScannerHasBeenSet = false;

  ScanResultStatus m_scanResultStatus{ScanResultStatus::NOT_SET};
  bool m_scanResultStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
