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
    AWS_GAMELIFT_API DescribeGameSessionQueuesResult();
    AWS_GAMELIFT_API DescribeGameSessionQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeGameSessionQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline const Aws::Vector<GameSessionQueue>& GetGameSessionQueues() const{ return m_gameSessionQueues; }

    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline void SetGameSessionQueues(const Aws::Vector<GameSessionQueue>& value) { m_gameSessionQueues = value; }

    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline void SetGameSessionQueues(Aws::Vector<GameSessionQueue>&& value) { m_gameSessionQueues = std::move(value); }

    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline DescribeGameSessionQueuesResult& WithGameSessionQueues(const Aws::Vector<GameSessionQueue>& value) { SetGameSessionQueues(value); return *this;}

    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline DescribeGameSessionQueuesResult& WithGameSessionQueues(Aws::Vector<GameSessionQueue>&& value) { SetGameSessionQueues(std::move(value)); return *this;}

    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline DescribeGameSessionQueuesResult& AddGameSessionQueues(const GameSessionQueue& value) { m_gameSessionQueues.push_back(value); return *this; }

    /**
     * <p>A collection of objects that describe the requested game session queues.</p>
     */
    inline DescribeGameSessionQueuesResult& AddGameSessionQueues(GameSessionQueue&& value) { m_gameSessionQueues.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeGameSessionQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeGameSessionQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeGameSessionQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeGameSessionQueuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeGameSessionQueuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeGameSessionQueuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GameSessionQueue> m_gameSessionQueues;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
