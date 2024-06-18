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
    AWS_BEDROCKRUNTIME_API GuardrailPiiEntityFilter();
    AWS_BEDROCKRUNTIME_API GuardrailPiiEntityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailPiiEntityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The PII entity filter match.</p>
     */
    inline const Aws::String& GetMatch() const{ return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    inline void SetMatch(const Aws::String& value) { m_matchHasBeenSet = true; m_match = value; }
    inline void SetMatch(Aws::String&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }
    inline void SetMatch(const char* value) { m_matchHasBeenSet = true; m_match.assign(value); }
    inline GuardrailPiiEntityFilter& WithMatch(const Aws::String& value) { SetMatch(value); return *this;}
    inline GuardrailPiiEntityFilter& WithMatch(Aws::String&& value) { SetMatch(std::move(value)); return *this;}
    inline GuardrailPiiEntityFilter& WithMatch(const char* value) { SetMatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PII entity filter type.</p>
     */
    inline const GuardrailPiiEntityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailPiiEntityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailPiiEntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailPiiEntityFilter& WithType(const GuardrailPiiEntityType& value) { SetType(value); return *this;}
    inline GuardrailPiiEntityFilter& WithType(GuardrailPiiEntityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PII entity filter action.</p>
     */
    inline const GuardrailSensitiveInformationPolicyAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const GuardrailSensitiveInformationPolicyAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(GuardrailSensitiveInformationPolicyAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline GuardrailPiiEntityFilter& WithAction(const GuardrailSensitiveInformationPolicyAction& value) { SetAction(value); return *this;}
    inline GuardrailPiiEntityFilter& WithAction(GuardrailSensitiveInformationPolicyAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_match;
    bool m_matchHasBeenSet = false;

    GuardrailPiiEntityType m_type;
    bool m_typeHasBeenSet = false;

    GuardrailSensitiveInformationPolicyAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
