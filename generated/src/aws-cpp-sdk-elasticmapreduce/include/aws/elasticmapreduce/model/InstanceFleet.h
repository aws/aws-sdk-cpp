/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleetStatus.h>
#include <aws/elasticmapreduce/model/InstanceFleetType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/InstanceFleetProvisioningSpecifications.h>
#include <aws/elasticmapreduce/model/InstanceFleetResizingSpecifications.h>
#include <aws/elasticmapreduce/model/InstanceTypeSpecification.h>
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
   * <p>Describes an instance fleet, which is a group of Amazon EC2 instances that
   * host a particular node type (master, core, or task) in an Amazon EMR cluster.
   * Instance fleets can consist of a mix of instance types and On-Demand and Spot
   * Instances, which are provisioned to meet a defined target capacity. </p> 
   * <p>The instance fleet configuration is available only in Amazon EMR releases
   * 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleet">AWS
   * API Reference</a></p>
   */
  class InstanceFleet
  {
  public:
    AWS_EMR_API InstanceFleet() = default;
    AWS_EMR_API InstanceFleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InstanceFleet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceFleet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline const InstanceFleetStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = InstanceFleetStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = InstanceFleetStatus>
    InstanceFleet& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline InstanceFleetType GetInstanceFleetType() const { return m_instanceFleetType; }
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }
    inline void SetInstanceFleetType(InstanceFleetType value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }
    inline InstanceFleet& WithInstanceFleetType(InstanceFleetType value) { SetInstanceFleetType(value); return *this;}
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
     * target capacity is exceeded by 3 units. You can use
     * <a>InstanceFleet$ProvisionedOnDemandCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p>  <p>If not
     * specified or set to 0, only Spot Instances are provisioned for the instance
     * fleet using <code>TargetSpotCapacity</code>. At least one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> should
     * be greater than 0. For a master instance fleet, only one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> can be
     * specified, and its value must be 1.</p> 
     */
    inline int GetTargetOnDemandCapacity() const { return m_targetOnDemandCapacity; }
    inline bool TargetOnDemandCapacityHasBeenSet() const { return m_targetOnDemandCapacityHasBeenSet; }
    inline void SetTargetOnDemandCapacity(int value) { m_targetOnDemandCapacityHasBeenSet = true; m_targetOnDemandCapacity = value; }
    inline InstanceFleet& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity of Spot units for the instance fleet, which determines
     * how many Spot Instances to provision. When the instance fleet launches, Amazon
     * EMR tries to provision Spot Instances as specified by <a>InstanceTypeConfig</a>.
     * Each instance configuration has a specified <code>WeightedCapacity</code>. When
     * a Spot instance is provisioned, the <code>WeightedCapacity</code> units count
     * toward the target capacity. Amazon EMR provisions instances until the target
     * capacity is totally fulfilled, even if this results in an overage. For example,
     * if there are 2 units remaining to fulfill capacity, and Amazon EMR can only
     * provision an instance with a <code>WeightedCapacity</code> of 5 units, the
     * instance is provisioned, and the target capacity is exceeded by 3 units. You can
     * use <a>InstanceFleet$ProvisionedSpotCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p>  <p>If not
     * specified or set to 0, only On-Demand Instances are provisioned for the instance
     * fleet. At least one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> 
     */
    inline int GetTargetSpotCapacity() const { return m_targetSpotCapacity; }
    inline bool TargetSpotCapacityHasBeenSet() const { return m_targetSpotCapacityHasBeenSet; }
    inline void SetTargetSpotCapacity(int value) { m_targetSpotCapacityHasBeenSet = true; m_targetSpotCapacity = value; }
    inline InstanceFleet& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of On-Demand units that have been provisioned for the instance
     * fleet to fulfill <code>TargetOnDemandCapacity</code>. This provisioned capacity
     * might be less than or greater than <code>TargetOnDemandCapacity</code>.</p>
     */
    inline int GetProvisionedOnDemandCapacity() const { return m_provisionedOnDemandCapacity; }
    inline bool ProvisionedOnDemandCapacityHasBeenSet() const { return m_provisionedOnDemandCapacityHasBeenSet; }
    inline void SetProvisionedOnDemandCapacity(int value) { m_provisionedOnDemandCapacityHasBeenSet = true; m_provisionedOnDemandCapacity = value; }
    inline InstanceFleet& WithProvisionedOnDemandCapacity(int value) { SetProvisionedOnDemandCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Spot units that have been provisioned for this instance fleet
     * to fulfill <code>TargetSpotCapacity</code>. This provisioned capacity might be
     * less than or greater than <code>TargetSpotCapacity</code>.</p>
     */
    inline int GetProvisionedSpotCapacity() const { return m_provisionedSpotCapacity; }
    inline bool ProvisionedSpotCapacityHasBeenSet() const { return m_provisionedSpotCapacityHasBeenSet; }
    inline void SetProvisionedSpotCapacity(int value) { m_provisionedSpotCapacityHasBeenSet = true; m_provisionedSpotCapacity = value; }
    inline InstanceFleet& WithProvisionedSpotCapacity(int value) { SetProvisionedSpotCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of specifications for the instance types that comprise an instance
     * fleet.</p>
     */
    inline const Aws::Vector<InstanceTypeSpecification>& GetInstanceTypeSpecifications() const { return m_instanceTypeSpecifications; }
    inline bool InstanceTypeSpecificationsHasBeenSet() const { return m_instanceTypeSpecificationsHasBeenSet; }
    template<typename InstanceTypeSpecificationsT = Aws::Vector<InstanceTypeSpecification>>
    void SetInstanceTypeSpecifications(InstanceTypeSpecificationsT&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = std::forward<InstanceTypeSpecificationsT>(value); }
    template<typename InstanceTypeSpecificationsT = Aws::Vector<InstanceTypeSpecification>>
    InstanceFleet& WithInstanceTypeSpecifications(InstanceTypeSpecificationsT&& value) { SetInstanceTypeSpecifications(std::forward<InstanceTypeSpecificationsT>(value)); return *this;}
    template<typename InstanceTypeSpecificationsT = InstanceTypeSpecification>
    InstanceFleet& AddInstanceTypeSpecifications(InstanceTypeSpecificationsT&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.emplace_back(std::forward<InstanceTypeSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline const InstanceFleetProvisioningSpecifications& GetLaunchSpecifications() const { return m_launchSpecifications; }
    inline bool LaunchSpecificationsHasBeenSet() const { return m_launchSpecificationsHasBeenSet; }
    template<typename LaunchSpecificationsT = InstanceFleetProvisioningSpecifications>
    void SetLaunchSpecifications(LaunchSpecificationsT&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = std::forward<LaunchSpecificationsT>(value); }
    template<typename LaunchSpecificationsT = InstanceFleetProvisioningSpecifications>
    InstanceFleet& WithLaunchSpecifications(LaunchSpecificationsT&& value) { SetLaunchSpecifications(std::forward<LaunchSpecificationsT>(value)); return *this;}
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
    InstanceFleet& WithResizeSpecifications(ResizeSpecificationsT&& value) { SetResizeSpecifications(std::forward<ResizeSpecificationsT>(value)); return *this;}
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
    InstanceFleet& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InstanceFleetStatus m_status;
    bool m_statusHasBeenSet = false;

    InstanceFleetType m_instanceFleetType{InstanceFleetType::NOT_SET};
    bool m_instanceFleetTypeHasBeenSet = false;

    int m_targetOnDemandCapacity{0};
    bool m_targetOnDemandCapacityHasBeenSet = false;

    int m_targetSpotCapacity{0};
    bool m_targetSpotCapacityHasBeenSet = false;

    int m_provisionedOnDemandCapacity{0};
    bool m_provisionedOnDemandCapacityHasBeenSet = false;

    int m_provisionedSpotCapacity{0};
    bool m_provisionedSpotCapacityHasBeenSet = false;

    Aws::Vector<InstanceTypeSpecification> m_instanceTypeSpecifications;
    bool m_instanceTypeSpecificationsHasBeenSet = false;

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
