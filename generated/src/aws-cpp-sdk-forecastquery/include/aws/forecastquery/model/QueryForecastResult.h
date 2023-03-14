/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/forecastquery/model/Forecast.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ForecastQueryService
{
namespace Model
{
  class QueryForecastResult
  {
  public:
    AWS_FORECASTQUERYSERVICE_API QueryForecastResult();
    AWS_FORECASTQUERYSERVICE_API QueryForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTQUERYSERVICE_API QueryForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The forecast.</p>
     */
    inline const Forecast& GetForecast() const{ return m_forecast; }

    /**
     * <p>The forecast.</p>
     */
    inline void SetForecast(const Forecast& value) { m_forecast = value; }

    /**
     * <p>The forecast.</p>
     */
    inline void SetForecast(Forecast&& value) { m_forecast = std::move(value); }

    /**
     * <p>The forecast.</p>
     */
    inline QueryForecastResult& WithForecast(const Forecast& value) { SetForecast(value); return *this;}

    /**
     * <p>The forecast.</p>
     */
    inline QueryForecastResult& WithForecast(Forecast&& value) { SetForecast(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline QueryForecastResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline QueryForecastResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline QueryForecastResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Forecast m_forecast;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
