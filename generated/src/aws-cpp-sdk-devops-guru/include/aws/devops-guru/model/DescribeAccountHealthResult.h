/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class DescribeAccountHealthResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeAccountHealthResult() = default;
    AWS_DEVOPSGURU_API DescribeAccountHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeAccountHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An integer that specifies the number of open reactive insights in your
     * Amazon Web Services account. </p>
     */
    inline int GetOpenReactiveInsights() const { return m_openReactiveInsights; }
    inline void SetOpenReactiveInsights(int value) { m_openReactiveInsightsHasBeenSet = true; m_openReactiveInsights = value; }
    inline DescribeAccountHealthResult& WithOpenReactiveInsights(int value) { SetOpenReactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An integer that specifies the number of open proactive insights in your
     * Amazon Web Services account. </p>
     */
    inline int GetOpenProactiveInsights() const { return m_openProactiveInsights; }
    inline void SetOpenProactiveInsights(int value) { m_openProactiveInsightsHasBeenSet = true; m_openProactiveInsights = value; }
    inline DescribeAccountHealthResult& WithOpenProactiveInsights(int value) { SetOpenProactiveInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An integer that specifies the number of metrics that have been analyzed in
     * your Amazon Web Services account. </p>
     */
    inline int GetMetricsAnalyzed() const { return m_metricsAnalyzed; }
    inline void SetMetricsAnalyzed(int value) { m_metricsAnalyzedHasBeenSet = true; m_metricsAnalyzed = value; }
    inline DescribeAccountHealthResult& WithMetricsAnalyzed(int value) { SetMetricsAnalyzed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon DevOps Guru resource analysis hours billed to the
     * current Amazon Web Services account in the last hour. </p>
     */
    inline long long GetResourceHours() const { return m_resourceHours; }
    inline void SetResourceHours(long long value) { m_resourceHoursHasBeenSet = true; m_resourceHours = value; }
    inline DescribeAccountHealthResult& WithResourceHours(long long value) { SetResourceHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Number of resources that DevOps Guru is monitoring in your Amazon Web
     * Services account. </p>
     */
    inline long long GetAnalyzedResourceCount() const { return m_analyzedResourceCount; }
    inline void SetAnalyzedResourceCount(long long value) { m_analyzedResourceCountHasBeenSet = true; m_analyzedResourceCount = value; }
    inline DescribeAccountHealthResult& WithAnalyzedResourceCount(long long value) { SetAnalyzedResourceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountHealthResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_openReactiveInsights{0};
    bool m_openReactiveInsightsHasBeenSet = false;

    int m_openProactiveInsights{0};
    bool m_openProactiveInsightsHasBeenSet = false;

    int m_metricsAnalyzed{0};
    bool m_metricsAnalyzedHasBeenSet = false;

    long long m_resourceHours{0};
    bool m_resourceHoursHasBeenSet = false;

    long long m_analyzedResourceCount{0};
    bool m_analyzedResourceCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
