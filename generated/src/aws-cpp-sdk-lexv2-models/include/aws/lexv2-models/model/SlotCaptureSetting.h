/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
#include <aws/lexv2-models/model/DialogState.h>
#include <aws/lexv2-models/model/ConditionalSpecification.h>
#include <aws/lexv2-models/model/DialogCodeHookInvocationSetting.h>
#include <aws/lexv2-models/model/ElicitationCodeHookInvocationSetting.h>
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
   * <p>Settings used when Amazon Lex successfully captures a slot value from a
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotCaptureSetting">AWS
   * API Reference</a></p>
   */
  class SlotCaptureSetting
  {
  public:
    AWS_LEXMODELSV2_API SlotCaptureSetting() = default;
    AWS_LEXMODELSV2_API SlotCaptureSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotCaptureSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResponseSpecification& GetCaptureResponse() const { return m_captureResponse; }
    inline bool CaptureResponseHasBeenSet() const { return m_captureResponseHasBeenSet; }
    template<typename CaptureResponseT = ResponseSpecification>
    void SetCaptureResponse(CaptureResponseT&& value) { m_captureResponseHasBeenSet = true; m_captureResponse = std::forward<CaptureResponseT>(value); }
    template<typename CaptureResponseT = ResponseSpecification>
    SlotCaptureSetting& WithCaptureResponse(CaptureResponseT&& value) { SetCaptureResponse(std::forward<CaptureResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the next step that the bot runs when the slot value is captured
     * before the code hook times out.</p>
     */
    inline const DialogState& GetCaptureNextStep() const { return m_captureNextStep; }
    inline bool CaptureNextStepHasBeenSet() const { return m_captureNextStepHasBeenSet; }
    template<typename CaptureNextStepT = DialogState>
    void SetCaptureNextStep(CaptureNextStepT&& value) { m_captureNextStepHasBeenSet = true; m_captureNextStep = std::forward<CaptureNextStepT>(value); }
    template<typename CaptureNextStepT = DialogState>
    SlotCaptureSetting& WithCaptureNextStep(CaptureNextStepT&& value) { SetCaptureNextStep(std::forward<CaptureNextStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditional branches to evaluate after the slot value is
     * captured.</p>
     */
    inline const ConditionalSpecification& GetCaptureConditional() const { return m_captureConditional; }
    inline bool CaptureConditionalHasBeenSet() const { return m_captureConditionalHasBeenSet; }
    template<typename CaptureConditionalT = ConditionalSpecification>
    void SetCaptureConditional(CaptureConditionalT&& value) { m_captureConditionalHasBeenSet = true; m_captureConditional = std::forward<CaptureConditionalT>(value); }
    template<typename CaptureConditionalT = ConditionalSpecification>
    SlotCaptureSetting& WithCaptureConditional(CaptureConditionalT&& value) { SetCaptureConditional(std::forward<CaptureConditionalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseSpecification& GetFailureResponse() const { return m_failureResponse; }
    inline bool FailureResponseHasBeenSet() const { return m_failureResponseHasBeenSet; }
    template<typename FailureResponseT = ResponseSpecification>
    void SetFailureResponse(FailureResponseT&& value) { m_failureResponseHasBeenSet = true; m_failureResponse = std::forward<FailureResponseT>(value); }
    template<typename FailureResponseT = ResponseSpecification>
    SlotCaptureSetting& WithFailureResponse(FailureResponseT&& value) { SetFailureResponse(std::forward<FailureResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the next step that the bot runs when the slot value code is not
     * recognized.</p>
     */
    inline const DialogState& GetFailureNextStep() const { return m_failureNextStep; }
    inline bool FailureNextStepHasBeenSet() const { return m_failureNextStepHasBeenSet; }
    template<typename FailureNextStepT = DialogState>
    void SetFailureNextStep(FailureNextStepT&& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = std::forward<FailureNextStepT>(value); }
    template<typename FailureNextStepT = DialogState>
    SlotCaptureSetting& WithFailureNextStep(FailureNextStepT&& value) { SetFailureNextStep(std::forward<FailureNextStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditional branches to evaluate when the slot value isn't
     * captured.</p>
     */
    inline const ConditionalSpecification& GetFailureConditional() const { return m_failureConditional; }
    inline bool FailureConditionalHasBeenSet() const { return m_failureConditionalHasBeenSet; }
    template<typename FailureConditionalT = ConditionalSpecification>
    void SetFailureConditional(FailureConditionalT&& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = std::forward<FailureConditionalT>(value); }
    template<typename FailureConditionalT = ConditionalSpecification>
    SlotCaptureSetting& WithFailureConditional(FailureConditionalT&& value) { SetFailureConditional(std::forward<FailureConditionalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code hook called after Amazon Lex successfully captures a slot value.</p>
     */
    inline const DialogCodeHookInvocationSetting& GetCodeHook() const { return m_codeHook; }
    inline bool CodeHookHasBeenSet() const { return m_codeHookHasBeenSet; }
    template<typename CodeHookT = DialogCodeHookInvocationSetting>
    void SetCodeHook(CodeHookT&& value) { m_codeHookHasBeenSet = true; m_codeHook = std::forward<CodeHookT>(value); }
    template<typename CodeHookT = DialogCodeHookInvocationSetting>
    SlotCaptureSetting& WithCodeHook(CodeHookT&& value) { SetCodeHook(std::forward<CodeHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code hook called when Amazon Lex doesn't capture a slot value.</p>
     */
    inline const ElicitationCodeHookInvocationSetting& GetElicitationCodeHook() const { return m_elicitationCodeHook; }
    inline bool ElicitationCodeHookHasBeenSet() const { return m_elicitationCodeHookHasBeenSet; }
    template<typename ElicitationCodeHookT = ElicitationCodeHookInvocationSetting>
    void SetElicitationCodeHook(ElicitationCodeHookT&& value) { m_elicitationCodeHookHasBeenSet = true; m_elicitationCodeHook = std::forward<ElicitationCodeHookT>(value); }
    template<typename ElicitationCodeHookT = ElicitationCodeHookInvocationSetting>
    SlotCaptureSetting& WithElicitationCodeHook(ElicitationCodeHookT&& value) { SetElicitationCodeHook(std::forward<ElicitationCodeHookT>(value)); return *this;}
    ///@}
  private:

    ResponseSpecification m_captureResponse;
    bool m_captureResponseHasBeenSet = false;

    DialogState m_captureNextStep;
    bool m_captureNextStepHasBeenSet = false;

    ConditionalSpecification m_captureConditional;
    bool m_captureConditionalHasBeenSet = false;

    ResponseSpecification m_failureResponse;
    bool m_failureResponseHasBeenSet = false;

    DialogState m_failureNextStep;
    bool m_failureNextStepHasBeenSet = false;

    ConditionalSpecification m_failureConditional;
    bool m_failureConditionalHasBeenSet = false;

    DialogCodeHookInvocationSetting m_codeHook;
    bool m_codeHookHasBeenSet = false;

    ElicitationCodeHookInvocationSetting m_elicitationCodeHook;
    bool m_elicitationCodeHookHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
