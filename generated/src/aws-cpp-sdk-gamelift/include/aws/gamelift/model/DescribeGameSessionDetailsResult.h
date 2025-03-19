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
    AWS_GAMELIFT_API DescribeGameSessionDetailsResult() = default;
    AWS_GAMELIFT_API DescribeGameSessionDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeGameSessionDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of properties for each game session that matches the
     * request.</p>
     */
    inline const Aws::Vector<GameSessionDetail>& GetGameSessionDetails() const { return m_gameSessionDetails; }
    template<typename GameSessionDetailsT = Aws::Vector<GameSessionDetail>>
    void SetGameSessionDetails(GameSessionDetailsT&& value) { m_gameSessionDetailsHasBeenSet = true; m_gameSessionDetails = std::forward<GameSessionDetailsT>(value); }
    template<typename GameSessionDetailsT = Aws::Vector<GameSessionDetail>>
    DescribeGameSessionDetailsResult& WithGameSessionDetails(GameSessionDetailsT&& value) { SetGameSessionDetails(std::forward<GameSessionDetailsT>(value)); return *this;}
    template<typename GameSessionDetailsT = GameSessionDetail>
    DescribeGameSessionDetailsResult& AddGameSessionDetails(GameSessionDetailsT&& value) { m_gameSessionDetailsHasBeenSet = true; m_gameSessionDetails.emplace_back(std::forward<GameSessionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeGameSessionDetailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGameSessionDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GameSessionDetail> m_gameSessionDetails;
    bool m_gameSessionDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
