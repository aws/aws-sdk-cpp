/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Featurization.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   *  <p>This object belongs to the <a>CreatePredictor</a> operation. If you
   * created your predictor with <a>CreateAutoPredictor</a>, see
   * <a>AttributeConfig</a>.</p>  <p>In a <a>CreatePredictor</a> operation,
   * the specified algorithm trains a model using the specified dataset group. You
   * can optionally tell the operation to modify data fields prior to training a
   * model. These modifications are referred to as <i>featurization</i>.</p> <p>You
   * define featurization using the <code>FeaturizationConfig</code> object. You
   * specify an array of transformations, one for each field that you want to
   * featurize. You then include the <code>FeaturizationConfig</code> object in your
   * <code>CreatePredictor</code> request. Amazon Forecast applies the featurization
   * to the <code>TARGET_TIME_SERIES</code> and <code>RELATED_TIME_SERIES</code>
   * datasets before model training.</p> <p>You can create multiple featurization
   * configurations. For example, you might call the <code>CreatePredictor</code>
   * operation twice by specifying different featurization
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/FeaturizationConfig">AWS
   * API Reference</a></p>
   */
  class FeaturizationConfig
  {
  public:
    AWS_FORECASTSERVICE_API FeaturizationConfig() = default;
    AWS_FORECASTSERVICE_API FeaturizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API FeaturizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are an
     * integer followed by Y (Year), M (Month), W (Week), D (Day), H (Hour), and min
     * (Minute). For example, "1D" indicates every day and "15min" indicates every 15
     * minutes. You cannot specify a value that would overlap with the next larger
     * frequency. That means, for example, you cannot specify a frequency of 60
     * minutes, because that is equivalent to 1 hour. The valid values for each
     * frequency are the following:</p> <ul> <li> <p>Minute - 1-59</p> </li> <li>
     * <p>Hour - 1-23</p> </li> <li> <p>Day - 1-6</p> </li> <li> <p>Week - 1-4</p>
     * </li> <li> <p>Month - 1-11</p> </li> <li> <p>Year - 1</p> </li> </ul> <p>Thus,
     * if you want every other week forecasts, specify "2W". Or, if you want quarterly
     * forecasts, you specify "3M".</p> <p>The frequency must be greater than or equal
     * to the TARGET_TIME_SERIES dataset frequency.</p> <p>When a RELATED_TIME_SERIES
     * dataset is provided, the frequency must be equal to the TARGET_TIME_SERIES
     * dataset frequency.</p>
     */
    inline const Aws::String& GetForecastFrequency() const { return m_forecastFrequency; }
    inline bool ForecastFrequencyHasBeenSet() const { return m_forecastFrequencyHasBeenSet; }
    template<typename ForecastFrequencyT = Aws::String>
    void SetForecastFrequency(ForecastFrequencyT&& value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency = std::forward<ForecastFrequencyT>(value); }
    template<typename ForecastFrequencyT = Aws::String>
    FeaturizationConfig& WithForecastFrequency(ForecastFrequencyT&& value) { SetForecastFrequency(std::forward<ForecastFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, suppose that you are generating a forecast for
     * item sales across all of your stores, and your dataset contains a
     * <code>store_id</code> field. If you want the sales forecast for each item by
     * store, you would specify <code>store_id</code> as the dimension.</p> <p>All
     * forecast dimensions specified in the <code>TARGET_TIME_SERIES</code> dataset
     * don't need to be specified in the <code>CreatePredictor</code> request. All
     * forecast dimensions specified in the <code>RELATED_TIME_SERIES</code> dataset
     * must be specified in the <code>CreatePredictor</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastDimensions() const { return m_forecastDimensions; }
    inline bool ForecastDimensionsHasBeenSet() const { return m_forecastDimensionsHasBeenSet; }
    template<typename ForecastDimensionsT = Aws::Vector<Aws::String>>
    void SetForecastDimensions(ForecastDimensionsT&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions = std::forward<ForecastDimensionsT>(value); }
    template<typename ForecastDimensionsT = Aws::Vector<Aws::String>>
    FeaturizationConfig& WithForecastDimensions(ForecastDimensionsT&& value) { SetForecastDimensions(std::forward<ForecastDimensionsT>(value)); return *this;}
    template<typename ForecastDimensionsT = Aws::String>
    FeaturizationConfig& AddForecastDimensions(ForecastDimensionsT&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.emplace_back(std::forward<ForecastDimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline const Aws::Vector<Featurization>& GetFeaturizations() const { return m_featurizations; }
    inline bool FeaturizationsHasBeenSet() const { return m_featurizationsHasBeenSet; }
    template<typename FeaturizationsT = Aws::Vector<Featurization>>
    void SetFeaturizations(FeaturizationsT&& value) { m_featurizationsHasBeenSet = true; m_featurizations = std::forward<FeaturizationsT>(value); }
    template<typename FeaturizationsT = Aws::Vector<Featurization>>
    FeaturizationConfig& WithFeaturizations(FeaturizationsT&& value) { SetFeaturizations(std::forward<FeaturizationsT>(value)); return *this;}
    template<typename FeaturizationsT = Featurization>
    FeaturizationConfig& AddFeaturizations(FeaturizationsT&& value) { m_featurizationsHasBeenSet = true; m_featurizations.emplace_back(std::forward<FeaturizationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_forecastFrequency;
    bool m_forecastFrequencyHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastDimensions;
    bool m_forecastDimensionsHasBeenSet = false;

    Aws::Vector<Featurization> m_featurizations;
    bool m_featurizationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
