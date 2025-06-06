﻿/**
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
  class Forecast
  {
  public:
    AWS_FORECASTQUERYSERVICE_API Forecast() = default;
    AWS_FORECASTQUERYSERVICE_API Forecast(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTQUERYSERVICE_API Forecast& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTQUERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The forecast.</p> <p>The <i>string</i> of the string-to-array map is one of
     * the following values:</p> <ul> <li> <p>p10</p> </li> <li> <p>p50</p> </li> <li>
     * <p>p90</p> </li> </ul> <p>The default setting is <code>["0.1", "0.5",
     * "0.9"]</code>. Use the optional <code>ForecastTypes</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateForecast.html">CreateForecast</a>
     * operation to change the values. The values will vary depending on how this is
     * set, with a minimum of <code>1</code> and a maximum of <code>5.</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<DataPoint>>& GetPredictions() const { return m_predictions; }
    inline bool PredictionsHasBeenSet() const { return m_predictionsHasBeenSet; }
    template<typename PredictionsT = Aws::Map<Aws::String, Aws::Vector<DataPoint>>>
    void SetPredictions(PredictionsT&& value) { m_predictionsHasBeenSet = true; m_predictions = std::forward<PredictionsT>(value); }
    template<typename PredictionsT = Aws::Map<Aws::String, Aws::Vector<DataPoint>>>
    Forecast& WithPredictions(PredictionsT&& value) { SetPredictions(std::forward<PredictionsT>(value)); return *this;}
    template<typename PredictionsKeyT = Aws::String, typename PredictionsValueT = Aws::Vector<DataPoint>>
    Forecast& AddPredictions(PredictionsKeyT&& key, PredictionsValueT&& value) {
      m_predictionsHasBeenSet = true; m_predictions.emplace(std::forward<PredictionsKeyT>(key), std::forward<PredictionsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<DataPoint>> m_predictions;
    bool m_predictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
