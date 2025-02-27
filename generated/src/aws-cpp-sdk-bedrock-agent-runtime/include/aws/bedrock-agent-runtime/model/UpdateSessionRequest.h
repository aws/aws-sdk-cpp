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
    AWS_BEDROCKAGENTRUNTIME_API UpdateSessionRequest();

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
    inline const Aws::String& GetSessionIdentifier() const{ return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    inline void SetSessionIdentifier(const Aws::String& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = value; }
    inline void SetSessionIdentifier(Aws::String&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::move(value); }
    inline void SetSessionIdentifier(const char* value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier.assign(value); }
    inline UpdateSessionRequest& WithSessionIdentifier(const Aws::String& value) { SetSessionIdentifier(value); return *this;}
    inline UpdateSessionRequest& WithSessionIdentifier(Aws::String&& value) { SetSessionIdentifier(std::move(value)); return *this;}
    inline UpdateSessionRequest& WithSessionIdentifier(const char* value) { SetSessionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs containing attributes to be persisted across the
     * session. For example the user's ID, their language preference, and the type of
     * device they are using.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionMetadata() const{ return m_sessionMetadata; }
    inline bool SessionMetadataHasBeenSet() const { return m_sessionMetadataHasBeenSet; }
    inline void SetSessionMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = value; }
    inline void SetSessionMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = std::move(value); }
    inline UpdateSessionRequest& WithSessionMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionMetadata(value); return *this;}
    inline UpdateSessionRequest& WithSessionMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionMetadata(std::move(value)); return *this;}
    inline UpdateSessionRequest& AddSessionMetadata(const Aws::String& key, const Aws::String& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, value); return *this; }
    inline UpdateSessionRequest& AddSessionMetadata(Aws::String&& key, const Aws::String& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::move(key), value); return *this; }
    inline UpdateSessionRequest& AddSessionMetadata(const Aws::String& key, Aws::String&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, std::move(value)); return *this; }
    inline UpdateSessionRequest& AddSessionMetadata(Aws::String&& key, Aws::String&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateSessionRequest& AddSessionMetadata(const char* key, Aws::String&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, std::move(value)); return *this; }
    inline UpdateSessionRequest& AddSessionMetadata(Aws::String&& key, const char* value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::move(key), value); return *this; }
    inline UpdateSessionRequest& AddSessionMetadata(const char* key, const char* value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, value); return *this; }
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
