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
#include <aws/gamelift/model/GameProperty.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API CreateGameSessionRequest : public GameLiftRequest
  {
  public:
    CreateGameSessionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for a fleet. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Each request must reference either a
     * fleet ID or alias ID, but not both.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for a fleet alias. Each request must reference either a
     * fleet ID or alias ID, but not both.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for a fleet alias. Each request must reference either a
     * fleet ID or alias ID, but not both.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for a fleet alias. Each request must reference either a
     * fleet ID or alias ID, but not both.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for a fleet alias. Each request must reference either a
     * fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Each request must reference either a
     * fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(Aws::String&& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Each request must reference either a
     * fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session. </p>
     */
    inline long GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session. </p>
     */
    inline void SetMaximumPlayerSessionCount(long value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>Maximum number of players that can be connected simultaneously to the game
     * session. </p>
     */
    inline CreateGameSessionRequest& WithMaximumPlayerSessionCount(long value) { SetMaximumPlayerSessionCount(value); return *this;}

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
    inline CreateGameSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with this game session. Session names do not
     * need to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to your game server.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to your game server.</p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to your game server.</p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to your game server.</p>
     */
    inline CreateGameSessionRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to your game server.</p>
     */
    inline CreateGameSessionRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to your game server.</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to your game server.</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
    long m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
