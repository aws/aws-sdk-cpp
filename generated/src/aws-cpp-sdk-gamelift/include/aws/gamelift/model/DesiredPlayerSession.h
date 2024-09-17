/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Player information for use when creating player sessions using a game session
   * placement request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DesiredPlayerSession">AWS
   * API Reference</a></p>
   */
  class DesiredPlayerSession
  {
  public:
    AWS_GAMELIFT_API DesiredPlayerSession();
    AWS_GAMELIFT_API DesiredPlayerSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API DesiredPlayerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a player to associate with the player session.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }
    inline DesiredPlayerSession& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}
    inline DesiredPlayerSession& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}
    inline DesiredPlayerSession& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}
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
    inline DesiredPlayerSession& WithPlayerData(const Aws::String& value) { SetPlayerData(value); return *this;}
    inline DesiredPlayerSession& WithPlayerData(Aws::String&& value) { SetPlayerData(std::move(value)); return *this;}
    inline DesiredPlayerSession& WithPlayerData(const char* value) { SetPlayerData(value); return *this;}
    ///@}
  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_playerData;
    bool m_playerDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
