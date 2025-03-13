/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameSessionPlacement.h>
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
  class DescribeGameSessionPlacementResult
  {
  public:
    AWS_GAMELIFT_API DescribeGameSessionPlacementResult() = default;
    AWS_GAMELIFT_API DescribeGameSessionPlacementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeGameSessionPlacementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline const GameSessionPlacement& GetGameSessionPlacement() const { return m_gameSessionPlacement; }
    template<typename GameSessionPlacementT = GameSessionPlacement>
    void SetGameSessionPlacement(GameSessionPlacementT&& value) { m_gameSessionPlacementHasBeenSet = true; m_gameSessionPlacement = std::forward<GameSessionPlacementT>(value); }
    template<typename GameSessionPlacementT = GameSessionPlacement>
    DescribeGameSessionPlacementResult& WithGameSessionPlacement(GameSessionPlacementT&& value) { SetGameSessionPlacement(std::forward<GameSessionPlacementT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGameSessionPlacementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GameSessionPlacement m_gameSessionPlacement;
    bool m_gameSessionPlacementHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
