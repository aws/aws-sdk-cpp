﻿/**
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/JobExecutionsRetryConfig.h>
#include <aws/iot/model/Tag.h>
#include <aws/iot/model/MaintenanceWindow.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateJobTemplateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateJobTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJobTemplate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the job template. We recommend using a UUID.
     * Alpha-numeric characters, "-", and "_" are valid for use here.</p>
     */
    inline const Aws::String& GetJobTemplateId() const{ return m_jobTemplateId; }
    inline bool JobTemplateIdHasBeenSet() const { return m_jobTemplateIdHasBeenSet; }
    inline void SetJobTemplateId(const Aws::String& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = value; }
    inline void SetJobTemplateId(Aws::String&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::move(value); }
    inline void SetJobTemplateId(const char* value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId.assign(value); }
    inline CreateJobTemplateRequest& WithJobTemplateId(const Aws::String& value) { SetJobTemplateId(value); return *this;}
    inline CreateJobTemplateRequest& WithJobTemplateId(Aws::String&& value) { SetJobTemplateId(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithJobTemplateId(const char* value) { SetJobTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the job to use as the basis for the job template.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline CreateJobTemplateRequest& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline CreateJobTemplateRequest& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 link, or S3 object URL, to the job document. The link is an Amazon S3
     * object URL and is required if you don't specify a value for
     * <code>document</code>.</p> <p>For example, <code>--document-source
     * https://s3.<i>region-code</i>.amazonaws.com/example-firmware/device-firmware.1.0</code>
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-bucket-intro.html">Methods
     * for accessing a bucket</a>.</p>
     */
    inline const Aws::String& GetDocumentSource() const{ return m_documentSource; }
    inline bool DocumentSourceHasBeenSet() const { return m_documentSourceHasBeenSet; }
    inline void SetDocumentSource(const Aws::String& value) { m_documentSourceHasBeenSet = true; m_documentSource = value; }
    inline void SetDocumentSource(Aws::String&& value) { m_documentSourceHasBeenSet = true; m_documentSource = std::move(value); }
    inline void SetDocumentSource(const char* value) { m_documentSourceHasBeenSet = true; m_documentSource.assign(value); }
    inline CreateJobTemplateRequest& WithDocumentSource(const Aws::String& value) { SetDocumentSource(value); return *this;}
    inline CreateJobTemplateRequest& WithDocumentSource(Aws::String&& value) { SetDocumentSource(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithDocumentSource(const char* value) { SetDocumentSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }
    inline CreateJobTemplateRequest& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}
    inline CreateJobTemplateRequest& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithDocument(const char* value) { SetDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the job document.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateJobTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateJobTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = value; }
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::move(value); }
    inline CreateJobTemplateRequest& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}
    inline CreateJobTemplateRequest& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }
    inline CreateJobTemplateRequest& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}
    inline CreateJobTemplateRequest& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }
    inline CreateJobTemplateRequest& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}
    inline CreateJobTemplateRequest& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }
    inline CreateJobTemplateRequest& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}
    inline CreateJobTemplateRequest& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the job template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateJobTemplateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateJobTemplateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateJobTemplateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const{ return m_jobExecutionsRetryConfig; }
    inline bool JobExecutionsRetryConfigHasBeenSet() const { return m_jobExecutionsRetryConfigHasBeenSet; }
    inline void SetJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = value; }
    inline void SetJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::move(value); }
    inline CreateJobTemplateRequest& WithJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { SetJobExecutionsRetryConfig(value); return *this;}
    inline CreateJobTemplateRequest& WithJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { SetJobExecutionsRetryConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure an optional maintenance window for the rollout of a
     * job document to all devices in the target group for a job.</p>
     */
    inline const Aws::Vector<MaintenanceWindow>& GetMaintenanceWindows() const{ return m_maintenanceWindows; }
    inline bool MaintenanceWindowsHasBeenSet() const { return m_maintenanceWindowsHasBeenSet; }
    inline void SetMaintenanceWindows(const Aws::Vector<MaintenanceWindow>& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = value; }
    inline void SetMaintenanceWindows(Aws::Vector<MaintenanceWindow>&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = std::move(value); }
    inline CreateJobTemplateRequest& WithMaintenanceWindows(const Aws::Vector<MaintenanceWindow>& value) { SetMaintenanceWindows(value); return *this;}
    inline CreateJobTemplateRequest& WithMaintenanceWindows(Aws::Vector<MaintenanceWindow>&& value) { SetMaintenanceWindows(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& AddMaintenanceWindows(const MaintenanceWindow& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.push_back(value); return *this; }
    inline CreateJobTemplateRequest& AddMaintenanceWindows(MaintenanceWindow&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The package version Amazon Resource Names (ARNs) that are installed on the
     * device when the job successfully completes. The package version must be in
     * either the Published or Deprecated state when the job deploys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p> <p> <b>Note:</b>The following Length Constraints
     * relates to a single ARN. Up to 25 package version ARNs are allowed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPackageVersions() const{ return m_destinationPackageVersions; }
    inline bool DestinationPackageVersionsHasBeenSet() const { return m_destinationPackageVersionsHasBeenSet; }
    inline void SetDestinationPackageVersions(const Aws::Vector<Aws::String>& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = value; }
    inline void SetDestinationPackageVersions(Aws::Vector<Aws::String>&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = std::move(value); }
    inline CreateJobTemplateRequest& WithDestinationPackageVersions(const Aws::Vector<Aws::String>& value) { SetDestinationPackageVersions(value); return *this;}
    inline CreateJobTemplateRequest& WithDestinationPackageVersions(Aws::Vector<Aws::String>&& value) { SetDestinationPackageVersions(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& AddDestinationPackageVersions(const Aws::String& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.push_back(value); return *this; }
    inline CreateJobTemplateRequest& AddDestinationPackageVersions(Aws::String&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.push_back(std::move(value)); return *this; }
    inline CreateJobTemplateRequest& AddDestinationPackageVersions(const char* value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_documentSource;
    bool m_documentSourceHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    JobExecutionsRetryConfig m_jobExecutionsRetryConfig;
    bool m_jobExecutionsRetryConfigHasBeenSet = false;

    Aws::Vector<MaintenanceWindow> m_maintenanceWindows;
    bool m_maintenanceWindowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPackageVersions;
    bool m_destinationPackageVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
