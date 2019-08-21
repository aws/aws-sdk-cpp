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
  class AWS_FORECASTQUERYSERVICE_API QueryForecastResult
  {
  public:
    QueryForecastResult();
    QueryForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    QueryForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Forecast m_forecast;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
