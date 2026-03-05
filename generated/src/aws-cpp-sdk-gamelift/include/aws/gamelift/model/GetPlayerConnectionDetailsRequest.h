/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace GameLift {
namespace Model {

/**
 */
class GetPlayerConnectionDetailsRequest : public GameLiftRequest {
 public:
  AWS_GAMELIFT_API GetPlayerConnectionDetailsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPlayerConnectionDetails"; }

  AWS_GAMELIFT_API Aws::String SerializePayload() const override;

  AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique identifier for the game session for which to retrieve player
   * connection details.</p>
   */
  inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
  inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
  template <typename GameSessionIdT = Aws::String>
  void SetGameSessionId(GameSessionIdT&& value) {
    m_gameSessionIdHasBeenSet = true;
    m_gameSessionId = std::forward<GameSessionIdT>(value);
  }
  template <typename GameSessionIdT = Aws::String>
  GetPlayerConnectionDetailsRequest& WithGameSessionId(GameSessionIdT&& value) {
    SetGameSessionId(std::forward<GameSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of unique identifiers for players. Connection details are returned for
   * each player in this list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPlayerIds() const { return m_playerIds; }
  inline bool PlayerIdsHasBeenSet() const { return m_playerIdsHasBeenSet; }
  template <typename PlayerIdsT = Aws::Vector<Aws::String>>
  void SetPlayerIds(PlayerIdsT&& value) {
    m_playerIdsHasBeenSet = true;
    m_playerIds = std::forward<PlayerIdsT>(value);
  }
  template <typename PlayerIdsT = Aws::Vector<Aws::String>>
  GetPlayerConnectionDetailsRequest& WithPlayerIds(PlayerIdsT&& value) {
    SetPlayerIds(std::forward<PlayerIdsT>(value));
    return *this;
  }
  template <typename PlayerIdsT = Aws::String>
  GetPlayerConnectionDetailsRequest& AddPlayerIds(PlayerIdsT&& value) {
    m_playerIdsHasBeenSet = true;
    m_playerIds.emplace_back(std::forward<PlayerIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gameSessionId;

  Aws::Vector<Aws::String> m_playerIds;
  bool m_gameSessionIdHasBeenSet = false;
  bool m_playerIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
