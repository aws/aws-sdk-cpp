/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/QuotaShareCapacityUtilization.h>
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
 * <p>An object that represents the capacity utilization details of all quota
 * shares associated with a single job queue.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QuotaShareUtilizationDetail">AWS
 * API Reference</a></p>
 */
class QuotaShareUtilizationDetail {
 public:
  AWS_BATCH_API QuotaShareUtilizationDetail() = default;
  AWS_BATCH_API QuotaShareUtilizationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QuotaShareUtilizationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of the top capacity utilizations across quota shares associated with a
   * job queue.</p>
   */
  inline const Aws::Vector<QuotaShareCapacityUtilization>& GetTopCapacityUtilization() const { return m_topCapacityUtilization; }
  inline bool TopCapacityUtilizationHasBeenSet() const { return m_topCapacityUtilizationHasBeenSet; }
  template <typename TopCapacityUtilizationT = Aws::Vector<QuotaShareCapacityUtilization>>
  void SetTopCapacityUtilization(TopCapacityUtilizationT&& value) {
    m_topCapacityUtilizationHasBeenSet = true;
    m_topCapacityUtilization = std::forward<TopCapacityUtilizationT>(value);
  }
  template <typename TopCapacityUtilizationT = Aws::Vector<QuotaShareCapacityUtilization>>
  QuotaShareUtilizationDetail& WithTopCapacityUtilization(TopCapacityUtilizationT&& value) {
    SetTopCapacityUtilization(std::forward<TopCapacityUtilizationT>(value));
    return *this;
  }
  template <typename TopCapacityUtilizationT = QuotaShareCapacityUtilization>
  QuotaShareUtilizationDetail& AddTopCapacityUtilization(TopCapacityUtilizationT&& value) {
    m_topCapacityUtilizationHasBeenSet = true;
    m_topCapacityUtilization.emplace_back(std::forward<TopCapacityUtilizationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<QuotaShareCapacityUtilization> m_topCapacityUtilization;
  bool m_topCapacityUtilizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
