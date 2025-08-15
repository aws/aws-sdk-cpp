/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ContextEnrichmentType.h>
#include <aws/bedrock-agent/model/BedrockFoundationModelContextEnrichmentConfiguration.h>
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
   * <p>Context enrichment configuration is used to provide additional context to the
   * RAG application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ContextEnrichmentConfiguration">AWS
   * API Reference</a></p>
   */
  class ContextEnrichmentConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ContextEnrichmentConfiguration() = default;
    AWS_BEDROCKAGENT_API ContextEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ContextEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method used for context enrichment. It must be Amazon Bedrock foundation
     * models.</p>
     */
    inline ContextEnrichmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ContextEnrichmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ContextEnrichmentConfiguration& WithType(ContextEnrichmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Amazon Bedrock foundation model used for context
     * enrichment.</p>
     */
    inline const BedrockFoundationModelContextEnrichmentConfiguration& GetBedrockFoundationModelConfiguration() const { return m_bedrockFoundationModelConfiguration; }
    inline bool BedrockFoundationModelConfigurationHasBeenSet() const { return m_bedrockFoundationModelConfigurationHasBeenSet; }
    template<typename BedrockFoundationModelConfigurationT = BedrockFoundationModelContextEnrichmentConfiguration>
    void SetBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationT&& value) { m_bedrockFoundationModelConfigurationHasBeenSet = true; m_bedrockFoundationModelConfiguration = std::forward<BedrockFoundationModelConfigurationT>(value); }
    template<typename BedrockFoundationModelConfigurationT = BedrockFoundationModelContextEnrichmentConfiguration>
    ContextEnrichmentConfiguration& WithBedrockFoundationModelConfiguration(BedrockFoundationModelConfigurationT&& value) { SetBedrockFoundationModelConfiguration(std::forward<BedrockFoundationModelConfigurationT>(value)); return *this;}
    ///@}
  private:

    ContextEnrichmentType m_type{ContextEnrichmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    BedrockFoundationModelContextEnrichmentConfiguration m_bedrockFoundationModelConfiguration;
    bool m_bedrockFoundationModelConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
