/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/MatchmakingConfiguration.h>
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
  class CreateMatchmakingConfigurationResult
  {
  public:
    AWS_GAMELIFT_API CreateMatchmakingConfigurationResult();
    AWS_GAMELIFT_API CreateMatchmakingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateMatchmakingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Object that describes the newly created matchmaking configuration.</p>
     */
    inline const MatchmakingConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const MatchmakingConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(MatchmakingConfiguration&& value) { m_configuration = std::move(value); }
    inline CreateMatchmakingConfigurationResult& WithConfiguration(const MatchmakingConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateMatchmakingConfigurationResult& WithConfiguration(MatchmakingConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMatchmakingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMatchmakingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMatchmakingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MatchmakingConfiguration m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
