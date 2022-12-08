/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/sagemaker/model/CheckpointConfig.h>
#include <aws/sagemaker/model/DebugHookConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/TensorBoardOutputConfig.h>
#include <aws/sagemaker/model/ProfilerConfig.h>
#include <aws/sagemaker/model/ProfilingStatus.h>
#include <aws/sagemaker/model/RetryStrategy.h>
#include <aws/sagemaker/model/WarmPoolStatus.h>
#include <aws/sagemaker/model/Channel.h>
#include <aws/sagemaker/model/SecondaryStatusTransition.h>
#include <aws/sagemaker/model/MetricData.h>
#include <aws/sagemaker/model/DebugRuleConfiguration.h>
#include <aws/sagemaker/model/DebugRuleEvaluationStatus.h>
#include <aws/sagemaker/model/ProfilerRuleConfiguration.h>
#include <aws/sagemaker/model/ProfilerRuleEvaluationStatus.h>
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
  class DescribeTrainingJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeTrainingJobResult();
    AWS_SAGEMAKER_API DescribeTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Name of the model training job. </p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }

    /**
     * <p> Name of the model training job. </p>
     */
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobName = value; }

    /**
     * <p> Name of the model training job. </p>
     */
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobName = std::move(value); }

    /**
     * <p> Name of the model training job. </p>
     */
    inline void SetTrainingJobName(const char* value) { m_trainingJobName.assign(value); }

    /**
     * <p> Name of the model training job. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p> Name of the model training job. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p> Name of the model training job. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetTuningJobArn() const{ return m_tuningJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline void SetTuningJobArn(const Aws::String& value) { m_tuningJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline void SetTuningJobArn(Aws::String&& value) { m_tuningJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline void SetTuningJobArn(const char* value) { m_tuningJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline DescribeTrainingJobResult& WithTuningJobArn(const Aws::String& value) { SetTuningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline DescribeTrainingJobResult& WithTuningJobArn(Aws::String&& value) { SetTuningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the associated hyperparameter tuning job if
     * the training job was launched by a hyperparameter tuning job.</p>
     */
    inline DescribeTrainingJobResult& WithTuningJobArn(const char* value) { SetTuningJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline DescribeTrainingJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline DescribeTrainingJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker Ground Truth labeling job
     * that created the transform or training job.</p>
     */
    inline DescribeTrainingJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline DescribeTrainingJobResult& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline DescribeTrainingJobResult& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AutoML job.</p>
     */
    inline DescribeTrainingJobResult& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}


    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline const ModelArtifacts& GetModelArtifacts() const{ return m_modelArtifacts; }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline void SetModelArtifacts(const ModelArtifacts& value) { m_modelArtifacts = value; }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline void SetModelArtifacts(ModelArtifacts&& value) { m_modelArtifacts = std::move(value); }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithModelArtifacts(const ModelArtifacts& value) { SetModelArtifacts(value); return *this;}

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithModelArtifacts(ModelArtifacts&& value) { SetModelArtifacts(std::move(value)); return *this;}


    /**
     * <p>The status of the training job.</p> <p>SageMaker provides the following
     * training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The training
     * is in progress.</p> </li> <li> <p> <code>Completed</code> - The training job has
     * completed.</p> </li> <li> <p> <code>Failed</code> - The training job has failed.
     * To see the reason for the failure, see the <code>FailureReason</code> field in
     * the response to a <code>DescribeTrainingJobResponse</code> call.</p> </li> <li>
     * <p> <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline const TrainingJobStatus& GetTrainingJobStatus() const{ return m_trainingJobStatus; }

    /**
     * <p>The status of the training job.</p> <p>SageMaker provides the following
     * training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The training
     * is in progress.</p> </li> <li> <p> <code>Completed</code> - The training job has
     * completed.</p> </li> <li> <p> <code>Failed</code> - The training job has failed.
     * To see the reason for the failure, see the <code>FailureReason</code> field in
     * the response to a <code>DescribeTrainingJobResponse</code> call.</p> </li> <li>
     * <p> <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline void SetTrainingJobStatus(const TrainingJobStatus& value) { m_trainingJobStatus = value; }

    /**
     * <p>The status of the training job.</p> <p>SageMaker provides the following
     * training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The training
     * is in progress.</p> </li> <li> <p> <code>Completed</code> - The training job has
     * completed.</p> </li> <li> <p> <code>Failed</code> - The training job has failed.
     * To see the reason for the failure, see the <code>FailureReason</code> field in
     * the response to a <code>DescribeTrainingJobResponse</code> call.</p> </li> <li>
     * <p> <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline void SetTrainingJobStatus(TrainingJobStatus&& value) { m_trainingJobStatus = std::move(value); }

    /**
     * <p>The status of the training job.</p> <p>SageMaker provides the following
     * training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The training
     * is in progress.</p> </li> <li> <p> <code>Completed</code> - The training job has
     * completed.</p> </li> <li> <p> <code>Failed</code> - The training job has failed.
     * To see the reason for the failure, see the <code>FailureReason</code> field in
     * the response to a <code>DescribeTrainingJobResponse</code> call.</p> </li> <li>
     * <p> <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobStatus(const TrainingJobStatus& value) { SetTrainingJobStatus(value); return *this;}

    /**
     * <p>The status of the training job.</p> <p>SageMaker provides the following
     * training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The training
     * is in progress.</p> </li> <li> <p> <code>Completed</code> - The training job has
     * completed.</p> </li> <li> <p> <code>Failed</code> - The training job has failed.
     * To see the reason for the failure, see the <code>FailureReason</code> field in
     * the response to a <code>DescribeTrainingJobResponse</code> call.</p> </li> <li>
     * <p> <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobStatus(TrainingJobStatus&& value) { SetTrainingJobStatus(std::move(value)); return *this;}


    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p>
     * <p>SageMaker provides primary statuses and secondary statuses that apply to each
     * of them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Interrupted</code> - The job stopped because the managed spot training
     * instances were interrupted. </p> </li> <li> <p> <code>Uploading</code> -
     * Training is complete and the model artifacts are being uploaded to the S3
     * location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p>
     * <code>Completed</code> - The training job has completed.</p> </li> </ul> </dd>
     * <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The training job has
     * failed. The reason for the failure is returned in the <code>FailureReason</code>
     * field of <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd>
     * <dt>Stopped</dt> <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job
     * stopped because it exceeded the maximum allowed runtime.</p> </li> <li> <p>
     * <code>MaxWaitTimeExceeded</code> - The job stopped because it exceeded the
     * maximum allowed wait time.</p> </li> <li> <p> <code>Stopped</code> - The
     * training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul> <li>
     * <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul> </dd>
     * </dl>  <p>Valid values for <code>SecondaryStatus</code> are subject
     * to change. </p>  <p>We no longer support the following secondary
     * statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li>
     * <p> <code>PreparingTraining</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline const SecondaryStatus& GetSecondaryStatus() const{ return m_secondaryStatus; }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p>
     * <p>SageMaker provides primary statuses and secondary statuses that apply to each
     * of them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Interrupted</code> - The job stopped because the managed spot training
     * instances were interrupted. </p> </li> <li> <p> <code>Uploading</code> -
     * Training is complete and the model artifacts are being uploaded to the S3
     * location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p>
     * <code>Completed</code> - The training job has completed.</p> </li> </ul> </dd>
     * <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The training job has
     * failed. The reason for the failure is returned in the <code>FailureReason</code>
     * field of <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd>
     * <dt>Stopped</dt> <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job
     * stopped because it exceeded the maximum allowed runtime.</p> </li> <li> <p>
     * <code>MaxWaitTimeExceeded</code> - The job stopped because it exceeded the
     * maximum allowed wait time.</p> </li> <li> <p> <code>Stopped</code> - The
     * training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul> <li>
     * <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul> </dd>
     * </dl>  <p>Valid values for <code>SecondaryStatus</code> are subject
     * to change. </p>  <p>We no longer support the following secondary
     * statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li>
     * <p> <code>PreparingTraining</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline void SetSecondaryStatus(const SecondaryStatus& value) { m_secondaryStatus = value; }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p>
     * <p>SageMaker provides primary statuses and secondary statuses that apply to each
     * of them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Interrupted</code> - The job stopped because the managed spot training
     * instances were interrupted. </p> </li> <li> <p> <code>Uploading</code> -
     * Training is complete and the model artifacts are being uploaded to the S3
     * location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p>
     * <code>Completed</code> - The training job has completed.</p> </li> </ul> </dd>
     * <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The training job has
     * failed. The reason for the failure is returned in the <code>FailureReason</code>
     * field of <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd>
     * <dt>Stopped</dt> <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job
     * stopped because it exceeded the maximum allowed runtime.</p> </li> <li> <p>
     * <code>MaxWaitTimeExceeded</code> - The job stopped because it exceeded the
     * maximum allowed wait time.</p> </li> <li> <p> <code>Stopped</code> - The
     * training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul> <li>
     * <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul> </dd>
     * </dl>  <p>Valid values for <code>SecondaryStatus</code> are subject
     * to change. </p>  <p>We no longer support the following secondary
     * statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li>
     * <p> <code>PreparingTraining</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline void SetSecondaryStatus(SecondaryStatus&& value) { m_secondaryStatus = std::move(value); }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p>
     * <p>SageMaker provides primary statuses and secondary statuses that apply to each
     * of them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Interrupted</code> - The job stopped because the managed spot training
     * instances were interrupted. </p> </li> <li> <p> <code>Uploading</code> -
     * Training is complete and the model artifacts are being uploaded to the S3
     * location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p>
     * <code>Completed</code> - The training job has completed.</p> </li> </ul> </dd>
     * <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The training job has
     * failed. The reason for the failure is returned in the <code>FailureReason</code>
     * field of <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd>
     * <dt>Stopped</dt> <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job
     * stopped because it exceeded the maximum allowed runtime.</p> </li> <li> <p>
     * <code>MaxWaitTimeExceeded</code> - The job stopped because it exceeded the
     * maximum allowed wait time.</p> </li> <li> <p> <code>Stopped</code> - The
     * training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul> <li>
     * <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul> </dd>
     * </dl>  <p>Valid values for <code>SecondaryStatus</code> are subject
     * to change. </p>  <p>We no longer support the following secondary
     * statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li>
     * <p> <code>PreparingTraining</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline DescribeTrainingJobResult& WithSecondaryStatus(const SecondaryStatus& value) { SetSecondaryStatus(value); return *this;}

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
     * <code>StatusMessage</code> under <a>SecondaryStatusTransition</a>.</p>
     * <p>SageMaker provides primary statuses and secondary statuses that apply to each
     * of them:</p> <dl> <dt>InProgress</dt> <dd> <ul> <li> <p> <code>Starting</code> -
     * Starting the training job.</p> </li> <li> <p> <code>Downloading</code> - An
     * optional stage for algorithms that support <code>File</code> training input
     * mode. It indicates that data is being downloaded to the ML storage volumes.</p>
     * </li> <li> <p> <code>Training</code> - Training is in progress.</p> </li> <li>
     * <p> <code>Interrupted</code> - The job stopped because the managed spot training
     * instances were interrupted. </p> </li> <li> <p> <code>Uploading</code> -
     * Training is complete and the model artifacts are being uploaded to the S3
     * location.</p> </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p>
     * <code>Completed</code> - The training job has completed.</p> </li> </ul> </dd>
     * <dt>Failed</dt> <dd> <ul> <li> <p> <code>Failed</code> - The training job has
     * failed. The reason for the failure is returned in the <code>FailureReason</code>
     * field of <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd>
     * <dt>Stopped</dt> <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job
     * stopped because it exceeded the maximum allowed runtime.</p> </li> <li> <p>
     * <code>MaxWaitTimeExceeded</code> - The job stopped because it exceeded the
     * maximum allowed wait time.</p> </li> <li> <p> <code>Stopped</code> - The
     * training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul> <li>
     * <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul> </dd>
     * </dl>  <p>Valid values for <code>SecondaryStatus</code> are subject
     * to change. </p>  <p>We no longer support the following secondary
     * statuses:</p> <ul> <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li>
     * <p> <code>PreparingTraining</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline DescribeTrainingJobResult& WithSecondaryStatus(SecondaryStatus&& value) { SetSecondaryStatus(std::move(value)); return *this;}


    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline DescribeTrainingJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline DescribeTrainingJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline DescribeTrainingJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParameters = value; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParameters = std::move(value); }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const char* key, const char* value) { m_hyperParameters.emplace(key, value); return *this; }


    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline void SetAlgorithmSpecification(const AlgorithmSpecification& value) { m_algorithmSpecification = value; }

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline void SetAlgorithmSpecification(AlgorithmSpecification&& value) { m_algorithmSpecification = std::move(value); }

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline DescribeTrainingJobResult& WithAlgorithmSpecification(const AlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline DescribeTrainingJobResult& WithAlgorithmSpecification(AlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Identity and Access Management (IAM) role configured
     * for the training job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline void SetInputDataConfig(const Aws::Vector<Channel>& value) { m_inputDataConfig = value; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline void SetInputDataConfig(Aws::Vector<Channel>&& value) { m_inputDataConfig = std::move(value); }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& WithInputDataConfig(const Aws::Vector<Channel>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& WithInputDataConfig(Aws::Vector<Channel>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& AddInputDataConfig(const Channel& value) { m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& AddInputDataConfig(Channel&& value) { m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. SageMaker creates subfolders for model artifacts. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. SageMaker creates subfolders for model artifacts. </p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfig = value; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. SageMaker creates subfolders for model artifacts. </p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfig = std::move(value); }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. SageMaker creates subfolders for model artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. SageMaker creates subfolders for model artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfig = value; }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfig = std::move(value); }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline DescribeTrainingJobResult& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline DescribeTrainingJobResult& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


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
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline DescribeTrainingJobResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that this training job has
     * access to. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline DescribeTrainingJobResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model training job can run. It also specifies
     * how long a managed Spot training job has to complete. When the job reaches the
     * time limit, SageMaker ends the training job. Use this API to cap model training
     * costs.</p> <p>To stop a job, SageMaker sends the algorithm the
     * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts, so the
     * results of training are not lost. </p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model training job can run. It also specifies
     * how long a managed Spot training job has to complete. When the job reaches the
     * time limit, SageMaker ends the training job. Use this API to cap model training
     * costs.</p> <p>To stop a job, SageMaker sends the algorithm the
     * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts, so the
     * results of training are not lost. </p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model training job can run. It also specifies
     * how long a managed Spot training job has to complete. When the job reaches the
     * time limit, SageMaker ends the training job. Use this API to cap model training
     * costs.</p> <p>To stop a job, SageMaker sends the algorithm the
     * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts, so the
     * results of training are not lost. </p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model training job can run. It also specifies
     * how long a managed Spot training job has to complete. When the job reaches the
     * time limit, SageMaker ends the training job. Use this API to cap model training
     * costs.</p> <p>To stop a job, SageMaker sends the algorithm the
     * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts, so the
     * results of training are not lost. </p>
     */
    inline DescribeTrainingJobResult& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model training job can run. It also specifies
     * how long a managed Spot training job has to complete. When the job reaches the
     * time limit, SageMaker ends the training job. Use this API to cap model training
     * costs.</p> <p>To stop a job, SageMaker sends the algorithm the
     * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts, so the
     * results of training are not lost. </p>
     */
    inline DescribeTrainingJobResult& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline DescribeTrainingJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline DescribeTrainingJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline void SetTrainingStartTime(const Aws::Utils::DateTime& value) { m_trainingStartTime = value; }

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline void SetTrainingStartTime(Aws::Utils::DateTime&& value) { m_trainingStartTime = std::move(value); }

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingStartTime(const Aws::Utils::DateTime& value) { SetTrainingStartTime(value); return *this;}

    /**
     * <p>Indicates the time when the training job starts on training instances. You
     * are billed for the time interval between this time and the value of
     * <code>TrainingEndTime</code>. The start time in CloudWatch Logs might be later
     * than this time. The difference is due to the time it takes to download the
     * training data and to the size of the training container.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingStartTime(Aws::Utils::DateTime&& value) { SetTrainingStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when SageMaker
     * detects a job failure.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when SageMaker
     * detects a job failure.</p>
     */
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTime = value; }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when SageMaker
     * detects a job failure.</p>
     */
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTime = std::move(value); }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when SageMaker
     * detects a job failure.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when SageMaker
     * detects a job failure.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline DescribeTrainingJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline DescribeTrainingJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline const Aws::Vector<SecondaryStatusTransition>& GetSecondaryStatusTransitions() const{ return m_secondaryStatusTransitions; }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline void SetSecondaryStatusTransitions(const Aws::Vector<SecondaryStatusTransition>& value) { m_secondaryStatusTransitions = value; }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline void SetSecondaryStatusTransitions(Aws::Vector<SecondaryStatusTransition>&& value) { m_secondaryStatusTransitions = std::move(value); }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline DescribeTrainingJobResult& WithSecondaryStatusTransitions(const Aws::Vector<SecondaryStatusTransition>& value) { SetSecondaryStatusTransitions(value); return *this;}

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline DescribeTrainingJobResult& WithSecondaryStatusTransitions(Aws::Vector<SecondaryStatusTransition>&& value) { SetSecondaryStatusTransitions(std::move(value)); return *this;}

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline DescribeTrainingJobResult& AddSecondaryStatusTransitions(const SecondaryStatusTransition& value) { m_secondaryStatusTransitions.push_back(value); return *this; }

    /**
     * <p>A history of all of the secondary statuses that the training job has
     * transitioned through.</p>
     */
    inline DescribeTrainingJobResult& AddSecondaryStatusTransitions(SecondaryStatusTransition&& value) { m_secondaryStatusTransitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline const Aws::Vector<MetricData>& GetFinalMetricDataList() const{ return m_finalMetricDataList; }

    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline void SetFinalMetricDataList(const Aws::Vector<MetricData>& value) { m_finalMetricDataList = value; }

    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline void SetFinalMetricDataList(Aws::Vector<MetricData>&& value) { m_finalMetricDataList = std::move(value); }

    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline DescribeTrainingJobResult& WithFinalMetricDataList(const Aws::Vector<MetricData>& value) { SetFinalMetricDataList(value); return *this;}

    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline DescribeTrainingJobResult& WithFinalMetricDataList(Aws::Vector<MetricData>&& value) { SetFinalMetricDataList(std::move(value)); return *this;}

    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline DescribeTrainingJobResult& AddFinalMetricDataList(const MetricData& value) { m_finalMetricDataList.push_back(value); return *this; }

    /**
     * <p>A collection of <code>MetricData</code> objects that specify the names,
     * values, and dates and times that the training algorithm emitted to Amazon
     * CloudWatch.</p>
     */
    inline DescribeTrainingJobResult& AddFinalMetricDataList(MetricData&& value) { m_finalMetricDataList.push_back(std::move(value)); return *this; }


    /**
     * <p>If you want to allow inbound or outbound network calls, except for calls
     * between peers within a training cluster for distributed training, choose
     * <code>True</code>. If you enable network isolation for training jobs that are
     * configured to use a VPC, SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>If you want to allow inbound or outbound network calls, except for calls
     * between peers within a training cluster for distributed training, choose
     * <code>True</code>. If you enable network isolation for training jobs that are
     * configured to use a VPC, SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolation = value; }

    /**
     * <p>If you want to allow inbound or outbound network calls, except for calls
     * between peers within a training cluster for distributed training, choose
     * <code>True</code>. If you enable network isolation for training jobs that are
     * configured to use a VPC, SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p>
     */
    inline DescribeTrainingJobResult& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}


    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithms in distributed training.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const{ return m_enableInterContainerTrafficEncryption; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithms in distributed training.</p>
     */
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryption = value; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithms in distributed training.</p>
     */
    inline DescribeTrainingJobResult& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}


    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline bool GetEnableManagedSpotTraining() const{ return m_enableManagedSpotTraining; }

    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline void SetEnableManagedSpotTraining(bool value) { m_enableManagedSpotTraining = value; }

    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline DescribeTrainingJobResult& WithEnableManagedSpotTraining(bool value) { SetEnableManagedSpotTraining(value); return *this;}


    
    inline const CheckpointConfig& GetCheckpointConfig() const{ return m_checkpointConfig; }

    
    inline void SetCheckpointConfig(const CheckpointConfig& value) { m_checkpointConfig = value; }

    
    inline void SetCheckpointConfig(CheckpointConfig&& value) { m_checkpointConfig = std::move(value); }

    
    inline DescribeTrainingJobResult& WithCheckpointConfig(const CheckpointConfig& value) { SetCheckpointConfig(value); return *this;}

    
    inline DescribeTrainingJobResult& WithCheckpointConfig(CheckpointConfig&& value) { SetCheckpointConfig(std::move(value)); return *this;}


    /**
     * <p>The training time in seconds.</p>
     */
    inline int GetTrainingTimeInSeconds() const{ return m_trainingTimeInSeconds; }

    /**
     * <p>The training time in seconds.</p>
     */
    inline void SetTrainingTimeInSeconds(int value) { m_trainingTimeInSeconds = value; }

    /**
     * <p>The training time in seconds.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingTimeInSeconds(int value) { SetTrainingTimeInSeconds(value); return *this;}


    /**
     * <p>The billable time in seconds. Billable time refers to the absolute wall-clock
     * time.</p> <p>Multiply <code>BillableTimeInSeconds</code> by the number of
     * instances (<code>InstanceCount</code>) in your training cluster to get the total
     * compute time SageMaker bills you if you run distributed training. The formula is
     * as follows: <code>BillableTimeInSeconds * InstanceCount</code> .</p> <p>You can
     * calculate the savings from using managed spot training using the formula
     * <code>(1 - BillableTimeInSeconds / TrainingTimeInSeconds) * 100</code>. For
     * example, if <code>BillableTimeInSeconds</code> is 100 and
     * <code>TrainingTimeInSeconds</code> is 500, the savings is 80%.</p>
     */
    inline int GetBillableTimeInSeconds() const{ return m_billableTimeInSeconds; }

    /**
     * <p>The billable time in seconds. Billable time refers to the absolute wall-clock
     * time.</p> <p>Multiply <code>BillableTimeInSeconds</code> by the number of
     * instances (<code>InstanceCount</code>) in your training cluster to get the total
     * compute time SageMaker bills you if you run distributed training. The formula is
     * as follows: <code>BillableTimeInSeconds * InstanceCount</code> .</p> <p>You can
     * calculate the savings from using managed spot training using the formula
     * <code>(1 - BillableTimeInSeconds / TrainingTimeInSeconds) * 100</code>. For
     * example, if <code>BillableTimeInSeconds</code> is 100 and
     * <code>TrainingTimeInSeconds</code> is 500, the savings is 80%.</p>
     */
    inline void SetBillableTimeInSeconds(int value) { m_billableTimeInSeconds = value; }

    /**
     * <p>The billable time in seconds. Billable time refers to the absolute wall-clock
     * time.</p> <p>Multiply <code>BillableTimeInSeconds</code> by the number of
     * instances (<code>InstanceCount</code>) in your training cluster to get the total
     * compute time SageMaker bills you if you run distributed training. The formula is
     * as follows: <code>BillableTimeInSeconds * InstanceCount</code> .</p> <p>You can
     * calculate the savings from using managed spot training using the formula
     * <code>(1 - BillableTimeInSeconds / TrainingTimeInSeconds) * 100</code>. For
     * example, if <code>BillableTimeInSeconds</code> is 100 and
     * <code>TrainingTimeInSeconds</code> is 500, the savings is 80%.</p>
     */
    inline DescribeTrainingJobResult& WithBillableTimeInSeconds(int value) { SetBillableTimeInSeconds(value); return *this;}


    
    inline const DebugHookConfig& GetDebugHookConfig() const{ return m_debugHookConfig; }

    
    inline void SetDebugHookConfig(const DebugHookConfig& value) { m_debugHookConfig = value; }

    
    inline void SetDebugHookConfig(DebugHookConfig&& value) { m_debugHookConfig = std::move(value); }

    
    inline DescribeTrainingJobResult& WithDebugHookConfig(const DebugHookConfig& value) { SetDebugHookConfig(value); return *this;}

    
    inline DescribeTrainingJobResult& WithDebugHookConfig(DebugHookConfig&& value) { SetDebugHookConfig(std::move(value)); return *this;}


    
    inline const ExperimentConfig& GetExperimentConfig() const{ return m_experimentConfig; }

    
    inline void SetExperimentConfig(const ExperimentConfig& value) { m_experimentConfig = value; }

    
    inline void SetExperimentConfig(ExperimentConfig&& value) { m_experimentConfig = std::move(value); }

    
    inline DescribeTrainingJobResult& WithExperimentConfig(const ExperimentConfig& value) { SetExperimentConfig(value); return *this;}

    
    inline DescribeTrainingJobResult& WithExperimentConfig(ExperimentConfig&& value) { SetExperimentConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline const Aws::Vector<DebugRuleConfiguration>& GetDebugRuleConfigurations() const{ return m_debugRuleConfigurations; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline void SetDebugRuleConfigurations(const Aws::Vector<DebugRuleConfiguration>& value) { m_debugRuleConfigurations = value; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline void SetDebugRuleConfigurations(Aws::Vector<DebugRuleConfiguration>&& value) { m_debugRuleConfigurations = std::move(value); }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline DescribeTrainingJobResult& WithDebugRuleConfigurations(const Aws::Vector<DebugRuleConfiguration>& value) { SetDebugRuleConfigurations(value); return *this;}

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline DescribeTrainingJobResult& WithDebugRuleConfigurations(Aws::Vector<DebugRuleConfiguration>&& value) { SetDebugRuleConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline DescribeTrainingJobResult& AddDebugRuleConfigurations(const DebugRuleConfiguration& value) { m_debugRuleConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for debugging
     * output tensors.</p>
     */
    inline DescribeTrainingJobResult& AddDebugRuleConfigurations(DebugRuleConfiguration&& value) { m_debugRuleConfigurations.push_back(std::move(value)); return *this; }


    
    inline const TensorBoardOutputConfig& GetTensorBoardOutputConfig() const{ return m_tensorBoardOutputConfig; }

    
    inline void SetTensorBoardOutputConfig(const TensorBoardOutputConfig& value) { m_tensorBoardOutputConfig = value; }

    
    inline void SetTensorBoardOutputConfig(TensorBoardOutputConfig&& value) { m_tensorBoardOutputConfig = std::move(value); }

    
    inline DescribeTrainingJobResult& WithTensorBoardOutputConfig(const TensorBoardOutputConfig& value) { SetTensorBoardOutputConfig(value); return *this;}

    
    inline DescribeTrainingJobResult& WithTensorBoardOutputConfig(TensorBoardOutputConfig&& value) { SetTensorBoardOutputConfig(std::move(value)); return *this;}


    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline const Aws::Vector<DebugRuleEvaluationStatus>& GetDebugRuleEvaluationStatuses() const{ return m_debugRuleEvaluationStatuses; }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline void SetDebugRuleEvaluationStatuses(const Aws::Vector<DebugRuleEvaluationStatus>& value) { m_debugRuleEvaluationStatuses = value; }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline void SetDebugRuleEvaluationStatuses(Aws::Vector<DebugRuleEvaluationStatus>&& value) { m_debugRuleEvaluationStatuses = std::move(value); }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& WithDebugRuleEvaluationStatuses(const Aws::Vector<DebugRuleEvaluationStatus>& value) { SetDebugRuleEvaluationStatuses(value); return *this;}

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& WithDebugRuleEvaluationStatuses(Aws::Vector<DebugRuleEvaluationStatus>&& value) { SetDebugRuleEvaluationStatuses(std::move(value)); return *this;}

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& AddDebugRuleEvaluationStatuses(const DebugRuleEvaluationStatus& value) { m_debugRuleEvaluationStatuses.push_back(value); return *this; }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for debugging on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& AddDebugRuleEvaluationStatuses(DebugRuleEvaluationStatus&& value) { m_debugRuleEvaluationStatuses.push_back(std::move(value)); return *this; }


    
    inline const ProfilerConfig& GetProfilerConfig() const{ return m_profilerConfig; }

    
    inline void SetProfilerConfig(const ProfilerConfig& value) { m_profilerConfig = value; }

    
    inline void SetProfilerConfig(ProfilerConfig&& value) { m_profilerConfig = std::move(value); }

    
    inline DescribeTrainingJobResult& WithProfilerConfig(const ProfilerConfig& value) { SetProfilerConfig(value); return *this;}

    
    inline DescribeTrainingJobResult& WithProfilerConfig(ProfilerConfig&& value) { SetProfilerConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline const Aws::Vector<ProfilerRuleConfiguration>& GetProfilerRuleConfigurations() const{ return m_profilerRuleConfigurations; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline void SetProfilerRuleConfigurations(const Aws::Vector<ProfilerRuleConfiguration>& value) { m_profilerRuleConfigurations = value; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline void SetProfilerRuleConfigurations(Aws::Vector<ProfilerRuleConfiguration>&& value) { m_profilerRuleConfigurations = std::move(value); }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline DescribeTrainingJobResult& WithProfilerRuleConfigurations(const Aws::Vector<ProfilerRuleConfiguration>& value) { SetProfilerRuleConfigurations(value); return *this;}

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline DescribeTrainingJobResult& WithProfilerRuleConfigurations(Aws::Vector<ProfilerRuleConfiguration>&& value) { SetProfilerRuleConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline DescribeTrainingJobResult& AddProfilerRuleConfigurations(const ProfilerRuleConfiguration& value) { m_profilerRuleConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline DescribeTrainingJobResult& AddProfilerRuleConfigurations(ProfilerRuleConfiguration&& value) { m_profilerRuleConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline const Aws::Vector<ProfilerRuleEvaluationStatus>& GetProfilerRuleEvaluationStatuses() const{ return m_profilerRuleEvaluationStatuses; }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline void SetProfilerRuleEvaluationStatuses(const Aws::Vector<ProfilerRuleEvaluationStatus>& value) { m_profilerRuleEvaluationStatuses = value; }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline void SetProfilerRuleEvaluationStatuses(Aws::Vector<ProfilerRuleEvaluationStatus>&& value) { m_profilerRuleEvaluationStatuses = std::move(value); }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& WithProfilerRuleEvaluationStatuses(const Aws::Vector<ProfilerRuleEvaluationStatus>& value) { SetProfilerRuleEvaluationStatuses(value); return *this;}

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& WithProfilerRuleEvaluationStatuses(Aws::Vector<ProfilerRuleEvaluationStatus>&& value) { SetProfilerRuleEvaluationStatuses(std::move(value)); return *this;}

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& AddProfilerRuleEvaluationStatuses(const ProfilerRuleEvaluationStatus& value) { m_profilerRuleEvaluationStatuses.push_back(value); return *this; }

    /**
     * <p>Evaluation status of Amazon SageMaker Debugger rules for profiling on a
     * training job.</p>
     */
    inline DescribeTrainingJobResult& AddProfilerRuleEvaluationStatuses(ProfilerRuleEvaluationStatus&& value) { m_profilerRuleEvaluationStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>Profiling status of a training job.</p>
     */
    inline const ProfilingStatus& GetProfilingStatus() const{ return m_profilingStatus; }

    /**
     * <p>Profiling status of a training job.</p>
     */
    inline void SetProfilingStatus(const ProfilingStatus& value) { m_profilingStatus = value; }

    /**
     * <p>Profiling status of a training job.</p>
     */
    inline void SetProfilingStatus(ProfilingStatus&& value) { m_profilingStatus = std::move(value); }

    /**
     * <p>Profiling status of a training job.</p>
     */
    inline DescribeTrainingJobResult& WithProfilingStatus(const ProfilingStatus& value) { SetProfilingStatus(value); return *this;}

    /**
     * <p>Profiling status of a training job.</p>
     */
    inline DescribeTrainingJobResult& WithProfilingStatus(ProfilingStatus&& value) { SetProfilingStatus(std::move(value)); return *this;}


    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategy = value; }

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategy = std::move(value); }

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline DescribeTrainingJobResult& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline DescribeTrainingJobResult& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}


    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& AddEnvironment(const char* key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& AddEnvironment(Aws::String&& key, const char* value) { m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline DescribeTrainingJobResult& AddEnvironment(const char* key, const char* value) { m_environment.emplace(key, value); return *this; }


    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline const WarmPoolStatus& GetWarmPoolStatus() const{ return m_warmPoolStatus; }

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline void SetWarmPoolStatus(const WarmPoolStatus& value) { m_warmPoolStatus = value; }

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline void SetWarmPoolStatus(WarmPoolStatus&& value) { m_warmPoolStatus = std::move(value); }

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline DescribeTrainingJobResult& WithWarmPoolStatus(const WarmPoolStatus& value) { SetWarmPoolStatus(value); return *this;}

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline DescribeTrainingJobResult& WithWarmPoolStatus(WarmPoolStatus&& value) { SetWarmPoolStatus(std::move(value)); return *this;}

  private:

    Aws::String m_trainingJobName;

    Aws::String m_trainingJobArn;

    Aws::String m_tuningJobArn;

    Aws::String m_labelingJobArn;

    Aws::String m_autoMLJobArn;

    ModelArtifacts m_modelArtifacts;

    TrainingJobStatus m_trainingJobStatus;

    SecondaryStatus m_secondaryStatus;

    Aws::String m_failureReason;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;

    AlgorithmSpecification m_algorithmSpecification;

    Aws::String m_roleArn;

    Aws::Vector<Channel> m_inputDataConfig;

    OutputDataConfig m_outputDataConfig;

    ResourceConfig m_resourceConfig;

    VpcConfig m_vpcConfig;

    StoppingCondition m_stoppingCondition;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_trainingStartTime;

    Aws::Utils::DateTime m_trainingEndTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Vector<SecondaryStatusTransition> m_secondaryStatusTransitions;

    Aws::Vector<MetricData> m_finalMetricDataList;

    bool m_enableNetworkIsolation;

    bool m_enableInterContainerTrafficEncryption;

    bool m_enableManagedSpotTraining;

    CheckpointConfig m_checkpointConfig;

    int m_trainingTimeInSeconds;

    int m_billableTimeInSeconds;

    DebugHookConfig m_debugHookConfig;

    ExperimentConfig m_experimentConfig;

    Aws::Vector<DebugRuleConfiguration> m_debugRuleConfigurations;

    TensorBoardOutputConfig m_tensorBoardOutputConfig;

    Aws::Vector<DebugRuleEvaluationStatus> m_debugRuleEvaluationStatuses;

    ProfilerConfig m_profilerConfig;

    Aws::Vector<ProfilerRuleConfiguration> m_profilerRuleConfigurations;

    Aws::Vector<ProfilerRuleEvaluationStatus> m_profilerRuleEvaluationStatuses;

    ProfilingStatus m_profilingStatus;

    RetryStrategy m_retryStrategy;

    Aws::Map<Aws::String, Aws::String> m_environment;

    WarmPoolStatus m_warmPoolStatus;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
