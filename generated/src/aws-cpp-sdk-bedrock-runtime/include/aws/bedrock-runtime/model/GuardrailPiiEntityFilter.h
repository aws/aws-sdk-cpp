/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailPiiEntityType.h>
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
   * <p>A Personally Identifiable Information (PII) entity configured in a
   * guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailPiiEntityFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailPiiEntityFilter
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailPiiEntityFilter() = default;
    AWS_BEDROCKRUNTIME_API GuardrailPiiEntityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailPiiEntityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The PII entity filter match.</p>
     */
    inline const Aws::String& GetMatch() const { return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    template<typename MatchT = Aws::String>
    void SetMatch(MatchT&& value) { m_matchHasBeenSet = true; m_match = std::forward<MatchT>(value); }
    template<typename MatchT = Aws::String>
    GuardrailPiiEntityFilter& WithMatch(MatchT&& value) { SetMatch(std::forward<MatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PII entity filter type.</p>
     */
    inline GuardrailPiiEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailPiiEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailPiiEntityFilter& WithType(GuardrailPiiEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PII entity filter action.</p>
     */
    inline GuardrailSensitiveInformationPolicyAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailSensitiveInformationPolicyAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailPiiEntityFilter& WithAction(GuardrailSensitiveInformationPolicyAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether personally identifiable information (PII) that breaches the
     * guardrail configuration is detected.</p>
     */
    inline bool GetDetected() const { return m_detected; }
    inline bool DetectedHasBeenSet() const { return m_detectedHasBeenSet; }
    inline void SetDetected(bool value) { m_detectedHasBeenSet = true; m_detected = value; }
    inline GuardrailPiiEntityFilter& WithDetected(bool value) { SetDetected(value); return *this;}
    ///@}
  private:

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    GuardrailPiiEntityType m_type{GuardrailPiiEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailSensitiveInformationPolicyAction m_action{GuardrailSensitiveInformationPolicyAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    bool m_detected{false};
    bool m_detectedHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
