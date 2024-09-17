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
    AWS_BEDROCKRUNTIME_API GuardrailManagedWord();
    AWS_BEDROCKRUNTIME_API GuardrailManagedWord(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailManagedWord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The match for the managed word.</p>
     */
    inline const Aws::String& GetMatch() const{ return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    inline void SetMatch(const Aws::String& value) { m_matchHasBeenSet = true; m_match = value; }
    inline void SetMatch(Aws::String&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }
    inline void SetMatch(const char* value) { m_matchHasBeenSet = true; m_match.assign(value); }
    inline GuardrailManagedWord& WithMatch(const Aws::String& value) { SetMatch(value); return *this;}
    inline GuardrailManagedWord& WithMatch(Aws::String&& value) { SetMatch(std::move(value)); return *this;}
    inline GuardrailManagedWord& WithMatch(const char* value) { SetMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type for the managed word.</p>
     */
    inline const GuardrailManagedWordType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailManagedWordType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailManagedWordType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailManagedWord& WithType(const GuardrailManagedWordType& value) { SetType(value); return *this;}
    inline GuardrailManagedWord& WithType(GuardrailManagedWordType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action for the managed word.</p>
     */
    inline const GuardrailWordPolicyAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailWordPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailWordPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailManagedWord& WithAction(const GuardrailWordPolicyAction& value) { SetAction(value); return *this;}
    inline GuardrailManagedWord& WithAction(GuardrailWordPolicyAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    GuardrailManagedWordType m_type;
    bool m_typeHasBeenSet = false;

    GuardrailWordPolicyAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
