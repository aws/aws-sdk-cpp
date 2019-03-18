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
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/FinalHyperParameterTuningJobObjectiveMetric.h>
#include <aws/sagemaker/model/ObjectiveStatus.h>
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
   * <p>Specifies summary information about a training job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTrainingJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HyperParameterTrainingJobSummary
  {
  public:
    HyperParameterTrainingJobSummary();
    HyperParameterTrainingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterTrainingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }

    /**
     * <p>The name of the training job.</p>
     */
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }

    /**
     * <p>The name of the training job.</p>
     */
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = value; }

    /**
     * <p>The name of the training job.</p>
     */
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::move(value); }

    /**
     * <p>The name of the training job.</p>
     */
    inline void SetTrainingJobName(const char* value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName.assign(value); }

    /**
     * <p>The name of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p>The name of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}


    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline const Aws::String& GetTuningJobName() const{ return m_tuningJobName; }

    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline bool TuningJobNameHasBeenSet() const { return m_tuningJobNameHasBeenSet; }

    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline void SetTuningJobName(const Aws::String& value) { m_tuningJobNameHasBeenSet = true; m_tuningJobName = value; }

    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline void SetTuningJobName(Aws::String&& value) { m_tuningJobNameHasBeenSet = true; m_tuningJobName = std::move(value); }

    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline void SetTuningJobName(const char* value) { m_tuningJobNameHasBeenSet = true; m_tuningJobName.assign(value); }

    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTuningJobName(const Aws::String& value) { SetTuningJobName(value); return *this;}

    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTuningJobName(Aws::String&& value) { SetTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The HyperParameter tuning job that launched the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTuningJobName(const char* value) { SetTuningJobName(value); return *this;}


    /**
     * <p>The date and time that the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the training job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the training job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the training job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the training job was created.</p>
     */
    inline HyperParameterTrainingJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the training job was created.</p>
     */
    inline HyperParameterTrainingJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the training job started.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const{ return m_trainingStartTime; }

    /**
     * <p>The date and time that the training job started.</p>
     */
    inline bool TrainingStartTimeHasBeenSet() const { return m_trainingStartTimeHasBeenSet; }

    /**
     * <p>The date and time that the training job started.</p>
     */
    inline void SetTrainingStartTime(const Aws::Utils::DateTime& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = value; }

    /**
     * <p>The date and time that the training job started.</p>
     */
    inline void SetTrainingStartTime(Aws::Utils::DateTime&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::move(value); }

    /**
     * <p>The date and time that the training job started.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingStartTime(const Aws::Utils::DateTime& value) { SetTrainingStartTime(value); return *this;}

    /**
     * <p>The date and time that the training job started.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingStartTime(Aws::Utils::DateTime&& value) { SetTrainingStartTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }

    /**
     * <p>Specifies the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }

    /**
     * <p>Specifies the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = value; }

    /**
     * <p>Specifies the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::move(value); }

    /**
     * <p>Specifies the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}

    /**
     * <p>Specifies the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}


    /**
     * <p>The status of the training job.</p>
     */
    inline const TrainingJobStatus& GetTrainingJobStatus() const{ return m_trainingJobStatus; }

    /**
     * <p>The status of the training job.</p>
     */
    inline bool TrainingJobStatusHasBeenSet() const { return m_trainingJobStatusHasBeenSet; }

    /**
     * <p>The status of the training job.</p>
     */
    inline void SetTrainingJobStatus(const TrainingJobStatus& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }

    /**
     * <p>The status of the training job.</p>
     */
    inline void SetTrainingJobStatus(TrainingJobStatus&& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = std::move(value); }

    /**
     * <p>The status of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobStatus(const TrainingJobStatus& value) { SetTrainingJobStatus(value); return *this;}

    /**
     * <p>The status of the training job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTrainingJobStatus(TrainingJobStatus&& value) { SetTrainingJobStatus(std::move(value)); return *this;}


    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTunedHyperParameters() const{ return m_tunedHyperParameters; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline bool TunedHyperParametersHasBeenSet() const { return m_tunedHyperParametersHasBeenSet; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline void SetTunedHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters = value; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline void SetTunedHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters = std::move(value); }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTunedHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTunedHyperParameters(value); return *this;}

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& WithTunedHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTunedHyperParameters(std::move(value)); return *this;}

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& AddTunedHyperParameters(const Aws::String& key, const Aws::String& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(key, value); return *this; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& AddTunedHyperParameters(Aws::String&& key, const Aws::String& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& AddTunedHyperParameters(const Aws::String& key, Aws::String&& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& AddTunedHyperParameters(Aws::String&& key, Aws::String&& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& AddTunedHyperParameters(const char* key, Aws::String&& value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& AddTunedHyperParameters(Aws::String&& key, const char* value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the hyperparameters for which you specified ranges to search.</p>
     */
    inline HyperParameterTrainingJobSummary& AddTunedHyperParameters(const char* key, const char* value) { m_tunedHyperParametersHasBeenSet = true; m_tunedHyperParameters.emplace(key, value); return *this; }


    /**
     * <p>The reason that the training job failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason that the training job failed. </p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason that the training job failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason that the training job failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason that the training job failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason that the training job failed. </p>
     */
    inline HyperParameterTrainingJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason that the training job failed. </p>
     */
    inline HyperParameterTrainingJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the training job failed. </p>
     */
    inline HyperParameterTrainingJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The <a>FinalHyperParameterTuningJobObjectiveMetric</a> object that specifies
     * the value of the objective metric of the tuning job that launched this training
     * job.</p>
     */
    inline const FinalHyperParameterTuningJobObjectiveMetric& GetFinalHyperParameterTuningJobObjectiveMetric() const{ return m_finalHyperParameterTuningJobObjectiveMetric; }

    /**
     * <p>The <a>FinalHyperParameterTuningJobObjectiveMetric</a> object that specifies
     * the value of the objective metric of the tuning job that launched this training
     * job.</p>
     */
    inline bool FinalHyperParameterTuningJobObjectiveMetricHasBeenSet() const { return m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet; }

    /**
     * <p>The <a>FinalHyperParameterTuningJobObjectiveMetric</a> object that specifies
     * the value of the objective metric of the tuning job that launched this training
     * job.</p>
     */
    inline void SetFinalHyperParameterTuningJobObjectiveMetric(const FinalHyperParameterTuningJobObjectiveMetric& value) { m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet = true; m_finalHyperParameterTuningJobObjectiveMetric = value; }

    /**
     * <p>The <a>FinalHyperParameterTuningJobObjectiveMetric</a> object that specifies
     * the value of the objective metric of the tuning job that launched this training
     * job.</p>
     */
    inline void SetFinalHyperParameterTuningJobObjectiveMetric(FinalHyperParameterTuningJobObjectiveMetric&& value) { m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet = true; m_finalHyperParameterTuningJobObjectiveMetric = std::move(value); }

    /**
     * <p>The <a>FinalHyperParameterTuningJobObjectiveMetric</a> object that specifies
     * the value of the objective metric of the tuning job that launched this training
     * job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithFinalHyperParameterTuningJobObjectiveMetric(const FinalHyperParameterTuningJobObjectiveMetric& value) { SetFinalHyperParameterTuningJobObjectiveMetric(value); return *this;}

    /**
     * <p>The <a>FinalHyperParameterTuningJobObjectiveMetric</a> object that specifies
     * the value of the objective metric of the tuning job that launched this training
     * job.</p>
     */
    inline HyperParameterTrainingJobSummary& WithFinalHyperParameterTuningJobObjectiveMetric(FinalHyperParameterTuningJobObjectiveMetric&& value) { SetFinalHyperParameterTuningJobObjectiveMetric(std::move(value)); return *this;}


    /**
     * <p>The status of the objective metric for the training job:</p> <ul> <li>
     * <p>Succeeded: The final objective metric for the training job was evaluated by
     * the hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     * </li> </ul> <ul> <li> <p>Pending: The training job is in progress and evaluation
     * of its final objective metric is pending.</p> </li> </ul> <ul> <li> <p>Failed:
     * The final objective metric for the training job was not evaluated, and was not
     * used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p> </li> </ul>
     */
    inline const ObjectiveStatus& GetObjectiveStatus() const{ return m_objectiveStatus; }

    /**
     * <p>The status of the objective metric for the training job:</p> <ul> <li>
     * <p>Succeeded: The final objective metric for the training job was evaluated by
     * the hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     * </li> </ul> <ul> <li> <p>Pending: The training job is in progress and evaluation
     * of its final objective metric is pending.</p> </li> </ul> <ul> <li> <p>Failed:
     * The final objective metric for the training job was not evaluated, and was not
     * used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p> </li> </ul>
     */
    inline bool ObjectiveStatusHasBeenSet() const { return m_objectiveStatusHasBeenSet; }

    /**
     * <p>The status of the objective metric for the training job:</p> <ul> <li>
     * <p>Succeeded: The final objective metric for the training job was evaluated by
     * the hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     * </li> </ul> <ul> <li> <p>Pending: The training job is in progress and evaluation
     * of its final objective metric is pending.</p> </li> </ul> <ul> <li> <p>Failed:
     * The final objective metric for the training job was not evaluated, and was not
     * used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p> </li> </ul>
     */
    inline void SetObjectiveStatus(const ObjectiveStatus& value) { m_objectiveStatusHasBeenSet = true; m_objectiveStatus = value; }

    /**
     * <p>The status of the objective metric for the training job:</p> <ul> <li>
     * <p>Succeeded: The final objective metric for the training job was evaluated by
     * the hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     * </li> </ul> <ul> <li> <p>Pending: The training job is in progress and evaluation
     * of its final objective metric is pending.</p> </li> </ul> <ul> <li> <p>Failed:
     * The final objective metric for the training job was not evaluated, and was not
     * used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p> </li> </ul>
     */
    inline void SetObjectiveStatus(ObjectiveStatus&& value) { m_objectiveStatusHasBeenSet = true; m_objectiveStatus = std::move(value); }

    /**
     * <p>The status of the objective metric for the training job:</p> <ul> <li>
     * <p>Succeeded: The final objective metric for the training job was evaluated by
     * the hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     * </li> </ul> <ul> <li> <p>Pending: The training job is in progress and evaluation
     * of its final objective metric is pending.</p> </li> </ul> <ul> <li> <p>Failed:
     * The final objective metric for the training job was not evaluated, and was not
     * used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p> </li> </ul>
     */
    inline HyperParameterTrainingJobSummary& WithObjectiveStatus(const ObjectiveStatus& value) { SetObjectiveStatus(value); return *this;}

    /**
     * <p>The status of the objective metric for the training job:</p> <ul> <li>
     * <p>Succeeded: The final objective metric for the training job was evaluated by
     * the hyperparameter tuning job and used in the hyperparameter tuning process.</p>
     * </li> </ul> <ul> <li> <p>Pending: The training job is in progress and evaluation
     * of its final objective metric is pending.</p> </li> </ul> <ul> <li> <p>Failed:
     * The final objective metric for the training job was not evaluated, and was not
     * used in the hyperparameter tuning process. This typically occurs when the
     * training job failed or did not emit an objective metric.</p> </li> </ul>
     */
    inline HyperParameterTrainingJobSummary& WithObjectiveStatus(ObjectiveStatus&& value) { SetObjectiveStatus(std::move(value)); return *this;}

  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet;

    Aws::String m_tuningJobName;
    bool m_tuningJobNameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_trainingStartTime;
    bool m_trainingStartTimeHasBeenSet;

    Aws::Utils::DateTime m_trainingEndTime;
    bool m_trainingEndTimeHasBeenSet;

    TrainingJobStatus m_trainingJobStatus;
    bool m_trainingJobStatusHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tunedHyperParameters;
    bool m_tunedHyperParametersHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    FinalHyperParameterTuningJobObjectiveMetric m_finalHyperParameterTuningJobObjectiveMetric;
    bool m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet;

    ObjectiveStatus m_objectiveStatus;
    bool m_objectiveStatusHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
