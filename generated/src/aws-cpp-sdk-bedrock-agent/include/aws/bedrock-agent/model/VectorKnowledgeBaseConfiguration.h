/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/EmbeddingModelConfiguration.h>
#include <aws/bedrock-agent/model/SupplementalDataStorageConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains details about the model used to create vector embeddings for the
   * knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VectorKnowledgeBaseConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorKnowledgeBaseConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API VectorKnowledgeBaseConfiguration() = default;
    AWS_BEDROCKAGENT_API VectorKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API VectorKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model used to create vector embeddings
     * for the knowledge base.</p>
     */
    inline const Aws::String& GetEmbeddingModelArn() const { return m_embeddingModelArn; }
    inline bool EmbeddingModelArnHasBeenSet() const { return m_embeddingModelArnHasBeenSet; }
    template<typename EmbeddingModelArnT = Aws::String>
    void SetEmbeddingModelArn(EmbeddingModelArnT&& value) { m_embeddingModelArnHasBeenSet = true; m_embeddingModelArn = std::forward<EmbeddingModelArnT>(value); }
    template<typename EmbeddingModelArnT = Aws::String>
    VectorKnowledgeBaseConfiguration& WithEmbeddingModelArn(EmbeddingModelArnT&& value) { SetEmbeddingModelArn(std::forward<EmbeddingModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The embeddings model configuration details for the vector model used in
     * Knowledge Base.</p>
     */
    inline const EmbeddingModelConfiguration& GetEmbeddingModelConfiguration() const { return m_embeddingModelConfiguration; }
    inline bool EmbeddingModelConfigurationHasBeenSet() const { return m_embeddingModelConfigurationHasBeenSet; }
    template<typename EmbeddingModelConfigurationT = EmbeddingModelConfiguration>
    void SetEmbeddingModelConfiguration(EmbeddingModelConfigurationT&& value) { m_embeddingModelConfigurationHasBeenSet = true; m_embeddingModelConfiguration = std::forward<EmbeddingModelConfigurationT>(value); }
    template<typename EmbeddingModelConfigurationT = EmbeddingModelConfiguration>
    VectorKnowledgeBaseConfiguration& WithEmbeddingModelConfiguration(EmbeddingModelConfigurationT&& value) { SetEmbeddingModelConfiguration(std::forward<EmbeddingModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you include multimodal data from your data source, use this object to
     * specify configurations for the storage location of the images extracted from
     * your documents. These images can be retrieved and returned to the end user. They
     * can also be used in generation when using <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html">RetrieveAndGenerate</a>.</p>
     */
    inline const SupplementalDataStorageConfiguration& GetSupplementalDataStorageConfiguration() const { return m_supplementalDataStorageConfiguration; }
    inline bool SupplementalDataStorageConfigurationHasBeenSet() const { return m_supplementalDataStorageConfigurationHasBeenSet; }
    template<typename SupplementalDataStorageConfigurationT = SupplementalDataStorageConfiguration>
    void SetSupplementalDataStorageConfiguration(SupplementalDataStorageConfigurationT&& value) { m_supplementalDataStorageConfigurationHasBeenSet = true; m_supplementalDataStorageConfiguration = std::forward<SupplementalDataStorageConfigurationT>(value); }
    template<typename SupplementalDataStorageConfigurationT = SupplementalDataStorageConfiguration>
    VectorKnowledgeBaseConfiguration& WithSupplementalDataStorageConfiguration(SupplementalDataStorageConfigurationT&& value) { SetSupplementalDataStorageConfiguration(std::forward<SupplementalDataStorageConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_embeddingModelArn;
    bool m_embeddingModelArnHasBeenSet = false;

    EmbeddingModelConfiguration m_embeddingModelConfiguration;
    bool m_embeddingModelConfigurationHasBeenSet = false;

    SupplementalDataStorageConfiguration m_supplementalDataStorageConfiguration;
    bool m_supplementalDataStorageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
