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
#include <aws/elasticmapreduce/model/InstanceFleetType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/InstanceFleetProvisioningSpecifications.h>
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
   * <p>The configuration that defines an instance fleet.</p> <note> <p>The instance
   * fleet configuration is available only in Amazon EMR versions 4.8.0 and later,
   * excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceFleetConfig
  {
  public:
    InstanceFleetConfig();
    InstanceFleetConfig(Aws::Utils::Json::JsonView jsonValue);
    InstanceFleetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline InstanceFleetConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline InstanceFleetConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the instance fleet.</p>
     */
    inline InstanceFleetConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER,CORE,and
     * TASK.</p>
     */
    inline const InstanceFleetType& GetInstanceFleetType() const{ return m_instanceFleetType; }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER,CORE,and
     * TASK.</p>
     */
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER,CORE,and
     * TASK.</p>
     */
    inline void SetInstanceFleetType(const InstanceFleetType& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER,CORE,and
     * TASK.</p>
     */
    inline void SetInstanceFleetType(InstanceFleetType&& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = std::move(value); }

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER,CORE,and
     * TASK.</p>
     */
    inline InstanceFleetConfig& WithInstanceFleetType(const InstanceFleetType& value) { SetInstanceFleetType(value); return *this;}

    /**
     * <p>The node type that the instance fleet hosts. Valid values are MASTER,CORE,and
     * TASK.</p>
     */
    inline InstanceFleetConfig& WithInstanceFleetType(InstanceFleetType&& value) { SetInstanceFleetType(std::move(value)); return *this;}


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
     * target capacity is exceeded by 3 units.</p> <note> <p>If not specified or set to
     * 0, only Spot instances are provisioned for the instance fleet using
     * <code>TargetSpotCapacity</code>. At least one of <code>TargetSpotCapacity</code>
     * and <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
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
     * target capacity is exceeded by 3 units.</p> <note> <p>If not specified or set to
     * 0, only Spot instances are provisioned for the instance fleet using
     * <code>TargetSpotCapacity</code>. At least one of <code>TargetSpotCapacity</code>
     * and <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
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
     * target capacity is exceeded by 3 units.</p> <note> <p>If not specified or set to
     * 0, only Spot instances are provisioned for the instance fleet using
     * <code>TargetSpotCapacity</code>. At least one of <code>TargetSpotCapacity</code>
     * and <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
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
     * target capacity is exceeded by 3 units.</p> <note> <p>If not specified or set to
     * 0, only Spot instances are provisioned for the instance fleet using
     * <code>TargetSpotCapacity</code>. At least one of <code>TargetSpotCapacity</code>
     * and <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
     */
    inline InstanceFleetConfig& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}


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
     * instance is provisioned, and the target capacity is exceeded by 3 units.</p>
     * <note> <p>If not specified or set to 0, only On-Demand instances are provisioned
     * for the instance fleet. At least one of <code>TargetSpotCapacity</code> and
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
     * instance is provisioned, and the target capacity is exceeded by 3 units.</p>
     * <note> <p>If not specified or set to 0, only On-Demand instances are provisioned
     * for the instance fleet. At least one of <code>TargetSpotCapacity</code> and
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
     * instance is provisioned, and the target capacity is exceeded by 3 units.</p>
     * <note> <p>If not specified or set to 0, only On-Demand instances are provisioned
     * for the instance fleet. At least one of <code>TargetSpotCapacity</code> and
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
     * instance is provisioned, and the target capacity is exceeded by 3 units.</p>
     * <note> <p>If not specified or set to 0, only On-Demand instances are provisioned
     * for the instance fleet. At least one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> should be greater than 0. For a master
     * instance fleet, only one of <code>TargetSpotCapacity</code> and
     * <code>TargetOnDemandCapacity</code> can be specified, and its value must be
     * 1.</p> </note>
     */
    inline InstanceFleetConfig& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}


    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline const Aws::Vector<InstanceTypeConfig>& GetInstanceTypeConfigs() const{ return m_instanceTypeConfigs; }

    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline bool InstanceTypeConfigsHasBeenSet() const { return m_instanceTypeConfigsHasBeenSet; }

    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline void SetInstanceTypeConfigs(const Aws::Vector<InstanceTypeConfig>& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs = value; }

    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline void SetInstanceTypeConfigs(Aws::Vector<InstanceTypeConfig>&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs = std::move(value); }

    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline InstanceFleetConfig& WithInstanceTypeConfigs(const Aws::Vector<InstanceTypeConfig>& value) { SetInstanceTypeConfigs(value); return *this;}

    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline InstanceFleetConfig& WithInstanceTypeConfigs(Aws::Vector<InstanceTypeConfig>&& value) { SetInstanceTypeConfigs(std::move(value)); return *this;}

    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline InstanceFleetConfig& AddInstanceTypeConfigs(const InstanceTypeConfig& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs.push_back(value); return *this; }

    /**
     * <p>The instance type configurations that define the EC2 instances in the
     * instance fleet.</p>
     */
    inline InstanceFleetConfig& AddInstanceTypeConfigs(InstanceTypeConfig&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch specification for the instance fleet.</p>
     */
    inline const InstanceFleetProvisioningSpecifications& GetLaunchSpecifications() const{ return m_launchSpecifications; }

    /**
     * <p>The launch specification for the instance fleet.</p>
     */
    inline bool LaunchSpecificationsHasBeenSet() const { return m_launchSpecificationsHasBeenSet; }

    /**
     * <p>The launch specification for the instance fleet.</p>
     */
    inline void SetLaunchSpecifications(const InstanceFleetProvisioningSpecifications& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = value; }

    /**
     * <p>The launch specification for the instance fleet.</p>
     */
    inline void SetLaunchSpecifications(InstanceFleetProvisioningSpecifications&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = std::move(value); }

    /**
     * <p>The launch specification for the instance fleet.</p>
     */
    inline InstanceFleetConfig& WithLaunchSpecifications(const InstanceFleetProvisioningSpecifications& value) { SetLaunchSpecifications(value); return *this;}

    /**
     * <p>The launch specification for the instance fleet.</p>
     */
    inline InstanceFleetConfig& WithLaunchSpecifications(InstanceFleetProvisioningSpecifications&& value) { SetLaunchSpecifications(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    InstanceFleetType m_instanceFleetType;
    bool m_instanceFleetTypeHasBeenSet;

    int m_targetOnDemandCapacity;
    bool m_targetOnDemandCapacityHasBeenSet;

    int m_targetSpotCapacity;
    bool m_targetSpotCapacityHasBeenSet;

    Aws::Vector<InstanceTypeConfig> m_instanceTypeConfigs;
    bool m_instanceTypeConfigsHasBeenSet;

    InstanceFleetProvisioningSpecifications m_launchSpecifications;
    bool m_launchSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
