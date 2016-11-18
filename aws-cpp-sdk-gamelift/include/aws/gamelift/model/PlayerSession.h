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
#include <aws/gamelift/model/PlayerSessionStatus.h>

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
   * <p>Properties describing a player session.</p>
   */
  class AWS_GAMELIFT_API PlayerSession
  {
  public:
    PlayerSession();
    PlayerSession(const Aws::Utils::Json::JsonValue& jsonValue);
    PlayerSession& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline const Aws::String& GetPlayerSessionId() const{ return m_playerSessionId; }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(const Aws::String& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = value; }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(Aws::String&& value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId = value; }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline void SetPlayerSessionId(const char* value) { m_playerSessionIdHasBeenSet = true; m_playerSessionId.assign(value); }

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline PlayerSession& WithPlayerSessionId(const Aws::String& value) { SetPlayerSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline PlayerSession& WithPlayerSessionId(Aws::String&& value) { SetPlayerSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a player session.</p>
     */
    inline PlayerSession& WithPlayerSessionId(const char* value) { SetPlayerSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a player.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>Unique identifier for a player.</p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>Unique identifier for a player.</p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>Unique identifier for a player.</p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>Unique identifier for a player.</p>
     */
    inline PlayerSession& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>Unique identifier for a player.</p>
     */
    inline PlayerSession& WithPlayerId(Aws::String&& value) { SetPlayerId(value); return *this;}

    /**
     * <p>Unique identifier for a player.</p>
     */
    inline PlayerSession& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}

    /**
     * <p>Unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline PlayerSession& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline PlayerSession& WithGameSessionId(Aws::String&& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session that the player session is connected
     * to.</p>
     */
    inline PlayerSession& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

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
    inline PlayerSession& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline PlayerSession& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline PlayerSession& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline PlayerSession& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline PlayerSession& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const{ return m_terminationTime; }

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline void SetTerminationTime(const Aws::Utils::DateTime& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline void SetTerminationTime(Aws::Utils::DateTime&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline PlayerSession& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (ex: "1469498468.057".</p>
     */
    inline PlayerSession& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Current status of the player session.</p> <p>Possible player session statuses
     * include the following:</p> <ul> <li> <p> <b>RESERVED</b> – The player session
     * request has been received, but the player has not yet connected to the server
     * process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> – The player
     * has been validated by the server process and is currently connected.</p> </li>
     * <li> <p> <b>COMPLETED</b> – The player connection has been dropped.</p> </li>
     * <li> <p> <b>TIMEDOUT</b> – A player session request was received, but the player
     * did not connect and/or was not validated within the time-out limit (60
     * seconds).</p> </li> </ul>
     */
    inline const PlayerSessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the player session.</p> <p>Possible player session statuses
     * include the following:</p> <ul> <li> <p> <b>RESERVED</b> – The player session
     * request has been received, but the player has not yet connected to the server
     * process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> – The player
     * has been validated by the server process and is currently connected.</p> </li>
     * <li> <p> <b>COMPLETED</b> – The player connection has been dropped.</p> </li>
     * <li> <p> <b>TIMEDOUT</b> – A player session request was received, but the player
     * did not connect and/or was not validated within the time-out limit (60
     * seconds).</p> </li> </ul>
     */
    inline void SetStatus(const PlayerSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the player session.</p> <p>Possible player session statuses
     * include the following:</p> <ul> <li> <p> <b>RESERVED</b> – The player session
     * request has been received, but the player has not yet connected to the server
     * process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> – The player
     * has been validated by the server process and is currently connected.</p> </li>
     * <li> <p> <b>COMPLETED</b> – The player connection has been dropped.</p> </li>
     * <li> <p> <b>TIMEDOUT</b> – A player session request was received, but the player
     * did not connect and/or was not validated within the time-out limit (60
     * seconds).</p> </li> </ul>
     */
    inline void SetStatus(PlayerSessionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the player session.</p> <p>Possible player session statuses
     * include the following:</p> <ul> <li> <p> <b>RESERVED</b> – The player session
     * request has been received, but the player has not yet connected to the server
     * process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> – The player
     * has been validated by the server process and is currently connected.</p> </li>
     * <li> <p> <b>COMPLETED</b> – The player connection has been dropped.</p> </li>
     * <li> <p> <b>TIMEDOUT</b> – A player session request was received, but the player
     * did not connect and/or was not validated within the time-out limit (60
     * seconds).</p> </li> </ul>
     */
    inline PlayerSession& WithStatus(const PlayerSessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the player session.</p> <p>Possible player session statuses
     * include the following:</p> <ul> <li> <p> <b>RESERVED</b> – The player session
     * request has been received, but the player has not yet connected to the server
     * process and/or been validated. </p> </li> <li> <p> <b>ACTIVE</b> – The player
     * has been validated by the server process and is currently connected.</p> </li>
     * <li> <p> <b>COMPLETED</b> – The player connection has been dropped.</p> </li>
     * <li> <p> <b>TIMEDOUT</b> – A player session request was received, but the player
     * did not connect and/or was not validated within the time-out limit (60
     * seconds).</p> </li> </ul>
     */
    inline PlayerSession& WithStatus(PlayerSessionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Game session IP address. All player sessions reference the game session
     * location.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Game session IP address. All player sessions reference the game session
     * location.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Game session IP address. All player sessions reference the game session
     * location.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Game session IP address. All player sessions reference the game session
     * location.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>Game session IP address. All player sessions reference the game session
     * location.</p>
     */
    inline PlayerSession& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Game session IP address. All player sessions reference the game session
     * location.</p>
     */
    inline PlayerSession& WithIpAddress(Aws::String&& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Game session IP address. All player sessions reference the game session
     * location.</p>
     */
    inline PlayerSession& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

    /**
     * <p>Port number for the game session. To connect to a GameLift server process, an
     * app needs both the IP address and port number.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port number for the game session. To connect to a GameLift server process, an
     * app needs both the IP address and port number.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port number for the game session. To connect to a GameLift server process, an
     * app needs both the IP address and port number.</p>
     */
    inline PlayerSession& WithPort(int value) { SetPort(value); return *this;}

  private:
    Aws::String m_playerSessionId;
    bool m_playerSessionIdHasBeenSet;
    Aws::String m_playerId;
    bool m_playerIdHasBeenSet;
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::Utils::DateTime m_terminationTime;
    bool m_terminationTimeHasBeenSet;
    PlayerSessionStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
