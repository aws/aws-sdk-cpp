/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/InstanceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroupType.h>
#include <aws/cost-optimization-hub/model/AllocationStrategy.h>
#include <aws/cost-optimization-hub/model/MixedInstanceConfiguration.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The EC2 Auto Scaling group configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/Ec2AutoScalingGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class Ec2AutoScalingGroupConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API Ec2AutoScalingGroupConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API Ec2AutoScalingGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Ec2AutoScalingGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the instance for the EC2 Auto Scaling group with a single
     * instance type.</p>
     */
    inline const InstanceConfiguration& GetInstance() const{ return m_instance; }
    inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }
    inline void SetInstance(const InstanceConfiguration& value) { m_instanceHasBeenSet = true; m_instance = value; }
    inline void SetInstance(InstanceConfiguration&& value) { m_instanceHasBeenSet = true; m_instance = std::move(value); }
    inline Ec2AutoScalingGroupConfiguration& WithInstance(const InstanceConfiguration& value) { SetInstance(value); return *this;}
    inline Ec2AutoScalingGroupConfiguration& WithInstance(InstanceConfiguration&& value) { SetInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of instance types for an EC2 Auto Scaling group with mixed instance
     * types.</p>
     */
    inline const Aws::Vector<MixedInstanceConfiguration>& GetMixedInstances() const{ return m_mixedInstances; }
    inline bool MixedInstancesHasBeenSet() const { return m_mixedInstancesHasBeenSet; }
    inline void SetMixedInstances(const Aws::Vector<MixedInstanceConfiguration>& value) { m_mixedInstancesHasBeenSet = true; m_mixedInstances = value; }
    inline void SetMixedInstances(Aws::Vector<MixedInstanceConfiguration>&& value) { m_mixedInstancesHasBeenSet = true; m_mixedInstances = std::move(value); }
    inline Ec2AutoScalingGroupConfiguration& WithMixedInstances(const Aws::Vector<MixedInstanceConfiguration>& value) { SetMixedInstances(value); return *this;}
    inline Ec2AutoScalingGroupConfiguration& WithMixedInstances(Aws::Vector<MixedInstanceConfiguration>&& value) { SetMixedInstances(std::move(value)); return *this;}
    inline Ec2AutoScalingGroupConfiguration& AddMixedInstances(const MixedInstanceConfiguration& value) { m_mixedInstancesHasBeenSet = true; m_mixedInstances.push_back(value); return *this; }
    inline Ec2AutoScalingGroupConfiguration& AddMixedInstances(MixedInstanceConfiguration&& value) { m_mixedInstancesHasBeenSet = true; m_mixedInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of EC2 Auto Scaling group, showing whether it consists of a single
     * instance type or mixed instance types.</p>
     */
    inline const Ec2AutoScalingGroupType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Ec2AutoScalingGroupType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Ec2AutoScalingGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Ec2AutoScalingGroupConfiguration& WithType(const Ec2AutoScalingGroupType& value) { SetType(value); return *this;}
    inline Ec2AutoScalingGroupConfiguration& WithType(Ec2AutoScalingGroupType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used for allocating instances, based on a predefined priority
     * order or based on the lowest available price.</p>
     */
    inline const AllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(const AllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline void SetAllocationStrategy(AllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }
    inline Ec2AutoScalingGroupConfiguration& WithAllocationStrategy(const AllocationStrategy& value) { SetAllocationStrategy(value); return *this;}
    inline Ec2AutoScalingGroupConfiguration& WithAllocationStrategy(AllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}
    ///@}
  private:

    InstanceConfiguration m_instance;
    bool m_instanceHasBeenSet = false;

    Aws::Vector<MixedInstanceConfiguration> m_mixedInstances;
    bool m_mixedInstancesHasBeenSet = false;

    Ec2AutoScalingGroupType m_type;
    bool m_typeHasBeenSet = false;

    AllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
