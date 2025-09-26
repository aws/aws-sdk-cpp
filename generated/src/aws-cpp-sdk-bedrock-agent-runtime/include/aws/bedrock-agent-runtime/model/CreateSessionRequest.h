/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateSessionRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CreateSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSession"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A map of key-value pairs containing attributes to be persisted across the
     * session. For example, the user's ID, their language preference, and the type of
     * device they are using.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionMetadata() const { return m_sessionMetadata; }
    inline bool SessionMetadataHasBeenSet() const { return m_sessionMetadataHasBeenSet; }
    template<typename SessionMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetSessionMetadata(SessionMetadataT&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = std::forward<SessionMetadataT>(value); }
    template<typename SessionMetadataT = Aws::Map<Aws::String, Aws::String>>
    CreateSessionRequest& WithSessionMetadata(SessionMetadataT&& value) { SetSessionMetadata(std::forward<SessionMetadataT>(value)); return *this;}
    template<typename SessionMetadataKeyT = Aws::String, typename SessionMetadataValueT = Aws::String>
    CreateSessionRequest& AddSessionMetadata(SessionMetadataKeyT&& key, SessionMetadataValueT&& value) {
      m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::forward<SessionMetadataKeyT>(key), std::forward<SessionMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use to encrypt the session
     * data. The user or role creating the session must have permission to use the key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/session-encryption.html">Amazon
     * Bedrock session encryption</a>. </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    CreateSessionRequest& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to the
     * session.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSessionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSessionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_sessionMetadata;
    bool m_sessionMetadataHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
