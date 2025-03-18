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
    AWS_MAINFRAMEMODERNIZATION_API GetBatchJobExecutionResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API GetBatchJobExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetBatchJobExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetBatchJobExecutionResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this batch job.</p>
     */
    inline const BatchJobIdentifier& GetBatchJobIdentifier() const { return m_batchJobIdentifier; }
    template<typename BatchJobIdentifierT = BatchJobIdentifier>
    void SetBatchJobIdentifier(BatchJobIdentifierT&& value) { m_batchJobIdentifierHasBeenSet = true; m_batchJobIdentifier = std::forward<BatchJobIdentifierT>(value); }
    template<typename BatchJobIdentifierT = BatchJobIdentifier>
    GetBatchJobExecutionResult& WithBatchJobIdentifier(BatchJobIdentifierT&& value) { SetBatchJobIdentifier(std::forward<BatchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the batch job execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetBatchJobExecutionResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this batch job execution.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    GetBatchJobExecutionResult& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this batch job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetBatchJobExecutionResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this batch job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetBatchJobExecutionResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step/procedure step information for the restart batch job operation.</p>
     */
    inline const JobStepRestartMarker& GetJobStepRestartMarker() const { return m_jobStepRestartMarker; }
    template<typename JobStepRestartMarkerT = JobStepRestartMarker>
    void SetJobStepRestartMarker(JobStepRestartMarkerT&& value) { m_jobStepRestartMarkerHasBeenSet = true; m_jobStepRestartMarker = std::forward<JobStepRestartMarkerT>(value); }
    template<typename JobStepRestartMarkerT = JobStepRestartMarker>
    GetBatchJobExecutionResult& WithJobStepRestartMarker(JobStepRestartMarkerT&& value) { SetJobStepRestartMarker(std::forward<JobStepRestartMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job.</p>
     */
    inline BatchJobType GetJobType() const { return m_jobType; }
    inline void SetJobType(BatchJobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline GetBatchJobExecutionResult& WithJobType(BatchJobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user for the job.</p>
     */
    inline const Aws::String& GetJobUser() const { return m_jobUser; }
    template<typename JobUserT = Aws::String>
    void SetJobUser(JobUserT&& value) { m_jobUserHasBeenSet = true; m_jobUser = std::forward<JobUserT>(value); }
    template<typename JobUserT = Aws::String>
    GetBatchJobExecutionResult& WithJobUser(JobUserT&& value) { SetJobUser(std::forward<JobUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job return code from either the Blu Age or Micro Focus runtime
     * engines. For more information, see <a
     * href="https://www.ibm.com/docs/en/was/8.5.5?topic=model-batch-return-codes">Batch
     * return codes</a> in the <i>IBM WebSphere Application Server</i>
     * documentation.</p>
     */
    inline const Aws::String& GetReturnCode() const { return m_returnCode; }
    template<typename ReturnCodeT = Aws::String>
    void SetReturnCode(ReturnCodeT&& value) { m_returnCodeHasBeenSet = true; m_returnCode = std::forward<ReturnCodeT>(value); }
    template<typename ReturnCodeT = Aws::String>
    GetBatchJobExecutionResult& WithReturnCode(ReturnCodeT&& value) { SetReturnCode(std::forward<ReturnCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the batch job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetBatchJobExecutionResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch job execution.</p>
     */
    inline BatchJobExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(BatchJobExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetBatchJobExecutionResult& WithStatus(BatchJobExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetBatchJobExecutionResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBatchJobExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    BatchJobIdentifier m_batchJobIdentifier;
    bool m_batchJobIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStepRestartMarker m_jobStepRestartMarker;
    bool m_jobStepRestartMarkerHasBeenSet = false;

    BatchJobType m_jobType{BatchJobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_jobUser;
    bool m_jobUserHasBeenSet = false;

    Aws::String m_returnCode;
    bool m_returnCodeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    BatchJobExecutionStatus m_status{BatchJobExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
