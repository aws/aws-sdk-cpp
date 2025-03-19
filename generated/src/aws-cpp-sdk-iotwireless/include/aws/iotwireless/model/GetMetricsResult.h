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
    AWS_IOTWIRELESS_API GetMetricsResult() = default;
    AWS_IOTWIRELESS_API GetMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of summary metrics that were retrieved.</p>
     */
    inline const Aws::Vector<SummaryMetricQueryResult>& GetSummaryMetricQueryResults() const { return m_summaryMetricQueryResults; }
    template<typename SummaryMetricQueryResultsT = Aws::Vector<SummaryMetricQueryResult>>
    void SetSummaryMetricQueryResults(SummaryMetricQueryResultsT&& value) { m_summaryMetricQueryResultsHasBeenSet = true; m_summaryMetricQueryResults = std::forward<SummaryMetricQueryResultsT>(value); }
    template<typename SummaryMetricQueryResultsT = Aws::Vector<SummaryMetricQueryResult>>
    GetMetricsResult& WithSummaryMetricQueryResults(SummaryMetricQueryResultsT&& value) { SetSummaryMetricQueryResults(std::forward<SummaryMetricQueryResultsT>(value)); return *this;}
    template<typename SummaryMetricQueryResultsT = SummaryMetricQueryResult>
    GetMetricsResult& AddSummaryMetricQueryResults(SummaryMetricQueryResultsT&& value) { m_summaryMetricQueryResultsHasBeenSet = true; m_summaryMetricQueryResults.emplace_back(std::forward<SummaryMetricQueryResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SummaryMetricQueryResult> m_summaryMetricQueryResults;
    bool m_summaryMetricQueryResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
