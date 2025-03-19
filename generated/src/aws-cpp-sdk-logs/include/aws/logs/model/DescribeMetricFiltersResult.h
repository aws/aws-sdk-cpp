/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/MetricFilter.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeMetricFiltersResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeMetricFiltersResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeMetricFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeMetricFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metric filters.</p>
     */
    inline const Aws::Vector<MetricFilter>& GetMetricFilters() const { return m_metricFilters; }
    template<typename MetricFiltersT = Aws::Vector<MetricFilter>>
    void SetMetricFilters(MetricFiltersT&& value) { m_metricFiltersHasBeenSet = true; m_metricFilters = std::forward<MetricFiltersT>(value); }
    template<typename MetricFiltersT = Aws::Vector<MetricFilter>>
    DescribeMetricFiltersResult& WithMetricFilters(MetricFiltersT&& value) { SetMetricFilters(std::forward<MetricFiltersT>(value)); return *this;}
    template<typename MetricFiltersT = MetricFilter>
    DescribeMetricFiltersResult& AddMetricFilters(MetricFiltersT&& value) { m_metricFiltersHasBeenSet = true; m_metricFilters.emplace_back(std::forward<MetricFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMetricFiltersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMetricFiltersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricFilter> m_metricFilters;
    bool m_metricFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
