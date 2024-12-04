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
    AWS_BEDROCKAGENT_API VectorKnowledgeBaseConfiguration();
    AWS_BEDROCKAGENT_API VectorKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API VectorKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model or inference profile used to
     * create vector embeddings for the knowledge base.</p>
     */
    inline const Aws::String& GetEmbeddingModelArn() const{ return m_embeddingModelArn; }
    inline bool EmbeddingModelArnHasBeenSet() const { return m_embeddingModelArnHasBeenSet; }
    inline void SetEmbeddingModelArn(const Aws::String& value) { m_embeddingModelArnHasBeenSet = true; m_embeddingModelArn = value; }
    inline void SetEmbeddingModelArn(Aws::String&& value) { m_embeddingModelArnHasBeenSet = true; m_embeddingModelArn = std::move(value); }
    inline void SetEmbeddingModelArn(const char* value) { m_embeddingModelArnHasBeenSet = true; m_embeddingModelArn.assign(value); }
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelArn(const Aws::String& value) { SetEmbeddingModelArn(value); return *this;}
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelArn(Aws::String&& value) { SetEmbeddingModelArn(std::move(value)); return *this;}
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelArn(const char* value) { SetEmbeddingModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The embeddings model configuration details for the vector model used in
     * Knowledge Base.</p>
     */
    inline const EmbeddingModelConfiguration& GetEmbeddingModelConfiguration() const{ return m_embeddingModelConfiguration; }
    inline bool EmbeddingModelConfigurationHasBeenSet() const { return m_embeddingModelConfigurationHasBeenSet; }
    inline void SetEmbeddingModelConfiguration(const EmbeddingModelConfiguration& value) { m_embeddingModelConfigurationHasBeenSet = true; m_embeddingModelConfiguration = value; }
    inline void SetEmbeddingModelConfiguration(EmbeddingModelConfiguration&& value) { m_embeddingModelConfigurationHasBeenSet = true; m_embeddingModelConfiguration = std::move(value); }
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelConfiguration(const EmbeddingModelConfiguration& value) { SetEmbeddingModelConfiguration(value); return *this;}
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelConfiguration(EmbeddingModelConfiguration&& value) { SetEmbeddingModelConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you include multimodal data from your data source, use this object to
     * specify configurations for the storage location of the images extracted from
     * your documents. These images can be retrieved and returned to the end user. They
     * can also be used in generation when using <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html">RetrieveAndGenerate</a>.</p>
     */
    inline const SupplementalDataStorageConfiguration& GetSupplementalDataStorageConfiguration() const{ return m_supplementalDataStorageConfiguration; }
    inline bool SupplementalDataStorageConfigurationHasBeenSet() const { return m_supplementalDataStorageConfigurationHasBeenSet; }
    inline void SetSupplementalDataStorageConfiguration(const SupplementalDataStorageConfiguration& value) { m_supplementalDataStorageConfigurationHasBeenSet = true; m_supplementalDataStorageConfiguration = value; }
    inline void SetSupplementalDataStorageConfiguration(SupplementalDataStorageConfiguration&& value) { m_supplementalDataStorageConfigurationHasBeenSet = true; m_supplementalDataStorageConfiguration = std::move(value); }
    inline VectorKnowledgeBaseConfiguration& WithSupplementalDataStorageConfiguration(const SupplementalDataStorageConfiguration& value) { SetSupplementalDataStorageConfiguration(value); return *this;}
    inline VectorKnowledgeBaseConfiguration& WithSupplementalDataStorageConfiguration(SupplementalDataStorageConfiguration&& value) { SetSupplementalDataStorageConfiguration(std::move(value)); return *this;}
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
