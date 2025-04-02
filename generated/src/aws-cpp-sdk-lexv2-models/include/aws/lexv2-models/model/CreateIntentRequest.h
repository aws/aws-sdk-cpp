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
#include <aws/lexv2-models/model/QInConnectIntentConfiguration.h>
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
    AWS_LEXMODELSV2_API CreateIntentRequest() = default;

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
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    CreateIntentRequest& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateIntentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const { return m_parentIntentSignature; }
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }
    template<typename ParentIntentSignatureT = Aws::String>
    void SetParentIntentSignature(ParentIntentSignatureT&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::forward<ParentIntentSignatureT>(value); }
    template<typename ParentIntentSignatureT = Aws::String>
    CreateIntentRequest& WithParentIntentSignature(ParentIntentSignatureT&& value) { SetParentIntentSignature(std::forward<ParentIntentSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const { return m_sampleUtterances; }
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    void SetSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::forward<SampleUtterancesT>(value); }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    CreateIntentRequest& WithSampleUtterances(SampleUtterancesT&& value) { SetSampleUtterances(std::forward<SampleUtterancesT>(value)); return *this;}
    template<typename SampleUtterancesT = SampleUtterance>
    CreateIntentRequest& AddSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.emplace_back(std::forward<SampleUtterancesT>(value)); return *this; }
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
    inline const DialogCodeHookSettings& GetDialogCodeHook() const { return m_dialogCodeHook; }
    inline bool DialogCodeHookHasBeenSet() const { return m_dialogCodeHookHasBeenSet; }
    template<typename DialogCodeHookT = DialogCodeHookSettings>
    void SetDialogCodeHook(DialogCodeHookT&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::forward<DialogCodeHookT>(value); }
    template<typename DialogCodeHookT = DialogCodeHookSettings>
    CreateIntentRequest& WithDialogCodeHook(DialogCodeHookT&& value) { SetDialogCodeHook(std::forward<DialogCodeHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const { return m_fulfillmentCodeHook; }
    inline bool FulfillmentCodeHookHasBeenSet() const { return m_fulfillmentCodeHookHasBeenSet; }
    template<typename FulfillmentCodeHookT = FulfillmentCodeHookSettings>
    void SetFulfillmentCodeHook(FulfillmentCodeHookT&& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = std::forward<FulfillmentCodeHookT>(value); }
    template<typename FulfillmentCodeHookT = FulfillmentCodeHookSettings>
    CreateIntentRequest& WithFulfillmentCodeHook(FulfillmentCodeHookT&& value) { SetFulfillmentCodeHook(std::forward<FulfillmentCodeHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const { return m_intentConfirmationSetting; }
    inline bool IntentConfirmationSettingHasBeenSet() const { return m_intentConfirmationSettingHasBeenSet; }
    template<typename IntentConfirmationSettingT = IntentConfirmationSetting>
    void SetIntentConfirmationSetting(IntentConfirmationSettingT&& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = std::forward<IntentConfirmationSettingT>(value); }
    template<typename IntentConfirmationSettingT = IntentConfirmationSetting>
    CreateIntentRequest& WithIntentConfirmationSetting(IntentConfirmationSettingT&& value) { SetIntentConfirmationSetting(std::forward<IntentConfirmationSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const { return m_intentClosingSetting; }
    inline bool IntentClosingSettingHasBeenSet() const { return m_intentClosingSettingHasBeenSet; }
    template<typename IntentClosingSettingT = IntentClosingSetting>
    void SetIntentClosingSetting(IntentClosingSettingT&& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = std::forward<IntentClosingSettingT>(value); }
    template<typename IntentClosingSettingT = IntentClosingSetting>
    CreateIntentRequest& WithIntentClosingSetting(IntentClosingSettingT&& value) { SetIntentClosingSetting(std::forward<IntentClosingSettingT>(value)); return *this;}
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
    inline const Aws::Vector<InputContext>& GetInputContexts() const { return m_inputContexts; }
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    void SetInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::forward<InputContextsT>(value); }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    CreateIntentRequest& WithInputContexts(InputContextsT&& value) { SetInputContexts(std::forward<InputContextsT>(value)); return *this;}
    template<typename InputContextsT = InputContext>
    CreateIntentRequest& AddInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.emplace_back(std::forward<InputContextsT>(value)); return *this; }
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
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const { return m_outputContexts; }
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    void SetOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::forward<OutputContextsT>(value); }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    CreateIntentRequest& WithOutputContexts(OutputContextsT&& value) { SetOutputContexts(std::forward<OutputContextsT>(value)); return *this;}
    template<typename OutputContextsT = OutputContext>
    CreateIntentRequest& AddOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.emplace_back(std::forward<OutputContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const { return m_kendraConfiguration; }
    inline bool KendraConfigurationHasBeenSet() const { return m_kendraConfigurationHasBeenSet; }
    template<typename KendraConfigurationT = KendraConfiguration>
    void SetKendraConfiguration(KendraConfigurationT&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::forward<KendraConfigurationT>(value); }
    template<typename KendraConfigurationT = KendraConfiguration>
    CreateIntentRequest& WithKendraConfiguration(KendraConfigurationT&& value) { SetKendraConfiguration(std::forward<KendraConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateIntentRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with this intent.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    CreateIntentRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    CreateIntentRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const { return m_initialResponseSetting; }
    inline bool InitialResponseSettingHasBeenSet() const { return m_initialResponseSettingHasBeenSet; }
    template<typename InitialResponseSettingT = InitialResponseSetting>
    void SetInitialResponseSetting(InitialResponseSettingT&& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = std::forward<InitialResponseSettingT>(value); }
    template<typename InitialResponseSettingT = InitialResponseSetting>
    CreateIntentRequest& WithInitialResponseSetting(InitialResponseSettingT&& value) { SetInitialResponseSetting(std::forward<InitialResponseSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of the built-in <code>Amazon.QnAIntent</code>.
     * The <code>AMAZON.QnAIntent</code> intent is called when Amazon Lex can't
     * determine another intent to invoke. If you specify this field, you can't specify
     * the <code>kendraConfiguration</code> field.</p>
     */
    inline const QnAIntentConfiguration& GetQnAIntentConfiguration() const { return m_qnAIntentConfiguration; }
    inline bool QnAIntentConfigurationHasBeenSet() const { return m_qnAIntentConfigurationHasBeenSet; }
    template<typename QnAIntentConfigurationT = QnAIntentConfiguration>
    void SetQnAIntentConfiguration(QnAIntentConfigurationT&& value) { m_qnAIntentConfigurationHasBeenSet = true; m_qnAIntentConfiguration = std::forward<QnAIntentConfigurationT>(value); }
    template<typename QnAIntentConfigurationT = QnAIntentConfiguration>
    CreateIntentRequest& WithQnAIntentConfiguration(QnAIntentConfigurationT&& value) { SetQnAIntentConfiguration(std::forward<QnAIntentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Qinconnect intent configuration details for the create intent request.</p>
     */
    inline const QInConnectIntentConfiguration& GetQInConnectIntentConfiguration() const { return m_qInConnectIntentConfiguration; }
    inline bool QInConnectIntentConfigurationHasBeenSet() const { return m_qInConnectIntentConfigurationHasBeenSet; }
    template<typename QInConnectIntentConfigurationT = QInConnectIntentConfiguration>
    void SetQInConnectIntentConfiguration(QInConnectIntentConfigurationT&& value) { m_qInConnectIntentConfigurationHasBeenSet = true; m_qInConnectIntentConfiguration = std::forward<QInConnectIntentConfigurationT>(value); }
    template<typename QInConnectIntentConfigurationT = QInConnectIntentConfiguration>
    CreateIntentRequest& WithQInConnectIntentConfiguration(QInConnectIntentConfigurationT&& value) { SetQInConnectIntentConfiguration(std::forward<QInConnectIntentConfigurationT>(value)); return *this;}
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

    QInConnectIntentConfiguration m_qInConnectIntentConfiguration;
    bool m_qInConnectIntentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
