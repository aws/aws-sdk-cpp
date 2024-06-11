﻿/**
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


    ///@{
    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline bool GetMonitor() const{ return m_monitor; }
    inline void SetMonitor(bool value) { m_monitor = value; }
    inline DescribeComponentConfigurationResult& WithMonitor(bool value) { SetMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_CORE</code>, <code>DOT_NET_WORKER</code>,
     * <code>DOT_NET_WEB</code>, <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline const Tier& GetTier() const{ return m_tier; }
    inline void SetTier(const Tier& value) { m_tier = value; }
    inline void SetTier(Tier&& value) { m_tier = std::move(value); }
    inline DescribeComponentConfigurationResult& WithTier(const Tier& value) { SetTier(value); return *this;}
    inline DescribeComponentConfigurationResult& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline const Aws::String& GetComponentConfiguration() const{ return m_componentConfiguration; }
    inline void SetComponentConfiguration(const Aws::String& value) { m_componentConfiguration = value; }
    inline void SetComponentConfiguration(Aws::String&& value) { m_componentConfiguration = std::move(value); }
    inline void SetComponentConfiguration(const char* value) { m_componentConfiguration.assign(value); }
    inline DescribeComponentConfigurationResult& WithComponentConfiguration(const Aws::String& value) { SetComponentConfiguration(value); return *this;}
    inline DescribeComponentConfigurationResult& WithComponentConfiguration(Aws::String&& value) { SetComponentConfiguration(std::move(value)); return *this;}
    inline DescribeComponentConfigurationResult& WithComponentConfiguration(const char* value) { SetComponentConfiguration(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeComponentConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeComponentConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeComponentConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_monitor;

    Tier m_tier;

    Aws::String m_componentConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
