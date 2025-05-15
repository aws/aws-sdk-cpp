/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about a flow that contains multiple <code>LoopInput</code> nodes in a
   * DoWhile loop.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MultipleLoopInputNodesFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class MultipleLoopInputNodesFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API MultipleLoopInputNodesFlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API MultipleLoopInputNodesFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MultipleLoopInputNodesFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DoWhile loop in a flow that contains multiple <code>LoopInput</code>
     * nodes.</p>
     */
    inline const Aws::String& GetLoopNode() const { return m_loopNode; }
    inline bool LoopNodeHasBeenSet() const { return m_loopNodeHasBeenSet; }
    template<typename LoopNodeT = Aws::String>
    void SetLoopNode(LoopNodeT&& value) { m_loopNodeHasBeenSet = true; m_loopNode = std::forward<LoopNodeT>(value); }
    template<typename LoopNodeT = Aws::String>
    MultipleLoopInputNodesFlowValidationDetails& WithLoopNode(LoopNodeT&& value) { SetLoopNode(std::forward<LoopNodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loopNode;
    bool m_loopNodeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
