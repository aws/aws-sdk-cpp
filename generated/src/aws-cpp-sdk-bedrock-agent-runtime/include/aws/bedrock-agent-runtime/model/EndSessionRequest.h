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
  class EndSessionRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API EndSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EndSession"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the session to end. You can specify either the
     * session's <code>sessionId</code> or its Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSessionIdentifier() const{ return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    inline void SetSessionIdentifier(const Aws::String& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = value; }
    inline void SetSessionIdentifier(Aws::String&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::move(value); }
    inline void SetSessionIdentifier(const char* value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier.assign(value); }
    inline EndSessionRequest& WithSessionIdentifier(const Aws::String& value) { SetSessionIdentifier(value); return *this;}
    inline EndSessionRequest& WithSessionIdentifier(Aws::String&& value) { SetSessionIdentifier(std::move(value)); return *this;}
    inline EndSessionRequest& WithSessionIdentifier(const char* value) { SetSessionIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionIdentifier;
    bool m_sessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
