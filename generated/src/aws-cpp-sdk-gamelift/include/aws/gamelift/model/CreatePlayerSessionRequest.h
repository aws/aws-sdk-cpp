/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreatePlayerSessionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreatePlayerSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlayerSession"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game session to add a player to.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }
    inline CreatePlayerSessionRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}
    inline CreatePlayerSessionRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}
    inline CreatePlayerSessionRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player. Player IDs are developer-defined.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }
    inline CreatePlayerSessionRequest& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}
    inline CreatePlayerSessionRequest& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}
    inline CreatePlayerSessionRequest& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Developer-defined information related to a player. Amazon GameLift does not
     * use this data, so it can be formatted as needed for use in the game.</p>
     */
    inline const Aws::String& GetPlayerData() const{ return m_playerData; }
    inline bool PlayerDataHasBeenSet() const { return m_playerDataHasBeenSet; }
    inline void SetPlayerData(const Aws::String& value) { m_playerDataHasBeenSet = true; m_playerData = value; }
    inline void SetPlayerData(Aws::String&& value) { m_playerDataHasBeenSet = true; m_playerData = std::move(value); }
    inline void SetPlayerData(const char* value) { m_playerDataHasBeenSet = true; m_playerData.assign(value); }
    inline CreatePlayerSessionRequest& WithPlayerData(const Aws::String& value) { SetPlayerData(value); return *this;}
    inline CreatePlayerSessionRequest& WithPlayerData(Aws::String&& value) { SetPlayerData(std::move(value)); return *this;}
    inline CreatePlayerSessionRequest& WithPlayerData(const char* value) { SetPlayerData(value); return *this;}
    ///@}
  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_playerData;
    bool m_playerDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
