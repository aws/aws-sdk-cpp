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
  class GetCodeInterpreterRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GetCodeInterpreterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCodeInterpreter"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the code interpreter to retrieve.</p>
     */
    inline const Aws::String& GetCodeInterpreterId() const { return m_codeInterpreterId; }
    inline bool CodeInterpreterIdHasBeenSet() const { return m_codeInterpreterIdHasBeenSet; }
    template<typename CodeInterpreterIdT = Aws::String>
    void SetCodeInterpreterId(CodeInterpreterIdT&& value) { m_codeInterpreterIdHasBeenSet = true; m_codeInterpreterId = std::forward<CodeInterpreterIdT>(value); }
    template<typename CodeInterpreterIdT = Aws::String>
    GetCodeInterpreterRequest& WithCodeInterpreterId(CodeInterpreterIdT&& value) { SetCodeInterpreterId(std::forward<CodeInterpreterIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterId;
    bool m_codeInterpreterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
