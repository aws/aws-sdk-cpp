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
  class StartMatchmakingResult
  {
  public:
    AWS_GAMELIFT_API StartMatchmakingResult();
    AWS_GAMELIFT_API StartMatchmakingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API StartMatchmakingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Ticket representing the matchmaking request. This object include the
     * information included in the request, ticket status, and match results as
     * generated during the matchmaking process.</p>
     */
    inline const MatchmakingTicket& GetMatchmakingTicket() const{ return m_matchmakingTicket; }

    /**
     * <p>Ticket representing the matchmaking request. This object include the
     * information included in the request, ticket status, and match results as
     * generated during the matchmaking process.</p>
     */
    inline void SetMatchmakingTicket(const MatchmakingTicket& value) { m_matchmakingTicket = value; }

    /**
     * <p>Ticket representing the matchmaking request. This object include the
     * information included in the request, ticket status, and match results as
     * generated during the matchmaking process.</p>
     */
    inline void SetMatchmakingTicket(MatchmakingTicket&& value) { m_matchmakingTicket = std::move(value); }

    /**
     * <p>Ticket representing the matchmaking request. This object include the
     * information included in the request, ticket status, and match results as
     * generated during the matchmaking process.</p>
     */
    inline StartMatchmakingResult& WithMatchmakingTicket(const MatchmakingTicket& value) { SetMatchmakingTicket(value); return *this;}

    /**
     * <p>Ticket representing the matchmaking request. This object include the
     * information included in the request, ticket status, and match results as
     * generated during the matchmaking process.</p>
     */
    inline StartMatchmakingResult& WithMatchmakingTicket(MatchmakingTicket&& value) { SetMatchmakingTicket(std::move(value)); return *this;}

  private:

    MatchmakingTicket m_matchmakingTicket;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
