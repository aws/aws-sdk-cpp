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
#include <aws/gamelift/model/GameSessionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/PlayerSessionCreationPolicy.h>
#include <aws/gamelift/model/GameProperty.h>
#include <utility>

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
   * <p>Properties describing a game session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSession">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameSession
  {
  public:
    GameSession();
    GameSession(const Aws::Utils::Json::JsonValue& jsonValue);
    GameSession& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for the game session. A game session ID has the following
     * format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session. A game session ID has the following
     * format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session. A game session ID has the following
     * format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p>Unique identifier for the game session. A game session ID has the following
     * format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session. A game session ID has the following
     * format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline GameSession& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session. A game session ID has the following
     * format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline GameSession& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the game session. A game session ID has the following
     * format: <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet
     * ID&gt;/&lt;custom ID string or idempotency token&gt;</code>.</p>
     */
    inline GameSession& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline GameSession& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline GameSession& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline GameSession& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Unique identifier for a fleet the game session is running on.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet the game session is running on.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet the game session is running on.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet the game session is running on.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet the game session is running on.</p>
     */
    inline GameSession& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet the game session is running on.</p>
     */
    inline GameSession& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet the game session is running on.</p>
     */
    inline GameSession& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

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
    inline GameSession& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline GameSession& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

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
    inline GameSession& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline GameSession& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(std::move(value)); return *this;}

    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline int GetCurrentPlayerSessionCount() const{ return m_currentPlayerSessionCount; }

    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline void SetCurrentPlayerSessionCount(int value) { m_currentPlayerSessionCountHasBeenSet = true; m_currentPlayerSessionCount = value; }

    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline GameSession& WithCurrentPlayerSessionCount(int value) { SetCurrentPlayerSessionCount(value); return *this;}

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session.</p>
     */
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session.</p>
     */
    inline GameSession& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}

    /**
     * <p>Current status of the game session. A game session must have an
     * <code>ACTIVE</code> status to have player sessions.</p>
     */
    inline const GameSessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the game session. A game session must have an
     * <code>ACTIVE</code> status to have player sessions.</p>
     */
    inline void SetStatus(const GameSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the game session. A game session must have an
     * <code>ACTIVE</code> status to have player sessions.</p>
     */
    inline void SetStatus(GameSessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the game session. A game session must have an
     * <code>ACTIVE</code> status to have player sessions.</p>
     */
    inline GameSession& WithStatus(const GameSessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the game session. A game session must have an
     * <code>ACTIVE</code> status to have player sessions.</p>
     */
    inline GameSession& WithStatus(GameSessionStatus&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::move(value); }

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline GameSession& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline GameSession& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline GameSession& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline GameSession& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline GameSession& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline GameSession& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline GameSession& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline GameSession& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline const PlayerSessionCreationPolicy& GetPlayerSessionCreationPolicy() const{ return m_playerSessionCreationPolicy; }

    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline void SetPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = value; }

    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline void SetPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = std::move(value); }

    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline GameSession& WithPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { SetPlayerSessionCreationPolicy(value); return *this;}

    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline GameSession& WithPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { SetPlayerSessionCreationPolicy(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>Unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>Unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }

    /**
     * <p>Unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }

    /**
     * <p>Unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline GameSession& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>Unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline GameSession& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player. This ID is used to enforce a resource
     * protection policy (if one exists), that limits the number of game sessions a
     * player can create.</p>
     */
    inline GameSession& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}

  private:
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::Utils::DateTime m_terminationTime;
    bool m_terminationTimeHasBeenSet;
    int m_currentPlayerSessionCount;
    bool m_currentPlayerSessionCountHasBeenSet;
    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet;
    GameSessionStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet;
    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    PlayerSessionCreationPolicy m_playerSessionCreationPolicy;
    bool m_playerSessionCreationPolicyHasBeenSet;
    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
