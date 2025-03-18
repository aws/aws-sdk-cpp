/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/MatchmakingTicket.h>
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
  class DescribeMatchmakingResult
  {
  public:
    AWS_GAMELIFT_API DescribeMatchmakingResult() = default;
    AWS_GAMELIFT_API DescribeMatchmakingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeMatchmakingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline const Aws::Vector<MatchmakingTicket>& GetTicketList() const { return m_ticketList; }
    template<typename TicketListT = Aws::Vector<MatchmakingTicket>>
    void SetTicketList(TicketListT&& value) { m_ticketListHasBeenSet = true; m_ticketList = std::forward<TicketListT>(value); }
    template<typename TicketListT = Aws::Vector<MatchmakingTicket>>
    DescribeMatchmakingResult& WithTicketList(TicketListT&& value) { SetTicketList(std::forward<TicketListT>(value)); return *this;}
    template<typename TicketListT = MatchmakingTicket>
    DescribeMatchmakingResult& AddTicketList(TicketListT&& value) { m_ticketListHasBeenSet = true; m_ticketList.emplace_back(std::forward<TicketListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMatchmakingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MatchmakingTicket> m_ticketList;
    bool m_ticketListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
