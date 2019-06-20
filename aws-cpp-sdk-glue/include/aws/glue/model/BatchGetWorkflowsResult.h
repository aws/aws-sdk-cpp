/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Workflow.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_GLUE_API BatchGetWorkflowsResult
  {
  public:
    BatchGetWorkflowsResult();
    BatchGetWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline const Aws::Vector<Workflow>& GetWorkflows() const{ return m_workflows; }

    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline void SetWorkflows(const Aws::Vector<Workflow>& value) { m_workflows = value; }

    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline void SetWorkflows(Aws::Vector<Workflow>&& value) { m_workflows = std::move(value); }

    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline BatchGetWorkflowsResult& WithWorkflows(const Aws::Vector<Workflow>& value) { SetWorkflows(value); return *this;}

    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline BatchGetWorkflowsResult& WithWorkflows(Aws::Vector<Workflow>&& value) { SetWorkflows(std::move(value)); return *this;}

    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline BatchGetWorkflowsResult& AddWorkflows(const Workflow& value) { m_workflows.push_back(value); return *this; }

    /**
     * <p>A list of workflow resource metadata.</p>
     */
    inline BatchGetWorkflowsResult& AddWorkflows(Workflow&& value) { m_workflows.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingWorkflows() const{ return m_missingWorkflows; }

    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline void SetMissingWorkflows(const Aws::Vector<Aws::String>& value) { m_missingWorkflows = value; }

    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline void SetMissingWorkflows(Aws::Vector<Aws::String>&& value) { m_missingWorkflows = std::move(value); }

    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline BatchGetWorkflowsResult& WithMissingWorkflows(const Aws::Vector<Aws::String>& value) { SetMissingWorkflows(value); return *this;}

    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline BatchGetWorkflowsResult& WithMissingWorkflows(Aws::Vector<Aws::String>&& value) { SetMissingWorkflows(std::move(value)); return *this;}

    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline BatchGetWorkflowsResult& AddMissingWorkflows(const Aws::String& value) { m_missingWorkflows.push_back(value); return *this; }

    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline BatchGetWorkflowsResult& AddMissingWorkflows(Aws::String&& value) { m_missingWorkflows.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of workflows not found.</p>
     */
    inline BatchGetWorkflowsResult& AddMissingWorkflows(const char* value) { m_missingWorkflows.push_back(value); return *this; }

  private:

    Aws::Vector<Workflow> m_workflows;

    Aws::Vector<Aws::String> m_missingWorkflows;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
