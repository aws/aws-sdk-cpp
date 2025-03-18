/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeComponentConfigurationRecommendationResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationRecommendationResult() = default;
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline const Aws::String& GetComponentConfiguration() const { return m_componentConfiguration; }
    template<typename ComponentConfigurationT = Aws::String>
    void SetComponentConfiguration(ComponentConfigurationT&& value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration = std::forward<ComponentConfigurationT>(value); }
    template<typename ComponentConfigurationT = Aws::String>
    DescribeComponentConfigurationRecommendationResult& WithComponentConfiguration(ComponentConfigurationT&& value) { SetComponentConfiguration(std::forward<ComponentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComponentConfigurationRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentConfiguration;
    bool m_componentConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
