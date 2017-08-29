/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateMatchmakingConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateMatchmakingConfigurationResult
  {
  public:
    UpdateMatchmakingConfigurationResult();
    UpdateMatchmakingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMatchmakingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object that describes the updated matchmaking configuration.</p>
     */
    inline const MatchmakingConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Object that describes the updated matchmaking configuration.</p>
     */
    inline void SetConfiguration(const MatchmakingConfiguration& value) { m_configuration = value; }

    /**
     * <p>Object that describes the updated matchmaking configuration.</p>
     */
    inline void SetConfiguration(MatchmakingConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>Object that describes the updated matchmaking configuration.</p>
     */
    inline UpdateMatchmakingConfigurationResult& WithConfiguration(const MatchmakingConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Object that describes the updated matchmaking configuration.</p>
     */
    inline UpdateMatchmakingConfigurationResult& WithConfiguration(MatchmakingConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    MatchmakingConfiguration m_configuration;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
