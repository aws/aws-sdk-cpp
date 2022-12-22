/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/mediaconvert/model/BillingTagsSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/JobSettings.h>
#include <aws/mediaconvert/model/SimulateReservedQueue.h>
#include <aws/mediaconvert/model/StatusUpdateInterval.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/HopDestination.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * Optional. Accelerated transcoding can significantly speed up jobs with long,
     * visually complex content. Outputs that use this feature incur pro-tier pricing.
     * For information about feature limitations, see the AWS Elemental MediaConvert
     * User Guide.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const{ return m_accelerationSettings; }

    /**
     * Optional. Accelerated transcoding can significantly speed up jobs with long,
     * visually complex content. Outputs that use this feature incur pro-tier pricing.
     * For information about feature limitations, see the AWS Elemental MediaConvert
     * User Guide.
     */
    inline bool AccelerationSettingsHasBeenSet() const { return m_accelerationSettingsHasBeenSet; }

    /**
     * Optional. Accelerated transcoding can significantly speed up jobs with long,
     * visually complex content. Outputs that use this feature incur pro-tier pricing.
     * For information about feature limitations, see the AWS Elemental MediaConvert
     * User Guide.
     */
    inline void SetAccelerationSettings(const AccelerationSettings& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = value; }

    /**
     * Optional. Accelerated transcoding can significantly speed up jobs with long,
     * visually complex content. Outputs that use this feature incur pro-tier pricing.
     * For information about feature limitations, see the AWS Elemental MediaConvert
     * User Guide.
     */
    inline void SetAccelerationSettings(AccelerationSettings&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::move(value); }

    /**
     * Optional. Accelerated transcoding can significantly speed up jobs with long,
     * visually complex content. Outputs that use this feature incur pro-tier pricing.
     * For information about feature limitations, see the AWS Elemental MediaConvert
     * User Guide.
     */
    inline CreateJobRequest& WithAccelerationSettings(const AccelerationSettings& value) { SetAccelerationSettings(value); return *this;}

    /**
     * Optional. Accelerated transcoding can significantly speed up jobs with long,
     * visually complex content. Outputs that use this feature incur pro-tier pricing.
     * For information about feature limitations, see the AWS Elemental MediaConvert
     * User Guide.
     */
    inline CreateJobRequest& WithAccelerationSettings(AccelerationSettings&& value) { SetAccelerationSettings(std::move(value)); return *this;}


    /**
     * Optional. Choose a tag type that AWS Billing and Cost Management will use to
     * sort your AWS Elemental MediaConvert costs on any billing report that you set
     * up. Any transcoding outputs that don't have an associated tag will appear in
     * your billing report unsorted. If you don't choose a valid value for this field,
     * your job outputs will appear on the billing report unsorted.
     */
    inline const BillingTagsSource& GetBillingTagsSource() const{ return m_billingTagsSource; }

    /**
     * Optional. Choose a tag type that AWS Billing and Cost Management will use to
     * sort your AWS Elemental MediaConvert costs on any billing report that you set
     * up. Any transcoding outputs that don't have an associated tag will appear in
     * your billing report unsorted. If you don't choose a valid value for this field,
     * your job outputs will appear on the billing report unsorted.
     */
    inline bool BillingTagsSourceHasBeenSet() const { return m_billingTagsSourceHasBeenSet; }

    /**
     * Optional. Choose a tag type that AWS Billing and Cost Management will use to
     * sort your AWS Elemental MediaConvert costs on any billing report that you set
     * up. Any transcoding outputs that don't have an associated tag will appear in
     * your billing report unsorted. If you don't choose a valid value for this field,
     * your job outputs will appear on the billing report unsorted.
     */
    inline void SetBillingTagsSource(const BillingTagsSource& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = value; }

    /**
     * Optional. Choose a tag type that AWS Billing and Cost Management will use to
     * sort your AWS Elemental MediaConvert costs on any billing report that you set
     * up. Any transcoding outputs that don't have an associated tag will appear in
     * your billing report unsorted. If you don't choose a valid value for this field,
     * your job outputs will appear on the billing report unsorted.
     */
    inline void SetBillingTagsSource(BillingTagsSource&& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = std::move(value); }

    /**
     * Optional. Choose a tag type that AWS Billing and Cost Management will use to
     * sort your AWS Elemental MediaConvert costs on any billing report that you set
     * up. Any transcoding outputs that don't have an associated tag will appear in
     * your billing report unsorted. If you don't choose a valid value for this field,
     * your job outputs will appear on the billing report unsorted.
     */
    inline CreateJobRequest& WithBillingTagsSource(const BillingTagsSource& value) { SetBillingTagsSource(value); return *this;}

    /**
     * Optional. Choose a tag type that AWS Billing and Cost Management will use to
     * sort your AWS Elemental MediaConvert costs on any billing report that you set
     * up. Any transcoding outputs that don't have an associated tag will appear in
     * your billing report unsorted. If you don't choose a valid value for this field,
     * your job outputs will appear on the billing report unsorted.
     */
    inline CreateJobRequest& WithBillingTagsSource(BillingTagsSource&& value) { SetBillingTagsSource(std::move(value)); return *this;}


    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline CreateJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline CreateJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * Optional. Idempotency token for CreateJob operation.
     */
    inline CreateJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline const Aws::Vector<HopDestination>& GetHopDestinations() const{ return m_hopDestinations; }

    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline bool HopDestinationsHasBeenSet() const { return m_hopDestinationsHasBeenSet; }

    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline void SetHopDestinations(const Aws::Vector<HopDestination>& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = value; }

    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline void SetHopDestinations(Aws::Vector<HopDestination>&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = std::move(value); }

    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline CreateJobRequest& WithHopDestinations(const Aws::Vector<HopDestination>& value) { SetHopDestinations(value); return *this;}

    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline CreateJobRequest& WithHopDestinations(Aws::Vector<HopDestination>&& value) { SetHopDestinations(std::move(value)); return *this;}

    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline CreateJobRequest& AddHopDestinations(const HopDestination& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(value); return *this; }

    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline CreateJobRequest& AddHopDestinations(HopDestination&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(std::move(value)); return *this; }


    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline const Aws::String& GetJobTemplate() const{ return m_jobTemplate; }

    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline bool JobTemplateHasBeenSet() const { return m_jobTemplateHasBeenSet; }

    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline void SetJobTemplate(const Aws::String& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = value; }

    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline void SetJobTemplate(Aws::String&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::move(value); }

    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline void SetJobTemplate(const char* value) { m_jobTemplateHasBeenSet = true; m_jobTemplate.assign(value); }

    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline CreateJobRequest& WithJobTemplate(const Aws::String& value) { SetJobTemplate(value); return *this;}

    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline CreateJobRequest& WithJobTemplate(Aws::String&& value) { SetJobTemplate(std::move(value)); return *this;}

    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline CreateJobRequest& WithJobTemplate(const char* value) { SetJobTemplate(value); return *this;}


    /**
     * Optional. Specify the relative priority for this job. In any given queue, the
     * service begins processing the job with the highest value first. When more than
     * one job has the same priority, the service begins processing the job that you
     * submitted first. If you don't specify a priority, the service uses the default
     * value 0.
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * Optional. Specify the relative priority for this job. In any given queue, the
     * service begins processing the job with the highest value first. When more than
     * one job has the same priority, the service begins processing the job that you
     * submitted first. If you don't specify a priority, the service uses the default
     * value 0.
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * Optional. Specify the relative priority for this job. In any given queue, the
     * service begins processing the job with the highest value first. When more than
     * one job has the same priority, the service begins processing the job that you
     * submitted first. If you don't specify a priority, the service uses the default
     * value 0.
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * Optional. Specify the relative priority for this job. In any given queue, the
     * service begins processing the job with the highest value first. When more than
     * one job has the same priority, the service begins processing the job that you
     * submitted first. If you don't specify a priority, the service uses the default
     * value 0.
     */
    inline CreateJobRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline CreateJobRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline CreateJobRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline CreateJobRequest& WithQueue(const char* value) { SetQueue(value); return *this;}


    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline CreateJobRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline CreateJobRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline CreateJobRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline const JobSettings& GetSettings() const{ return m_settings; }

    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline void SetSettings(const JobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline void SetSettings(JobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline CreateJobRequest& WithSettings(const JobSettings& value) { SetSettings(value); return *this;}

    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline CreateJobRequest& WithSettings(JobSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * Optional. Enable this setting when you run a test job to estimate how many
     * reserved transcoding slots (RTS) you need. When this is enabled, MediaConvert
     * runs your job from an on-demand queue with similar performance to what you will
     * see with one RTS in a reserved queue. This setting is disabled by default.
     */
    inline const SimulateReservedQueue& GetSimulateReservedQueue() const{ return m_simulateReservedQueue; }

    /**
     * Optional. Enable this setting when you run a test job to estimate how many
     * reserved transcoding slots (RTS) you need. When this is enabled, MediaConvert
     * runs your job from an on-demand queue with similar performance to what you will
     * see with one RTS in a reserved queue. This setting is disabled by default.
     */
    inline bool SimulateReservedQueueHasBeenSet() const { return m_simulateReservedQueueHasBeenSet; }

    /**
     * Optional. Enable this setting when you run a test job to estimate how many
     * reserved transcoding slots (RTS) you need. When this is enabled, MediaConvert
     * runs your job from an on-demand queue with similar performance to what you will
     * see with one RTS in a reserved queue. This setting is disabled by default.
     */
    inline void SetSimulateReservedQueue(const SimulateReservedQueue& value) { m_simulateReservedQueueHasBeenSet = true; m_simulateReservedQueue = value; }

    /**
     * Optional. Enable this setting when you run a test job to estimate how many
     * reserved transcoding slots (RTS) you need. When this is enabled, MediaConvert
     * runs your job from an on-demand queue with similar performance to what you will
     * see with one RTS in a reserved queue. This setting is disabled by default.
     */
    inline void SetSimulateReservedQueue(SimulateReservedQueue&& value) { m_simulateReservedQueueHasBeenSet = true; m_simulateReservedQueue = std::move(value); }

    /**
     * Optional. Enable this setting when you run a test job to estimate how many
     * reserved transcoding slots (RTS) you need. When this is enabled, MediaConvert
     * runs your job from an on-demand queue with similar performance to what you will
     * see with one RTS in a reserved queue. This setting is disabled by default.
     */
    inline CreateJobRequest& WithSimulateReservedQueue(const SimulateReservedQueue& value) { SetSimulateReservedQueue(value); return *this;}

    /**
     * Optional. Enable this setting when you run a test job to estimate how many
     * reserved transcoding slots (RTS) you need. When this is enabled, MediaConvert
     * runs your job from an on-demand queue with similar performance to what you will
     * see with one RTS in a reserved queue. This setting is disabled by default.
     */
    inline CreateJobRequest& WithSimulateReservedQueue(SimulateReservedQueue&& value) { SetSimulateReservedQueue(std::move(value)); return *this;}


    /**
     * Optional. Specify how often MediaConvert sends STATUS_UPDATE events to Amazon
     * CloudWatch Events. Set the interval, in seconds, between status updates.
     * MediaConvert sends an update at this interval from the time the service begins
     * processing your job to the time it completes the transcode or encounters an
     * error.
     */
    inline const StatusUpdateInterval& GetStatusUpdateInterval() const{ return m_statusUpdateInterval; }

    /**
     * Optional. Specify how often MediaConvert sends STATUS_UPDATE events to Amazon
     * CloudWatch Events. Set the interval, in seconds, between status updates.
     * MediaConvert sends an update at this interval from the time the service begins
     * processing your job to the time it completes the transcode or encounters an
     * error.
     */
    inline bool StatusUpdateIntervalHasBeenSet() const { return m_statusUpdateIntervalHasBeenSet; }

    /**
     * Optional. Specify how often MediaConvert sends STATUS_UPDATE events to Amazon
     * CloudWatch Events. Set the interval, in seconds, between status updates.
     * MediaConvert sends an update at this interval from the time the service begins
     * processing your job to the time it completes the transcode or encounters an
     * error.
     */
    inline void SetStatusUpdateInterval(const StatusUpdateInterval& value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = value; }

    /**
     * Optional. Specify how often MediaConvert sends STATUS_UPDATE events to Amazon
     * CloudWatch Events. Set the interval, in seconds, between status updates.
     * MediaConvert sends an update at this interval from the time the service begins
     * processing your job to the time it completes the transcode or encounters an
     * error.
     */
    inline void SetStatusUpdateInterval(StatusUpdateInterval&& value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = std::move(value); }

    /**
     * Optional. Specify how often MediaConvert sends STATUS_UPDATE events to Amazon
     * CloudWatch Events. Set the interval, in seconds, between status updates.
     * MediaConvert sends an update at this interval from the time the service begins
     * processing your job to the time it completes the transcode or encounters an
     * error.
     */
    inline CreateJobRequest& WithStatusUpdateInterval(const StatusUpdateInterval& value) { SetStatusUpdateInterval(value); return *this;}

    /**
     * Optional. Specify how often MediaConvert sends STATUS_UPDATE events to Amazon
     * CloudWatch Events. Set the interval, in seconds, between status updates.
     * MediaConvert sends an update at this interval from the time the service begins
     * processing your job to the time it completes the transcode or encounters an
     * error.
     */
    inline CreateJobRequest& WithStatusUpdateInterval(StatusUpdateInterval&& value) { SetStatusUpdateInterval(std::move(value)); return *this;}


    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline CreateJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline CreateJobRequest& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet = false;

    BillingTagsSource m_billingTagsSource;
    bool m_billingTagsSourceHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<HopDestination> m_hopDestinations;
    bool m_hopDestinationsHasBeenSet = false;

    Aws::String m_jobTemplate;
    bool m_jobTemplateHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    JobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    SimulateReservedQueue m_simulateReservedQueue;
    bool m_simulateReservedQueueHasBeenSet = false;

    StatusUpdateInterval m_statusUpdateInterval;
    bool m_statusUpdateIntervalHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
