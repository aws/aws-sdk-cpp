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
    AWS_LEXMODELSV2_API SlotCaptureSetting();
    AWS_LEXMODELSV2_API SlotCaptureSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotCaptureSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResponseSpecification& GetCaptureResponse() const{ return m_captureResponse; }

    
    inline bool CaptureResponseHasBeenSet() const { return m_captureResponseHasBeenSet; }

    
    inline void SetCaptureResponse(const ResponseSpecification& value) { m_captureResponseHasBeenSet = true; m_captureResponse = value; }

    
    inline void SetCaptureResponse(ResponseSpecification&& value) { m_captureResponseHasBeenSet = true; m_captureResponse = std::move(value); }

    
    inline SlotCaptureSetting& WithCaptureResponse(const ResponseSpecification& value) { SetCaptureResponse(value); return *this;}

    
    inline SlotCaptureSetting& WithCaptureResponse(ResponseSpecification&& value) { SetCaptureResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies the next step that the bot runs when the slot value is captured
     * before the code hook times out.</p>
     */
    inline const DialogState& GetCaptureNextStep() const{ return m_captureNextStep; }

    /**
     * <p>Specifies the next step that the bot runs when the slot value is captured
     * before the code hook times out.</p>
     */
    inline bool CaptureNextStepHasBeenSet() const { return m_captureNextStepHasBeenSet; }

    /**
     * <p>Specifies the next step that the bot runs when the slot value is captured
     * before the code hook times out.</p>
     */
    inline void SetCaptureNextStep(const DialogState& value) { m_captureNextStepHasBeenSet = true; m_captureNextStep = value; }

    /**
     * <p>Specifies the next step that the bot runs when the slot value is captured
     * before the code hook times out.</p>
     */
    inline void SetCaptureNextStep(DialogState&& value) { m_captureNextStepHasBeenSet = true; m_captureNextStep = std::move(value); }

    /**
     * <p>Specifies the next step that the bot runs when the slot value is captured
     * before the code hook times out.</p>
     */
    inline SlotCaptureSetting& WithCaptureNextStep(const DialogState& value) { SetCaptureNextStep(value); return *this;}

    /**
     * <p>Specifies the next step that the bot runs when the slot value is captured
     * before the code hook times out.</p>
     */
    inline SlotCaptureSetting& WithCaptureNextStep(DialogState&& value) { SetCaptureNextStep(std::move(value)); return *this;}


    /**
     * <p>A list of conditional branches to evaluate after the slot value is
     * captured.</p>
     */
    inline const ConditionalSpecification& GetCaptureConditional() const{ return m_captureConditional; }

    /**
     * <p>A list of conditional branches to evaluate after the slot value is
     * captured.</p>
     */
    inline bool CaptureConditionalHasBeenSet() const { return m_captureConditionalHasBeenSet; }

    /**
     * <p>A list of conditional branches to evaluate after the slot value is
     * captured.</p>
     */
    inline void SetCaptureConditional(const ConditionalSpecification& value) { m_captureConditionalHasBeenSet = true; m_captureConditional = value; }

    /**
     * <p>A list of conditional branches to evaluate after the slot value is
     * captured.</p>
     */
    inline void SetCaptureConditional(ConditionalSpecification&& value) { m_captureConditionalHasBeenSet = true; m_captureConditional = std::move(value); }

    /**
     * <p>A list of conditional branches to evaluate after the slot value is
     * captured.</p>
     */
    inline SlotCaptureSetting& WithCaptureConditional(const ConditionalSpecification& value) { SetCaptureConditional(value); return *this;}

    /**
     * <p>A list of conditional branches to evaluate after the slot value is
     * captured.</p>
     */
    inline SlotCaptureSetting& WithCaptureConditional(ConditionalSpecification&& value) { SetCaptureConditional(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetFailureResponse() const{ return m_failureResponse; }

    
    inline bool FailureResponseHasBeenSet() const { return m_failureResponseHasBeenSet; }

    
    inline void SetFailureResponse(const ResponseSpecification& value) { m_failureResponseHasBeenSet = true; m_failureResponse = value; }

    
    inline void SetFailureResponse(ResponseSpecification&& value) { m_failureResponseHasBeenSet = true; m_failureResponse = std::move(value); }

    
    inline SlotCaptureSetting& WithFailureResponse(const ResponseSpecification& value) { SetFailureResponse(value); return *this;}

    
    inline SlotCaptureSetting& WithFailureResponse(ResponseSpecification&& value) { SetFailureResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies the next step that the bot runs when the slot value code is not
     * recognized.</p>
     */
    inline const DialogState& GetFailureNextStep() const{ return m_failureNextStep; }

    /**
     * <p>Specifies the next step that the bot runs when the slot value code is not
     * recognized.</p>
     */
    inline bool FailureNextStepHasBeenSet() const { return m_failureNextStepHasBeenSet; }

    /**
     * <p>Specifies the next step that the bot runs when the slot value code is not
     * recognized.</p>
     */
    inline void SetFailureNextStep(const DialogState& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = value; }

    /**
     * <p>Specifies the next step that the bot runs when the slot value code is not
     * recognized.</p>
     */
    inline void SetFailureNextStep(DialogState&& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = std::move(value); }

    /**
     * <p>Specifies the next step that the bot runs when the slot value code is not
     * recognized.</p>
     */
    inline SlotCaptureSetting& WithFailureNextStep(const DialogState& value) { SetFailureNextStep(value); return *this;}

    /**
     * <p>Specifies the next step that the bot runs when the slot value code is not
     * recognized.</p>
     */
    inline SlotCaptureSetting& WithFailureNextStep(DialogState&& value) { SetFailureNextStep(std::move(value)); return *this;}


    /**
     * <p>A list of conditional branches to evaluate when the slot value isn't
     * captured.</p>
     */
    inline const ConditionalSpecification& GetFailureConditional() const{ return m_failureConditional; }

    /**
     * <p>A list of conditional branches to evaluate when the slot value isn't
     * captured.</p>
     */
    inline bool FailureConditionalHasBeenSet() const { return m_failureConditionalHasBeenSet; }

    /**
     * <p>A list of conditional branches to evaluate when the slot value isn't
     * captured.</p>
     */
    inline void SetFailureConditional(const ConditionalSpecification& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = value; }

    /**
     * <p>A list of conditional branches to evaluate when the slot value isn't
     * captured.</p>
     */
    inline void SetFailureConditional(ConditionalSpecification&& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = std::move(value); }

    /**
     * <p>A list of conditional branches to evaluate when the slot value isn't
     * captured.</p>
     */
    inline SlotCaptureSetting& WithFailureConditional(const ConditionalSpecification& value) { SetFailureConditional(value); return *this;}

    /**
     * <p>A list of conditional branches to evaluate when the slot value isn't
     * captured.</p>
     */
    inline SlotCaptureSetting& WithFailureConditional(ConditionalSpecification&& value) { SetFailureConditional(std::move(value)); return *this;}


    /**
     * <p>Code hook called after Amazon Lex successfully captures a slot value.</p>
     */
    inline const DialogCodeHookInvocationSetting& GetCodeHook() const{ return m_codeHook; }

    /**
     * <p>Code hook called after Amazon Lex successfully captures a slot value.</p>
     */
    inline bool CodeHookHasBeenSet() const { return m_codeHookHasBeenSet; }

    /**
     * <p>Code hook called after Amazon Lex successfully captures a slot value.</p>
     */
    inline void SetCodeHook(const DialogCodeHookInvocationSetting& value) { m_codeHookHasBeenSet = true; m_codeHook = value; }

    /**
     * <p>Code hook called after Amazon Lex successfully captures a slot value.</p>
     */
    inline void SetCodeHook(DialogCodeHookInvocationSetting&& value) { m_codeHookHasBeenSet = true; m_codeHook = std::move(value); }

    /**
     * <p>Code hook called after Amazon Lex successfully captures a slot value.</p>
     */
    inline SlotCaptureSetting& WithCodeHook(const DialogCodeHookInvocationSetting& value) { SetCodeHook(value); return *this;}

    /**
     * <p>Code hook called after Amazon Lex successfully captures a slot value.</p>
     */
    inline SlotCaptureSetting& WithCodeHook(DialogCodeHookInvocationSetting&& value) { SetCodeHook(std::move(value)); return *this;}


    /**
     * <p>Code hook called when Amazon Lex doesn't capture a slot value.</p>
     */
    inline const ElicitationCodeHookInvocationSetting& GetElicitationCodeHook() const{ return m_elicitationCodeHook; }

    /**
     * <p>Code hook called when Amazon Lex doesn't capture a slot value.</p>
     */
    inline bool ElicitationCodeHookHasBeenSet() const { return m_elicitationCodeHookHasBeenSet; }

    /**
     * <p>Code hook called when Amazon Lex doesn't capture a slot value.</p>
     */
    inline void SetElicitationCodeHook(const ElicitationCodeHookInvocationSetting& value) { m_elicitationCodeHookHasBeenSet = true; m_elicitationCodeHook = value; }

    /**
     * <p>Code hook called when Amazon Lex doesn't capture a slot value.</p>
     */
    inline void SetElicitationCodeHook(ElicitationCodeHookInvocationSetting&& value) { m_elicitationCodeHookHasBeenSet = true; m_elicitationCodeHook = std::move(value); }

    /**
     * <p>Code hook called when Amazon Lex doesn't capture a slot value.</p>
     */
    inline SlotCaptureSetting& WithElicitationCodeHook(const ElicitationCodeHookInvocationSetting& value) { SetElicitationCodeHook(value); return *this;}

    /**
     * <p>Code hook called when Amazon Lex doesn't capture a slot value.</p>
     */
    inline SlotCaptureSetting& WithElicitationCodeHook(ElicitationCodeHookInvocationSetting&& value) { SetElicitationCodeHook(std::move(value)); return *this;}

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
