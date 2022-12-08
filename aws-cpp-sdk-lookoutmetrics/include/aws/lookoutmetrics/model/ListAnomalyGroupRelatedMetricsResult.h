/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/InterMetricImpactDetails.h>
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
  class ListAnomalyGroupRelatedMetricsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupRelatedMetricsResult();
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupRelatedMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupRelatedMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline const Aws::Vector<InterMetricImpactDetails>& GetInterMetricImpactList() const{ return m_interMetricImpactList; }

    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline void SetInterMetricImpactList(const Aws::Vector<InterMetricImpactDetails>& value) { m_interMetricImpactList = value; }

    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline void SetInterMetricImpactList(Aws::Vector<InterMetricImpactDetails>&& value) { m_interMetricImpactList = std::move(value); }

    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline ListAnomalyGroupRelatedMetricsResult& WithInterMetricImpactList(const Aws::Vector<InterMetricImpactDetails>& value) { SetInterMetricImpactList(value); return *this;}

    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline ListAnomalyGroupRelatedMetricsResult& WithInterMetricImpactList(Aws::Vector<InterMetricImpactDetails>&& value) { SetInterMetricImpactList(std::move(value)); return *this;}

    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline ListAnomalyGroupRelatedMetricsResult& AddInterMetricImpactList(const InterMetricImpactDetails& value) { m_interMetricImpactList.push_back(value); return *this; }

    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline ListAnomalyGroupRelatedMetricsResult& AddInterMetricImpactList(InterMetricImpactDetails&& value) { m_interMetricImpactList.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupRelatedMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupRelatedMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupRelatedMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InterMetricImpactDetails> m_interMetricImpactList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
