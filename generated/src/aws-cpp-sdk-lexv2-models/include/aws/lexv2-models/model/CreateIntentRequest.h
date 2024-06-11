/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/DialogCodeHookSettings.h>
#include <aws/lexv2-models/model/FulfillmentCodeHookSettings.h>
#include <aws/lexv2-models/model/IntentConfirmationSetting.h>
#include <aws/lexv2-models/model/IntentClosingSetting.h>
#include <aws/lexv2-models/model/KendraConfiguration.h>
#include <aws/lexv2-models/model/InitialResponseSetting.h>
#include <aws/lexv2-models/model/QnAIntentConfiguration.h>
#include <aws/lexv2-models/model/SampleUtterance.h>
#include <aws/lexv2-models/model/InputContext.h>
#include <aws/lexv2-models/model/OutputContext.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateIntentRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateIntentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntent"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }
    inline CreateIntentRequest& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}
    inline CreateIntentRequest& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}
    inline CreateIntentRequest& WithIntentName(const char* value) { SetIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateIntentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIntentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIntentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = value; }
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::move(value); }
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature.assign(value); }
    inline CreateIntentRequest& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}
    inline CreateIntentRequest& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}
    inline CreateIntentRequest& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }
    inline CreateIntentRequest& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}
    inline CreateIntentRequest& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}
    inline CreateIntentRequest& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }
    inline CreateIntentRequest& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function for each user
     * input. You can invoke this Lambda function to personalize user interaction.</p>
     * <p>For example, suppose that your bot determines that the user's name is John.
     * You Lambda function might retrieve John's information from a backend database
     * and prepopulate some of the values. For example, if you find that John is gluten
     * intolerant, you might set the corresponding intent slot,
     * <code>glutenIntolerant</code> to <code>true</code>. You might find John's phone
     * number and set the corresponding session attribute.</p>
     */
    inline const DialogCodeHookSettings& GetDialogCodeHook() const{ return m_dialogCodeHook; }
    inline bool DialogCodeHookHasBeenSet() const { return m_dialogCodeHookHasBeenSet; }
    inline void SetDialogCodeHook(const DialogCodeHookSettings& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = value; }
    inline void SetDialogCodeHook(DialogCodeHookSettings&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::move(value); }
    inline CreateIntentRequest& WithDialogCodeHook(const DialogCodeHookSettings& value) { SetDialogCodeHook(value); return *this;}
    inline CreateIntentRequest& WithDialogCodeHook(DialogCodeHookSettings&& value) { SetDialogCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const{ return m_fulfillmentCodeHook; }
    inline bool FulfillmentCodeHookHasBeenSet() const { return m_fulfillmentCodeHookHasBeenSet; }
    inline void SetFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = value; }
    inline void SetFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = std::move(value); }
    inline CreateIntentRequest& WithFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { SetFulfillmentCodeHook(value); return *this;}
    inline CreateIntentRequest& WithFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { SetFulfillmentCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const{ return m_intentConfirmationSetting; }
    inline bool IntentConfirmationSettingHasBeenSet() const { return m_intentConfirmationSettingHasBeenSet; }
    inline void SetIntentConfirmationSetting(const IntentConfirmationSetting& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = value; }
    inline void SetIntentConfirmationSetting(IntentConfirmationSetting&& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = std::move(value); }
    inline CreateIntentRequest& WithIntentConfirmationSetting(const IntentConfirmationSetting& value) { SetIntentConfirmationSetting(value); return *this;}
    inline CreateIntentRequest& WithIntentConfirmationSetting(IntentConfirmationSetting&& value) { SetIntentConfirmationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const{ return m_intentClosingSetting; }
    inline bool IntentClosingSettingHasBeenSet() const { return m_intentClosingSettingHasBeenSet; }
    inline void SetIntentClosingSetting(const IntentClosingSetting& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = value; }
    inline void SetIntentClosingSetting(IntentClosingSetting&& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = std::move(value); }
    inline CreateIntentRequest& WithIntentClosingSetting(const IntentClosingSetting& value) { SetIntentClosingSetting(value); return *this;}
    inline CreateIntentRequest& WithIntentClosingSetting(IntentClosingSetting&& value) { SetIntentClosingSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contexts that must be active for this intent to be considered by
     * Amazon Lex.</p> <p>When an intent has an input context list, Amazon Lex only
     * considers using the intent in an interaction with the user when the specified
     * contexts are included in the active context list for the session. If the
     * contexts are not active, then Amazon Lex will not use the intent.</p> <p>A
     * context can be automatically activated using the <code>outputContexts</code>
     * property or it can be set at runtime.</p> <p> For example, if there are two
     * intents with different input contexts that respond to the same utterances, only
     * the intent with the active context will respond.</p> <p>An intent may have up to
     * 5 input contexts. If an intent has multiple input contexts, all of the contexts
     * must be active to consider the intent.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContextsHasBeenSet = true; m_inputContexts = value; }
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::move(value); }
    inline CreateIntentRequest& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}
    inline CreateIntentRequest& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}
    inline CreateIntentRequest& AddInputContexts(const InputContext& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(value); return *this; }
    inline CreateIntentRequest& AddInputContexts(InputContext&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A lists of contexts that the intent activates when it is fulfilled.</p>
     * <p>You can use an output context to indicate the intents that Amazon Lex should
     * consider for the next turn of the conversation with a customer. </p> <p>When you
     * use the <code>outputContextsList</code> property, all of the contexts specified
     * in the list are activated when the intent is fulfilled. You can set up to 10
     * output contexts. You can also set the number of conversation turns that the
     * context should be active, or the length of time that the context should be
     * active.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContextsHasBeenSet = true; m_outputContexts = value; }
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::move(value); }
    inline CreateIntentRequest& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}
    inline CreateIntentRequest& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}
    inline CreateIntentRequest& AddOutputContexts(const OutputContext& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(value); return *this; }
    inline CreateIntentRequest& AddOutputContexts(OutputContext&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }
    inline bool KendraConfigurationHasBeenSet() const { return m_kendraConfigurationHasBeenSet; }
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = value; }
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::move(value); }
    inline CreateIntentRequest& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}
    inline CreateIntentRequest& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline CreateIntentRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline CreateIntentRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline CreateIntentRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with this intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline CreateIntentRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline CreateIntentRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline CreateIntentRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline CreateIntentRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline CreateIntentRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline CreateIntentRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const{ return m_initialResponseSetting; }
    inline bool InitialResponseSettingHasBeenSet() const { return m_initialResponseSettingHasBeenSet; }
    inline void SetInitialResponseSetting(const InitialResponseSetting& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = value; }
    inline void SetInitialResponseSetting(InitialResponseSetting&& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = std::move(value); }
    inline CreateIntentRequest& WithInitialResponseSetting(const InitialResponseSetting& value) { SetInitialResponseSetting(value); return *this;}
    inline CreateIntentRequest& WithInitialResponseSetting(InitialResponseSetting&& value) { SetInitialResponseSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of the built-in <code>Amazon.QnAIntent</code>.
     * The <code>AMAZON.QnAIntent</code> intent is called when Amazon Lex can't
     * determine another intent to invoke. If you specify this field, you can't specify
     * the <code>kendraConfiguration</code> field.</p>
     */
    inline const QnAIntentConfiguration& GetQnAIntentConfiguration() const{ return m_qnAIntentConfiguration; }
    inline bool QnAIntentConfigurationHasBeenSet() const { return m_qnAIntentConfigurationHasBeenSet; }
    inline void SetQnAIntentConfiguration(const QnAIntentConfiguration& value) { m_qnAIntentConfigurationHasBeenSet = true; m_qnAIntentConfiguration = value; }
    inline void SetQnAIntentConfiguration(QnAIntentConfiguration&& value) { m_qnAIntentConfigurationHasBeenSet = true; m_qnAIntentConfiguration = std::move(value); }
    inline CreateIntentRequest& WithQnAIntentConfiguration(const QnAIntentConfiguration& value) { SetQnAIntentConfiguration(value); return *this;}
    inline CreateIntentRequest& WithQnAIntentConfiguration(QnAIntentConfiguration&& value) { SetQnAIntentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_parentIntentSignature;
    bool m_parentIntentSignatureHasBeenSet = false;

    Aws::Vector<SampleUtterance> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet = false;

    DialogCodeHookSettings m_dialogCodeHook;
    bool m_dialogCodeHookHasBeenSet = false;

    FulfillmentCodeHookSettings m_fulfillmentCodeHook;
    bool m_fulfillmentCodeHookHasBeenSet = false;

    IntentConfirmationSetting m_intentConfirmationSetting;
    bool m_intentConfirmationSettingHasBeenSet = false;

    IntentClosingSetting m_intentClosingSetting;
    bool m_intentClosingSettingHasBeenSet = false;

    Aws::Vector<InputContext> m_inputContexts;
    bool m_inputContextsHasBeenSet = false;

    Aws::Vector<OutputContext> m_outputContexts;
    bool m_outputContextsHasBeenSet = false;

    KendraConfiguration m_kendraConfiguration;
    bool m_kendraConfigurationHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    InitialResponseSetting m_initialResponseSetting;
    bool m_initialResponseSettingHasBeenSet = false;

    QnAIntentConfiguration m_qnAIntentConfiguration;
    bool m_qnAIntentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
