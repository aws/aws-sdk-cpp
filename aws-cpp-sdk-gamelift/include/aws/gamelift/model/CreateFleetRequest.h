/*
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
#include <aws/gamelift/model/IpPermission.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API CreateFleetRequest : public GameLiftRequest
  {
  public:
    CreateFleetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Unique identifier for the build you want the new fleet to use.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier for the build you want the new fleet to use.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for the build you want the new fleet to use.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for the build you want the new fleet to use.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier for the build you want the new fleet to use.</p>
     */
    inline CreateFleetRequest& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for the build you want the new fleet to use.</p>
     */
    inline CreateFleetRequest& WithBuildId(Aws::String&& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for the build you want the new fleet to use.</p>
     */
    inline CreateFleetRequest& WithBuildId(const char* value) { SetBuildId(value); return *this;}

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline CreateFleetRequest& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline CreateFleetRequest& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline CreateFleetRequest& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline CreateFleetRequest& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline CreateFleetRequest& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline CreateFleetRequest& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline CreateFleetRequest& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Type of EC2 instances used in the fleet. EC2 instance types define the CPU,
     * memory, storage, and networking capacity of the fleetaposs hosts. Amazon
     * GameLift supports the EC2 instance types listed below. See <a
     * href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of each.</p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }

    /**
     * <p>Type of EC2 instances used in the fleet. EC2 instance types define the CPU,
     * memory, storage, and networking capacity of the fleetaposs hosts. Amazon
     * GameLift supports the EC2 instance types listed below. See <a
     * href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of each.</p>
     */
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>Type of EC2 instances used in the fleet. EC2 instance types define the CPU,
     * memory, storage, and networking capacity of the fleetaposs hosts. Amazon
     * GameLift supports the EC2 instance types listed below. See <a
     * href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of each.</p>
     */
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>Type of EC2 instances used in the fleet. EC2 instance types define the CPU,
     * memory, storage, and networking capacity of the fleetaposs hosts. Amazon
     * GameLift supports the EC2 instance types listed below. See <a
     * href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of each.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>Type of EC2 instances used in the fleet. EC2 instance types define the CPU,
     * memory, storage, and networking capacity of the fleetaposs hosts. Amazon
     * GameLift supports the EC2 instance types listed below. See <a
     * href="https://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions of each.</p>
     */
    inline CreateFleetRequest& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>Access limits for incoming traffic. Setting these values limits game server
     * access to incoming traffic using specified IP ranges and port numbers. Some
     * ports in a range may be restricted. You can provide one or more sets of
     * permissions for the fleet.</p>
     */
    inline const Aws::Vector<IpPermission>& GetEC2InboundPermissions() const{ return m_eC2InboundPermissions; }

    /**
     * <p>Access limits for incoming traffic. Setting these values limits game server
     * access to incoming traffic using specified IP ranges and port numbers. Some
     * ports in a range may be restricted. You can provide one or more sets of
     * permissions for the fleet.</p>
     */
    inline void SetEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }

    /**
     * <p>Access limits for incoming traffic. Setting these values limits game server
     * access to incoming traffic using specified IP ranges and port numbers. Some
     * ports in a range may be restricted. You can provide one or more sets of
     * permissions for the fleet.</p>
     */
    inline void SetEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions = value; }

    /**
     * <p>Access limits for incoming traffic. Setting these values limits game server
     * access to incoming traffic using specified IP ranges and port numbers. Some
     * ports in a range may be restricted. You can provide one or more sets of
     * permissions for the fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(const Aws::Vector<IpPermission>& value) { SetEC2InboundPermissions(value); return *this;}

    /**
     * <p>Access limits for incoming traffic. Setting these values limits game server
     * access to incoming traffic using specified IP ranges and port numbers. Some
     * ports in a range may be restricted. You can provide one or more sets of
     * permissions for the fleet.</p>
     */
    inline CreateFleetRequest& WithEC2InboundPermissions(Aws::Vector<IpPermission>&& value) { SetEC2InboundPermissions(value); return *this;}

    /**
     * <p>Access limits for incoming traffic. Setting these values limits game server
     * access to incoming traffic using specified IP ranges and port numbers. Some
     * ports in a range may be restricted. You can provide one or more sets of
     * permissions for the fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(const IpPermission& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }

    /**
     * <p>Access limits for incoming traffic. Setting these values limits game server
     * access to incoming traffic using specified IP ranges and port numbers. Some
     * ports in a range may be restricted. You can provide one or more sets of
     * permissions for the fleet.</p>
     */
    inline CreateFleetRequest& AddEC2InboundPermissions(IpPermission&& value) { m_eC2InboundPermissionsHasBeenSet = true; m_eC2InboundPermissions.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
