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
    AWS_IMAGEBUILDER_API GetWorkflowExecutionResult();
    AWS_IMAGEBUILDER_API GetWorkflowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetWorkflowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkflowExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkflowExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArn = value; }
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArn = std::move(value); }
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArn.assign(value); }
    inline GetWorkflowExecutionResult& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}
    inline GetWorkflowExecutionResult& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const{ return m_workflowExecutionId; }
    inline void SetWorkflowExecutionId(const Aws::String& value) { m_workflowExecutionId = value; }
    inline void SetWorkflowExecutionId(Aws::String&& value) { m_workflowExecutionId = std::move(value); }
    inline void SetWorkflowExecutionId(const char* value) { m_workflowExecutionId.assign(value); }
    inline GetWorkflowExecutionResult& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}
    inline GetWorkflowExecutionResult& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArn = value; }
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArn = std::move(value); }
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArn.assign(value); }
    inline GetWorkflowExecutionResult& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}
    inline GetWorkflowExecutionResult& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of workflow that Image Builder ran for the specified runtime
     * instance of the workflow.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }
    inline void SetType(const WorkflowType& value) { m_type = value; }
    inline void SetType(WorkflowType&& value) { m_type = std::move(value); }
    inline GetWorkflowExecutionResult& WithType(const WorkflowType& value) { SetType(value); return *this;}
    inline GetWorkflowExecutionResult& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current runtime status for the specified runtime instance of the
     * workflow.</p>
     */
    inline const WorkflowExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WorkflowExecutionStatus& value) { m_status = value; }
    inline void SetStatus(WorkflowExecutionStatus&& value) { m_status = std::move(value); }
    inline GetWorkflowExecutionResult& WithStatus(const WorkflowExecutionStatus& value) { SetStatus(value); return *this;}
    inline GetWorkflowExecutionResult& WithStatus(WorkflowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetWorkflowExecutionResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetWorkflowExecutionResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of steps in the specified runtime instance of the workflow
     * that ran. This number should equal the sum of the step counts for steps that
     * succeeded, were skipped, and failed.</p>
     */
    inline int GetTotalStepCount() const{ return m_totalStepCount; }
    inline void SetTotalStepCount(int value) { m_totalStepCount = value; }
    inline GetWorkflowExecutionResult& WithTotalStepCount(int value) { SetTotalStepCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps that ran successfully in the
     * specified runtime instance of the workflow.</p>
     */
    inline int GetTotalStepsSucceeded() const{ return m_totalStepsSucceeded; }
    inline void SetTotalStepsSucceeded(int value) { m_totalStepsSucceeded = value; }
    inline GetWorkflowExecutionResult& WithTotalStepsSucceeded(int value) { SetTotalStepsSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps that failed in the specified runtime
     * instance of the workflow.</p>
     */
    inline int GetTotalStepsFailed() const{ return m_totalStepsFailed; }
    inline void SetTotalStepsFailed(int value) { m_totalStepsFailed = value; }
    inline GetWorkflowExecutionResult& WithTotalStepsFailed(int value) { SetTotalStepsFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A runtime count for the number of steps that were skipped in the specified
     * runtime instance of the workflow.</p>
     */
    inline int GetTotalStepsSkipped() const{ return m_totalStepsSkipped; }
    inline void SetTotalStepsSkipped(int value) { m_totalStepsSkipped = value; }
    inline GetWorkflowExecutionResult& WithTotalStepsSkipped(int value) { SetTotalStepsSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }
    inline GetWorkflowExecutionResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline GetWorkflowExecutionResult& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::String& value) { m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTime.assign(value); }
    inline GetWorkflowExecutionResult& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline GetWorkflowExecutionResult& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline const Aws::String& GetParallelGroup() const{ return m_parallelGroup; }
    inline void SetParallelGroup(const Aws::String& value) { m_parallelGroup = value; }
    inline void SetParallelGroup(Aws::String&& value) { m_parallelGroup = std::move(value); }
    inline void SetParallelGroup(const char* value) { m_parallelGroup.assign(value); }
    inline GetWorkflowExecutionResult& WithParallelGroup(const Aws::String& value) { SetParallelGroup(value); return *this;}
    inline GetWorkflowExecutionResult& WithParallelGroup(Aws::String&& value) { SetParallelGroup(std::move(value)); return *this;}
    inline GetWorkflowExecutionResult& WithParallelGroup(const char* value) { SetParallelGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_workflowBuildVersionArn;

    Aws::String m_workflowExecutionId;

    Aws::String m_imageBuildVersionArn;

    WorkflowType m_type;

    WorkflowExecutionStatus m_status;

    Aws::String m_message;

    int m_totalStepCount;

    int m_totalStepsSucceeded;

    int m_totalStepsFailed;

    int m_totalStepsSkipped;

    Aws::String m_startTime;

    Aws::String m_endTime;

    Aws::String m_parallelGroup;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
