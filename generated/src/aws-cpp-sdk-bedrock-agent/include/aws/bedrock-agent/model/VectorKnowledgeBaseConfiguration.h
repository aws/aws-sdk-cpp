/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configurations for a vector knowledge base.</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::String& GetEmbeddingModelArn() const{ return m_embeddingModelArn; }

    
    inline bool EmbeddingModelArnHasBeenSet() const { return m_embeddingModelArnHasBeenSet; }

    
    inline void SetEmbeddingModelArn(const Aws::String& value) { m_embeddingModelArnHasBeenSet = true; m_embeddingModelArn = value; }

    
    inline void SetEmbeddingModelArn(Aws::String&& value) { m_embeddingModelArnHasBeenSet = true; m_embeddingModelArn = std::move(value); }

    
    inline void SetEmbeddingModelArn(const char* value) { m_embeddingModelArnHasBeenSet = true; m_embeddingModelArn.assign(value); }

    
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelArn(const Aws::String& value) { SetEmbeddingModelArn(value); return *this;}

    
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelArn(Aws::String&& value) { SetEmbeddingModelArn(std::move(value)); return *this;}

    
    inline VectorKnowledgeBaseConfiguration& WithEmbeddingModelArn(const char* value) { SetEmbeddingModelArn(value); return *this;}

  private:

    Aws::String m_embeddingModelArn;
    bool m_embeddingModelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
