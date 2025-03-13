/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <aws/lookoutequipment/model/ModelDiagnosticsOutputConfiguration.h>
#include <aws/lookoutequipment/model/ModelQuality.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Provides information about the specified machine learning model, including
   * dataset and model names and ARNs, as well as status. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/ModelSummary">AWS
   * API Reference</a></p>
   */
  class ModelSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ModelSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API ModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API ModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the machine learning model. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ModelSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    ModelSummary& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    ModelSummary& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    ModelSummary& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the machine learning model. </p>
     */
    inline ModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelSummary& WithStatus(ModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ModelSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model version that the inference scheduler uses to run an inference
     * execution.</p>
     */
    inline long long GetActiveModelVersion() const { return m_activeModelVersion; }
    inline bool ActiveModelVersionHasBeenSet() const { return m_activeModelVersionHasBeenSet; }
    inline void SetActiveModelVersion(long long value) { m_activeModelVersionHasBeenSet = true; m_activeModelVersion = value; }
    inline ModelSummary& WithActiveModelVersion(long long value) { SetActiveModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline const Aws::String& GetActiveModelVersionArn() const { return m_activeModelVersionArn; }
    inline bool ActiveModelVersionArnHasBeenSet() const { return m_activeModelVersionArnHasBeenSet; }
    template<typename ActiveModelVersionArnT = Aws::String>
    void SetActiveModelVersionArn(ActiveModelVersionArnT&& value) { m_activeModelVersionArnHasBeenSet = true; m_activeModelVersionArn = std::forward<ActiveModelVersionArnT>(value); }
    template<typename ActiveModelVersionArnT = Aws::String>
    ModelSummary& WithActiveModelVersionArn(ActiveModelVersionArnT&& value) { SetActiveModelVersionArn(std::forward<ActiveModelVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline ModelVersionStatus GetLatestScheduledRetrainingStatus() const { return m_latestScheduledRetrainingStatus; }
    inline bool LatestScheduledRetrainingStatusHasBeenSet() const { return m_latestScheduledRetrainingStatusHasBeenSet; }
    inline void SetLatestScheduledRetrainingStatus(ModelVersionStatus value) { m_latestScheduledRetrainingStatusHasBeenSet = true; m_latestScheduledRetrainingStatus = value; }
    inline ModelSummary& WithLatestScheduledRetrainingStatus(ModelVersionStatus value) { SetLatestScheduledRetrainingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline long long GetLatestScheduledRetrainingModelVersion() const { return m_latestScheduledRetrainingModelVersion; }
    inline bool LatestScheduledRetrainingModelVersionHasBeenSet() const { return m_latestScheduledRetrainingModelVersionHasBeenSet; }
    inline void SetLatestScheduledRetrainingModelVersion(long long value) { m_latestScheduledRetrainingModelVersionHasBeenSet = true; m_latestScheduledRetrainingModelVersion = value; }
    inline ModelSummary& WithLatestScheduledRetrainingModelVersion(long long value) { SetLatestScheduledRetrainingModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline const Aws::Utils::DateTime& GetLatestScheduledRetrainingStartTime() const { return m_latestScheduledRetrainingStartTime; }
    inline bool LatestScheduledRetrainingStartTimeHasBeenSet() const { return m_latestScheduledRetrainingStartTimeHasBeenSet; }
    template<typename LatestScheduledRetrainingStartTimeT = Aws::Utils::DateTime>
    void SetLatestScheduledRetrainingStartTime(LatestScheduledRetrainingStartTimeT&& value) { m_latestScheduledRetrainingStartTimeHasBeenSet = true; m_latestScheduledRetrainingStartTime = std::forward<LatestScheduledRetrainingStartTimeT>(value); }
    template<typename LatestScheduledRetrainingStartTimeT = Aws::Utils::DateTime>
    ModelSummary& WithLatestScheduledRetrainingStartTime(LatestScheduledRetrainingStartTimeT&& value) { SetLatestScheduledRetrainingStartTime(std::forward<LatestScheduledRetrainingStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the date that the next scheduled retraining run will start on.
     * Lookout for Equipment truncates the time you provide to <a
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">the
     * nearest UTC day</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetNextScheduledRetrainingStartDate() const { return m_nextScheduledRetrainingStartDate; }
    inline bool NextScheduledRetrainingStartDateHasBeenSet() const { return m_nextScheduledRetrainingStartDateHasBeenSet; }
    template<typename NextScheduledRetrainingStartDateT = Aws::Utils::DateTime>
    void SetNextScheduledRetrainingStartDate(NextScheduledRetrainingStartDateT&& value) { m_nextScheduledRetrainingStartDateHasBeenSet = true; m_nextScheduledRetrainingStartDate = std::forward<NextScheduledRetrainingStartDateT>(value); }
    template<typename NextScheduledRetrainingStartDateT = Aws::Utils::DateTime>
    ModelSummary& WithNextScheduledRetrainingStartDate(NextScheduledRetrainingStartDateT&& value) { SetNextScheduledRetrainingStartDate(std::forward<NextScheduledRetrainingStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline RetrainingSchedulerStatus GetRetrainingSchedulerStatus() const { return m_retrainingSchedulerStatus; }
    inline bool RetrainingSchedulerStatusHasBeenSet() const { return m_retrainingSchedulerStatusHasBeenSet; }
    inline void SetRetrainingSchedulerStatus(RetrainingSchedulerStatus value) { m_retrainingSchedulerStatusHasBeenSet = true; m_retrainingSchedulerStatus = value; }
    inline ModelSummary& WithRetrainingSchedulerStatus(RetrainingSchedulerStatus value) { SetRetrainingSchedulerStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const { return m_modelDiagnosticsOutputConfiguration; }
    inline bool ModelDiagnosticsOutputConfigurationHasBeenSet() const { return m_modelDiagnosticsOutputConfigurationHasBeenSet; }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = std::forward<ModelDiagnosticsOutputConfigurationT>(value); }
    template<typename ModelDiagnosticsOutputConfigurationT = ModelDiagnosticsOutputConfiguration>
    ModelSummary& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfigurationT&& value) { SetModelDiagnosticsOutputConfiguration(std::forward<ModelDiagnosticsOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a quality assessment for a model that uses labels. If Lookout for
     * Equipment determines that the model quality is poor based on training metrics,
     * the value is <code>POOR_QUALITY_DETECTED</code>. Otherwise, the value is
     * <code>QUALITY_THRESHOLD_MET</code>.</p> <p>If the model is unlabeled, the model
     * quality can't be assessed and the value of <code>ModelQuality</code> is
     * <code>CANNOT_DETERMINE_QUALITY</code>. In this situation, you can get a model
     * quality assessment by adding labels to the input dataset and retraining the
     * model.</p> <p>For information about using labels with your models, see <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/understanding-labeling.html">Understanding
     * labeling</a>.</p> <p>For information about improving the quality of a model, see
     * <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/best-practices.html">Best
     * practices with Amazon Lookout for Equipment</a>.</p>
     */
    inline ModelQuality GetModelQuality() const { return m_modelQuality; }
    inline bool ModelQualityHasBeenSet() const { return m_modelQualityHasBeenSet; }
    inline void SetModelQuality(ModelQuality value) { m_modelQualityHasBeenSet = true; m_modelQuality = value; }
    inline ModelSummary& WithModelQuality(ModelQuality value) { SetModelQuality(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    ModelStatus m_status{ModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    long long m_activeModelVersion{0};
    bool m_activeModelVersionHasBeenSet = false;

    Aws::String m_activeModelVersionArn;
    bool m_activeModelVersionArnHasBeenSet = false;

    ModelVersionStatus m_latestScheduledRetrainingStatus{ModelVersionStatus::NOT_SET};
    bool m_latestScheduledRetrainingStatusHasBeenSet = false;

    long long m_latestScheduledRetrainingModelVersion{0};
    bool m_latestScheduledRetrainingModelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestScheduledRetrainingStartTime{};
    bool m_latestScheduledRetrainingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextScheduledRetrainingStartDate{};
    bool m_nextScheduledRetrainingStartDateHasBeenSet = false;

    RetrainingSchedulerStatus m_retrainingSchedulerStatus{RetrainingSchedulerStatus::NOT_SET};
    bool m_retrainingSchedulerStatusHasBeenSet = false;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;
    bool m_modelDiagnosticsOutputConfigurationHasBeenSet = false;

    ModelQuality m_modelQuality{ModelQuality::NOT_SET};
    bool m_modelQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
