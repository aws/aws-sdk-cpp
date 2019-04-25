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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetType.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/FleetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/gamelift/model/FleetAction.h>
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
   * <p>General properties describing a fleet.</p> <ul> <li> <p> <a>CreateFleet</a>
   * </p> </li> <li> <p> <a>ListFleets</a> </p> </li> <li> <p> <a>DeleteFleet</a>
   * </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
   * <a>DescribeFleetAttributes</a> </p> </li> <li> <p> <a>DescribeFleetCapacity</a>
   * </p> </li> <li> <p> <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
   * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
   * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
   * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
   * </p> </li> </ul> </li> <li> <p>Update fleets:</p> <ul> <li> <p>
   * <a>UpdateFleetAttributes</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
   * </li> <li> <p> <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
   * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>Manage fleet
   * actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
   * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API FleetAttributes
  {
  public:
    FleetAttributes();
    FleetAttributes(Aws::Utils::Json::JsonView jsonValue);
    FleetAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

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
    inline FleetAttributes& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetAttributes& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetAttributes& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline FleetAttributes& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline FleetAttributes& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>Identifier for a fleet that is unique across all regions.</p>
     */
    inline FleetAttributes& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>Indicates whether the fleet uses on-demand or spot instances. A spot instance
     * in use may be interrupted with a two-minute notification.</p>
     */
    inline const FleetType& GetFleetType() const{ return m_fleetType; }

    /**
     * <p>Indicates whether the fleet uses on-demand or spot instances. A spot instance
     * in use may be interrupted with a two-minute notification.</p>
     */
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }

    /**
     * <p>Indicates whether the fleet uses on-demand or spot instances. A spot instance
     * in use may be interrupted with a two-minute notification.</p>
     */
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>Indicates whether the fleet uses on-demand or spot instances. A spot instance
     * in use may be interrupted with a two-minute notification.</p>
     */
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }

    /**
     * <p>Indicates whether the fleet uses on-demand or spot instances. A spot instance
     * in use may be interrupted with a two-minute notification.</p>
     */
    inline FleetAttributes& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}

    /**
     * <p>Indicates whether the fleet uses on-demand or spot instances. A spot instance
     * in use may be interrupted with a two-minute notification.</p>
     */
    inline FleetAttributes& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}


    /**
     * <p>EC2 instance type indicating the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>EC2 instance type indicating the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>EC2 instance type indicating the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetInstanceType(const EC2InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>EC2 instance type indicating the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetInstanceType(EC2InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>EC2 instance type indicating the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline FleetAttributes& WithInstanceType(const EC2InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>EC2 instance type indicating the computing resources of each instance in the
     * fleet, including CPU, memory, storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline FleetAttributes& WithInstanceType(EC2InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline FleetAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline FleetAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline FleetAttributes& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline FleetAttributes& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline FleetAttributes& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const{ return m_terminationTime; }

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline bool TerminationTimeHasBeenSet() const { return m_terminationTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetTerminationTime(const Aws::Utils::DateTime& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetTerminationTime(Aws::Utils::DateTime&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline FleetAttributes& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline FleetAttributes& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(std::move(value)); return *this;}


    /**
     * <p>Current status of the fleet.</p> <p>Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the fleet.</p> <p>Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Current status of the fleet.</p> <p>Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the fleet.</p> <p>Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the fleet.</p> <p>Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline FleetAttributes& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the fleet.</p> <p>Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline FleetAttributes& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for a build.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline FleetAttributes& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline FleetAttributes& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline FleetAttributes& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline FleetAttributes& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline FleetAttributes& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a Realtime script.</p>
     */
    inline FleetAttributes& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }

    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::move(value); }

    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(std::move(value)); return *this;}

    /**
     * <p>Path to a game server executable in the fleet's build, specified for fleets
     * created before 2016-08-04 (or AWS SDK v. 0.12.16). Server launch paths for
     * fleets created after this date are specified in the fleet's
     * <a>RuntimeConfiguration</a>.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}


    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }

    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::move(value); }

    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(std::move(value)); return *this;}

    /**
     * <p>Game server launch parameters specified for fleets created before 2016-08-04
     * (or AWS SDK v. 0.12.16). Server launch parameters for fleets created after this
     * date are specified in the fleet's <a>RuntimeConfiguration</a>.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}


    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline bool LogPathsHasBeenSet() const { return m_logPathsHasBeenSet; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = std::move(value); }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(std::move(value)); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(std::move(value)); return *this; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * Amazon GameLift automatically uploads logs that are stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the Amazon GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }


    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be
     * terminated during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b>
     * -- If the game session is in an <code>ACTIVE</code> status, it cannot be
     * terminated during a scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be
     * terminated during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b>
     * -- If the game session is in an <code>ACTIVE</code> status, it cannot be
     * terminated during a scale-down event.</p> </li> </ul>
     */
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be
     * terminated during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b>
     * -- If the game session is in an <code>ACTIVE</code> status, it cannot be
     * terminated during a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be
     * terminated during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b>
     * -- If the game session is in an <code>ACTIVE</code> status, it cannot be
     * terminated during a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be
     * terminated during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b>
     * -- If the game session is in an <code>ACTIVE</code> status, it cannot be
     * terminated during a scale-down event.</p> </li> </ul>
     */
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be
     * terminated during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b>
     * -- If the game session is in an <code>ACTIVE</code> status, it cannot be
     * terminated during a scale-down event.</p> </li> </ul>
     */
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>Operating system of the fleet's computing resources. A fleet's operating
     * system depends on the OS specified for the build that is deployed on this
     * fleet.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Operating system of the fleet's computing resources. A fleet's operating
     * system depends on the OS specified for the build that is deployed on this
     * fleet.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>Operating system of the fleet's computing resources. A fleet's operating
     * system depends on the OS specified for the build that is deployed on this
     * fleet.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Operating system of the fleet's computing resources. A fleet's operating
     * system depends on the OS specified for the build that is deployed on this
     * fleet.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Operating system of the fleet's computing resources. A fleet's operating
     * system depends on the OS specified for the build that is deployed on this
     * fleet.</p>
     */
    inline FleetAttributes& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system of the fleet's computing resources. A fleet's operating
     * system depends on the OS specified for the build that is deployed on this
     * fleet.</p>
     */
    inline FleetAttributes& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>Fleet policy to limit the number of game sessions an individual player can
     * create over a span of time.</p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    /**
     * <p>Fleet policy to limit the number of game sessions an individual player can
     * create over a span of time.</p>
     */
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }

    /**
     * <p>Fleet policy to limit the number of game sessions an individual player can
     * create over a span of time.</p>
     */
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>Fleet policy to limit the number of game sessions an individual player can
     * create over a span of time.</p>
     */
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }

    /**
     * <p>Fleet policy to limit the number of game sessions an individual player can
     * create over a span of time.</p>
     */
    inline FleetAttributes& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    /**
     * <p>Fleet policy to limit the number of game sessions an individual player can
     * create over a span of time.</p>
     */
    inline FleetAttributes& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}


    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline FleetAttributes& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline FleetAttributes& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline FleetAttributes& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline FleetAttributes& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>Names of metric groups that this fleet is included in. In Amazon CloudWatch,
     * you can view metrics for an individual fleet or aggregated metrics for fleets
     * that are in a fleet metric group. A fleet can be included in only one metric
     * group at a time.</p>
     */
    inline FleetAttributes& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }


    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline const Aws::Vector<FleetAction>& GetStoppedActions() const{ return m_stoppedActions; }

    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline bool StoppedActionsHasBeenSet() const { return m_stoppedActionsHasBeenSet; }

    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline void SetStoppedActions(const Aws::Vector<FleetAction>& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = value; }

    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline void SetStoppedActions(Aws::Vector<FleetAction>&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = std::move(value); }

    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline FleetAttributes& WithStoppedActions(const Aws::Vector<FleetAction>& value) { SetStoppedActions(value); return *this;}

    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline FleetAttributes& WithStoppedActions(Aws::Vector<FleetAction>&& value) { SetStoppedActions(std::move(value)); return *this;}

    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline FleetAttributes& AddStoppedActions(const FleetAction& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(value); return *this; }

    /**
     * <p>List of fleet actions that have been suspended using <a>StopFleetActions</a>.
     * This includes auto-scaling.</p>
     */
    inline FleetAttributes& AddStoppedActions(FleetAction&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline FleetAttributes& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline FleetAttributes& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an AWS IAM role that manages access to your AWS
     * services. With an instance role ARN set, any application that runs on an
     * instance in this fleet can assume the role, including install scripts, server
     * processes, daemons (background processes). Create a role or look up a role's ARN
     * using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a> in the
     * AWS Management Console. Learn more about using on-box credentials for your game
     * servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline FleetAttributes& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet;

    EC2InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_terminationTime;
    bool m_terminationTimeHasBeenSet;

    FleetStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet;

    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet;

    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet;

    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;

    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet;

    Aws::Vector<FleetAction> m_stoppedActions;
    bool m_stoppedActionsHasBeenSet;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
