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
    inline GetWorkflowExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetWorkflowExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetWorkflowExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build version for the Image Builder
     * workflow resource that defines the specified runtime instance of the
     * workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}


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
    inline GetWorkflowExecutionResult& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline GetWorkflowExecutionResult& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline GetWorkflowExecutionResult& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image resource build version that the
     * specified runtime instance of the workflow created.</p>
     */
    inline GetWorkflowExecutionResult& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}


    /**
     * <p>The type of workflow that Image Builder ran for the specified runtime
     * instance of the workflow.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>The type of workflow that Image Builder ran for the specified runtime
     * instance of the workflow.</p>
     */
    inline void SetType(const WorkflowType& value) { m_type = value; }

    /**
     * <p>The type of workflow that Image Builder ran for the specified runtime
     * instance of the workflow.</p>
     */
    inline void SetType(WorkflowType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of workflow that Image Builder ran for the specified runtime
     * instance of the workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>The type of workflow that Image Builder ran for the specified runtime
     * instance of the workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current runtime status for the specified runtime instance of the
     * workflow.</p>
     */
    inline const WorkflowExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current runtime status for the specified runtime instance of the
     * workflow.</p>
     */
    inline void SetStatus(const WorkflowExecutionStatus& value) { m_status = value; }

    /**
     * <p>The current runtime status for the specified runtime instance of the
     * workflow.</p>
     */
    inline void SetStatus(WorkflowExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current runtime status for the specified runtime instance of the
     * workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithStatus(const WorkflowExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current runtime status for the specified runtime instance of the
     * workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithStatus(WorkflowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline GetWorkflowExecutionResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline GetWorkflowExecutionResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The output message from the specified runtime instance of the workflow, if
     * applicable.</p>
     */
    inline GetWorkflowExecutionResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The total number of steps in the specified runtime instance of the workflow
     * that ran. This number should equal the sum of the step counts for steps that
     * succeeded, were skipped, and failed.</p>
     */
    inline int GetTotalStepCount() const{ return m_totalStepCount; }

    /**
     * <p>The total number of steps in the specified runtime instance of the workflow
     * that ran. This number should equal the sum of the step counts for steps that
     * succeeded, were skipped, and failed.</p>
     */
    inline void SetTotalStepCount(int value) { m_totalStepCount = value; }

    /**
     * <p>The total number of steps in the specified runtime instance of the workflow
     * that ran. This number should equal the sum of the step counts for steps that
     * succeeded, were skipped, and failed.</p>
     */
    inline GetWorkflowExecutionResult& WithTotalStepCount(int value) { SetTotalStepCount(value); return *this;}


    /**
     * <p>A runtime count for the number of steps that ran successfully in the
     * specified runtime instance of the workflow.</p>
     */
    inline int GetTotalStepsSucceeded() const{ return m_totalStepsSucceeded; }

    /**
     * <p>A runtime count for the number of steps that ran successfully in the
     * specified runtime instance of the workflow.</p>
     */
    inline void SetTotalStepsSucceeded(int value) { m_totalStepsSucceeded = value; }

    /**
     * <p>A runtime count for the number of steps that ran successfully in the
     * specified runtime instance of the workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithTotalStepsSucceeded(int value) { SetTotalStepsSucceeded(value); return *this;}


    /**
     * <p>A runtime count for the number of steps that failed in the specified runtime
     * instance of the workflow.</p>
     */
    inline int GetTotalStepsFailed() const{ return m_totalStepsFailed; }

    /**
     * <p>A runtime count for the number of steps that failed in the specified runtime
     * instance of the workflow.</p>
     */
    inline void SetTotalStepsFailed(int value) { m_totalStepsFailed = value; }

    /**
     * <p>A runtime count for the number of steps that failed in the specified runtime
     * instance of the workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithTotalStepsFailed(int value) { SetTotalStepsFailed(value); return *this;}


    /**
     * <p>A runtime count for the number of steps that were skipped in the specified
     * runtime instance of the workflow.</p>
     */
    inline int GetTotalStepsSkipped() const{ return m_totalStepsSkipped; }

    /**
     * <p>A runtime count for the number of steps that were skipped in the specified
     * runtime instance of the workflow.</p>
     */
    inline void SetTotalStepsSkipped(int value) { m_totalStepsSkipped = value; }

    /**
     * <p>A runtime count for the number of steps that were skipped in the specified
     * runtime instance of the workflow.</p>
     */
    inline GetWorkflowExecutionResult& WithTotalStepsSkipped(int value) { SetTotalStepsSkipped(value); return *this;}


    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline GetWorkflowExecutionResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline GetWorkflowExecutionResult& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * started.</p>
     */
    inline GetWorkflowExecutionResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline void SetEndTime(const Aws::String& value) { m_endTime = value; }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline void SetEndTime(Aws::String&& value) { m_endTime = std::move(value); }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline void SetEndTime(const char* value) { m_endTime.assign(value); }

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline GetWorkflowExecutionResult& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline GetWorkflowExecutionResult& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the specified runtime instance of the workflow
     * finished.</p>
     */
    inline GetWorkflowExecutionResult& WithEndTime(const char* value) { SetEndTime(value); return *this;}


    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline const Aws::String& GetParallelGroup() const{ return m_parallelGroup; }

    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline void SetParallelGroup(const Aws::String& value) { m_parallelGroup = value; }

    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline void SetParallelGroup(Aws::String&& value) { m_parallelGroup = std::move(value); }

    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline void SetParallelGroup(const char* value) { m_parallelGroup.assign(value); }

    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline GetWorkflowExecutionResult& WithParallelGroup(const Aws::String& value) { SetParallelGroup(value); return *this;}

    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline GetWorkflowExecutionResult& WithParallelGroup(Aws::String&& value) { SetParallelGroup(std::move(value)); return *this;}

    /**
     * <p>Test workflows are defined within named runtime groups. The parallel group is
     * a named group that contains one or more test workflows.</p>
     */
    inline GetWorkflowExecutionResult& WithParallelGroup(const char* value) { SetParallelGroup(value); return *this;}

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
