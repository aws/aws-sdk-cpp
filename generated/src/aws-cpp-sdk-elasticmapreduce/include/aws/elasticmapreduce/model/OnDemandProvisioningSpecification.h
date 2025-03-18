/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/OnDemandProvisioningAllocationStrategy.h>
#include <aws/elasticmapreduce/model/OnDemandCapacityReservationOptions.h>
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
   * configuration is available only in Amazon EMR releases 4.8.0 and later,
   * excluding 5.0.x versions. On-Demand Instances allocation strategy is available
   * in Amazon EMR releases 5.12.1 and later.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/OnDemandProvisioningSpecification">AWS
   * API Reference</a></p>
   */
  class OnDemandProvisioningSpecification
  {
  public:
    AWS_EMR_API OnDemandProvisioningSpecification() = default;
    AWS_EMR_API OnDemandProvisioningSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API OnDemandProvisioningSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the strategy to use in launching On-Demand instance fleets.
     * Available options are <code>lowest-price</code> and <code>prioritized</code>.
     * <code>lowest-price</code> specifies to launch the instances with the lowest
     * price first, and <code>prioritized</code> specifies that Amazon EMR should
     * launch the instances with the highest priority first. The default is
     * <code>lowest-price</code>.</p>
     */
    inline OnDemandProvisioningAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(OnDemandProvisioningAllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline OnDemandProvisioningSpecification& WithAllocationStrategy(OnDemandProvisioningAllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch specification for On-Demand instances in the instance fleet, which
     * determines the allocation strategy.</p>
     */
    inline const OnDemandCapacityReservationOptions& GetCapacityReservationOptions() const { return m_capacityReservationOptions; }
    inline bool CapacityReservationOptionsHasBeenSet() const { return m_capacityReservationOptionsHasBeenSet; }
    template<typename CapacityReservationOptionsT = OnDemandCapacityReservationOptions>
    void SetCapacityReservationOptions(CapacityReservationOptionsT&& value) { m_capacityReservationOptionsHasBeenSet = true; m_capacityReservationOptions = std::forward<CapacityReservationOptionsT>(value); }
    template<typename CapacityReservationOptionsT = OnDemandCapacityReservationOptions>
    OnDemandProvisioningSpecification& WithCapacityReservationOptions(CapacityReservationOptionsT&& value) { SetCapacityReservationOptions(std::forward<CapacityReservationOptionsT>(value)); return *this;}
    ///@}
  private:

    OnDemandProvisioningAllocationStrategy m_allocationStrategy{OnDemandProvisioningAllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;

    OnDemandCapacityReservationOptions m_capacityReservationOptions;
    bool m_capacityReservationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
