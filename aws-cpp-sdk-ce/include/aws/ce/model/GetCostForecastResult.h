﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_COSTEXPLORER_API GetCostForecastResult
  {
  public:
    GetCostForecastResult();
    GetCostForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCostForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>How much you are forecasted to spend over the forecast period, in
     * <code>USD</code>.</p>
     */
    inline const MetricValue& GetTotal() const{ return m_total; }

    /**
     * <p>How much you are forecasted to spend over the forecast period, in
     * <code>USD</code>.</p>
     */
    inline void SetTotal(const MetricValue& value) { m_total = value; }

    /**
     * <p>How much you are forecasted to spend over the forecast period, in
     * <code>USD</code>.</p>
     */
    inline void SetTotal(MetricValue&& value) { m_total = std::move(value); }

    /**
     * <p>How much you are forecasted to spend over the forecast period, in
     * <code>USD</code>.</p>
     */
    inline GetCostForecastResult& WithTotal(const MetricValue& value) { SetTotal(value); return *this;}

    /**
     * <p>How much you are forecasted to spend over the forecast period, in
     * <code>USD</code>.</p>
     */
    inline GetCostForecastResult& WithTotal(MetricValue&& value) { SetTotal(std::move(value)); return *this;}


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
    inline GetCostForecastResult& WithForecastResultsByTime(const Aws::Vector<ForecastResult>& value) { SetForecastResultsByTime(value); return *this;}

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline GetCostForecastResult& WithForecastResultsByTime(Aws::Vector<ForecastResult>&& value) { SetForecastResultsByTime(std::move(value)); return *this;}

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline GetCostForecastResult& AddForecastResultsByTime(const ForecastResult& value) { m_forecastResultsByTime.push_back(value); return *this; }

    /**
     * <p>The forecasts for your query, in order. For <code>DAILY</code> forecasts,
     * this is a list of days. For <code>MONTHLY</code> forecasts, this is a list of
     * months.</p>
     */
    inline GetCostForecastResult& AddForecastResultsByTime(ForecastResult&& value) { m_forecastResultsByTime.push_back(std::move(value)); return *this; }

  private:

    MetricValue m_total;

    Aws::Vector<ForecastResult> m_forecastResultsByTime;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
