/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobConfig.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatusCounters.h>
#include <aws/sagemaker/model/ObjectiveStatusCounters.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobSummary.h>
#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartConfig.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An entity returned by the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_SearchRecord.html">SearchRecord</a>
   * API containing the properties of a hyperparameter tuning job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobSearchEntity">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobSearchEntity
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobSearchEntity();
    AWS_SAGEMAKER_API HyperParameterTuningJobSearchEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobSearchEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }

    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }

    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }

    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }

    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }

    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}

    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const{ return m_hyperParameterTuningJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline bool HyperParameterTuningJobArnHasBeenSet() const { return m_hyperParameterTuningJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(const Aws::String& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(Aws::String&& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(const char* value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobArn(const Aws::String& value) { SetHyperParameterTuningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobArn(Aws::String&& value) { SetHyperParameterTuningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobArn(const char* value) { SetHyperParameterTuningJobArn(value); return *this;}


    
    inline const HyperParameterTuningJobConfig& GetHyperParameterTuningJobConfig() const{ return m_hyperParameterTuningJobConfig; }

    
    inline bool HyperParameterTuningJobConfigHasBeenSet() const { return m_hyperParameterTuningJobConfigHasBeenSet; }

    
    inline void SetHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = value; }

    
    inline void SetHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = std::move(value); }

    
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { SetHyperParameterTuningJobConfig(value); return *this;}

    
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { SetHyperParameterTuningJobConfig(std::move(value)); return *this;}


    
    inline const HyperParameterTrainingJobDefinition& GetTrainingJobDefinition() const{ return m_trainingJobDefinition; }

    
    inline bool TrainingJobDefinitionHasBeenSet() const { return m_trainingJobDefinitionHasBeenSet; }

    
    inline void SetTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = value; }

    
    inline void SetTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = std::move(value); }

    
    inline HyperParameterTuningJobSearchEntity& WithTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { SetTrainingJobDefinition(value); return *this;}

    
    inline HyperParameterTuningJobSearchEntity& WithTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { SetTrainingJobDefinition(std::move(value)); return *this;}


    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline const Aws::Vector<HyperParameterTrainingJobDefinition>& GetTrainingJobDefinitions() const{ return m_trainingJobDefinitions; }

    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline bool TrainingJobDefinitionsHasBeenSet() const { return m_trainingJobDefinitionsHasBeenSet; }

    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline void SetTrainingJobDefinitions(const Aws::Vector<HyperParameterTrainingJobDefinition>& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions = value; }

    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline void SetTrainingJobDefinitions(Aws::Vector<HyperParameterTrainingJobDefinition>&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions = std::move(value); }

    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithTrainingJobDefinitions(const Aws::Vector<HyperParameterTrainingJobDefinition>& value) { SetTrainingJobDefinitions(value); return *this;}

    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithTrainingJobDefinitions(Aws::Vector<HyperParameterTrainingJobDefinition>&& value) { SetTrainingJobDefinitions(std::move(value)); return *this;}

    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& AddTrainingJobDefinitions(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions.push_back(value); return *this; }

    /**
     * <p>The job definitions included in a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& AddTrainingJobDefinitions(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of a hyperparameter tuning job.</p>
     */
    inline const HyperParameterTuningJobStatus& GetHyperParameterTuningJobStatus() const{ return m_hyperParameterTuningJobStatus; }

    /**
     * <p>The status of a hyperparameter tuning job.</p>
     */
    inline bool HyperParameterTuningJobStatusHasBeenSet() const { return m_hyperParameterTuningJobStatusHasBeenSet; }

    /**
     * <p>The status of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = value; }

    /**
     * <p>The status of a hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = std::move(value); }

    /**
     * <p>The status of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { SetHyperParameterTuningJobStatus(value); return *this;}

    /**
     * <p>The status of a hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { SetHyperParameterTuningJobStatus(std::move(value)); return *this;}


    /**
     * <p>The time that a hyperparameter tuning job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that a hyperparameter tuning job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that a hyperparameter tuning job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that a hyperparameter tuning job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that a hyperparameter tuning job was created.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that a hyperparameter tuning job was created.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that a hyperparameter tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const{ return m_hyperParameterTuningEndTime; }

    /**
     * <p>The time that a hyperparameter tuning job ended.</p>
     */
    inline bool HyperParameterTuningEndTimeHasBeenSet() const { return m_hyperParameterTuningEndTimeHasBeenSet; }

    /**
     * <p>The time that a hyperparameter tuning job ended.</p>
     */
    inline void SetHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = value; }

    /**
     * <p>The time that a hyperparameter tuning job ended.</p>
     */
    inline void SetHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = std::move(value); }

    /**
     * <p>The time that a hyperparameter tuning job ended.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { SetHyperParameterTuningEndTime(value); return *this;}

    /**
     * <p>The time that a hyperparameter tuning job ended.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { SetHyperParameterTuningEndTime(std::move(value)); return *this;}


    /**
     * <p>The time that a hyperparameter tuning job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time that a hyperparameter tuning job was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time that a hyperparameter tuning job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time that a hyperparameter tuning job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time that a hyperparameter tuning job was last modified.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time that a hyperparameter tuning job was last modified.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const{ return m_trainingJobStatusCounters; }

    
    inline bool TrainingJobStatusCountersHasBeenSet() const { return m_trainingJobStatusCountersHasBeenSet; }

    
    inline void SetTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = value; }

    
    inline void SetTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = std::move(value); }

    
    inline HyperParameterTuningJobSearchEntity& WithTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { SetTrainingJobStatusCounters(value); return *this;}

    
    inline HyperParameterTuningJobSearchEntity& WithTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { SetTrainingJobStatusCounters(std::move(value)); return *this;}


    
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const{ return m_objectiveStatusCounters; }

    
    inline bool ObjectiveStatusCountersHasBeenSet() const { return m_objectiveStatusCountersHasBeenSet; }

    
    inline void SetObjectiveStatusCounters(const ObjectiveStatusCounters& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = value; }

    
    inline void SetObjectiveStatusCounters(ObjectiveStatusCounters&& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = std::move(value); }

    
    inline HyperParameterTuningJobSearchEntity& WithObjectiveStatusCounters(const ObjectiveStatusCounters& value) { SetObjectiveStatusCounters(value); return *this;}

    
    inline HyperParameterTuningJobSearchEntity& WithObjectiveStatusCounters(ObjectiveStatusCounters&& value) { SetObjectiveStatusCounters(std::move(value)); return *this;}


    
    inline const HyperParameterTrainingJobSummary& GetBestTrainingJob() const{ return m_bestTrainingJob; }

    
    inline bool BestTrainingJobHasBeenSet() const { return m_bestTrainingJobHasBeenSet; }

    
    inline void SetBestTrainingJob(const HyperParameterTrainingJobSummary& value) { m_bestTrainingJobHasBeenSet = true; m_bestTrainingJob = value; }

    
    inline void SetBestTrainingJob(HyperParameterTrainingJobSummary&& value) { m_bestTrainingJobHasBeenSet = true; m_bestTrainingJob = std::move(value); }

    
    inline HyperParameterTuningJobSearchEntity& WithBestTrainingJob(const HyperParameterTrainingJobSummary& value) { SetBestTrainingJob(value); return *this;}

    
    inline HyperParameterTuningJobSearchEntity& WithBestTrainingJob(HyperParameterTrainingJobSummary&& value) { SetBestTrainingJob(std::move(value)); return *this;}


    
    inline const HyperParameterTrainingJobSummary& GetOverallBestTrainingJob() const{ return m_overallBestTrainingJob; }

    
    inline bool OverallBestTrainingJobHasBeenSet() const { return m_overallBestTrainingJobHasBeenSet; }

    
    inline void SetOverallBestTrainingJob(const HyperParameterTrainingJobSummary& value) { m_overallBestTrainingJobHasBeenSet = true; m_overallBestTrainingJob = value; }

    
    inline void SetOverallBestTrainingJob(HyperParameterTrainingJobSummary&& value) { m_overallBestTrainingJobHasBeenSet = true; m_overallBestTrainingJob = std::move(value); }

    
    inline HyperParameterTuningJobSearchEntity& WithOverallBestTrainingJob(const HyperParameterTrainingJobSummary& value) { SetOverallBestTrainingJob(value); return *this;}

    
    inline HyperParameterTuningJobSearchEntity& WithOverallBestTrainingJob(HyperParameterTrainingJobSummary&& value) { SetOverallBestTrainingJob(std::move(value)); return *this;}


    
    inline const HyperParameterTuningJobWarmStartConfig& GetWarmStartConfig() const{ return m_warmStartConfig; }

    
    inline bool WarmStartConfigHasBeenSet() const { return m_warmStartConfigHasBeenSet; }

    
    inline void SetWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = value; }

    
    inline void SetWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = std::move(value); }

    
    inline HyperParameterTuningJobSearchEntity& WithWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { SetWarmStartConfig(value); return *this;}

    
    inline HyperParameterTuningJobSearchEntity& WithWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { SetWarmStartConfig(std::move(value)); return *this;}


    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The error that was created when a hyperparameter tuning job failed.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline HyperParameterTuningJobSearchEntity& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline HyperParameterTuningJobSearchEntity& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with a hyperparameter tuning job. For more information
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a>.</p>
     */
    inline HyperParameterTuningJobSearchEntity& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;

    Aws::String m_hyperParameterTuningJobArn;
    bool m_hyperParameterTuningJobArnHasBeenSet = false;

    HyperParameterTuningJobConfig m_hyperParameterTuningJobConfig;
    bool m_hyperParameterTuningJobConfigHasBeenSet = false;

    HyperParameterTrainingJobDefinition m_trainingJobDefinition;
    bool m_trainingJobDefinitionHasBeenSet = false;

    Aws::Vector<HyperParameterTrainingJobDefinition> m_trainingJobDefinitions;
    bool m_trainingJobDefinitionsHasBeenSet = false;

    HyperParameterTuningJobStatus m_hyperParameterTuningJobStatus;
    bool m_hyperParameterTuningJobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_hyperParameterTuningEndTime;
    bool m_hyperParameterTuningEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    TrainingJobStatusCounters m_trainingJobStatusCounters;
    bool m_trainingJobStatusCountersHasBeenSet = false;

    ObjectiveStatusCounters m_objectiveStatusCounters;
    bool m_objectiveStatusCountersHasBeenSet = false;

    HyperParameterTrainingJobSummary m_bestTrainingJob;
    bool m_bestTrainingJobHasBeenSet = false;

    HyperParameterTrainingJobSummary m_overallBestTrainingJob;
    bool m_overallBestTrainingJobHasBeenSet = false;

    HyperParameterTuningJobWarmStartConfig m_warmStartConfig;
    bool m_warmStartConfigHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
