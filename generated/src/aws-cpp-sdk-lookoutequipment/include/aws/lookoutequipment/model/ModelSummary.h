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
    AWS_LOOKOUTEQUIPMENT_API ModelSummary();
    AWS_LOOKOUTEQUIPMENT_API ModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API ModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the machine learning model. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the machine learning model. </p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the machine learning model. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the machine learning model. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the machine learning model. </p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the machine learning model. </p>
     */
    inline ModelSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the machine learning model. </p>
     */
    inline ModelSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the machine learning model. </p>
     */
    inline ModelSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline ModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline ModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the machine learning model. </p>
     */
    inline ModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline ModelSummary& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline ModelSummary& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset being used for the machine learning model. </p>
     */
    inline ModelSummary& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline ModelSummary& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline ModelSummary& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the dataset used to create the model. </p>
     */
    inline ModelSummary& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>Indicates the status of the machine learning model. </p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the machine learning model. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the status of the machine learning model. </p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the status of the machine learning model. </p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the status of the machine learning model. </p>
     */
    inline ModelSummary& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the machine learning model. </p>
     */
    inline ModelSummary& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline ModelSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the specific model was created. </p>
     */
    inline ModelSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The model version that the inference scheduler uses to run an inference
     * execution.</p>
     */
    inline long long GetActiveModelVersion() const{ return m_activeModelVersion; }

    /**
     * <p>The model version that the inference scheduler uses to run an inference
     * execution.</p>
     */
    inline bool ActiveModelVersionHasBeenSet() const { return m_activeModelVersionHasBeenSet; }

    /**
     * <p>The model version that the inference scheduler uses to run an inference
     * execution.</p>
     */
    inline void SetActiveModelVersion(long long value) { m_activeModelVersionHasBeenSet = true; m_activeModelVersion = value; }

    /**
     * <p>The model version that the inference scheduler uses to run an inference
     * execution.</p>
     */
    inline ModelSummary& WithActiveModelVersion(long long value) { SetActiveModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline const Aws::String& GetActiveModelVersionArn() const{ return m_activeModelVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline bool ActiveModelVersionArnHasBeenSet() const { return m_activeModelVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline void SetActiveModelVersionArn(const Aws::String& value) { m_activeModelVersionArnHasBeenSet = true; m_activeModelVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline void SetActiveModelVersionArn(Aws::String&& value) { m_activeModelVersionArnHasBeenSet = true; m_activeModelVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline void SetActiveModelVersionArn(const char* value) { m_activeModelVersionArnHasBeenSet = true; m_activeModelVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline ModelSummary& WithActiveModelVersionArn(const Aws::String& value) { SetActiveModelVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline ModelSummary& WithActiveModelVersionArn(Aws::String&& value) { SetActiveModelVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version that is set as active.
     * The active model version is the model version that the inference scheduler uses
     * to run an inference execution.</p>
     */
    inline ModelSummary& WithActiveModelVersionArn(const char* value) { SetActiveModelVersionArn(value); return *this;}


    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline const ModelVersionStatus& GetLatestScheduledRetrainingStatus() const{ return m_latestScheduledRetrainingStatus; }

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline bool LatestScheduledRetrainingStatusHasBeenSet() const { return m_latestScheduledRetrainingStatusHasBeenSet; }

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStatus(const ModelVersionStatus& value) { m_latestScheduledRetrainingStatusHasBeenSet = true; m_latestScheduledRetrainingStatus = value; }

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStatus(ModelVersionStatus&& value) { m_latestScheduledRetrainingStatusHasBeenSet = true; m_latestScheduledRetrainingStatus = std::move(value); }

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline ModelSummary& WithLatestScheduledRetrainingStatus(const ModelVersionStatus& value) { SetLatestScheduledRetrainingStatus(value); return *this;}

    /**
     * <p>Indicates the status of the most recent scheduled retraining run. </p>
     */
    inline ModelSummary& WithLatestScheduledRetrainingStatus(ModelVersionStatus&& value) { SetLatestScheduledRetrainingStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline long long GetLatestScheduledRetrainingModelVersion() const{ return m_latestScheduledRetrainingModelVersion; }

    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline bool LatestScheduledRetrainingModelVersionHasBeenSet() const { return m_latestScheduledRetrainingModelVersionHasBeenSet; }

    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline void SetLatestScheduledRetrainingModelVersion(long long value) { m_latestScheduledRetrainingModelVersionHasBeenSet = true; m_latestScheduledRetrainingModelVersion = value; }

    /**
     * <p>Indicates the most recent model version that was generated by retraining.
     * </p>
     */
    inline ModelSummary& WithLatestScheduledRetrainingModelVersion(long long value) { SetLatestScheduledRetrainingModelVersion(value); return *this;}


    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline const Aws::Utils::DateTime& GetLatestScheduledRetrainingStartTime() const{ return m_latestScheduledRetrainingStartTime; }

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline bool LatestScheduledRetrainingStartTimeHasBeenSet() const { return m_latestScheduledRetrainingStartTimeHasBeenSet; }

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStartTime(const Aws::Utils::DateTime& value) { m_latestScheduledRetrainingStartTimeHasBeenSet = true; m_latestScheduledRetrainingStartTime = value; }

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline void SetLatestScheduledRetrainingStartTime(Aws::Utils::DateTime&& value) { m_latestScheduledRetrainingStartTimeHasBeenSet = true; m_latestScheduledRetrainingStartTime = std::move(value); }

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline ModelSummary& WithLatestScheduledRetrainingStartTime(const Aws::Utils::DateTime& value) { SetLatestScheduledRetrainingStartTime(value); return *this;}

    /**
     * <p>Indicates the start time of the most recent scheduled retraining run. </p>
     */
    inline ModelSummary& WithLatestScheduledRetrainingStartTime(Aws::Utils::DateTime&& value) { SetLatestScheduledRetrainingStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the date that the next scheduled retraining run will start on.
     * Lookout for Equipment truncates the time you provide to <a
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">the
     * nearest UTC day</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetNextScheduledRetrainingStartDate() const{ return m_nextScheduledRetrainingStartDate; }

    /**
     * <p>Indicates the date that the next scheduled retraining run will start on.
     * Lookout for Equipment truncates the time you provide to <a
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">the
     * nearest UTC day</a>.</p>
     */
    inline bool NextScheduledRetrainingStartDateHasBeenSet() const { return m_nextScheduledRetrainingStartDateHasBeenSet; }

    /**
     * <p>Indicates the date that the next scheduled retraining run will start on.
     * Lookout for Equipment truncates the time you provide to <a
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">the
     * nearest UTC day</a>.</p>
     */
    inline void SetNextScheduledRetrainingStartDate(const Aws::Utils::DateTime& value) { m_nextScheduledRetrainingStartDateHasBeenSet = true; m_nextScheduledRetrainingStartDate = value; }

    /**
     * <p>Indicates the date that the next scheduled retraining run will start on.
     * Lookout for Equipment truncates the time you provide to <a
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">the
     * nearest UTC day</a>.</p>
     */
    inline void SetNextScheduledRetrainingStartDate(Aws::Utils::DateTime&& value) { m_nextScheduledRetrainingStartDateHasBeenSet = true; m_nextScheduledRetrainingStartDate = std::move(value); }

    /**
     * <p>Indicates the date that the next scheduled retraining run will start on.
     * Lookout for Equipment truncates the time you provide to <a
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">the
     * nearest UTC day</a>.</p>
     */
    inline ModelSummary& WithNextScheduledRetrainingStartDate(const Aws::Utils::DateTime& value) { SetNextScheduledRetrainingStartDate(value); return *this;}

    /**
     * <p>Indicates the date that the next scheduled retraining run will start on.
     * Lookout for Equipment truncates the time you provide to <a
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">the
     * nearest UTC day</a>.</p>
     */
    inline ModelSummary& WithNextScheduledRetrainingStartDate(Aws::Utils::DateTime&& value) { SetNextScheduledRetrainingStartDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline const RetrainingSchedulerStatus& GetRetrainingSchedulerStatus() const{ return m_retrainingSchedulerStatus; }

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline bool RetrainingSchedulerStatusHasBeenSet() const { return m_retrainingSchedulerStatusHasBeenSet; }

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline void SetRetrainingSchedulerStatus(const RetrainingSchedulerStatus& value) { m_retrainingSchedulerStatusHasBeenSet = true; m_retrainingSchedulerStatus = value; }

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline void SetRetrainingSchedulerStatus(RetrainingSchedulerStatus&& value) { m_retrainingSchedulerStatusHasBeenSet = true; m_retrainingSchedulerStatus = std::move(value); }

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline ModelSummary& WithRetrainingSchedulerStatus(const RetrainingSchedulerStatus& value) { SetRetrainingSchedulerStatus(value); return *this;}

    /**
     * <p>Indicates the status of the retraining scheduler. </p>
     */
    inline ModelSummary& WithRetrainingSchedulerStatus(RetrainingSchedulerStatus&& value) { SetRetrainingSchedulerStatus(std::move(value)); return *this;}


    
    inline const ModelDiagnosticsOutputConfiguration& GetModelDiagnosticsOutputConfiguration() const{ return m_modelDiagnosticsOutputConfiguration; }

    
    inline bool ModelDiagnosticsOutputConfigurationHasBeenSet() const { return m_modelDiagnosticsOutputConfigurationHasBeenSet; }

    
    inline void SetModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = value; }

    
    inline void SetModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { m_modelDiagnosticsOutputConfigurationHasBeenSet = true; m_modelDiagnosticsOutputConfiguration = std::move(value); }

    
    inline ModelSummary& WithModelDiagnosticsOutputConfiguration(const ModelDiagnosticsOutputConfiguration& value) { SetModelDiagnosticsOutputConfiguration(value); return *this;}

    
    inline ModelSummary& WithModelDiagnosticsOutputConfiguration(ModelDiagnosticsOutputConfiguration&& value) { SetModelDiagnosticsOutputConfiguration(std::move(value)); return *this;}


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
    inline const ModelQuality& GetModelQuality() const{ return m_modelQuality; }

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
    inline bool ModelQualityHasBeenSet() const { return m_modelQualityHasBeenSet; }

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
    inline void SetModelQuality(const ModelQuality& value) { m_modelQualityHasBeenSet = true; m_modelQuality = value; }

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
    inline void SetModelQuality(ModelQuality&& value) { m_modelQualityHasBeenSet = true; m_modelQuality = std::move(value); }

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
    inline ModelSummary& WithModelQuality(const ModelQuality& value) { SetModelQuality(value); return *this;}

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
    inline ModelSummary& WithModelQuality(ModelQuality&& value) { SetModelQuality(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    ModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    long long m_activeModelVersion;
    bool m_activeModelVersionHasBeenSet = false;

    Aws::String m_activeModelVersionArn;
    bool m_activeModelVersionArnHasBeenSet = false;

    ModelVersionStatus m_latestScheduledRetrainingStatus;
    bool m_latestScheduledRetrainingStatusHasBeenSet = false;

    long long m_latestScheduledRetrainingModelVersion;
    bool m_latestScheduledRetrainingModelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestScheduledRetrainingStartTime;
    bool m_latestScheduledRetrainingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextScheduledRetrainingStartDate;
    bool m_nextScheduledRetrainingStartDateHasBeenSet = false;

    RetrainingSchedulerStatus m_retrainingSchedulerStatus;
    bool m_retrainingSchedulerStatusHasBeenSet = false;

    ModelDiagnosticsOutputConfiguration m_modelDiagnosticsOutputConfiguration;
    bool m_modelDiagnosticsOutputConfigurationHasBeenSet = false;

    ModelQuality m_modelQuality;
    bool m_modelQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
