/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/MetricValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_COSTEXPLORER_API GetUsageForecastResult
  {
  public:
    GetUsageForecastResult();
    GetUsageForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUsageForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>How much you're forecasted to use over the forecast period.</p>
     */
    inline const MetricValue& GetTotal() const{ return m_total; }

    /**
     * <p>How much you're forecasted to use over the forecast period.</p>
     */
    inline void SetTotal(const MetricValue& value) { m_total = value; }

    /**
     * <p>How much you're forecasted to use over the forecast period.</p>
     */
    inline void SetTotal(MetricValue&& value) { m_total = std::move(value); }

    /**
     * <p>How much you're forecasted to use over the forecast period.</p>
     */
    inline GetUsageForecastResult& WithTotal(const MetricValue& value) { SetTotal(value); return *this;}

    /**
     * <p>How much you're forecasted to use over the forecast period.</p>
     */
    inline GetUsageForecastResult& WithTotal(MetricValue&& value) { SetTotal(std::move(value)); return *this;}


    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline const Aws::Vector<ForecastResult>& GetForecastResultsByTime() const{ return m_forecastResultsByTime; }

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline void SetForecastResultsByTime(const Aws::Vector<ForecastResult>& value) { m_forecastResultsByTime = value; }

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline void SetForecastResultsByTime(Aws::Vector<ForecastResult>&& value) { m_forecastResultsByTime = std::move(value); }

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline GetUsageForecastResult& WithForecastResultsByTime(const Aws::Vector<ForecastResult>& value) { SetForecastResultsByTime(value); return *this;}

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline GetUsageForecastResult& WithForecastResultsByTime(Aws::Vector<ForecastResult>&& value) { SetForecastResultsByTime(std::move(value)); return *this;}

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline GetUsageForecastResult& AddForecastResultsByTime(const ForecastResult& value) { m_forecastResultsByTime.push_back(value); return *this; }

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline GetUsageForecastResult& AddForecastResultsByTime(ForecastResult&& value) { m_forecastResultsByTime.push_back(std::move(value)); return *this; }

  private:

    MetricValue m_total;

    Aws::Vector<ForecastResult> m_forecastResultsByTime;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
