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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeRuntimeConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeRuntimeConfigurationResult
  {
  public:
    DescribeRuntimeConfigurationResult();
    DescribeRuntimeConfigurationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRuntimeConfigurationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Instructions describing how server processes should be launched and
     * maintained on each instance in the fleet.</p>
     */
    inline const RuntimeConfiguration& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>Instructions describing how server processes should be launched and
     * maintained on each instance in the fleet.</p>
     */
    inline void SetRuntimeConfiguration(const RuntimeConfiguration& value) { m_runtimeConfiguration = value; }

    /**
     * <p>Instructions describing how server processes should be launched and
     * maintained on each instance in the fleet.</p>
     */
    inline void SetRuntimeConfiguration(RuntimeConfiguration&& value) { m_runtimeConfiguration = std::move(value); }

    /**
     * <p>Instructions describing how server processes should be launched and
     * maintained on each instance in the fleet.</p>
     */
    inline DescribeRuntimeConfigurationResult& WithRuntimeConfiguration(const RuntimeConfiguration& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>Instructions describing how server processes should be launched and
     * maintained on each instance in the fleet.</p>
     */
    inline DescribeRuntimeConfigurationResult& WithRuntimeConfiguration(RuntimeConfiguration&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}

  private:
    RuntimeConfiguration m_runtimeConfiguration;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
