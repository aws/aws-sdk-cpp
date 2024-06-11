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
  class StartMatchmakingRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API StartMatchmakingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMatchmaking"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline const Aws::String& GetTicketId() const{ return m_ticketId; }
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }
    inline void SetTicketId(const Aws::String& value) { m_ticketIdHasBeenSet = true; m_ticketId = value; }
    inline void SetTicketId(Aws::String&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::move(value); }
    inline void SetTicketId(const char* value) { m_ticketIdHasBeenSet = true; m_ticketId.assign(value); }
    inline StartMatchmakingRequest& WithTicketId(const Aws::String& value) { SetTicketId(value); return *this;}
    inline StartMatchmakingRequest& WithTicketId(Aws::String&& value) { SetTicketId(std::move(value)); return *this;}
    inline StartMatchmakingRequest& WithTicketId(const char* value) { SetTicketId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same Region as this request. You can use either
     * the configuration name or ARN value.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }
    inline StartMatchmakingRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline StartMatchmakingRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline StartMatchmakingRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p> <p>You can include
     * up to 10 <code>Players</code> in a <code>StartMatchmaking</code> request.</p>
     */
    inline const Aws::Vector<Player>& GetPlayers() const{ return m_players; }
    inline bool PlayersHasBeenSet() const { return m_playersHasBeenSet; }
    inline void SetPlayers(const Aws::Vector<Player>& value) { m_playersHasBeenSet = true; m_players = value; }
    inline void SetPlayers(Aws::Vector<Player>&& value) { m_playersHasBeenSet = true; m_players = std::move(value); }
    inline StartMatchmakingRequest& WithPlayers(const Aws::Vector<Player>& value) { SetPlayers(value); return *this;}
    inline StartMatchmakingRequest& WithPlayers(Aws::Vector<Player>&& value) { SetPlayers(std::move(value)); return *this;}
    inline StartMatchmakingRequest& AddPlayers(const Player& value) { m_playersHasBeenSet = true; m_players.push_back(value); return *this; }
    inline StartMatchmakingRequest& AddPlayers(Player&& value) { m_playersHasBeenSet = true; m_players.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::Vector<Player> m_players;
    bool m_playersHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
