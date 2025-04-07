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
    AWS_BEDROCKRUNTIME_API GuardrailRegexFilter() = default;
    AWS_BEDROCKRUNTIME_API GuardrailRegexFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailRegexFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The regex filter name.</p>
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
     * <p>The regesx filter match.</p>
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
     * <p>The regex query.</p>
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
     * <p>The region filter action.</p>
     */
    inline GuardrailSensitiveInformationPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailSensitiveInformationPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailRegexFilter& WithAction(GuardrailSensitiveInformationPolicyAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether custom regex entities that breach the guardrail
     * configuration are detected.</p>
     */
    inline bool GetDetected() const { return m_detected; }
    inline bool DetectedHasBeenSet() const { return m_detectedHasBeenSet; }
    inline void SetDetected(bool value) { m_detectedHasBeenSet = true; m_detected = value; }
    inline GuardrailRegexFilter& WithDetected(bool value) { SetDetected(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    GuardrailSensitiveInformationPolicyAction m_action{GuardrailSensitiveInformationPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    bool m_detected{false};
    bool m_detectedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
