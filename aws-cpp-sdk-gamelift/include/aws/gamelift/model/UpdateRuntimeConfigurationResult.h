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
#include <aws/gamelift/model/RuntimeConfiguration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateRuntimeConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateRuntimeConfigurationResult
  {
  public:
    UpdateRuntimeConfigurationResult();
    UpdateRuntimeConfigurationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRuntimeConfigurationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The runtime configuration currently in force. If the update was successful,
     * this object matches the one in the request.</p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>The runtime configuration currently in force. If the update was successful,
     * this object matches the one in the request.</p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfiguration = value; }

    /**
     * <p>The runtime configuration currently in force. If the update was successful,
     * this object matches the one in the request.</p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration currently in force. If the update was successful,
     * this object matches the one in the request.</p>
     */
    inline UpdateRuntimeConfigurationResult& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration currently in force. If the update was successful,
     * this object matches the one in the request.</p>
     */
    inline UpdateRuntimeConfigurationResult& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}

  private:
    RuntimeConfiguration m_runtimeConfiguration;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
