/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Defines the capacity limit for a quota share, or the type and maximum
 * quantity of a particular resource that can be allocated to jobs in the quota
 * share without borrowing. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QuotaShareCapacityLimit">AWS
 * API Reference</a></p>
 */
class QuotaShareCapacityLimit {
 public:
  AWS_BATCH_API QuotaShareCapacityLimit() = default;
  AWS_BATCH_API QuotaShareCapacityLimit(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QuotaShareCapacityLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum capacity available for the quota share. This value represents the
   * maximum quantity of a resource that can be allocated to jobs in the quota share
   * without borrowing.</p>
   */
  inline int GetMaxCapacity() const { return m_maxCapacity; }
  inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
  inline void SetMaxCapacity(int value) {
    m_maxCapacityHasBeenSet = true;
    m_maxCapacity = value;
  }
  inline QuotaShareCapacityLimit& WithMaxCapacity(int value) {
    SetMaxCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of compute capacity for the capacityLimit. For example,
   * <code>ml.m5.large</code>.</p>
   */
  inline const Aws::String& GetCapacityUnit() const { return m_capacityUnit; }
  inline bool CapacityUnitHasBeenSet() const { return m_capacityUnitHasBeenSet; }
  template <typename CapacityUnitT = Aws::String>
  void SetCapacityUnit(CapacityUnitT&& value) {
    m_capacityUnitHasBeenSet = true;
    m_capacityUnit = std::forward<CapacityUnitT>(value);
  }
  template <typename CapacityUnitT = Aws::String>
  QuotaShareCapacityLimit& WithCapacityUnit(CapacityUnitT&& value) {
    SetCapacityUnit(std::forward<CapacityUnitT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxCapacity{0};

  Aws::String m_capacityUnit;
  bool m_maxCapacityHasBeenSet = false;
  bool m_capacityUnitHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
