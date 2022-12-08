/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorSummary.h>
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
  class ListAnomalyDetectorsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyDetectorsResult();
    AWS_LOOKOUTMETRICS_API ListAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline const Aws::Vector<AnomalyDetectorSummary>& GetAnomalyDetectorSummaryList() const{ return m_anomalyDetectorSummaryList; }

    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline void SetAnomalyDetectorSummaryList(const Aws::Vector<AnomalyDetectorSummary>& value) { m_anomalyDetectorSummaryList = value; }

    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline void SetAnomalyDetectorSummaryList(Aws::Vector<AnomalyDetectorSummary>&& value) { m_anomalyDetectorSummaryList = std::move(value); }

    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline ListAnomalyDetectorsResult& WithAnomalyDetectorSummaryList(const Aws::Vector<AnomalyDetectorSummary>& value) { SetAnomalyDetectorSummaryList(value); return *this;}

    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline ListAnomalyDetectorsResult& WithAnomalyDetectorSummaryList(Aws::Vector<AnomalyDetectorSummary>&& value) { SetAnomalyDetectorSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline ListAnomalyDetectorsResult& AddAnomalyDetectorSummaryList(const AnomalyDetectorSummary& value) { m_anomalyDetectorSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of anomaly detectors in the account in the current region.</p>
     */
    inline ListAnomalyDetectorsResult& AddAnomalyDetectorSummaryList(AnomalyDetectorSummary&& value) { m_anomalyDetectorSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline ListAnomalyDetectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline ListAnomalyDetectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline ListAnomalyDetectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AnomalyDetectorSummary> m_anomalyDetectorSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
