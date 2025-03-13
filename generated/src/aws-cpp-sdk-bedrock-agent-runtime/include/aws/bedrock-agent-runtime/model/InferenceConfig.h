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
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfig() = default;
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Configuration settings specific to text generation while generating
     * responses using RetrieveAndGenerate. </p>
     */
    inline const TextInferenceConfig& GetTextInferenceConfig() const { return m_textInferenceConfig; }
    inline bool TextInferenceConfigHasBeenSet() const { return m_textInferenceConfigHasBeenSet; }
    template<typename TextInferenceConfigT = TextInferenceConfig>
    void SetTextInferenceConfig(TextInferenceConfigT&& value) { m_textInferenceConfigHasBeenSet = true; m_textInferenceConfig = std::forward<TextInferenceConfigT>(value); }
    template<typename TextInferenceConfigT = TextInferenceConfig>
    InferenceConfig& WithTextInferenceConfig(TextInferenceConfigT&& value) { SetTextInferenceConfig(std::forward<TextInferenceConfigT>(value)); return *this;}
    ///@}
  private:

    TextInferenceConfig m_textInferenceConfig;
    bool m_textInferenceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
