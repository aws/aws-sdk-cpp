﻿/*
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/EC2InstanceCounts.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Information about the fleet's capacity. Fleet capacity is measured in EC2
   * instances. By default, new fleets have a capacity of one instance, but can be
   * updated as needed. The maximum number of instances for a fleet is determined by
   * the fleet's instance type.</p> <p>Fleet-related operations include:</p> <ul>
   * <li> <p> <a>CreateFleet</a> </p> </li> <li> <p> <a>ListFleets</a> </p> </li>
   * <li> <p> <a>DeleteFleet</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li>
   * <p> <a>DescribeFleetAttributes</a> </p> </li> <li> <p>
   * <a>DescribeFleetCapacity</a> </p> </li> <li> <p>
   * <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
   * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
   * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
   * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
   * </p> </li> </ul> </li> <li> <p>Update fleets:</p> <ul> <li> <p>
   * <a>UpdateFleetAttributes</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
   * </li> <li> <p> <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
   * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>Manage fleet
   * actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
   * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetCapacity">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API FleetCapacity
  {
  public:
    FleetCapacity();
    FleetCapacity(Aws::Utils::Json::JsonView jsonValue);
    FleetCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetCapacity& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetCapacity& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetCapacity& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetInstanceType(const EC2InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetInstanceType(EC2InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline FleetCapacity& WithInstanceType(const EC2InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline FleetCapacity& WithInstanceType(EC2InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Current status of fleet capacity.</p>
     */
    inline const EC2InstanceCounts& GetInstanceCounts() const{ return m_instanceCounts; }

    /**
     * <p>Current status of fleet capacity.</p>
     */
    inline void SetInstanceCounts(const EC2InstanceCounts& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = value; }

    /**
     * <p>Current status of fleet capacity.</p>
     */
    inline void SetInstanceCounts(EC2InstanceCounts&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = std::move(value); }

    /**
     * <p>Current status of fleet capacity.</p>
     */
    inline FleetCapacity& WithInstanceCounts(const EC2InstanceCounts& value) { SetInstanceCounts(value); return *this;}

    /**
     * <p>Current status of fleet capacity.</p>
     */
    inline FleetCapacity& WithInstanceCounts(EC2InstanceCounts&& value) { SetInstanceCounts(std::move(value)); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    EC2InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    EC2InstanceCounts m_instanceCounts;
    bool m_instanceCountsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
