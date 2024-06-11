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
    AWS_IOT_API DescribeJobTemplateResult();
    AWS_IOT_API DescribeJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const{ return m_jobTemplateArn; }
    inline void SetJobTemplateArn(const Aws::String& value) { m_jobTemplateArn = value; }
    inline void SetJobTemplateArn(Aws::String&& value) { m_jobTemplateArn = std::move(value); }
    inline void SetJobTemplateArn(const char* value) { m_jobTemplateArn.assign(value); }
    inline DescribeJobTemplateResult& WithJobTemplateArn(const Aws::String& value) { SetJobTemplateArn(value); return *this;}
    inline DescribeJobTemplateResult& WithJobTemplateArn(Aws::String&& value) { SetJobTemplateArn(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& WithJobTemplateArn(const char* value) { SetJobTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const{ return m_jobTemplateId; }
    inline void SetJobTemplateId(const Aws::String& value) { m_jobTemplateId = value; }
    inline void SetJobTemplateId(Aws::String&& value) { m_jobTemplateId = std::move(value); }
    inline void SetJobTemplateId(const char* value) { m_jobTemplateId.assign(value); }
    inline DescribeJobTemplateResult& WithJobTemplateId(const Aws::String& value) { SetJobTemplateId(value); return *this;}
    inline DescribeJobTemplateResult& WithJobTemplateId(Aws::String&& value) { SetJobTemplateId(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& WithJobTemplateId(const char* value) { SetJobTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the job template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeJobTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeJobTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 link to the job document.</p>
     */
    inline const Aws::String& GetDocumentSource() const{ return m_documentSource; }
    inline void SetDocumentSource(const Aws::String& value) { m_documentSource = value; }
    inline void SetDocumentSource(Aws::String&& value) { m_documentSource = std::move(value); }
    inline void SetDocumentSource(const char* value) { m_documentSource.assign(value); }
    inline DescribeJobTemplateResult& WithDocumentSource(const Aws::String& value) { SetDocumentSource(value); return *this;}
    inline DescribeJobTemplateResult& WithDocumentSource(Aws::String&& value) { SetDocumentSource(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& WithDocumentSource(const char* value) { SetDocumentSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job document.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }
    inline void SetDocument(const Aws::String& value) { m_document = value; }
    inline void SetDocument(Aws::String&& value) { m_document = std::move(value); }
    inline void SetDocument(const char* value) { m_document.assign(value); }
    inline DescribeJobTemplateResult& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}
    inline DescribeJobTemplateResult& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& WithDocument(const char* value) { SetDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeJobTemplateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeJobTemplateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfig = value; }
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfig = std::move(value); }
    inline DescribeJobTemplateResult& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}
    inline DescribeJobTemplateResult& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfig = value; }
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfig = std::move(value); }
    inline DescribeJobTemplateResult& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}
    inline DescribeJobTemplateResult& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfig = value; }
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfig = std::move(value); }
    inline DescribeJobTemplateResult& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}
    inline DescribeJobTemplateResult& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfig = value; }
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfig = std::move(value); }
    inline DescribeJobTemplateResult& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}
    inline DescribeJobTemplateResult& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const{ return m_jobExecutionsRetryConfig; }
    inline void SetJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { m_jobExecutionsRetryConfig = value; }
    inline void SetJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { m_jobExecutionsRetryConfig = std::move(value); }
    inline DescribeJobTemplateResult& WithJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { SetJobExecutionsRetryConfig(value); return *this;}
    inline DescribeJobTemplateResult& WithJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { SetJobExecutionsRetryConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure an optional maintenance window for the rollout of a
     * job document to all devices in the target group for a job.</p>
     */
    inline const Aws::Vector<MaintenanceWindow>& GetMaintenanceWindows() const{ return m_maintenanceWindows; }
    inline void SetMaintenanceWindows(const Aws::Vector<MaintenanceWindow>& value) { m_maintenanceWindows = value; }
    inline void SetMaintenanceWindows(Aws::Vector<MaintenanceWindow>&& value) { m_maintenanceWindows = std::move(value); }
    inline DescribeJobTemplateResult& WithMaintenanceWindows(const Aws::Vector<MaintenanceWindow>& value) { SetMaintenanceWindows(value); return *this;}
    inline DescribeJobTemplateResult& WithMaintenanceWindows(Aws::Vector<MaintenanceWindow>&& value) { SetMaintenanceWindows(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& AddMaintenanceWindows(const MaintenanceWindow& value) { m_maintenanceWindows.push_back(value); return *this; }
    inline DescribeJobTemplateResult& AddMaintenanceWindows(MaintenanceWindow&& value) { m_maintenanceWindows.push_back(std::move(value)); return *this; }
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
    inline void SetDestinationPackageVersions(const Aws::Vector<Aws::String>& value) { m_destinationPackageVersions = value; }
    inline void SetDestinationPackageVersions(Aws::Vector<Aws::String>&& value) { m_destinationPackageVersions = std::move(value); }
    inline DescribeJobTemplateResult& WithDestinationPackageVersions(const Aws::Vector<Aws::String>& value) { SetDestinationPackageVersions(value); return *this;}
    inline DescribeJobTemplateResult& WithDestinationPackageVersions(Aws::Vector<Aws::String>&& value) { SetDestinationPackageVersions(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& AddDestinationPackageVersions(const Aws::String& value) { m_destinationPackageVersions.push_back(value); return *this; }
    inline DescribeJobTemplateResult& AddDestinationPackageVersions(Aws::String&& value) { m_destinationPackageVersions.push_back(std::move(value)); return *this; }
    inline DescribeJobTemplateResult& AddDestinationPackageVersions(const char* value) { m_destinationPackageVersions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobTemplateArn;

    Aws::String m_jobTemplateId;

    Aws::String m_description;

    Aws::String m_documentSource;

    Aws::String m_document;

    Aws::Utils::DateTime m_createdAt;

    PresignedUrlConfig m_presignedUrlConfig;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;

    AbortConfig m_abortConfig;

    TimeoutConfig m_timeoutConfig;

    JobExecutionsRetryConfig m_jobExecutionsRetryConfig;

    Aws::Vector<MaintenanceWindow> m_maintenanceWindows;

    Aws::Vector<Aws::String> m_destinationPackageVersions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
