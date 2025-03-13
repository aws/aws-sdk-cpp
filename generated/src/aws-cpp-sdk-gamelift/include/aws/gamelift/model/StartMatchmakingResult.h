/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/MatchmakingTicket.h>
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
  class StartMatchmakingResult
  {
  public:
    AWS_GAMELIFT_API StartMatchmakingResult() = default;
    AWS_GAMELIFT_API StartMatchmakingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API StartMatchmakingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Ticket representing the matchmaking request. This object include the
     * information included in the request, ticket status, and match results as
     * generated during the matchmaking process.</p>
     */
    inline const MatchmakingTicket& GetMatchmakingTicket() const { return m_matchmakingTicket; }
    template<typename MatchmakingTicketT = MatchmakingTicket>
    void SetMatchmakingTicket(MatchmakingTicketT&& value) { m_matchmakingTicketHasBeenSet = true; m_matchmakingTicket = std::forward<MatchmakingTicketT>(value); }
    template<typename MatchmakingTicketT = MatchmakingTicket>
    StartMatchmakingResult& WithMatchmakingTicket(MatchmakingTicketT&& value) { SetMatchmakingTicket(std::forward<MatchmakingTicketT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMatchmakingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MatchmakingTicket m_matchmakingTicket;
    bool m_matchmakingTicketHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
