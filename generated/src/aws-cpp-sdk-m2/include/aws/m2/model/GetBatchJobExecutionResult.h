/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/BatchJobIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/JobStepRestartMarker.h>
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


    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetBatchJobExecutionResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetBatchJobExecutionResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this batch job.</p>
     */
    inline const BatchJobIdentifier& GetBatchJobIdentifier() const{ return m_batchJobIdentifier; }
    inline void SetBatchJobIdentifier(const BatchJobIdentifier& value) { m_batchJobIdentifier = value; }
    inline void SetBatchJobIdentifier(BatchJobIdentifier&& value) { m_batchJobIdentifier = std::move(value); }
    inline GetBatchJobExecutionResult& WithBatchJobIdentifier(const BatchJobIdentifier& value) { SetBatchJobIdentifier(value); return *this;}
    inline GetBatchJobExecutionResult& WithBatchJobIdentifier(BatchJobIdentifier&& value) { SetBatchJobIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the batch job execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetBatchJobExecutionResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetBatchJobExecutionResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }
    inline GetBatchJobExecutionResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline GetBatchJobExecutionResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetBatchJobExecutionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetBatchJobExecutionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this batch job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetBatchJobExecutionResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetBatchJobExecutionResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step/procedure step information for the restart batch job operation.</p>
     */
    inline const JobStepRestartMarker& GetJobStepRestartMarker() const{ return m_jobStepRestartMarker; }
    inline void SetJobStepRestartMarker(const JobStepRestartMarker& value) { m_jobStepRestartMarker = value; }
    inline void SetJobStepRestartMarker(JobStepRestartMarker&& value) { m_jobStepRestartMarker = std::move(value); }
    inline GetBatchJobExecutionResult& WithJobStepRestartMarker(const JobStepRestartMarker& value) { SetJobStepRestartMarker(value); return *this;}
    inline GetBatchJobExecutionResult& WithJobStepRestartMarker(JobStepRestartMarker&& value) { SetJobStepRestartMarker(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job.</p>
     */
    inline const BatchJobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const BatchJobType& value) { m_jobType = value; }
    inline void SetJobType(BatchJobType&& value) { m_jobType = std::move(value); }
    inline GetBatchJobExecutionResult& WithJobType(const BatchJobType& value) { SetJobType(value); return *this;}
    inline GetBatchJobExecutionResult& WithJobType(BatchJobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user for the job.</p>
     */
    inline const Aws::String& GetJobUser() const{ return m_jobUser; }
    inline void SetJobUser(const Aws::String& value) { m_jobUser = value; }
    inline void SetJobUser(Aws::String&& value) { m_jobUser = std::move(value); }
    inline void SetJobUser(const char* value) { m_jobUser.assign(value); }
    inline GetBatchJobExecutionResult& WithJobUser(const Aws::String& value) { SetJobUser(value); return *this;}
    inline GetBatchJobExecutionResult& WithJobUser(Aws::String&& value) { SetJobUser(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithJobUser(const char* value) { SetJobUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job return code from either the Blu Age or Micro Focus runtime
     * engines. For more information, see <a
     * href="https://www.ibm.com/docs/en/was/8.5.5?topic=model-batch-return-codes">Batch
     * return codes</a> in the <i>IBM WebSphere Application Server</i>
     * documentation.</p>
     */
    inline const Aws::String& GetReturnCode() const{ return m_returnCode; }
    inline void SetReturnCode(const Aws::String& value) { m_returnCode = value; }
    inline void SetReturnCode(Aws::String&& value) { m_returnCode = std::move(value); }
    inline void SetReturnCode(const char* value) { m_returnCode.assign(value); }
    inline GetBatchJobExecutionResult& WithReturnCode(const Aws::String& value) { SetReturnCode(value); return *this;}
    inline GetBatchJobExecutionResult& WithReturnCode(Aws::String&& value) { SetReturnCode(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithReturnCode(const char* value) { SetReturnCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the batch job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetBatchJobExecutionResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetBatchJobExecutionResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch job execution.</p>
     */
    inline const BatchJobExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const BatchJobExecutionStatus& value) { m_status = value; }
    inline void SetStatus(BatchJobExecutionStatus&& value) { m_status = std::move(value); }
    inline GetBatchJobExecutionResult& WithStatus(const BatchJobExecutionStatus& value) { SetStatus(value); return *this;}
    inline GetBatchJobExecutionResult& WithStatus(BatchJobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetBatchJobExecutionResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetBatchJobExecutionResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBatchJobExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBatchJobExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBatchJobExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    BatchJobIdentifier m_batchJobIdentifier;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_executionId;

    Aws::String m_jobId;

    Aws::String m_jobName;

    JobStepRestartMarker m_jobStepRestartMarker;

    BatchJobType m_jobType;

    Aws::String m_jobUser;

    Aws::String m_returnCode;

    Aws::Utils::DateTime m_startTime;

    BatchJobExecutionStatus m_status;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
