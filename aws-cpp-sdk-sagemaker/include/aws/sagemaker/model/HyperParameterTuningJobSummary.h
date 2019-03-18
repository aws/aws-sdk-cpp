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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStatus.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStrategyType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatusCounters.h>
#include <aws/sagemaker/model/ObjectiveStatusCounters.h>
#include <aws/sagemaker/model/ResourceLimits.h>
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
   * <p>Provides summary information about a hyperparameter tuning job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HyperParameterTuningJobSummary
  {
  public:
    HyperParameterTuningJobSummary();
    HyperParameterTuningJobSummary(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterTuningJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}

    /**
     * <p>The name of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const{ return m_hyperParameterTuningJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline bool HyperParameterTuningJobArnHasBeenSet() const { return m_hyperParameterTuningJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(const Aws::String& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(Aws::String&& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(const char* value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobArn(const Aws::String& value) { SetHyperParameterTuningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobArn(Aws::String&& value) { SetHyperParameterTuningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobArn(const char* value) { SetHyperParameterTuningJobArn(value); return *this;}


    /**
     * <p>The status of the tuning job.</p>
     */
    inline const HyperParameterTuningJobStatus& GetHyperParameterTuningJobStatus() const{ return m_hyperParameterTuningJobStatus; }

    /**
     * <p>The status of the tuning job.</p>
     */
    inline bool HyperParameterTuningJobStatusHasBeenSet() const { return m_hyperParameterTuningJobStatusHasBeenSet; }

    /**
     * <p>The status of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = value; }

    /**
     * <p>The status of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { m_hyperParameterTuningJobStatusHasBeenSet = true; m_hyperParameterTuningJobStatus = std::move(value); }

    /**
     * <p>The status of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { SetHyperParameterTuningJobStatus(value); return *this;}

    /**
     * <p>The status of the tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { SetHyperParameterTuningJobStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to use for each iteration. Currently, the only valid value is
     * Bayesian.</p>
     */
    inline const HyperParameterTuningJobStrategyType& GetStrategy() const{ return m_strategy; }

    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to use for each iteration. Currently, the only valid value is
     * Bayesian.</p>
     */
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }

    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to use for each iteration. Currently, the only valid value is
     * Bayesian.</p>
     */
    inline void SetStrategy(const HyperParameterTuningJobStrategyType& value) { m_strategyHasBeenSet = true; m_strategy = value; }

    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to use for each iteration. Currently, the only valid value is
     * Bayesian.</p>
     */
    inline void SetStrategy(HyperParameterTuningJobStrategyType&& value) { m_strategyHasBeenSet = true; m_strategy = std::move(value); }

    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to use for each iteration. Currently, the only valid value is
     * Bayesian.</p>
     */
    inline HyperParameterTuningJobSummary& WithStrategy(const HyperParameterTuningJobStrategyType& value) { SetStrategy(value); return *this;}

    /**
     * <p>Specifies the search strategy hyperparameter tuning uses to choose which
     * hyperparameters to use for each iteration. Currently, the only valid value is
     * Bayesian.</p>
     */
    inline HyperParameterTuningJobSummary& WithStrategy(HyperParameterTuningJobStrategyType&& value) { SetStrategy(std::move(value)); return *this;}


    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline HyperParameterTuningJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the tuning job was created.</p>
     */
    inline HyperParameterTuningJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const{ return m_hyperParameterTuningEndTime; }

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline bool HyperParameterTuningEndTimeHasBeenSet() const { return m_hyperParameterTuningEndTimeHasBeenSet; }

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline void SetHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = value; }

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline void SetHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { m_hyperParameterTuningEndTimeHasBeenSet = true; m_hyperParameterTuningEndTime = std::move(value); }

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { SetHyperParameterTuningEndTime(value); return *this;}

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline HyperParameterTuningJobSummary& WithHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { SetHyperParameterTuningEndTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline HyperParameterTuningJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the tuning job was modified.</p>
     */
    inline HyperParameterTuningJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const{ return m_trainingJobStatusCounters; }

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline bool TrainingJobStatusCountersHasBeenSet() const { return m_trainingJobStatusCountersHasBeenSet; }

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline void SetTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = value; }

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline void SetTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { m_trainingJobStatusCountersHasBeenSet = true; m_trainingJobStatusCounters = std::move(value); }

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline HyperParameterTuningJobSummary& WithTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { SetTrainingJobStatusCounters(value); return *this;}

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline HyperParameterTuningJobSummary& WithTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { SetTrainingJobStatusCounters(std::move(value)); return *this;}


    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by objective metric status, that this tuning job
     * launched.</p>
     */
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const{ return m_objectiveStatusCounters; }

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by objective metric status, that this tuning job
     * launched.</p>
     */
    inline bool ObjectiveStatusCountersHasBeenSet() const { return m_objectiveStatusCountersHasBeenSet; }

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by objective metric status, that this tuning job
     * launched.</p>
     */
    inline void SetObjectiveStatusCounters(const ObjectiveStatusCounters& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = value; }

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by objective metric status, that this tuning job
     * launched.</p>
     */
    inline void SetObjectiveStatusCounters(ObjectiveStatusCounters&& value) { m_objectiveStatusCountersHasBeenSet = true; m_objectiveStatusCounters = std::move(value); }

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by objective metric status, that this tuning job
     * launched.</p>
     */
    inline HyperParameterTuningJobSummary& WithObjectiveStatusCounters(const ObjectiveStatusCounters& value) { SetObjectiveStatusCounters(value); return *this;}

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the numbers of
     * training jobs, categorized by objective metric status, that this tuning job
     * launched.</p>
     */
    inline HyperParameterTuningJobSummary& WithObjectiveStatusCounters(ObjectiveStatusCounters&& value) { SetObjectiveStatusCounters(std::move(value)); return *this;}


    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs allowed for this tuning job.</p>
     */
    inline const ResourceLimits& GetResourceLimits() const{ return m_resourceLimits; }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs allowed for this tuning job.</p>
     */
    inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs allowed for this tuning job.</p>
     */
    inline void SetResourceLimits(const ResourceLimits& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = value; }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs allowed for this tuning job.</p>
     */
    inline void SetResourceLimits(ResourceLimits&& value) { m_resourceLimitsHasBeenSet = true; m_resourceLimits = std::move(value); }

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs allowed for this tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithResourceLimits(const ResourceLimits& value) { SetResourceLimits(value); return *this;}

    /**
     * <p>The <a>ResourceLimits</a> object that specifies the maximum number of
     * training jobs and parallel training jobs allowed for this tuning job.</p>
     */
    inline HyperParameterTuningJobSummary& WithResourceLimits(ResourceLimits&& value) { SetResourceLimits(std::move(value)); return *this;}

  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet;

    Aws::String m_hyperParameterTuningJobArn;
    bool m_hyperParameterTuningJobArnHasBeenSet;

    HyperParameterTuningJobStatus m_hyperParameterTuningJobStatus;
    bool m_hyperParameterTuningJobStatusHasBeenSet;

    HyperParameterTuningJobStrategyType m_strategy;
    bool m_strategyHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_hyperParameterTuningEndTime;
    bool m_hyperParameterTuningEndTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    TrainingJobStatusCounters m_trainingJobStatusCounters;
    bool m_trainingJobStatusCountersHasBeenSet;

    ObjectiveStatusCounters m_objectiveStatusCounters;
    bool m_objectiveStatusCountersHasBeenSet;

    ResourceLimits m_resourceLimits;
    bool m_resourceLimitsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
