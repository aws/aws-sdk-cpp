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
    AWS_GAMELIFT_API DesiredPlayerSession() = default;
    AWS_GAMELIFT_API DesiredPlayerSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API DesiredPlayerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a player to associate with the player session.</p>
     */
    inline const Aws::String& GetPlayerId() const { return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    template<typename PlayerIdT = Aws::String>
    void SetPlayerId(PlayerIdT&& value) { m_playerIdHasBeenSet = true; m_playerId = std::forward<PlayerIdT>(value); }
    template<typename PlayerIdT = Aws::String>
    DesiredPlayerSession& WithPlayerId(PlayerIdT&& value) { SetPlayerId(std::forward<PlayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Developer-defined information related to a player. Amazon GameLift Servers
     * does not use this data, so it can be formatted as needed for use in the
     * game.</p>
     */
    inline const Aws::String& GetPlayerData() const { return m_playerData; }
    inline bool PlayerDataHasBeenSet() const { return m_playerDataHasBeenSet; }
    template<typename PlayerDataT = Aws::String>
    void SetPlayerData(PlayerDataT&& value) { m_playerDataHasBeenSet = true; m_playerData = std::forward<PlayerDataT>(value); }
    template<typename PlayerDataT = Aws::String>
    DesiredPlayerSession& WithPlayerData(PlayerDataT&& value) { SetPlayerData(std::forward<PlayerDataT>(value)); return *this;}
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
