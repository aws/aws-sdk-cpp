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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/iot/model/AbortConfig.h>
#include <aws/iot/model/TimeoutConfig.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API UpdateJobRequest : public IoTRequest
  {
  public:
    UpdateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline UpdateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline UpdateJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline UpdateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline UpdateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline UpdateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline UpdateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = value; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::move(value); }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline UpdateJobRequest& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline UpdateJobRequest& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}


    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline UpdateJobRequest& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline UpdateJobRequest& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}


    /**
     * <p>Allows you to create criteria to abort a job.</p>
     */
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }

    /**
     * <p>Allows you to create criteria to abort a job.</p>
     */
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }

    /**
     * <p>Allows you to create criteria to abort a job.</p>
     */
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }

    /**
     * <p>Allows you to create criteria to abort a job.</p>
     */
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }

    /**
     * <p>Allows you to create criteria to abort a job.</p>
     */
    inline UpdateJobRequest& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}

    /**
     * <p>Allows you to create criteria to abort a job.</p>
     */
    inline UpdateJobRequest& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>. </p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>. </p>
     */
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>. </p>
     */
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>. </p>
     */
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>. </p>
     */
    inline UpdateJobRequest& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}

    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>. </p>
     */
    inline UpdateJobRequest& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet;

    AbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
