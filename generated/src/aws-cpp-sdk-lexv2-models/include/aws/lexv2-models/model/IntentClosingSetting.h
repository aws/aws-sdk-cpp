/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
#include <aws/lexv2-models/model/DialogState.h>
#include <aws/lexv2-models/model/ConditionalSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides a statement the Amazon Lex conveys to the user when the intent is
   * successfully fulfilled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentClosingSetting">AWS
   * API Reference</a></p>
   */
  class IntentClosingSetting
  {
  public:
    AWS_LEXMODELSV2_API IntentClosingSetting() = default;
    AWS_LEXMODELSV2_API IntentClosingSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentClosingSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The response that Amazon Lex sends to the user when the intent is
     * complete.</p>
     */
    inline const ResponseSpecification& GetClosingResponse() const { return m_closingResponse; }
    inline bool ClosingResponseHasBeenSet() const { return m_closingResponseHasBeenSet; }
    template<typename ClosingResponseT = ResponseSpecification>
    void SetClosingResponse(ClosingResponseT&& value) { m_closingResponseHasBeenSet = true; m_closingResponse = std::forward<ClosingResponseT>(value); }
    template<typename ClosingResponseT = ResponseSpecification>
    IntentClosingSetting& WithClosingResponse(ClosingResponseT&& value) { SetClosingResponse(std::forward<ClosingResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an intent's closing response is used. When this field is
     * false, the closing response isn't sent to the user. If the <code>active</code>
     * field isn't specified, the default is true.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline IntentClosingSetting& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the next step that the bot executes after playing the intent's
     * closing response.</p>
     */
    inline const DialogState& GetNextStep() const { return m_nextStep; }
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }
    template<typename NextStepT = DialogState>
    void SetNextStep(NextStepT&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::forward<NextStepT>(value); }
    template<typename NextStepT = DialogState>
    IntentClosingSetting& WithNextStep(NextStepT&& value) { SetNextStep(std::forward<NextStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditional branches associated with the intent's closing response.
     * These branches are executed when the <code>nextStep</code> attribute is set to
     * <code>EvalutateConditional</code>.</p>
     */
    inline const ConditionalSpecification& GetConditional() const { return m_conditional; }
    inline bool ConditionalHasBeenSet() const { return m_conditionalHasBeenSet; }
    template<typename ConditionalT = ConditionalSpecification>
    void SetConditional(ConditionalT&& value) { m_conditionalHasBeenSet = true; m_conditional = std::forward<ConditionalT>(value); }
    template<typename ConditionalT = ConditionalSpecification>
    IntentClosingSetting& WithConditional(ConditionalT&& value) { SetConditional(std::forward<ConditionalT>(value)); return *this;}
    ///@}
  private:

    ResponseSpecification m_closingResponse;
    bool m_closingResponseHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    DialogState m_nextStep;
    bool m_nextStepHasBeenSet = false;

    ConditionalSpecification m_conditional;
    bool m_conditionalHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
