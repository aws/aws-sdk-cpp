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
#include <aws/gamelift/model/GameSessionPlacement.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacementOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API StopGameSessionPlacementResult
  {
  public:
    StopGameSessionPlacementResult();
    StopGameSessionPlacementResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopGameSessionPlacementResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object that describes the canceled game session placement, with Cancelled
     * status and an end time stamp. </p>
     */
    inline const GameSessionPlacement& GetGameSessionPlacement() const{ return m_gameSessionPlacement; }

    /**
     * <p>Object that describes the canceled game session placement, with Cancelled
     * status and an end time stamp. </p>
     */
    inline void SetGameSessionPlacement(const GameSessionPlacement& value) { m_gameSessionPlacement = value; }

    /**
     * <p>Object that describes the canceled game session placement, with Cancelled
     * status and an end time stamp. </p>
     */
    inline void SetGameSessionPlacement(GameSessionPlacement&& value) { m_gameSessionPlacement = std::move(value); }

    /**
     * <p>Object that describes the canceled game session placement, with Cancelled
     * status and an end time stamp. </p>
     */
    inline StopGameSessionPlacementResult& WithGameSessionPlacement(const GameSessionPlacement& value) { SetGameSessionPlacement(value); return *this;}

    /**
     * <p>Object that describes the canceled game session placement, with Cancelled
     * status and an end time stamp. </p>
     */
    inline StopGameSessionPlacementResult& WithGameSessionPlacement(GameSessionPlacement&& value) { SetGameSessionPlacement(std::move(value)); return *this;}

  private:
    GameSessionPlacement m_gameSessionPlacement;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
