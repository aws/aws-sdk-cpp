/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/MonitorSummary.h>
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
namespace ForecastService
{
namespace Model
{
  class ListMonitorsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListMonitorsResult();
    AWS_FORECASTSERVICE_API ListMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that summarize each monitor's properties.</p>
     */
    inline const Aws::Vector<MonitorSummary>& GetMonitors() const{ return m_monitors; }

    /**
     * <p>An array of objects that summarize each monitor's properties.</p>
     */
    inline void SetMonitors(const Aws::Vector<MonitorSummary>& value) { m_monitors = value; }

    /**
     * <p>An array of objects that summarize each monitor's properties.</p>
     */
    inline void SetMonitors(Aws::Vector<MonitorSummary>&& value) { m_monitors = std::move(value); }

    /**
     * <p>An array of objects that summarize each monitor's properties.</p>
     */
    inline ListMonitorsResult& WithMonitors(const Aws::Vector<MonitorSummary>& value) { SetMonitors(value); return *this;}

    /**
     * <p>An array of objects that summarize each monitor's properties.</p>
     */
    inline ListMonitorsResult& WithMonitors(Aws::Vector<MonitorSummary>&& value) { SetMonitors(std::move(value)); return *this;}

    /**
     * <p>An array of objects that summarize each monitor's properties.</p>
     */
    inline ListMonitorsResult& AddMonitors(const MonitorSummary& value) { m_monitors.push_back(value); return *this; }

    /**
     * <p>An array of objects that summarize each monitor's properties.</p>
     */
    inline ListMonitorsResult& AddMonitors(MonitorSummary&& value) { m_monitors.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListMonitorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListMonitorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline ListMonitorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MonitorSummary> m_monitors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
