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
 * <p>The capacity usage for a service job, including the unit of measure and
 * quantity of resources being consumed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobCapacityUsageDetail">AWS
 * API Reference</a></p>
 */
class ServiceJobCapacityUsageDetail {
 public:
  AWS_BATCH_API ServiceJobCapacityUsageDetail() = default;
  AWS_BATCH_API ServiceJobCapacityUsageDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ServiceJobCapacityUsageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unit of measure for the service job capacity usage. For service jobs,
   * this is <code>NUM_INSTANCES</code>.</p>
   */
  inline const Aws::String& GetCapacityUnit() const { return m_capacityUnit; }
  inline bool CapacityUnitHasBeenSet() const { return m_capacityUnitHasBeenSet; }
  template <typename CapacityUnitT = Aws::String>
  void SetCapacityUnit(CapacityUnitT&& value) {
    m_capacityUnitHasBeenSet = true;
    m_capacityUnit = std::forward<CapacityUnitT>(value);
  }
  template <typename CapacityUnitT = Aws::String>
  ServiceJobCapacityUsageDetail& WithCapacityUnit(CapacityUnitT&& value) {
    SetCapacityUnit(std::forward<CapacityUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The quantity of capacity being used by the service job, measured in the units
   * specified by <code>capacityUnit</code>.</p>
   */
  inline double GetQuantity() const { return m_quantity; }
  inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
  inline void SetQuantity(double value) {
    m_quantityHasBeenSet = true;
    m_quantity = value;
  }
  inline ServiceJobCapacityUsageDetail& WithQuantity(double value) {
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
