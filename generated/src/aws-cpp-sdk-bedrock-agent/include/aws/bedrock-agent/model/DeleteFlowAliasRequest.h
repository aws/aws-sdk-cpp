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
    AWS_BEDROCKAGENT_API DeleteFlowAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFlowAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the alias to be deleted.</p>
     */
    inline const Aws::String& GetAliasIdentifier() const{ return m_aliasIdentifier; }
    inline bool AliasIdentifierHasBeenSet() const { return m_aliasIdentifierHasBeenSet; }
    inline void SetAliasIdentifier(const Aws::String& value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier = value; }
    inline void SetAliasIdentifier(Aws::String&& value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier = std::move(value); }
    inline void SetAliasIdentifier(const char* value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier.assign(value); }
    inline DeleteFlowAliasRequest& WithAliasIdentifier(const Aws::String& value) { SetAliasIdentifier(value); return *this;}
    inline DeleteFlowAliasRequest& WithAliasIdentifier(Aws::String&& value) { SetAliasIdentifier(std::move(value)); return *this;}
    inline DeleteFlowAliasRequest& WithAliasIdentifier(const char* value) { SetAliasIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow that the alias belongs to.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const{ return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    inline void SetFlowIdentifier(const Aws::String& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = value; }
    inline void SetFlowIdentifier(Aws::String&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::move(value); }
    inline void SetFlowIdentifier(const char* value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier.assign(value); }
    inline DeleteFlowAliasRequest& WithFlowIdentifier(const Aws::String& value) { SetFlowIdentifier(value); return *this;}
    inline DeleteFlowAliasRequest& WithFlowIdentifier(Aws::String&& value) { SetFlowIdentifier(std::move(value)); return *this;}
    inline DeleteFlowAliasRequest& WithFlowIdentifier(const char* value) { SetFlowIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_aliasIdentifier;
    bool m_aliasIdentifierHasBeenSet = false;

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
