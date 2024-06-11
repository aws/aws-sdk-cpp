/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowStepExecution.h>
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
  class ListWaitingWorkflowStepsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListWaitingWorkflowStepsResult();
    AWS_IMAGEBUILDER_API ListWaitingWorkflowStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWaitingWorkflowStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of the workflow steps that are waiting for action in your Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<WorkflowStepExecution>& GetSteps() const{ return m_steps; }
    inline void SetSteps(const Aws::Vector<WorkflowStepExecution>& value) { m_steps = value; }
    inline void SetSteps(Aws::Vector<WorkflowStepExecution>&& value) { m_steps = std::move(value); }
    inline ListWaitingWorkflowStepsResult& WithSteps(const Aws::Vector<WorkflowStepExecution>& value) { SetSteps(value); return *this;}
    inline ListWaitingWorkflowStepsResult& WithSteps(Aws::Vector<WorkflowStepExecution>&& value) { SetSteps(std::move(value)); return *this;}
    inline ListWaitingWorkflowStepsResult& AddSteps(const WorkflowStepExecution& value) { m_steps.push_back(value); return *this; }
    inline ListWaitingWorkflowStepsResult& AddSteps(WorkflowStepExecution&& value) { m_steps.push_back(std::move(value)); return *this; }
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
    inline ListWaitingWorkflowStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWaitingWorkflowStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWaitingWorkflowStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWaitingWorkflowStepsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWaitingWorkflowStepsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWaitingWorkflowStepsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkflowStepExecution> m_steps;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
