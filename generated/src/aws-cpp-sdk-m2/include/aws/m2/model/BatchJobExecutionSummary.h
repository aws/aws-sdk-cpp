/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/BatchJobIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/BatchJobType.h>
#include <aws/m2/model/BatchJobExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A subset of the possible batch job attributes. Used in the batch job
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/BatchJobExecutionSummary">AWS
   * API Reference</a></p>
   */
  class BatchJobExecutionSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API BatchJobExecutionSummary() = default;
    AWS_MAINFRAMEMODERNIZATION_API BatchJobExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API BatchJobExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the application that hosts this batch job.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    BatchJobExecutionSummary& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this batch job.</p>
     */
    inline const BatchJobIdentifier& GetBatchJobIdentifier() const { return m_batchJobIdentifier; }
    inline bool BatchJobIdentifierHasBeenSet() const { return m_batchJobIdentifierHasBeenSet; }
    template<typename BatchJobIdentifierT = BatchJobIdentifier>
    void SetBatchJobIdentifier(BatchJobIdentifierT&& value) { m_batchJobIdentifierHasBeenSet = true; m_batchJobIdentifier = std::forward<BatchJobIdentifierT>(value); }
    template<typename BatchJobIdentifierT = BatchJobIdentifier>
    BatchJobExecutionSummary& WithBatchJobIdentifier(BatchJobIdentifierT&& value) { SetBatchJobIdentifier(std::forward<BatchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this batch job execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    BatchJobExecutionSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    BatchJobExecutionSummary& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a particular batch job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    BatchJobExecutionSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a particular batch job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    BatchJobExecutionSummary& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a particular batch job execution.</p>
     */
    inline BatchJobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(BatchJobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline BatchJobExecutionSummary& WithJobType(BatchJobType value) { SetJobType(value); return *this;}
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
    inline bool ReturnCodeHasBeenSet() const { return m_returnCodeHasBeenSet; }
    template<typename ReturnCodeT = Aws::String>
    void SetReturnCode(ReturnCodeT&& value) { m_returnCodeHasBeenSet = true; m_returnCode = std::forward<ReturnCodeT>(value); }
    template<typename ReturnCodeT = Aws::String>
    BatchJobExecutionSummary& WithReturnCode(ReturnCodeT&& value) { SetReturnCode(std::forward<ReturnCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when a particular batch job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    BatchJobExecutionSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a particular batch job execution.</p>
     */
    inline BatchJobExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BatchJobExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BatchJobExecutionSummary& WithStatus(BatchJobExecutionStatus value) { SetStatus(value); return *this;}
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

    BatchJobType m_jobType{BatchJobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_returnCode;
    bool m_returnCodeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    BatchJobExecutionStatus m_status{BatchJobExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
