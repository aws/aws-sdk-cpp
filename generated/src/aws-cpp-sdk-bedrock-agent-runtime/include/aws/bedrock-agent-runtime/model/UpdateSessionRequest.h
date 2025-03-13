/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class UpdateSessionRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API UpdateSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSession"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the session to modify. You can specify either the
     * session's <code>sessionId</code> or its Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSessionIdentifier() const { return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    template<typename SessionIdentifierT = Aws::String>
    void SetSessionIdentifier(SessionIdentifierT&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::forward<SessionIdentifierT>(value); }
    template<typename SessionIdentifierT = Aws::String>
    UpdateSessionRequest& WithSessionIdentifier(SessionIdentifierT&& value) { SetSessionIdentifier(std::forward<SessionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs containing attributes to be persisted across the
     * session. For example the user's ID, their language preference, and the type of
     * device they are using.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionMetadata() const { return m_sessionMetadata; }
    inline bool SessionMetadataHasBeenSet() const { return m_sessionMetadataHasBeenSet; }
    template<typename SessionMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionMetadata(SessionMetadataT&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = std::forward<SessionMetadataT>(value); }
    template<typename SessionMetadataT = Aws::Map<Aws::String, Aws::String>>
    UpdateSessionRequest& WithSessionMetadata(SessionMetadataT&& value) { SetSessionMetadata(std::forward<SessionMetadataT>(value)); return *this;}
    template<typename SessionMetadataKeyT = Aws::String, typename SessionMetadataValueT = Aws::String>
    UpdateSessionRequest& AddSessionMetadata(SessionMetadataKeyT&& key, SessionMetadataValueT&& value) {
      m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::forward<SessionMetadataKeyT>(key), std::forward<SessionMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_sessionIdentifier;
    bool m_sessionIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionMetadata;
    bool m_sessionMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
