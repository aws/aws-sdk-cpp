﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/RuntimeConfiguration.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/gamelift/model/IpPermission.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleetInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateFleetRequest : public GameLiftRequest
  {
  public:
    CreateFleetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Unique identifier of the build to be deployed on the new fleet. The build
     * must have been successfully uploaded to GameLift and be in a <code>READY</code>
     * status. This fleet setting cannot be changed once the fleet is created.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier of the build to be deployed on the new fleet. The build
     * must have been successfully uploaded to GameLift and be in a <code>READY</code>
     * status. This fleet setting cannot be changed once the fleet is created.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier of the build to be deployed on the new fleet. The build
     * must have been successfully uploaded to GameLift and be in a <code>READY</code>
     * status. This fleet setting cannot be changed once the fleet is created.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier of the build to be deployed on the new fleet. The build
     * must have been successfully uploaded to GameLift and be in a <code>READY</code>
     * status. This fleet setting cannot be changed once the fleet is created.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier of the build to be deployed on the new fleet. The build
     * must have been successfully uploaded to GameLift and be in a <code>READY</code>
     * status. This fleet setting cannot be changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier of the build to be deployed on the new fleet. The build
     * must have been successfully uploaded to GameLift and be in a <code>READY</code>
     * status. This fleet setting cannot be changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithBuildId(Aws::String&& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier of the build to be deployed on the new fleet. The build
     * must have been successfully uploaded to GameLift and be in a <code>READY</code>
     * status. This fleet setting cannot be changed once the fleet is created.</p>
     */
    inline CreateFleetRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify a server launch path using
     * the <code>RuntimeConfiguration</code> parameter. (Requests that specify a server
     * launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>This parameter is no longer used. Instead, specify server launch parameters
     * in the <code>RuntimeConfiguration</code> parameter. (Requests that specify a
     * server launch path and launch parameters instead of a runtime configuration will
     * continue to work.)</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline CreateFleetRequest& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline CreateFleetRequest& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline CreateFleetRequest& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline CreateFleetRequest& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code> (for Windows) or <code>/local/game/logs</code> (for
     * Linux). Use the GameLift console to access stored logs. </p>
     */
    inline CreateFleetRequest& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. GameLift supports the
     * following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. GameLift supports the
     * following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. GameLift supports the
     * following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. GameLift supports the
     * following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. GameLift supports the
     * following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * server processes running on the fleet. If no inbound permissions are set,
     * including both IP address range and port range, the server processes in the
     * fleet cannot accept connections. You can specify one or more sets of permissions
     * for a fleet.</p>
     */
    inline const Aws::Vector<IpPermission>& GetEC2InboundPermissions() const{ return m_eC2InboundPermissions; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * server processes running on the fleet. If no inbound permissions are set,
     * including both IP address range and port range, the server processes in the
     * fleet cannot accept connections. You can specify one or more sets of permissions
     * for a fleet.</p>
     */
    inline void SetEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * server processes running on the fleet. If no inbound permissions are set,
     * including both IP address range and port range, the server processes in the
     * fleet cannot accept connections. You can specify one or more sets of permissions
     * for a fleet.</p>
     */
    inline void SetEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * server processes running on the fleet. If no inbound permissions are set,
     * including both IP address range and port range, the server processes in the
     * fleet cannot accept connections. You can specify one or more sets of permissions
     * for a fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { SetEC2InboundPermissions(value); return *this;}

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * server processes running on the fleet. If no inbound permissions are set,
     * including both IP address range and port range, the server processes in the
     * fleet cannot accept connections. You can specify one or more sets of permissions
     * for a fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { SetEC2InboundPermissions(value); return *this;}

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * server processes running on the fleet. If no inbound permissions are set,
     * including both IP address range and port range, the server processes in the
     * fleet cannot accept connections. You can specify one or more sets of permissions
     * for a fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(const IpPermission& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }

    /**
     * <p>Range of IP addresses and port settings that permit inbound traffic to access
     * server processes running on the fleet. If no inbound permissions are set,
     * including both IP address range and port range, the server processes in the
     * fleet cannot accept connections. You can specify one or more sets of permissions
     * for a fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(IpPermission&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using UpdateFleetAttributes, but this
     * change will only affect sessions created after the policy change. You can also
     * set protection for individual instances using <a>UpdateGameSession</a>.</p> <ul>
     * <li> <p> <b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using UpdateFleetAttributes, but this
     * change will only affect sessions created after the policy change. You can also
     * set protection for individual instances using <a>UpdateGameSession</a>.</p> <ul>
     * <li> <p> <b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using UpdateFleetAttributes, but this
     * change will only affect sessions created after the policy change. You can also
     * set protection for individual instances using <a>UpdateGameSession</a>.</p> <ul>
     * <li> <p> <b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using UpdateFleetAttributes, but this
     * change will only affect sessions created after the policy change. You can also
     * set protection for individual instances using <a>UpdateGameSession</a>.</p> <ul>
     * <li> <p> <b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>Game session protection policy to apply to all instances in this fleet. If
     * this parameter is not set, instances in this fleet default to no protection. You
     * can change a fleet's protection policy using UpdateFleetAttributes, but this
     * change will only affect sessions created after the policy change. You can also
     * set protection for individual instances using <a>UpdateGameSession</a>.</p> <ul>
     * <li> <p> <b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session
     * is in an <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline CreateFleetRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * The runtime configuration for a fleet has a collection of server process
     * configurations, one for each type of server process to run on an instance. A
     * server process configuration specifies the location of the server executable,
     * launch parameters, and the number of concurrent processes with that
     * configuration to maintain on each instance. A <code>CreateFleet</code> request
     * must include a runtime configuration with at least one server process
     * configuration; otherwise the request will fail with an invalid request
     * exception. (This parameter replaces the parameters <code>ServerLaunchPath</code>
     * and <code>ServerLaunchParameters</code>; requests that contain values for these
     * parameters instead of a runtime configuration will continue to work.) </p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * The runtime configuration for a fleet has a collection of server process
     * configurations, one for each type of server process to run on an instance. A
     * server process configuration specifies the location of the server executable,
     * launch parameters, and the number of concurrent processes with that
     * configuration to maintain on each instance. A <code>CreateFleet</code> request
     * must include a runtime configuration with at least one server process
     * configuration; otherwise the request will fail with an invalid request
     * exception. (This parameter replaces the parameters <code>ServerLaunchPath</code>
     * and <code>ServerLaunchParameters</code>; requests that contain values for these
     * parameters instead of a runtime configuration will continue to work.) </p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * The runtime configuration for a fleet has a collection of server process
     * configurations, one for each type of server process to run on an instance. A
     * server process configuration specifies the location of the server executable,
     * launch parameters, and the number of concurrent processes with that
     * configuration to maintain on each instance. A <code>CreateFleet</code> request
     * must include a runtime configuration with at least one server process
     * configuration; otherwise the request will fail with an invalid request
     * exception. (This parameter replaces the parameters <code>ServerLaunchPath</code>
     * and <code>ServerLaunchParameters</code>; requests that contain values for these
     * parameters instead of a runtime configuration will continue to work.) </p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * The runtime configuration for a fleet has a collection of server process
     * configurations, one for each type of server process to run on an instance. A
     * server process configuration specifies the location of the server executable,
     * launch parameters, and the number of concurrent processes with that
     * configuration to maintain on each instance. A <code>CreateFleet</code> request
     * must include a runtime configuration with at least one server process
     * configuration; otherwise the request will fail with an invalid request
     * exception. (This parameter replaces the parameters <code>ServerLaunchPath</code>
     * and <code>ServerLaunchParameters</code>; requests that contain values for these
     * parameters instead of a runtime configuration will continue to work.) </p>
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Instructions for launching server processes on each instance in the fleet.
     * The runtime configuration for a fleet has a collection of server process
     * configurations, one for each type of server process to run on an instance. A
     * server process configuration specifies the location of the server executable,
     * launch parameters, and the number of concurrent processes with that
     * configuration to maintain on each instance. A <code>CreateFleet</code> request
     * must include a runtime configuration with at least one server process
     * configuration; otherwise the request will fail with an invalid request
     * exception. (This parameter replaces the parameters <code>ServerLaunchPath</code>
     * and <code>ServerLaunchParameters</code>; requests that contain values for these
     * parameters instead of a runtime configuration will continue to work.) </p>
     */
    inline CreateFleetRequest& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time for this fleet.</p>
     */
    inline CreateFleetRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_buildId;
    bool m_buildIdHasBeenSet;
    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet;
    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet;
    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet;
    EC2InstanceType m_eC2InstanceType;
    bool m_eC2InstanceTypeHasBeenSet;
    Aws::Vector<IpPermission> m_eC2InboundPermissions;
    bool m_eC2InboundPermissionsHasBeenSet;
    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet;
    RuntimeConfiguration m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet;
    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
