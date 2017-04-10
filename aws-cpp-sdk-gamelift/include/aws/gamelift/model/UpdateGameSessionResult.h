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
#include <aws/gamelift/model/GameSession.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateGameSessionResult
  {
  public:
    UpdateGameSessionResult();
    UpdateGameSessionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateGameSessionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object that contains the updated game session metadata.</p>
     */
    inline const GameSession& GetGameSession() const{ return m_gameSession; }

    /**
     * <p>Object that contains the updated game session metadata.</p>
     */
    inline void SetGameSession(const GameSession& value) { m_gameSession = value; }

    /**
     * <p>Object that contains the updated game session metadata.</p>
     */
    inline void SetGameSession(GameSession&& value) { m_gameSession = std::move(value); }

    /**
     * <p>Object that contains the updated game session metadata.</p>
     */
    inline UpdateGameSessionResult& WithGameSession(const GameSession& value) { SetGameSession(value); return *this;}

    /**
     * <p>Object that contains the updated game session metadata.</p>
     */
    inline UpdateGameSessionResult& WithGameSession(GameSession&& value) { SetGameSession(std::move(value)); return *this;}

  private:
    GameSession m_gameSession;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
