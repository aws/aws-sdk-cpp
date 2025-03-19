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
    AWS_IMAGEBUILDER_API WorkflowExecutionMetadata() = default;
    AWS_IMAGEBUILDER_API WorkflowExecutionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowExecutionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource build version that
     * ran.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const { return m_workflowBuildVersionArn; }
    inline bool WorkflowBuildVersionArnHasBeenSet() const { return m_workflowBuildVersionArnHasBeenSet; }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    void SetWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::forward<WorkflowBuildVersionArnT>(value); }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    WorkflowExecutionMetadata& WithWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { SetWorkflowBuildVersionArn(std::forward<WorkflowBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier that Image Builder assigns to keep track of runtime
     * resources each time it runs a workflow.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const { return m_workflowExecutionId; }
    inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }
    template<typename WorkflowExecutionIdT = Aws::String>
    void SetWorkflowExecutionId(WorkflowExecutionIdT&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::forward<WorkflowExecutionIdT>(value); }
    template<typename WorkflowExecutionIdT = Aws::String>
    WorkflowExecutionMetadata& WithWorkflowExecutionId(WorkflowExecutionIdT&& value) { SetWorkflowExecutionId(std::forward<WorkflowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what type of workflow that Image Builder ran for this runtime
     * instance of the workflow.</p>
     */
    inline WorkflowType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WorkflowType value) { m_typeHasBeenSet = true; m_type = value; }
    inline WorkflowExecutionMetadata& WithType(WorkflowType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current runtime status for this workflow.</p>
     */
    inline WorkflowExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkflowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkflowExecutionMetadata& WithStatus(WorkflowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime output message from the workflow, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    WorkflowExecutionMetadata& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of steps in the workflow. This should equal the sum of the
     * step counts for steps that succeeded, were skipped, and failed.</p>
     */
    inline int GetTotalStepCount() const { return m_totalStepCount; }
    inline bool TotalStepCountHasBeenSet() const { return m_totalStepCountHasBeenSet; }
    inline void SetTotalStepCount(int value) { m_totalStepCountHasBeenSet = true; m_totalStepCount = value; }
    inline WorkflowExecutionMetadata& WithTotalStepCount(int value) { SetTotalStepCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps in the workflow that ran
     * successfully.</p>
     */
    inline int GetTotalStepsSucceeded() const { return m_totalStepsSucceeded; }
    inline bool TotalStepsSucceededHasBeenSet() const { return m_totalStepsSucceededHasBeenSet; }
    inline void SetTotalStepsSucceeded(int value) { m_totalStepsSucceededHasBeenSet = true; m_totalStepsSucceeded = value; }
    inline WorkflowExecutionMetadata& WithTotalStepsSucceeded(int value) { SetTotalStepsSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps in the workflow that failed.</p>
     */
    inline int GetTotalStepsFailed() const { return m_totalStepsFailed; }
    inline bool TotalStepsFailedHasBeenSet() const { return m_totalStepsFailedHasBeenSet; }
    inline void SetTotalStepsFailed(int value) { m_totalStepsFailedHasBeenSet = true; m_totalStepsFailed = value; }
    inline WorkflowExecutionMetadata& WithTotalStepsFailed(int value) { SetTotalStepsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps in the workflow that were
     * skipped.</p>
     */
    inline int GetTotalStepsSkipped() const { return m_totalStepsSkipped; }
    inline bool TotalStepsSkippedHasBeenSet() const { return m_totalStepsSkippedHasBeenSet; }
    inline void SetTotalStepsSkipped(int value) { m_totalStepsSkippedHasBeenSet = true; m_totalStepsSkipped = value; }
    inline WorkflowExecutionMetadata& WithTotalStepsSkipped(int value) { SetTotalStepsSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the runtime instance of this workflow started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    WorkflowExecutionMetadata& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this runtime instance of the workflow finished.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    WorkflowExecutionMetadata& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the test group that included the test workflow resource at
     * runtime.</p>
     */
    inline const Aws::String& GetParallelGroup() const { return m_parallelGroup; }
    inline bool ParallelGroupHasBeenSet() const { return m_parallelGroupHasBeenSet; }
    template<typename ParallelGroupT = Aws::String>
    void SetParallelGroup(ParallelGroupT&& value) { m_parallelGroupHasBeenSet = true; m_parallelGroup = std::forward<ParallelGroupT>(value); }
    template<typename ParallelGroupT = Aws::String>
    WorkflowExecutionMetadata& WithParallelGroup(ParallelGroupT&& value) { SetParallelGroup(std::forward<ParallelGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowBuildVersionArn;
    bool m_workflowBuildVersionArnHasBeenSet = false;

    Aws::String m_workflowExecutionId;
    bool m_workflowExecutionIdHasBeenSet = false;

    WorkflowType m_type{WorkflowType::NOT_SET};
    bool m_typeHasBeenSet = false;

    WorkflowExecutionStatus m_status{WorkflowExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_totalStepCount{0};
    bool m_totalStepCountHasBeenSet = false;

    int m_totalStepsSucceeded{0};
    bool m_totalStepsSucceededHasBeenSet = false;

    int m_totalStepsFailed{0};
    bool m_totalStepsFailedHasBeenSet = false;

    int m_totalStepsSkipped{0};
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
