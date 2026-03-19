/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/QuotaShareCapacityUsage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>The capacity utilization for a specific quota share, including the quota
 * share name and its current usage.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QuotaShareCapacityUtilization">AWS
 * API Reference</a></p>
 */
class QuotaShareCapacityUtilization {
 public:
  AWS_BATCH_API QuotaShareCapacityUtilization() = default;
  AWS_BATCH_API QuotaShareCapacityUtilization(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QuotaShareCapacityUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the quota share.</p>
   */
  inline const Aws::String& GetQuotaShareName() const { return m_quotaShareName; }
  inline bool QuotaShareNameHasBeenSet() const { return m_quotaShareNameHasBeenSet; }
  template <typename QuotaShareNameT = Aws::String>
  void SetQuotaShareName(QuotaShareNameT&& value) {
    m_quotaShareNameHasBeenSet = true;
    m_quotaShareName = std::forward<QuotaShareNameT>(value);
  }
  template <typename QuotaShareNameT = Aws::String>
  QuotaShareCapacityUtilization& WithQuotaShareName(QuotaShareNameT&& value) {
    SetQuotaShareName(std::forward<QuotaShareNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity usage information for this quota share, including the units of
   * compute capacity and quantity being used.</p>
   */
  inline const Aws::Vector<QuotaShareCapacityUsage>& GetCapacityUsage() const { return m_capacityUsage; }
  inline bool CapacityUsageHasBeenSet() const { return m_capacityUsageHasBeenSet; }
  template <typename CapacityUsageT = Aws::Vector<QuotaShareCapacityUsage>>
  void SetCapacityUsage(CapacityUsageT&& value) {
    m_capacityUsageHasBeenSet = true;
    m_capacityUsage = std::forward<CapacityUsageT>(value);
  }
  template <typename CapacityUsageT = Aws::Vector<QuotaShareCapacityUsage>>
  QuotaShareCapacityUtilization& WithCapacityUsage(CapacityUsageT&& value) {
    SetCapacityUsage(std::forward<CapacityUsageT>(value));
    return *this;
  }
  template <typename CapacityUsageT = QuotaShareCapacityUsage>
  QuotaShareCapacityUtilization& AddCapacityUsage(CapacityUsageT&& value) {
    m_capacityUsageHasBeenSet = true;
    m_capacityUsage.emplace_back(std::forward<CapacityUsageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_quotaShareName;

  Aws::Vector<QuotaShareCapacityUsage> m_capacityUsage;
  bool m_quotaShareNameHasBeenSet = false;
  bool m_capacityUsageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
