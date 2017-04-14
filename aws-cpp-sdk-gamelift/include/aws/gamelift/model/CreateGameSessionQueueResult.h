/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueueOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateGameSessionQueueResult
  {
  public:
    CreateGameSessionQueueResult();
    CreateGameSessionQueueResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGameSessionQueueResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object that describes the newly created game session queue.</p>
     */
    inline const GameSessionQueue& GetGameSessionQueue() const{ return m_gameSessionQueue; }

    /**
     * <p>Object that describes the newly created game session queue.</p>
     */
    inline void SetGameSessionQueue(const GameSessionQueue& value) { m_gameSessionQueue = value; }

    /**
     * <p>Object that describes the newly created game session queue.</p>
     */
    inline void SetGameSessionQueue(GameSessionQueue&& value) { m_gameSessionQueue = std::move(value); }

    /**
     * <p>Object that describes the newly created game session queue.</p>
     */
    inline CreateGameSessionQueueResult& WithGameSessionQueue(const GameSessionQueue& value) { SetGameSessionQueue(value); return *this;}

    /**
     * <p>Object that describes the newly created game session queue.</p>
     */
    inline CreateGameSessionQueueResult& WithGameSessionQueue(GameSessionQueue&& value) { SetGameSessionQueue(std::move(value)); return *this;}

  private:
    GameSessionQueue m_gameSessionQueue;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
