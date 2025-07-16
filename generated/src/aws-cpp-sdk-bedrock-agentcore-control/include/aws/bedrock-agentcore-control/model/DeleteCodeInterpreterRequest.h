/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class DeleteCodeInterpreterRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API DeleteCodeInterpreterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCodeInterpreter"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENTCORECONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the code interpreter to delete.</p>
     */
    inline const Aws::String& GetCodeInterpreterId() const { return m_codeInterpreterId; }
    inline bool CodeInterpreterIdHasBeenSet() const { return m_codeInterpreterIdHasBeenSet; }
    template<typename CodeInterpreterIdT = Aws::String>
    void SetCodeInterpreterId(CodeInterpreterIdT&& value) { m_codeInterpreterIdHasBeenSet = true; m_codeInterpreterId = std::forward<CodeInterpreterIdT>(value); }
    template<typename CodeInterpreterIdT = Aws::String>
    DeleteCodeInterpreterRequest& WithCodeInterpreterId(CodeInterpreterIdT&& value) { SetCodeInterpreterId(std::forward<CodeInterpreterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DeleteCodeInterpreterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterId;
    bool m_codeInterpreterIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
