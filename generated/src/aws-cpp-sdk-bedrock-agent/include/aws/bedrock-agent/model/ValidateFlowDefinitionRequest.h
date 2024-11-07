/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/model/FlowDefinition.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class ValidateFlowDefinitionRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API ValidateFlowDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateFlowDefinition"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The definition of a flow to validate.</p>
     */
    inline const FlowDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const FlowDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(FlowDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline ValidateFlowDefinitionRequest& WithDefinition(const FlowDefinition& value) { SetDefinition(value); return *this;}
    inline ValidateFlowDefinitionRequest& WithDefinition(FlowDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}
  private:

    FlowDefinition m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
