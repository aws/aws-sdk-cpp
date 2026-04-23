/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleetStatus.h>
#include <aws/elasticmapreduce/model/InstanceFleetType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/InstanceFleetProvisioningSpecifications.h>
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
   * <p>Describes an instance fleet, which is a group of EC2 instances that host a
   * particular node type (master, core, or task) in an Amazon EMR cluster. Instance
   * fleets can consist of a mix of instance types and On-Demand and Spot instances,
   * which are provisioned to meet a defined target capacity. </p> <note> <p>The
   * instance fleet configuration is available only in Amazon EMR versions 4.8.0 and
   * later, excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleet">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceFleet
  {
  public:
    InstanceFleet();
    InstanceFleet(Aws::Utils::Json::JsonView jsonValue);
    InstanceFleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline InstanceFleet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline InstanceFleet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline InstanceFleet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline InstanceFleet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline InstanceFleet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the instance fleet.</p>
     */
    inline InstanceFleet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline const InstanceFleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline void SetStatus(const InstanceFleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline void SetStatus(InstanceFleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline InstanceFleet& WithStatus(const InstanceFleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the instance fleet. </p>
     */
    inline InstanceFleet& WithStatus(InstanceFleetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline const InstanceFleetType& GetInstanceFleetType() const{ return m_instanceFleetType; }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline void SetInstanceFleetType(const InstanceFleetType& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline void SetInstanceFleetType(InstanceFleetType&& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = std::move(value); }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline InstanceFleet& WithInstanceFleetType(const InstanceFleetType& value) { SetInstanceFleetType(value); return *this;}

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER, CORE,
     * or TASK. </p>
     */
    inline InstanceFleet& WithInstanceFleetType(InstanceFleetType&& value) { SetInstanceFleetType(std::move(value)); return *this;}


    /**
     * <p>The target capacity of On-Demand units for the instance fleet, which
     * determines how many On-Demand instances to provision. When the instance fleet
     * launches, Amazon EMR tries to provision On-Demand instances as specified by
     * <a>InstanceTypeConfig</a>. Each instance configuration has a specified
     * <code>WeightedCapacity</code>. When an On-Demand instance is provisioned, the
     * <code>WeightedCapacity</code> units count toward the target capacity. Amazon EMR
     * provisions instances until the target capacity is totally fulfilled, even if
     * this results in an overage. For example, if there are 2 units remaining to
     * fulfill capacity, and Amazon EMR can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * target capacity is exceeded by 3 units. You can use
     * <a>InstanceFleet$ProvisionedOnDemandCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only Spot instances are provisioned for the instance
     * fleet using <code>TargetSpotCapacity</code>. At least one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> should
     * be greater than 0. For a master instance fleet, only one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> can be
     * specified, and its value must be 1.</p> </note>
     */
    inline int GetTargetOnDemandCapacity() const{ return m_targetOnDemandCapacity; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet, which
     * determines how many On-Demand instances to provision. When the instance fleet
     * launches, Amazon EMR tries to provision On-Demand instances as specified by
     * <a>InstanceTypeConfig</a>. Each instance configuration has a specified
     * <code>WeightedCapacity</code>. When an On-Demand instance is provisioned, the
     * <code>WeightedCapacity</code> units count toward the target capacity. Amazon EMR
     * provisions instances until the target capacity is totally fulfilled, even if
     * this results in an overage. For example, if there are 2 units remaining to
     * fulfill capacity, and Amazon EMR can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * target capacity is exceeded by 3 units. You can use
     * <a>InstanceFleet$ProvisionedOnDemandCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only Spot instances are provisioned for the instance
     * fleet using <code>TargetSpotCapacity</code>. At least one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> should
     * be greater than 0. For a master instance fleet, only one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> can be
     * specified, and its value must be 1.</p> </note>
     */
    inline bool TargetOnDemandCapacityHasBeenSet() const { return m_targetOnDemandCapacityHasBeenSet; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet, which
     * determines how many On-Demand instances to provision. When the instance fleet
     * launches, Amazon EMR tries to provision On-Demand instances as specified by
     * <a>InstanceTypeConfig</a>. Each instance configuration has a specified
     * <code>WeightedCapacity</code>. When an On-Demand instance is provisioned, the
     * <code>WeightedCapacity</code> units count toward the target capacity. Amazon EMR
     * provisions instances until the target capacity is totally fulfilled, even if
     * this results in an overage. For example, if there are 2 units remaining to
     * fulfill capacity, and Amazon EMR can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * target capacity is exceeded by 3 units. You can use
     * <a>InstanceFleet$ProvisionedOnDemandCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only Spot instances are provisioned for the instance
     * fleet using <code>TargetSpotCapacity</code>. At least one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> should
     * be greater than 0. For a master instance fleet, only one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> can be
     * specified, and its value must be 1.</p> </note>
     */
    inline void SetTargetOnDemandCapacity(int value) { m_targetOnDemandCapacityHasBeenSet = true; m_targetOnDemandCapacity = value; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet, which
     * determines how many On-Demand instances to provision. When the instance fleet
     * launches, Amazon EMR tries to provision On-Demand instances as specified by
     * <a>InstanceTypeConfig</a>. Each instance configuration has a specified
     * <code>WeightedCapacity</code>. When an On-Demand instance is provisioned, the
     * <code>WeightedCapacity</code> units count toward the target capacity. Amazon EMR
     * provisions instances until the target capacity is totally fulfilled, even if
     * this results in an overage. For example, if there are 2 units remaining to
     * fulfill capacity, and Amazon EMR can only provision an instance with a
     * <code>WeightedCapacity</code> of 5 units, the instance is provisioned, and the
     * target capacity is exceeded by 3 units. You can use
     * <a>InstanceFleet$ProvisionedOnDemandCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only Spot instances are provisioned for the instance
     * fleet using <code>TargetSpotCapacity</code>. At least one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> should
     * be greater than 0. For a master instance fleet, only one of
     * <code>TargetSpotCapacity</code> and <code>TargetOnDemandCapacity</code> can be
     * specified, and its value must be 1.</p> </note>
     */
    inline InstanceFleet& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}


    /**
     * <p>The target capacity of Spot units for the instance fleet, which determines
     * how many Spot instances to provision. When the instance fleet launches, Amazon
     * EMR tries to provision Spot instances as specified by <a>InstanceTypeConfig</a>.
     * Each instance configuration has a specified <code>WeightedCapacity</code>. When
     * a Spot instance is provisioned, the <code>WeightedCapacity</code> units count
     * toward the target capacity. Amazon EMR provisions instances until the target
     * capacity is totally fulfilled, even if this results in an overage. For example,
     * if there are 2 units remaining to fulfill capacity, and Amazon EMR can only
     * provision an instance with a <code>WeightedCapacity</code> of 5 units, the
     * instance is provisioned, and the target capacity is exceeded by 3 units. You can
     * use <a>InstanceFleet$ProvisionedSpotCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only On-Demand instances are provisioned for the instance
     * fleet. At least one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
     */
    inline int GetTargetSpotCapacity() const{ return m_targetSpotCapacity; }

    /**
     * <p>The target capacity of Spot units for the instance fleet, which determines
     * how many Spot instances to provision. When the instance fleet launches, Amazon
     * EMR tries to provision Spot instances as specified by <a>InstanceTypeConfig</a>.
     * Each instance configuration has a specified <code>WeightedCapacity</code>. When
     * a Spot instance is provisioned, the <code>WeightedCapacity</code> units count
     * toward the target capacity. Amazon EMR provisions instances until the target
     * capacity is totally fulfilled, even if this results in an overage. For example,
     * if there are 2 units remaining to fulfill capacity, and Amazon EMR can only
     * provision an instance with a <code>WeightedCapacity</code> of 5 units, the
     * instance is provisioned, and the target capacity is exceeded by 3 units. You can
     * use <a>InstanceFleet$ProvisionedSpotCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only On-Demand instances are provisioned for the instance
     * fleet. At least one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
     */
    inline bool TargetSpotCapacityHasBeenSet() const { return m_targetSpotCapacityHasBeenSet; }

    /**
     * <p>The target capacity of Spot units for the instance fleet, which determines
     * how many Spot instances to provision. When the instance fleet launches, Amazon
     * EMR tries to provision Spot instances as specified by <a>InstanceTypeConfig</a>.
     * Each instance configuration has a specified <code>WeightedCapacity</code>. When
     * a Spot instance is provisioned, the <code>WeightedCapacity</code> units count
     * toward the target capacity. Amazon EMR provisions instances until the target
     * capacity is totally fulfilled, even if this results in an overage. For example,
     * if there are 2 units remaining to fulfill capacity, and Amazon EMR can only
     * provision an instance with a <code>WeightedCapacity</code> of 5 units, the
     * instance is provisioned, and the target capacity is exceeded by 3 units. You can
     * use <a>InstanceFleet$ProvisionedSpotCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only On-Demand instances are provisioned for the instance
     * fleet. At least one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
     */
    inline void SetTargetSpotCapacity(int value) { m_targetSpotCapacityHasBeenSet = true; m_targetSpotCapacity = value; }

    /**
     * <p>The target capacity of Spot units for the instance fleet, which determines
     * how many Spot instances to provision. When the instance fleet launches, Amazon
     * EMR tries to provision Spot instances as specified by <a>InstanceTypeConfig</a>.
     * Each instance configuration has a specified <code>WeightedCapacity</code>. When
     * a Spot instance is provisioned, the <code>WeightedCapacity</code> units count
     * toward the target capacity. Amazon EMR provisions instances until the target
     * capacity is totally fulfilled, even if this results in an overage. For example,
     * if there are 2 units remaining to fulfill capacity, and Amazon EMR can only
     * provision an instance with a <code>WeightedCapacity</code> of 5 units, the
     * instance is provisioned, and the target capacity is exceeded by 3 units. You can
     * use <a>InstanceFleet$ProvisionedSpotCapacity</a> to determine the Spot capacity
     * units that have been provisioned for the instance fleet.</p> <note> <p>If not
     * specified or set to 0, only On-Demand instances are provisioned for the instance
     * fleet. At least one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
     */
    inline InstanceFleet& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}


    /**
     * <p>The number of On-Demand units that have been provisioned for the instance
     * fleet to fulfill <code>TargetOnDemandCapacity</code>. This provisioned capacity
     * might be less than or greater than <code>TargetOnDemandCapacity</code>.</p>
     */
    inline int GetProvisionedOnDemandCapacity() const{ return m_provisionedOnDemandCapacity; }

    /**
     * <p>The number of On-Demand units that have been provisioned for the instance
     * fleet to fulfill <code>TargetOnDemandCapacity</code>. This provisioned capacity
     * might be less than or greater than <code>TargetOnDemandCapacity</code>.</p>
     */
    inline bool ProvisionedOnDemandCapacityHasBeenSet() const { return m_provisionedOnDemandCapacityHasBeenSet; }

    /**
     * <p>The number of On-Demand units that have been provisioned for the instance
     * fleet to fulfill <code>TargetOnDemandCapacity</code>. This provisioned capacity
     * might be less than or greater than <code>TargetOnDemandCapacity</code>.</p>
     */
    inline void SetProvisionedOnDemandCapacity(int value) { m_provisionedOnDemandCapacityHasBeenSet = true; m_provisionedOnDemandCapacity = value; }

    /**
     * <p>The number of On-Demand units that have been provisioned for the instance
     * fleet to fulfill <code>TargetOnDemandCapacity</code>. This provisioned capacity
     * might be less than or greater than <code>TargetOnDemandCapacity</code>.</p>
     */
    inline InstanceFleet& WithProvisionedOnDemandCapacity(int value) { SetProvisionedOnDemandCapacity(value); return *this;}


    /**
     * <p>The number of Spot units that have been provisioned for this instance fleet
     * to fulfill <code>TargetSpotCapacity</code>. This provisioned capacity might be
     * less than or greater than <code>TargetSpotCapacity</code>.</p>
     */
    inline int GetProvisionedSpotCapacity() const{ return m_provisionedSpotCapacity; }

    /**
     * <p>The number of Spot units that have been provisioned for this instance fleet
     * to fulfill <code>TargetSpotCapacity</code>. This provisioned capacity might be
     * less than or greater than <code>TargetSpotCapacity</code>.</p>
     */
    inline bool ProvisionedSpotCapacityHasBeenSet() const { return m_provisionedSpotCapacityHasBeenSet; }

    /**
     * <p>The number of Spot units that have been provisioned for this instance fleet
     * to fulfill <code>TargetSpotCapacity</code>. This provisioned capacity might be
     * less than or greater than <code>TargetSpotCapacity</code>.</p>
     */
    inline void SetProvisionedSpotCapacity(int value) { m_provisionedSpotCapacityHasBeenSet = true; m_provisionedSpotCapacity = value; }

    /**
     * <p>The number of Spot units that have been provisioned for this instance fleet
     * to fulfill <code>TargetSpotCapacity</code>. This provisioned capacity might be
     * less than or greater than <code>TargetSpotCapacity</code>.</p>
     */
    inline InstanceFleet& WithProvisionedSpotCapacity(int value) { SetProvisionedSpotCapacity(value); return *this;}


    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline const Aws::Vector<InstanceTypeSpecification>& GetInstanceTypeSpecifications() const{ return m_instanceTypeSpecifications; }

    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline bool InstanceTypeSpecificationsHasBeenSet() const { return m_instanceTypeSpecificationsHasBeenSet; }

    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline void SetInstanceTypeSpecifications(const Aws::Vector<InstanceTypeSpecification>& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = value; }

    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline void SetInstanceTypeSpecifications(Aws::Vector<InstanceTypeSpecification>&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = std::move(value); }

    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline InstanceFleet& WithInstanceTypeSpecifications(const Aws::Vector<InstanceTypeSpecification>& value) { SetInstanceTypeSpecifications(value); return *this;}

    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline InstanceFleet& WithInstanceTypeSpecifications(Aws::Vector<InstanceTypeSpecification>&& value) { SetInstanceTypeSpecifications(std::move(value)); return *this;}

    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline InstanceFleet& AddInstanceTypeSpecifications(const InstanceTypeSpecification& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(value); return *this; }

    /**
     * <p>The specification for the instance types that comprise an instance fleet. Up
     * to five unique instance specifications may be defined for each instance fleet.
     * </p>
     */
    inline InstanceFleet& AddInstanceTypeSpecifications(InstanceTypeSpecification&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline const InstanceFleetProvisioningSpecifications& GetLaunchSpecifications() const{ return m_launchSpecifications; }

    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline bool LaunchSpecificationsHasBeenSet() const { return m_launchSpecificationsHasBeenSet; }

    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline void SetLaunchSpecifications(const InstanceFleetProvisioningSpecifications& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = value; }

    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline void SetLaunchSpecifications(InstanceFleetProvisioningSpecifications&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = std::move(value); }

    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline InstanceFleet& WithLaunchSpecifications(const InstanceFleetProvisioningSpecifications& value) { SetLaunchSpecifications(value); return *this;}

    /**
     * <p>Describes the launch specification for an instance fleet. </p>
     */
    inline InstanceFleet& WithLaunchSpecifications(InstanceFleetProvisioningSpecifications&& value) { SetLaunchSpecifications(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    InstanceFleetStatus m_status;
    bool m_statusHasBeenSet;

    InstanceFleetType m_instanceFleetType;
    bool m_instanceFleetTypeHasBeenSet;

    int m_targetOnDemandCapacity;
    bool m_targetOnDemandCapacityHasBeenSet;

    int m_targetSpotCapacity;
    bool m_targetSpotCapacityHasBeenSet;

    int m_provisionedOnDemandCapacity;
    bool m_provisionedOnDemandCapacityHasBeenSet;

    int m_provisionedSpotCapacity;
    bool m_provisionedSpotCapacityHasBeenSet;

    Aws::Vector<InstanceTypeSpecification> m_instanceTypeSpecifications;
    bool m_instanceTypeSpecificationsHasBeenSet;

    InstanceFleetProvisioningSpecifications m_launchSpecifications;
    bool m_launchSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
