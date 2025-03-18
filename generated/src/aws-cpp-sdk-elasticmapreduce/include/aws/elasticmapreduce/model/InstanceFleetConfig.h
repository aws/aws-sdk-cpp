/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleetType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/InstanceFleetProvisioningSpecifications.h>
#include <aws/elasticmapreduce/model/InstanceFleetResizingSpecifications.h>
#include <aws/elasticmapreduce/model/InstanceTypeConfig.h>
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
   * <p>The configuration that defines an instance fleet.</p>  <p>The instance
   * fleet configuration is available only in Amazon EMR releases 4.8.0 and later,
   * excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetConfig">AWS
   * API Reference</a></p>
   */
  class InstanceFleetConfig
  {
  public:
    AWS_EMR_API InstanceFleetConfig() = default;
    AWS_EMR_API InstanceFleetConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceFleetConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * and TASK.</p>
     */
    inline InstanceFleetType GetInstanceFleetType() const { return m_instanceFleetType; }
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }
    inline void SetInstanceFleetType(InstanceFleetType value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }
    inline InstanceFleetConfig& WithInstanceFleetType(InstanceFleetType value) { SetInstanceFleetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity of On-Demand units for the instance fleet, which
     * determines how many On-Demand Instances to provision. When the instance fleet
     * launches, Amazon EMR tries to provision On-Demand Instances as specified by
     * <a>InstanceTypeConfig</a>. Each instance configuration has a specified
     * <code>WeightedCapacity</code>. When an On-Demand Instance is provisioned, the
     * <code>WeightedCapacity</code> units count toward the target capacity. Amazon EMR
     * provisions instances until the target capacity is totally fulfilled, even if
     * this results in an overage. For example, if there are 2 units remaining to
     * fulfill capacity, and Amazon EMR can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * target capacity is exceeded by 3 units.</p>  <p>If not specified or set to
     * 0, only Spot Instances are provisioned for the instance fleet using
     * <code>TargetSpotCapacity</code>. At least one of <code>TargetSpotCapacity</code>
     * and <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> 
     */
    inline int GetTargetOnDemandCapacity() const { return m_targetOnDemandCapacity; }
    inline bool TargetOnDemandCapacityHasBeenSet() const { return m_targetOnDemandCapacityHasBeenSet; }
    inline void SetTargetOnDemandCapacity(int value) { m_targetOnDemandCapacityHasBeenSet = true; m_targetOnDemandCapacity = value; }
    inline InstanceFleetConfig& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity of Spot units for the instance fleet, which determines
     * how many Spot Instances to provision. When the instance fleet launches, Amazon
     * EMR tries to provision Spot Instances as specified by <a>InstanceTypeConfig</a>.
     * Each instance configuration has a specified <code>WeightedCapacity</code>. When
     * a Spot Instance is provisioned, the <code>WeightedCapacity</code> units count
     * toward the target capacity. Amazon EMR provisions instances until the target
     * capacity is totally fulfilled, even if this results in an overage. For example,
     * if there are 2 units remaining to fulfill capacity, and Amazon EMR can only
     * provision an instance with a <code>WeightedCapacity</code> of 5 units, the
     * instance is provisioned, and the target capacity is exceeded by 3 units.</p>
     *  <p>If not specified or set to 0, only On-Demand Instances are provisioned
     * for the instance fleet. At least one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> 
     */
    inline int GetTargetSpotCapacity() const { return m_targetSpotCapacity; }
    inline bool TargetSpotCapacityHasBeenSet() const { return m_targetSpotCapacityHasBeenSet; }
    inline void SetTargetSpotCapacity(int value) { m_targetSpotCapacityHasBeenSet = true; m_targetSpotCapacity = value; }
    inline InstanceFleetConfig& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type configurations that define the Amazon EC2 instances in the
     * instance fleet.</p>
     */
    inline const Aws::Vector<InstanceTypeConfig>& GetInstanceTypeConfigs() const { return m_instanceTypeConfigs; }
    inline bool InstanceTypeConfigsHasBeenSet() const { return m_instanceTypeConfigsHasBeenSet; }
    template<typename InstanceTypeConfigsT = Aws::Vector<InstanceTypeConfig>>
    void SetInstanceTypeConfigs(InstanceTypeConfigsT&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs = std::forward<InstanceTypeConfigsT>(value); }
    template<typename InstanceTypeConfigsT = Aws::Vector<InstanceTypeConfig>>
    InstanceFleetConfig& WithInstanceTypeConfigs(InstanceTypeConfigsT&& value) { SetInstanceTypeConfigs(std::forward<InstanceTypeConfigsT>(value)); return *this;}
    template<typename InstanceTypeConfigsT = InstanceTypeConfig>
    InstanceFleetConfig& AddInstanceTypeConfigs(InstanceTypeConfigsT&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs.emplace_back(std::forward<InstanceTypeConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The launch specification for the instance fleet.</p>
     */
    inline const InstanceFleetProvisioningSpecifications& GetLaunchSpecifications() const { return m_launchSpecifications; }
    inline bool LaunchSpecificationsHasBeenSet() const { return m_launchSpecificationsHasBeenSet; }
    template<typename LaunchSpecificationsT = InstanceFleetProvisioningSpecifications>
    void SetLaunchSpecifications(LaunchSpecificationsT&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = std::forward<LaunchSpecificationsT>(value); }
    template<typename LaunchSpecificationsT = InstanceFleetProvisioningSpecifications>
    InstanceFleetConfig& WithLaunchSpecifications(LaunchSpecificationsT&& value) { SetLaunchSpecifications(std::forward<LaunchSpecificationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline const InstanceFleetResizingSpecifications& GetResizeSpecifications() const { return m_resizeSpecifications; }
    inline bool ResizeSpecificationsHasBeenSet() const { return m_resizeSpecificationsHasBeenSet; }
    template<typename ResizeSpecificationsT = InstanceFleetResizingSpecifications>
    void SetResizeSpecifications(ResizeSpecificationsT&& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = std::forward<ResizeSpecificationsT>(value); }
    template<typename ResizeSpecificationsT = InstanceFleetResizingSpecifications>
    InstanceFleetConfig& WithResizeSpecifications(ResizeSpecificationsT&& value) { SetResizeSpecifications(std::forward<ResizeSpecificationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    InstanceFleetConfig& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InstanceFleetType m_instanceFleetType{InstanceFleetType::NOT_SET};
    bool m_instanceFleetTypeHasBeenSet = false;

    int m_targetOnDemandCapacity{0};
    bool m_targetOnDemandCapacityHasBeenSet = false;

    int m_targetSpotCapacity{0};
    bool m_targetSpotCapacityHasBeenSet = false;

    Aws::Vector<InstanceTypeConfig> m_instanceTypeConfigs;
    bool m_instanceTypeConfigsHasBeenSet = false;

    InstanceFleetProvisioningSpecifications m_launchSpecifications;
    bool m_launchSpecificationsHasBeenSet = false;

    InstanceFleetResizingSpecifications m_resizeSpecifications;
    bool m_resizeSpecificationsHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
