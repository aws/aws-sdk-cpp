/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailSensitiveInformationPolicyAction.h>
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
   * <p>The details for the regex filter used in the Guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailRegexFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailRegexFilter
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailRegexFilter();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailRegexFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailRegexFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action details for the regex filter used in the Guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicyAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailSensitiveInformationPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailSensitiveInformationPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailRegexFilter& WithAction(const GuardrailSensitiveInformationPolicyAction& value) { SetAction(value); return *this;}
    inline GuardrailRegexFilter& WithAction(GuardrailSensitiveInformationPolicyAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match details for the regex filter used in the Guardrail.</p>
     */
    inline const Aws::String& GetMatch() const{ return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    inline void SetMatch(const Aws::String& value) { m_matchHasBeenSet = true; m_match = value; }
    inline void SetMatch(Aws::String&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }
    inline void SetMatch(const char* value) { m_matchHasBeenSet = true; m_match.assign(value); }
    inline GuardrailRegexFilter& WithMatch(const Aws::String& value) { SetMatch(value); return *this;}
    inline GuardrailRegexFilter& WithMatch(Aws::String&& value) { SetMatch(std::move(value)); return *this;}
    inline GuardrailRegexFilter& WithMatch(const char* value) { SetMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name details for the regex filter used in the Guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GuardrailRegexFilter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GuardrailRegexFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GuardrailRegexFilter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regex details for the regex filter used in the Guardrail.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }
    inline GuardrailRegexFilter& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}
    inline GuardrailRegexFilter& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}
    inline GuardrailRegexFilter& WithRegex(const char* value) { SetRegex(value); return *this;}
    ///@}
  private:

    GuardrailSensitiveInformationPolicyAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
