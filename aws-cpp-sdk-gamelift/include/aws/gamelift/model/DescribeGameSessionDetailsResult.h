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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetailsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeGameSessionDetailsResult
  {
  public:
    DescribeGameSessionDetailsResult();
    DescribeGameSessionDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGameSessionDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects containing game session properties and the protection
     * policy currently in force for each session matching the request.</p>
     */
    inline const Aws::Vector<GameSessionDetail>& GetGameSessionDetails() const{ return m_gameSessionDetails; }

    /**
     * <p>A collection of objects containing game session properties and the protection
     * policy currently in force for each session matching the request.</p>
     */
    inline void SetGameSessionDetails(const Aws::Vector<GameSessionDetail>& value) { m_gameSessionDetails = value; }

    /**
     * <p>A collection of objects containing game session properties and the protection
     * policy currently in force for each session matching the request.</p>
     */
    inline void SetGameSessionDetails(Aws::Vector<GameSessionDetail>&& value) { m_gameSessionDetails = std::move(value); }

    /**
     * <p>A collection of objects containing game session properties and the protection
     * policy currently in force for each session matching the request.</p>
     */
    inline DescribeGameSessionDetailsResult& WithGameSessionDetails(const Aws::Vector<GameSessionDetail>& value) { SetGameSessionDetails(value); return *this;}

    /**
     * <p>A collection of objects containing game session properties and the protection
     * policy currently in force for each session matching the request.</p>
     */
    inline DescribeGameSessionDetailsResult& WithGameSessionDetails(Aws::Vector<GameSessionDetail>&& value) { SetGameSessionDetails(std::move(value)); return *this;}

    /**
     * <p>A collection of objects containing game session properties and the protection
     * policy currently in force for each session matching the request.</p>
     */
    inline DescribeGameSessionDetailsResult& AddGameSessionDetails(const GameSessionDetail& value) { m_gameSessionDetails.push_back(value); return *this; }

    /**
     * <p>A collection of objects containing game session properties and the protection
     * policy currently in force for each session matching the request.</p>
     */
    inline DescribeGameSessionDetailsResult& AddGameSessionDetails(GameSessionDetail&& value) { m_gameSessionDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeGameSessionDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeGameSessionDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeGameSessionDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GameSessionDetail> m_gameSessionDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
