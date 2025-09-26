/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
   * <p>Represents the next node that receives output data.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/NodeOutputNext">AWS
   * API Reference</a></p>
   */
  class NodeOutputNext
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API NodeOutputNext() = default;
    AWS_BEDROCKAGENTRUNTIME_API NodeOutputNext(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API NodeOutputNext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the next node that receives the output data.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    NodeOutputNext& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the input field in the next node that receives the data.</p>
     */
    inline const Aws::String& GetInputFieldName() const { return m_inputFieldName; }
    inline bool InputFieldNameHasBeenSet() const { return m_inputFieldNameHasBeenSet; }
    template<typename InputFieldNameT = Aws::String>
    void SetInputFieldName(InputFieldNameT&& value) { m_inputFieldNameHasBeenSet = true; m_inputFieldName = std::forward<InputFieldNameT>(value); }
    template<typename InputFieldNameT = Aws::String>
    NodeOutputNext& WithInputFieldName(InputFieldNameT&& value) { SetInputFieldName(std::forward<InputFieldNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::String m_inputFieldName;
    bool m_inputFieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
