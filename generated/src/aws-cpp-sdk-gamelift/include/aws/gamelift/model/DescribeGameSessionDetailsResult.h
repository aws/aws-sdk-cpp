/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameSessionDetail.h>
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
  class DescribeGameSessionDetailsResult
  {
  public:
    AWS_GAMELIFT_API DescribeGameSessionDetailsResult();
    AWS_GAMELIFT_API DescribeGameSessionDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeGameSessionDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of properties for each game session that matches the
     * request.</p>
     */
    inline const Aws::Vector<GameSessionDetail>& GetGameSessionDetails() const{ return m_gameSessionDetails; }
    inline void SetGameSessionDetails(const Aws::Vector<GameSessionDetail>& value) { m_gameSessionDetails = value; }
    inline void SetGameSessionDetails(Aws::Vector<GameSessionDetail>&& value) { m_gameSessionDetails = std::move(value); }
    inline DescribeGameSessionDetailsResult& WithGameSessionDetails(const Aws::Vector<GameSessionDetail>& value) { SetGameSessionDetails(value); return *this;}
    inline DescribeGameSessionDetailsResult& WithGameSessionDetails(Aws::Vector<GameSessionDetail>&& value) { SetGameSessionDetails(std::move(value)); return *this;}
    inline DescribeGameSessionDetailsResult& AddGameSessionDetails(const GameSessionDetail& value) { m_gameSessionDetails.push_back(value); return *this; }
    inline DescribeGameSessionDetailsResult& AddGameSessionDetails(GameSessionDetail&& value) { m_gameSessionDetails.push_back(std::move(value)); return *this; }
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
    inline DescribeGameSessionDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeGameSessionDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeGameSessionDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGameSessionDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGameSessionDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGameSessionDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GameSessionDetail> m_gameSessionDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
