/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class GetTokenVaultRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GetTokenVaultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTokenVault"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the token vault to retrieve.</p>
     */
    inline const Aws::String& GetTokenVaultId() const { return m_tokenVaultId; }
    inline bool TokenVaultIdHasBeenSet() const { return m_tokenVaultIdHasBeenSet; }
    template<typename TokenVaultIdT = Aws::String>
    void SetTokenVaultId(TokenVaultIdT&& value) { m_tokenVaultIdHasBeenSet = true; m_tokenVaultId = std::forward<TokenVaultIdT>(value); }
    template<typename TokenVaultIdT = Aws::String>
    GetTokenVaultRequest& WithTokenVaultId(TokenVaultIdT&& value) { SetTokenVaultId(std::forward<TokenVaultIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tokenVaultId;
    bool m_tokenVaultIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
