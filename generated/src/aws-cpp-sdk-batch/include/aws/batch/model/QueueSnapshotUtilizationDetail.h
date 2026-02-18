/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/FairshareUtilizationDetail.h>
#include <aws/batch/model/QueueSnapshotCapacityUsage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The job queue utilization at a specific point in time, including total
 * capacity usage and fairshare utilization breakdown.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QueueSnapshotUtilizationDetail">AWS
 * API Reference</a></p>
 */
class QueueSnapshotUtilizationDetail {
 public:
  AWS_BATCH_API QueueSnapshotUtilizationDetail() = default;
  AWS_BATCH_API QueueSnapshotUtilizationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QueueSnapshotUtilizationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total capacity usage for the entire job queue, for both first-in,
   * first-out (FIFO) and fairshare scheduling job queue.</p>
   */
  inline const Aws::Vector<QueueSnapshotCapacityUsage>& GetTotalCapacityUsage() const { return m_totalCapacityUsage; }
  inline bool TotalCapacityUsageHasBeenSet() const { return m_totalCapacityUsageHasBeenSet; }
  template <typename TotalCapacityUsageT = Aws::Vector<QueueSnapshotCapacityUsage>>
  void SetTotalCapacityUsage(TotalCapacityUsageT&& value) {
    m_totalCapacityUsageHasBeenSet = true;
    m_totalCapacityUsage = std::forward<TotalCapacityUsageT>(value);
  }
  template <typename TotalCapacityUsageT = Aws::Vector<QueueSnapshotCapacityUsage>>
  QueueSnapshotUtilizationDetail& WithTotalCapacityUsage(TotalCapacityUsageT&& value) {
    SetTotalCapacityUsage(std::forward<TotalCapacityUsageT>(value));
    return *this;
  }
  template <typename TotalCapacityUsageT = QueueSnapshotCapacityUsage>
  QueueSnapshotUtilizationDetail& AddTotalCapacityUsage(TotalCapacityUsageT&& value) {
    m_totalCapacityUsageHasBeenSet = true;
    m_totalCapacityUsage.emplace_back(std::forward<TotalCapacityUsageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The utilization information for a fairshare scheduling job queues, including
   * active share count and top capacity utilization by share.</p>
   */
  inline const FairshareUtilizationDetail& GetFairshareUtilization() const { return m_fairshareUtilization; }
  inline bool FairshareUtilizationHasBeenSet() const { return m_fairshareUtilizationHasBeenSet; }
  template <typename FairshareUtilizationT = FairshareUtilizationDetail>
  void SetFairshareUtilization(FairshareUtilizationT&& value) {
    m_fairshareUtilizationHasBeenSet = true;
    m_fairshareUtilization = std::forward<FairshareUtilizationT>(value);
  }
  template <typename FairshareUtilizationT = FairshareUtilizationDetail>
  QueueSnapshotUtilizationDetail& WithFairshareUtilization(FairshareUtilizationT&& value) {
    SetFairshareUtilization(std::forward<FairshareUtilizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp (in milliseconds) for when the queue utilization
   * information was last updated.</p>
   */
  inline long long GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  inline void SetLastUpdatedAt(long long value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = value;
  }
  inline QueueSnapshotUtilizationDetail& WithLastUpdatedAt(long long value) {
    SetLastUpdatedAt(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<QueueSnapshotCapacityUsage> m_totalCapacityUsage;

  FairshareUtilizationDetail m_fairshareUtilization;

  long long m_lastUpdatedAt{0};
  bool m_totalCapacityUsageHasBeenSet = false;
  bool m_fairshareUtilizationHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
