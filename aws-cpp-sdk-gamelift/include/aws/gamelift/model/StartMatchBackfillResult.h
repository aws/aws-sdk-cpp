/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  class StartMatchBackfillResult
  {
  public:
    AWS_GAMELIFT_API StartMatchBackfillResult();
    AWS_GAMELIFT_API StartMatchBackfillResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API StartMatchBackfillResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Ticket representing the backfill matchmaking request. This object includes
     * the information in the request, ticket status, and match results as generated
     * during the matchmaking process.</p>
     */
    inline const MatchmakingTicket& GetMatchmakingTicket() const{ return m_matchmakingTicket; }

    /**
     * <p>Ticket representing the backfill matchmaking request. This object includes
     * the information in the request, ticket status, and match results as generated
     * during the matchmaking process.</p>
     */
    inline void SetMatchmakingTicket(const MatchmakingTicket& value) { m_matchmakingTicket = value; }

    /**
     * <p>Ticket representing the backfill matchmaking request. This object includes
     * the information in the request, ticket status, and match results as generated
     * during the matchmaking process.</p>
     */
    inline void SetMatchmakingTicket(MatchmakingTicket&& value) { m_matchmakingTicket = std::move(value); }

    /**
     * <p>Ticket representing the backfill matchmaking request. This object includes
     * the information in the request, ticket status, and match results as generated
     * during the matchmaking process.</p>
     */
    inline StartMatchBackfillResult& WithMatchmakingTicket(const MatchmakingTicket& value) { SetMatchmakingTicket(value); return *this;}

    /**
     * <p>Ticket representing the backfill matchmaking request. This object includes
     * the information in the request, ticket status, and match results as generated
     * during the matchmaking process.</p>
     */
    inline StartMatchBackfillResult& WithMatchmakingTicket(MatchmakingTicket&& value) { SetMatchmakingTicket(std::move(value)); return *this;}

  private:

    MatchmakingTicket m_matchmakingTicket;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
