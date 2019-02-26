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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/mediaconvert/model/BillingTagsSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/JobSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_MEDIACONVERT_API CreateJobRequest : public MediaConvertRequest
  {
  public:
    CreateJobRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    Aws::String SerializePayload() const override;


    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const{ return m_accelerationSettings; }

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline void SetAccelerationSettings(const AccelerationSettings& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = value; }

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline void SetAccelerationSettings(AccelerationSettings&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::move(value); }

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline CreateJobRequest& WithAccelerationSettings(const AccelerationSettings& value) { SetAccelerationSettings(value); return *this;}

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline CreateJobRequest& WithAccelerationSettings(AccelerationSettings&& value) { SetAccelerationSettings(std::move(value)); return *this;}


    
    inline const BillingTagsSource& GetBillingTagsSource() const{ return m_billingTagsSource; }

    
    inline void SetBillingTagsSource(const BillingTagsSource& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = value; }

    
    inline void SetBillingTagsSource(BillingTagsSource&& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = std::move(value); }

    
    inline CreateJobRequest& WithBillingTagsSource(const BillingTagsSource& value) { SetBillingTagsSource(value); return *this;}

    
    inline CreateJobRequest& WithBillingTagsSource(BillingTagsSource&& value) { SetBillingTagsSource(std::move(value)); return *this;}


    /**
     * Idempotency token for CreateJob operation.
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * Idempotency token for CreateJob operation.
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * Idempotency token for CreateJob operation.
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * Idempotency token for CreateJob operation.
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * Idempotency token for CreateJob operation.
     */
    inline CreateJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * Idempotency token for CreateJob operation.
     */
    inline CreateJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * Idempotency token for CreateJob operation.
     */
    inline CreateJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * When you create a job, you can either specify a job template or specify the
     * transcoding settings individually
     */
    inline const Aws::String& GetJobTemplate() const{ return m_jobTemplate; }

    /**
     * When you create a job, you can either specify a job template or specify the
     * transcoding settings individually
     */
    inline void SetJobTemplate(const Aws::String& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = value; }

    /**
     * When you create a job, you can either specify a job template or specify the
     * transcoding settings individually
     */
    inline void SetJobTemplate(Aws::String&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::move(value); }

    /**
     * When you create a job, you can either specify a job template or specify the
     * transcoding settings individually
     */
    inline void SetJobTemplate(const char* value) { m_jobTemplateHasBeenSet = true; m_jobTemplate.assign(value); }

    /**
     * When you create a job, you can either specify a job template or specify the
     * transcoding settings individually
     */
    inline CreateJobRequest& WithJobTemplate(const Aws::String& value) { SetJobTemplate(value); return *this;}

    /**
     * When you create a job, you can either specify a job template or specify the
     * transcoding settings individually
     */
    inline CreateJobRequest& WithJobTemplate(Aws::String&& value) { SetJobTemplate(std::move(value)); return *this;}

    /**
     * When you create a job, you can either specify a job template or specify the
     * transcoding settings individually
     */
    inline CreateJobRequest& WithJobTemplate(const char* value) { SetJobTemplate(value); return *this;}


    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline CreateJobRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline CreateJobRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline CreateJobRequest& WithQueue(const char* value) { SetQueue(value); return *this;}


    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline CreateJobRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline CreateJobRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline CreateJobRequest& WithRole(const char* value) { SetRole(value); return *this;}


    
    inline const JobSettings& GetSettings() const{ return m_settings; }

    
    inline void SetSettings(const JobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    
    inline void SetSettings(JobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    
    inline CreateJobRequest& WithSettings(const JobSettings& value) { SetSettings(value); return *this;}

    
    inline CreateJobRequest& WithSettings(JobSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline long long GetStatusUpdateIntervalInSecs() const{ return m_statusUpdateIntervalInSecs; }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline void SetStatusUpdateIntervalInSecs(long long value) { m_statusUpdateIntervalInSecsHasBeenSet = true; m_statusUpdateIntervalInSecs = value; }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline CreateJobRequest& WithStatusUpdateIntervalInSecs(long long value) { SetStatusUpdateIntervalInSecs(value); return *this;}


    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline CreateJobRequest& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet;

    BillingTagsSource m_billingTagsSource;
    bool m_billingTagsSourceHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_jobTemplate;
    bool m_jobTemplateHasBeenSet;

    Aws::String m_queue;
    bool m_queueHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    JobSettings m_settings;
    bool m_settingsHasBeenSet;

    long long m_statusUpdateIntervalInSecs;
    bool m_statusUpdateIntervalInSecsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
