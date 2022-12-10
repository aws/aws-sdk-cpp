/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/Tier.h>
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
  class DescribeComponentConfigurationResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationResult();
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <code>DOT_NET_CORE</code>, <code>DOT_NET_WORKER</code>,
     * <code>DOT_NET_WEB</code>, <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline const Tier& GetTier() const{ return m_tier; }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_CORE</code>, <code>DOT_NET_WORKER</code>,
     * <code>DOT_NET_WEB</code>, <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline void SetTier(const Tier& value) { m_tier = value; }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_CORE</code>, <code>DOT_NET_WORKER</code>,
     * <code>DOT_NET_WEB</code>, <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline void SetTier(Tier&& value) { m_tier = std::move(value); }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_CORE</code>, <code>DOT_NET_WORKER</code>,
     * <code>DOT_NET_WEB</code>, <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline DescribeComponentConfigurationResult& WithTier(const Tier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_CORE</code>, <code>DOT_NET_WORKER</code>,
     * <code>DOT_NET_WEB</code>, <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline DescribeComponentConfigurationResult& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}


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

    Tier m_tier;

    Aws::String m_componentConfiguration;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
