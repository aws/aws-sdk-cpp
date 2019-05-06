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
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API SignalWorkflowExecutionRequest : public SWFRequest
  {
  public:
    SignalWorkflowExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignalWorkflowExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain containing the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The workflowId of the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The runId of the workflow execution to signal.</p>
     */
    inline SignalWorkflowExecutionRequest& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline const Aws::String& GetSignalName() const{ return m_signalName; }

    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline bool SignalNameHasBeenSet() const { return m_signalNameHasBeenSet; }

    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline void SetSignalName(const Aws::String& value) { m_signalNameHasBeenSet = true; m_signalName = value; }

    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline void SetSignalName(Aws::String&& value) { m_signalNameHasBeenSet = true; m_signalName = std::move(value); }

    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline void SetSignalName(const char* value) { m_signalNameHasBeenSet = true; m_signalName.assign(value); }

    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline SignalWorkflowExecutionRequest& WithSignalName(const Aws::String& value) { SetSignalName(value); return *this;}

    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline SignalWorkflowExecutionRequest& WithSignalName(Aws::String&& value) { SetSignalName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal. This name must be meaningful to the target
     * workflow.</p>
     */
    inline SignalWorkflowExecutionRequest& WithSignalName(const char* value) { SetSignalName(value); return *this;}


    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline SignalWorkflowExecutionRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline SignalWorkflowExecutionRequest& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>Data to attach to the <code>WorkflowExecutionSignaled</code> event in the
     * target workflow execution's history.</p>
     */
    inline SignalWorkflowExecutionRequest& WithInput(const char* value) { SetInput(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;

    Aws::String m_runId;
    bool m_runIdHasBeenSet;

    Aws::String m_signalName;
    bool m_signalNameHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
