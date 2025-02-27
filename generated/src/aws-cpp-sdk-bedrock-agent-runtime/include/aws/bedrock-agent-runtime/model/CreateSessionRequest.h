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
  class CreateSessionRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CreateSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSession"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use to encrypt the session
     * data. The user or role creating the session must have permission to use the key.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/session-encryption.html">Amazon
     * Bedrock session encryption</a>. </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline CreateSessionRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline CreateSessionRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline CreateSessionRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs containing attributes to be persisted across the
     * session. For example, the user's ID, their language preference, and the type of
     * device they are using.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionMetadata() const{ return m_sessionMetadata; }
    inline bool SessionMetadataHasBeenSet() const { return m_sessionMetadataHasBeenSet; }
    inline void SetSessionMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = value; }
    inline void SetSessionMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = std::move(value); }
    inline CreateSessionRequest& WithSessionMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionMetadata(value); return *this;}
    inline CreateSessionRequest& WithSessionMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionMetadata(std::move(value)); return *this;}
    inline CreateSessionRequest& AddSessionMetadata(const Aws::String& key, const Aws::String& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, value); return *this; }
    inline CreateSessionRequest& AddSessionMetadata(Aws::String&& key, const Aws::String& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::move(key), value); return *this; }
    inline CreateSessionRequest& AddSessionMetadata(const Aws::String& key, Aws::String&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateSessionRequest& AddSessionMetadata(Aws::String&& key, Aws::String&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSessionRequest& AddSessionMetadata(const char* key, Aws::String&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateSessionRequest& AddSessionMetadata(Aws::String&& key, const char* value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(std::move(key), value); return *this; }
    inline CreateSessionRequest& AddSessionMetadata(const char* key, const char* value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the key-value pairs for the tags that you want to attach to the
     * session.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSessionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSessionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSessionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateSessionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSessionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSessionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSessionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSessionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSessionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionMetadata;
    bool m_sessionMetadataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
