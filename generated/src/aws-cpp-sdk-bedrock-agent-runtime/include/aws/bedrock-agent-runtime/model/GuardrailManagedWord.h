/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailWordPolicyAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/GuardrailManagedWordType.h>
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
   * <p>The managed word details for the filter in the Guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailManagedWord">AWS
   * API Reference</a></p>
   */
  class GuardrailManagedWord
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailManagedWord() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailManagedWord(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailManagedWord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailWordPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailWordPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailManagedWord& WithAction(GuardrailWordPolicyAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
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
     * <p>The type details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWordType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailManagedWordType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailManagedWord& WithType(GuardrailManagedWordType value) { SetType(value); return *this;}
    ///@}
  private:

    GuardrailWordPolicyAction m_action{GuardrailWordPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    GuardrailManagedWordType m_type{GuardrailManagedWordType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
