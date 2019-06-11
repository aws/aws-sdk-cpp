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
#include <aws/sagemaker/model/ModelArtifacts.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/SecondaryStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/Channel.h>
#include <aws/sagemaker/model/SecondaryStatusTransition.h>
#include <aws/sagemaker/model/MetricData.h>
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
   * <p>Contains information about a training job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJob">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TrainingJob
  {
  public:
    TrainingJob();
    TrainingJob(Aws::Utils::Json::JsonView jsonValue);
    TrainingJob& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TrainingJob& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p>The name of the training job.</p>
     */
    inline TrainingJob& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the training job.</p>
     */
    inline TrainingJob& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}


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
    inline TrainingJob& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline TrainingJob& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline TrainingJob& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetTuningJobArn() const{ return m_tuningJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline bool TuningJobArnHasBeenSet() const { return m_tuningJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline void SetTuningJobArn(const Aws::String& value) { m_tuningJobArnHasBeenSet = true; m_tuningJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline void SetTuningJobArn(Aws::String&& value) { m_tuningJobArnHasBeenSet = true; m_tuningJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline void SetTuningJobArn(const char* value) { m_tuningJobArnHasBeenSet = true; m_tuningJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline TrainingJob& WithTuningJobArn(const Aws::String& value) { SetTuningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline TrainingJob& WithTuningJobArn(Aws::String&& value) { SetTuningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline TrainingJob& WithTuningJobArn(const char* value) { SetTuningJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline bool LabelingJobArnHasBeenSet() const { return m_labelingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline TrainingJob& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline TrainingJob& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline TrainingJob& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts.</p>
     */
    inline const ModelArtifacts& GetModelArtifacts() const{ return m_modelArtifacts; }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts.</p>
     */
    inline bool ModelArtifactsHasBeenSet() const { return m_modelArtifactsHasBeenSet; }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts.</p>
     */
    inline void SetModelArtifacts(const ModelArtifacts& value) { m_modelArtifactsHasBeenSet = true; m_modelArtifacts = value; }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts.</p>
     */
    inline void SetModelArtifacts(ModelArtifacts&& value) { m_modelArtifactsHasBeenSet = true; m_modelArtifacts = std::move(value); }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts.</p>
     */
    inline TrainingJob& WithModelArtifacts(const ModelArtifacts& value) { SetModelArtifacts(value); return *this;}

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts.</p>
     */
    inline TrainingJob& WithModelArtifacts(ModelArtifacts&& value) { SetModelArtifacts(std::move(value)); return *this;}


    /**
     * <p>The status of the training job.</p> <p>Training job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The training is in progress.</p> </li> <li>
     * <p> <code>Completed</code> - The training job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The training job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline const TrainingJobStatus& GetTrainingJobStatus() const{ return m_trainingJobStatus; }

    /**
     * <p>The status of the training job.</p> <p>Training job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The training is in progress.</p> </li> <li>
     * <p> <code>Completed</code> - The training job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The training job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline bool TrainingJobStatusHasBeenSet() const { return m_trainingJobStatusHasBeenSet; }

    /**
     * <p>The status of the training job.</p> <p>Training job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The training is in progress.</p> </li> <li>
     * <p> <code>Completed</code> - The training job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The training job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline void SetTrainingJobStatus(const TrainingJobStatus& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }

    /**
     * <p>The status of the training job.</p> <p>Training job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The training is in progress.</p> </li> <li>
     * <p> <code>Completed</code> - The training job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The training job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline void SetTrainingJobStatus(TrainingJobStatus&& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = std::move(value); }

    /**
     * <p>The status of the training job.</p> <p>Training job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The training is in progress.</p> </li> <li>
     * <p> <code>Completed</code> - The training job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The training job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline TrainingJob& WithTrainingJobStatus(const TrainingJobStatus& value) { SetTrainingJobStatus(value); return *this;}

    /**
     * <p>The status of the training job.</p> <p>Training job statuses are:</p> <ul>
     * <li> <p> <code>InProgress</code> - The training is in progress.</p> </li> <li>
     * <p> <code>Completed</code> - The training job has completed.</p> </li> <li> <p>
     * <code>Failed</code> - The training job has failed. To see the reason for the
     * failure, see the <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline TrainingJob& WithTrainingJobStatus(TrainingJobStatus&& value) { SetTrainingJobStatus(std::move(value)); return *this;}


    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information about the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p> <p>Amazon
     * SageMaker provides primary statuses and secondary statuses that apply to each of
     * them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Uploading</code> - Training is complete and the model artifacts are
     * being uploaded to the S3 location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd>
     * <ul> <li> <p> <code>Completed</code> - The training job has completed.</p> </li>
     * </ul> </dd> <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The
     * training job has failed. The reason for the failure is returned in the
     * <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <important> <p>Valid values for <code>SecondaryStatus</code> are
     * subject to change. </p> </important> <p>We no longer support the following
     * secondary statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p>
     * </li> <li> <p> <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline const SecondaryStatus& GetSecondaryStatus() const{ return m_secondaryStatus; }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information about the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p> <p>Amazon
     * SageMaker provides primary statuses and secondary statuses that apply to each of
     * them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Uploading</code> - Training is complete and the model artifacts are
     * being uploaded to the S3 location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd>
     * <ul> <li> <p> <code>Completed</code> - The training job has completed.</p> </li>
     * </ul> </dd> <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The
     * training job has failed. The reason for the failure is returned in the
     * <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <important> <p>Valid values for <code>SecondaryStatus</code> are
     * subject to change. </p> </important> <p>We no longer support the following
     * secondary statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p>
     * </li> <li> <p> <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline bool SecondaryStatusHasBeenSet() const { return m_secondaryStatusHasBeenSet; }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information about the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p> <p>Amazon
     * SageMaker provides primary statuses and secondary statuses that apply to each of
     * them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Uploading</code> - Training is complete and the model artifacts are
     * being uploaded to the S3 location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd>
     * <ul> <li> <p> <code>Completed</code> - The training job has completed.</p> </li>
     * </ul> </dd> <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The
     * training job has failed. The reason for the failure is returned in the
     * <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <important> <p>Valid values for <code>SecondaryStatus</code> are
     * subject to change. </p> </important> <p>We no longer support the following
     * secondary statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p>
     * </li> <li> <p> <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline void SetSecondaryStatus(const SecondaryStatus& value) { m_secondaryStatusHasBeenSet = true; m_secondaryStatus = value; }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information about the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p> <p>Amazon
     * SageMaker provides primary statuses and secondary statuses that apply to each of
     * them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Uploading</code> - Training is complete and the model artifacts are
     * being uploaded to the S3 location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd>
     * <ul> <li> <p> <code>Completed</code> - The training job has completed.</p> </li>
     * </ul> </dd> <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The
     * training job has failed. The reason for the failure is returned in the
     * <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <important> <p>Valid values for <code>SecondaryStatus</code> are
     * subject to change. </p> </important> <p>We no longer support the following
     * secondary statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p>
     * </li> <li> <p> <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline void SetSecondaryStatus(SecondaryStatus&& value) { m_secondaryStatusHasBeenSet = true; m_secondaryStatus = std::move(value); }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information about the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p> <p>Amazon
     * SageMaker provides primary statuses and secondary statuses that apply to each of
     * them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Uploading</code> - Training is complete and the model artifacts are
     * being uploaded to the S3 location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd>
     * <ul> <li> <p> <code>Completed</code> - The training job has completed.</p> </li>
     * </ul> </dd> <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The
     * training job has failed. The reason for the failure is returned in the
     * <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <important> <p>Valid values for <code>SecondaryStatus</code> are
     * subject to change. </p> </important> <p>We no longer support the following
     * secondary statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p>
     * </li> <li> <p> <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline TrainingJob& WithSecondaryStatus(const SecondaryStatus& value) { SetSecondaryStatus(value); return *this;}

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information about the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p> <p>Amazon
     * SageMaker provides primary statuses and secondary statuses that apply to each of
     * them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Uploading</code> - Training is complete and the model artifacts are
     * being uploaded to the S3 location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd>
     * <ul> <li> <p> <code>Completed</code> - The training job has completed.</p> </li>
     * </ul> </dd> <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The
     * training job has failed. The reason for the failure is returned in the
     * <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <important> <p>Valid values for <code>SecondaryStatus</code> are
     * subject to change. </p> </important> <p>We no longer support the following
     * secondary statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p>
     * </li> <li> <p> <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline TrainingJob& WithSecondaryStatus(SecondaryStatus&& value) { SetSecondaryStatus(std::move(value)); return *this;}


    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline TrainingJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline TrainingJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the training job failed, the reason it failed.</p>
     */
    inline TrainingJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = value; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::move(value); }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters.</p>
     */
    inline TrainingJob& AddHyperParameters(const char* key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }


    /**
     * <p>Information about the algorithm used for training, and algorithm
     * metadata.</p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }

    /**
     * <p>Information about the algorithm used for training, and algorithm
     * metadata.</p>
     */
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }

    /**
     * <p>Information about the algorithm used for training, and algorithm
     * metadata.</p>
     */
    inline void SetAlgorithmSpecification(const AlgorithmSpecification& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = value; }

    /**
     * <p>Information about the algorithm used for training, and algorithm
     * metadata.</p>
     */
    inline void SetAlgorithmSpecification(AlgorithmSpecification&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::move(value); }

    /**
     * <p>Information about the algorithm used for training, and algorithm
     * metadata.</p>
     */
    inline TrainingJob& WithAlgorithmSpecification(const AlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}

    /**
     * <p>Information about the algorithm used for training, and algorithm
     * metadata.</p>
     */
    inline TrainingJob& WithAlgorithmSpecification(AlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline TrainingJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline TrainingJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job.</p>
     */
    inline TrainingJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline void SetInputDataConfig(const Aws::Vector<Channel>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline void SetInputDataConfig(Aws::Vector<Channel>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline TrainingJob& WithInputDataConfig(const Aws::Vector<Channel>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline TrainingJob& WithInputDataConfig(Aws::Vector<Channel>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline TrainingJob& AddInputDataConfig(const Channel& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel.</p>
     */
    inline TrainingJob& AddInputDataConfig(Channel&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts.</p>
     */
    inline TrainingJob& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts.</p>
     */
    inline TrainingJob& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training.</p>
     */
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training.</p>
     */
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training.</p>
     */
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training.</p>
     */
    inline TrainingJob& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training.</p>
     */
    inline TrainingJob& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline TrainingJob& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline TrainingJob& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline TrainingJob& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline TrainingJob& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline TrainingJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline TrainingJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const{ return m_trainingStartTime; }

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline bool TrainingStartTimeHasBeenSet() const { return m_trainingStartTimeHasBeenSet; }

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline void SetTrainingStartTime(const Aws::Utils::DateTime& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = value; }

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline void SetTrainingStartTime(Aws::Utils::DateTime&& value) { m_trainingStartTimeHasBeenSet = true; m_trainingStartTime = std::move(value); }

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline TrainingJob& WithTrainingStartTime(const Aws::Utils::DateTime& value) { SetTrainingStartTime(value); return *this;}

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline TrainingJob& WithTrainingStartTime(Aws::Utils::DateTime&& value) { SetTrainingStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = value; }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::move(value); }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline TrainingJob& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline TrainingJob& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline TrainingJob& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline TrainingJob& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline const Aws::Vector<SecondaryStatusTransition>& GetSecondaryStatusTransitions() const{ return m_secondaryStatusTransitions; }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline bool SecondaryStatusTransitionsHasBeenSet() const { return m_secondaryStatusTransitionsHasBeenSet; }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline void SetSecondaryStatusTransitions(const Aws::Vector<SecondaryStatusTransition>& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions = value; }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline void SetSecondaryStatusTransitions(Aws::Vector<SecondaryStatusTransition>&& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions = std::move(value); }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline TrainingJob& WithSecondaryStatusTransitions(const Aws::Vector<SecondaryStatusTransition>& value) { SetSecondaryStatusTransitions(value); return *this;}

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline TrainingJob& WithSecondaryStatusTransitions(Aws::Vector<SecondaryStatusTransition>&& value) { SetSecondaryStatusTransitions(std::move(value)); return *this;}

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline TrainingJob& AddSecondaryStatusTransitions(const SecondaryStatusTransition& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions.push_back(value); return *this; }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline TrainingJob& AddSecondaryStatusTransitions(SecondaryStatusTransition&& value) { m_secondaryStatusTransitionsHasBeenSet = true; m_secondaryStatusTransitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline const Aws::Vector<MetricData>& GetFinalMetricDataList() const{ return m_finalMetricDataList; }

    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline bool FinalMetricDataListHasBeenSet() const { return m_finalMetricDataListHasBeenSet; }

    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline void SetFinalMetricDataList(const Aws::Vector<MetricData>& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList = value; }

    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline void SetFinalMetricDataList(Aws::Vector<MetricData>&& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList = std::move(value); }

    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline TrainingJob& WithFinalMetricDataList(const Aws::Vector<MetricData>& value) { SetFinalMetricDataList(value); return *this;}

    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline TrainingJob& WithFinalMetricDataList(Aws::Vector<MetricData>&& value) { SetFinalMetricDataList(std::move(value)); return *this;}

    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline TrainingJob& AddFinalMetricDataList(const MetricData& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList.push_back(value); return *this; }

    /**
     * <p>A list of final metric values that are set when the training job completes.
     * Used only if the training job was configured to use metrics.</p>
     */
    inline TrainingJob& AddFinalMetricDataList(MetricData&& value) { m_finalMetricDataListHasBeenSet = true; m_finalMetricDataList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the <code>TrainingJob</code> was created with network isolation, the value
     * is set to <code>true</code>. If network isolation is enabled, nodes can't
     * communicate beyond the VPC they run in.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>If the <code>TrainingJob</code> was created with network isolation, the value
     * is set to <code>true</code>. If network isolation is enabled, nodes can't
     * communicate beyond the VPC they run in.</p>
     */
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }

    /**
     * <p>If the <code>TrainingJob</code> was created with network isolation, the value
     * is set to <code>true</code>. If network isolation is enabled, nodes can't
     * communicate beyond the VPC they run in.</p>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }

    /**
     * <p>If the <code>TrainingJob</code> was created with network isolation, the value
     * is set to <code>true</code>. If network isolation is enabled, nodes can't
     * communicate beyond the VPC they run in.</p>
     */
    inline TrainingJob& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}


    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const{ return m_enableInterContainerTrafficEncryption; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline bool EnableInterContainerTrafficEncryptionHasBeenSet() const { return m_enableInterContainerTrafficEncryptionHasBeenSet; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryptionHasBeenSet = true; m_enableInterContainerTrafficEncryption = value; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline TrainingJob& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}


    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline TrainingJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline TrainingJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline TrainingJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline TrainingJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet;

    Aws::String m_tuningJobArn;
    bool m_tuningJobArnHasBeenSet;

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet;

    ModelArtifacts m_modelArtifacts;
    bool m_modelArtifactsHasBeenSet;

    TrainingJobStatus m_trainingJobStatus;
    bool m_trainingJobStatusHasBeenSet;

    SecondaryStatus m_secondaryStatus;
    bool m_secondaryStatusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet;

    AlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_trainingStartTime;
    bool m_trainingStartTimeHasBeenSet;

    Aws::Utils::DateTime m_trainingEndTime;
    bool m_trainingEndTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    Aws::Vector<SecondaryStatusTransition> m_secondaryStatusTransitions;
    bool m_secondaryStatusTransitionsHasBeenSet;

    Aws::Vector<MetricData> m_finalMetricDataList;
    bool m_finalMetricDataListHasBeenSet;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet;

    bool m_enableInterContainerTrafficEncryption;
    bool m_enableInterContainerTrafficEncryptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
