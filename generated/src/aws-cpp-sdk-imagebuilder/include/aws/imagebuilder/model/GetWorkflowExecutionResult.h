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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{
  class GetWorkflowExecutionResult
  {
  public:
    AWS_IMAGEBUILDER_API GetWorkflowExecutionResult() = default;
    AWS_IMAGEBUILDER_API GetWorkflowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetWorkflowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const { return m_workflowBuildVersionArn; }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    void SetWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::forward<WorkflowBuildVersionArnT>(value); }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    GetWorkflowExecutionResult& WithWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { SetWorkflowBuildVersionArn(std::forward<WorkflowBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const { return m_workflowExecutionId; }
    template<typename WorkflowExecutionIdT = Aws::String>
    void SetWorkflowExecutionId(WorkflowExecutionIdT&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::forward<WorkflowExecutionIdT>(value); }
    template<typename WorkflowExecutionIdT = Aws::String>
    GetWorkflowExecutionResult& WithWorkflowExecutionId(WorkflowExecutionIdT&& value) { SetWorkflowExecutionId(std::forward<WorkflowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
    template<typename ImageBuildVersionArnT = Aws::String>
    void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value); }
    template<typename ImageBuildVersionArnT = Aws::String>
    GetWorkflowExecutionResult& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) { SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of workflow that Image Builder ran for the specified runtime
     * instance of the workflow.</p>
     */
    inline WorkflowType GetType() const { return m_type; }
    inline void SetType(WorkflowType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetWorkflowExecutionResult& WithType(WorkflowType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current runtime status for the specified runtime instance of the
     * workflow.</p>
     */
    inline WorkflowExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(WorkflowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowExecutionResult& WithStatus(WorkflowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetWorkflowExecutionResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of steps in the specified runtime instance of the workflow
     * that ran. This number should equal the sum of the step counts for steps that
     * succeeded, were skipped, and failed.</p>
     */
    inline int GetTotalStepCount() const { return m_totalStepCount; }
    inline void SetTotalStepCount(int value) { m_totalStepCountHasBeenSet = true; m_totalStepCount = value; }
    inline GetWorkflowExecutionResult& WithTotalStepCount(int value) { SetTotalStepCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps that ran successfully in the
     * specified runtime instance of the workflow.</p>
     */
    inline int GetTotalStepsSucceeded() const { return m_totalStepsSucceeded; }
    inline void SetTotalStepsSucceeded(int value) { m_totalStepsSucceededHasBeenSet = true; m_totalStepsSucceeded = value; }
    inline GetWorkflowExecutionResult& WithTotalStepsSucceeded(int value) { SetTotalStepsSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps that failed in the specified runtime
     * instance of the workflow.</p>
     */
    inline int GetTotalStepsFailed() const { return m_totalStepsFailed; }
    inline void SetTotalStepsFailed(int value) { m_totalStepsFailedHasBeenSet = true; m_totalStepsFailed = value; }
    inline GetWorkflowExecutionResult& WithTotalStepsFailed(int value) { SetTotalStepsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps that were skipped in the specified
     * runtime instance of the workflow.</p>
     */
    inline int GetTotalStepsSkipped() const { return m_totalStepsSkipped; }
    inline void SetTotalStepsSkipped(int value) { m_totalStepsSkippedHasBeenSet = true; m_totalStepsSkipped = value; }
    inline GetWorkflowExecutionResult& WithTotalStepsSkipped(int value) { SetTotalStepsSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    GetWorkflowExecutionResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    GetWorkflowExecutionResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline const Aws::String& GetParallelGroup() const { return m_parallelGroup; }
    template<typename ParallelGroupT = Aws::String>
    void SetParallelGroup(ParallelGroupT&& value) { m_parallelGroupHasBeenSet = true; m_parallelGroup = std::forward<ParallelGroupT>(value); }
    template<typename ParallelGroupT = Aws::String>
    GetWorkflowExecutionResult& WithParallelGroup(ParallelGroupT&& value) { SetParallelGroup(std::forward<ParallelGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_workflowBuildVersionArn;
    bool m_workflowBuildVersionArnHasBeenSet = false;

    Aws::String m_workflowExecutionId;
    bool m_workflowExecutionIdHasBeenSet = false;

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

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
