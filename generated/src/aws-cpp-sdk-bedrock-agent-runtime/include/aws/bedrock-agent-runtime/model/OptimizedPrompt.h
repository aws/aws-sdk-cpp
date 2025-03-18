/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/TextPrompt.h>
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
   * <p>Contains information about the optimized prompt.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OptimizedPrompt">AWS
   * API Reference</a></p>
   */
  class OptimizedPrompt
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPrompt() = default;
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPrompt(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPrompt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the text in the prompt that was optimized.</p>
     */
    inline const TextPrompt& GetTextPrompt() const { return m_textPrompt; }
    inline bool TextPromptHasBeenSet() const { return m_textPromptHasBeenSet; }
    template<typename TextPromptT = TextPrompt>
    void SetTextPrompt(TextPromptT&& value) { m_textPromptHasBeenSet = true; m_textPrompt = std::forward<TextPromptT>(value); }
    template<typename TextPromptT = TextPrompt>
    OptimizedPrompt& WithTextPrompt(TextPromptT&& value) { SetTextPrompt(std::forward<TextPromptT>(value)); return *this;}
    ///@}
  private:

    TextPrompt m_textPrompt;
    bool m_textPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
