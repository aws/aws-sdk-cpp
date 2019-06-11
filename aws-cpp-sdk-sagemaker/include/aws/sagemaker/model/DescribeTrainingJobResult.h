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
  class AWS_SAGEMAKER_API DescribeTrainingJobResult
  {
  public:
    DescribeTrainingJobResult();
    DescribeTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline DescribeTrainingJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline DescribeTrainingJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SageMaker Ground Truth labeling
     * job that created the transform or training job.</p>
     */
    inline DescribeTrainingJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


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
     * <p>The status of the training job.</p> <p>Amazon SageMaker provides the
     * following training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The
     * training is in progress.</p> </li> <li> <p> <code>Completed</code> - The
     * training job has completed.</p> </li> <li> <p> <code>Failed</code> - The
     * training job has failed. To see the reason for the failure, see the
     * <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline const TrainingJobStatus& GetTrainingJobStatus() const{ return m_trainingJobStatus; }

    /**
     * <p>The status of the training job.</p> <p>Amazon SageMaker provides the
     * following training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The
     * training is in progress.</p> </li> <li> <p> <code>Completed</code> - The
     * training job has completed.</p> </li> <li> <p> <code>Failed</code> - The
     * training job has failed. To see the reason for the failure, see the
     * <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline void SetTrainingJobStatus(const TrainingJobStatus& value) { m_trainingJobStatus = value; }

    /**
     * <p>The status of the training job.</p> <p>Amazon SageMaker provides the
     * following training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The
     * training is in progress.</p> </li> <li> <p> <code>Completed</code> - The
     * training job has completed.</p> </li> <li> <p> <code>Failed</code> - The
     * training job has failed. To see the reason for the failure, see the
     * <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline void SetTrainingJobStatus(TrainingJobStatus&& value) { m_trainingJobStatus = std::move(value); }

    /**
     * <p>The status of the training job.</p> <p>Amazon SageMaker provides the
     * following training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The
     * training is in progress.</p> </li> <li> <p> <code>Completed</code> - The
     * training job has completed.</p> </li> <li> <p> <code>Failed</code> - The
     * training job has failed. To see the reason for the failure, see the
     * <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobStatus(const TrainingJobStatus& value) { SetTrainingJobStatus(value); return *this;}

    /**
     * <p>The status of the training job.</p> <p>Amazon SageMaker provides the
     * following training job statuses:</p> <ul> <li> <p> <code>InProgress</code> - The
     * training is in progress.</p> </li> <li> <p> <code>Completed</code> - The
     * training job has completed.</p> </li> <li> <p> <code>Failed</code> - The
     * training job has failed. To see the reason for the failure, see the
     * <code>FailureReason</code> field in the response to a
     * <code>DescribeTrainingJobResponse</code> call.</p> </li> <li> <p>
     * <code>Stopping</code> - The training job is stopping.</p> </li> <li> <p>
     * <code>Stopped</code> - The training job has stopped.</p> </li> </ul> <p>For more
     * detailed information, see <code>SecondaryStatus</code>. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobStatus(TrainingJobStatus&& value) { SetTrainingJobStatus(std::move(value)); return *this;}


    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
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
     * detailed information on the secondary status of the training job, see
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
    inline void SetSecondaryStatus(const SecondaryStatus& value) { m_secondaryStatus = value; }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
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
    inline void SetSecondaryStatus(SecondaryStatus&& value) { m_secondaryStatus = std::move(value); }

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
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
    inline DescribeTrainingJobResult& WithSecondaryStatus(const SecondaryStatus& value) { SetSecondaryStatus(value); return *this;}

    /**
     * <p> Provides detailed information about the state of the training job. For
     * detailed information on the secondary status of the training job, see
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
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
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
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfig = value; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfig = std::move(value); }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
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
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline DescribeTrainingJobResult& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
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
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTime = value; }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTime = std::move(value); }

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}

    /**
     * <p>Indicates the time when the training job ends on training instances. You are
     * billed for the time interval between the value of <code>TrainingStartTime</code>
     * and this time. For successful jobs and stopped jobs, this is the time after
     * model artifacts are uploaded. For failed jobs, this is the time when Amazon
     * SageMaker detects a job failure.</p>
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
     * configured to use a VPC, Amazon SageMaker downloads and uploads customer data
     * and model artifacts through the specified VPC, but the training container does
     * not have network access.</p> <note> <p>The Semantic Segmentation built-in
     * algorithm does not support network isolation.</p> </note>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>If you want to allow inbound or outbound network calls, except for calls
     * between peers within a training cluster for distributed training, choose
     * <code>True</code>. If you enable network isolation for training jobs that are
     * configured to use a VPC, Amazon SageMaker downloads and uploads customer data
     * and model artifacts through the specified VPC, but the training container does
     * not have network access.</p> <note> <p>The Semantic Segmentation built-in
     * algorithm does not support network isolation.</p> </note>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolation = value; }

    /**
     * <p>If you want to allow inbound or outbound network calls, except for calls
     * between peers within a training cluster for distributed training, choose
     * <code>True</code>. If you enable network isolation for training jobs that are
     * configured to use a VPC, Amazon SageMaker downloads and uploads customer data
     * and model artifacts through the specified VPC, but the training container does
     * not have network access.</p> <note> <p>The Semantic Segmentation built-in
     * algorithm does not support network isolation.</p> </note>
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

  private:

    Aws::String m_trainingJobName;

    Aws::String m_trainingJobArn;

    Aws::String m_tuningJobArn;

    Aws::String m_labelingJobArn;

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
