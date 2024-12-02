/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/BedrockRerankingConfiguration.h>
#include <aws/bedrock-agent-runtime/model/RerankingConfigurationType.h>
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
   * <p>Contains configurations for reranking.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RerankingConfiguration">AWS
   * API Reference</a></p>
   */
  class RerankingConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankingConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API RerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for an Amazon Bedrock reranker.</p>
     */
    inline const BedrockRerankingConfiguration& GetBedrockRerankingConfiguration() const{ return m_bedrockRerankingConfiguration; }
    inline bool BedrockRerankingConfigurationHasBeenSet() const { return m_bedrockRerankingConfigurationHasBeenSet; }
    inline void SetBedrockRerankingConfiguration(const BedrockRerankingConfiguration& value) { m_bedrockRerankingConfigurationHasBeenSet = true; m_bedrockRerankingConfiguration = value; }
    inline void SetBedrockRerankingConfiguration(BedrockRerankingConfiguration&& value) { m_bedrockRerankingConfigurationHasBeenSet = true; m_bedrockRerankingConfiguration = std::move(value); }
    inline RerankingConfiguration& WithBedrockRerankingConfiguration(const BedrockRerankingConfiguration& value) { SetBedrockRerankingConfiguration(value); return *this;}
    inline RerankingConfiguration& WithBedrockRerankingConfiguration(BedrockRerankingConfiguration&& value) { SetBedrockRerankingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of reranker that the configurations apply to.</p>
     */
    inline const RerankingConfigurationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RerankingConfigurationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RerankingConfigurationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RerankingConfiguration& WithType(const RerankingConfigurationType& value) { SetType(value); return *this;}
    inline RerankingConfiguration& WithType(RerankingConfigurationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    BedrockRerankingConfiguration m_bedrockRerankingConfiguration;
    bool m_bedrockRerankingConfigurationHasBeenSet = false;

    RerankingConfigurationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
