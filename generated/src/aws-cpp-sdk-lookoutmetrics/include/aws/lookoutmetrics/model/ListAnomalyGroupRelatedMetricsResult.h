﻿/**
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


    ///@{
    /**
     * <p>Aggregated details about the measures contributing to the anomaly group, and
     * the measures potentially impacted by the anomaly group.</p>
     */
    inline const Aws::Vector<InterMetricImpactDetails>& GetInterMetricImpactList() const{ return m_interMetricImpactList; }
    inline void SetInterMetricImpactList(const Aws::Vector<InterMetricImpactDetails>& value) { m_interMetricImpactList = value; }
    inline void SetInterMetricImpactList(Aws::Vector<InterMetricImpactDetails>&& value) { m_interMetricImpactList = std::move(value); }
    inline ListAnomalyGroupRelatedMetricsResult& WithInterMetricImpactList(const Aws::Vector<InterMetricImpactDetails>& value) { SetInterMetricImpactList(value); return *this;}
    inline ListAnomalyGroupRelatedMetricsResult& WithInterMetricImpactList(Aws::Vector<InterMetricImpactDetails>&& value) { SetInterMetricImpactList(std::move(value)); return *this;}
    inline ListAnomalyGroupRelatedMetricsResult& AddInterMetricImpactList(const InterMetricImpactDetails& value) { m_interMetricImpactList.push_back(value); return *this; }
    inline ListAnomalyGroupRelatedMetricsResult& AddInterMetricImpactList(InterMetricImpactDetails&& value) { m_interMetricImpactList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAnomalyGroupRelatedMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAnomalyGroupRelatedMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAnomalyGroupRelatedMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAnomalyGroupRelatedMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAnomalyGroupRelatedMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAnomalyGroupRelatedMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InterMetricImpactDetails> m_interMetricImpactList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
