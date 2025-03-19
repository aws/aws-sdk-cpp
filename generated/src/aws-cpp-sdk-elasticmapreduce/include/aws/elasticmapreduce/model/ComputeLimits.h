/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ComputeLimitsUnitType.h>
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
   * <p> The Amazon EC2 unit limits for a managed scaling policy. The managed scaling
   * activity of a cluster can not be above or below these limits. The limit only
   * applies to the core and task nodes. The master node cannot be scaled after
   * initial configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ComputeLimits">AWS
   * API Reference</a></p>
   */
  class ComputeLimits
  {
  public:
    AWS_EMR_API ComputeLimits() = default;
    AWS_EMR_API ComputeLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ComputeLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unit type used for specifying a managed scaling policy. </p>
     */
    inline ComputeLimitsUnitType GetUnitType() const { return m_unitType; }
    inline bool UnitTypeHasBeenSet() const { return m_unitTypeHasBeenSet; }
    inline void SetUnitType(ComputeLimitsUnitType value) { m_unitTypeHasBeenSet = true; m_unitType = value; }
    inline ComputeLimits& WithUnitType(ComputeLimitsUnitType value) { SetUnitType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The lower boundary of Amazon EC2 units. It is measured through vCPU cores or
     * instances for instance groups and measured through units for instance fleets.
     * Managed scaling activities are not allowed beyond this boundary. The limit only
     * applies to the core and task nodes. The master node cannot be scaled after
     * initial configuration. </p>
     */
    inline int GetMinimumCapacityUnits() const { return m_minimumCapacityUnits; }
    inline bool MinimumCapacityUnitsHasBeenSet() const { return m_minimumCapacityUnitsHasBeenSet; }
    inline void SetMinimumCapacityUnits(int value) { m_minimumCapacityUnitsHasBeenSet = true; m_minimumCapacityUnits = value; }
    inline ComputeLimits& WithMinimumCapacityUnits(int value) { SetMinimumCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The upper boundary of Amazon EC2 units. It is measured through vCPU cores or
     * instances for instance groups and measured through units for instance fleets.
     * Managed scaling activities are not allowed beyond this boundary. The limit only
     * applies to the core and task nodes. The master node cannot be scaled after
     * initial configuration. </p>
     */
    inline int GetMaximumCapacityUnits() const { return m_maximumCapacityUnits; }
    inline bool MaximumCapacityUnitsHasBeenSet() const { return m_maximumCapacityUnitsHasBeenSet; }
    inline void SetMaximumCapacityUnits(int value) { m_maximumCapacityUnitsHasBeenSet = true; m_maximumCapacityUnits = value; }
    inline ComputeLimits& WithMaximumCapacityUnits(int value) { SetMaximumCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The upper boundary of On-Demand Amazon EC2 units. It is measured through
     * vCPU cores or instances for instance groups and measured through units for
     * instance fleets. The On-Demand units are not allowed to scale beyond this
     * boundary. The parameter is used to split capacity allocation between On-Demand
     * and Spot Instances. </p>
     */
    inline int GetMaximumOnDemandCapacityUnits() const { return m_maximumOnDemandCapacityUnits; }
    inline bool MaximumOnDemandCapacityUnitsHasBeenSet() const { return m_maximumOnDemandCapacityUnitsHasBeenSet; }
    inline void SetMaximumOnDemandCapacityUnits(int value) { m_maximumOnDemandCapacityUnitsHasBeenSet = true; m_maximumOnDemandCapacityUnits = value; }
    inline ComputeLimits& WithMaximumOnDemandCapacityUnits(int value) { SetMaximumOnDemandCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The upper boundary of Amazon EC2 units for core node type in a cluster. It
     * is measured through vCPU cores or instances for instance groups and measured
     * through units for instance fleets. The core units are not allowed to scale
     * beyond this boundary. The parameter is used to split capacity allocation between
     * core and task nodes. </p>
     */
    inline int GetMaximumCoreCapacityUnits() const { return m_maximumCoreCapacityUnits; }
    inline bool MaximumCoreCapacityUnitsHasBeenSet() const { return m_maximumCoreCapacityUnitsHasBeenSet; }
    inline void SetMaximumCoreCapacityUnits(int value) { m_maximumCoreCapacityUnitsHasBeenSet = true; m_maximumCoreCapacityUnits = value; }
    inline ComputeLimits& WithMaximumCoreCapacityUnits(int value) { SetMaximumCoreCapacityUnits(value); return *this;}
    ///@}
  private:

    ComputeLimitsUnitType m_unitType{ComputeLimitsUnitType::NOT_SET};
    bool m_unitTypeHasBeenSet = false;

    int m_minimumCapacityUnits{0};
    bool m_minimumCapacityUnitsHasBeenSet = false;

    int m_maximumCapacityUnits{0};
    bool m_maximumCapacityUnitsHasBeenSet = false;

    int m_maximumOnDemandCapacityUnits{0};
    bool m_maximumOnDemandCapacityUnitsHasBeenSet = false;

    int m_maximumCoreCapacityUnits{0};
    bool m_maximumCoreCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
