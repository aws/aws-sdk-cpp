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
#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/BillingTagsSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/JobSettings.h>
#include <aws/mediaconvert/model/JobStatus.h>
#include <aws/mediaconvert/model/Timing.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/OutputGroupDetail.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Each job converts an input file into an output file or files. For more
   * information, see the User Guide at
   * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Job">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Job
  {
  public:
    Job();
    Job(Aws::Utils::Json::JsonView jsonValue);
    Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Acceleration settings for job execution.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const{ return m_accelerationSettings; }

    /**
     * Acceleration settings for job execution.
     */
    inline void SetAccelerationSettings(const AccelerationSettings& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = value; }

    /**
     * Acceleration settings for job execution.
     */
    inline void SetAccelerationSettings(AccelerationSettings&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::move(value); }

    /**
     * Acceleration settings for job execution.
     */
    inline Job& WithAccelerationSettings(const AccelerationSettings& value) { SetAccelerationSettings(value); return *this;}

    /**
     * Acceleration settings for job execution.
     */
    inline Job& WithAccelerationSettings(AccelerationSettings&& value) { SetAccelerationSettings(std::move(value)); return *this;}


    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Job& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Job& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Job& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const BillingTagsSource& GetBillingTagsSource() const{ return m_billingTagsSource; }

    
    inline void SetBillingTagsSource(const BillingTagsSource& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = value; }

    
    inline void SetBillingTagsSource(BillingTagsSource&& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = std::move(value); }

    
    inline Job& WithBillingTagsSource(const BillingTagsSource& value) { SetBillingTagsSource(value); return *this;}

    
    inline Job& WithBillingTagsSource(BillingTagsSource&& value) { SetBillingTagsSource(std::move(value)); return *this;}


    /**
     * The time, in Unix epoch format in seconds, when the job got created.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The time, in Unix epoch format in seconds, when the job got created.
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The time, in Unix epoch format in seconds, when the job got created.
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The time, in Unix epoch format in seconds, when the job got created.
     */
    inline Job& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * The time, in Unix epoch format in seconds, when the job got created.
     */
    inline Job& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * Error code for the job
     */
    inline int GetErrorCode() const{ return m_errorCode; }

    /**
     * Error code for the job
     */
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * Error code for the job
     */
    inline Job& WithErrorCode(int value) { SetErrorCode(value); return *this;}


    /**
     * Error message of Job
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * Error message of Job
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * Error message of Job
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * Error message of Job
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * Error message of Job
     */
    inline Job& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * Error message of Job
     */
    inline Job& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * Error message of Job
     */
    inline Job& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline Job& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline Job& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline Job& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline const Aws::String& GetJobTemplate() const{ return m_jobTemplate; }

    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline void SetJobTemplate(const Aws::String& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = value; }

    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline void SetJobTemplate(Aws::String&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::move(value); }

    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline void SetJobTemplate(const char* value) { m_jobTemplateHasBeenSet = true; m_jobTemplate.assign(value); }

    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline Job& WithJobTemplate(const Aws::String& value) { SetJobTemplate(value); return *this;}

    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline Job& WithJobTemplate(Aws::String&& value) { SetJobTemplate(std::move(value)); return *this;}

    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline Job& WithJobTemplate(const char* value) { SetJobTemplate(value); return *this;}


    /**
     * List of output group details
     */
    inline const Aws::Vector<OutputGroupDetail>& GetOutputGroupDetails() const{ return m_outputGroupDetails; }

    /**
     * List of output group details
     */
    inline void SetOutputGroupDetails(const Aws::Vector<OutputGroupDetail>& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails = value; }

    /**
     * List of output group details
     */
    inline void SetOutputGroupDetails(Aws::Vector<OutputGroupDetail>&& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails = std::move(value); }

    /**
     * List of output group details
     */
    inline Job& WithOutputGroupDetails(const Aws::Vector<OutputGroupDetail>& value) { SetOutputGroupDetails(value); return *this;}

    /**
     * List of output group details
     */
    inline Job& WithOutputGroupDetails(Aws::Vector<OutputGroupDetail>&& value) { SetOutputGroupDetails(std::move(value)); return *this;}

    /**
     * List of output group details
     */
    inline Job& AddOutputGroupDetails(const OutputGroupDetail& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails.push_back(value); return *this; }

    /**
     * List of output group details
     */
    inline Job& AddOutputGroupDetails(OutputGroupDetail&& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails.push_back(std::move(value)); return *this; }


    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline Job& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline Job& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline Job& WithQueue(const char* value) { SetQueue(value); return *this;}


    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline Job& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline Job& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline Job& WithRole(const char* value) { SetRole(value); return *this;}


    
    inline const JobSettings& GetSettings() const{ return m_settings; }

    
    inline void SetSettings(const JobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    
    inline void SetSettings(JobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    
    inline Job& WithSettings(const JobSettings& value) { SetSettings(value); return *this;}

    
    inline Job& WithSettings(JobSettings&& value) { SetSettings(std::move(value)); return *this;}


    
    inline const JobStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline Job& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    
    inline Job& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline Job& WithStatusUpdateIntervalInSecs(long long value) { SetStatusUpdateIntervalInSecs(value); return *this;}


    
    inline const Timing& GetTiming() const{ return m_timing; }

    
    inline void SetTiming(const Timing& value) { m_timingHasBeenSet = true; m_timing = value; }

    
    inline void SetTiming(Timing&& value) { m_timingHasBeenSet = true; m_timing = std::move(value); }

    
    inline Job& WithTiming(const Timing& value) { SetTiming(value); return *this;}

    
    inline Job& WithTiming(Timing&& value) { SetTiming(std::move(value)); return *this;}


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
    inline Job& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline Job& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    BillingTagsSource m_billingTagsSource;
    bool m_billingTagsSourceHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    int m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_jobTemplate;
    bool m_jobTemplateHasBeenSet;

    Aws::Vector<OutputGroupDetail> m_outputGroupDetails;
    bool m_outputGroupDetailsHasBeenSet;

    Aws::String m_queue;
    bool m_queueHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    JobSettings m_settings;
    bool m_settingsHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;

    long long m_statusUpdateIntervalInSecs;
    bool m_statusUpdateIntervalInSecsHasBeenSet;

    Timing m_timing;
    bool m_timingHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
