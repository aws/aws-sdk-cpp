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
    AWS_FORECASTSERVICE_API FeaturizationConfig();
    AWS_FORECASTSERVICE_API FeaturizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API FeaturizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline const Aws::String& GetForecastFrequency() const{ return m_forecastFrequency; }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline bool ForecastFrequencyHasBeenSet() const { return m_forecastFrequencyHasBeenSet; }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline void SetForecastFrequency(const Aws::String& value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency = value; }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline void SetForecastFrequency(Aws::String&& value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency = std::move(value); }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline void SetForecastFrequency(const char* value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency.assign(value); }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline FeaturizationConfig& WithForecastFrequency(const Aws::String& value) { SetForecastFrequency(value); return *this;}

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline FeaturizationConfig& WithForecastFrequency(Aws::String&& value) { SetForecastFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline FeaturizationConfig& WithForecastFrequency(const char* value) { SetForecastFrequency(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetForecastDimensions() const{ return m_forecastDimensions; }

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
    inline bool ForecastDimensionsHasBeenSet() const { return m_forecastDimensionsHasBeenSet; }

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
    inline void SetForecastDimensions(const Aws::Vector<Aws::String>& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions = value; }

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
    inline void SetForecastDimensions(Aws::Vector<Aws::String>&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions = std::move(value); }

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
    inline FeaturizationConfig& WithForecastDimensions(const Aws::Vector<Aws::String>& value) { SetForecastDimensions(value); return *this;}

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
    inline FeaturizationConfig& WithForecastDimensions(Aws::Vector<Aws::String>&& value) { SetForecastDimensions(std::move(value)); return *this;}

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
    inline FeaturizationConfig& AddForecastDimensions(const Aws::String& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.push_back(value); return *this; }

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
    inline FeaturizationConfig& AddForecastDimensions(Aws::String&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.push_back(std::move(value)); return *this; }

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
    inline FeaturizationConfig& AddForecastDimensions(const char* value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.push_back(value); return *this; }


    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline const Aws::Vector<Featurization>& GetFeaturizations() const{ return m_featurizations; }

    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline bool FeaturizationsHasBeenSet() const { return m_featurizationsHasBeenSet; }

    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline void SetFeaturizations(const Aws::Vector<Featurization>& value) { m_featurizationsHasBeenSet = true; m_featurizations = value; }

    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline void SetFeaturizations(Aws::Vector<Featurization>&& value) { m_featurizationsHasBeenSet = true; m_featurizations = std::move(value); }

    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline FeaturizationConfig& WithFeaturizations(const Aws::Vector<Featurization>& value) { SetFeaturizations(value); return *this;}

    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline FeaturizationConfig& WithFeaturizations(Aws::Vector<Featurization>&& value) { SetFeaturizations(std::move(value)); return *this;}

    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline FeaturizationConfig& AddFeaturizations(const Featurization& value) { m_featurizationsHasBeenSet = true; m_featurizations.push_back(value); return *this; }

    /**
     * <p>An array of featurization (transformation) information for the fields of a
     * dataset.</p>
     */
    inline FeaturizationConfig& AddFeaturizations(Featurization&& value) { m_featurizationsHasBeenSet = true; m_featurizations.push_back(std::move(value)); return *this; }

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
