﻿/**
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
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationRecommendationResult();
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline const Aws::String& GetComponentConfiguration() const{ return m_componentConfiguration; }

    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline void SetComponentConfiguration(const Aws::String& value) { m_componentConfiguration = value; }

    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline void SetComponentConfiguration(Aws::String&& value) { m_componentConfiguration = std::move(value); }

    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline void SetComponentConfiguration(const char* value) { m_componentConfiguration.assign(value); }

    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline DescribeComponentConfigurationRecommendationResult& WithComponentConfiguration(const Aws::String& value) { SetComponentConfiguration(value); return *this;}

    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline DescribeComponentConfigurationRecommendationResult& WithComponentConfiguration(Aws::String&& value) { SetComponentConfiguration(std::move(value)); return *this;}

    /**
     * <p>The recommended configuration settings of the component. The value is the
     * escaped JSON of the configuration.</p>
     */
    inline DescribeComponentConfigurationRecommendationResult& WithComponentConfiguration(const char* value) { SetComponentConfiguration(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeComponentConfigurationRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeComponentConfigurationRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeComponentConfigurationRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_componentConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
