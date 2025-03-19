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
   * <p>This contains information results retrieved from a search job that may not
   * have completed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/CurrentSearchProgress">AWS
   * API Reference</a></p>
   */
  class CurrentSearchProgress
  {
  public:
    AWS_BACKUPSEARCH_API CurrentSearchProgress() = default;
    AWS_BACKUPSEARCH_API CurrentSearchProgress(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API CurrentSearchProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This number is the sum of all backups that have been scanned so far during a
     * search job.</p>
     */
    inline int GetRecoveryPointsScannedCount() const { return m_recoveryPointsScannedCount; }
    inline bool RecoveryPointsScannedCountHasBeenSet() const { return m_recoveryPointsScannedCountHasBeenSet; }
    inline void SetRecoveryPointsScannedCount(int value) { m_recoveryPointsScannedCountHasBeenSet = true; m_recoveryPointsScannedCount = value; }
    inline CurrentSearchProgress& WithRecoveryPointsScannedCount(int value) { SetRecoveryPointsScannedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This number is the sum of all items that have been scanned so far during a
     * search job.</p>
     */
    inline long long GetItemsScannedCount() const { return m_itemsScannedCount; }
    inline bool ItemsScannedCountHasBeenSet() const { return m_itemsScannedCountHasBeenSet; }
    inline void SetItemsScannedCount(long long value) { m_itemsScannedCountHasBeenSet = true; m_itemsScannedCount = value; }
    inline CurrentSearchProgress& WithItemsScannedCount(long long value) { SetItemsScannedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This number is the sum of all items that match the item filters in a search
     * job in progress.</p>
     */
    inline long long GetItemsMatchedCount() const { return m_itemsMatchedCount; }
    inline bool ItemsMatchedCountHasBeenSet() const { return m_itemsMatchedCountHasBeenSet; }
    inline void SetItemsMatchedCount(long long value) { m_itemsMatchedCountHasBeenSet = true; m_itemsMatchedCount = value; }
    inline CurrentSearchProgress& WithItemsMatchedCount(long long value) { SetItemsMatchedCount(value); return *this;}
    ///@}
  private:

    int m_recoveryPointsScannedCount{0};
    bool m_recoveryPointsScannedCountHasBeenSet = false;

    long long m_itemsScannedCount{0};
    bool m_itemsScannedCountHasBeenSet = false;

    long long m_itemsMatchedCount{0};
    bool m_itemsMatchedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
