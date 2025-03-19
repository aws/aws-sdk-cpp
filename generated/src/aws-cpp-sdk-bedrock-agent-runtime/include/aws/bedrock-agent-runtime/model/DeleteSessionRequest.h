/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class DeleteSessionRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API DeleteSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSession"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the session to be deleted. You can specify either
     * the session's <code>sessionId</code> or its Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSessionIdentifier() const { return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    template<typename SessionIdentifierT = Aws::String>
    void SetSessionIdentifier(SessionIdentifierT&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::forward<SessionIdentifierT>(value); }
    template<typename SessionIdentifierT = Aws::String>
    DeleteSessionRequest& WithSessionIdentifier(SessionIdentifierT&& value) { SetSessionIdentifier(std::forward<SessionIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionIdentifier;
    bool m_sessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
