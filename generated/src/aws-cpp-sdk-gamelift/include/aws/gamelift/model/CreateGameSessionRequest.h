/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class CreateGameSessionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateGameSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGameSession"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to create a game session in. You can use
     * either the fleet ID or ARN value. Each request must reference either a fleet ID
     * or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the alias associated with the fleet to create a game
     * session in. You can use either the alias ID or ARN value. Each request must
     * reference either a fleet ID or alias ID, but not both.</p>
     */
    inline CreateGameSessionRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}


    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }

    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline CreateGameSessionRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}


    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline CreateGameSessionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::move(value); }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline CreateGameSessionRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline CreateGameSessionRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline CreateGameSessionRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }

    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }

    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }

    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a player or entity creating the game session. </p>
     * <p>If you add a resource creation limit policy to a fleet, the
     * <code>CreateGameSession</code> operation requires a <code>CreatorId</code>.
     * Amazon GameLift limits the number of game session creation requests with the
     * same <code>CreatorId</code> in a specified time period.</p> <p>If you your fleet
     * doesn't have a resource creation limit policy and you provide a
     * <code>CreatorId</code> in your <code>CreateGameSession</code> requests, Amazon
     * GameLift limits requests to one request per <code>CreatorId</code> per
     * second.</p> <p>To not limit <code>CreateGameSession</code> requests with the
     * same <code>CreatorId</code>, don't provide a <code>CreatorId</code> in your
     * <code>CreateGameSession</code> request.</p>
     */
    inline CreateGameSessionRequest& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}


    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }

    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p> <i>This parameter is deprecated. Use <code>IdempotencyToken</code>
     * instead.</i> </p> <p>Custom string that uniquely identifies a request for a new
     * game session. Maximum token length is 48 characters. If provided, this string is
     * included in the new game session's ID.</p>
     */
    inline CreateGameSessionRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}


    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline CreateGameSessionRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline CreateGameSessionRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Custom string that uniquely identifies the new game session request. This is
     * useful for ensuring that game session requests with the same idempotency token
     * are processed only once. Subsequent requests with the same string return the
     * original <code>GameSession</code> object, with an updated status. Maximum token
     * length is 48 characters. If provided, this string is included in the new game
     * session's ID. A game session ARN has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>. Idempotency tokens remain in use for
     * 30 days after a game session has ended; game session objects are retained for
     * this time period and then deleted.</p>
     */
    inline CreateGameSessionRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline const Aws::String& GetGameSessionData() const{ return m_gameSessionData; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline bool GameSessionDataHasBeenSet() const { return m_gameSessionDataHasBeenSet; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameSessionData(const Aws::String& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = value; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameSessionData(Aws::String&& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = std::move(value); }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline void SetGameSessionData(const char* value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData.assign(value); }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline CreateGameSessionRequest& WithGameSessionData(const Aws::String& value) { SetGameSessionData(value); return *this;}

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline CreateGameSessionRequest& WithGameSessionData(Aws::String&& value) { SetGameSessionData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>).</p>
     */
    inline CreateGameSessionRequest& WithGameSessionData(const char* value) { SetGameSessionData(value); return *this;}


    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline CreateGameSessionRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline CreateGameSessionRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A fleet's remote location to place the new game session in. If this parameter
     * is not set, the new game session is placed in the fleet's home Region. Specify a
     * remote location with an Amazon Web Services Region code such as
     * <code>us-west-2</code>. When using an Anywhere fleet, this parameter is required
     * and must be set to the Anywhere fleet's custom location.</p>
     */
    inline CreateGameSessionRequest& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet = false;

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
