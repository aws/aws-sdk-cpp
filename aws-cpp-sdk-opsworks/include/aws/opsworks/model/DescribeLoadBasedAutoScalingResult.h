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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/LoadBasedAutoScalingConfiguration.h>

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
   * <p>Contains the response to a <code>DescribeLoadBasedAutoScaling</code>
   * request.</p>
   */
  class AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult
  {
  public:
    DescribeLoadBasedAutoScalingResult();
    DescribeLoadBasedAutoScalingResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLoadBasedAutoScalingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline const Aws::Vector<LoadBasedAutoScalingConfiguration>& GetLoadBasedAutoScalingConfigurations() const{ return m_loadBasedAutoScalingConfigurations; }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline void SetLoadBasedAutoScalingConfigurations(const Aws::Vector<LoadBasedAutoScalingConfiguration>& value) { m_loadBasedAutoScalingConfigurations = value; }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline void SetLoadBasedAutoScalingConfigurations(Aws::Vector<LoadBasedAutoScalingConfiguration>&& value) { m_loadBasedAutoScalingConfigurations = value; }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& WithLoadBasedAutoScalingConfigurations(const Aws::Vector<LoadBasedAutoScalingConfiguration>& value) { SetLoadBasedAutoScalingConfigurations(value); return *this;}

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& WithLoadBasedAutoScalingConfigurations(Aws::Vector<LoadBasedAutoScalingConfiguration>&& value) { SetLoadBasedAutoScalingConfigurations(value); return *this;}

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& AddLoadBasedAutoScalingConfigurations(const LoadBasedAutoScalingConfiguration& value) { m_loadBasedAutoScalingConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline DescribeLoadBasedAutoScalingResult& AddLoadBasedAutoScalingConfigurations(LoadBasedAutoScalingConfiguration&& value) { m_loadBasedAutoScalingConfigurations.push_back(value); return *this; }

  private:
    Aws::Vector<LoadBasedAutoScalingConfiguration> m_loadBasedAutoScalingConfigurations;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
