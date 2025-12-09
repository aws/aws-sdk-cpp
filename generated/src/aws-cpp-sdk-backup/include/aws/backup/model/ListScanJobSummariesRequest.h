/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupRequest.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/AggregationPeriod.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/backup/model/ScanJobStatus.h>
#include <aws/backup/model/ScanResultStatus.h>
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
class ListScanJobSummariesRequest : public BackupRequest {
 public:
  AWS_BACKUP_API ListScanJobSummariesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListScanJobSummaries"; }

  AWS_BACKUP_API Aws::String SerializePayload() const override;

  AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Returns the job count for the specified account.</p> <p>If the request is
   * sent from a member account or an account not part of Amazon Web Services
   * Organizations, jobs within requestor's account will be returned.</p> <p>Root,
   * admin, and delegated administrator accounts can use the value <code>ANY</code>
   * to return job counts from every account in the organization.</p> <p>
   * <code>AGGREGATE_ALL</code> aggregates job counts from all accounts within the
   * authenticated organization, then returns the sum.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ListScanJobSummariesRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns the job count for the specified resource type. Use request
   * <code>GetSupportedResourceTypes</code> to obtain strings for supported resource
   * types.</p> <p>The the value <code>ANY</code> returns count of all resource
   * types.</p> <p> <code>AGGREGATE_ALL</code> aggregates job counts for all resource
   * types and returns the sum.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ListScanJobSummariesRequest& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the scan jobs for the specified malware scanner. Currently the
   * only MalwareScanner is <code>GUARDDUTY</code>. But the field also supports
   * <code>ANY</code>, and <code>AGGREGATE_ALL</code>.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline bool MalwareScannerHasBeenSet() const { return m_malwareScannerHasBeenSet; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline ListScanJobSummariesRequest& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the scan jobs for the specified scan results.</p>
   */
  inline ScanResultStatus GetScanResultStatus() const { return m_scanResultStatus; }
  inline bool ScanResultStatusHasBeenSet() const { return m_scanResultStatusHasBeenSet; }
  inline void SetScanResultStatus(ScanResultStatus value) {
    m_scanResultStatusHasBeenSet = true;
    m_scanResultStatus = value;
  }
  inline ListScanJobSummariesRequest& WithScanResultStatus(ScanResultStatus value) {
    SetScanResultStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the scan jobs for the specified scanning job state.</p>
   */
  inline ScanJobStatus GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScanJobStatus value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListScanJobSummariesRequest& WithState(ScanJobStatus value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The period for the returned results.</p> <ul> <li> <p>
   * <code>ONE_DAY</code>The daily job count for the prior 1 day.</p> </li> <li> <p>
   * <code>SEVEN_DAYS</code>The daily job count for the prior 7 days.</p> </li> <li>
   * <p> <code>FOURTEEN_DAYS</code>The daily job count for the prior 14 days.</p>
   * </li> </ul>
   */
  inline AggregationPeriod GetAggregationPeriod() const { return m_aggregationPeriod; }
  inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
  inline void SetAggregationPeriod(AggregationPeriod value) {
    m_aggregationPeriodHasBeenSet = true;
    m_aggregationPeriod = value;
  }
  inline ListScanJobSummariesRequest& WithAggregationPeriod(AggregationPeriod value) {
    SetAggregationPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to be returned.</p> <p>The value is an integer.
   * Range of accepted values is from 1 to 500.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListScanJobSummariesRequest& WithMaxResults(int value) {
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
  ListScanJobSummariesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_resourceType;

  MalwareScanner m_malwareScanner{MalwareScanner::NOT_SET};

  ScanResultStatus m_scanResultStatus{ScanResultStatus::NOT_SET};

  ScanJobStatus m_state{ScanJobStatus::NOT_SET};

  AggregationPeriod m_aggregationPeriod{AggregationPeriod::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_accountIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_malwareScannerHasBeenSet = false;
  bool m_scanResultStatusHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_aggregationPeriodHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
