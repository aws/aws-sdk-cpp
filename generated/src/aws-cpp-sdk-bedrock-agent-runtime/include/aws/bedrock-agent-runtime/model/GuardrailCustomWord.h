/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailWordPolicyAction.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The custom word details for the filter in the Guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailCustomWord">AWS
   * API Reference</a></p>
   */
  class GuardrailCustomWord
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailCustomWord();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailCustomWord(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailCustomWord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action details for the custom word filter in the Guardrail.</p>
     */
    inline const GuardrailWordPolicyAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailWordPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailWordPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailCustomWord& WithAction(const GuardrailWordPolicyAction& value) { SetAction(value); return *this;}
    inline GuardrailCustomWord& WithAction(GuardrailWordPolicyAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match details for the custom word filter in the Guardrail.</p>
     */
    inline const Aws::String& GetMatch() const{ return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    inline void SetMatch(const Aws::String& value) { m_matchHasBeenSet = true; m_match = value; }
    inline void SetMatch(Aws::String&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }
    inline void SetMatch(const char* value) { m_matchHasBeenSet = true; m_match.assign(value); }
    inline GuardrailCustomWord& WithMatch(const Aws::String& value) { SetMatch(value); return *this;}
    inline GuardrailCustomWord& WithMatch(Aws::String&& value) { SetMatch(std::move(value)); return *this;}
    inline GuardrailCustomWord& WithMatch(const char* value) { SetMatch(value); return *this;}
    ///@}
  private:

    GuardrailWordPolicyAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_match;
    bool m_matchHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
