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
#include <aws/sagemaker/model/HyperParameterTuningJobConfig.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobDefinition.h>
#include <aws/sagemaker/model/HyperParameterTuningJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatusCounters.h>
#include <aws/sagemaker/model/ObjectiveStatusCounters.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobSummary.h>
#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API DescribeHyperParameterTuningJobResult
  {
  public:
    DescribeHyperParameterTuningJobResult();
    DescribeHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeHyperParameterTuningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobName = value; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobName = std::move(value); }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobName.assign(value); }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}

    /**
     * <p>The name of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const{ return m_hyperParameterTuningJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(const Aws::String& value) { m_hyperParameterTuningJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(Aws::String&& value) { m_hyperParameterTuningJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobArn(const char* value) { m_hyperParameterTuningJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const Aws::String& value) { SetHyperParameterTuningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(Aws::String&& value) { SetHyperParameterTuningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const char* value) { SetHyperParameterTuningJobArn(value); return *this;}


    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that specifies the
     * configuration of the tuning job.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHyperParameterTuningJobConfig() const{ return m_hyperParameterTuningJobConfig; }

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that specifies the
     * configuration of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { m_hyperParameterTuningJobConfig = value; }

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that specifies the
     * configuration of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { m_hyperParameterTuningJobConfig = std::move(value); }

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that specifies the
     * configuration of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { SetHyperParameterTuningJobConfig(value); return *this;}

    /**
     * <p>The <a>HyperParameterTuningJobConfig</a> object that specifies the
     * configuration of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { SetHyperParameterTuningJobConfig(std::move(value)); return *this;}


    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that specifies the
     * definition of the training jobs that this tuning job launches.</p>
     */
    inline const HyperParameterTrainingJobDefinition& GetTrainingJobDefinition() const{ return m_trainingJobDefinition; }

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that specifies the
     * definition of the training jobs that this tuning job launches.</p>
     */
    inline void SetTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinition = value; }

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that specifies the
     * definition of the training jobs that this tuning job launches.</p>
     */
    inline void SetTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinition = std::move(value); }

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that specifies the
     * definition of the training jobs that this tuning job launches.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { SetTrainingJobDefinition(value); return *this;}

    /**
     * <p>The <a>HyperParameterTrainingJobDefinition</a> object that specifies the
     * definition of the training jobs that this tuning job launches.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { SetTrainingJobDefinition(std::move(value)); return *this;}


    /**
     * <p>The status of the tuning job: InProgress, Completed, Failed, Stopping, or
     * Stopped.</p>
     */
    inline const HyperParameterTuningJobStatus& GetHyperParameterTuningJobStatus() const{ return m_hyperParameterTuningJobStatus; }

    /**
     * <p>The status of the tuning job: InProgress, Completed, Failed, Stopping, or
     * Stopped.</p>
     */
    inline void SetHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { m_hyperParameterTuningJobStatus = value; }

    /**
     * <p>The status of the tuning job: InProgress, Completed, Failed, Stopping, or
     * Stopped.</p>
     */
    inline void SetHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { m_hyperParameterTuningJobStatus = std::move(value); }

    /**
     * <p>The status of the tuning job: InProgress, Completed, Failed, Stopping, or
     * Stopped.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobStatus(const HyperParameterTuningJobStatus& value) { SetHyperParameterTuningJobStatus(value); return *this;}

    /**
     * <p>The status of the tuning job: InProgress, Completed, Failed, Stopping, or
     * Stopped.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningJobStatus(HyperParameterTuningJobStatus&& value) { SetHyperParameterTuningJobStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the tuning job started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the tuning job started.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time that the tuning job started.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the tuning job started.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the tuning job started.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetHyperParameterTuningEndTime() const{ return m_hyperParameterTuningEndTime; }

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline void SetHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { m_hyperParameterTuningEndTime = value; }

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline void SetHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { m_hyperParameterTuningEndTime = std::move(value); }

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningEndTime(const Aws::Utils::DateTime& value) { SetHyperParameterTuningEndTime(value); return *this;}

    /**
     * <p>The date and time that the tuning job ended.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithHyperParameterTuningEndTime(Aws::Utils::DateTime&& value) { SetHyperParameterTuningEndTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the status of the tuning job was modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the status of the tuning job was modified. </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the status of the tuning job was modified. </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the status of the tuning job was modified. </p>
     */
    inline DescribeHyperParameterTuningJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the status of the tuning job was modified. </p>
     */
    inline DescribeHyperParameterTuningJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the number of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline const TrainingJobStatusCounters& GetTrainingJobStatusCounters() const{ return m_trainingJobStatusCounters; }

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the number of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline void SetTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { m_trainingJobStatusCounters = value; }

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the number of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline void SetTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { m_trainingJobStatusCounters = std::move(value); }

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the number of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobStatusCounters(const TrainingJobStatusCounters& value) { SetTrainingJobStatusCounters(value); return *this;}

    /**
     * <p>The <a>TrainingJobStatusCounters</a> object that specifies the number of
     * training jobs, categorized by status, that this tuning job launched.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithTrainingJobStatusCounters(TrainingJobStatusCounters&& value) { SetTrainingJobStatusCounters(std::move(value)); return *this;}


    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the number of
     * training jobs, categorized by the status of their final objective metric, that
     * this tuning job launched.</p>
     */
    inline const ObjectiveStatusCounters& GetObjectiveStatusCounters() const{ return m_objectiveStatusCounters; }

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the number of
     * training jobs, categorized by the status of their final objective metric, that
     * this tuning job launched.</p>
     */
    inline void SetObjectiveStatusCounters(const ObjectiveStatusCounters& value) { m_objectiveStatusCounters = value; }

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the number of
     * training jobs, categorized by the status of their final objective metric, that
     * this tuning job launched.</p>
     */
    inline void SetObjectiveStatusCounters(ObjectiveStatusCounters&& value) { m_objectiveStatusCounters = std::move(value); }

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the number of
     * training jobs, categorized by the status of their final objective metric, that
     * this tuning job launched.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithObjectiveStatusCounters(const ObjectiveStatusCounters& value) { SetObjectiveStatusCounters(value); return *this;}

    /**
     * <p>The <a>ObjectiveStatusCounters</a> object that specifies the number of
     * training jobs, categorized by the status of their final objective metric, that
     * this tuning job launched.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithObjectiveStatusCounters(ObjectiveStatusCounters&& value) { SetObjectiveStatusCounters(std::move(value)); return *this;}


    /**
     * <p>A <a>TrainingJobSummary</a> object that describes the training job that
     * completed with the best current <a>HyperParameterTuningJobObjective</a>.</p>
     */
    inline const HyperParameterTrainingJobSummary& GetBestTrainingJob() const{ return m_bestTrainingJob; }

    /**
     * <p>A <a>TrainingJobSummary</a> object that describes the training job that
     * completed with the best current <a>HyperParameterTuningJobObjective</a>.</p>
     */
    inline void SetBestTrainingJob(const HyperParameterTrainingJobSummary& value) { m_bestTrainingJob = value; }

    /**
     * <p>A <a>TrainingJobSummary</a> object that describes the training job that
     * completed with the best current <a>HyperParameterTuningJobObjective</a>.</p>
     */
    inline void SetBestTrainingJob(HyperParameterTrainingJobSummary&& value) { m_bestTrainingJob = std::move(value); }

    /**
     * <p>A <a>TrainingJobSummary</a> object that describes the training job that
     * completed with the best current <a>HyperParameterTuningJobObjective</a>.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithBestTrainingJob(const HyperParameterTrainingJobSummary& value) { SetBestTrainingJob(value); return *this;}

    /**
     * <p>A <a>TrainingJobSummary</a> object that describes the training job that
     * completed with the best current <a>HyperParameterTuningJobObjective</a>.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithBestTrainingJob(HyperParameterTrainingJobSummary&& value) { SetBestTrainingJob(std::move(value)); return *this;}


    /**
     * <p>If the hyperparameter tuning job is an warm start tuning job with a
     * <code>WarmStartType</code> of <code>IDENTICAL_DATA_AND_ALGORITHM</code>, this is
     * the <a>TrainingJobSummary</a> for the training job with the best objective
     * metric value of all training jobs launched by this tuning job and all parent
     * jobs specified for the warm start tuning job.</p>
     */
    inline const HyperParameterTrainingJobSummary& GetOverallBestTrainingJob() const{ return m_overallBestTrainingJob; }

    /**
     * <p>If the hyperparameter tuning job is an warm start tuning job with a
     * <code>WarmStartType</code> of <code>IDENTICAL_DATA_AND_ALGORITHM</code>, this is
     * the <a>TrainingJobSummary</a> for the training job with the best objective
     * metric value of all training jobs launched by this tuning job and all parent
     * jobs specified for the warm start tuning job.</p>
     */
    inline void SetOverallBestTrainingJob(const HyperParameterTrainingJobSummary& value) { m_overallBestTrainingJob = value; }

    /**
     * <p>If the hyperparameter tuning job is an warm start tuning job with a
     * <code>WarmStartType</code> of <code>IDENTICAL_DATA_AND_ALGORITHM</code>, this is
     * the <a>TrainingJobSummary</a> for the training job with the best objective
     * metric value of all training jobs launched by this tuning job and all parent
     * jobs specified for the warm start tuning job.</p>
     */
    inline void SetOverallBestTrainingJob(HyperParameterTrainingJobSummary&& value) { m_overallBestTrainingJob = std::move(value); }

    /**
     * <p>If the hyperparameter tuning job is an warm start tuning job with a
     * <code>WarmStartType</code> of <code>IDENTICAL_DATA_AND_ALGORITHM</code>, this is
     * the <a>TrainingJobSummary</a> for the training job with the best objective
     * metric value of all training jobs launched by this tuning job and all parent
     * jobs specified for the warm start tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithOverallBestTrainingJob(const HyperParameterTrainingJobSummary& value) { SetOverallBestTrainingJob(value); return *this;}

    /**
     * <p>If the hyperparameter tuning job is an warm start tuning job with a
     * <code>WarmStartType</code> of <code>IDENTICAL_DATA_AND_ALGORITHM</code>, this is
     * the <a>TrainingJobSummary</a> for the training job with the best objective
     * metric value of all training jobs launched by this tuning job and all parent
     * jobs specified for the warm start tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithOverallBestTrainingJob(HyperParameterTrainingJobSummary&& value) { SetOverallBestTrainingJob(std::move(value)); return *this;}


    /**
     * <p>The configuration for starting the hyperparameter parameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p>
     */
    inline const HyperParameterTuningJobWarmStartConfig& GetWarmStartConfig() const{ return m_warmStartConfig; }

    /**
     * <p>The configuration for starting the hyperparameter parameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p>
     */
    inline void SetWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { m_warmStartConfig = value; }

    /**
     * <p>The configuration for starting the hyperparameter parameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p>
     */
    inline void SetWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { m_warmStartConfig = std::move(value); }

    /**
     * <p>The configuration for starting the hyperparameter parameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { SetWarmStartConfig(value); return *this;}

    /**
     * <p>The configuration for starting the hyperparameter parameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { SetWarmStartConfig(std::move(value)); return *this;}


    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the tuning job failed, the reason it failed.</p>
     */
    inline DescribeHyperParameterTuningJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_hyperParameterTuningJobName;

    Aws::String m_hyperParameterTuningJobArn;

    HyperParameterTuningJobConfig m_hyperParameterTuningJobConfig;

    HyperParameterTrainingJobDefinition m_trainingJobDefinition;

    HyperParameterTuningJobStatus m_hyperParameterTuningJobStatus;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_hyperParameterTuningEndTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    TrainingJobStatusCounters m_trainingJobStatusCounters;

    ObjectiveStatusCounters m_objectiveStatusCounters;

    HyperParameterTrainingJobSummary m_bestTrainingJob;

    HyperParameterTrainingJobSummary m_overallBestTrainingJob;

    HyperParameterTuningJobWarmStartConfig m_warmStartConfig;

    Aws::String m_failureReason;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
