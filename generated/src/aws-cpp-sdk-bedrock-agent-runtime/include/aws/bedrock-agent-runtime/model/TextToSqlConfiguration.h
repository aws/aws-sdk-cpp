/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/TextToSqlKnowledgeBaseConfiguration.h>
#include <aws/bedrock-agent-runtime/model/TextToSqlConfigurationType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains configurations for transforming text to SQL.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TextToSqlConfiguration">AWS
   * API Reference</a></p>
   */
  class TextToSqlConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TextToSqlConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API TextToSqlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TextToSqlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies configurations for a knowledge base to use in transformation.</p>
     */
    inline const TextToSqlKnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
    inline void SetKnowledgeBaseConfiguration(const TextToSqlKnowledgeBaseConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }
    inline void SetKnowledgeBaseConfiguration(TextToSqlKnowledgeBaseConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }
    inline TextToSqlConfiguration& WithKnowledgeBaseConfiguration(const TextToSqlKnowledgeBaseConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}
    inline TextToSqlConfiguration& WithKnowledgeBaseConfiguration(TextToSqlKnowledgeBaseConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource to use in transformation.</p>
     */
    inline const TextToSqlConfigurationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TextToSqlConfigurationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TextToSqlConfigurationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TextToSqlConfiguration& WithType(const TextToSqlConfigurationType& value) { SetType(value); return *this;}
    inline TextToSqlConfiguration& WithType(TextToSqlConfigurationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    TextToSqlKnowledgeBaseConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    TextToSqlConfigurationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
