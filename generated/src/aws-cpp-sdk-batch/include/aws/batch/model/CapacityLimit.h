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
 * <p>Defines the type and maximum quantity of resources that can be allocated to
 * service jobs in a service environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CapacityLimit">AWS
 * API Reference</a></p>
 */
class CapacityLimit {
 public:
  AWS_BATCH_API CapacityLimit() = default;
  AWS_BATCH_API CapacityLimit(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API CapacityLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum capacity available for the service environment. For a quota
   * management enabled service environment, this value represents the maximum
   * quantity of a particular resource type (specified by <code>capacityUnit</code>)
   * that can be allocated to service jobs. For other service environments, this
   * value represents the maximum quantity of all resources that can be allocated to
   * service jobs.</p> <p>For example, if <code>maxCapacity=50</code> and
   * <code>capacityUnit=NUM_INSTANCES</code>, you can run up to 50 instances
   * concurrently. If you run 5 SageMaker Training jobs that each use 10 instances, a
   * subsequent job requiring 10 instances waits in the queue until capacity is
   * available. In a quota management enabled service environment with
   * <code>capacityUnit=ml.m5.large</code>, only <code>ml.m5.large</code> instances
   * count against this limit, and jobs requiring other instance types wait until a
   * matching capacity limit is configured.</p>
   */
  inline int GetMaxCapacity() const { return m_maxCapacity; }
  inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
  inline void SetMaxCapacity(int value) {
    m_maxCapacityHasBeenSet = true;
    m_maxCapacity = value;
  }
  inline CapacityLimit& WithMaxCapacity(int value) {
    SetMaxCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of measure for the capacity limit, which defines how
   * <code>maxCapacity</code> is interpreted. For <code>SAGEMAKER_TRAINING</code>
   * jobs in a quota management enabled service environment, specify the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ResourceConfig.html#sagemaker-Type-ResourceConfig-InstanceType">instance
   * type</a> (for example, <code>ml.m5.large</code>). Otherwise, use
   * <code>NUM_INSTANCES</code>.</p>
   */
  inline const Aws::String& GetCapacityUnit() const { return m_capacityUnit; }
  inline bool CapacityUnitHasBeenSet() const { return m_capacityUnitHasBeenSet; }
  template <typename CapacityUnitT = Aws::String>
  void SetCapacityUnit(CapacityUnitT&& value) {
    m_capacityUnitHasBeenSet = true;
    m_capacityUnit = std::forward<CapacityUnitT>(value);
  }
  template <typename CapacityUnitT = Aws::String>
  CapacityLimit& WithCapacityUnit(CapacityUnitT&& value) {
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
