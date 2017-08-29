/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeMatchmakingResult
  {
  public:
    DescribeMatchmakingResult();
    DescribeMatchmakingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMatchmakingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline const Aws::Vector<MatchmakingTicket>& GetTicketList() const{ return m_ticketList; }

    /**
     * <p>Collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline void SetTicketList(const Aws::Vector<MatchmakingTicket>& value) { m_ticketList = value; }

    /**
     * <p>Collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline void SetTicketList(Aws::Vector<MatchmakingTicket>&& value) { m_ticketList = std::move(value); }

    /**
     * <p>Collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& WithTicketList(const Aws::Vector<MatchmakingTicket>& value) { SetTicketList(value); return *this;}

    /**
     * <p>Collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& WithTicketList(Aws::Vector<MatchmakingTicket>&& value) { SetTicketList(std::move(value)); return *this;}

    /**
     * <p>Collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& AddTicketList(const MatchmakingTicket& value) { m_ticketList.push_back(value); return *this; }

    /**
     * <p>Collection of existing matchmaking ticket objects matching the request.</p>
     */
    inline DescribeMatchmakingResult& AddTicketList(MatchmakingTicket&& value) { m_ticketList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MatchmakingTicket> m_ticketList;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
