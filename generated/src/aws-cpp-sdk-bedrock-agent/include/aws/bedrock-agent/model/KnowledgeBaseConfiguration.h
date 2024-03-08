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
   * <p>Configures a bedrock knowledge base.</p><p><h3>See Also:</h3>   <a
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


    
    inline const KnowledgeBaseType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const KnowledgeBaseType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(KnowledgeBaseType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline KnowledgeBaseConfiguration& WithType(const KnowledgeBaseType& value) { SetType(value); return *this;}

    
    inline KnowledgeBaseConfiguration& WithType(KnowledgeBaseType&& value) { SetType(std::move(value)); return *this;}


    
    inline const VectorKnowledgeBaseConfiguration& GetVectorKnowledgeBaseConfiguration() const{ return m_vectorKnowledgeBaseConfiguration; }

    
    inline bool VectorKnowledgeBaseConfigurationHasBeenSet() const { return m_vectorKnowledgeBaseConfigurationHasBeenSet; }

    
    inline void SetVectorKnowledgeBaseConfiguration(const VectorKnowledgeBaseConfiguration& value) { m_vectorKnowledgeBaseConfigurationHasBeenSet = true; m_vectorKnowledgeBaseConfiguration = value; }

    
    inline void SetVectorKnowledgeBaseConfiguration(VectorKnowledgeBaseConfiguration&& value) { m_vectorKnowledgeBaseConfigurationHasBeenSet = true; m_vectorKnowledgeBaseConfiguration = std::move(value); }

    
    inline KnowledgeBaseConfiguration& WithVectorKnowledgeBaseConfiguration(const VectorKnowledgeBaseConfiguration& value) { SetVectorKnowledgeBaseConfiguration(value); return *this;}

    
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
