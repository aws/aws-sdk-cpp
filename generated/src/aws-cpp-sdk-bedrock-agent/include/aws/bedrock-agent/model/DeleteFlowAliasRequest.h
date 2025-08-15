/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class DeleteFlowAliasRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DeleteFlowAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFlowAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the flow that the alias belongs to.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    DeleteFlowAliasRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias to be deleted.</p>
     */
    inline const Aws::String& GetAliasIdentifier() const { return m_aliasIdentifier; }
    inline bool AliasIdentifierHasBeenSet() const { return m_aliasIdentifierHasBeenSet; }
    template<typename AliasIdentifierT = Aws::String>
    void SetAliasIdentifier(AliasIdentifierT&& value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier = std::forward<AliasIdentifierT>(value); }
    template<typename AliasIdentifierT = Aws::String>
    DeleteFlowAliasRequest& WithAliasIdentifier(AliasIdentifierT&& value) { SetAliasIdentifier(std::forward<AliasIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_aliasIdentifier;
    bool m_aliasIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
