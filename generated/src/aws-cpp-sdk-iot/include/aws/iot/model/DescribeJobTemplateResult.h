/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/iot/model/AbortConfig.h>
#include <aws/iot/model/TimeoutConfig.h>
#include <aws/iot/model/JobExecutionsRetryConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/MaintenanceWindow.h>
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
namespace IoT
{
namespace Model
{
  class DescribeJobTemplateResult
  {
  public:
    AWS_IOT_API DescribeJobTemplateResult() = default;
    AWS_IOT_API DescribeJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const { return m_jobTemplateArn; }
    template<typename JobTemplateArnT = Aws::String>
    void SetJobTemplateArn(JobTemplateArnT&& value) { m_jobTemplateArnHasBeenSet = true; m_jobTemplateArn = std::forward<JobTemplateArnT>(value); }
    template<typename JobTemplateArnT = Aws::String>
    DescribeJobTemplateResult& WithJobTemplateArn(JobTemplateArnT&& value) { SetJobTemplateArn(std::forward<JobTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const { return m_jobTemplateId; }
    template<typename JobTemplateIdT = Aws::String>
    void SetJobTemplateId(JobTemplateIdT&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::forward<JobTemplateIdT>(value); }
    template<typename JobTemplateIdT = Aws::String>
    DescribeJobTemplateResult& WithJobTemplateId(JobTemplateIdT&& value) { SetJobTemplateId(std::forward<JobTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the job template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeJobTemplateResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 link to the job document.</p>
     */
    inline const Aws::String& GetDocumentSource() const { return m_documentSource; }
    template<typename DocumentSourceT = Aws::String>
    void SetDocumentSource(DocumentSourceT&& value) { m_documentSourceHasBeenSet = true; m_documentSource = std::forward<DocumentSourceT>(value); }
    template<typename DocumentSourceT = Aws::String>
    DescribeJobTemplateResult& WithDocumentSource(DocumentSourceT&& value) { SetDocumentSource(std::forward<DocumentSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job document.</p>
     */
    inline const Aws::String& GetDocument() const { return m_document; }
    template<typename DocumentT = Aws::String>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Aws::String>
    DescribeJobTemplateResult& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeJobTemplateResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const { return m_presignedUrlConfig; }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    void SetPresignedUrlConfig(PresignedUrlConfigT&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::forward<PresignedUrlConfigT>(value); }
    template<typename PresignedUrlConfigT = PresignedUrlConfig>
    DescribeJobTemplateResult& WithPresignedUrlConfig(PresignedUrlConfigT&& value) { SetPresignedUrlConfig(std::forward<PresignedUrlConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const { return m_jobExecutionsRolloutConfig; }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::forward<JobExecutionsRolloutConfigT>(value); }
    template<typename JobExecutionsRolloutConfigT = JobExecutionsRolloutConfig>
    DescribeJobTemplateResult& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { SetJobExecutionsRolloutConfig(std::forward<JobExecutionsRolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AbortConfig& GetAbortConfig() const { return m_abortConfig; }
    template<typename AbortConfigT = AbortConfig>
    void SetAbortConfig(AbortConfigT&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::forward<AbortConfigT>(value); }
    template<typename AbortConfigT = AbortConfig>
    DescribeJobTemplateResult& WithAbortConfig(AbortConfigT&& value) { SetAbortConfig(std::forward<AbortConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
    template<typename TimeoutConfigT = TimeoutConfig>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = TimeoutConfig>
    DescribeJobTemplateResult& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const { return m_jobExecutionsRetryConfig; }
    template<typename JobExecutionsRetryConfigT = JobExecutionsRetryConfig>
    void SetJobExecutionsRetryConfig(JobExecutionsRetryConfigT&& value) { m_jobExecutionsRetryConfigHasBeenSet = true; m_jobExecutionsRetryConfig = std::forward<JobExecutionsRetryConfigT>(value); }
    template<typename JobExecutionsRetryConfigT = JobExecutionsRetryConfig>
    DescribeJobTemplateResult& WithJobExecutionsRetryConfig(JobExecutionsRetryConfigT&& value) { SetJobExecutionsRetryConfig(std::forward<JobExecutionsRetryConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure an optional maintenance window for the rollout of a
     * job document to all devices in the target group for a job.</p>
     */
    inline const Aws::Vector<MaintenanceWindow>& GetMaintenanceWindows() const { return m_maintenanceWindows; }
    template<typename MaintenanceWindowsT = Aws::Vector<MaintenanceWindow>>
    void SetMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows = std::forward<MaintenanceWindowsT>(value); }
    template<typename MaintenanceWindowsT = Aws::Vector<MaintenanceWindow>>
    DescribeJobTemplateResult& WithMaintenanceWindows(MaintenanceWindowsT&& value) { SetMaintenanceWindows(std::forward<MaintenanceWindowsT>(value)); return *this;}
    template<typename MaintenanceWindowsT = MaintenanceWindow>
    DescribeJobTemplateResult& AddMaintenanceWindows(MaintenanceWindowsT&& value) { m_maintenanceWindowsHasBeenSet = true; m_maintenanceWindows.emplace_back(std::forward<MaintenanceWindowsT>(value)); return *this; }
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
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    void SetDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions = std::forward<DestinationPackageVersionsT>(value); }
    template<typename DestinationPackageVersionsT = Aws::Vector<Aws::String>>
    DescribeJobTemplateResult& WithDestinationPackageVersions(DestinationPackageVersionsT&& value) { SetDestinationPackageVersions(std::forward<DestinationPackageVersionsT>(value)); return *this;}
    template<typename DestinationPackageVersionsT = Aws::String>
    DescribeJobTemplateResult& AddDestinationPackageVersions(DestinationPackageVersionsT&& value) { m_destinationPackageVersionsHasBeenSet = true; m_destinationPackageVersions.emplace_back(std::forward<DestinationPackageVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeJobTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobTemplateArn;
    bool m_jobTemplateArnHasBeenSet = false;

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_documentSource;
    bool m_documentSourceHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet = false;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet = false;

    AbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet = false;

    TimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;

    JobExecutionsRetryConfig m_jobExecutionsRetryConfig;
    bool m_jobExecutionsRetryConfigHasBeenSet = false;

    Aws::Vector<MaintenanceWindow> m_maintenanceWindows;
    bool m_maintenanceWindowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPackageVersions;
    bool m_destinationPackageVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
