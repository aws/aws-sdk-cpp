/**
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


    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline const Aws::Vector<AnomalyGroupSummary>& GetAnomalyGroupSummaryList() const{ return m_anomalyGroupSummaryList; }

    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline void SetAnomalyGroupSummaryList(const Aws::Vector<AnomalyGroupSummary>& value) { m_anomalyGroupSummaryList = value; }

    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline void SetAnomalyGroupSummaryList(Aws::Vector<AnomalyGroupSummary>&& value) { m_anomalyGroupSummaryList = std::move(value); }

    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupSummaryList(const Aws::Vector<AnomalyGroupSummary>& value) { SetAnomalyGroupSummaryList(value); return *this;}

    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupSummaryList(Aws::Vector<AnomalyGroupSummary>&& value) { SetAnomalyGroupSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline ListAnomalyGroupSummariesResult& AddAnomalyGroupSummaryList(const AnomalyGroupSummary& value) { m_anomalyGroupSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of anomaly group summaries.</p>
     */
    inline ListAnomalyGroupSummariesResult& AddAnomalyGroupSummaryList(AnomalyGroupSummary&& value) { m_anomalyGroupSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>Aggregated details about the anomaly groups.</p>
     */
    inline const AnomalyGroupStatistics& GetAnomalyGroupStatistics() const{ return m_anomalyGroupStatistics; }

    /**
     * <p>Aggregated details about the anomaly groups.</p>
     */
    inline void SetAnomalyGroupStatistics(const AnomalyGroupStatistics& value) { m_anomalyGroupStatistics = value; }

    /**
     * <p>Aggregated details about the anomaly groups.</p>
     */
    inline void SetAnomalyGroupStatistics(AnomalyGroupStatistics&& value) { m_anomalyGroupStatistics = std::move(value); }

    /**
     * <p>Aggregated details about the anomaly groups.</p>
     */
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupStatistics(const AnomalyGroupStatistics& value) { SetAnomalyGroupStatistics(value); return *this;}

    /**
     * <p>Aggregated details about the anomaly groups.</p>
     */
    inline ListAnomalyGroupSummariesResult& WithAnomalyGroupStatistics(AnomalyGroupStatistics&& value) { SetAnomalyGroupStatistics(std::move(value)); return *this;}


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
    inline ListAnomalyGroupSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListAnomalyGroupSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AnomalyGroupSummary> m_anomalyGroupSummaryList;

    AnomalyGroupStatistics m_anomalyGroupStatistics;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
