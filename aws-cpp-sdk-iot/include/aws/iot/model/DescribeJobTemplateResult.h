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


    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const{ return m_jobTemplateArn; }

    /**
     * <p>The ARN of the job template.</p>
     */
    inline void SetJobTemplateArn(const Aws::String& value) { m_jobTemplateArn = value; }

    /**
     * <p>The ARN of the job template.</p>
     */
    inline void SetJobTemplateArn(Aws::String&& value) { m_jobTemplateArn = std::move(value); }

    /**
     * <p>The ARN of the job template.</p>
     */
    inline void SetJobTemplateArn(const char* value) { m_jobTemplateArn.assign(value); }

    /**
     * <p>The ARN of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplateArn(const Aws::String& value) { SetJobTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplateArn(Aws::String&& value) { SetJobTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplateArn(const char* value) { SetJobTemplateArn(value); return *this;}


    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const{ return m_jobTemplateId; }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline void SetJobTemplateId(const Aws::String& value) { m_jobTemplateId = value; }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline void SetJobTemplateId(Aws::String&& value) { m_jobTemplateId = std::move(value); }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline void SetJobTemplateId(const char* value) { m_jobTemplateId.assign(value); }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplateId(const Aws::String& value) { SetJobTemplateId(value); return *this;}

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplateId(Aws::String&& value) { SetJobTemplateId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithJobTemplateId(const char* value) { SetJobTemplateId(value); return *this;}


    /**
     * <p>A description of the job template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the job template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the job template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the job template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the job template.</p>
     */
    inline DescribeJobTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An S3 link to the job document.</p>
     */
    inline const Aws::String& GetDocumentSource() const{ return m_documentSource; }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(const Aws::String& value) { m_documentSource = value; }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(Aws::String&& value) { m_documentSource = std::move(value); }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(const char* value) { m_documentSource.assign(value); }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline DescribeJobTemplateResult& WithDocumentSource(const Aws::String& value) { SetDocumentSource(value); return *this;}

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline DescribeJobTemplateResult& WithDocumentSource(Aws::String&& value) { SetDocumentSource(std::move(value)); return *this;}

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline DescribeJobTemplateResult& WithDocumentSource(const char* value) { SetDocumentSource(value); return *this;}


    /**
     * <p>The job document.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The job document.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_document = value; }

    /**
     * <p>The job document.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_document = std::move(value); }

    /**
     * <p>The job document.</p>
     */
    inline void SetDocument(const char* value) { m_document.assign(value); }

    /**
     * <p>The job document.</p>
     */
    inline DescribeJobTemplateResult& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The job document.</p>
     */
    inline DescribeJobTemplateResult& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The job document.</p>
     */
    inline DescribeJobTemplateResult& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline DescribeJobTemplateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in seconds since the epoch, when the job template was created.</p>
     */
    inline DescribeJobTemplateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }

    
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfig = value; }

    
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfig = std::move(value); }

    
    inline DescribeJobTemplateResult& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}

    
    inline DescribeJobTemplateResult& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}


    
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }

    
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfig = value; }

    
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfig = std::move(value); }

    
    inline DescribeJobTemplateResult& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}

    
    inline DescribeJobTemplateResult& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}


    
    inline const AbortConfig& GetAbortConfig() const{ return m_abortConfig; }

    
    inline void SetAbortConfig(const AbortConfig& value) { m_abortConfig = value; }

    
    inline void SetAbortConfig(AbortConfig&& value) { m_abortConfig = std::move(value); }

    
    inline DescribeJobTemplateResult& WithAbortConfig(const AbortConfig& value) { SetAbortConfig(value); return *this;}

    
    inline DescribeJobTemplateResult& WithAbortConfig(AbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}


    
    inline const TimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }

    
    inline void SetTimeoutConfig(const TimeoutConfig& value) { m_timeoutConfig = value; }

    
    inline void SetTimeoutConfig(TimeoutConfig&& value) { m_timeoutConfig = std::move(value); }

    
    inline DescribeJobTemplateResult& WithTimeoutConfig(const TimeoutConfig& value) { SetTimeoutConfig(value); return *this;}

    
    inline DescribeJobTemplateResult& WithTimeoutConfig(TimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline const JobExecutionsRetryConfig& GetJobExecutionsRetryConfig() const{ return m_jobExecutionsRetryConfig; }

    /**
     * <p>The configuration that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline void SetJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { m_jobExecutionsRetryConfig = value; }

    /**
     * <p>The configuration that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline void SetJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { m_jobExecutionsRetryConfig = std::move(value); }

    /**
     * <p>The configuration that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline DescribeJobTemplateResult& WithJobExecutionsRetryConfig(const JobExecutionsRetryConfig& value) { SetJobExecutionsRetryConfig(value); return *this;}

    /**
     * <p>The configuration that determines how many retries are allowed for each
     * failure type for a job.</p>
     */
    inline DescribeJobTemplateResult& WithJobExecutionsRetryConfig(JobExecutionsRetryConfig&& value) { SetJobExecutionsRetryConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
