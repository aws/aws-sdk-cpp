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
#include <aws/gamelift/model/GameSessionPlacementState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/GameProperty.h>
#include <aws/gamelift/model/PlayerLatency.h>
#include <aws/gamelift/model/PlacedPlayerSession.h>
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
   * <p>Object that describes a <a>StartGameSessionPlacement</a> request. This object
   * includes the full details of the original request plus the current status and
   * start/end time stamps.</p> <p>Game session placement-related operations
   * include:</p> <ul> <li> <p> <a>StartGameSessionPlacement</a> </p> </li> <li> <p>
   * <a>DescribeGameSessionPlacement</a> </p> </li> <li> <p>
   * <a>StopGameSessionPlacement</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionPlacement">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameSessionPlacement
  {
  public:
    GameSessionPlacement();
    GameSessionPlacement(const Aws::Utils::Json::JsonValue& jsonValue);
    GameSessionPlacement& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a game session placement.</p>
     */
    inline const Aws::String& GetPlacementId() const{ return m_placementId; }

    /**
     * <p>Unique identifier for a game session placement.</p>
     */
    inline void SetPlacementId(const Aws::String& value) { m_placementIdHasBeenSet = true; m_placementId = value; }

    /**
     * <p>Unique identifier for a game session placement.</p>
     */
    inline void SetPlacementId(Aws::String&& value) { m_placementIdHasBeenSet = true; m_placementId = std::move(value); }

    /**
     * <p>Unique identifier for a game session placement.</p>
     */
    inline void SetPlacementId(const char* value) { m_placementIdHasBeenSet = true; m_placementId.assign(value); }

    /**
     * <p>Unique identifier for a game session placement.</p>
     */
    inline GameSessionPlacement& WithPlacementId(const Aws::String& value) { SetPlacementId(value); return *this;}

    /**
     * <p>Unique identifier for a game session placement.</p>
     */
    inline GameSessionPlacement& WithPlacementId(Aws::String&& value) { SetPlacementId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a game session placement.</p>
     */
    inline GameSessionPlacement& WithPlacementId(const char* value) { SetPlacementId(value); return *this;}

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline const Aws::String& GetGameSessionQueueName() const{ return m_gameSessionQueueName; }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetGameSessionQueueName(const Aws::String& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = value; }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetGameSessionQueueName(Aws::String&& value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName = std::move(value); }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetGameSessionQueueName(const char* value) { m_gameSessionQueueNameHasBeenSet = true; m_gameSessionQueueName.assign(value); }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline GameSessionPlacement& WithGameSessionQueueName(const Aws::String& value) { SetGameSessionQueueName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline GameSessionPlacement& WithGameSessionQueueName(Aws::String&& value) { SetGameSessionQueueName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline GameSessionPlacement& WithGameSessionQueueName(const char* value) { SetGameSessionQueueName(value); return *this;}

    /**
     * <p>Current status of the game session placement request.</p> <ul> <li> <p>
     * <b>PENDING</b> – The placement request is currently in the queue waiting to be
     * processed.</p> </li> <li> <p> <b>FULFILLED</b> – A new game session and player
     * sessions (if requested) have been successfully created. Values for
     * <i>GameSessionArn</i> and <i>GameSessionRegion</i> are available. </p> </li>
     * <li> <p> <b>CANCELLED</b> – The placement request was canceled with a call to
     * <a>StopGameSessionPlacement</a>.</p> </li> <li> <p> <b>TIMED_OUT</b> – A new
     * game session was not successfully created before the time limit expired. You can
     * resubmit the placement request as needed.</p> </li> </ul>
     */
    inline const GameSessionPlacementState& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the game session placement request.</p> <ul> <li> <p>
     * <b>PENDING</b> – The placement request is currently in the queue waiting to be
     * processed.</p> </li> <li> <p> <b>FULFILLED</b> – A new game session and player
     * sessions (if requested) have been successfully created. Values for
     * <i>GameSessionArn</i> and <i>GameSessionRegion</i> are available. </p> </li>
     * <li> <p> <b>CANCELLED</b> – The placement request was canceled with a call to
     * <a>StopGameSessionPlacement</a>.</p> </li> <li> <p> <b>TIMED_OUT</b> – A new
     * game session was not successfully created before the time limit expired. You can
     * resubmit the placement request as needed.</p> </li> </ul>
     */
    inline void SetStatus(const GameSessionPlacementState& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the game session placement request.</p> <ul> <li> <p>
     * <b>PENDING</b> – The placement request is currently in the queue waiting to be
     * processed.</p> </li> <li> <p> <b>FULFILLED</b> – A new game session and player
     * sessions (if requested) have been successfully created. Values for
     * <i>GameSessionArn</i> and <i>GameSessionRegion</i> are available. </p> </li>
     * <li> <p> <b>CANCELLED</b> – The placement request was canceled with a call to
     * <a>StopGameSessionPlacement</a>.</p> </li> <li> <p> <b>TIMED_OUT</b> – A new
     * game session was not successfully created before the time limit expired. You can
     * resubmit the placement request as needed.</p> </li> </ul>
     */
    inline void SetStatus(GameSessionPlacementState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the game session placement request.</p> <ul> <li> <p>
     * <b>PENDING</b> – The placement request is currently in the queue waiting to be
     * processed.</p> </li> <li> <p> <b>FULFILLED</b> – A new game session and player
     * sessions (if requested) have been successfully created. Values for
     * <i>GameSessionArn</i> and <i>GameSessionRegion</i> are available. </p> </li>
     * <li> <p> <b>CANCELLED</b> – The placement request was canceled with a call to
     * <a>StopGameSessionPlacement</a>.</p> </li> <li> <p> <b>TIMED_OUT</b> – A new
     * game session was not successfully created before the time limit expired. You can
     * resubmit the placement request as needed.</p> </li> </ul>
     */
    inline GameSessionPlacement& WithStatus(const GameSessionPlacementState& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the game session placement request.</p> <ul> <li> <p>
     * <b>PENDING</b> – The placement request is currently in the queue waiting to be
     * processed.</p> </li> <li> <p> <b>FULFILLED</b> – A new game session and player
     * sessions (if requested) have been successfully created. Values for
     * <i>GameSessionArn</i> and <i>GameSessionRegion</i> are available. </p> </li>
     * <li> <p> <b>CANCELLED</b> – The placement request was canceled with a call to
     * <a>StopGameSessionPlacement</a>.</p> </li> <li> <p> <b>TIMED_OUT</b> – A new
     * game session was not successfully created before the time limit expired. You can
     * resubmit the placement request as needed.</p> </li> </ul>
     */
    inline GameSessionPlacement& WithStatus(GameSessionPlacementState&& value) { SetStatus(std::move(value)); return *this;}

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
    inline GameSessionPlacement& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline GameSessionPlacement& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline GameSessionPlacement& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>Set of developer-defined properties for a game session. These properties are
     * passed to the server process hosting the game session.</p>
     */
    inline GameSessionPlacement& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }

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
    inline GameSessionPlacement& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetGameSessionName() const{ return m_gameSessionName; }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetGameSessionName(const Aws::String& value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName = value; }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetGameSessionName(Aws::String&& value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetGameSessionName(const char* value) { m_gameSessionNameHasBeenSet = true; m_gameSessionName.assign(value); }

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline GameSessionPlacement& WithGameSessionName(const Aws::String& value) { SetGameSessionName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline GameSessionPlacement& WithGameSessionName(Aws::String&& value) { SetGameSessionName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline GameSessionPlacement& WithGameSessionName(const char* value) { SetGameSessionName(value); return *this;}

    /**
     * <p>Unique identifier for the game session. This value is set once the new game
     * session is placed (placement status is Fulfilled).</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session. This value is set once the new game
     * session is placed (placement status is Fulfilled).</p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session. This value is set once the new game
     * session is placed (placement status is Fulfilled).</p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p>Unique identifier for the game session. This value is set once the new game
     * session is placed (placement status is Fulfilled).</p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session. This value is set once the new game
     * session is placed (placement status is Fulfilled).</p>
     */
    inline GameSessionPlacement& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session. This value is set once the new game
     * session is placed (placement status is Fulfilled).</p>
     */
    inline GameSessionPlacement& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the game session. This value is set once the new game
     * session is placed (placement status is Fulfilled).</p>
     */
    inline GameSessionPlacement& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Identifier for the game session created by this placement request. This value
     * is set once the new game session is placed (placement status is Fulfilled). This
     * identifier is unique across all regions. You can use this value as a
     * <code>GameSessionId</code> value as needed.</p>
     */
    inline const Aws::String& GetGameSessionArn() const{ return m_gameSessionArn; }

    /**
     * <p>Identifier for the game session created by this placement request. This value
     * is set once the new game session is placed (placement status is Fulfilled). This
     * identifier is unique across all regions. You can use this value as a
     * <code>GameSessionId</code> value as needed.</p>
     */
    inline void SetGameSessionArn(const Aws::String& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = value; }

    /**
     * <p>Identifier for the game session created by this placement request. This value
     * is set once the new game session is placed (placement status is Fulfilled). This
     * identifier is unique across all regions. You can use this value as a
     * <code>GameSessionId</code> value as needed.</p>
     */
    inline void SetGameSessionArn(Aws::String&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::move(value); }

    /**
     * <p>Identifier for the game session created by this placement request. This value
     * is set once the new game session is placed (placement status is Fulfilled). This
     * identifier is unique across all regions. You can use this value as a
     * <code>GameSessionId</code> value as needed.</p>
     */
    inline void SetGameSessionArn(const char* value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn.assign(value); }

    /**
     * <p>Identifier for the game session created by this placement request. This value
     * is set once the new game session is placed (placement status is Fulfilled). This
     * identifier is unique across all regions. You can use this value as a
     * <code>GameSessionId</code> value as needed.</p>
     */
    inline GameSessionPlacement& WithGameSessionArn(const Aws::String& value) { SetGameSessionArn(value); return *this;}

    /**
     * <p>Identifier for the game session created by this placement request. This value
     * is set once the new game session is placed (placement status is Fulfilled). This
     * identifier is unique across all regions. You can use this value as a
     * <code>GameSessionId</code> value as needed.</p>
     */
    inline GameSessionPlacement& WithGameSessionArn(Aws::String&& value) { SetGameSessionArn(std::move(value)); return *this;}

    /**
     * <p>Identifier for the game session created by this placement request. This value
     * is set once the new game session is placed (placement status is Fulfilled). This
     * identifier is unique across all regions. You can use this value as a
     * <code>GameSessionId</code> value as needed.</p>
     */
    inline GameSessionPlacement& WithGameSessionArn(const char* value) { SetGameSessionArn(value); return *this;}

    /**
     * <p>Name of the region where the game session created by this placement request
     * is running. This value is set once the new game session is placed (placement
     * status is Fulfilled).</p>
     */
    inline const Aws::String& GetGameSessionRegion() const{ return m_gameSessionRegion; }

    /**
     * <p>Name of the region where the game session created by this placement request
     * is running. This value is set once the new game session is placed (placement
     * status is Fulfilled).</p>
     */
    inline void SetGameSessionRegion(const Aws::String& value) { m_gameSessionRegionHasBeenSet = true; m_gameSessionRegion = value; }

    /**
     * <p>Name of the region where the game session created by this placement request
     * is running. This value is set once the new game session is placed (placement
     * status is Fulfilled).</p>
     */
    inline void SetGameSessionRegion(Aws::String&& value) { m_gameSessionRegionHasBeenSet = true; m_gameSessionRegion = std::move(value); }

    /**
     * <p>Name of the region where the game session created by this placement request
     * is running. This value is set once the new game session is placed (placement
     * status is Fulfilled).</p>
     */
    inline void SetGameSessionRegion(const char* value) { m_gameSessionRegionHasBeenSet = true; m_gameSessionRegion.assign(value); }

    /**
     * <p>Name of the region where the game session created by this placement request
     * is running. This value is set once the new game session is placed (placement
     * status is Fulfilled).</p>
     */
    inline GameSessionPlacement& WithGameSessionRegion(const Aws::String& value) { SetGameSessionRegion(value); return *this;}

    /**
     * <p>Name of the region where the game session created by this placement request
     * is running. This value is set once the new game session is placed (placement
     * status is Fulfilled).</p>
     */
    inline GameSessionPlacement& WithGameSessionRegion(Aws::String&& value) { SetGameSessionRegion(std::move(value)); return *this;}

    /**
     * <p>Name of the region where the game session created by this placement request
     * is running. This value is set once the new game session is placed (placement
     * status is Fulfilled).</p>
     */
    inline GameSessionPlacement& WithGameSessionRegion(const char* value) { SetGameSessionRegion(value); return *this;}

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that players are experiencing when connected to AWS regions.</p>
     */
    inline const Aws::Vector<PlayerLatency>& GetPlayerLatencies() const{ return m_playerLatencies; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that players are experiencing when connected to AWS regions.</p>
     */
    inline void SetPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = value; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that players are experiencing when connected to AWS regions.</p>
     */
    inline void SetPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies = std::move(value); }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that players are experiencing when connected to AWS regions.</p>
     */
    inline GameSessionPlacement& WithPlayerLatencies(const Aws::Vector<PlayerLatency>& value) { SetPlayerLatencies(value); return *this;}

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that players are experiencing when connected to AWS regions.</p>
     */
    inline GameSessionPlacement& WithPlayerLatencies(Aws::Vector<PlayerLatency>&& value) { SetPlayerLatencies(std::move(value)); return *this;}

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that players are experiencing when connected to AWS regions.</p>
     */
    inline GameSessionPlacement& AddPlayerLatencies(const PlayerLatency& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(value); return *this; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that players are experiencing when connected to AWS regions.</p>
     */
    inline GameSessionPlacement& AddPlayerLatencies(PlayerLatency&& value) { m_playerLatenciesHasBeenSet = true; m_playerLatencies.push_back(std::move(value)); return *this; }

    /**
     * <p>Time stamp indicating when this request was placed in the queue. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Time stamp indicating when this request was placed in the queue. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Time stamp indicating when this request was placed in the queue. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this request was placed in the queue. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline GameSessionPlacement& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this request was placed in the queue. Format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline GameSessionPlacement& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>Time stamp indicating when this request was completed, canceled, or timed
     * out.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Time stamp indicating when this request was completed, canceled, or timed
     * out.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Time stamp indicating when this request was completed, canceled, or timed
     * out.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this request was completed, canceled, or timed
     * out.</p>
     */
    inline GameSessionPlacement& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this request was completed, canceled, or timed
     * out.</p>
     */
    inline GameSessionPlacement& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number. This value is set once the new
     * game session is placed (placement status is Fulfilled). </p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number. This value is set once the new
     * game session is placed (placement status is Fulfilled). </p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number. This value is set once the new
     * game session is placed (placement status is Fulfilled). </p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number. This value is set once the new
     * game session is placed (placement status is Fulfilled). </p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number. This value is set once the new
     * game session is placed (placement status is Fulfilled). </p>
     */
    inline GameSessionPlacement& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number. This value is set once the new
     * game session is placed (placement status is Fulfilled). </p>
     */
    inline GameSessionPlacement& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number. This value is set once the new
     * game session is placed (placement status is Fulfilled). </p>
     */
    inline GameSessionPlacement& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number. This value is set once
     * the new game session is placed (placement status is Fulfilled).</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number. This value is set once
     * the new game session is placed (placement status is Fulfilled).</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number. This value is set once
     * the new game session is placed (placement status is Fulfilled).</p>
     */
    inline GameSessionPlacement& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>Collection of information on player sessions created in response to the game
     * session placement request. These player sessions are created only once a new
     * game session is successfully placed (placement status is Fulfilled). This
     * information includes the player ID (as provided in the placement request) and
     * the corresponding player session ID. Retrieve full player sessions by calling
     * <a>DescribePlayerSessions</a> with the player session ID.</p>
     */
    inline const Aws::Vector<PlacedPlayerSession>& GetPlacedPlayerSessions() const{ return m_placedPlayerSessions; }

    /**
     * <p>Collection of information on player sessions created in response to the game
     * session placement request. These player sessions are created only once a new
     * game session is successfully placed (placement status is Fulfilled). This
     * information includes the player ID (as provided in the placement request) and
     * the corresponding player session ID. Retrieve full player sessions by calling
     * <a>DescribePlayerSessions</a> with the player session ID.</p>
     */
    inline void SetPlacedPlayerSessions(const Aws::Vector<PlacedPlayerSession>& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions = value; }

    /**
     * <p>Collection of information on player sessions created in response to the game
     * session placement request. These player sessions are created only once a new
     * game session is successfully placed (placement status is Fulfilled). This
     * information includes the player ID (as provided in the placement request) and
     * the corresponding player session ID. Retrieve full player sessions by calling
     * <a>DescribePlayerSessions</a> with the player session ID.</p>
     */
    inline void SetPlacedPlayerSessions(Aws::Vector<PlacedPlayerSession>&& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions = std::move(value); }

    /**
     * <p>Collection of information on player sessions created in response to the game
     * session placement request. These player sessions are created only once a new
     * game session is successfully placed (placement status is Fulfilled). This
     * information includes the player ID (as provided in the placement request) and
     * the corresponding player session ID. Retrieve full player sessions by calling
     * <a>DescribePlayerSessions</a> with the player session ID.</p>
     */
    inline GameSessionPlacement& WithPlacedPlayerSessions(const Aws::Vector<PlacedPlayerSession>& value) { SetPlacedPlayerSessions(value); return *this;}

    /**
     * <p>Collection of information on player sessions created in response to the game
     * session placement request. These player sessions are created only once a new
     * game session is successfully placed (placement status is Fulfilled). This
     * information includes the player ID (as provided in the placement request) and
     * the corresponding player session ID. Retrieve full player sessions by calling
     * <a>DescribePlayerSessions</a> with the player session ID.</p>
     */
    inline GameSessionPlacement& WithPlacedPlayerSessions(Aws::Vector<PlacedPlayerSession>&& value) { SetPlacedPlayerSessions(std::move(value)); return *this;}

    /**
     * <p>Collection of information on player sessions created in response to the game
     * session placement request. These player sessions are created only once a new
     * game session is successfully placed (placement status is Fulfilled). This
     * information includes the player ID (as provided in the placement request) and
     * the corresponding player session ID. Retrieve full player sessions by calling
     * <a>DescribePlayerSessions</a> with the player session ID.</p>
     */
    inline GameSessionPlacement& AddPlacedPlayerSessions(const PlacedPlayerSession& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions.push_back(value); return *this; }

    /**
     * <p>Collection of information on player sessions created in response to the game
     * session placement request. These player sessions are created only once a new
     * game session is successfully placed (placement status is Fulfilled). This
     * information includes the player ID (as provided in the placement request) and
     * the corresponding player session ID. Retrieve full player sessions by calling
     * <a>DescribePlayerSessions</a> with the player session ID.</p>
     */
    inline GameSessionPlacement& AddPlacedPlayerSessions(PlacedPlayerSession&& value) { m_placedPlayerSessionsHasBeenSet = true; m_placedPlayerSessions.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_placementId;
    bool m_placementIdHasBeenSet;
    Aws::String m_gameSessionQueueName;
    bool m_gameSessionQueueNameHasBeenSet;
    GameSessionPlacementState m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet;
    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet;
    Aws::String m_gameSessionName;
    bool m_gameSessionNameHasBeenSet;
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
    Aws::String m_gameSessionArn;
    bool m_gameSessionArnHasBeenSet;
    Aws::String m_gameSessionRegion;
    bool m_gameSessionRegionHasBeenSet;
    Aws::Vector<PlayerLatency> m_playerLatencies;
    bool m_playerLatenciesHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::Vector<PlacedPlayerSession> m_placedPlayerSessions;
    bool m_placedPlayerSessionsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
