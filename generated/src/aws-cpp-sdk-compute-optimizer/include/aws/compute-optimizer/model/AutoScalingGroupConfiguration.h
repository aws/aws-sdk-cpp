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
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration();
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired capacity, or number of instances, for the EC2 Auto Scaling
     * group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline AutoScalingGroupConfiguration& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum size, or minimum number of instances, for the EC2 Auto Scaling
     * group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline AutoScalingGroupConfiguration& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size, or maximum number of instances, for the EC2 Auto Scaling
     * group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline AutoScalingGroupConfiguration& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the EC2 Auto Scaling group.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AutoScalingGroupConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AutoScalingGroupConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AutoScalingGroupConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the allocation strategy that the EC2 Auto Scaling group uses. This
     * field is only available for EC2 Auto Scaling groups with mixed instance types.
     * </p>
     */
    inline const AllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(const AllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline void SetAllocationStrategy(AllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }
    inline AutoScalingGroupConfiguration& WithAllocationStrategy(const AllocationStrategy& value) { SetAllocationStrategy(value); return *this;}
    inline AutoScalingGroupConfiguration& WithAllocationStrategy(AllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the projected percentage reduction in instance hours after
     * adopting the recommended configuration. This field is only available for EC2
     * Auto Scaling groups with scaling policies. </p>
     */
    inline double GetEstimatedInstanceHourReductionPercentage() const{ return m_estimatedInstanceHourReductionPercentage; }
    inline bool EstimatedInstanceHourReductionPercentageHasBeenSet() const { return m_estimatedInstanceHourReductionPercentageHasBeenSet; }
    inline void SetEstimatedInstanceHourReductionPercentage(double value) { m_estimatedInstanceHourReductionPercentageHasBeenSet = true; m_estimatedInstanceHourReductionPercentage = value; }
    inline AutoScalingGroupConfiguration& WithEstimatedInstanceHourReductionPercentage(double value) { SetEstimatedInstanceHourReductionPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes whether the EC2 Auto Scaling group has a single instance type or a
     * mixed instance type configuration. </p>
     */
    inline const AsgType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AsgType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AsgType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AutoScalingGroupConfiguration& WithType(const AsgType& value) { SetType(value); return *this;}
    inline AutoScalingGroupConfiguration& WithType(AsgType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List the instance types within an EC2 Auto Scaling group that has mixed
     * instance types. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMixedInstanceTypes() const{ return m_mixedInstanceTypes; }
    inline bool MixedInstanceTypesHasBeenSet() const { return m_mixedInstanceTypesHasBeenSet; }
    inline void SetMixedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_mixedInstanceTypesHasBeenSet = true; m_mixedInstanceTypes = value; }
    inline void SetMixedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_mixedInstanceTypesHasBeenSet = true; m_mixedInstanceTypes = std::move(value); }
    inline AutoScalingGroupConfiguration& WithMixedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetMixedInstanceTypes(value); return *this;}
    inline AutoScalingGroupConfiguration& WithMixedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetMixedInstanceTypes(std::move(value)); return *this;}
    inline AutoScalingGroupConfiguration& AddMixedInstanceTypes(const Aws::String& value) { m_mixedInstanceTypesHasBeenSet = true; m_mixedInstanceTypes.push_back(value); return *this; }
    inline AutoScalingGroupConfiguration& AddMixedInstanceTypes(Aws::String&& value) { m_mixedInstanceTypesHasBeenSet = true; m_mixedInstanceTypes.push_back(std::move(value)); return *this; }
    inline AutoScalingGroupConfiguration& AddMixedInstanceTypes(const char* value) { m_mixedInstanceTypesHasBeenSet = true; m_mixedInstanceTypes.push_back(value); return *this; }
    ///@}
  private:

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    double m_estimatedInstanceHourReductionPercentage;
    bool m_estimatedInstanceHourReductionPercentageHasBeenSet = false;

    AsgType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_mixedInstanceTypes;
    bool m_mixedInstanceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
