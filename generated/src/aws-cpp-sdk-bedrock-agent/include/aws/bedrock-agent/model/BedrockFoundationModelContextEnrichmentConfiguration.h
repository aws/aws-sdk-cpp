/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/EnrichmentStrategyConfiguration.h>
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
   * <p>Context enrichment configuration is used to provide additional context to the
   * RAG application using Amazon Bedrock foundation models.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/BedrockFoundationModelContextEnrichmentConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockFoundationModelContextEnrichmentConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API BedrockFoundationModelContextEnrichmentConfiguration();
    AWS_BEDROCKAGENT_API BedrockFoundationModelContextEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API BedrockFoundationModelContextEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The enrichment stategy used to provide additional context. For example,
     * Neptune GraphRAG uses Amazon Bedrock foundation models to perform chunk entity
     * extraction.</p>
     */
    inline const EnrichmentStrategyConfiguration& GetEnrichmentStrategyConfiguration() const{ return m_enrichmentStrategyConfiguration; }
    inline bool EnrichmentStrategyConfigurationHasBeenSet() const { return m_enrichmentStrategyConfigurationHasBeenSet; }
    inline void SetEnrichmentStrategyConfiguration(const EnrichmentStrategyConfiguration& value) { m_enrichmentStrategyConfigurationHasBeenSet = true; m_enrichmentStrategyConfiguration = value; }
    inline void SetEnrichmentStrategyConfiguration(EnrichmentStrategyConfiguration&& value) { m_enrichmentStrategyConfigurationHasBeenSet = true; m_enrichmentStrategyConfiguration = std::move(value); }
    inline BedrockFoundationModelContextEnrichmentConfiguration& WithEnrichmentStrategyConfiguration(const EnrichmentStrategyConfiguration& value) { SetEnrichmentStrategyConfiguration(value); return *this;}
    inline BedrockFoundationModelContextEnrichmentConfiguration& WithEnrichmentStrategyConfiguration(EnrichmentStrategyConfiguration&& value) { SetEnrichmentStrategyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the foundation model used for context
     * enrichment.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline BedrockFoundationModelContextEnrichmentConfiguration& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline BedrockFoundationModelContextEnrichmentConfiguration& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline BedrockFoundationModelContextEnrichmentConfiguration& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}
  private:

    EnrichmentStrategyConfiguration m_enrichmentStrategyConfiguration;
    bool m_enrichmentStrategyConfigurationHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
