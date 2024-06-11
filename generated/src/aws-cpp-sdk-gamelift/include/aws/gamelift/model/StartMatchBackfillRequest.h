/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class StartMatchBackfillRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API StartMatchBackfillRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMatchBackfill"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline const Aws::String& GetTicketId() const{ return m_ticketId; }
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }
    inline void SetTicketId(const Aws::String& value) { m_ticketIdHasBeenSet = true; m_ticketId = value; }
    inline void SetTicketId(Aws::String&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::move(value); }
    inline void SetTicketId(const char* value) { m_ticketIdHasBeenSet = true; m_ticketId.assign(value); }
    inline StartMatchBackfillRequest& WithTicketId(const Aws::String& value) { SetTicketId(value); return *this;}
    inline StartMatchBackfillRequest& WithTicketId(Aws::String&& value) { SetTicketId(std::move(value)); return *this;}
    inline StartMatchBackfillRequest& WithTicketId(const char* value) { SetTicketId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the matchmaker to use for this request. You can use either the
     * configuration name or ARN value. The ARN of the matchmaker that was used with
     * the original game session is listed in the <code>GameSession</code> object,
     * <code>MatchmakerData</code> property.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }
    inline StartMatchBackfillRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline StartMatchBackfillRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline StartMatchBackfillRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the game session. Use the game session ID. When using
     * FlexMatch as a standalone matchmaking solution, this parameter is not needed.
     * </p>
     */
    inline const Aws::String& GetGameSessionArn() const{ return m_gameSessionArn; }
    inline bool GameSessionArnHasBeenSet() const { return m_gameSessionArnHasBeenSet; }
    inline void SetGameSessionArn(const Aws::String& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = value; }
    inline void SetGameSessionArn(Aws::String&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::move(value); }
    inline void SetGameSessionArn(const char* value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn.assign(value); }
    inline StartMatchBackfillRequest& WithGameSessionArn(const Aws::String& value) { SetGameSessionArn(value); return *this;}
    inline StartMatchBackfillRequest& WithGameSessionArn(Aws::String&& value) { SetGameSessionArn(std::move(value)); return *this;}
    inline StartMatchBackfillRequest& WithGameSessionArn(const char* value) { SetGameSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Match information on all players that are currently assigned to the game
     * session. This information is used by the matchmaker to find new players and add
     * them to the existing game.</p> <p>You can include up to 199 <code>Players</code>
     * in a <code>StartMatchBackfill</code> request.</p> <ul> <li> <p>PlayerID,
     * PlayerAttributes, Team -- This information is maintained in the
     * <code>GameSession</code> object, <code>MatchmakerData</code> property, for all
     * players who are currently assigned to the game session. The matchmaker data is
     * in JSON syntax, formatted as a string. For more details, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-server.html#match-server-data">
     * Match Data</a>. </p> <p>The backfill request must specify the team membership
     * for every player. Do not specify team if you are not using backfill.</p> </li>
     * <li> <p>LatencyInMs -- If the matchmaker uses player latency, include a latency
     * value, in milliseconds, for the Region that the game session is currently in. Do
     * not include latency values for any other Region.</p> </li> </ul>
     */
    inline const Aws::Vector<Player>& GetPlayers() const{ return m_players; }
    inline bool PlayersHasBeenSet() const { return m_playersHasBeenSet; }
    inline void SetPlayers(const Aws::Vector<Player>& value) { m_playersHasBeenSet = true; m_players = value; }
    inline void SetPlayers(Aws::Vector<Player>&& value) { m_playersHasBeenSet = true; m_players = std::move(value); }
    inline StartMatchBackfillRequest& WithPlayers(const Aws::Vector<Player>& value) { SetPlayers(value); return *this;}
    inline StartMatchBackfillRequest& WithPlayers(Aws::Vector<Player>&& value) { SetPlayers(std::move(value)); return *this;}
    inline StartMatchBackfillRequest& AddPlayers(const Player& value) { m_playersHasBeenSet = true; m_players.push_back(value); return *this; }
    inline StartMatchBackfillRequest& AddPlayers(Player&& value) { m_playersHasBeenSet = true; m_players.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_gameSessionArn;
    bool m_gameSessionArnHasBeenSet = false;

    Aws::Vector<Player> m_players;
    bool m_playersHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
