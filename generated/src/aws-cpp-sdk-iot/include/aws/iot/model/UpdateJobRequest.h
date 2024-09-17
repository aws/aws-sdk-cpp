/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/iot/model/AbortConfig.h>
#include <aws/iot/model/TimeoutConfig.h>
#include <aws/iot/model/JobExecutionsRetryConfig.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateJobRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the job to be updated.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline UpdateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline UpdateJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline UpdateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = value; }
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::move(value); }
    inline UpdateJobRequest& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}
    inline UpdateJobRequest& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }
    inline UpdateJobRequest& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}
    inline UpdateJobRequest& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to create criteria to abort a job.</p>
     */
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }
    inline UpdateJobRequest& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}
    inline UpdateJobRequest& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>. </p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }
    inline UpdateJobRequest& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}
    inline UpdateJobRequest& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is only supported by IoT
     * Greengrass at this time. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/setting-up.html">Setting
     * up IoT Greengrass core devices.</a> </p> 
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }
    inline UpdateJobRequest& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}
    inline UpdateJobRequest& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}
    inline UpdateJobRequest& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const{ return m_jobExecutionsRetryConfig; }
    inline bool JobExecutionsRetryConfigHasBeenSet() const { return m_jobExecutionsRetryConfigHasBeenSet; }
    inline void SetJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = value; }
    inline void SetJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::move(value); }
    inline UpdateJobRequest& WithJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { SetJobExecutionsRetryConfig(value); return *this;}
    inline UpdateJobRequest& WithJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { SetJobExecutionsRetryConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet = false;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet = false;

    AbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet = false;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    JobExecutionsRetryConfig m_jobExecutionsRetryConfig;
    bool m_jobExecutionsRetryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
