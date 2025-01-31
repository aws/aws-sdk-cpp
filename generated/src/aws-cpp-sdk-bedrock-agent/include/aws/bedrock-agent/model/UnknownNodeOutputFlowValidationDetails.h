﻿/**
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
   * <p>Details about an unknown output for a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UnknownNodeOutputFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class UnknownNodeOutputFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API UnknownNodeOutputFlowValidationDetails();
    AWS_BEDROCKAGENT_API UnknownNodeOutputFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API UnknownNodeOutputFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node with the unknown output.</p>
     */
    inline const Aws::String& GetNode() const{ return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    inline void SetNode(const Aws::String& value) { m_nodeHasBeenSet = true; m_node = value; }
    inline void SetNode(Aws::String&& value) { m_nodeHasBeenSet = true; m_node = std::move(value); }
    inline void SetNode(const char* value) { m_nodeHasBeenSet = true; m_node.assign(value); }
    inline UnknownNodeOutputFlowValidationDetails& WithNode(const Aws::String& value) { SetNode(value); return *this;}
    inline UnknownNodeOutputFlowValidationDetails& WithNode(Aws::String&& value) { SetNode(std::move(value)); return *this;}
    inline UnknownNodeOutputFlowValidationDetails& WithNode(const char* value) { SetNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the unknown output.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }
    inline UnknownNodeOutputFlowValidationDetails& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}
    inline UnknownNodeOutputFlowValidationDetails& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}
    inline UnknownNodeOutputFlowValidationDetails& WithOutput(const char* value) { SetOutput(value); return *this;}
    ///@}
  private:

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
