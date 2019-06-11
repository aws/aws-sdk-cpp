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
#include <aws/sagemaker/model/SecondaryStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An array element of
   * <a>DescribeTrainingJobResponse$SecondaryStatusTransitions</a>. It provides
   * additional details about a status that the training job has transitioned
   * through. A training job can be in one of several states, for example, starting,
   * downloading, training, or uploading. Within each state, there are a number of
   * intermediate states. For example, within the starting state, Amazon SageMaker
   * could be starting the training job or launching the ML instances. These
   * transitional states are referred to as the job's secondary status. </p>
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SecondaryStatusTransition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SecondaryStatusTransition
  {
  public:
    SecondaryStatusTransition();
    SecondaryStatusTransition(Aws::Utils::Json::JsonView jsonValue);
    SecondaryStatusTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains a secondary status information from a training job.</p> <p>Status
     * might be one of the following secondary statuses:</p> <dl> <dt>InProgress</dt>
     * <dd> <ul> <li> <p> <code>Starting</code> - Starting the training job.</p> </li>
     * <li> <p> <code>Downloading</code> - An optional stage for algorithms that
     * support <code>File</code> training input mode. It indicates that data is being
     * downloaded to the ML storage volumes.</p> </li> <li> <p> <code>Training</code> -
     * Training is in progress.</p> </li> <li> <p> <code>Uploading</code> - Training is
     * complete and the model artifacts are being uploaded to the S3 location.</p>
     * </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p> <code>Completed</code> -
     * The training job has completed.</p> </li> </ul> </dd> <dt>Failed</dt> <dd> <ul>
     * <li> <p> <code>Failed</code> - The training job has failed. The reason for the
     * failure is returned in the <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <p>We no longer support the following secondary statuses:</p> <ul>
     * <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li> <p>
     * <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline const SecondaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Contains a secondary status information from a training job.</p> <p>Status
     * might be one of the following secondary statuses:</p> <dl> <dt>InProgress</dt>
     * <dd> <ul> <li> <p> <code>Starting</code> - Starting the training job.</p> </li>
     * <li> <p> <code>Downloading</code> - An optional stage for algorithms that
     * support <code>File</code> training input mode. It indicates that data is being
     * downloaded to the ML storage volumes.</p> </li> <li> <p> <code>Training</code> -
     * Training is in progress.</p> </li> <li> <p> <code>Uploading</code> - Training is
     * complete and the model artifacts are being uploaded to the S3 location.</p>
     * </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p> <code>Completed</code> -
     * The training job has completed.</p> </li> </ul> </dd> <dt>Failed</dt> <dd> <ul>
     * <li> <p> <code>Failed</code> - The training job has failed. The reason for the
     * failure is returned in the <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <p>We no longer support the following secondary statuses:</p> <ul>
     * <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li> <p>
     * <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Contains a secondary status information from a training job.</p> <p>Status
     * might be one of the following secondary statuses:</p> <dl> <dt>InProgress</dt>
     * <dd> <ul> <li> <p> <code>Starting</code> - Starting the training job.</p> </li>
     * <li> <p> <code>Downloading</code> - An optional stage for algorithms that
     * support <code>File</code> training input mode. It indicates that data is being
     * downloaded to the ML storage volumes.</p> </li> <li> <p> <code>Training</code> -
     * Training is in progress.</p> </li> <li> <p> <code>Uploading</code> - Training is
     * complete and the model artifacts are being uploaded to the S3 location.</p>
     * </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p> <code>Completed</code> -
     * The training job has completed.</p> </li> </ul> </dd> <dt>Failed</dt> <dd> <ul>
     * <li> <p> <code>Failed</code> - The training job has failed. The reason for the
     * failure is returned in the <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <p>We no longer support the following secondary statuses:</p> <ul>
     * <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li> <p>
     * <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline void SetStatus(const SecondaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Contains a secondary status information from a training job.</p> <p>Status
     * might be one of the following secondary statuses:</p> <dl> <dt>InProgress</dt>
     * <dd> <ul> <li> <p> <code>Starting</code> - Starting the training job.</p> </li>
     * <li> <p> <code>Downloading</code> - An optional stage for algorithms that
     * support <code>File</code> training input mode. It indicates that data is being
     * downloaded to the ML storage volumes.</p> </li> <li> <p> <code>Training</code> -
     * Training is in progress.</p> </li> <li> <p> <code>Uploading</code> - Training is
     * complete and the model artifacts are being uploaded to the S3 location.</p>
     * </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p> <code>Completed</code> -
     * The training job has completed.</p> </li> </ul> </dd> <dt>Failed</dt> <dd> <ul>
     * <li> <p> <code>Failed</code> - The training job has failed. The reason for the
     * failure is returned in the <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <p>We no longer support the following secondary statuses:</p> <ul>
     * <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li> <p>
     * <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline void SetStatus(SecondaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Contains a secondary status information from a training job.</p> <p>Status
     * might be one of the following secondary statuses:</p> <dl> <dt>InProgress</dt>
     * <dd> <ul> <li> <p> <code>Starting</code> - Starting the training job.</p> </li>
     * <li> <p> <code>Downloading</code> - An optional stage for algorithms that
     * support <code>File</code> training input mode. It indicates that data is being
     * downloaded to the ML storage volumes.</p> </li> <li> <p> <code>Training</code> -
     * Training is in progress.</p> </li> <li> <p> <code>Uploading</code> - Training is
     * complete and the model artifacts are being uploaded to the S3 location.</p>
     * </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p> <code>Completed</code> -
     * The training job has completed.</p> </li> </ul> </dd> <dt>Failed</dt> <dd> <ul>
     * <li> <p> <code>Failed</code> - The training job has failed. The reason for the
     * failure is returned in the <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <p>We no longer support the following secondary statuses:</p> <ul>
     * <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li> <p>
     * <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline SecondaryStatusTransition& WithStatus(const SecondaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Contains a secondary status information from a training job.</p> <p>Status
     * might be one of the following secondary statuses:</p> <dl> <dt>InProgress</dt>
     * <dd> <ul> <li> <p> <code>Starting</code> - Starting the training job.</p> </li>
     * <li> <p> <code>Downloading</code> - An optional stage for algorithms that
     * support <code>File</code> training input mode. It indicates that data is being
     * downloaded to the ML storage volumes.</p> </li> <li> <p> <code>Training</code> -
     * Training is in progress.</p> </li> <li> <p> <code>Uploading</code> - Training is
     * complete and the model artifacts are being uploaded to the S3 location.</p>
     * </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p> <code>Completed</code> -
     * The training job has completed.</p> </li> </ul> </dd> <dt>Failed</dt> <dd> <ul>
     * <li> <p> <code>Failed</code> - The training job has failed. The reason for the
     * failure is returned in the <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <p>We no longer support the following secondary statuses:</p> <ul>
     * <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li> <p>
     * <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline SecondaryStatusTransition& WithStatus(SecondaryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the training job transitioned to the current
     * secondary status state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that shows when the training job transitioned to the current
     * secondary status state.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the training job transitioned to the current
     * secondary status state.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that shows when the training job transitioned to the current
     * secondary status state.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the training job transitioned to the current
     * secondary status state.</p>
     */
    inline SecondaryStatusTransition& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the training job transitioned to the current
     * secondary status state.</p>
     */
    inline SecondaryStatusTransition& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the training job transitioned out of this
     * secondary status state into another secondary status state or when the training
     * job has ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>A timestamp that shows when the training job transitioned out of this
     * secondary status state into another secondary status state or when the training
     * job has ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the training job transitioned out of this
     * secondary status state into another secondary status state or when the training
     * job has ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>A timestamp that shows when the training job transitioned out of this
     * secondary status state into another secondary status state or when the training
     * job has ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the training job transitioned out of this
     * secondary status state into another secondary status state or when the training
     * job has ended.</p>
     */
    inline SecondaryStatusTransition& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the training job transitioned out of this
     * secondary status state into another secondary status state or when the training
     * job has ended.</p>
     */
    inline SecondaryStatusTransition& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline SecondaryStatusTransition& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline SecondaryStatusTransition& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>Amazon SageMaker provides secondary statuses and status messages that apply
     * to each of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the
     * training job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Downloading the training image.</p> </li> <li> <p>Training
     * image download completed. Training in progress.</p> </li> </ul> </dd> </dl>
     * <important> <p>Status messages are subject to change. Therefore, we recommend
     * not including them in code that programmatically initiates actions. For
     * examples, don't use status messages in if statements.</p> </important> <p>To
     * have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in
     * <a>DescribeTrainingJob</a>, and <code>StatusMessage</code> together. For
     * example, at the start of a training job, you might see the following:</p> <ul>
     * <li> <p> <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline SecondaryStatusTransition& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    SecondaryStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
