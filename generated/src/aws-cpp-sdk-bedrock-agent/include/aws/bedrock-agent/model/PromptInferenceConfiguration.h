/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PromptModelInferenceConfiguration.h>
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
   * <p>Contains inference configurations for the prompt.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptInferenceConfiguration">AWS
   * API Reference</a></p>
   */
  class PromptInferenceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API PromptInferenceConfiguration() = default;
    AWS_BEDROCKAGENT_API PromptInferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptInferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains inference configurations for a text prompt.</p>
     */
    inline const PromptModelInferenceConfiguration& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = PromptModelInferenceConfiguration>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = PromptModelInferenceConfiguration>
    PromptInferenceConfiguration& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    PromptModelInferenceConfiguration m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
