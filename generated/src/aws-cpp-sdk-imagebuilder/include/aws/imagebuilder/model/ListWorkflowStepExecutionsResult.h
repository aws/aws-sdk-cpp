/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/WorkflowStepMetadata.h>
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
  class ListWorkflowStepExecutionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowStepExecutionsResult();
    AWS_IMAGEBUILDER_API ListWorkflowStepExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWorkflowStepExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkflowStepExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkflowStepExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkflowStepExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of runtime details that represents each step in this
     * runtime instance of the workflow.</p>
     */
    inline const Aws::Vector<WorkflowStepMetadata>& GetSteps() const{ return m_steps; }
    inline void SetSteps(const Aws::Vector<WorkflowStepMetadata>& value) { m_steps = value; }
    inline void SetSteps(Aws::Vector<WorkflowStepMetadata>&& value) { m_steps = std::move(value); }
    inline ListWorkflowStepExecutionsResult& WithSteps(const Aws::Vector<WorkflowStepMetadata>& value) { SetSteps(value); return *this;}
    inline ListWorkflowStepExecutionsResult& WithSteps(Aws::Vector<WorkflowStepMetadata>&& value) { SetSteps(std::move(value)); return *this;}
    inline ListWorkflowStepExecutionsResult& AddSteps(const WorkflowStepMetadata& value) { m_steps.push_back(value); return *this; }
    inline ListWorkflowStepExecutionsResult& AddSteps(WorkflowStepMetadata&& value) { m_steps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The build version ARN for the Image Builder workflow resource that defines
     * the steps for this runtime instance of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const{ return m_workflowBuildVersionArn; }
    inline void SetWorkflowBuildVersionArn(const Aws::String& value) { m_workflowBuildVersionArn = value; }
    inline void SetWorkflowBuildVersionArn(Aws::String&& value) { m_workflowBuildVersionArn = std::move(value); }
    inline void SetWorkflowBuildVersionArn(const char* value) { m_workflowBuildVersionArn.assign(value); }
    inline ListWorkflowStepExecutionsResult& WithWorkflowBuildVersionArn(const Aws::String& value) { SetWorkflowBuildVersionArn(value); return *this;}
    inline ListWorkflowStepExecutionsResult& WithWorkflowBuildVersionArn(Aws::String&& value) { SetWorkflowBuildVersionArn(std::move(value)); return *this;}
    inline ListWorkflowStepExecutionsResult& WithWorkflowBuildVersionArn(const char* value) { SetWorkflowBuildVersionArn(value); return *this;}
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
    inline ListWorkflowStepExecutionsResult& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}
    inline ListWorkflowStepExecutionsResult& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}
    inline ListWorkflowStepExecutionsResult& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image build version resource ARN that's associated with the specified
     * runtime instance of the workflow.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArn = value; }
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArn = std::move(value); }
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArn.assign(value); }
    inline ListWorkflowStepExecutionsResult& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}
    inline ListWorkflowStepExecutionsResult& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}
    inline ListWorkflowStepExecutionsResult& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output message from the list action, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline ListWorkflowStepExecutionsResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ListWorkflowStepExecutionsResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ListWorkflowStepExecutionsResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkflowStepExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkflowStepExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkflowStepExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::Vector<WorkflowStepMetadata> m_steps;

    Aws::String m_workflowBuildVersionArn;

    Aws::String m_workflowExecutionId;

    Aws::String m_imageBuildVersionArn;

    Aws::String m_message;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
