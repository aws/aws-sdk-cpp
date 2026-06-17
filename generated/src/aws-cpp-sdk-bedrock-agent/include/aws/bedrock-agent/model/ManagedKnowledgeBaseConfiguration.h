/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/EmbeddingModelConfiguration.h>
#include <aws/bedrock-agent/model/EmbeddingModelType.h>
#include <aws/bedrock-agent/model/ServerSideEncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>Configurations for a managed knowledge base.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ManagedKnowledgeBaseConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedKnowledgeBaseConfiguration {
 public:
  AWS_BEDROCKAGENT_API ManagedKnowledgeBaseConfiguration() = default;
  AWS_BEDROCKAGENT_API ManagedKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API ManagedKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline EmbeddingModelType GetEmbeddingModelType() const { return m_embeddingModelType; }
  inline bool EmbeddingModelTypeHasBeenSet() const { return m_embeddingModelTypeHasBeenSet; }
  inline void SetEmbeddingModelType(EmbeddingModelType value) {
    m_embeddingModelTypeHasBeenSet = true;
    m_embeddingModelType = value;
  }
  inline ManagedKnowledgeBaseConfiguration& WithEmbeddingModelType(EmbeddingModelType value) {
    SetEmbeddingModelType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN for the embeddings model.</p>
   */
  inline const Aws::String& GetEmbeddingModelArn() const { return m_embeddingModelArn; }
  inline bool EmbeddingModelArnHasBeenSet() const { return m_embeddingModelArnHasBeenSet; }
  template <typename EmbeddingModelArnT = Aws::String>
  void SetEmbeddingModelArn(EmbeddingModelArnT&& value) {
    m_embeddingModelArnHasBeenSet = true;
    m_embeddingModelArn = std::forward<EmbeddingModelArnT>(value);
  }
  template <typename EmbeddingModelArnT = Aws::String>
  ManagedKnowledgeBaseConfiguration& WithEmbeddingModelArn(EmbeddingModelArnT&& value) {
    SetEmbeddingModelArn(std::forward<EmbeddingModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EmbeddingModelConfiguration& GetEmbeddingModelConfiguration() const { return m_embeddingModelConfiguration; }
  inline bool EmbeddingModelConfigurationHasBeenSet() const { return m_embeddingModelConfigurationHasBeenSet; }
  template <typename EmbeddingModelConfigurationT = EmbeddingModelConfiguration>
  void SetEmbeddingModelConfiguration(EmbeddingModelConfigurationT&& value) {
    m_embeddingModelConfigurationHasBeenSet = true;
    m_embeddingModelConfiguration = std::forward<EmbeddingModelConfigurationT>(value);
  }
  template <typename EmbeddingModelConfigurationT = EmbeddingModelConfiguration>
  ManagedKnowledgeBaseConfiguration& WithEmbeddingModelConfiguration(EmbeddingModelConfigurationT&& value) {
    SetEmbeddingModelConfiguration(std::forward<EmbeddingModelConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const {
    return m_serverSideEncryptionConfiguration;
  }
  inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
  template <typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
  void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) {
    m_serverSideEncryptionConfigurationHasBeenSet = true;
    m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value);
  }
  template <typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
  ManagedKnowledgeBaseConfiguration& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) {
    SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EmbeddingModelType m_embeddingModelType{EmbeddingModelType::NOT_SET};

  Aws::String m_embeddingModelArn;

  EmbeddingModelConfiguration m_embeddingModelConfiguration;

  ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
  bool m_embeddingModelTypeHasBeenSet = false;
  bool m_embeddingModelArnHasBeenSet = false;
  bool m_embeddingModelConfigurationHasBeenSet = false;
  bool m_serverSideEncryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
