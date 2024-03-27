/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/KnowledgeBaseType.h>
#include <aws/bedrock-agent/model/VectorKnowledgeBaseConfiguration.h>
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
   * <p>Contains details about the embeddings configuration of the knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBaseConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration();
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline const KnowledgeBaseType& GetType() const{ return m_type; }

    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline void SetType(const KnowledgeBaseType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline void SetType(KnowledgeBaseType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline KnowledgeBaseConfiguration& WithType(const KnowledgeBaseType& value) { SetType(value); return *this;}

    /**
     * <p>The type of data that the data source is converted into for the knowledge
     * base.</p>
     */
    inline KnowledgeBaseConfiguration& WithType(KnowledgeBaseType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Contains details about the embeddings model that'sused to convert the data
     * source.</p>
     */
    inline const VectorKnowledgeBaseConfiguration& GetVectorKnowledgeBaseConfiguration() const{ return m_vectorKnowledgeBaseConfiguration; }

    /**
     * <p>Contains details about the embeddings model that'sused to convert the data
     * source.</p>
     */
    inline bool VectorKnowledgeBaseConfigurationHasBeenSet() const { return m_vectorKnowledgeBaseConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the embeddings model that'sused to convert the data
     * source.</p>
     */
    inline void SetVectorKnowledgeBaseConfiguration(const VectorKnowledgeBaseConfiguration& value) { m_vectorKnowledgeBaseConfigurationHasBeenSet = true; m_vectorKnowledgeBaseConfiguration = value; }

    /**
     * <p>Contains details about the embeddings model that'sused to convert the data
     * source.</p>
     */
    inline void SetVectorKnowledgeBaseConfiguration(VectorKnowledgeBaseConfiguration&& value) { m_vectorKnowledgeBaseConfigurationHasBeenSet = true; m_vectorKnowledgeBaseConfiguration = std::move(value); }

    /**
     * <p>Contains details about the embeddings model that'sused to convert the data
     * source.</p>
     */
    inline KnowledgeBaseConfiguration& WithVectorKnowledgeBaseConfiguration(const VectorKnowledgeBaseConfiguration& value) { SetVectorKnowledgeBaseConfiguration(value); return *this;}

    /**
     * <p>Contains details about the embeddings model that'sused to convert the data
     * source.</p>
     */
    inline KnowledgeBaseConfiguration& WithVectorKnowledgeBaseConfiguration(VectorKnowledgeBaseConfiguration&& value) { SetVectorKnowledgeBaseConfiguration(std::move(value)); return *this;}

  private:

    KnowledgeBaseType m_type;
    bool m_typeHasBeenSet = false;

    VectorKnowledgeBaseConfiguration m_vectorKnowledgeBaseConfiguration;
    bool m_vectorKnowledgeBaseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
