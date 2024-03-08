/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowType.h>
#include <aws/imagebuilder/model/WorkflowExecutionStatus.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Metadata that includes details and status from this runtime instance of the
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WorkflowExecutionMetadata">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionMetadata
  {
  public:
    AWS_IMAGEBUILDER_API WorkflowExecutionMetadata();
    AWS_IMAGEBUILDER_API WorkflowExecutionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowExecutionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline bool WorkflowBuildVersionArnHasBeenSet() const { return m_workflowBuildVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline WorkflowExecutionMetadata& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline WorkflowExecutionMetadata& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline WorkflowExecutionMetadata& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}


    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const{ return m_workflowExecutionId; }

    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }

    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline void SetWorkflowExecutionId(const Aws::String& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = value; }

    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline void SetWorkflowExecutionId(Aws::String&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::move(value); }

    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline void SetWorkflowExecutionId(const char* value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId.assign(value); }

    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline WorkflowExecutionMetadata& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}

    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline WorkflowExecutionMetadata& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline WorkflowExecutionMetadata& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}


    /**
     * <p>Indicates what type of workflow that Image Builder ran for this runtime
     * instance of the workflow.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>Indicates what type of workflow that Image Builder ran for this runtime
     * instance of the workflow.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates what type of workflow that Image Builder ran for this runtime
     * instance of the workflow.</p>
     */
    inline void SetType(const WorkflowType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates what type of workflow that Image Builder ran for this runtime
     * instance of the workflow.</p>
     */
    inline void SetType(WorkflowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates what type of workflow that Image Builder ran for this runtime
     * instance of the workflow.</p>
     */
    inline WorkflowExecutionMetadata& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates what type of workflow that Image Builder ran for this runtime
     * instance of the workflow.</p>
     */
    inline WorkflowExecutionMetadata& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current runtime status for this workflow.</p>
     */
    inline const WorkflowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current runtime status for this workflow.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current runtime status for this workflow.</p>
     */
    inline void SetStatus(const WorkflowExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current runtime status for this workflow.</p>
     */
    inline void SetStatus(WorkflowExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current runtime status for this workflow.</p>
     */
    inline WorkflowExecutionMetadata& WithStatus(const WorkflowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current runtime status for this workflow.</p>
     */
    inline WorkflowExecutionMetadata& WithStatus(WorkflowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline WorkflowExecutionMetadata& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline WorkflowExecutionMetadata& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline WorkflowExecutionMetadata& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The total number of steps in the workflow. This should equal the sum of the
     * step counts for steps that succeeded, were skipped, and failed.</p>
     */
    inline int GetTotalStepCount() const{ return m_totalStepCount; }

    /**
     * <p>The total number of steps in the workflow. This should equal the sum of the
     * step counts for steps that succeeded, were skipped, and failed.</p>
     */
    inline bool TotalStepCountHasBeenSet() const { return m_totalStepCountHasBeenSet; }

    /**
     * <p>The total number of steps in the workflow. This should equal the sum of the
     * step counts for steps that succeeded, were skipped, and failed.</p>
     */
    inline void SetTotalStepCount(int value) { m_totalStepCountHasBeenSet = true; m_totalStepCount = value; }

    /**
     * <p>The total number of steps in the workflow. This should equal the sum of the
     * step counts for steps that succeeded, were skipped, and failed.</p>
     */
    inline WorkflowExecutionMetadata& WithTotalStepCount(int value) { SetTotalStepCount(value); return *this;}


    /**
     * <p>A runtime count for the number of steps in the workflow that ran
     * successfully.</p>
     */
    inline int GetTotalStepsSucceeded() const{ return m_totalStepsSucceeded; }

    /**
     * <p>A runtime count for the number of steps in the workflow that ran
     * successfully.</p>
     */
    inline bool TotalStepsSucceededHasBeenSet() const { return m_totalStepsSucceededHasBeenSet; }

    /**
     * <p>A runtime count for the number of steps in the workflow that ran
     * successfully.</p>
     */
    inline void SetTotalStepsSucceeded(int value) { m_totalStepsSucceededHasBeenSet = true; m_totalStepsSucceeded = value; }

    /**
     * <p>A runtime count for the number of steps in the workflow that ran
     * successfully.</p>
     */
    inline WorkflowExecutionMetadata& WithTotalStepsSucceeded(int value) { SetTotalStepsSucceeded(value); return *this;}


    /**
     * <p>A runtime count for the number of steps in the workflow that failed.</p>
     */
    inline int GetTotalStepsFailed() const{ return m_totalStepsFailed; }

    /**
     * <p>A runtime count for the number of steps in the workflow that failed.</p>
     */
    inline bool TotalStepsFailedHasBeenSet() const { return m_totalStepsFailedHasBeenSet; }

    /**
     * <p>A runtime count for the number of steps in the workflow that failed.</p>
     */
    inline void SetTotalStepsFailed(int value) { m_totalStepsFailedHasBeenSet = true; m_totalStepsFailed = value; }

    /**
     * <p>A runtime count for the number of steps in the workflow that failed.</p>
     */
    inline WorkflowExecutionMetadata& WithTotalStepsFailed(int value) { SetTotalStepsFailed(value); return *this;}


    /**
     * <p>A runtime count for the number of steps in the workflow that were
     * skipped.</p>
     */
    inline int GetTotalStepsSkipped() const{ return m_totalStepsSkipped; }

    /**
     * <p>A runtime count for the number of steps in the workflow that were
     * skipped.</p>
     */
    inline bool TotalStepsSkippedHasBeenSet() const { return m_totalStepsSkippedHasBeenSet; }

    /**
     * <p>A runtime count for the number of steps in the workflow that were
     * skipped.</p>
     */
    inline void SetTotalStepsSkipped(int value) { m_totalStepsSkippedHasBeenSet = true; m_totalStepsSkipped = value; }

    /**
     * <p>A runtime count for the number of steps in the workflow that were
     * skipped.</p>
     */
    inline WorkflowExecutionMetadata& WithTotalStepsSkipped(int value) { SetTotalStepsSkipped(value); return *this;}


    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline WorkflowExecutionMetadata& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline WorkflowExecutionMetadata& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline WorkflowExecutionMetadata& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline WorkflowExecutionMetadata& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline WorkflowExecutionMetadata& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline WorkflowExecutionMetadata& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline const Aws::String& GetParallelGroup() const{ return m_parallelGroup; }

    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline bool ParallelGroupHasBeenSet() const { return m_parallelGroupHasBeenSet; }

    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline void SetParallelGroup(const Aws::String& value) { m_parallelGroupHasBeenSet = true; m_parallelGroup = value; }

    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline void SetParallelGroup(Aws::String&& value) { m_parallelGroupHasBeenSet = true; m_parallelGroup = std::move(value); }

    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline void SetParallelGroup(const char* value) { m_parallelGroupHasBeenSet = true; m_parallelGroup.assign(value); }

    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline WorkflowExecutionMetadata& WithParallelGroup(const Aws::String& value) { SetParallelGroup(value); return *this;}

    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline WorkflowExecutionMetadata& WithParallelGroup(Aws::String&& value) { SetParallelGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline WorkflowExecutionMetadata& WithParallelGroup(const char* value) { SetParallelGroup(value); return *this;}

  private:

    Aws::String m_workflowBuildVersionArn;
    bool m_workflowBuildVersionArnHasBeenSet = false;

    Aws::String m_workflowExecutionId;
    bool m_workflowExecutionIdHasBeenSet = false;

    WorkflowType m_type;
    bool m_typeHasBeenSet = false;

    WorkflowExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_totalStepCount;
    bool m_totalStepCountHasBeenSet = false;

    int m_totalStepsSucceeded;
    bool m_totalStepsSucceededHasBeenSet = false;

    int m_totalStepsFailed;
    bool m_totalStepsFailedHasBeenSet = false;

    int m_totalStepsSkipped;
    bool m_totalStepsSkippedHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_parallelGroup;
    bool m_parallelGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
