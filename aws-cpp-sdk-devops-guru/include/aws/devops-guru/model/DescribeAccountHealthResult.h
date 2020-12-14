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


    /**
     * <p> An integer that specifies the number of open reactive insights in your AWS
     * account. </p>
     */
    inline int GetOpenReactiveInsights() const{ return m_openReactiveInsights; }

    /**
     * <p> An integer that specifies the number of open reactive insights in your AWS
     * account. </p>
     */
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsights = value; }

    /**
     * <p> An integer that specifies the number of open reactive insights in your AWS
     * account. </p>
     */
    inline DescribeAccountHealthResult& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}


    /**
     * <p> An integer that specifies the number of open proactive insights in your AWS
     * account. </p>
     */
    inline int GetOpenProactiveInsights() const{ return m_openProactiveInsights; }

    /**
     * <p> An integer that specifies the number of open proactive insights in your AWS
     * account. </p>
     */
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsights = value; }

    /**
     * <p> An integer that specifies the number of open proactive insights in your AWS
     * account. </p>
     */
    inline DescribeAccountHealthResult& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}


    /**
     * <p> An integer that specifies the number of metrics that have been analyzed in
     * your AWS account. </p>
     */
    inline int GetMetricsAnalyzed() const{ return m_metricsAnalyzed; }

    /**
     * <p> An integer that specifies the number of metrics that have been analyzed in
     * your AWS account. </p>
     */
    inline void SetMetricsAnalyzed(int value) { m_metricsAnalyzed = value; }

    /**
     * <p> An integer that specifies the number of metrics that have been analyzed in
     * your AWS account. </p>
     */
    inline DescribeAccountHealthResult& WithMetricsAnalyzed(int value) { SetMetricsAnalyzed(value); return *this;}

  private:

    int m_openReactiveInsights;

    int m_openProactiveInsights;

    int m_metricsAnalyzed;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
