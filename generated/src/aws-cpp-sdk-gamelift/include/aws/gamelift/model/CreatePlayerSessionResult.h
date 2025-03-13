/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/PlayerSession.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{
  class CreatePlayerSessionResult
  {
  public:
    AWS_GAMELIFT_API CreatePlayerSessionResult() = default;
    AWS_GAMELIFT_API CreatePlayerSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreatePlayerSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Object that describes the newly created player session record.</p>
     */
    inline const PlayerSession& GetPlayerSession() const { return m_playerSession; }
    template<typename PlayerSessionT = PlayerSession>
    void SetPlayerSession(PlayerSessionT&& value) { m_playerSessionHasBeenSet = true; m_playerSession = std::forward<PlayerSessionT>(value); }
    template<typename PlayerSessionT = PlayerSession>
    CreatePlayerSessionResult& WithPlayerSession(PlayerSessionT&& value) { SetPlayerSession(std::forward<PlayerSessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePlayerSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PlayerSession m_playerSession;
    bool m_playerSessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
