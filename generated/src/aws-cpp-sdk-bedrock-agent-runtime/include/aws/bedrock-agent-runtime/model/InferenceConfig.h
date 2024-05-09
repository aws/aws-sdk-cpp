/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/TextInferenceConfig.h>
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
   * <p> The configuration for inference settings when generating responses using
   * RetrieveAndGenerate. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InferenceConfig">AWS
   * API Reference</a></p>
   */
  class InferenceConfig
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfig();
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Configuration settings specific to text generation while generating
     * responses using RetrieveAndGenerate. </p>
     */
    inline const TextInferenceConfig& GetTextInferenceConfig() const{ return m_textInferenceConfig; }

    /**
     * <p> Configuration settings specific to text generation while generating
     * responses using RetrieveAndGenerate. </p>
     */
    inline bool TextInferenceConfigHasBeenSet() const { return m_textInferenceConfigHasBeenSet; }

    /**
     * <p> Configuration settings specific to text generation while generating
     * responses using RetrieveAndGenerate. </p>
     */
    inline void SetTextInferenceConfig(const TextInferenceConfig& value) { m_textInferenceConfigHasBeenSet = true; m_textInferenceConfig = value; }

    /**
     * <p> Configuration settings specific to text generation while generating
     * responses using RetrieveAndGenerate. </p>
     */
    inline void SetTextInferenceConfig(TextInferenceConfig&& value) { m_textInferenceConfigHasBeenSet = true; m_textInferenceConfig = std::move(value); }

    /**
     * <p> Configuration settings specific to text generation while generating
     * responses using RetrieveAndGenerate. </p>
     */
    inline InferenceConfig& WithTextInferenceConfig(const TextInferenceConfig& value) { SetTextInferenceConfig(value); return *this;}

    /**
     * <p> Configuration settings specific to text generation while generating
     * responses using RetrieveAndGenerate. </p>
     */
    inline InferenceConfig& WithTextInferenceConfig(TextInferenceConfig&& value) { SetTextInferenceConfig(std::move(value)); return *this;}

  private:

    TextInferenceConfig m_textInferenceConfig;
    bool m_textInferenceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
