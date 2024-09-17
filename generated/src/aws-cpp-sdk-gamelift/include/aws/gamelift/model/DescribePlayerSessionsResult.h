/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/PlayerSession.h>
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
  class DescribePlayerSessionsResult
  {
  public:
    AWS_GAMELIFT_API DescribePlayerSessionsResult();
    AWS_GAMELIFT_API DescribePlayerSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribePlayerSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects containing properties for each player session that
     * matches the request.</p>
     */
    inline const Aws::Vector<PlayerSession>& GetPlayerSessions() const{ return m_playerSessions; }
    inline void SetPlayerSessions(const Aws::Vector<PlayerSession>& value) { m_playerSessions = value; }
    inline void SetPlayerSessions(Aws::Vector<PlayerSession>&& value) { m_playerSessions = std::move(value); }
    inline DescribePlayerSessionsResult& WithPlayerSessions(const Aws::Vector<PlayerSession>& value) { SetPlayerSessions(value); return *this;}
    inline DescribePlayerSessionsResult& WithPlayerSessions(Aws::Vector<PlayerSession>&& value) { SetPlayerSessions(std::move(value)); return *this;}
    inline DescribePlayerSessionsResult& AddPlayerSessions(const PlayerSession& value) { m_playerSessions.push_back(value); return *this; }
    inline DescribePlayerSessionsResult& AddPlayerSessions(PlayerSession&& value) { m_playerSessions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribePlayerSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePlayerSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePlayerSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePlayerSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePlayerSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePlayerSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PlayerSession> m_playerSessions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
