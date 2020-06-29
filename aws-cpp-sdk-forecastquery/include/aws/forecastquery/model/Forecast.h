/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecastquery/model/DataPoint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ForecastQueryService
{
namespace Model
{

  /**
   * <p>Provides information about a forecast. Returned as part of the
   * <a>QueryForecast</a> response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/Forecast">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTQUERYSERVICE_API Forecast
  {
  public:
    Forecast();
    Forecast(Aws::Utils::Json::JsonView jsonValue);
    Forecast& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<DataPoint>>& GetPredictions() const{ return m_predictions; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline bool PredictionsHasBeenSet() const { return m_predictionsHasBeenSet; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline void SetPredictions(const Aws::Map<Aws::String, Aws::Vector<DataPoint>>& value) { m_predictionsHasBeenSet = true; m_predictions = value; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline void SetPredictions(Aws::Map<Aws::String, Aws::Vector<DataPoint>>&& value) { m_predictionsHasBeenSet = true; m_predictions = std::move(value); }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& WithPredictions(const Aws::Map<Aws::String, Aws::Vector<DataPoint>>& value) { SetPredictions(value); return *this;}

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& WithPredictions(Aws::Map<Aws::String, Aws::Vector<DataPoint>>&& value) { SetPredictions(std::move(value)); return *this;}

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& AddPredictions(const Aws::String& key, const Aws::Vector<DataPoint>& value) { m_predictionsHasBeenSet = true; m_predictions.emplace(key, value); return *this; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& AddPredictions(Aws::String&& key, const Aws::Vector<DataPoint>& value) { m_predictionsHasBeenSet = true; m_predictions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& AddPredictions(const Aws::String& key, Aws::Vector<DataPoint>&& value) { m_predictionsHasBeenSet = true; m_predictions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& AddPredictions(Aws::String&& key, Aws::Vector<DataPoint>&& value) { m_predictionsHasBeenSet = true; m_predictions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& AddPredictions(const char* key, Aws::Vector<DataPoint>&& value) { m_predictionsHasBeenSet = true; m_predictions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul>
     */
    inline Forecast& AddPredictions(const char* key, const Aws::Vector<DataPoint>& value) { m_predictionsHasBeenSet = true; m_predictions.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Vector<DataPoint>> m_predictions;
    bool m_predictionsHasBeenSet;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
