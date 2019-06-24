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
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationResult
  {
  public:
    DescribeComponentConfigurationResult();
    DescribeComponentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeComponentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline bool GetMonitor() const{ return m_monitor; }

    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline void SetMonitor(bool value) { m_monitor = value; }

    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline DescribeComponentConfigurationResult& WithMonitor(bool value) { SetMonitor(value); return *this;}


    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline void SetTier(const Aws::String& value) { m_tier = value; }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline void SetTier(Aws::String&& value) { m_tier = std::move(value); }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline void SetTier(const char* value) { m_tier.assign(value); }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline DescribeComponentConfigurationResult& WithTier(const Aws::String& value) { SetTier(value); return *this;}

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline DescribeComponentConfigurationResult& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline DescribeComponentConfigurationResult& WithTier(const char* value) { SetTier(value); return *this;}


    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline const Aws::String& GetComponentConfiguration() const{ return m_componentConfiguration; }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline void SetComponentConfiguration(const Aws::String& value) { m_componentConfiguration = value; }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline void SetComponentConfiguration(Aws::String&& value) { m_componentConfiguration = std::move(value); }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline void SetComponentConfiguration(const char* value) { m_componentConfiguration.assign(value); }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline DescribeComponentConfigurationResult& WithComponentConfiguration(const Aws::String& value) { SetComponentConfiguration(value); return *this;}

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline DescribeComponentConfigurationResult& WithComponentConfiguration(Aws::String&& value) { SetComponentConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline DescribeComponentConfigurationResult& WithComponentConfiguration(const char* value) { SetComponentConfiguration(value); return *this;}

  private:

    bool m_monitor;

    Aws::String m_tier;

    Aws::String m_componentConfiguration;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
