/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailContextualGroundingFilterType.h>
#include <aws/bedrock/model/GuardrailContextualGroundingAction.h>
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
   * <p>The filter configuration details for the guardrails contextual grounding
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContextualGroundingFilterConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContextualGroundingFilterConfig
  {
  public:
    AWS_BEDROCK_API GuardrailContextualGroundingFilterConfig() = default;
    AWS_BEDROCK_API GuardrailContextualGroundingFilterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContextualGroundingFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter details for the guardrails contextual grounding filter.</p>
     */
    inline GuardrailContextualGroundingFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailContextualGroundingFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailContextualGroundingFilterConfig& WithType(GuardrailContextualGroundingFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold details for the guardrails contextual grounding filter.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline GuardrailContextualGroundingFilterConfig& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action to take when content fails the contextual grounding
     * evaluation. Supported values include:</p> <ul> <li> <p> <code>BLOCK</code> –
     * Block the content and replace it with blocked messaging.</p> </li> <li> <p>
     * <code>NONE</code> – Take no action but return detection information in the trace
     * response.</p> </li> </ul>
     */
    inline GuardrailContextualGroundingAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(GuardrailContextualGroundingAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GuardrailContextualGroundingFilterConfig& WithAction(GuardrailContextualGroundingAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable contextual grounding evaluation. When disabled,
     * you aren't charged for the evaluation. The evaluation doesn't appear in the
     * response.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline GuardrailContextualGroundingFilterConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    GuardrailContextualGroundingFilterType m_type{GuardrailContextualGroundingFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;

    GuardrailContextualGroundingAction m_action{GuardrailContextualGroundingAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
