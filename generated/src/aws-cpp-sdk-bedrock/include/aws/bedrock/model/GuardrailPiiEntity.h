/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailPiiEntityType.h>
#include <aws/bedrock/model/GuardrailSensitiveInformationAction.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The PII entity configured for the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailPiiEntity">AWS
   * API Reference</a></p>
   */
  class GuardrailPiiEntity
  {
  public:
    AWS_BEDROCK_API GuardrailPiiEntity() = default;
    AWS_BEDROCK_API GuardrailPiiEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailPiiEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of PII entity. For example, Social Security Number.</p>
     */
    inline GuardrailPiiEntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailPiiEntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailPiiEntity& WithType(GuardrailPiiEntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured guardrail action when PII entity is detected.</p>
     */
    inline GuardrailSensitiveInformationAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailSensitiveInformationAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailPiiEntity& WithAction(GuardrailSensitiveInformationAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when harmful content is detected in the input. Supported
     * values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the content and
     * replace it with blocked messaging.</p> </li> <li> <p> <code>ANONYMIZE</code> –
     * Mask the content and replace it with identifier tags.</p> </li> <li> <p>
     * <code>NONE</code> – Take no action but return detection information in the trace
     * response.</p> </li> </ul>
     */
    inline GuardrailSensitiveInformationAction GetInputAction() const { return m_inputAction; }
    inline bool InputActionHasBeenSet() const { return m_inputActionHasBeenSet; }
    inline void SetInputAction(GuardrailSensitiveInformationAction value) { m_inputActionHasBeenSet = true; m_inputAction = value; }
    inline GuardrailPiiEntity& WithInputAction(GuardrailSensitiveInformationAction value) { SetInputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when harmful content is detected in the output. Supported
     * values include:</p> <ul> <li> <p> <code>BLOCK</code> – Block the content and
     * replace it with blocked messaging.</p> </li> <li> <p> <code>ANONYMIZE</code> –
     * Mask the content and replace it with identifier tags.</p> </li> <li> <p>
     * <code>NONE</code> – Take no action but return detection information in the trace
     * response.</p> </li> </ul>
     */
    inline GuardrailSensitiveInformationAction GetOutputAction() const { return m_outputAction; }
    inline bool OutputActionHasBeenSet() const { return m_outputActionHasBeenSet; }
    inline void SetOutputAction(GuardrailSensitiveInformationAction value) { m_outputActionHasBeenSet = true; m_outputAction = value; }
    inline GuardrailPiiEntity& WithOutputAction(GuardrailSensitiveInformationAction value) { SetOutputAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether guardrail evaluation is enabled on the input. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetInputEnabled() const { return m_inputEnabled; }
    inline bool InputEnabledHasBeenSet() const { return m_inputEnabledHasBeenSet; }
    inline void SetInputEnabled(bool value) { m_inputEnabledHasBeenSet = true; m_inputEnabled = value; }
    inline GuardrailPiiEntity& WithInputEnabled(bool value) { SetInputEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether guardrail evaluation is enabled on the output. When
     * disabled, you aren't charged for the evaluation. The evaluation doesn't appear
     * in the response.</p>
     */
    inline bool GetOutputEnabled() const { return m_outputEnabled; }
    inline bool OutputEnabledHasBeenSet() const { return m_outputEnabledHasBeenSet; }
    inline void SetOutputEnabled(bool value) { m_outputEnabledHasBeenSet = true; m_outputEnabled = value; }
    inline GuardrailPiiEntity& WithOutputEnabled(bool value) { SetOutputEnabled(value); return *this;}
    ///@}
  private:

    GuardrailPiiEntityType m_type{GuardrailPiiEntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    GuardrailSensitiveInformationAction m_action{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    GuardrailSensitiveInformationAction m_inputAction{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_inputActionHasBeenSet = false;

    GuardrailSensitiveInformationAction m_outputAction{GuardrailSensitiveInformationAction::NOT_SET};
    bool m_outputActionHasBeenSet = false;

    bool m_inputEnabled{false};
    bool m_inputEnabledHasBeenSet = false;

    bool m_outputEnabled{false};
    bool m_outputEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
