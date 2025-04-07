/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailManagedWordType.h>
#include <aws/bedrock-runtime/model/GuardrailWordPolicyAction.h>
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
   * <p>A managed word configured in a guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailManagedWord">AWS
   * API Reference</a></p>
   */
  class GuardrailManagedWord
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailManagedWord() = default;
    AWS_BEDROCKRUNTIME_API GuardrailManagedWord(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailManagedWord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The match for the managed word.</p>
     */
    inline const Aws::String& GetMatch() const { return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    template<typename MatchT = Aws::String>
    void SetMatch(MatchT&& value) { m_matchHasBeenSet = true; m_match = std::forward<MatchT>(value); }
    template<typename MatchT = Aws::String>
    GuardrailManagedWord& WithMatch(MatchT&& value) { SetMatch(std::forward<MatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type for the managed word.</p>
     */
    inline GuardrailManagedWordType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailManagedWordType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailManagedWord& WithType(GuardrailManagedWordType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for the managed word.</p>
     */
    inline GuardrailWordPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailWordPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailManagedWord& WithAction(GuardrailWordPolicyAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether managed word content that breaches the guardrail
     * configuration is detected.</p>
     */
    inline bool GetDetected() const { return m_detected; }
    inline bool DetectedHasBeenSet() const { return m_detectedHasBeenSet; }
    inline void SetDetected(bool value) { m_detectedHasBeenSet = true; m_detected = value; }
    inline GuardrailManagedWord& WithDetected(bool value) { SetDetected(value); return *this;}
    ///@}
  private:

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    GuardrailManagedWordType m_type{GuardrailManagedWordType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailWordPolicyAction m_action{GuardrailWordPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    bool m_detected{false};
    bool m_detectedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
