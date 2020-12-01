/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

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
namespace DevOpsGuru
{
namespace Model
{
  class AWS_DEVOPSGURU_API DescribeAccountHealthResult
  {
  public:
    DescribeAccountHealthResult();
    DescribeAccountHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAccountHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline int GetMetricsAnalyzed() const{ return m_metricsAnalyzed; }

    
    inline void SetMetricsAnalyzed(int value) { m_metricsAnalyzed = value; }

    
    inline DescribeAccountHealthResult& WithMetricsAnalyzed(int value) { SetMetricsAnalyzed(value); return *this;}


    
    inline int GetOpenProactiveInsights() const{ return m_openProactiveInsights; }

    
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsights = value; }

    
    inline DescribeAccountHealthResult& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}


    
    inline int GetOpenReactiveInsights() const{ return m_openReactiveInsights; }

    
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsights = value; }

    
    inline DescribeAccountHealthResult& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}

  private:

    int m_metricsAnalyzed;

    int m_openProactiveInsights;

    int m_openReactiveInsights;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
