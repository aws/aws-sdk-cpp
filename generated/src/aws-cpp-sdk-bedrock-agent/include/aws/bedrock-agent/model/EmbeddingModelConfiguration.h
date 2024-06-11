﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/BedrockEmbeddingModelConfiguration.h>
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
   * <p>The configuration details for the embeddings model.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/EmbeddingModelConfiguration">AWS
   * API Reference</a></p>
   */
  class EmbeddingModelConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API EmbeddingModelConfiguration();
    AWS_BEDROCKAGENT_API EmbeddingModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API EmbeddingModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vector configuration details on the Bedrock embeddings model.</p>
     */
    inline const BedrockEmbeddingModelConfiguration& GetBedrockEmbeddingModelConfiguration() const{ return m_bedrockEmbeddingModelConfiguration; }
    inline bool BedrockEmbeddingModelConfigurationHasBeenSet() const { return m_bedrockEmbeddingModelConfigurationHasBeenSet; }
    inline void SetBedrockEmbeddingModelConfiguration(const BedrockEmbeddingModelConfiguration& value) { m_bedrockEmbeddingModelConfigurationHasBeenSet = true; m_bedrockEmbeddingModelConfiguration = value; }
    inline void SetBedrockEmbeddingModelConfiguration(BedrockEmbeddingModelConfiguration&& value) { m_bedrockEmbeddingModelConfigurationHasBeenSet = true; m_bedrockEmbeddingModelConfiguration = std::move(value); }
    inline EmbeddingModelConfiguration& WithBedrockEmbeddingModelConfiguration(const BedrockEmbeddingModelConfiguration& value) { SetBedrockEmbeddingModelConfiguration(value); return *this;}
    inline EmbeddingModelConfiguration& WithBedrockEmbeddingModelConfiguration(BedrockEmbeddingModelConfiguration&& value) { SetBedrockEmbeddingModelConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    BedrockEmbeddingModelConfiguration m_bedrockEmbeddingModelConfiguration;
    bool m_bedrockEmbeddingModelConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
