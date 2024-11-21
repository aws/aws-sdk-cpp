/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/OptimizedPrompt.h>
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
   * <p>An event in which the prompt was optimized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OptimizedPromptEvent">AWS
   * API Reference</a></p>
   */
  class OptimizedPromptEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptEvent();
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API OptimizedPromptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the optimized prompt.</p>
     */
    inline const OptimizedPrompt& GetOptimizedPrompt() const{ return m_optimizedPrompt; }
    inline bool OptimizedPromptHasBeenSet() const { return m_optimizedPromptHasBeenSet; }
    inline void SetOptimizedPrompt(const OptimizedPrompt& value) { m_optimizedPromptHasBeenSet = true; m_optimizedPrompt = value; }
    inline void SetOptimizedPrompt(OptimizedPrompt&& value) { m_optimizedPromptHasBeenSet = true; m_optimizedPrompt = std::move(value); }
    inline OptimizedPromptEvent& WithOptimizedPrompt(const OptimizedPrompt& value) { SetOptimizedPrompt(value); return *this;}
    inline OptimizedPromptEvent& WithOptimizedPrompt(OptimizedPrompt&& value) { SetOptimizedPrompt(std::move(value)); return *this;}
    ///@}
  private:

    OptimizedPrompt m_optimizedPrompt;
    bool m_optimizedPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
