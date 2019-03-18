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
#include <aws/swf/model/WorkflowExecution.h>
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
   * <p>Provides the details of the <code>WorkflowExecutionSignaled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionSignaledEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API WorkflowExecutionSignaledEventAttributes
  {
  public:
    WorkflowExecutionSignaledEventAttributes();
    WorkflowExecutionSignaledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    WorkflowExecutionSignaledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline const Aws::String& GetSignalName() const{ return m_signalName; }

    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline bool SignalNameHasBeenSet() const { return m_signalNameHasBeenSet; }

    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline void SetSignalName(const Aws::String& value) { m_signalNameHasBeenSet = true; m_signalName = value; }

    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline void SetSignalName(Aws::String&& value) { m_signalNameHasBeenSet = true; m_signalName = std::move(value); }

    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline void SetSignalName(const char* value) { m_signalNameHasBeenSet = true; m_signalName.assign(value); }

    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithSignalName(const Aws::String& value) { SetSignalName(value); return *this;}

    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithSignalName(Aws::String&& value) { SetSignalName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithSignalName(const char* value) { SetSignalName(value); return *this;}


    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The workflow execution that sent the signal. This is set only of the signal
     * was sent by another workflow execution.</p>
     */
    inline const WorkflowExecution& GetExternalWorkflowExecution() const{ return m_externalWorkflowExecution; }

    /**
     * <p>The workflow execution that sent the signal. This is set only of the signal
     * was sent by another workflow execution.</p>
     */
    inline bool ExternalWorkflowExecutionHasBeenSet() const { return m_externalWorkflowExecutionHasBeenSet; }

    /**
     * <p>The workflow execution that sent the signal. This is set only of the signal
     * was sent by another workflow execution.</p>
     */
    inline void SetExternalWorkflowExecution(const WorkflowExecution& value) { m_externalWorkflowExecutionHasBeenSet = true; m_externalWorkflowExecution = value; }

    /**
     * <p>The workflow execution that sent the signal. This is set only of the signal
     * was sent by another workflow execution.</p>
     */
    inline void SetExternalWorkflowExecution(WorkflowExecution&& value) { m_externalWorkflowExecutionHasBeenSet = true; m_externalWorkflowExecution = std::move(value); }

    /**
     * <p>The workflow execution that sent the signal. This is set only of the signal
     * was sent by another workflow execution.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithExternalWorkflowExecution(const WorkflowExecution& value) { SetExternalWorkflowExecution(value); return *this;}

    /**
     * <p>The workflow execution that sent the signal. This is set only of the signal
     * was sent by another workflow execution.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithExternalWorkflowExecution(WorkflowExecution&& value) { SetExternalWorkflowExecution(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflow</code> decision to signal this
     * workflow execution.The source event with this ID can be found in the history of
     * the source workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event. This
     * field is set only if the signal was initiated by another workflow execution.</p>
     */
    inline long long GetExternalInitiatedEventId() const{ return m_externalInitiatedEventId; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflow</code> decision to signal this
     * workflow execution.The source event with this ID can be found in the history of
     * the source workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event. This
     * field is set only if the signal was initiated by another workflow execution.</p>
     */
    inline bool ExternalInitiatedEventIdHasBeenSet() const { return m_externalInitiatedEventIdHasBeenSet; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflow</code> decision to signal this
     * workflow execution.The source event with this ID can be found in the history of
     * the source workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event. This
     * field is set only if the signal was initiated by another workflow execution.</p>
     */
    inline void SetExternalInitiatedEventId(long long value) { m_externalInitiatedEventIdHasBeenSet = true; m_externalInitiatedEventId = value; }

    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflow</code> decision to signal this
     * workflow execution.The source event with this ID can be found in the history of
     * the source workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event. This
     * field is set only if the signal was initiated by another workflow execution.</p>
     */
    inline WorkflowExecutionSignaledEventAttributes& WithExternalInitiatedEventId(long long value) { SetExternalInitiatedEventId(value); return *this;}

  private:

    Aws::String m_signalName;
    bool m_signalNameHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    WorkflowExecution m_externalWorkflowExecution;
    bool m_externalWorkflowExecutionHasBeenSet;

    long long m_externalInitiatedEventId;
    bool m_externalInitiatedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
