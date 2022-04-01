﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacementOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API StartGameSessionPlacementResult
  {
  public:
    StartGameSessionPlacementResult();
    StartGameSessionPlacementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartGameSessionPlacementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object that describes the newly created game session placement. This object
     * includes all the information provided in the request, as well as start/end time
     * stamps and placement status. </p>
     */
    inline const GameSessionPlacement& GetGameSessionPlacement() const{ return m_gameSessionPlacement; }

    /**
     * <p>Object that describes the newly created game session placement. This object
     * includes all the information provided in the request, as well as start/end time
     * stamps and placement status. </p>
     */
    inline void SetGameSessionPlacement(const GameSessionPlacement& value) { m_gameSessionPlacement = value; }

    /**
     * <p>Object that describes the newly created game session placement. This object
     * includes all the information provided in the request, as well as start/end time
     * stamps and placement status. </p>
     */
    inline void SetGameSessionPlacement(GameSessionPlacement&& value) { m_gameSessionPlacement = std::move(value); }

    /**
     * <p>Object that describes the newly created game session placement. This object
     * includes all the information provided in the request, as well as start/end time
     * stamps and placement status. </p>
     */
    inline StartGameSessionPlacementResult& WithGameSessionPlacement(const GameSessionPlacement& value) { SetGameSessionPlacement(value); return *this;}

    /**
     * <p>Object that describes the newly created game session placement. This object
     * includes all the information provided in the request, as well as start/end time
     * stamps and placement status. </p>
     */
    inline StartGameSessionPlacementResult& WithGameSessionPlacement(GameSessionPlacement&& value) { SetGameSessionPlacement(std::move(value)); return *this;}

  private:

    GameSessionPlacement m_gameSessionPlacement;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
