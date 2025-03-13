/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Workflow.h>
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
namespace Glue
{
namespace Model
{
  class BatchGetWorkflowsResult
  {
  public:
    AWS_GLUE_API BatchGetWorkflowsResult() = default;
    AWS_GLUE_API BatchGetWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline const Aws::Vector<Workflow>& GetWorkflows() const { return m_workflows; }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    void SetWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows = std::forward<WorkflowsT>(value); }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    BatchGetWorkflowsResult& WithWorkflows(WorkflowsT&& value) { SetWorkflows(std::forward<WorkflowsT>(value)); return *this;}
    template<typename WorkflowsT = Workflow>
    BatchGetWorkflowsResult& AddWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows.emplace_back(std::forward<WorkflowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingWorkflows() const { return m_missingWorkflows; }
    template<typename MissingWorkflowsT = Aws::Vector<Aws::String>>
    void SetMissingWorkflows(MissingWorkflowsT&& value) { m_missingWorkflowsHasBeenSet = true; m_missingWorkflows = std::forward<MissingWorkflowsT>(value); }
    template<typename MissingWorkflowsT = Aws::Vector<Aws::String>>
    BatchGetWorkflowsResult& WithMissingWorkflows(MissingWorkflowsT&& value) { SetMissingWorkflows(std::forward<MissingWorkflowsT>(value)); return *this;}
    template<typename MissingWorkflowsT = Aws::String>
    BatchGetWorkflowsResult& AddMissingWorkflows(MissingWorkflowsT&& value) { m_missingWorkflowsHasBeenSet = true; m_missingWorkflows.emplace_back(std::forward<MissingWorkflowsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetWorkflowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Workflow> m_workflows;
    bool m_workflowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_missingWorkflows;
    bool m_missingWorkflowsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
