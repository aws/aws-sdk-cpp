/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameSessionQueue.h>
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
  class DescribeGameSessionQueuesResult
  {
  public:
    AWS_GAMELIFT_API DescribeGameSessionQueuesResult() = default;
    AWS_GAMELIFT_API DescribeGameSessionQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeGameSessionQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline const Aws::Vector<GameSessionQueue>& GetGameSessionQueues() const { return m_gameSessionQueues; }
    template<typename GameSessionQueuesT = Aws::Vector<GameSessionQueue>>
    void SetGameSessionQueues(GameSessionQueuesT&& value) { m_gameSessionQueuesHasBeenSet = true; m_gameSessionQueues = std::forward<GameSessionQueuesT>(value); }
    template<typename GameSessionQueuesT = Aws::Vector<GameSessionQueue>>
    DescribeGameSessionQueuesResult& WithGameSessionQueues(GameSessionQueuesT&& value) { SetGameSessionQueues(std::forward<GameSessionQueuesT>(value)); return *this;}
    template<typename GameSessionQueuesT = GameSessionQueue>
    DescribeGameSessionQueuesResult& AddGameSessionQueues(GameSessionQueuesT&& value) { m_gameSessionQueuesHasBeenSet = true; m_gameSessionQueues.emplace_back(std::forward<GameSessionQueuesT>(value)); return *this; }
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
    DescribeGameSessionQueuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGameSessionQueuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GameSessionQueue> m_gameSessionQueues;
    bool m_gameSessionQueuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
