/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/Player.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchBackfillInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API StartMatchBackfillRequest : public GameLiftRequest
  {
  public:
    StartMatchBackfillRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMatchBackfill"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline const Aws::String& GetTicketId() const{ return m_ticketId; }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline void SetTicketId(const Aws::String& value) { m_ticketIdHasBeenSet = true; m_ticketId = value; }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline void SetTicketId(Aws::String&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::move(value); }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline void SetTicketId(const char* value) { m_ticketIdHasBeenSet = true; m_ticketId.assign(value); }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline StartMatchBackfillRequest& WithTicketId(const Aws::String& value) { SetTicketId(value); return *this;}

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline StartMatchBackfillRequest& WithTicketId(Aws::String&& value) { SetTicketId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline StartMatchBackfillRequest& WithTicketId(const char* value) { SetTicketId(value); return *this;}


    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline StartMatchBackfillRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline StartMatchBackfillRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * <p>Name of the matchmaker to use for this request. The name of the matchmaker
     * that was used with the original game session is listed in the <a>GameSession</a>
     * object, <code>MatchmakerData</code> property. This property contains a
     * matchmaking configuration ARN value, which includes the matchmaker name. (In the
     * ARN value
     * "arn:aws:gamelift:us-west-2:111122223333:matchmakingconfiguration/MM-4v4", the
     * matchmaking configuration name is "MM-4v4".) Use only the name for this
     * parameter.</p>
     */
    inline StartMatchBackfillRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline const Aws::String& GetGameSessionArn() const{ return m_gameSessionArn; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline bool GameSessionArnHasBeenSet() const { return m_gameSessionArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline void SetGameSessionArn(const Aws::String& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = value; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline void SetGameSessionArn(Aws::String&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline void SetGameSessionArn(const char* value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn.assign(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline StartMatchBackfillRequest& WithGameSessionArn(const Aws::String& value) { SetGameSessionArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline StartMatchBackfillRequest& WithGameSessionArn(Aws::String&& value) { SetGameSessionArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it. </p>
     */
    inline StartMatchBackfillRequest& WithGameSessionArn(const char* value) { SetGameSessionArn(value); return *this;}


    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline const Aws::Vector<Player>& GetPlayers() const{ return m_players; }

    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline bool PlayersHasBeenSet() const { return m_playersHasBeenSet; }

    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline void SetPlayers(const Aws::Vector<Player>& value) { m_playersHasBeenSet = true; m_players = value; }

    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline void SetPlayers(Aws::Vector<Player>&& value) { m_playersHasBeenSet = true; m_players = std::move(value); }

    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline StartMatchBackfillRequest& WithPlayers(const Aws::Vector<Player>& value) { SetPlayers(value); return *this;}

    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline StartMatchBackfillRequest& WithPlayers(Aws::Vector<Player>&& value) { SetPlayers(std::move(value)); return *this;}

    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline StartMatchBackfillRequest& AddPlayers(const Player& value) { m_playersHasBeenSet = true; m_players.push_back(value); return *this; }

    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <ul> <li> <p>PlayerID, PlayerAttributes, Team
     * -\\- This information is maintained in the <a>GameSession</a> object,
     * <code>MatchmakerData</code> property, for all players who are currently assigned
     * to the game session. The matchmaker data is in JSON syntax, formatted as a
     * string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-server.html#match-server-data">
     * Match Data</a>. </p> </li> <li> <p>LatencyInMs -\\- If the matchmaker uses
     * player latency, include a latency value, in milliseconds, for the region that
     * the game session is currently in. Do not include latency values for any other
     * region.</p> </li> </ul>
     */
    inline StartMatchBackfillRequest& AddPlayers(Player&& value) { m_playersHasBeenSet = true; m_players.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet;

    Aws::String m_gameSessionArn;
    bool m_gameSessionArnHasBeenSet;

    Aws::Vector<Player> m_players;
    bool m_playersHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
