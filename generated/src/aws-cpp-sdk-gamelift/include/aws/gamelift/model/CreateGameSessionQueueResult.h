/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameSessionQueue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateGameSessionQueueResult
  {
  public:
    AWS_GAMELIFT_API CreateGameSessionQueueResult();
    AWS_GAMELIFT_API CreateGameSessionQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateGameSessionQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the newly created game session queue.</p>
     */
    inline const GameSessionQueue& GetGameSessionQueue() const{ return m_gameSessionQueue; }

    /**
     * <p>An object that describes the newly created game session queue.</p>
     */
    inline void SetGameSessionQueue(const GameSessionQueue& value) { m_gameSessionQueue = value; }

    /**
     * <p>An object that describes the newly created game session queue.</p>
     */
    inline void SetGameSessionQueue(GameSessionQueue&& value) { m_gameSessionQueue = std::move(value); }

    /**
     * <p>An object that describes the newly created game session queue.</p>
     */
    inline CreateGameSessionQueueResult& WithGameSessionQueue(const GameSessionQueue& value) { SetGameSessionQueue(value); return *this;}

    /**
     * <p>An object that describes the newly created game session queue.</p>
     */
    inline CreateGameSessionQueueResult& WithGameSessionQueue(GameSessionQueue&& value) { SetGameSessionQueue(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGameSessionQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGameSessionQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGameSessionQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GameSessionQueue m_gameSessionQueue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
