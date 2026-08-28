/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ContentSource.h>
#include <aws/bedrock-agentcore/model/ExtractionConfig.h>
#include <aws/bedrock-agentcore/model/MetadataValue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class IngestDataRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API IngestDataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "IngestData"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the AgentCore Memory resource to ingest content into.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  IngestDataRequest& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content to ingest. Only inline content is supported.</p>
   */
  inline const ContentSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = ContentSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = ContentSource>
  IngestDataRequest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the content occurred.</p>
   */
  inline const Aws::Utils::DateTime& GetContentTimestamp() const { return m_contentTimestamp; }
  inline bool ContentTimestampHasBeenSet() const { return m_contentTimestampHasBeenSet; }
  template <typename ContentTimestampT = Aws::Utils::DateTime>
  void SetContentTimestamp(ContentTimestampT&& value) {
    m_contentTimestampHasBeenSet = true;
    m_contentTimestamp = std::forward<ContentTimestampT>(value);
  }
  template <typename ContentTimestampT = Aws::Utils::DateTime>
  IngestDataRequest& WithContentTimestamp(ContentTimestampT&& value) {
    SetContentTimestamp(std::forward<ContentTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the actor associated with this content. An actor represents
   * an entity that participates in sessions and generates content.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  IngestDataRequest& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the session that the content belongs to. If not provided, a
   * session identifier is generated and returned in the response.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  IngestDataRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The extraction configuration for long-term memory records. Use this parameter
   * to specify namespace variable keys and their values for namespace substitution
   * during extraction.</p>
   */
  inline const ExtractionConfig& GetExtractionConfig() const { return m_extractionConfig; }
  inline bool ExtractionConfigHasBeenSet() const { return m_extractionConfigHasBeenSet; }
  template <typename ExtractionConfigT = ExtractionConfig>
  void SetExtractionConfig(ExtractionConfigT&& value) {
    m_extractionConfigHasBeenSet = true;
    m_extractionConfig = std::forward<ExtractionConfigT>(value);
  }
  template <typename ExtractionConfigT = ExtractionConfig>
  IngestDataRequest& WithExtractionConfig(ExtractionConfigT&& value) {
    SetExtractionConfig(std::forward<ExtractionConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key-value metadata to attach to the content.</p>
   */
  inline const Aws::Map<Aws::String, MetadataValue>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, MetadataValue>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, MetadataValue>>
  IngestDataRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = MetadataValue>
  IngestDataRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, AgentCore ignores
   * the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  IngestDataRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryId;

  ContentSource m_source;

  Aws::Utils::DateTime m_contentTimestamp{};

  Aws::String m_actorId;

  Aws::String m_sessionId;

  ExtractionConfig m_extractionConfig;

  Aws::Map<Aws::String, MetadataValue> m_metadata;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_memoryIdHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_contentTimestampHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_extractionConfigHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
