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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/TimeBasedAutoScalingConfiguration.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeTimeBasedAutoScaling</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeTimeBasedAutoScalingResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeTimeBasedAutoScalingResult
  {
  public:
    DescribeTimeBasedAutoScalingResult();
    DescribeTimeBasedAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTimeBasedAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline const Aws::Vector<TimeBasedAutoScalingConfiguration>& GetTimeBasedAutoScalingConfigurations() const{ return m_timeBasedAutoScalingConfigurations; }

    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline void SetTimeBasedAutoScalingConfigurations(const Aws::Vector<TimeBasedAutoScalingConfiguration>& value) { m_timeBasedAutoScalingConfigurations = value; }

    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline void SetTimeBasedAutoScalingConfigurations(Aws::Vector<TimeBasedAutoScalingConfiguration>&& value) { m_timeBasedAutoScalingConfigurations = std::move(value); }

    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline DescribeTimeBasedAutoScalingResult& WithTimeBasedAutoScalingConfigurations(const Aws::Vector<TimeBasedAutoScalingConfiguration>& value) { SetTimeBasedAutoScalingConfigurations(value); return *this;}

    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline DescribeTimeBasedAutoScalingResult& WithTimeBasedAutoScalingConfigurations(Aws::Vector<TimeBasedAutoScalingConfiguration>&& value) { SetTimeBasedAutoScalingConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline DescribeTimeBasedAutoScalingResult& AddTimeBasedAutoScalingConfigurations(const TimeBasedAutoScalingConfiguration& value) { m_timeBasedAutoScalingConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of <code>TimeBasedAutoScalingConfiguration</code> objects that
     * describe the configuration for the specified instances.</p>
     */
    inline DescribeTimeBasedAutoScalingResult& AddTimeBasedAutoScalingConfigurations(TimeBasedAutoScalingConfiguration&& value) { m_timeBasedAutoScalingConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TimeBasedAutoScalingConfiguration> m_timeBasedAutoScalingConfigurations;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
