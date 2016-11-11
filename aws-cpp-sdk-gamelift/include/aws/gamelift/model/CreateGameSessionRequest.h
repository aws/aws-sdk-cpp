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
    inline CreateGameSessionRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}

    /**
     * <p>Descriptive label associated with a game session. Session names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with a game session. Session names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a game session. Session names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a game session. Session names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with a game session. Session names do not need
     * to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a game session. Session names do not need
     * to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a game session. Session names do not need
     * to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to the server process hosting it.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to the server process hosting it.</p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to the server process hosting it.</p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to the server process hosting it.</p>
     */
    inline CreateGameSessionRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to the server process hosting it.</p>
     */
    inline CreateGameSessionRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to the server process hosting it.</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Set of properties used to administer a game session. These properties are
     * passed to the server process hosting it.</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Player ID identifying the person or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>Player ID identifying the person or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>Player ID identifying the person or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>Player ID identifying the person or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }

    /**
     * <p>Player ID identifying the person or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>Player ID identifying the person or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(Aws::String&& value) { SetCreatorId(value); return *this;}

    /**
     * <p>Player ID identifying the person or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}

    /**
     * <p>Custom string to include in the game session ID, with a maximum length of 48
     * characters. If this parameter is set, GameLift creates a game session ID in the
     * following format: "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet
     * ID&gt;/&lt;custom ID string&gt;". For example, this full game session ID:
     * "arn:aws:gamelift:us-west-2::gamesession/fleet-2ec2aae5-c2c7-43ca-b19d-8249fe5fddf2/my-game-session"
     * includes the custom ID string "my-game-session". If this parameter is not set,
     * GameLift creates a game session ID in the same format with an auto-generated ID
     * string. </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Custom string to include in the game session ID, with a maximum length of 48
     * characters. If this parameter is set, GameLift creates a game session ID in the
     * following format: "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet
     * ID&gt;/&lt;custom ID string&gt;". For example, this full game session ID:
     * "arn:aws:gamelift:us-west-2::gamesession/fleet-2ec2aae5-c2c7-43ca-b19d-8249fe5fddf2/my-game-session"
     * includes the custom ID string "my-game-session". If this parameter is not set,
     * GameLift creates a game session ID in the same format with an auto-generated ID
     * string. </p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Custom string to include in the game session ID, with a maximum length of 48
     * characters. If this parameter is set, GameLift creates a game session ID in the
     * following format: "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet
     * ID&gt;/&lt;custom ID string&gt;". For example, this full game session ID:
     * "arn:aws:gamelift:us-west-2::gamesession/fleet-2ec2aae5-c2c7-43ca-b19d-8249fe5fddf2/my-game-session"
     * includes the custom ID string "my-game-session". If this parameter is not set,
     * GameLift creates a game session ID in the same format with an auto-generated ID
     * string. </p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Custom string to include in the game session ID, with a maximum length of 48
     * characters. If this parameter is set, GameLift creates a game session ID in the
     * following format: "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet
     * ID&gt;/&lt;custom ID string&gt;". For example, this full game session ID:
     * "arn:aws:gamelift:us-west-2::gamesession/fleet-2ec2aae5-c2c7-43ca-b19d-8249fe5fddf2/my-game-session"
     * includes the custom ID string "my-game-session". If this parameter is not set,
     * GameLift creates a game session ID in the same format with an auto-generated ID
     * string. </p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Custom string to include in the game session ID, with a maximum length of 48
     * characters. If this parameter is set, GameLift creates a game session ID in the
     * following format: "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet
     * ID&gt;/&lt;custom ID string&gt;". For example, this full game session ID:
     * "arn:aws:gamelift:us-west-2::gamesession/fleet-2ec2aae5-c2c7-43ca-b19d-8249fe5fddf2/my-game-session"
     * includes the custom ID string "my-game-session". If this parameter is not set,
     * GameLift creates a game session ID in the same format with an auto-generated ID
     * string. </p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Custom string to include in the game session ID, with a maximum length of 48
     * characters. If this parameter is set, GameLift creates a game session ID in the
     * following format: "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet
     * ID&gt;/&lt;custom ID string&gt;". For example, this full game session ID:
     * "arn:aws:gamelift:us-west-2::gamesession/fleet-2ec2aae5-c2c7-43ca-b19d-8249fe5fddf2/my-game-session"
     * includes the custom ID string "my-game-session". If this parameter is not set,
     * GameLift creates a game session ID in the same format with an auto-generated ID
     * string. </p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Custom string to include in the game session ID, with a maximum length of 48
     * characters. If this parameter is set, GameLift creates a game session ID in the
     * following format: "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet
     * ID&gt;/&lt;custom ID string&gt;". For example, this full game session ID:
     * "arn:aws:gamelift:us-west-2::gamesession/fleet-2ec2aae5-c2c7-43ca-b19d-8249fe5fddf2/my-game-session"
     * includes the custom ID string "my-game-session". If this parameter is not set,
     * GameLift creates a game session ID in the same format with an auto-generated ID
     * string. </p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet;
    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet;
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
