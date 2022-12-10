/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/MetricSetSummary.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class ListMetricSetsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListMetricSetsResult();
    AWS_LOOKOUTMETRICS_API ListMetricSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListMetricSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline const Aws::Vector<MetricSetSummary>& GetMetricSetSummaryList() const{ return m_metricSetSummaryList; }

    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline void SetMetricSetSummaryList(const Aws::Vector<MetricSetSummary>& value) { m_metricSetSummaryList = value; }

    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline void SetMetricSetSummaryList(Aws::Vector<MetricSetSummary>&& value) { m_metricSetSummaryList = std::move(value); }

    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline ListMetricSetsResult& WithMetricSetSummaryList(const Aws::Vector<MetricSetSummary>& value) { SetMetricSetSummaryList(value); return *this;}

    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline ListMetricSetsResult& WithMetricSetSummaryList(Aws::Vector<MetricSetSummary>&& value) { SetMetricSetSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline ListMetricSetsResult& AddMetricSetSummaryList(const MetricSetSummary& value) { m_metricSetSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of the datasets in the AWS Region, with configuration details for
     * each.</p>
     */
    inline ListMetricSetsResult& AddMetricSetSummaryList(MetricSetSummary&& value) { m_metricSetSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline ListMetricSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline ListMetricSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the list call returns this token. To retrieve
     * the next set of results, use the token in the next list request. </p>
     */
    inline ListMetricSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MetricSetSummary> m_metricSetSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
