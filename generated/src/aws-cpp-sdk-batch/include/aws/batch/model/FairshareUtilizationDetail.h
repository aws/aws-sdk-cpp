/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/FairshareCapacityUtilization.h>
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
 * <p>The fairshare utilization for a job queue, including the number of active
 * shares and top capacity utilization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/FairshareUtilizationDetail">AWS
 * API Reference</a></p>
 */
class FairshareUtilizationDetail {
 public:
  AWS_BATCH_API FairshareUtilizationDetail() = default;
  AWS_BATCH_API FairshareUtilizationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API FairshareUtilizationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of active shares in the fairshare scheduling job queue that
   * are currently utilizing capacity.</p>
   */
  inline long long GetActiveShareCount() const { return m_activeShareCount; }
  inline bool ActiveShareCountHasBeenSet() const { return m_activeShareCountHasBeenSet; }
  inline void SetActiveShareCount(long long value) {
    m_activeShareCountHasBeenSet = true;
    m_activeShareCount = value;
  }
  inline FairshareUtilizationDetail& WithActiveShareCount(long long value) {
    SetActiveShareCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the top 20 shares with the highest capacity utilization, ordered by
   * usage amount.</p>
   */
  inline const Aws::Vector<FairshareCapacityUtilization>& GetTopCapacityUtilization() const { return m_topCapacityUtilization; }
  inline bool TopCapacityUtilizationHasBeenSet() const { return m_topCapacityUtilizationHasBeenSet; }
  template <typename TopCapacityUtilizationT = Aws::Vector<FairshareCapacityUtilization>>
  void SetTopCapacityUtilization(TopCapacityUtilizationT&& value) {
    m_topCapacityUtilizationHasBeenSet = true;
    m_topCapacityUtilization = std::forward<TopCapacityUtilizationT>(value);
  }
  template <typename TopCapacityUtilizationT = Aws::Vector<FairshareCapacityUtilization>>
  FairshareUtilizationDetail& WithTopCapacityUtilization(TopCapacityUtilizationT&& value) {
    SetTopCapacityUtilization(std::forward<TopCapacityUtilizationT>(value));
    return *this;
  }
  template <typename TopCapacityUtilizationT = FairshareCapacityUtilization>
  FairshareUtilizationDetail& AddTopCapacityUtilization(TopCapacityUtilizationT&& value) {
    m_topCapacityUtilizationHasBeenSet = true;
    m_topCapacityUtilization.emplace_back(std::forward<TopCapacityUtilizationT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_activeShareCount{0};

  Aws::Vector<FairshareCapacityUtilization> m_topCapacityUtilization;
  bool m_activeShareCountHasBeenSet = false;
  bool m_topCapacityUtilizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
