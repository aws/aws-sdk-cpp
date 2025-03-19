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
    AWS_FORECASTSERVICE_API CreateAutoPredictorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutoPredictor"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name for the predictor</p>
     */
    inline const Aws::String& GetPredictorName() const { return m_predictorName; }
    inline bool PredictorNameHasBeenSet() const { return m_predictorNameHasBeenSet; }
    template<typename PredictorNameT = Aws::String>
    void SetPredictorName(PredictorNameT&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::forward<PredictorNameT>(value); }
    template<typename PredictorNameT = Aws::String>
    CreateAutoPredictorRequest& WithPredictorName(PredictorNameT&& value) { SetPredictorName(std::forward<PredictorNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline int GetForecastHorizon() const { return m_forecastHorizon; }
    inline bool ForecastHorizonHasBeenSet() const { return m_forecastHorizonHasBeenSet; }
    inline void SetForecastHorizon(int value) { m_forecastHorizonHasBeenSet = true; m_forecastHorizon = value; }
    inline CreateAutoPredictorRequest& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forecast types used to train a predictor. You can specify up to five
     * forecast types. Forecast types can be quantiles from 0.01 to 0.99, by increments
     * of 0.01 or higher. You can also specify the mean forecast with
     * <code>mean</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const { return m_forecastTypes; }
    inline bool ForecastTypesHasBeenSet() const { return m_forecastTypesHasBeenSet; }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    void SetForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::forward<ForecastTypesT>(value); }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    CreateAutoPredictorRequest& WithForecastTypes(ForecastTypesT&& value) { SetForecastTypes(std::forward<ForecastTypesT>(value)); return *this;}
    template<typename ForecastTypesT = Aws::String>
    CreateAutoPredictorRequest& AddForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.emplace_back(std::forward<ForecastTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of dimension (field) names that specify how to group the generated
     * forecast.</p> <p>For example, if you are generating forecasts for item sales
     * across all your stores, and your dataset contains a <code>store_id</code> field,
     * you would specify <code>store_id</code> as a dimension to group sales forecasts
     * for each store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastDimensions() const { return m_forecastDimensions; }
    inline bool ForecastDimensionsHasBeenSet() const { return m_forecastDimensionsHasBeenSet; }
    template<typename ForecastDimensionsT = Aws::Vector<Aws::String>>
    void SetForecastDimensions(ForecastDimensionsT&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions = std::forward<ForecastDimensionsT>(value); }
    template<typename ForecastDimensionsT = Aws::Vector<Aws::String>>
    CreateAutoPredictorRequest& WithForecastDimensions(ForecastDimensionsT&& value) { SetForecastDimensions(std::forward<ForecastDimensionsT>(value)); return *this;}
    template<typename ForecastDimensionsT = Aws::String>
    CreateAutoPredictorRequest& AddForecastDimensions(ForecastDimensionsT&& value) { m_forecastDimensionsHasBeenSet = true; m_forecastDimensions.emplace_back(std::forward<ForecastDimensionsT>(value)); return *this; }
    ///@}

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
     * dataset is provided, the frequency must be equal to the RELATED_TIME_SERIES
     * dataset frequency.</p>
     */
    inline const Aws::String& GetForecastFrequency() const { return m_forecastFrequency; }
    inline bool ForecastFrequencyHasBeenSet() const { return m_forecastFrequencyHasBeenSet; }
    template<typename ForecastFrequencyT = Aws::String>
    void SetForecastFrequency(ForecastFrequencyT&& value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency = std::forward<ForecastFrequencyT>(value); }
    template<typename ForecastFrequencyT = Aws::String>
    CreateAutoPredictorRequest& WithForecastFrequency(ForecastFrequencyT&& value) { SetForecastFrequency(std::forward<ForecastFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline const DataConfig& GetDataConfig() const { return m_dataConfig; }
    inline bool DataConfigHasBeenSet() const { return m_dataConfigHasBeenSet; }
    template<typename DataConfigT = DataConfig>
    void SetDataConfig(DataConfigT&& value) { m_dataConfigHasBeenSet = true; m_dataConfig = std::forward<DataConfigT>(value); }
    template<typename DataConfigT = DataConfig>
    CreateAutoPredictorRequest& WithDataConfig(DataConfigT&& value) { SetDataConfig(std::forward<DataConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    CreateAutoPredictorRequest& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the predictor to retrain or upgrade. This parameter is only used
     * when retraining or upgrading a predictor. When creating a new predictor, do not
     * specify a value for this parameter.</p> <p>When upgrading or retraining a
     * predictor, only specify values for the <code>ReferencePredictorArn</code> and
     * <code>PredictorName</code>. The value for <code>PredictorName</code> must be a
     * unique predictor name.</p>
     */
    inline const Aws::String& GetReferencePredictorArn() const { return m_referencePredictorArn; }
    inline bool ReferencePredictorArnHasBeenSet() const { return m_referencePredictorArnHasBeenSet; }
    template<typename ReferencePredictorArnT = Aws::String>
    void SetReferencePredictorArn(ReferencePredictorArnT&& value) { m_referencePredictorArnHasBeenSet = true; m_referencePredictorArn = std::forward<ReferencePredictorArnT>(value); }
    template<typename ReferencePredictorArnT = Aws::String>
    CreateAutoPredictorRequest& WithReferencePredictorArn(ReferencePredictorArnT&& value) { SetReferencePredictorArn(std::forward<ReferencePredictorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline OptimizationMetric GetOptimizationMetric() const { return m_optimizationMetric; }
    inline bool OptimizationMetricHasBeenSet() const { return m_optimizationMetricHasBeenSet; }
    inline void SetOptimizationMetric(OptimizationMetric value) { m_optimizationMetricHasBeenSet = true; m_optimizationMetric = value; }
    inline CreateAutoPredictorRequest& WithOptimizationMetric(OptimizationMetric value) { SetOptimizationMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Create an Explainability resource for the predictor.</p>
     */
    inline bool GetExplainPredictor() const { return m_explainPredictor; }
    inline bool ExplainPredictorHasBeenSet() const { return m_explainPredictorHasBeenSet; }
    inline void SetExplainPredictor(bool value) { m_explainPredictorHasBeenSet = true; m_explainPredictor = value; }
    inline CreateAutoPredictorRequest& WithExplainPredictor(bool value) { SetExplainPredictor(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAutoPredictorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAutoPredictorRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration details for predictor monitoring. Provide a name for the
     * monitor resource to enable predictor monitoring.</p> <p>Predictor monitoring
     * allows you to see how your predictor's performance changes over time. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/predictor-monitoring.html">Predictor
     * Monitoring</a>.</p>
     */
    inline const MonitorConfig& GetMonitorConfig() const { return m_monitorConfig; }
    inline bool MonitorConfigHasBeenSet() const { return m_monitorConfigHasBeenSet; }
    template<typename MonitorConfigT = MonitorConfig>
    void SetMonitorConfig(MonitorConfigT&& value) { m_monitorConfigHasBeenSet = true; m_monitorConfig = std::forward<MonitorConfigT>(value); }
    template<typename MonitorConfigT = MonitorConfig>
    CreateAutoPredictorRequest& WithMonitorConfig(MonitorConfigT&& value) { SetMonitorConfig(std::forward<MonitorConfigT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const TimeAlignmentBoundary& GetTimeAlignmentBoundary() const { return m_timeAlignmentBoundary; }
    inline bool TimeAlignmentBoundaryHasBeenSet() const { return m_timeAlignmentBoundaryHasBeenSet; }
    template<typename TimeAlignmentBoundaryT = TimeAlignmentBoundary>
    void SetTimeAlignmentBoundary(TimeAlignmentBoundaryT&& value) { m_timeAlignmentBoundaryHasBeenSet = true; m_timeAlignmentBoundary = std::forward<TimeAlignmentBoundaryT>(value); }
    template<typename TimeAlignmentBoundaryT = TimeAlignmentBoundary>
    CreateAutoPredictorRequest& WithTimeAlignmentBoundary(TimeAlignmentBoundaryT&& value) { SetTimeAlignmentBoundary(std::forward<TimeAlignmentBoundaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet = false;

    int m_forecastHorizon{0};
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

    OptimizationMetric m_optimizationMetric{OptimizationMetric::NOT_SET};
    bool m_optimizationMetricHasBeenSet = false;

    bool m_explainPredictor{false};
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
