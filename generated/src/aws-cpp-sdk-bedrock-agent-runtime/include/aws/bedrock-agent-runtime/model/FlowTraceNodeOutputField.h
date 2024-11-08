/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceNodeOutputContent.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about a field in the output from a node. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-trace.html">Track
   * each step in your prompt flow by viewing its trace in Amazon
   * Bedrock</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeOutputField">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeOutputField
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputField();
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputField(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeOutputField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the node output.</p>
     */
    inline const FlowTraceNodeOutputContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const FlowTraceNodeOutputContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(FlowTraceNodeOutputContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline FlowTraceNodeOutputField& WithContent(const FlowTraceNodeOutputContent& value) { SetContent(value); return *this;}
    inline FlowTraceNodeOutputField& WithContent(FlowTraceNodeOutputContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node output.</p>
     */
    inline const Aws::String& GetNodeOutputName() const{ return m_nodeOutputName; }
    inline bool NodeOutputNameHasBeenSet() const { return m_nodeOutputNameHasBeenSet; }
    inline void SetNodeOutputName(const Aws::String& value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName = value; }
    inline void SetNodeOutputName(Aws::String&& value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName = std::move(value); }
    inline void SetNodeOutputName(const char* value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName.assign(value); }
    inline FlowTraceNodeOutputField& WithNodeOutputName(const Aws::String& value) { SetNodeOutputName(value); return *this;}
    inline FlowTraceNodeOutputField& WithNodeOutputName(Aws::String&& value) { SetNodeOutputName(std::move(value)); return *this;}
    inline FlowTraceNodeOutputField& WithNodeOutputName(const char* value) { SetNodeOutputName(value); return *this;}
    ///@}
  private:

    FlowTraceNodeOutputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_nodeOutputName;
    bool m_nodeOutputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
