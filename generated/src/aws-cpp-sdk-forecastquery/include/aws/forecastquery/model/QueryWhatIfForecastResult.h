/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/forecastquery/model/Forecast.h>
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
  class QueryWhatIfForecastResult
  {
  public:
    AWS_FORECASTQUERYSERVICE_API QueryWhatIfForecastResult();
    AWS_FORECASTQUERYSERVICE_API QueryWhatIfForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTQUERYSERVICE_API QueryWhatIfForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Forecast& GetForecast() const{ return m_forecast; }

    
    inline void SetForecast(const Forecast& value) { m_forecast = value; }

    
    inline void SetForecast(Forecast&& value) { m_forecast = std::move(value); }

    
    inline QueryWhatIfForecastResult& WithForecast(const Forecast& value) { SetForecast(value); return *this;}

    
    inline QueryWhatIfForecastResult& WithForecast(Forecast&& value) { SetForecast(std::move(value)); return *this;}

  private:

    Forecast m_forecast;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
