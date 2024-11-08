/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputField.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about the input into a node. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeInputEvent">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeInputEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputEvent();
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects containing information about each field in the input.</p>
     */
    inline const Aws::Vector<FlowTraceNodeInputField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<FlowTraceNodeInputField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<FlowTraceNodeInputField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline FlowTraceNodeInputEvent& WithFields(const Aws::Vector<FlowTraceNodeInputField>& value) { SetFields(value); return *this;}
    inline FlowTraceNodeInputEvent& WithFields(Aws::Vector<FlowTraceNodeInputField>&& value) { SetFields(std::move(value)); return *this;}
    inline FlowTraceNodeInputEvent& AddFields(const FlowTraceNodeInputField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline FlowTraceNodeInputEvent& AddFields(FlowTraceNodeInputField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the node that received the input.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline FlowTraceNodeInputEvent& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline FlowTraceNodeInputEvent& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline FlowTraceNodeInputEvent& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the trace was returned.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline FlowTraceNodeInputEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline FlowTraceNodeInputEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowTraceNodeInputField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
