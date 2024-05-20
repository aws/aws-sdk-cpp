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
    AWS_BEDROCKAGENTRUNTIME_API GuardrailManagedWord();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailManagedWord(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailManagedWord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action details for the managed word filter in the Guardrail.</p>
     */
    inline const GuardrailWordPolicyAction& GetAction() const{ return m_action; }

    /**
     * <p>The action details for the managed word filter in the Guardrail.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action details for the managed word filter in the Guardrail.</p>
     */
    inline void SetAction(const GuardrailWordPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action details for the managed word filter in the Guardrail.</p>
     */
    inline void SetAction(GuardrailWordPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWord& WithAction(const GuardrailWordPolicyAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWord& WithAction(GuardrailWordPolicyAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline const Aws::String& GetMatch() const{ return m_match; }

    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline void SetMatch(const Aws::String& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline void SetMatch(Aws::String&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline void SetMatch(const char* value) { m_matchHasBeenSet = true; m_match.assign(value); }

    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWord& WithMatch(const Aws::String& value) { SetMatch(value); return *this;}

    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWord& WithMatch(Aws::String&& value) { SetMatch(std::move(value)); return *this;}

    /**
     * <p>The match details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWord& WithMatch(const char* value) { SetMatch(value); return *this;}


    /**
     * <p>The type details for the managed word filter in the Guardrail.</p>
     */
    inline const GuardrailManagedWordType& GetType() const{ return m_type; }

    /**
     * <p>The type details for the managed word filter in the Guardrail.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type details for the managed word filter in the Guardrail.</p>
     */
    inline void SetType(const GuardrailManagedWordType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type details for the managed word filter in the Guardrail.</p>
     */
    inline void SetType(GuardrailManagedWordType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWord& WithType(const GuardrailManagedWordType& value) { SetType(value); return *this;}

    /**
     * <p>The type details for the managed word filter in the Guardrail.</p>
     */
    inline GuardrailManagedWord& WithType(GuardrailManagedWordType&& value) { SetType(std::move(value)); return *this;}

  private:

    GuardrailWordPolicyAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    GuardrailManagedWordType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
