/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/EmbeddingModelConfiguration.h>
#include <aws/bedrock-agent/model/EmbeddingModelType.h>
#include <aws/bedrock-agent/model/ServerSideEncryptionConfiguration.h>
#include <aws/bedrock-agent/model/SupplementalDataStorageConfiguration.h>
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
  /**
   * <p>Choose CUSTOM to provide your own Bedrock embedding model ARN. Choose MANAGED
   * to use a service-managed embedding model.</p>
   */
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
  /**
   * <p>The configuration details for the embeddings model. Not required when
   * choosing the MANAGED embeddingModelType.</p>
   */
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
  /**
   * <p>Contains the configuration for server-side encryption for your managed
   * knowledge base.</p>
   */
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

  ///@{
  /**
   * <p>Use this object to specify the Amazon S3 location that the knowledge base
   * uses to process and ingest multimodal content. This field is required when you
   * use a native multimodal embedding model.</p>
   */
  inline const SupplementalDataStorageConfiguration& GetSupplementalDataStorageConfiguration() const {
    return m_supplementalDataStorageConfiguration;
  }
  inline bool SupplementalDataStorageConfigurationHasBeenSet() const { return m_supplementalDataStorageConfigurationHasBeenSet; }
  template <typename SupplementalDataStorageConfigurationT = SupplementalDataStorageConfiguration>
  void SetSupplementalDataStorageConfiguration(SupplementalDataStorageConfigurationT&& value) {
    m_supplementalDataStorageConfigurationHasBeenSet = true;
    m_supplementalDataStorageConfiguration = std::forward<SupplementalDataStorageConfigurationT>(value);
  }
  template <typename SupplementalDataStorageConfigurationT = SupplementalDataStorageConfiguration>
  ManagedKnowledgeBaseConfiguration& WithSupplementalDataStorageConfiguration(SupplementalDataStorageConfigurationT&& value) {
    SetSupplementalDataStorageConfiguration(std::forward<SupplementalDataStorageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EmbeddingModelType m_embeddingModelType{EmbeddingModelType::NOT_SET};

  Aws::String m_embeddingModelArn;

  EmbeddingModelConfiguration m_embeddingModelConfiguration;

  ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;

  SupplementalDataStorageConfiguration m_supplementalDataStorageConfiguration;
  bool m_embeddingModelTypeHasBeenSet = false;
  bool m_embeddingModelArnHasBeenSet = false;
  bool m_embeddingModelConfigurationHasBeenSet = false;
  bool m_serverSideEncryptionConfigurationHasBeenSet = false;
  bool m_supplementalDataStorageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
