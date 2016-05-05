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
   * <p>Properties describing a game session.</p>
   */
  class AWS_GAMELIFT_API GameSession
  {
  public:
    GameSession();
    GameSession(const Aws::Utils::Json::JsonValue& jsonValue);
    GameSession& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a game session.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for a game session.</p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for a game session.</p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for a game session.</p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for a game session.</p>
     */
    inline GameSession& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a game session.</p>
     */
    inline GameSession& WithGameSessionId(Aws::String&& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a game session.</p>
     */
    inline GameSession& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline GameSession& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline GameSession& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline GameSession& WithName(const char* value) { SetName(value); return *this;}

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
    inline GameSession& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline GameSession& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline GameSession& WithFleetId(const char* value) { SetFleetId(value); return *this;}

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
    inline GameSession& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline GameSession& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

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
    inline GameSession& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline GameSession& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline long GetCurrentPlayerSessionCount() const{ return m_currentPlayerSessionCount; }

    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline void SetCurrentPlayerSessionCount(long value) { m_currentPlayerSessionCountHasBeenSet = true; m_currentPlayerSessionCount = value; }

    /**
     * <p>Number of players currently in the game session.</p>
     */
    inline GameSession& WithCurrentPlayerSessionCount(long value) { SetCurrentPlayerSessionCount(value); return *this;}

    /**
     * <p>Maximum number of players allowed in the game session.</p>
     */
    inline long GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>Maximum number of players allowed in the game session.</p>
     */
    inline void SetMaximumPlayerSessionCount(long value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>Maximum number of players allowed in the game session.</p>
     */
    inline GameSession& WithMaximumPlayerSessionCount(long value) { SetMaximumPlayerSessionCount(value); return *this;}

    /**
     * <p>Current status of the game session. A game session must be in an ACTIVE state
     * to have player sessions.</p>
     */
    inline const GameSessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the game session. A game session must be in an ACTIVE state
     * to have player sessions.</p>
     */
    inline void SetStatus(const GameSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the game session. A game session must be in an ACTIVE state
     * to have player sessions.</p>
     */
    inline void SetStatus(GameSessionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the game session. A game session must be in an ACTIVE state
     * to have player sessions.</p>
     */
    inline GameSession& WithStatus(const GameSessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the game session. A game session must be in an ACTIVE state
     * to have player sessions.</p>
     */
    inline GameSession& WithStatus(GameSessionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Set of custom properties for the game session.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>Set of custom properties for the game session.</p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of custom properties for the game session.</p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of custom properties for the game session.</p>
     */
    inline GameSession& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of custom properties for the game session.</p>
     */
    inline GameSession& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of custom properties for the game session.</p>
     */
    inline GameSession& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Set of custom properties for the game session.</p>
     */
    inline GameSession& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>IP address of the game session.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address of the game session.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address of the game session.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address of the game session.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address of the game session.</p>
     */
    inline GameSession& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address of the game session.</p>
     */
    inline GameSession& WithIpAddress(Aws::String&& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address of the game session.</p>
     */
    inline GameSession& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

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
    inline void SetPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = value; }

    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline GameSession& WithPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { SetPlayerSessionCreationPolicy(value); return *this;}

    /**
     * <p>Indicates whether or not the game session is accepting new players.</p>
     */
    inline GameSession& WithPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { SetPlayerSessionCreationPolicy(value); return *this;}

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
    long m_currentPlayerSessionCount;
    bool m_currentPlayerSessionCountHasBeenSet;
    long m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet;
    GameSessionStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet;
    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
    PlayerSessionCreationPolicy m_playerSessionCreationPolicy;
    bool m_playerSessionCreationPolicyHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
