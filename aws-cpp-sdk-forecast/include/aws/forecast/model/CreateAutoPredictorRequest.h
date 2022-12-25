/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/DataConfig.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/forecast/model/OptimizationMetric.h>
#include <aws/forecast/model/MonitorConfig.h>
#include <aws/forecast/model/TimeAlignmentBoundary.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreateAutoPredictorRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateAutoPredictorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoPredictor"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name for the predictor</p>
     */
    inline const Aws::String& GetPredictorName() const{ return m_predictorName; }

    /**
     * <p>A unique name for the predictor</p>
     */
    inline bool PredictorNameHasBeenSet() const { return m_predictorNameHasBeenSet; }

    /**
     * <p>A unique name for the predictor</p>
     */
    inline void SetPredictorName(const Aws::String& value) { m_predictorNameHasBeenSet = true; m_predictorName = value; }

    /**
     * <p>A unique name for the predictor</p>
     */
    inline void SetPredictorName(Aws::String&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::move(value); }

    /**
     * <p>A unique name for the predictor</p>
     */
    inline void SetPredictorName(const char* value) { m_predictorNameHasBeenSet = true; m_predictorName.assign(value); }

    /**
     * <p>A unique name for the predictor</p>
     */
    inline CreateAutoPredictorRequest& WithPredictorName(const Aws::String& value) { SetPredictorName(value); return *this;}

    /**
     * <p>A unique name for the predictor</p>
     */
    inline CreateAutoPredictorRequest& WithPredictorName(Aws::String&& value) { SetPredictorName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the predictor</p>
     */
    inline CreateAutoPredictorRequest& WithPredictorName(const char* value) { SetPredictorName(value); return *this;}


    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p> <p>The maximum forecast horizon is the
     * lesser of 500 time-steps or 1/4 of the TARGET_TIME_SERIES dataset length. If you
     * are retraining an existing AutoPredictor, then the maximum forecast horizon is
     * the lesser of 500 time-steps or 1/3 of the TARGET_TIME_SERIES dataset
     * length.</p> <p>If you are upgrading to an AutoPredictor or retraining an
     * existing AutoPredictor, you cannot update the forecast horizon parameter. You
     * can meet this requirement by providing longer time-series in the dataset.</p>
     */
    inline int GetForecastHorizon() const{ return m_forecastHorizon; }

    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p> <p>The maximum forecast horizon is the
     * lesser of 500 time-steps or 1/4 of the TARGET_TIME_SERIES dataset length. If you
     * are retraining an existing AutoPredictor, then the maximum forecast horizon is
     * the lesser of 500 time-steps or 1/3 of the TARGET_TIME_SERIES dataset
     * length.</p> <p>If you are upgrading to an AutoPredictor or retraining an
     * existing AutoPredictor, you cannot update the forecast horizon parameter. You
     * can meet this requirement by providing longer time-series in the dataset.</p>
     */
    inline bool ForecastHorizonHasBeenSet() const { return m_forecastHorizonHasBeenSet; }

    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p> <p>The maximum forecast horizon is the
     * lesser of 500 time-steps or 1/4 of the TARGET_TIME_SERIES dataset length. If you
     * are retraining an existing AutoPredictor, then the maximum forecast horizon is
     * the lesser of 500 time-steps or 1/3 of the TARGET_TIME_SERIES dataset
     * length.</p> <p>If you are upgrading to an AutoPredictor or retraining an
     * existing AutoPredictor, you cannot update the forecast horizon parameter. You
     * can meet this requirement by providing longer time-series in the dataset.</p>
     */
    inline void SetForecastHorizon(int value) { m_forecastHorizonHasBeenSet = true; m_forecastHorizon = value; }

    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p> <p>The maximum forecast horizon is the
     * lesser of 500 time-steps or 1/4 of the TARGET_TIME_SERIES dataset length. If you
     * are retraining an existing AutoPredictor, then the maximum forecast horizon is
     * the lesser of 500 time-steps or 1/3 of the TARGET_TIME_SERIES dataset
     * length.</p> <p>If you are upgrading to an AutoPredictor or retraining an
     * existing AutoPredictor, you cannot update the forecast horizon parameter. You
     * can meet this requirement by providing longer time-series in the dataset.</p>
     */
    inline CreateAutoPredictorRequest& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}


    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const{ return m_forecastTypes; }

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline bool ForecastTypesHasBeenSet() const { return m_forecastTypesHasBeenSet; }

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline void SetForecastTypes(const Aws::Vector<Aws::String>& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = value; }

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline void SetForecastTypes(Aws::Vector<Aws::String>&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::move(value); }

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline CreateAutoPredictorRequest& WithForecastTypes(const Aws::Vector<Aws::String>& value) { SetForecastTypes(value); return *this;}

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline CreateAutoPredictorRequest& WithForecastTypes(Aws::Vector<Aws::String>&& value) { SetForecastTypes(std::move(value)); return *this;}

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline CreateAutoPredictorRequest& AddForecastTypes(const Aws::String& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(value); return *this; }

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline CreateAutoPredictorRequest& AddForecastTypes(Aws::String&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline CreateAutoPredictorRequest& AddForecastTypes(const char* value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(value); return *this; }


    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastDimensions() const{ return m_forecastDimensions; }

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline bool ForecastDimensionsHasBeenSet() const { return m_forecastDimensionsHasBeenSet; }

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline void SetForecastDimensions(const Aws::Vector<Aws::String>& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions = value; }

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline void SetForecastDimensions(Aws::Vector<Aws::String>&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions = std::move(value); }

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline CreateAutoPredictorRequest& WithForecastDimensions(const Aws::Vector<Aws::String>& value) { SetForecastDimensions(value); return *this;}

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline CreateAutoPredictorRequest& WithForecastDimensions(Aws::Vector<Aws::String>&& value) { SetForecastDimensions(std::move(value)); return *this;}

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline CreateAutoPredictorRequest& AddForecastDimensions(const Aws::String& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.push_back(value); return *this; }

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline CreateAutoPredictorRequest& AddForecastDimensions(Aws::String&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline CreateAutoPredictorRequest& AddForecastDimensions(const char* value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.push_back(value); return *this; }


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
    inline CreateAutoPredictorRequest& WithForecastFrequency(const Aws::String& value) { SetForecastFrequency(value); return *this;}

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline CreateAutoPredictorRequest& WithForecastFrequency(Aws::String&& value) { SetForecastFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     * <p>The frequency must be greater than or equal to the TARGET_TIME_SERIES dataset
     * frequency.</p> <p>When a RELATED_TIME_SERIES dataset is provided, the frequency
     * must be equal to the RELATED_TIME_SERIES dataset frequency.</p>
     */
    inline CreateAutoPredictorRequest& WithForecastFrequency(const char* value) { SetForecastFrequency(value); return *this;}


    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline const DataConfig& GetDataConfig() const{ return m_dataConfig; }

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline bool DataConfigHasBeenSet() const { return m_dataConfigHasBeenSet; }

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline void SetDataConfig(const DataConfig& value) { m_dataConfigHasBeenSet = true; m_dataConfig = value; }

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline void SetDataConfig(DataConfig&& value) { m_dataConfigHasBeenSet = true; m_dataConfig = std::move(value); }

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline CreateAutoPredictorRequest& WithDataConfig(const DataConfig& value) { SetDataConfig(value); return *this;}

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline CreateAutoPredictorRequest& WithDataConfig(DataConfig&& value) { SetDataConfig(std::move(value)); return *this;}


    
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    
    inline CreateAutoPredictorRequest& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    
    inline CreateAutoPredictorRequest& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline const Aws::String& GetReferencePredictorArn() const{ return m_referencePredictorArn; }

    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline bool ReferencePredictorArnHasBeenSet() const { return m_referencePredictorArnHasBeenSet; }

    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline void SetReferencePredictorArn(const Aws::String& value) { m_referencePredictorArnHasBeenSet = true; m_referencePredictorArn = value; }

    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline void SetReferencePredictorArn(Aws::String&& value) { m_referencePredictorArnHasBeenSet = true; m_referencePredictorArn = std::move(value); }

    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline void SetReferencePredictorArn(const char* value) { m_referencePredictorArnHasBeenSet = true; m_referencePredictorArn.assign(value); }

    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline CreateAutoPredictorRequest& WithReferencePredictorArn(const Aws::String& value) { SetReferencePredictorArn(value); return *this;}

    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline CreateAutoPredictorRequest& WithReferencePredictorArn(Aws::String&& value) { SetReferencePredictorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline CreateAutoPredictorRequest& WithReferencePredictorArn(const char* value) { SetReferencePredictorArn(value); return *this;}


    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline const OptimizationMetric& GetOptimizationMetric() const{ return m_optimizationMetric; }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline bool OptimizationMetricHasBeenSet() const { return m_optimizationMetricHasBeenSet; }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline void SetOptimizationMetric(const OptimizationMetric& value) { m_optimizationMetricHasBeenSet = true; m_optimizationMetric = value; }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline void SetOptimizationMetric(OptimizationMetric&& value) { m_optimizationMetricHasBeenSet = true; m_optimizationMetric = std::move(value); }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline CreateAutoPredictorRequest& WithOptimizationMetric(const OptimizationMetric& value) { SetOptimizationMetric(value); return *this;}

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline CreateAutoPredictorRequest& WithOptimizationMetric(OptimizationMetric&& value) { SetOptimizationMetric(std::move(value)); return *this;}


    /**
     * <p>Create an Explainability resource for the predictor.</p>
     */
    inline bool GetExplainPredictor() const{ return m_explainPredictor; }

    /**
     * <p>Create an Explainability resource for the predictor.</p>
     */
    inline bool ExplainPredictorHasBeenSet() const { return m_explainPredictorHasBeenSet; }

    /**
     * <p>Create an Explainability resource for the predictor.</p>
     */
    inline void SetExplainPredictor(bool value) { m_explainPredictorHasBeenSet = true; m_explainPredictor = value; }

    /**
     * <p>Create an Explainability resource for the predictor.</p>
     */
    inline CreateAutoPredictorRequest& WithExplainPredictor(bool value) { SetExplainPredictor(value); return *this;}


    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreateAutoPredictorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreateAutoPredictorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreateAutoPredictorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata to help you categorize and organize your predictors. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreateAutoPredictorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration details for predictor monitoring. Provide a name for the
     * monitor resource to enable predictor monitoring.</p> <p>Predictor monitoring
     * allows you to see how your predictor's performance changes over time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
     * Monitoring</a>.</p>
     */
    inline const MonitorConfig& GetMonitorConfig() const{ return m_monitorConfig; }

    /**
     * <p>The configuration details for predictor monitoring. Provide a name for the
     * monitor resource to enable predictor monitoring.</p> <p>Predictor monitoring
     * allows you to see how your predictor's performance changes over time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
     * Monitoring</a>.</p>
     */
    inline bool MonitorConfigHasBeenSet() const { return m_monitorConfigHasBeenSet; }

    /**
     * <p>The configuration details for predictor monitoring. Provide a name for the
     * monitor resource to enable predictor monitoring.</p> <p>Predictor monitoring
     * allows you to see how your predictor's performance changes over time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
     * Monitoring</a>.</p>
     */
    inline void SetMonitorConfig(const MonitorConfig& value) { m_monitorConfigHasBeenSet = true; m_monitorConfig = value; }

    /**
     * <p>The configuration details for predictor monitoring. Provide a name for the
     * monitor resource to enable predictor monitoring.</p> <p>Predictor monitoring
     * allows you to see how your predictor's performance changes over time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
     * Monitoring</a>.</p>
     */
    inline void SetMonitorConfig(MonitorConfig&& value) { m_monitorConfigHasBeenSet = true; m_monitorConfig = std::move(value); }

    /**
     * <p>The configuration details for predictor monitoring. Provide a name for the
     * monitor resource to enable predictor monitoring.</p> <p>Predictor monitoring
     * allows you to see how your predictor's performance changes over time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
     * Monitoring</a>.</p>
     */
    inline CreateAutoPredictorRequest& WithMonitorConfig(const MonitorConfig& value) { SetMonitorConfig(value); return *this;}

    /**
     * <p>The configuration details for predictor monitoring. Provide a name for the
     * monitor resource to enable predictor monitoring.</p> <p>Predictor monitoring
     * allows you to see how your predictor's performance changes over time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
     * Monitoring</a>.</p>
     */
    inline CreateAutoPredictorRequest& WithMonitorConfig(MonitorConfig&& value) { SetMonitorConfig(std::move(value)); return *this;}


    /**
     * <p>The time boundary Forecast uses to align and aggregate any data that doesn't
     * align with your forecast frequency. Provide the unit of time and the time
     * boundary as a key value pair. For more information on specifying a time
     * boundary, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#specifying-time-boundary">Specifying
     * a Time Boundary</a>. If you don't provide a time boundary, Forecast uses a set
     * of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#default-time-boundaries">Default
     * Time Boundaries</a>.</p>
     */
    inline const TimeAlignmentBoundary& GetTimeAlignmentBoundary() const{ return m_timeAlignmentBoundary; }

    /**
     * <p>The time boundary Forecast uses to align and aggregate any data that doesn't
     * align with your forecast frequency. Provide the unit of time and the time
     * boundary as a key value pair. For more information on specifying a time
     * boundary, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#specifying-time-boundary">Specifying
     * a Time Boundary</a>. If you don't provide a time boundary, Forecast uses a set
     * of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#default-time-boundaries">Default
     * Time Boundaries</a>.</p>
     */
    inline bool TimeAlignmentBoundaryHasBeenSet() const { return m_timeAlignmentBoundaryHasBeenSet; }

    /**
     * <p>The time boundary Forecast uses to align and aggregate any data that doesn't
     * align with your forecast frequency. Provide the unit of time and the time
     * boundary as a key value pair. For more information on specifying a time
     * boundary, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#specifying-time-boundary">Specifying
     * a Time Boundary</a>. If you don't provide a time boundary, Forecast uses a set
     * of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#default-time-boundaries">Default
     * Time Boundaries</a>.</p>
     */
    inline void SetTimeAlignmentBoundary(const TimeAlignmentBoundary& value) { m_timeAlignmentBoundaryHasBeenSet = true; m_timeAlignmentBoundary = value; }

    /**
     * <p>The time boundary Forecast uses to align and aggregate any data that doesn't
     * align with your forecast frequency. Provide the unit of time and the time
     * boundary as a key value pair. For more information on specifying a time
     * boundary, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#specifying-time-boundary">Specifying
     * a Time Boundary</a>. If you don't provide a time boundary, Forecast uses a set
     * of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#default-time-boundaries">Default
     * Time Boundaries</a>.</p>
     */
    inline void SetTimeAlignmentBoundary(TimeAlignmentBoundary&& value) { m_timeAlignmentBoundaryHasBeenSet = true; m_timeAlignmentBoundary = std::move(value); }

    /**
     * <p>The time boundary Forecast uses to align and aggregate any data that doesn't
     * align with your forecast frequency. Provide the unit of time and the time
     * boundary as a key value pair. For more information on specifying a time
     * boundary, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#specifying-time-boundary">Specifying
     * a Time Boundary</a>. If you don't provide a time boundary, Forecast uses a set
     * of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#default-time-boundaries">Default
     * Time Boundaries</a>.</p>
     */
    inline CreateAutoPredictorRequest& WithTimeAlignmentBoundary(const TimeAlignmentBoundary& value) { SetTimeAlignmentBoundary(value); return *this;}

    /**
     * <p>The time boundary Forecast uses to align and aggregate any data that doesn't
     * align with your forecast frequency. Provide the unit of time and the time
     * boundary as a key value pair. For more information on specifying a time
     * boundary, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#specifying-time-boundary">Specifying
     * a Time Boundary</a>. If you don't provide a time boundary, Forecast uses a set
     * of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/data-aggregation.html#default-time-boundaries">Default
     * Time Boundaries</a>.</p>
     */
    inline CreateAutoPredictorRequest& WithTimeAlignmentBoundary(TimeAlignmentBoundary&& value) { SetTimeAlignmentBoundary(std::move(value)); return *this;}

  private:

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet = false;

    int m_forecastHorizon;
    bool m_forecastHorizonHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastTypes;
    bool m_forecastTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastDimensions;
    bool m_forecastDimensionsHasBeenSet = false;

    Aws::String m_forecastFrequency;
    bool m_forecastFrequencyHasBeenSet = false;

    DataConfig m_dataConfig;
    bool m_dataConfigHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    Aws::String m_referencePredictorArn;
    bool m_referencePredictorArnHasBeenSet = false;

    OptimizationMetric m_optimizationMetric;
    bool m_optimizationMetricHasBeenSet = false;

    bool m_explainPredictor;
    bool m_explainPredictorHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    MonitorConfig m_monitorConfig;
    bool m_monitorConfigHasBeenSet = false;

    TimeAlignmentBoundary m_timeAlignmentBoundary;
    bool m_timeAlignmentBoundaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
