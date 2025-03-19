/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/AllocationStrategy.h>
#include <aws/compute-optimizer/model/AsgType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the configuration of an EC2 Auto Scaling group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/AutoScalingGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroupConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration() = default;
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired capacity, or number of instances, for the EC2 Auto Scaling
     * group.</p>
     */
    inline int GetDesiredCapacity() const { return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline AutoScalingGroupConfiguration& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum size, or minimum number of instances, for the EC2 Auto Scaling
     * group.</p>
     */
    inline int GetMinSize() const { return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline AutoScalingGroupConfiguration& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size, or maximum number of instances, for the EC2 Auto Scaling
     * group.</p>
     */
    inline int GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline AutoScalingGroupConfiguration& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the EC2 Auto Scaling group.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AutoScalingGroupConfiguration& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the allocation strategy that the EC2 Auto Scaling group uses. This
     * field is only available for EC2 Auto Scaling groups with mixed instance types.
     * </p>
     */
    inline AllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(AllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline AutoScalingGroupConfiguration& WithAllocationStrategy(AllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the projected percentage reduction in instance hours after
     * adopting the recommended configuration. This field is only available for EC2
     * Auto Scaling groups with scaling policies. </p>
     */
    inline double GetEstimatedInstanceHourReductionPercentage() const { return m_estimatedInstanceHourReductionPercentage; }
    inline bool EstimatedInstanceHourReductionPercentageHasBeenSet() const { return m_estimatedInstanceHourReductionPercentageHasBeenSet; }
    inline void SetEstimatedInstanceHourReductionPercentage(double value) { m_estimatedInstanceHourReductionPercentageHasBeenSet = true; m_estimatedInstanceHourReductionPercentage = value; }
    inline AutoScalingGroupConfiguration& WithEstimatedInstanceHourReductionPercentage(double value) { SetEstimatedInstanceHourReductionPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes whether the EC2 Auto Scaling group has a single instance type or a
     * mixed instance type configuration. </p>
     */
    inline AsgType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AsgType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AutoScalingGroupConfiguration& WithType(AsgType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List the instance types within an EC2 Auto Scaling group that has mixed
     * instance types. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMixedInstanceTypes() const { return m_mixedInstanceTypes; }
    inline bool MixedInstanceTypesHasBeenSet() const { return m_mixedInstanceTypesHasBeenSet; }
    template<typename MixedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetMixedInstanceTypes(MixedInstanceTypesT&& value) { m_mixedInstanceTypesHasBeenSet = true; m_mixedInstanceTypes = std::forward<MixedInstanceTypesT>(value); }
    template<typename MixedInstanceTypesT = Aws::Vector<Aws::String>>
    AutoScalingGroupConfiguration& WithMixedInstanceTypes(MixedInstanceTypesT&& value) { SetMixedInstanceTypes(std::forward<MixedInstanceTypesT>(value)); return *this;}
    template<typename MixedInstanceTypesT = Aws::String>
    AutoScalingGroupConfiguration& AddMixedInstanceTypes(MixedInstanceTypesT&& value) { m_mixedInstanceTypesHasBeenSet = true; m_mixedInstanceTypes.emplace_back(std::forward<MixedInstanceTypesT>(value)); return *this; }
    ///@}
  private:

    int m_desiredCapacity{0};
    bool m_desiredCapacityHasBeenSet = false;

    int m_minSize{0};
    bool m_minSizeHasBeenSet = false;

    int m_maxSize{0};
    bool m_maxSizeHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AllocationStrategy m_allocationStrategy{AllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;

    double m_estimatedInstanceHourReductionPercentage{0.0};
    bool m_estimatedInstanceHourReductionPercentageHasBeenSet = false;

    AsgType m_type{AsgType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_mixedInstanceTypes;
    bool m_mixedInstanceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
