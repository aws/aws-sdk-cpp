/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/SummaryMetricQueryResult.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetMetricsResult
  {
  public:
    AWS_IOTWIRELESS_API GetMetricsResult();
    AWS_IOTWIRELESS_API GetMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline const Aws::Vector<SummaryMetricQueryResult>& GetSummaryMetricQueryResults() const{ return m_summaryMetricQueryResults; }

    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline void SetSummaryMetricQueryResults(const Aws::Vector<SummaryMetricQueryResult>& value) { m_summaryMetricQueryResults = value; }

    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline void SetSummaryMetricQueryResults(Aws::Vector<SummaryMetricQueryResult>&& value) { m_summaryMetricQueryResults = std::move(value); }

    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline GetMetricsResult& WithSummaryMetricQueryResults(const Aws::Vector<SummaryMetricQueryResult>& value) { SetSummaryMetricQueryResults(value); return *this;}

    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline GetMetricsResult& WithSummaryMetricQueryResults(Aws::Vector<SummaryMetricQueryResult>&& value) { SetSummaryMetricQueryResults(std::move(value)); return *this;}

    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline GetMetricsResult& AddSummaryMetricQueryResults(const SummaryMetricQueryResult& value) { m_summaryMetricQueryResults.push_back(value); return *this; }

    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline GetMetricsResult& AddSummaryMetricQueryResults(SummaryMetricQueryResult&& value) { m_summaryMetricQueryResults.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SummaryMetricQueryResult> m_summaryMetricQueryResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
