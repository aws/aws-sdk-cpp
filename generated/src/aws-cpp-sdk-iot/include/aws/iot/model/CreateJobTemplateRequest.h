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
    AWS_IOT_API CreateJobTemplateRequest() = default;

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
    inline const Aws::String& GetJobTemplateId() const { return m_jobTemplateId; }
    inline bool JobTemplateIdHasBeenSet() const { return m_jobTemplateIdHasBeenSet; }
    template<typename JobTemplateIdT = Aws::String>
    void SetJobTemplateId(JobTemplateIdT&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::forward<JobTemplateIdT>(value); }
    template<typename JobTemplateIdT = Aws::String>
    CreateJobTemplateRequest& WithJobTemplateId(JobTemplateIdT&& value) { SetJobTemplateId(std::forward<JobTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the job to use as the basis for the job template.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    CreateJobTemplateRequest& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
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
    inline const Aws::String& GetDocumentSource() const { return m_documentSource; }
    inline bool DocumentSourceHasBeenSet() const { return m_documentSourceHasBeenSet; }
    template<typename DocumentSourceT = Aws::String>
    void SetDocumentSource(DocumentSourceT&& value) { m_documentSourceHasBeenSet = true; m_documentSource = std::forward<DocumentSourceT>(value); }
    template<typename DocumentSourceT = Aws::String>
    CreateJobTemplateRequest& WithDocumentSource(DocumentSourceT&& value) { SetDocumentSource(std::forward<DocumentSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job document. Required if you don't specify a value for
     * <code>documentSource</code>.</p>
     */
    inline const Aws::String& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = Aws::String>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Aws::String>
    CreateJobTemplateRequest& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the job document.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateJobTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const { return m_presignedUrlConfig; }
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    void SetPresignedUrlConfig(PresignedUrlConfigT&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::forward<PresignedUrlConfigT>(value); }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    CreateJobTemplateRequest& WithPresignedUrlConfig(PresignedUrlConfigT&& value) { SetPresignedUrlConfig(std::forward<PresignedUrlConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const { return m_jobExecutionsRolloutConfig; }
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::forward<JobExecutionsRolloutConfigT>(value); }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    CreateJobTemplateRequest& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { SetJobExecutionsRolloutConfig(std::forward<JobExecutionsRolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AbortConfig& GetAbortConfig() const { return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    template<typename AbortConfigT = AbortConfig>
    void SetAbortConfig(AbortConfigT&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::forward<AbortConfigT>(value); }
    template<typename AbortConfigT = AbortConfig>
    CreateJobTemplateRequest& WithAbortConfig(AbortConfigT&& value) { SetAbortConfig(std::forward<AbortConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    template<typename TimeoutConfigT = TimeoutConfig>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = TimeoutConfig>
    CreateJobTemplateRequest& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the job template.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateJobTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateJobTemplateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows you to create the criteria to retry a job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const { return m_jobExecutionsRetryConfig; }
    inline bool JobExecutionsRetryConfigHasBeenSet() const { return m_jobExecutionsRetryConfigHasBeenSet; }
    template<typename JobExecutionsRetryConfigT = JobExecutionsRetryConfig>
    void SetJobExecutionsRetryConfig(JobExecutionsRetryConfigT&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::forward<JobExecutionsRetryConfigT>(value); }
    template<typename JobExecutionsRetryConfigT = JobExecutionsRetryConfig>
    CreateJobTemplateRequest& WithJobExecutionsRetryConfig(JobExecutionsRetryConfigT&& value) { SetJobExecutionsRetryConfig(std::forward<JobExecutionsRetryConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure an optional maintenance window for the rollout of a
     * job document to all devices in the target group for a job.</p>
     */
    inline const Aws::Vector<MaintenanceWindow>& GetMaintenanceWindows() const { return m_maintenanceWindows; }
    inline bool MaintenanceWindowsHasBeenSet() const { return m_maintenanceWindowsHasBeenSet; }
    template<typename MaintenanceWindowsT = Aws::Vector<MaintenanceWindow>>
    void SetMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = std::forward<MaintenanceWindowsT>(value); }
    template<typename MaintenanceWindowsT = Aws::Vector<MaintenanceWindow>>
    CreateJobTemplateRequest& WithMaintenanceWindows(MaintenanceWindowsT&& value) { SetMaintenanceWindows(std::forward<MaintenanceWindowsT>(value)); return *this;}
    template<typename MaintenanceWindowsT = MaintenanceWindow>
    CreateJobTemplateRequest& AddMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.emplace_back(std::forward<MaintenanceWindowsT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetDestinationPackageVersions() const { return m_destinationPackageVersions; }
    inline bool DestinationPackageVersionsHasBeenSet() const { return m_destinationPackageVersionsHasBeenSet; }
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    void SetDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = std::forward<DestinationPackageVersionsT>(value); }
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    CreateJobTemplateRequest& WithDestinationPackageVersions(DestinationPackageVersionsT&& value) { SetDestinationPackageVersions(std::forward<DestinationPackageVersionsT>(value)); return *this;}
    template<typename DestinationPackageVersionsT = Aws::String>
    CreateJobTemplateRequest& AddDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.emplace_back(std::forward<DestinationPackageVersionsT>(value)); return *this; }
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
