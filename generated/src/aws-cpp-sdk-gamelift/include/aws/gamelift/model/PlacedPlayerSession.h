/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>Information about a player session. This object contains only the player ID
 * and player session ID. To retrieve full details on a player session, call <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribePlayerSessions.html">DescribePlayerSessions</a>
 * with the player session ID.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlacedPlayerSession">AWS
 * API Reference</a></p>
 */
class PlacedPlayerSession {
 public:
  AWS_GAMELIFT_API PlacedPlayerSession() = default;
  AWS_GAMELIFT_API PlacedPlayerSession(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API PlacedPlayerSession& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A unique identifier for a player that is associated with this player
   * session.</p>
   */
  inline const Aws::String& GetPlayerId() const { return m_playerId; }
  inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
  template <typename PlayerIdT = Aws::String>
  void SetPlayerId(PlayerIdT&& value) {
    m_playerIdHasBeenSet = true;
    m_playerId = std::forward<PlayerIdT>(value);
  }
  template <typename PlayerIdT = Aws::String>
  PlacedPlayerSession& WithPlayerId(PlayerIdT&& value) {
    SetPlayerId(std::forward<PlayerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for a player session.</p>
   */
  inline const Aws::String& GetPlayerSessionId() const { return m_playerSessionId; }
  inline bool PlayerSessionIdHasBeenSet() const { return m_playerSessionIdHasBeenSet; }
  template <typename PlayerSessionIdT = Aws::String>
  void SetPlayerSessionId(PlayerSessionIdT&& value) {
    m_playerSessionIdHasBeenSet = true;
    m_playerSessionId = std::forward<PlayerSessionIdT>(value);
  }
  template <typename PlayerSessionIdT = Aws::String>
  PlacedPlayerSession& WithPlayerSessionId(PlayerSessionIdT&& value) {
    SetPlayerSessionId(std::forward<PlayerSessionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_playerId;

  Aws::String m_playerSessionId;
  bool m_playerIdHasBeenSet = false;
  bool m_playerSessionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
