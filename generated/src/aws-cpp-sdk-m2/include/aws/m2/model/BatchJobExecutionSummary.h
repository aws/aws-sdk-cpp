﻿/**
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
    AWS_MAINFRAMEMODERNIZATION_API BatchJobExecutionSummary();
    AWS_MAINFRAMEMODERNIZATION_API BatchJobExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API BatchJobExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the application that hosts this batch job.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline BatchJobExecutionSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline BatchJobExecutionSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline BatchJobExecutionSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this batch job.</p>
     */
    inline const BatchJobIdentifier& GetBatchJobIdentifier() const{ return m_batchJobIdentifier; }
    inline bool BatchJobIdentifierHasBeenSet() const { return m_batchJobIdentifierHasBeenSet; }
    inline void SetBatchJobIdentifier(const BatchJobIdentifier& value) { m_batchJobIdentifierHasBeenSet = true; m_batchJobIdentifier = value; }
    inline void SetBatchJobIdentifier(BatchJobIdentifier&& value) { m_batchJobIdentifierHasBeenSet = true; m_batchJobIdentifier = std::move(value); }
    inline BatchJobExecutionSummary& WithBatchJobIdentifier(const BatchJobIdentifier& value) { SetBatchJobIdentifier(value); return *this;}
    inline BatchJobExecutionSummary& WithBatchJobIdentifier(BatchJobIdentifier&& value) { SetBatchJobIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this batch job execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline BatchJobExecutionSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline BatchJobExecutionSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }
    inline BatchJobExecutionSummary& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}
    inline BatchJobExecutionSummary& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}
    inline BatchJobExecutionSummary& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a particular batch job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline BatchJobExecutionSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline BatchJobExecutionSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline BatchJobExecutionSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a particular batch job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline BatchJobExecutionSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline BatchJobExecutionSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline BatchJobExecutionSummary& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a particular batch job execution.</p>
     */
    inline const BatchJobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const BatchJobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(BatchJobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline BatchJobExecutionSummary& WithJobType(const BatchJobType& value) { SetJobType(value); return *this;}
    inline BatchJobExecutionSummary& WithJobType(BatchJobType&& value) { SetJobType(std::move(value)); return *this;}
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
    inline bool ReturnCodeHasBeenSet() const { return m_returnCodeHasBeenSet; }
    inline void SetReturnCode(const Aws::String& value) { m_returnCodeHasBeenSet = true; m_returnCode = value; }
    inline void SetReturnCode(Aws::String&& value) { m_returnCodeHasBeenSet = true; m_returnCode = std::move(value); }
    inline void SetReturnCode(const char* value) { m_returnCodeHasBeenSet = true; m_returnCode.assign(value); }
    inline BatchJobExecutionSummary& WithReturnCode(const Aws::String& value) { SetReturnCode(value); return *this;}
    inline BatchJobExecutionSummary& WithReturnCode(Aws::String&& value) { SetReturnCode(std::move(value)); return *this;}
    inline BatchJobExecutionSummary& WithReturnCode(const char* value) { SetReturnCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when a particular batch job execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline BatchJobExecutionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline BatchJobExecutionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a particular batch job execution.</p>
     */
    inline const BatchJobExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BatchJobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BatchJobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BatchJobExecutionSummary& WithStatus(const BatchJobExecutionStatus& value) { SetStatus(value); return *this;}
    inline BatchJobExecutionSummary& WithStatus(BatchJobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    BatchJobIdentifier m_batchJobIdentifier;
    bool m_batchJobIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    BatchJobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_returnCode;
    bool m_returnCodeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    BatchJobExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
