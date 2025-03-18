/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/iot/model/AbortConfig.h>
#include <aws/iot/model/TimeoutConfig.h>
#include <aws/iot/model/JobExecutionsRetryConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/SchedulingConfig.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A job identifier which must be unique for your account. We recommend using a
     * UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    CreateJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    CreateJobRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    CreateJobRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
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
    CreateJobRequest& WithDocumentSource(DocumentSourceT&& value) { SetDocumentSource(std::forward<DocumentSourceT>(value)); return *this;}
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
    CreateJobRequest& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateJobRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const { return m_presignedUrlConfig; }
    inline bool PresignedUrlConfigHasBeenSet() const { return m_presignedUrlConfigHasBeenSet; }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    void SetPresignedUrlConfig(PresignedUrlConfigT&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::forward<PresignedUrlConfigT>(value); }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    CreateJobRequest& WithPresignedUrlConfig(PresignedUrlConfigT&& value) { SetPresignedUrlConfig(std::forward<PresignedUrlConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline TargetSelection GetTargetSelection() const { return m_targetSelection; }
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(TargetSelection value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline CreateJobRequest& WithTargetSelection(TargetSelection value) { SetTargetSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const { return m_jobExecutionsRolloutConfig; }
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::forward<JobExecutionsRolloutConfigT>(value); }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    CreateJobRequest& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { SetJobExecutionsRolloutConfig(std::forward<JobExecutionsRolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to create the criteria to abort a job.</p>
     */
    inline const AbortConfig& GetAbortConfig() const { return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    template<typename AbortConfigT = AbortConfig>
    void SetAbortConfig(AbortConfigT&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::forward<AbortConfigT>(value); }
    template<typename AbortConfigT = AbortConfig>
    CreateJobRequest& WithAbortConfig(AbortConfigT&& value) { SetAbortConfig(std::forward<AbortConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time each device has to finish its execution of the
     * job. The timer is started when the job execution status is set to
     * <code>IN_PROGRESS</code>. If the job execution status is not set to another
     * terminal state before the time expires, it will be automatically set to
     * <code>TIMED_OUT</code>.</p>
     */
    inline const TimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    template<typename TimeoutConfigT = TimeoutConfig>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = TimeoutConfig>
    CreateJobRequest& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    template<typename NamespaceIdT = Aws::String>
    void SetNamespaceId(NamespaceIdT&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::forward<NamespaceIdT>(value); }
    template<typename NamespaceIdT = Aws::String>
    CreateJobRequest& WithNamespaceId(NamespaceIdT&& value) { SetNamespaceId(std::forward<NamespaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the job template used to create the job.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const { return m_jobTemplateArn; }
    inline bool JobTemplateArnHasBeenSet() const { return m_jobTemplateArnHasBeenSet; }
    template<typename JobTemplateArnT = Aws::String>
    void SetJobTemplateArn(JobTemplateArnT&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::forward<JobTemplateArnT>(value); }
    template<typename JobTemplateArnT = Aws::String>
    CreateJobRequest& WithJobTemplateArn(JobTemplateArnT&& value) { SetJobTemplateArn(std::forward<JobTemplateArnT>(value)); return *this;}
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
    CreateJobRequest& WithJobExecutionsRetryConfig(JobExecutionsRetryConfigT&& value) { SetJobExecutionsRetryConfig(std::forward<JobExecutionsRetryConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters of an Amazon Web Services managed template that you can specify to
     * create the job document.</p>  <p> <code>documentParameters</code> can only
     * be used when creating jobs from Amazon Web Services managed templates. This
     * parameter can't be used with custom job templates or to create jobs from
     * them.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDocumentParameters() const { return m_documentParameters; }
    inline bool DocumentParametersHasBeenSet() const { return m_documentParametersHasBeenSet; }
    template<typename DocumentParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetDocumentParameters(DocumentParametersT&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::forward<DocumentParametersT>(value); }
    template<typename DocumentParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateJobRequest& WithDocumentParameters(DocumentParametersT&& value) { SetDocumentParameters(std::forward<DocumentParametersT>(value)); return *this;}
    template<typename DocumentParametersKeyT = Aws::String, typename DocumentParametersValueT = Aws::String>
    CreateJobRequest& AddDocumentParameters(DocumentParametersKeyT&& key, DocumentParametersValueT&& value) {
      m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::forward<DocumentParametersKeyT>(key), std::forward<DocumentParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration that allows you to schedule a job for a future date and
     * time in addition to specifying the end behavior for each job execution.</p>
     */
    inline const SchedulingConfig& GetSchedulingConfig() const { return m_schedulingConfig; }
    inline bool SchedulingConfigHasBeenSet() const { return m_schedulingConfigHasBeenSet; }
    template<typename SchedulingConfigT = SchedulingConfig>
    void SetSchedulingConfig(SchedulingConfigT&& value) { m_schedulingConfigHasBeenSet = true; m_schedulingConfig = std::forward<SchedulingConfigT>(value); }
    template<typename SchedulingConfigT = SchedulingConfig>
    CreateJobRequest& WithSchedulingConfig(SchedulingConfigT&& value) { SetSchedulingConfig(std::forward<SchedulingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version Amazon Resource Names (ARNs) that are installed on the
     * device when the job successfully completes. The package version must be in
     * either the Published or Deprecated state when the job deploys. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>. </p> <p> <b>Note:</b>The following Length Constraints
     * relates to a single ARN. Up to 25 package version ARNs are allowed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPackageVersions() const { return m_destinationPackageVersions; }
    inline bool DestinationPackageVersionsHasBeenSet() const { return m_destinationPackageVersionsHasBeenSet; }
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    void SetDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = std::forward<DestinationPackageVersionsT>(value); }
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    CreateJobRequest& WithDestinationPackageVersions(DestinationPackageVersionsT&& value) { SetDestinationPackageVersions(std::forward<DestinationPackageVersionsT>(value)); return *this;}
    template<typename DestinationPackageVersionsT = Aws::String>
    CreateJobRequest& AddDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.emplace_back(std::forward<DestinationPackageVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_documentSource;
    bool m_documentSourceHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet = false;

    TargetSelection m_targetSelection{TargetSelection::NOT_SET};
    bool m_targetSelectionHasBeenSet = false;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet = false;

    AbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet = false;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_jobTemplateArn;
    bool m_jobTemplateArnHasBeenSet = false;

    JobExecutionsRetryConfig m_jobExecutionsRetryConfig;
    bool m_jobExecutionsRetryConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_documentParameters;
    bool m_documentParametersHasBeenSet = false;

    SchedulingConfig m_schedulingConfig;
    bool m_schedulingConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPackageVersions;
    bool m_destinationPackageVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
