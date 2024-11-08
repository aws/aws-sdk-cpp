/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeOutputField.h>
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
   * <p>Contains information about the output from a node. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeOutputEvent">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeOutputEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputEvent();
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects containing information about each field in the
     * output.</p>
     */
    inline const Aws::Vector<FlowTraceNodeOutputField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<FlowTraceNodeOutputField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<FlowTraceNodeOutputField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline FlowTraceNodeOutputEvent& WithFields(const Aws::Vector<FlowTraceNodeOutputField>& value) { SetFields(value); return *this;}
    inline FlowTraceNodeOutputEvent& WithFields(Aws::Vector<FlowTraceNodeOutputField>&& value) { SetFields(std::move(value)); return *this;}
    inline FlowTraceNodeOutputEvent& AddFields(const FlowTraceNodeOutputField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline FlowTraceNodeOutputEvent& AddFields(FlowTraceNodeOutputField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the node that yielded the output.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline FlowTraceNodeOutputEvent& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline FlowTraceNodeOutputEvent& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline FlowTraceNodeOutputEvent& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the trace was returned.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline FlowTraceNodeOutputEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline FlowTraceNodeOutputEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowTraceNodeOutputField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
