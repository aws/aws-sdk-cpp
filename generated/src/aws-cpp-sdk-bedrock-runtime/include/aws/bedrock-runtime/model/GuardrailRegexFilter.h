/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailSensitiveInformationPolicyAction.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>A Regex filter configured in a guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailRegexFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailRegexFilter
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailRegexFilter();
    AWS_BEDROCKRUNTIME_API GuardrailRegexFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailRegexFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The regex filter name.</p>
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
     * <p>The regesx filter match.</p>
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
     * <p>The regex query.</p>
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

    ///@{
    /**
     * <p>The region filter action.</p>
     */
    inline const GuardrailSensitiveInformationPolicyAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailSensitiveInformationPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailSensitiveInformationPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailRegexFilter& WithAction(const GuardrailSensitiveInformationPolicyAction& value) { SetAction(value); return *this;}
    inline GuardrailRegexFilter& WithAction(GuardrailSensitiveInformationPolicyAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    GuardrailSensitiveInformationPolicyAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
