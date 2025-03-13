/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/MetricValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/ForecastResult.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetUsageForecastResult
  {
  public:
    AWS_COSTEXPLORER_API GetUsageForecastResult() = default;
    AWS_COSTEXPLORER_API GetUsageForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetUsageForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>How much you're forecasted to use over the forecast period.</p>
     */
    inline const MetricValue& GetTotal() const { return m_total; }
    template<typename TotalT = MetricValue>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = MetricValue>
    GetUsageForecastResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline const Aws::Vector<ForecastResult>& GetForecastResultsByTime() const { return m_forecastResultsByTime; }
    template<typename ForecastResultsByTimeT = Aws::Vector<ForecastResult>>
    void SetForecastResultsByTime(ForecastResultsByTimeT&& value) { m_forecastResultsByTimeHasBeenSet = true; m_forecastResultsByTime = std::forward<ForecastResultsByTimeT>(value); }
    template<typename ForecastResultsByTimeT = Aws::Vector<ForecastResult>>
    GetUsageForecastResult& WithForecastResultsByTime(ForecastResultsByTimeT&& value) { SetForecastResultsByTime(std::forward<ForecastResultsByTimeT>(value)); return *this;}
    template<typename ForecastResultsByTimeT = ForecastResult>
    GetUsageForecastResult& AddForecastResultsByTime(ForecastResultsByTimeT&& value) { m_forecastResultsByTimeHasBeenSet = true; m_forecastResultsByTime.emplace_back(std::forward<ForecastResultsByTimeT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUsageForecastResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MetricValue m_total;
    bool m_totalHasBeenSet = false;

    Aws::Vector<ForecastResult> m_forecastResultsByTime;
    bool m_forecastResultsByTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
