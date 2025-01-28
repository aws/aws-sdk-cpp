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
   * <p>Details about an unknown input for a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UnknownNodeInputFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class UnknownNodeInputFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API UnknownNodeInputFlowValidationDetails();
    AWS_BEDROCKAGENT_API UnknownNodeInputFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API UnknownNodeInputFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node with the unknown input.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline UnknownNodeInputFlowValidationDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline UnknownNodeInputFlowValidationDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline UnknownNodeInputFlowValidationDetails& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the unknown input.</p>
     */
    inline const Aws::String& GetNode() const{ return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    inline void SetNode(const Aws::String& value) { m_nodeHasBeenSet = true; m_node = value; }
    inline void SetNode(Aws::String&& value) { m_nodeHasBeenSet = true; m_node = std::move(value); }
    inline void SetNode(const char* value) { m_nodeHasBeenSet = true; m_node.assign(value); }
    inline UnknownNodeInputFlowValidationDetails& WithNode(const Aws::String& value) { SetNode(value); return *this;}
    inline UnknownNodeInputFlowValidationDetails& WithNode(Aws::String&& value) { SetNode(std::move(value)); return *this;}
    inline UnknownNodeInputFlowValidationDetails& WithNode(const char* value) { SetNode(value); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
