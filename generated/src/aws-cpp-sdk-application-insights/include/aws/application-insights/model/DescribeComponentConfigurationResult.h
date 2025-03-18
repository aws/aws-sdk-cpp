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
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationResult() = default;
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline bool GetMonitor() const { return m_monitor; }
    inline void SetMonitor(bool value) { m_monitorHasBeenSet = true; m_monitor = value; }
    inline DescribeComponentConfigurationResult& WithMonitor(bool value) { SetMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_CORE</code>, <code>DOT_NET_WORKER</code>,
     * <code>DOT_NET_WEB</code>, <code>SQL_SERVER</code>, and <code>DEFAULT</code> </p>
     */
    inline Tier GetTier() const { return m_tier; }
    inline void SetTier(Tier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline DescribeComponentConfigurationResult& WithTier(Tier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline const Aws::String& GetComponentConfiguration() const { return m_componentConfiguration; }
    template<typename ComponentConfigurationT = Aws::String>
    void SetComponentConfiguration(ComponentConfigurationT&& value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration = std::forward<ComponentConfigurationT>(value); }
    template<typename ComponentConfigurationT = Aws::String>
    DescribeComponentConfigurationResult& WithComponentConfiguration(ComponentConfigurationT&& value) { SetComponentConfiguration(std::forward<ComponentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComponentConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_monitor{false};
    bool m_monitorHasBeenSet = false;

    Tier m_tier{Tier::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_componentConfiguration;
    bool m_componentConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
