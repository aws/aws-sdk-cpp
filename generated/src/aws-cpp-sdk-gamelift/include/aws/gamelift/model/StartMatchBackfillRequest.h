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
    AWS_GAMELIFT_API StartMatchBackfillRequest() = default;

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
     * here, Amazon GameLift Servers will generate one in the form of a UUID. Use this
     * identifier to track the match backfill ticket status and retrieve match
     * results.</p>
     */
    inline const Aws::String& GetTicketId() const { return m_ticketId; }
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }
    template<typename TicketIdT = Aws::String>
    void SetTicketId(TicketIdT&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::forward<TicketIdT>(value); }
    template<typename TicketIdT = Aws::String>
    StartMatchBackfillRequest& WithTicketId(TicketIdT&& value) { SetTicketId(std::forward<TicketIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the matchmaker to use for this request. You can use either the
     * configuration name or ARN value. The ARN of the matchmaker that was used with
     * the original game session is listed in the <code>GameSession</code> object,
     * <code>MatchmakerData</code> property.</p>
     */
    inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    template<typename ConfigurationNameT = Aws::String>
    void SetConfigurationName(ConfigurationNameT&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::forward<ConfigurationNameT>(value); }
    template<typename ConfigurationNameT = Aws::String>
    StartMatchBackfillRequest& WithConfigurationName(ConfigurationNameT&& value) { SetConfigurationName(std::forward<ConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the game session. Use the game session ID. When using
     * FlexMatch as a standalone matchmaking solution, this parameter is not needed.
     * </p>
     */
    inline const Aws::String& GetGameSessionArn() const { return m_gameSessionArn; }
    inline bool GameSessionArnHasBeenSet() const { return m_gameSessionArnHasBeenSet; }
    template<typename GameSessionArnT = Aws::String>
    void SetGameSessionArn(GameSessionArnT&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::forward<GameSessionArnT>(value); }
    template<typename GameSessionArnT = Aws::String>
    StartMatchBackfillRequest& WithGameSessionArn(GameSessionArnT&& value) { SetGameSessionArn(std::forward<GameSessionArnT>(value)); return *this;}
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
    inline const Aws::Vector<Player>& GetPlayers() const { return m_players; }
    inline bool PlayersHasBeenSet() const { return m_playersHasBeenSet; }
    template<typename PlayersT = Aws::Vector<Player>>
    void SetPlayers(PlayersT&& value) { m_playersHasBeenSet = true; m_players = std::forward<PlayersT>(value); }
    template<typename PlayersT = Aws::Vector<Player>>
    StartMatchBackfillRequest& WithPlayers(PlayersT&& value) { SetPlayers(std::forward<PlayersT>(value)); return *this;}
    template<typename PlayersT = Player>
    StartMatchBackfillRequest& AddPlayers(PlayersT&& value) { m_playersHasBeenSet = true; m_players.emplace_back(std::forward<PlayersT>(value)); return *this; }
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
