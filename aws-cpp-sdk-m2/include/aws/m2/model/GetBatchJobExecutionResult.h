/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/BatchJobType.h>
#include <aws/m2/model/BatchJobExecutionStatus.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetBatchJobExecutionResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetBatchJobExecutionResult();
    AWS_MAINFRAMEMODERNIZATION_API GetBatchJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetBatchJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application.</p>
     */
    inline GetBatchJobExecutionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application.</p>
     */
    inline GetBatchJobExecutionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application.</p>
     */
    inline GetBatchJobExecutionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The timestamp when the batch job execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when the batch job execution ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The timestamp when the batch job execution ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The timestamp when the batch job execution ended.</p>
     */
    inline GetBatchJobExecutionResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when the batch job execution ended.</p>
     */
    inline GetBatchJobExecutionResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline GetBatchJobExecutionResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline GetBatchJobExecutionResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline GetBatchJobExecutionResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of this batch job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of this batch job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of this batch job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of this batch job.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of this batch job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of this batch job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of this batch job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The type of job.</p>
     */
    inline const BatchJobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The type of job.</p>
     */
    inline void SetJobType(const BatchJobType& value) { m_jobType = value; }

    /**
     * <p>The type of job.</p>
     */
    inline void SetJobType(BatchJobType&& value) { m_jobType = std::move(value); }

    /**
     * <p>The type of job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobType(const BatchJobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobType(BatchJobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>The user for the job.</p>
     */
    inline const Aws::String& GetJobUser() const{ return m_jobUser; }

    /**
     * <p>The user for the job.</p>
     */
    inline void SetJobUser(const Aws::String& value) { m_jobUser = value; }

    /**
     * <p>The user for the job.</p>
     */
    inline void SetJobUser(Aws::String&& value) { m_jobUser = std::move(value); }

    /**
     * <p>The user for the job.</p>
     */
    inline void SetJobUser(const char* value) { m_jobUser.assign(value); }

    /**
     * <p>The user for the job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobUser(const Aws::String& value) { SetJobUser(value); return *this;}

    /**
     * <p>The user for the job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobUser(Aws::String&& value) { SetJobUser(std::move(value)); return *this;}

    /**
     * <p>The user for the job.</p>
     */
    inline GetBatchJobExecutionResult& WithJobUser(const char* value) { SetJobUser(value); return *this;}


    /**
     * <p>The timestamp when the batch job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the batch job execution started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The timestamp when the batch job execution started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the batch job execution started.</p>
     */
    inline GetBatchJobExecutionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the batch job execution started.</p>
     */
    inline GetBatchJobExecutionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The status of the batch job execution.</p>
     */
    inline const BatchJobExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the batch job execution.</p>
     */
    inline void SetStatus(const BatchJobExecutionStatus& value) { m_status = value; }

    /**
     * <p>The status of the batch job execution.</p>
     */
    inline void SetStatus(BatchJobExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the batch job execution.</p>
     */
    inline GetBatchJobExecutionResult& WithStatus(const BatchJobExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the batch job execution.</p>
     */
    inline GetBatchJobExecutionResult& WithStatus(BatchJobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline GetBatchJobExecutionResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the reported status.</p>
     */
    inline GetBatchJobExecutionResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the reported status.</p>
     */
    inline GetBatchJobExecutionResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_executionId;

    Aws::String m_jobId;

    Aws::String m_jobName;

    BatchJobType m_jobType;

    Aws::String m_jobUser;

    Aws::Utils::DateTime m_startTime;

    BatchJobExecutionStatus m_status;

    Aws::String m_statusReason;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
