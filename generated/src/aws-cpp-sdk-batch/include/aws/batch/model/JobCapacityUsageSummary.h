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
 * <p>The capacity usage for a job, including the unit of measure and quantity of
 * resources being used.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobCapacityUsageSummary">AWS
 * API Reference</a></p>
 */
class JobCapacityUsageSummary {
 public:
  AWS_BATCH_API JobCapacityUsageSummary() = default;
  AWS_BATCH_API JobCapacityUsageSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API JobCapacityUsageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unit of measure for the capacity usage. This is <code>VCPU</code> for
   * Amazon EC2 and <code>cpu</code> for Amazon EKS.</p>
   */
  inline const Aws::String& GetCapacityUnit() const { return m_capacityUnit; }
  inline bool CapacityUnitHasBeenSet() const { return m_capacityUnitHasBeenSet; }
  template <typename CapacityUnitT = Aws::String>
  void SetCapacityUnit(CapacityUnitT&& value) {
    m_capacityUnitHasBeenSet = true;
    m_capacityUnit = std::forward<CapacityUnitT>(value);
  }
  template <typename CapacityUnitT = Aws::String>
  JobCapacityUsageSummary& WithCapacityUnit(CapacityUnitT&& value) {
    SetCapacityUnit(std::forward<CapacityUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The quantity of capacity being used by the job, measured in the units
   * specified by <code>capacityUnit</code>.</p>
   */
  inline double GetQuantity() const { return m_quantity; }
  inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
  inline void SetQuantity(double value) {
    m_quantityHasBeenSet = true;
    m_quantity = value;
  }
  inline JobCapacityUsageSummary& WithQuantity(double value) {
    SetQuantity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityUnit;

  double m_quantity{0.0};
  bool m_capacityUnitHasBeenSet = false;
  bool m_quantityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
