/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/MatchmakingConfiguration.h>
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


    /**
     * <p>Object that describes the newly created matchmaking configuration.</p>
     */
    inline const MatchmakingConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Object that describes the newly created matchmaking configuration.</p>
     */
    inline void SetConfiguration(const MatchmakingConfiguration& value) { m_configuration = value; }

    /**
     * <p>Object that describes the newly created matchmaking configuration.</p>
     */
    inline void SetConfiguration(MatchmakingConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>Object that describes the newly created matchmaking configuration.</p>
     */
    inline CreateMatchmakingConfigurationResult& WithConfiguration(const MatchmakingConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Object that describes the newly created matchmaking configuration.</p>
     */
    inline CreateMatchmakingConfigurationResult& WithConfiguration(MatchmakingConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    MatchmakingConfiguration m_configuration;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
