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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Represents a workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecution">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API WorkflowExecution
  {
  public:
    WorkflowExecution();
    WorkflowExecution(Aws::Utils::Json::JsonView jsonValue);
    WorkflowExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline WorkflowExecution& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline WorkflowExecution& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The user defined identifier associated with the workflow execution.</p>
     */
    inline WorkflowExecution& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline WorkflowExecution& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline WorkflowExecution& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>A system-generated unique identifier for the workflow execution.</p>
     */
    inline WorkflowExecution& WithRunId(const char* value) { SetRunId(value); return *this;}

  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;

    Aws::String m_runId;
    bool m_runIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
