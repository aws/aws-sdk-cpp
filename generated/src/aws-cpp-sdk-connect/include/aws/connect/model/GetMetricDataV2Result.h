/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/MetricResultV2.h>
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
namespace Connect
{
namespace Model
{
  class GetMetricDataV2Result
  {
  public:
    AWS_CONNECT_API GetMetricDataV2Result() = default;
    AWS_CONNECT_API GetMetricDataV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetMetricDataV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetMetricDataV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline const Aws::Vector<MetricResultV2>& GetMetricResults() const { return m_metricResults; }
    template<typename MetricResultsT = Aws::Vector<MetricResultV2>>
    void SetMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults = std::forward<MetricResultsT>(value); }
    template<typename MetricResultsT = Aws::Vector<MetricResultV2>>
    GetMetricDataV2Result& WithMetricResults(MetricResultsT&& value) { SetMetricResults(std::forward<MetricResultsT>(value)); return *this;}
    template<typename MetricResultsT = MetricResultV2>
    GetMetricDataV2Result& AddMetricResults(MetricResultsT&& value) { m_metricResultsHasBeenSet = true; m_metricResults.emplace_back(std::forward<MetricResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMetricDataV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MetricResultV2> m_metricResults;
    bool m_metricResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
