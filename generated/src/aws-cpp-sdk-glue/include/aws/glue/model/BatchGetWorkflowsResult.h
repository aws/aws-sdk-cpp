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
    AWS_GLUE_API BatchGetWorkflowsResult();
    AWS_GLUE_API BatchGetWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline const Aws::Vector<Workflow>& GetWorkflows() const{ return m_workflows; }
    inline void SetWorkflows(const Aws::Vector<Workflow>& value) { m_workflows = value; }
    inline void SetWorkflows(Aws::Vector<Workflow>&& value) { m_workflows = std::move(value); }
    inline BatchGetWorkflowsResult& WithWorkflows(const Aws::Vector<Workflow>& value) { SetWorkflows(value); return *this;}
    inline BatchGetWorkflowsResult& WithWorkflows(Aws::Vector<Workflow>&& value) { SetWorkflows(std::move(value)); return *this;}
    inline BatchGetWorkflowsResult& AddWorkflows(const Workflow& value) { m_workflows.push_back(value); return *this; }
    inline BatchGetWorkflowsResult& AddWorkflows(Workflow&& value) { m_workflows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingWorkflows() const{ return m_missingWorkflows; }
    inline void SetMissingWorkflows(const Aws::Vector<Aws::String>& value) { m_missingWorkflows = value; }
    inline void SetMissingWorkflows(Aws::Vector<Aws::String>&& value) { m_missingWorkflows = std::move(value); }
    inline BatchGetWorkflowsResult& WithMissingWorkflows(const Aws::Vector<Aws::String>& value) { SetMissingWorkflows(value); return *this;}
    inline BatchGetWorkflowsResult& WithMissingWorkflows(Aws::Vector<Aws::String>&& value) { SetMissingWorkflows(std::move(value)); return *this;}
    inline BatchGetWorkflowsResult& AddMissingWorkflows(const Aws::String& value) { m_missingWorkflows.push_back(value); return *this; }
    inline BatchGetWorkflowsResult& AddMissingWorkflows(Aws::String&& value) { m_missingWorkflows.push_back(std::move(value)); return *this; }
    inline BatchGetWorkflowsResult& AddMissingWorkflows(const char* value) { m_missingWorkflows.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetWorkflowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetWorkflowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetWorkflowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Workflow> m_workflows;

    Aws::Vector<Aws::String> m_missingWorkflows;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
