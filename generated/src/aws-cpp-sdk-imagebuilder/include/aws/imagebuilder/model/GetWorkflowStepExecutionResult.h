/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowStepExecutionStatus.h>
#include <aws/imagebuilder/model/WorkflowStepExecutionRollbackStatus.h>
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
  class GetWorkflowStepExecutionResult
  {
  public:
    AWS_IMAGEBUILDER_API GetWorkflowStepExecutionResult();
    AWS_IMAGEBUILDER_API GetWorkflowStepExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetWorkflowStepExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetWorkflowStepExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetWorkflowStepExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetWorkflowStepExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline const Aws::String& GetStepExecutionId() const{ return m_stepExecutionId; }

    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline void SetStepExecutionId(const Aws::String& value) { m_stepExecutionId = value; }

    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline void SetStepExecutionId(Aws::String&& value) { m_stepExecutionId = std::move(value); }

    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline void SetStepExecutionId(const char* value) { m_stepExecutionId.assign(value); }

    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStepExecutionId(const Aws::String& value) { SetStepExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStepExecutionId(Aws::String&& value) { SetStepExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the runtime version of the workflow step that you
     * specified in the request.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStepExecutionId(const char* value) { SetStepExecutionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines this workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}


    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const{ return m_workflowExecutionId; }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline void SetWorkflowExecutionId(const Aws::String& value) { m_workflowExecutionId = value; }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline void SetWorkflowExecutionId(Aws::String&& value) { m_workflowExecutionId = std::move(value); }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline void SetWorkflowExecutionId(const char* value) { m_workflowExecutionId.assign(value); }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline GetWorkflowStepExecutionResult& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline GetWorkflowStepExecutionResult& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline GetWorkflowStepExecutionResult& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline GetWorkflowStepExecutionResult& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline GetWorkflowStepExecutionResult& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow step creates.</p>
     */
    inline GetWorkflowStepExecutionResult& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}


    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the specified runtime instance of the workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes the specified workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline void SetAction(const Aws::String& value) { m_action = value; }

    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline void SetAction(Aws::String&& value) { m_action = std::move(value); }

    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline void SetAction(const char* value) { m_action.assign(value); }

    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline GetWorkflowStepExecutionResult& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline GetWorkflowStepExecutionResult& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The name of the action that the specified step performs.</p>
     */
    inline GetWorkflowStepExecutionResult& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The current status for the specified runtime version of the workflow
     * step.</p>
     */
    inline const WorkflowStepExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the specified runtime version of the workflow
     * step.</p>
     */
    inline void SetStatus(const WorkflowStepExecutionStatus& value) { m_status = value; }

    /**
     * <p>The current status for the specified runtime version of the workflow
     * step.</p>
     */
    inline void SetStatus(WorkflowStepExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status for the specified runtime version of the workflow
     * step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStatus(const WorkflowStepExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the specified runtime version of the workflow
     * step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStatus(WorkflowStepExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Reports on the rollback status of the specified runtime version of the
     * workflow step, if applicable.</p>
     */
    inline const WorkflowStepExecutionRollbackStatus& GetRollbackStatus() const{ return m_rollbackStatus; }

    /**
     * <p>Reports on the rollback status of the specified runtime version of the
     * workflow step, if applicable.</p>
     */
    inline void SetRollbackStatus(const WorkflowStepExecutionRollbackStatus& value) { m_rollbackStatus = value; }

    /**
     * <p>Reports on the rollback status of the specified runtime version of the
     * workflow step, if applicable.</p>
     */
    inline void SetRollbackStatus(WorkflowStepExecutionRollbackStatus&& value) { m_rollbackStatus = std::move(value); }

    /**
     * <p>Reports on the rollback status of the specified runtime version of the
     * workflow step, if applicable.</p>
     */
    inline GetWorkflowStepExecutionResult& WithRollbackStatus(const WorkflowStepExecutionRollbackStatus& value) { SetRollbackStatus(value); return *this;}

    /**
     * <p>Reports on the rollback status of the specified runtime version of the
     * workflow step, if applicable.</p>
     */
    inline GetWorkflowStepExecutionResult& WithRollbackStatus(WorkflowStepExecutionRollbackStatus&& value) { SetRollbackStatus(std::move(value)); return *this;}


    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline GetWorkflowStepExecutionResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline GetWorkflowStepExecutionResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The output message from the specified runtime instance of the workflow step,
     * if applicable.</p>
     */
    inline GetWorkflowStepExecutionResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline const Aws::String& GetInputs() const{ return m_inputs; }

    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline void SetInputs(const Aws::String& value) { m_inputs = value; }

    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline void SetInputs(Aws::String&& value) { m_inputs = std::move(value); }

    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline void SetInputs(const char* value) { m_inputs.assign(value); }

    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithInputs(const Aws::String& value) { SetInputs(value); return *this;}

    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithInputs(Aws::String&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>Input parameters that Image Builder provided for the specified runtime
     * instance of the workflow step.</p>
     */
    inline GetWorkflowStepExecutionResult& WithInputs(const char* value) { SetInputs(value); return *this;}


    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline const Aws::String& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline void SetOutputs(const Aws::String& value) { m_outputs = value; }

    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline void SetOutputs(Aws::String&& value) { m_outputs = std::move(value); }

    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline void SetOutputs(const char* value) { m_outputs.assign(value); }

    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline GetWorkflowStepExecutionResult& WithOutputs(const Aws::String& value) { SetOutputs(value); return *this;}

    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline GetWorkflowStepExecutionResult& WithOutputs(Aws::String&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The file names that the specified runtime version of the workflow step
     * created as output.</p>
     */
    inline GetWorkflowStepExecutionResult& WithOutputs(const char* value) { SetOutputs(value); return *this;}


    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }

    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }

    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the specified runtime version of the workflow step
     * started.</p>
     */
    inline GetWorkflowStepExecutionResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTime = value; }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTime = std::move(value); }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline void SetEndTime(const char* value) { m_endTime.assign(value); }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline GetWorkflowStepExecutionResult& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline GetWorkflowStepExecutionResult& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the specified runtime instance of the workflow step
     * finished.</p>
     */
    inline GetWorkflowStepExecutionResult& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline const Aws::String& GetOnFailure() const{ return m_onFailure; }

    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline void SetOnFailure(const Aws::String& value) { m_onFailure = value; }

    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline void SetOnFailure(Aws::String&& value) { m_onFailure = std::move(value); }

    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline void SetOnFailure(const char* value) { m_onFailure.assign(value); }

    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline GetWorkflowStepExecutionResult& WithOnFailure(const Aws::String& value) { SetOnFailure(value); return *this;}

    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline GetWorkflowStepExecutionResult& WithOnFailure(Aws::String&& value) { SetOnFailure(std::move(value)); return *this;}

    /**
     * <p>The action to perform if the workflow step fails.</p>
     */
    inline GetWorkflowStepExecutionResult& WithOnFailure(const char* value) { SetOnFailure(value); return *this;}


    /**
     * <p>The maximum duration in seconds for this step to complete its action.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>The maximum duration in seconds for this step to complete its action.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSeconds = value; }

    /**
     * <p>The maximum duration in seconds for this step to complete its action.</p>
     */
    inline GetWorkflowStepExecutionResult& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_stepExecutionId;

    Aws::String m_workflowBuildVersionArn;

    Aws::String m_workflowExecutionId;

    Aws::String m_imageBuildVersionArn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_action;

    WorkflowStepExecutionStatus m_status;

    WorkflowStepExecutionRollbackStatus m_rollbackStatus;

    Aws::String m_message;

    Aws::String m_inputs;

    Aws::String m_outputs;

    Aws::String m_startTime;

    Aws::String m_endTime;

    Aws::String m_onFailure;

    int m_timeoutSeconds;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
