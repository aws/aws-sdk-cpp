﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/AnomalyGroupStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyGroupSummary.h>
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
  class ListAnomalyGroupSummariesResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupSummariesResult();
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline const Aws::Vector<AnomalyGroupSummary>& GetAnomalyGroupSummaryList() const{ return m_anomalyGroupSummaryList; }
    inline void SetAnomalyGroupSummaryList(const Aws::Vector<AnomalyGroupSummary>& value) { m_anomalyGroupSummaryList = value; }
    inline void SetAnomalyGroupSummaryList(Aws::Vector<AnomalyGroupSummary>&& value) { m_anomalyGroupSummaryList = std::move(value); }
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupSummaryList(const Aws::Vector<AnomalyGroupSummary>& value) { SetAnomalyGroupSummaryList(value); return *this;}
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupSummaryList(Aws::Vector<AnomalyGroupSummary>&& value) { SetAnomalyGroupSummaryList(std::move(value)); return *this;}
    inline ListAnomalyGroupSummariesResult& AddAnomalyGroupSummaryList(const AnomalyGroupSummary& value) { m_anomalyGroupSummaryList.push_back(value); return *this; }
    inline ListAnomalyGroupSummariesResult& AddAnomalyGroupSummaryList(AnomalyGroupSummary&& value) { m_anomalyGroupSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Aggregated details about the anomaly groups.</p>
     */
    inline const AnomalyGroupStatistics& GetAnomalyGroupStatistics() const{ return m_anomalyGroupStatistics; }
    inline void SetAnomalyGroupStatistics(const AnomalyGroupStatistics& value) { m_anomalyGroupStatistics = value; }
    inline void SetAnomalyGroupStatistics(AnomalyGroupStatistics&& value) { m_anomalyGroupStatistics = std::move(value); }
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupStatistics(const AnomalyGroupStatistics& value) { SetAnomalyGroupStatistics(value); return *this;}
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupStatistics(AnomalyGroupStatistics&& value) { SetAnomalyGroupStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAnomalyGroupSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAnomalyGroupSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAnomalyGroupSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAnomalyGroupSummariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAnomalyGroupSummariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAnomalyGroupSummariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyGroupSummary> m_anomalyGroupSummaryList;

    AnomalyGroupStatistics m_anomalyGroupStatistics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
