/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>The summary of the specified search job scope, including: </p> <ul> <li>
   * <p>TotalBackupsToScanCount, the number of recovery points returned by the
   * search.</p> </li> <li> <p>TotalItemsToScanCount, the number of items returned by
   * the search.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/SearchScopeSummary">AWS
   * API Reference</a></p>
   */
  class SearchScopeSummary
  {
  public:
    AWS_BACKUPSEARCH_API SearchScopeSummary() = default;
    AWS_BACKUPSEARCH_API SearchScopeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API SearchScopeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the count of the total number of backups that will be scanned in a
     * search.</p>
     */
    inline int GetTotalRecoveryPointsToScanCount() const { return m_totalRecoveryPointsToScanCount; }
    inline bool TotalRecoveryPointsToScanCountHasBeenSet() const { return m_totalRecoveryPointsToScanCountHasBeenSet; }
    inline void SetTotalRecoveryPointsToScanCount(int value) { m_totalRecoveryPointsToScanCountHasBeenSet = true; m_totalRecoveryPointsToScanCount = value; }
    inline SearchScopeSummary& WithTotalRecoveryPointsToScanCount(int value) { SetTotalRecoveryPointsToScanCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the count of the total number of items that will be scanned in a
     * search.</p>
     */
    inline long long GetTotalItemsToScanCount() const { return m_totalItemsToScanCount; }
    inline bool TotalItemsToScanCountHasBeenSet() const { return m_totalItemsToScanCountHasBeenSet; }
    inline void SetTotalItemsToScanCount(long long value) { m_totalItemsToScanCountHasBeenSet = true; m_totalItemsToScanCount = value; }
    inline SearchScopeSummary& WithTotalItemsToScanCount(long long value) { SetTotalItemsToScanCount(value); return *this;}
    ///@}
  private:

    int m_totalRecoveryPointsToScanCount{0};
    bool m_totalRecoveryPointsToScanCountHasBeenSet = false;

    long long m_totalItemsToScanCount{0};
    bool m_totalItemsToScanCountHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
