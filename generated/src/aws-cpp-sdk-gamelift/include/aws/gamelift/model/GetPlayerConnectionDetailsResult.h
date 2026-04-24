/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/PlayerConnectionDetail.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {
class GetPlayerConnectionDetailsResult {
 public:
  AWS_GAMELIFT_API GetPlayerConnectionDetailsResult() = default;
  AWS_GAMELIFT_API GetPlayerConnectionDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_GAMELIFT_API GetPlayerConnectionDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>A unique identifier for the game session for which the player connection
   * details were retrieved.</p>
   */
  inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
  template <typename GameSessionIdT = Aws::String>
  void SetGameSessionId(GameSessionIdT&& value) {
    m_gameSessionIdHasBeenSet = true;
    m_gameSessionId = std::forward<GameSessionIdT>(value);
  }
  template <typename GameSessionIdT = Aws::String>
  GetPlayerConnectionDetailsResult& WithGameSessionId(GameSessionIdT&& value) {
    SetGameSessionId(std::forward<GameSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A collection of player connection detail objects, one for each requested
   * player.</p>
   */
  inline const Aws::Vector<PlayerConnectionDetail>& GetPlayerConnectionDetails() const { return m_playerConnectionDetails; }
  template <typename PlayerConnectionDetailsT = Aws::Vector<PlayerConnectionDetail>>
  void SetPlayerConnectionDetails(PlayerConnectionDetailsT&& value) {
    m_playerConnectionDetailsHasBeenSet = true;
    m_playerConnectionDetails = std::forward<PlayerConnectionDetailsT>(value);
  }
  template <typename PlayerConnectionDetailsT = Aws::Vector<PlayerConnectionDetail>>
  GetPlayerConnectionDetailsResult& WithPlayerConnectionDetails(PlayerConnectionDetailsT&& value) {
    SetPlayerConnectionDetails(std::forward<PlayerConnectionDetailsT>(value));
    return *this;
  }
  template <typename PlayerConnectionDetailsT = PlayerConnectionDetail>
  GetPlayerConnectionDetailsResult& AddPlayerConnectionDetails(PlayerConnectionDetailsT&& value) {
    m_playerConnectionDetailsHasBeenSet = true;
    m_playerConnectionDetails.emplace_back(std::forward<PlayerConnectionDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetPlayerConnectionDetailsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_gameSessionId;

  Aws::Vector<PlayerConnectionDetail> m_playerConnectionDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gameSessionIdHasBeenSet = false;
  bool m_playerConnectionDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
