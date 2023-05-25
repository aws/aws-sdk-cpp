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
    AWS_GAMELIFT_API DescribeGameSessionPlacementResult();
    AWS_GAMELIFT_API DescribeGameSessionPlacementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeGameSessionPlacementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline const GameSessionPlacement& GetGameSessionPlacement() const{ return m_gameSessionPlacement; }

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline void SetGameSessionPlacement(const GameSessionPlacement& value) { m_gameSessionPlacement = value; }

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline void SetGameSessionPlacement(GameSessionPlacement&& value) { m_gameSessionPlacement = std::move(value); }

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline DescribeGameSessionPlacementResult& WithGameSessionPlacement(const GameSessionPlacement& value) { SetGameSessionPlacement(value); return *this;}

    /**
     * <p>Object that describes the requested game session placement.</p>
     */
    inline DescribeGameSessionPlacementResult& WithGameSessionPlacement(GameSessionPlacement&& value) { SetGameSessionPlacement(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeGameSessionPlacementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeGameSessionPlacementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeGameSessionPlacementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GameSessionPlacement m_gameSessionPlacement;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
