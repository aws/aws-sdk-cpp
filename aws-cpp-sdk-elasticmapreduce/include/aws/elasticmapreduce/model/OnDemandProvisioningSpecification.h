/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/OnDemandProvisioningAllocationStrategy.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p> The launch specification for On-Demand Instances in the instance fleet,
   * which determines the allocation strategy. </p>  <p>The instance fleet
   * configuration is available only in Amazon EMR versions 4.8.0 and later,
   * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
   * in Amazon EMR version 5.12.1 and later.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/OnDemandProvisioningSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API OnDemandProvisioningSpecification
  {
  public:
    OnDemandProvisioningSpecification();
    OnDemandProvisioningSpecification(Aws::Utils::Json::JsonView jsonValue);
    OnDemandProvisioningSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the strategy to use in launching On-Demand Instance fleets.
     * Currently, the only option is lowest-price (the default), which launches the
     * lowest price first. </p>
     */
    inline const OnDemandProvisioningAllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p> Specifies the strategy to use in launching On-Demand Instance fleets.
     * Currently, the only option is lowest-price (the default), which launches the
     * lowest price first. </p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p> Specifies the strategy to use in launching On-Demand Instance fleets.
     * Currently, the only option is lowest-price (the default), which launches the
     * lowest price first. </p>
     */
    inline void SetAllocationStrategy(const OnDemandProvisioningAllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p> Specifies the strategy to use in launching On-Demand Instance fleets.
     * Currently, the only option is lowest-price (the default), which launches the
     * lowest price first. </p>
     */
    inline void SetAllocationStrategy(OnDemandProvisioningAllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p> Specifies the strategy to use in launching On-Demand Instance fleets.
     * Currently, the only option is lowest-price (the default), which launches the
     * lowest price first. </p>
     */
    inline OnDemandProvisioningSpecification& WithAllocationStrategy(const OnDemandProvisioningAllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p> Specifies the strategy to use in launching On-Demand Instance fleets.
     * Currently, the only option is lowest-price (the default), which launches the
     * lowest price first. </p>
     */
    inline OnDemandProvisioningSpecification& WithAllocationStrategy(OnDemandProvisioningAllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}

  private:

    OnDemandProvisioningAllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
