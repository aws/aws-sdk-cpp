/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_GAMELIFT_API DescribeMatchmakingResult();
    AWS_GAMELIFT_API DescribeMatchmakingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeMatchmakingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline const Aws::Vector<MatchmakingTicket>& GetTicketList() const{ return m_ticketList; }

    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline void SetTicketList(const Aws::Vector<MatchmakingTicket>& value) { m_ticketList = value; }

    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline void SetTicketList(Aws::Vector<MatchmakingTicket>&& value) { m_ticketList = std::move(value); }

    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& WithTicketList(const Aws::Vector<MatchmakingTicket>& value) { SetTicketList(value); return *this;}

    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& WithTicketList(Aws::Vector<MatchmakingTicket>&& value) { SetTicketList(std::move(value)); return *this;}

    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& AddTicketList(const MatchmakingTicket& value) { m_ticketList.push_back(value); return *this; }

    /**
     * <p>A collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& AddTicketList(MatchmakingTicket&& value) { m_ticketList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MatchmakingTicket> m_ticketList;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
