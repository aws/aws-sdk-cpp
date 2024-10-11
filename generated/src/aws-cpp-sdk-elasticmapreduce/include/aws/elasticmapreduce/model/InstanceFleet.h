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
    AWS_EMR_API InstanceFleet();
    AWS_EMR_API InstanceFleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline InstanceFleet& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline InstanceFleet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline InstanceFleet& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceFleet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceFleet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceFleet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline const InstanceFleetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceFleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceFleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InstanceFleet& WithStatus(const InstanceFleetStatus& value) { SetStatus(value); return *this;}
    inline InstanceFleet& WithStatus(InstanceFleetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline const InstanceFleetType& GetInstanceFleetType() const{ return m_instanceFleetType; }
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }
    inline void SetInstanceFleetType(const InstanceFleetType& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }
    inline void SetInstanceFleetType(InstanceFleetType&& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = std::move(value); }
    inline InstanceFleet& WithInstanceFleetType(const InstanceFleetType& value) { SetInstanceFleetType(value); return *this;}
    inline InstanceFleet& WithInstanceFleetType(InstanceFleetType&& value) { SetInstanceFleetType(std::move(value)); return *this;}
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
    inline int GetTargetOnDemandCapacity() const{ return m_targetOnDemandCapacity; }
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
    inline int GetTargetSpotCapacity() const{ return m_targetSpotCapacity; }
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
    inline int GetProvisionedOnDemandCapacity() const{ return m_provisionedOnDemandCapacity; }
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
    inline int GetProvisionedSpotCapacity() const{ return m_provisionedSpotCapacity; }
    inline bool ProvisionedSpotCapacityHasBeenSet() const { return m_provisionedSpotCapacityHasBeenSet; }
    inline void SetProvisionedSpotCapacity(int value) { m_provisionedSpotCapacityHasBeenSet = true; m_provisionedSpotCapacity = value; }
    inline InstanceFleet& WithProvisionedSpotCapacity(int value) { SetProvisionedSpotCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of specifications for the instance types that comprise an instance
     * fleet.</p>
     */
    inline const Aws::Vector<InstanceTypeSpecification>& GetInstanceTypeSpecifications() const{ return m_instanceTypeSpecifications; }
    inline bool InstanceTypeSpecificationsHasBeenSet() const { return m_instanceTypeSpecificationsHasBeenSet; }
    inline void SetInstanceTypeSpecifications(const Aws::Vector<InstanceTypeSpecification>& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = value; }
    inline void SetInstanceTypeSpecifications(Aws::Vector<InstanceTypeSpecification>&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = std::move(value); }
    inline InstanceFleet& WithInstanceTypeSpecifications(const Aws::Vector<InstanceTypeSpecification>& value) { SetInstanceTypeSpecifications(value); return *this;}
    inline InstanceFleet& WithInstanceTypeSpecifications(Aws::Vector<InstanceTypeSpecification>&& value) { SetInstanceTypeSpecifications(std::move(value)); return *this;}
    inline InstanceFleet& AddInstanceTypeSpecifications(const InstanceTypeSpecification& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(value); return *this; }
    inline InstanceFleet& AddInstanceTypeSpecifications(InstanceTypeSpecification&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline const InstanceFleetProvisioningSpecifications& GetLaunchSpecifications() const{ return m_launchSpecifications; }
    inline bool LaunchSpecificationsHasBeenSet() const { return m_launchSpecificationsHasBeenSet; }
    inline void SetLaunchSpecifications(const InstanceFleetProvisioningSpecifications& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = value; }
    inline void SetLaunchSpecifications(InstanceFleetProvisioningSpecifications&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = std::move(value); }
    inline InstanceFleet& WithLaunchSpecifications(const InstanceFleetProvisioningSpecifications& value) { SetLaunchSpecifications(value); return *this;}
    inline InstanceFleet& WithLaunchSpecifications(InstanceFleetProvisioningSpecifications&& value) { SetLaunchSpecifications(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline const InstanceFleetResizingSpecifications& GetResizeSpecifications() const{ return m_resizeSpecifications; }
    inline bool ResizeSpecificationsHasBeenSet() const { return m_resizeSpecificationsHasBeenSet; }
    inline void SetResizeSpecifications(const InstanceFleetResizingSpecifications& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = value; }
    inline void SetResizeSpecifications(InstanceFleetResizingSpecifications&& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = std::move(value); }
    inline InstanceFleet& WithResizeSpecifications(const InstanceFleetResizingSpecifications& value) { SetResizeSpecifications(value); return *this;}
    inline InstanceFleet& WithResizeSpecifications(InstanceFleetResizingSpecifications&& value) { SetResizeSpecifications(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }
    inline InstanceFleet& WithContext(const Aws::String& value) { SetContext(value); return *this;}
    inline InstanceFleet& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}
    inline InstanceFleet& WithContext(const char* value) { SetContext(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InstanceFleetStatus m_status;
    bool m_statusHasBeenSet = false;

    InstanceFleetType m_instanceFleetType;
    bool m_instanceFleetTypeHasBeenSet = false;

    int m_targetOnDemandCapacity;
    bool m_targetOnDemandCapacityHasBeenSet = false;

    int m_targetSpotCapacity;
    bool m_targetSpotCapacityHasBeenSet = false;

    int m_provisionedOnDemandCapacity;
    bool m_provisionedOnDemandCapacityHasBeenSet = false;

    int m_provisionedSpotCapacity;
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
