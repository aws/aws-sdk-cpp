/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupRequest.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/backup/model/ScanResourceType.h>
#include <aws/backup/model/ScanResultStatus.h>
#include <aws/backup/model/ScanState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Backup {
namespace Model {

/**
 */
class ListScanJobsRequest : public BackupRequest {
 public:
  AWS_BACKUP_API ListScanJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListScanJobs"; }

  AWS_BACKUP_API Aws::String SerializePayload() const override;

  AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The account ID to list the jobs from. Returns only backup jobs associated
   * with the specified account ID.</p> <p>If used from an Amazon Web Services
   * Organizations management account, passing <code>*</code> returns all jobs across
   * the organization.</p> <p>Pattern: <code>^[0-9]{12}$</code> </p>
   */
  inline const Aws::String& GetByAccountId() const { return m_byAccountId; }
  inline bool ByAccountIdHasBeenSet() const { return m_byAccountIdHasBeenSet; }
  template <typename ByAccountIdT = Aws::String>
  void SetByAccountId(ByAccountIdT&& value) {
    m_byAccountIdHasBeenSet = true;
    m_byAccountId = std::forward<ByAccountIdT>(value);
  }
  template <typename ByAccountIdT = Aws::String>
  ListScanJobsRequest& WithByAccountId(ByAccountIdT&& value) {
    SetByAccountId(std::forward<ByAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only scan jobs that will be stored in the specified backup vault.
   * Backup vaults are identified by names that are unique to the account used to
   * create them and the Amazon Web Services Region where they are created.</p>
   * <p>Pattern: <code>^[a-zA-Z0-9\-\_\.]{2,50}$</code> </p>
   */
  inline const Aws::String& GetByBackupVaultName() const { return m_byBackupVaultName; }
  inline bool ByBackupVaultNameHasBeenSet() const { return m_byBackupVaultNameHasBeenSet; }
  template <typename ByBackupVaultNameT = Aws::String>
  void SetByBackupVaultName(ByBackupVaultNameT&& value) {
    m_byBackupVaultNameHasBeenSet = true;
    m_byBackupVaultName = std::forward<ByBackupVaultNameT>(value);
  }
  template <typename ByBackupVaultNameT = Aws::String>
  ListScanJobsRequest& WithByBackupVaultName(ByBackupVaultNameT&& value) {
    SetByBackupVaultName(std::forward<ByBackupVaultNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only scan jobs completed after a date expressed in Unix format and
   * Coordinated Universal Time (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetByCompleteAfter() const { return m_byCompleteAfter; }
  inline bool ByCompleteAfterHasBeenSet() const { return m_byCompleteAfterHasBeenSet; }
  template <typename ByCompleteAfterT = Aws::Utils::DateTime>
  void SetByCompleteAfter(ByCompleteAfterT&& value) {
    m_byCompleteAfterHasBeenSet = true;
    m_byCompleteAfter = std::forward<ByCompleteAfterT>(value);
  }
  template <typename ByCompleteAfterT = Aws::Utils::DateTime>
  ListScanJobsRequest& WithByCompleteAfter(ByCompleteAfterT&& value) {
    SetByCompleteAfter(std::forward<ByCompleteAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only backup jobs completed before a date expressed in Unix format and
   * Coordinated Universal Time (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetByCompleteBefore() const { return m_byCompleteBefore; }
  inline bool ByCompleteBeforeHasBeenSet() const { return m_byCompleteBeforeHasBeenSet; }
  template <typename ByCompleteBeforeT = Aws::Utils::DateTime>
  void SetByCompleteBefore(ByCompleteBeforeT&& value) {
    m_byCompleteBeforeHasBeenSet = true;
    m_byCompleteBefore = std::forward<ByCompleteBeforeT>(value);
  }
  template <typename ByCompleteBeforeT = Aws::Utils::DateTime>
  ListScanJobsRequest& WithByCompleteBefore(ByCompleteBeforeT&& value) {
    SetByCompleteBefore(std::forward<ByCompleteBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the scan jobs for the specified malware scanner. Currently only
   * supports <code>GUARDDUTY</code>.</p>
   */
  inline MalwareScanner GetByMalwareScanner() const { return m_byMalwareScanner; }
  inline bool ByMalwareScannerHasBeenSet() const { return m_byMalwareScannerHasBeenSet; }
  inline void SetByMalwareScanner(MalwareScanner value) {
    m_byMalwareScannerHasBeenSet = true;
    m_byMalwareScanner = value;
  }
  inline ListScanJobsRequest& WithByMalwareScanner(MalwareScanner value) {
    SetByMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the scan jobs that are ran against the specified recovery
   * point.</p>
   */
  inline const Aws::String& GetByRecoveryPointArn() const { return m_byRecoveryPointArn; }
  inline bool ByRecoveryPointArnHasBeenSet() const { return m_byRecoveryPointArnHasBeenSet; }
  template <typename ByRecoveryPointArnT = Aws::String>
  void SetByRecoveryPointArn(ByRecoveryPointArnT&& value) {
    m_byRecoveryPointArnHasBeenSet = true;
    m_byRecoveryPointArn = std::forward<ByRecoveryPointArnT>(value);
  }
  template <typename ByRecoveryPointArnT = Aws::String>
  ListScanJobsRequest& WithByRecoveryPointArn(ByRecoveryPointArnT&& value) {
    SetByRecoveryPointArn(std::forward<ByRecoveryPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only scan jobs that match the specified resource Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetByResourceArn() const { return m_byResourceArn; }
  inline bool ByResourceArnHasBeenSet() const { return m_byResourceArnHasBeenSet; }
  template <typename ByResourceArnT = Aws::String>
  void SetByResourceArn(ByResourceArnT&& value) {
    m_byResourceArnHasBeenSet = true;
    m_byResourceArn = std::forward<ByResourceArnT>(value);
  }
  template <typename ByResourceArnT = Aws::String>
  ListScanJobsRequest& WithByResourceArn(ByResourceArnT&& value) {
    SetByResourceArn(std::forward<ByResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns restore testing selections by the specified restore testing plan
   * name.</p> <ul> <li> <p> <code>EBS</code>for Amazon Elastic Block Store</p> </li>
   * <li> <p> <code>EC2</code>for Amazon Elastic Compute Cloud</p> </li> <li> <p>
   * <code>S3</code>for Amazon Simple Storage Service (Amazon S3)</p> </li> </ul>
   * <p>Pattern: <code>^[a-zA-Z0-9\-\_\.]{1,50}$</code> </p>
   */
  inline ScanResourceType GetByResourceType() const { return m_byResourceType; }
  inline bool ByResourceTypeHasBeenSet() const { return m_byResourceTypeHasBeenSet; }
  inline void SetByResourceType(ScanResourceType value) {
    m_byResourceTypeHasBeenSet = true;
    m_byResourceType = value;
  }
  inline ListScanJobsRequest& WithByResourceType(ScanResourceType value) {
    SetByResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the scan jobs for the specified scan results:</p> <ul> <li> <p>
   * <code>THREATS_FOUND</code> </p> </li> <li> <p> <code>NO_THREATS_FOUND</code>
   * </p> </li> </ul>
   */
  inline ScanResultStatus GetByScanResultStatus() const { return m_byScanResultStatus; }
  inline bool ByScanResultStatusHasBeenSet() const { return m_byScanResultStatusHasBeenSet; }
  inline void SetByScanResultStatus(ScanResultStatus value) {
    m_byScanResultStatusHasBeenSet = true;
    m_byScanResultStatus = value;
  }
  inline ListScanJobsRequest& WithByScanResultStatus(ScanResultStatus value) {
    SetByScanResultStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the scan jobs for the specified scanning job state.</p>
   */
  inline ScanState GetByState() const { return m_byState; }
  inline bool ByStateHasBeenSet() const { return m_byStateHasBeenSet; }
  inline void SetByState(ScanState value) {
    m_byStateHasBeenSet = true;
    m_byState = value;
  }
  inline ListScanJobsRequest& WithByState(ScanState value) {
    SetByState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to be returned.</p> <p>Valid Range: Minimum value
   * of 1. Maximum value of 1000.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListScanJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next item following a partial list of returned items. For example, if a
   * request is made to return <code>MaxResults</code> number of items,
   * <code>NextToken</code> allows you to return more items in your list starting at
   * the location pointed to by the next token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScanJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_byAccountId;

  Aws::String m_byBackupVaultName;

  Aws::Utils::DateTime m_byCompleteAfter{};

  Aws::Utils::DateTime m_byCompleteBefore{};

  MalwareScanner m_byMalwareScanner{MalwareScanner::NOT_SET};

  Aws::String m_byRecoveryPointArn;

  Aws::String m_byResourceArn;

  ScanResourceType m_byResourceType{ScanResourceType::NOT_SET};

  ScanResultStatus m_byScanResultStatus{ScanResultStatus::NOT_SET};

  ScanState m_byState{ScanState::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_byAccountIdHasBeenSet = false;
  bool m_byBackupVaultNameHasBeenSet = false;
  bool m_byCompleteAfterHasBeenSet = false;
  bool m_byCompleteBeforeHasBeenSet = false;
  bool m_byMalwareScannerHasBeenSet = false;
  bool m_byRecoveryPointArnHasBeenSet = false;
  bool m_byResourceArnHasBeenSet = false;
  bool m_byResourceTypeHasBeenSet = false;
  bool m_byScanResultStatusHasBeenSet = false;
  bool m_byStateHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
