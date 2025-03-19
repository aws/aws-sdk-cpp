/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/TimeSeriesSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListTimeSeriesResult
  {
  public:
    AWS_IOTSITEWISE_API ListTimeSeriesResult() = default;
    AWS_IOTSITEWISE_API ListTimeSeriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListTimeSeriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One or more time series summaries to list.</p>
     */
    inline const Aws::Vector<TimeSeriesSummary>& GetTimeSeriesSummaries() const { return m_timeSeriesSummaries; }
    template<typename TimeSeriesSummariesT = Aws::Vector<TimeSeriesSummary>>
    void SetTimeSeriesSummaries(TimeSeriesSummariesT&& value) { m_timeSeriesSummariesHasBeenSet = true; m_timeSeriesSummaries = std::forward<TimeSeriesSummariesT>(value); }
    template<typename TimeSeriesSummariesT = Aws::Vector<TimeSeriesSummary>>
    ListTimeSeriesResult& WithTimeSeriesSummaries(TimeSeriesSummariesT&& value) { SetTimeSeriesSummaries(std::forward<TimeSeriesSummariesT>(value)); return *this;}
    template<typename TimeSeriesSummariesT = TimeSeriesSummary>
    ListTimeSeriesResult& AddTimeSeriesSummaries(TimeSeriesSummariesT&& value) { m_timeSeriesSummariesHasBeenSet = true; m_timeSeriesSummaries.emplace_back(std::forward<TimeSeriesSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTimeSeriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTimeSeriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TimeSeriesSummary> m_timeSeriesSummaries;
    bool m_timeSeriesSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
