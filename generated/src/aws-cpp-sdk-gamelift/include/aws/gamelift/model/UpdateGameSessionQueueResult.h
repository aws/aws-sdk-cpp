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
  class UpdateGameSessionQueueResult
  {
  public:
    AWS_GAMELIFT_API UpdateGameSessionQueueResult() = default;
    AWS_GAMELIFT_API UpdateGameSessionQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateGameSessionQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the newly updated game session queue.</p>
     */
    inline const GameSessionQueue& GetGameSessionQueue() const { return m_gameSessionQueue; }
    template<typename GameSessionQueueT = GameSessionQueue>
    void SetGameSessionQueue(GameSessionQueueT&& value) { m_gameSessionQueueHasBeenSet = true; m_gameSessionQueue = std::forward<GameSessionQueueT>(value); }
    template<typename GameSessionQueueT = GameSessionQueue>
    UpdateGameSessionQueueResult& WithGameSessionQueue(GameSessionQueueT&& value) { SetGameSessionQueue(std::forward<GameSessionQueueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateGameSessionQueueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GameSessionQueue m_gameSessionQueue;
    bool m_gameSessionQueueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
