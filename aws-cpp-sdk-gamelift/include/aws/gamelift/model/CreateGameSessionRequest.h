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
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateGameSessionRequest : public GameLiftRequest
  {
  public:
    CreateGameSessionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet to create a game session in. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet to create a game session in. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet to create a game session in. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet to create a game session in. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet to create a game session in. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet to create a game session in. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet to create a game session in. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to create a game
     * session in. Each request must reference either a fleet ID or alias ID, but not
     * both.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for an alias associated with the fleet to create a game
     * session in. Each request must reference either a fleet ID or alias ID, but not
     * both.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for an alias associated with the fleet to create a game
     * session in. Each request must reference either a fleet ID or alias ID, but not
     * both.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>Unique identifier for an alias associated with the fleet to create a game
     * session in. Each request must reference either a fleet ID or alias ID, but not
     * both.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for an alias associated with the fleet to create a game
     * session in. Each request must reference either a fleet ID or alias ID, but not
     * both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to create a game
     * session in. Each request must reference either a fleet ID or alias ID, but not
     * both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an alias associated with the fleet to create a game
     * session in. Each request must reference either a fleet ID or alias ID, but not
     * both.</p>
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
    inline CreateGameSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(const char* value) { SetName(value); return *this;}

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
    inline CreateGameSessionRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline CreateGameSessionRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>Unique identifier for a player or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>Unique identifier for a player or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>Unique identifier for a player or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }

    /**
     * <p>Unique identifier for a player or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }

    /**
     * <p>Unique identifier for a player or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>Unique identifier for a player or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player or entity creating the game session. This ID
     * is used to enforce a resource protection policy (if one exists) that limits the
     * number of concurrent active game sessions one player can have.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}

    /**
     * <p> <i>This parameter is no longer preferred. Please use
     * <code>IdempotencyToken</code> instead.</i> Custom string that uniquely
     * identifies a request for a new game session. Maximum token length is 48
     * characters. If provided, this string is included in the new game session's ID.
     * (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p> <i>This parameter is no longer preferred. Please use
     * <code>IdempotencyToken</code> instead.</i> Custom string that uniquely
     * identifies a request for a new game session. Maximum token length is 48
     * characters. If provided, this string is included in the new game session's ID.
     * (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p> <i>This parameter is no longer preferred. Please use
     * <code>IdempotencyToken</code> instead.</i> Custom string that uniquely
     * identifies a request for a new game session. Maximum token length is 48
     * characters. If provided, this string is included in the new game session's ID.
     * (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p> <i>This parameter is no longer preferred. Please use
     * <code>IdempotencyToken</code> instead.</i> Custom string that uniquely
     * identifies a request for a new game session. Maximum token length is 48
     * characters. If provided, this string is included in the new game session's ID.
     * (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p> <i>This parameter is no longer preferred. Please use
     * <code>IdempotencyToken</code> instead.</i> Custom string that uniquely
     * identifies a request for a new game session. Maximum token length is 48
     * characters. If provided, this string is included in the new game session's ID.
     * (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p> <i>This parameter is no longer preferred. Please use
     * <code>IdempotencyToken</code> instead.</i> Custom string that uniquely
     * identifies a request for a new game session. Maximum token length is 48
     * characters. If provided, this string is included in the new game session's ID.
     * (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p> <i>This parameter is no longer preferred. Please use
     * <code>IdempotencyToken</code> instead.</i> Custom string that uniquely
     * identifies a request for a new game session. Maximum token length is 48
     * characters. If provided, this string is included in the new game session's ID.
     * (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Custom string that uniquely identifies a request for a new game session.
     * Maximum token length is 48 characters. If provided, this string is included in
     * the new game session's ID. (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Custom string that uniquely identifies a request for a new game session.
     * Maximum token length is 48 characters. If provided, this string is included in
     * the new game session's ID. (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Custom string that uniquely identifies a request for a new game session.
     * Maximum token length is 48 characters. If provided, this string is included in
     * the new game session's ID. (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Custom string that uniquely identifies a request for a new game session.
     * Maximum token length is 48 characters. If provided, this string is included in
     * the new game session's ID. (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Custom string that uniquely identifies a request for a new game session.
     * Maximum token length is 48 characters. If provided, this string is included in
     * the new game session's ID. (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline CreateGameSessionRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Custom string that uniquely identifies a request for a new game session.
     * Maximum token length is 48 characters. If provided, this string is included in
     * the new game session's ID. (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline CreateGameSessionRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Custom string that uniquely identifies a request for a new game session.
     * Maximum token length is 48 characters. If provided, this string is included in
     * the new game session's ID. (A game session ID has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.) </p>
     */
    inline CreateGameSessionRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

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
    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
