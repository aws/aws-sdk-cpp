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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/FleetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>General properties describing a fleet.</p>
   */
  class AWS_GAMELIFT_API FleetAttributes
  {
  public:
    FleetAttributes();
    FleetAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    FleetAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

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
    inline FleetAttributes& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetAttributes& WithFleetId(const char* value) { SetFleetId(value); return *this;}

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
    inline FleetAttributes& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(const char* value) { SetDescription(value); return *this;}

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
    inline FleetAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline FleetAttributes& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline FleetAttributes& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const{ return m_terminationTime; }

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetTerminationTime(const Aws::Utils::DateTime& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetTerminationTime(Aws::Utils::DateTime&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Current status of the fleet. Possible fleet states include: <ul><li>NEW: A
     * new fleet has been defined and hosts
     * allocated.</li><li>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING: The new fleet is
     * being set up with the game build, and new hosts are being
     * started.</li><li>ACTIVE: Hosts can now accept game sessions.</li><li>ERROR: An
     * error occurred when downloading, validating, building, or activating the
     * fleet.</li><li>DELETING: Hosts are responding to a delete fleet
     * request.</li><li>TERMINATED: The fleet no longer exists.</li></ul></p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the fleet. Possible fleet states include: <ul><li>NEW: A
     * new fleet has been defined and hosts
     * allocated.</li><li>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING: The new fleet is
     * being set up with the game build, and new hosts are being
     * started.</li><li>ACTIVE: Hosts can now accept game sessions.</li><li>ERROR: An
     * error occurred when downloading, validating, building, or activating the
     * fleet.</li><li>DELETING: Hosts are responding to a delete fleet
     * request.</li><li>TERMINATED: The fleet no longer exists.</li></ul></p>
     */
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the fleet. Possible fleet states include: <ul><li>NEW: A
     * new fleet has been defined and hosts
     * allocated.</li><li>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING: The new fleet is
     * being set up with the game build, and new hosts are being
     * started.</li><li>ACTIVE: Hosts can now accept game sessions.</li><li>ERROR: An
     * error occurred when downloading, validating, building, or activating the
     * fleet.</li><li>DELETING: Hosts are responding to a delete fleet
     * request.</li><li>TERMINATED: The fleet no longer exists.</li></ul></p>
     */
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the fleet. Possible fleet states include: <ul><li>NEW: A
     * new fleet has been defined and hosts
     * allocated.</li><li>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING: The new fleet is
     * being set up with the game build, and new hosts are being
     * started.</li><li>ACTIVE: Hosts can now accept game sessions.</li><li>ERROR: An
     * error occurred when downloading, validating, building, or activating the
     * fleet.</li><li>DELETING: Hosts are responding to a delete fleet
     * request.</li><li>TERMINATED: The fleet no longer exists.</li></ul></p>
     */
    inline FleetAttributes& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the fleet. Possible fleet states include: <ul><li>NEW: A
     * new fleet has been defined and hosts
     * allocated.</li><li>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING: The new fleet is
     * being set up with the game build, and new hosts are being
     * started.</li><li>ACTIVE: Hosts can now accept game sessions.</li><li>ERROR: An
     * error occurred when downloading, validating, building, or activating the
     * fleet.</li><li>DELETING: Hosts are responding to a delete fleet
     * request.</li><li>TERMINATED: The fleet no longer exists.</li></ul></p>
     */
    inline FleetAttributes& WithStatus(FleetStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

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
    inline FleetAttributes& WithBuildId(Aws::String&& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline FleetAttributes& WithBuildId(const char* value) { SetBuildId(value); return *this;}

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
    inline FleetAttributes& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Path to the launch executable for the game server. A game server is built
     * into a <code>C:\game</code> drive. This value must be expressed as
     * <code>C:\game\[launchpath]</code>. Example: If, when built, your game server
     * files are in a folder called "MyGame", your log path should be
     * <code>C:\game\MyGame\server.exe</code>.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}

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
    inline FleetAttributes& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Parameters required to launch your game server. These parameters should be
     * expressed as a string of command-line parameters. Example: "+sv_port 33435
     * +start_lobby".</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}

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
    inline FleetAttributes& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline FleetAttributes& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline FleetAttributes& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline FleetAttributes& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Path to game-session log files generated by your game server. Once a game
     * session has been terminated, Amazon GameLift captures and stores the logs on
     * Amazon S3. Use the GameLift console to access the stored logs.</p>
     */
    inline FleetAttributes& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
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
    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet;
    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet;
    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
