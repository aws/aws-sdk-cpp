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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchmakingInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API StartMatchmakingRequest : public GameLiftRequest
  {
  public:
    StartMatchmakingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMatchmaking"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline const Aws::String& GetTicketId() const{ return m_ticketId; }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline void SetTicketId(const Aws::String& value) { m_ticketIdHasBeenSet = true; m_ticketId = value; }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline void SetTicketId(Aws::String&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::move(value); }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline void SetTicketId(const char* value) { m_ticketIdHasBeenSet = true; m_ticketId.assign(value); }

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline StartMatchmakingRequest& WithTicketId(const Aws::String& value) { SetTicketId(value); return *this;}

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline StartMatchmakingRequest& WithTicketId(Aws::String&& value) { SetTicketId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a matchmaking ticket. If no ticket ID is specified
     * here, Amazon GameLift will generate one in the form of a UUID. Use this
     * identifier to track the matchmaking ticket status and retrieve match
     * results.</p>
     */
    inline StartMatchmakingRequest& WithTicketId(const char* value) { SetTicketId(value); return *this;}


    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline StartMatchmakingRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline StartMatchmakingRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * <p>Name of the matchmaking configuration to use for this request. Matchmaking
     * configurations must exist in the same region as this request.</p>
     */
    inline StartMatchmakingRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline const Aws::Vector<Player>& GetPlayers() const{ return m_players; }

    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline bool PlayersHasBeenSet() const { return m_playersHasBeenSet; }

    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline void SetPlayers(const Aws::Vector<Player>& value) { m_playersHasBeenSet = true; m_players = value; }

    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline void SetPlayers(Aws::Vector<Player>&& value) { m_playersHasBeenSet = true; m_players = std::move(value); }

    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline StartMatchmakingRequest& WithPlayers(const Aws::Vector<Player>& value) { SetPlayers(value); return *this;}

    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline StartMatchmakingRequest& WithPlayers(Aws::Vector<Player>&& value) { SetPlayers(std::move(value)); return *this;}

    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline StartMatchmakingRequest& AddPlayers(const Player& value) { m_playersHasBeenSet = true; m_players.push_back(value); return *this; }

    /**
     * <p>Information on each player to be matched. This information must include a
     * player ID, and may contain player attributes and latency data to be used in the
     * matchmaking process. After a successful match, <code>Player</code> objects
     * contain the name of the team the player is assigned to.</p>
     */
    inline StartMatchmakingRequest& AddPlayers(Player&& value) { m_playersHasBeenSet = true; m_players.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet;

    Aws::Vector<Player> m_players;
    bool m_playersHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
