/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GuardrailSensitiveInformationPolicyAction.h>
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
   * <p>The details for the regex filter used in the Guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailRegexFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailRegexFilter
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailRegexFilter() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailRegexFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailRegexFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name details for the regex filter used in the Guardrail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GuardrailRegexFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regex details for the regex filter used in the Guardrail.</p>
     */
    inline const Aws::String& GetRegex() const { return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    template<typename RegexT = Aws::String>
    void SetRegex(RegexT&& value) { m_regexHasBeenSet = true; m_regex = std::forward<RegexT>(value); }
    template<typename RegexT = Aws::String>
    GuardrailRegexFilter& WithRegex(RegexT&& value) { SetRegex(std::forward<RegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match details for the regex filter used in the Guardrail.</p>
     */
    inline const Aws::String& GetMatch() const { return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    template<typename MatchT = Aws::String>
    void SetMatch(MatchT&& value) { m_matchHasBeenSet = true; m_match = std::forward<MatchT>(value); }
    template<typename MatchT = Aws::String>
    GuardrailRegexFilter& WithMatch(MatchT&& value) { SetMatch(std::forward<MatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action details for the regex filter used in the Guardrail.</p>
     */
    inline GuardrailSensitiveInformationPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailSensitiveInformationPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailRegexFilter& WithAction(GuardrailSensitiveInformationPolicyAction value) { SetAction(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    GuardrailSensitiveInformationPolicyAction m_action{GuardrailSensitiveInformationPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
