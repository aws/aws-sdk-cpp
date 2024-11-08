/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowInputContent.h>
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
   * <p>Contains information about an input into the prompt flow and where to send
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowInput">AWS
   * API Reference</a></p>
   */
  class FlowInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowInput();
    AWS_BEDROCKAGENTRUNTIME_API FlowInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about an input into the prompt flow.</p>
     */
    inline const FlowInputContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const FlowInputContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(FlowInputContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline FlowInput& WithContent(const FlowInputContent& value) { SetContent(value); return *this;}
    inline FlowInput& WithContent(FlowInputContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow input node that begins the prompt flow.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline FlowInput& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline FlowInput& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline FlowInput& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the output from the flow input node that begins the prompt
     * flow.</p>
     */
    inline const Aws::String& GetNodeOutputName() const{ return m_nodeOutputName; }
    inline bool NodeOutputNameHasBeenSet() const { return m_nodeOutputNameHasBeenSet; }
    inline void SetNodeOutputName(const Aws::String& value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName = value; }
    inline void SetNodeOutputName(Aws::String&& value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName = std::move(value); }
    inline void SetNodeOutputName(const char* value) { m_nodeOutputNameHasBeenSet = true; m_nodeOutputName.assign(value); }
    inline FlowInput& WithNodeOutputName(const Aws::String& value) { SetNodeOutputName(value); return *this;}
    inline FlowInput& WithNodeOutputName(Aws::String&& value) { SetNodeOutputName(std::move(value)); return *this;}
    inline FlowInput& WithNodeOutputName(const char* value) { SetNodeOutputName(value); return *this;}
    ///@}
  private:

    FlowInputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::String m_nodeOutputName;
    bool m_nodeOutputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
