/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/PromptSpecification.h>
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
   * <p>Provides a prompt for making sure that the user is ready for the intent to be
   * fulfilled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentConfirmationSetting">AWS
   * API Reference</a></p>
   */
  class IntentConfirmationSetting
  {
  public:
    AWS_LEXMODELSV2_API IntentConfirmationSetting();
    AWS_LEXMODELSV2_API IntentConfirmationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentConfirmationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline const PromptSpecification& GetPromptSpecification() const{ return m_promptSpecification; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline bool PromptSpecificationHasBeenSet() const { return m_promptSpecificationHasBeenSet; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline void SetPromptSpecification(const PromptSpecification& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = value; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline void SetPromptSpecification(PromptSpecification&& value) { m_promptSpecificationHasBeenSet = true; m_promptSpecification = std::move(value); }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline IntentConfirmationSetting& WithPromptSpecification(const PromptSpecification& value) { SetPromptSpecification(value); return *this;}

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p>
     */
    inline IntentConfirmationSetting& WithPromptSpecification(PromptSpecification&& value) { SetPromptSpecification(std::move(value)); return *this;}


    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline const ResponseSpecification& GetDeclinationResponse() const{ return m_declinationResponse; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline bool DeclinationResponseHasBeenSet() const { return m_declinationResponseHasBeenSet; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline void SetDeclinationResponse(const ResponseSpecification& value) { m_declinationResponseHasBeenSet = true; m_declinationResponse = value; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline void SetDeclinationResponse(ResponseSpecification&& value) { m_declinationResponseHasBeenSet = true; m_declinationResponse = std::move(value); }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline IntentConfirmationSetting& WithDeclinationResponse(const ResponseSpecification& value) { SetDeclinationResponse(value); return *this;}

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>promptSpecification</code>, Amazon Lex responds with this response to
     * acknowledge that the intent was canceled. </p>
     */
    inline IntentConfirmationSetting& WithDeclinationResponse(ResponseSpecification&& value) { SetDeclinationResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the intent's confirmation is sent to the user. When this
     * field is false, confirmation and declination responses aren't sent. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Specifies whether the intent's confirmation is sent to the user. When this
     * field is false, confirmation and declination responses aren't sent. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Specifies whether the intent's confirmation is sent to the user. When this
     * field is false, confirmation and declination responses aren't sent. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Specifies whether the intent's confirmation is sent to the user. When this
     * field is false, confirmation and declination responses aren't sent. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline IntentConfirmationSetting& WithActive(bool value) { SetActive(value); return *this;}


    
    inline const ResponseSpecification& GetConfirmationResponse() const{ return m_confirmationResponse; }

    
    inline bool ConfirmationResponseHasBeenSet() const { return m_confirmationResponseHasBeenSet; }

    
    inline void SetConfirmationResponse(const ResponseSpecification& value) { m_confirmationResponseHasBeenSet = true; m_confirmationResponse = value; }

    
    inline void SetConfirmationResponse(ResponseSpecification&& value) { m_confirmationResponseHasBeenSet = true; m_confirmationResponse = std::move(value); }

    
    inline IntentConfirmationSetting& WithConfirmationResponse(const ResponseSpecification& value) { SetConfirmationResponse(value); return *this;}

    
    inline IntentConfirmationSetting& WithConfirmationResponse(ResponseSpecification&& value) { SetConfirmationResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies the next step that the bot executes when the customer confirms the
     * intent.</p>
     */
    inline const DialogState& GetConfirmationNextStep() const{ return m_confirmationNextStep; }

    /**
     * <p>Specifies the next step that the bot executes when the customer confirms the
     * intent.</p>
     */
    inline bool ConfirmationNextStepHasBeenSet() const { return m_confirmationNextStepHasBeenSet; }

    /**
     * <p>Specifies the next step that the bot executes when the customer confirms the
     * intent.</p>
     */
    inline void SetConfirmationNextStep(const DialogState& value) { m_confirmationNextStepHasBeenSet = true; m_confirmationNextStep = value; }

    /**
     * <p>Specifies the next step that the bot executes when the customer confirms the
     * intent.</p>
     */
    inline void SetConfirmationNextStep(DialogState&& value) { m_confirmationNextStepHasBeenSet = true; m_confirmationNextStep = std::move(value); }

    /**
     * <p>Specifies the next step that the bot executes when the customer confirms the
     * intent.</p>
     */
    inline IntentConfirmationSetting& WithConfirmationNextStep(const DialogState& value) { SetConfirmationNextStep(value); return *this;}

    /**
     * <p>Specifies the next step that the bot executes when the customer confirms the
     * intent.</p>
     */
    inline IntentConfirmationSetting& WithConfirmationNextStep(DialogState&& value) { SetConfirmationNextStep(std::move(value)); return *this;}


    /**
     * <p>A list of conditional branches to evaluate after the intent is closed.</p>
     */
    inline const ConditionalSpecification& GetConfirmationConditional() const{ return m_confirmationConditional; }

    /**
     * <p>A list of conditional branches to evaluate after the intent is closed.</p>
     */
    inline bool ConfirmationConditionalHasBeenSet() const { return m_confirmationConditionalHasBeenSet; }

    /**
     * <p>A list of conditional branches to evaluate after the intent is closed.</p>
     */
    inline void SetConfirmationConditional(const ConditionalSpecification& value) { m_confirmationConditionalHasBeenSet = true; m_confirmationConditional = value; }

    /**
     * <p>A list of conditional branches to evaluate after the intent is closed.</p>
     */
    inline void SetConfirmationConditional(ConditionalSpecification&& value) { m_confirmationConditionalHasBeenSet = true; m_confirmationConditional = std::move(value); }

    /**
     * <p>A list of conditional branches to evaluate after the intent is closed.</p>
     */
    inline IntentConfirmationSetting& WithConfirmationConditional(const ConditionalSpecification& value) { SetConfirmationConditional(value); return *this;}

    /**
     * <p>A list of conditional branches to evaluate after the intent is closed.</p>
     */
    inline IntentConfirmationSetting& WithConfirmationConditional(ConditionalSpecification&& value) { SetConfirmationConditional(std::move(value)); return *this;}


    /**
     * <p>Specifies the next step that the bot executes when the customer declines the
     * intent.</p>
     */
    inline const DialogState& GetDeclinationNextStep() const{ return m_declinationNextStep; }

    /**
     * <p>Specifies the next step that the bot executes when the customer declines the
     * intent.</p>
     */
    inline bool DeclinationNextStepHasBeenSet() const { return m_declinationNextStepHasBeenSet; }

    /**
     * <p>Specifies the next step that the bot executes when the customer declines the
     * intent.</p>
     */
    inline void SetDeclinationNextStep(const DialogState& value) { m_declinationNextStepHasBeenSet = true; m_declinationNextStep = value; }

    /**
     * <p>Specifies the next step that the bot executes when the customer declines the
     * intent.</p>
     */
    inline void SetDeclinationNextStep(DialogState&& value) { m_declinationNextStepHasBeenSet = true; m_declinationNextStep = std::move(value); }

    /**
     * <p>Specifies the next step that the bot executes when the customer declines the
     * intent.</p>
     */
    inline IntentConfirmationSetting& WithDeclinationNextStep(const DialogState& value) { SetDeclinationNextStep(value); return *this;}

    /**
     * <p>Specifies the next step that the bot executes when the customer declines the
     * intent.</p>
     */
    inline IntentConfirmationSetting& WithDeclinationNextStep(DialogState&& value) { SetDeclinationNextStep(std::move(value)); return *this;}


    /**
     * <p>A list of conditional branches to evaluate after the intent is declined.</p>
     */
    inline const ConditionalSpecification& GetDeclinationConditional() const{ return m_declinationConditional; }

    /**
     * <p>A list of conditional branches to evaluate after the intent is declined.</p>
     */
    inline bool DeclinationConditionalHasBeenSet() const { return m_declinationConditionalHasBeenSet; }

    /**
     * <p>A list of conditional branches to evaluate after the intent is declined.</p>
     */
    inline void SetDeclinationConditional(const ConditionalSpecification& value) { m_declinationConditionalHasBeenSet = true; m_declinationConditional = value; }

    /**
     * <p>A list of conditional branches to evaluate after the intent is declined.</p>
     */
    inline void SetDeclinationConditional(ConditionalSpecification&& value) { m_declinationConditionalHasBeenSet = true; m_declinationConditional = std::move(value); }

    /**
     * <p>A list of conditional branches to evaluate after the intent is declined.</p>
     */
    inline IntentConfirmationSetting& WithDeclinationConditional(const ConditionalSpecification& value) { SetDeclinationConditional(value); return *this;}

    /**
     * <p>A list of conditional branches to evaluate after the intent is declined.</p>
     */
    inline IntentConfirmationSetting& WithDeclinationConditional(ConditionalSpecification&& value) { SetDeclinationConditional(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetFailureResponse() const{ return m_failureResponse; }

    
    inline bool FailureResponseHasBeenSet() const { return m_failureResponseHasBeenSet; }

    
    inline void SetFailureResponse(const ResponseSpecification& value) { m_failureResponseHasBeenSet = true; m_failureResponse = value; }

    
    inline void SetFailureResponse(ResponseSpecification&& value) { m_failureResponseHasBeenSet = true; m_failureResponse = std::move(value); }

    
    inline IntentConfirmationSetting& WithFailureResponse(const ResponseSpecification& value) { SetFailureResponse(value); return *this;}

    
    inline IntentConfirmationSetting& WithFailureResponse(ResponseSpecification&& value) { SetFailureResponse(std::move(value)); return *this;}


    /**
     * <p>The next step to take in the conversation if the confirmation step fails.</p>
     */
    inline const DialogState& GetFailureNextStep() const{ return m_failureNextStep; }

    /**
     * <p>The next step to take in the conversation if the confirmation step fails.</p>
     */
    inline bool FailureNextStepHasBeenSet() const { return m_failureNextStepHasBeenSet; }

    /**
     * <p>The next step to take in the conversation if the confirmation step fails.</p>
     */
    inline void SetFailureNextStep(const DialogState& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = value; }

    /**
     * <p>The next step to take in the conversation if the confirmation step fails.</p>
     */
    inline void SetFailureNextStep(DialogState&& value) { m_failureNextStepHasBeenSet = true; m_failureNextStep = std::move(value); }

    /**
     * <p>The next step to take in the conversation if the confirmation step fails.</p>
     */
    inline IntentConfirmationSetting& WithFailureNextStep(const DialogState& value) { SetFailureNextStep(value); return *this;}

    /**
     * <p>The next step to take in the conversation if the confirmation step fails.</p>
     */
    inline IntentConfirmationSetting& WithFailureNextStep(DialogState&& value) { SetFailureNextStep(std::move(value)); return *this;}


    
    inline const ConditionalSpecification& GetFailureConditional() const{ return m_failureConditional; }

    
    inline bool FailureConditionalHasBeenSet() const { return m_failureConditionalHasBeenSet; }

    
    inline void SetFailureConditional(const ConditionalSpecification& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = value; }

    
    inline void SetFailureConditional(ConditionalSpecification&& value) { m_failureConditionalHasBeenSet = true; m_failureConditional = std::move(value); }

    
    inline IntentConfirmationSetting& WithFailureConditional(const ConditionalSpecification& value) { SetFailureConditional(value); return *this;}

    
    inline IntentConfirmationSetting& WithFailureConditional(ConditionalSpecification&& value) { SetFailureConditional(std::move(value)); return *this;}


    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> object associated with
     * intent's confirmation step. The dialog code hook is triggered based on these
     * invocation settings when the confirmation next step or declination next step or
     * failure next step is <code>InvokeDialogCodeHook</code>. </p>
     */
    inline const DialogCodeHookInvocationSetting& GetCodeHook() const{ return m_codeHook; }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> object associated with
     * intent's confirmation step. The dialog code hook is triggered based on these
     * invocation settings when the confirmation next step or declination next step or
     * failure next step is <code>InvokeDialogCodeHook</code>. </p>
     */
    inline bool CodeHookHasBeenSet() const { return m_codeHookHasBeenSet; }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> object associated with
     * intent's confirmation step. The dialog code hook is triggered based on these
     * invocation settings when the confirmation next step or declination next step or
     * failure next step is <code>InvokeDialogCodeHook</code>. </p>
     */
    inline void SetCodeHook(const DialogCodeHookInvocationSetting& value) { m_codeHookHasBeenSet = true; m_codeHook = value; }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> object associated with
     * intent's confirmation step. The dialog code hook is triggered based on these
     * invocation settings when the confirmation next step or declination next step or
     * failure next step is <code>InvokeDialogCodeHook</code>. </p>
     */
    inline void SetCodeHook(DialogCodeHookInvocationSetting&& value) { m_codeHookHasBeenSet = true; m_codeHook = std::move(value); }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> object associated with
     * intent's confirmation step. The dialog code hook is triggered based on these
     * invocation settings when the confirmation next step or declination next step or
     * failure next step is <code>InvokeDialogCodeHook</code>. </p>
     */
    inline IntentConfirmationSetting& WithCodeHook(const DialogCodeHookInvocationSetting& value) { SetCodeHook(value); return *this;}

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> object associated with
     * intent's confirmation step. The dialog code hook is triggered based on these
     * invocation settings when the confirmation next step or declination next step or
     * failure next step is <code>InvokeDialogCodeHook</code>. </p>
     */
    inline IntentConfirmationSetting& WithCodeHook(DialogCodeHookInvocationSetting&& value) { SetCodeHook(std::move(value)); return *this;}


    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> used when the code hook is
     * invoked during confirmation prompt retries.</p>
     */
    inline const ElicitationCodeHookInvocationSetting& GetElicitationCodeHook() const{ return m_elicitationCodeHook; }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> used when the code hook is
     * invoked during confirmation prompt retries.</p>
     */
    inline bool ElicitationCodeHookHasBeenSet() const { return m_elicitationCodeHookHasBeenSet; }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> used when the code hook is
     * invoked during confirmation prompt retries.</p>
     */
    inline void SetElicitationCodeHook(const ElicitationCodeHookInvocationSetting& value) { m_elicitationCodeHookHasBeenSet = true; m_elicitationCodeHook = value; }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> used when the code hook is
     * invoked during confirmation prompt retries.</p>
     */
    inline void SetElicitationCodeHook(ElicitationCodeHookInvocationSetting&& value) { m_elicitationCodeHookHasBeenSet = true; m_elicitationCodeHook = std::move(value); }

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> used when the code hook is
     * invoked during confirmation prompt retries.</p>
     */
    inline IntentConfirmationSetting& WithElicitationCodeHook(const ElicitationCodeHookInvocationSetting& value) { SetElicitationCodeHook(value); return *this;}

    /**
     * <p>The <code>DialogCodeHookInvocationSetting</code> used when the code hook is
     * invoked during confirmation prompt retries.</p>
     */
    inline IntentConfirmationSetting& WithElicitationCodeHook(ElicitationCodeHookInvocationSetting&& value) { SetElicitationCodeHook(std::move(value)); return *this;}

  private:

    PromptSpecification m_promptSpecification;
    bool m_promptSpecificationHasBeenSet = false;

    ResponseSpecification m_declinationResponse;
    bool m_declinationResponseHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    ResponseSpecification m_confirmationResponse;
    bool m_confirmationResponseHasBeenSet = false;

    DialogState m_confirmationNextStep;
    bool m_confirmationNextStepHasBeenSet = false;

    ConditionalSpecification m_confirmationConditional;
    bool m_confirmationConditionalHasBeenSet = false;

    DialogState m_declinationNextStep;
    bool m_declinationNextStepHasBeenSet = false;

    ConditionalSpecification m_declinationConditional;
    bool m_declinationConditionalHasBeenSet = false;

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
