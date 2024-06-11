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
#include <aws/lexv2-models/model/SlotPriority.h>
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
  class UpdateIntentRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateIntentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIntent"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }
    inline UpdateIntentRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}
    inline UpdateIntentRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}
    inline UpdateIntentRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }
    inline UpdateIntentRequest& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}
    inline UpdateIntentRequest& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}
    inline UpdateIntentRequest& WithIntentName(const char* value) { SetIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateIntentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateIntentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateIntentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = value; }
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::move(value); }
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature.assign(value); }
    inline UpdateIntentRequest& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}
    inline UpdateIntentRequest& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}
    inline UpdateIntentRequest& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }
    inline UpdateIntentRequest& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}
    inline UpdateIntentRequest& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}
    inline UpdateIntentRequest& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }
    inline UpdateIntentRequest& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new Lambda function to use between each turn of the conversation with the
     * bot.</p>
     */
    inline const DialogCodeHookSettings& GetDialogCodeHook() const{ return m_dialogCodeHook; }
    inline bool DialogCodeHookHasBeenSet() const { return m_dialogCodeHookHasBeenSet; }
    inline void SetDialogCodeHook(const DialogCodeHookSettings& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = value; }
    inline void SetDialogCodeHook(DialogCodeHookSettings&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::move(value); }
    inline UpdateIntentRequest& WithDialogCodeHook(const DialogCodeHookSettings& value) { SetDialogCodeHook(value); return *this;}
    inline UpdateIntentRequest& WithDialogCodeHook(DialogCodeHookSettings&& value) { SetDialogCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Lambda function to call when all of the intents required slots are
     * provided and the intent is ready for fulfillment.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const{ return m_fulfillmentCodeHook; }
    inline bool FulfillmentCodeHookHasBeenSet() const { return m_fulfillmentCodeHookHasBeenSet; }
    inline void SetFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = value; }
    inline void SetFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = std::move(value); }
    inline UpdateIntentRequest& WithFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { SetFulfillmentCodeHook(value); return *this;}
    inline UpdateIntentRequest& WithFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { SetFulfillmentCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline const Aws::Vector<SlotPriority>& GetSlotPriorities() const{ return m_slotPriorities; }
    inline bool SlotPrioritiesHasBeenSet() const { return m_slotPrioritiesHasBeenSet; }
    inline void SetSlotPriorities(const Aws::Vector<SlotPriority>& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities = value; }
    inline void SetSlotPriorities(Aws::Vector<SlotPriority>&& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities = std::move(value); }
    inline UpdateIntentRequest& WithSlotPriorities(const Aws::Vector<SlotPriority>& value) { SetSlotPriorities(value); return *this;}
    inline UpdateIntentRequest& WithSlotPriorities(Aws::Vector<SlotPriority>&& value) { SetSlotPriorities(std::move(value)); return *this;}
    inline UpdateIntentRequest& AddSlotPriorities(const SlotPriority& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities.push_back(value); return *this; }
    inline UpdateIntentRequest& AddSlotPriorities(SlotPriority&& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>New prompts that Amazon Lex sends to the user to confirm the completion of an
     * intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const{ return m_intentConfirmationSetting; }
    inline bool IntentConfirmationSettingHasBeenSet() const { return m_intentConfirmationSettingHasBeenSet; }
    inline void SetIntentConfirmationSetting(const IntentConfirmationSetting& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = value; }
    inline void SetIntentConfirmationSetting(IntentConfirmationSetting&& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = std::move(value); }
    inline UpdateIntentRequest& WithIntentConfirmationSetting(const IntentConfirmationSetting& value) { SetIntentConfirmationSetting(value); return *this;}
    inline UpdateIntentRequest& WithIntentConfirmationSetting(IntentConfirmationSetting&& value) { SetIntentConfirmationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new response that Amazon Lex sends the user when the intent is
     * closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const{ return m_intentClosingSetting; }
    inline bool IntentClosingSettingHasBeenSet() const { return m_intentClosingSettingHasBeenSet; }
    inline void SetIntentClosingSetting(const IntentClosingSetting& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = value; }
    inline void SetIntentClosingSetting(IntentClosingSetting&& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = std::move(value); }
    inline UpdateIntentRequest& WithIntentClosingSetting(const IntentClosingSetting& value) { SetIntentClosingSetting(value); return *this;}
    inline UpdateIntentRequest& WithIntentClosingSetting(IntentClosingSetting&& value) { SetIntentClosingSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContextsHasBeenSet = true; m_inputContexts = value; }
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::move(value); }
    inline UpdateIntentRequest& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}
    inline UpdateIntentRequest& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}
    inline UpdateIntentRequest& AddInputContexts(const InputContext& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(value); return *this; }
    inline UpdateIntentRequest& AddInputContexts(InputContext&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContextsHasBeenSet = true; m_outputContexts = value; }
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::move(value); }
    inline UpdateIntentRequest& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}
    inline UpdateIntentRequest& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}
    inline UpdateIntentRequest& AddOutputContexts(const OutputContext& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(value); return *this; }
    inline UpdateIntentRequest& AddOutputContexts(OutputContext&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>New configuration settings for connecting to an Amazon Kendra index.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }
    inline bool KendraConfigurationHasBeenSet() const { return m_kendraConfigurationHasBeenSet; }
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = value; }
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::move(value); }
    inline UpdateIntentRequest& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}
    inline UpdateIntentRequest& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline UpdateIntentRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline UpdateIntentRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline UpdateIntentRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline UpdateIntentRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline UpdateIntentRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline UpdateIntentRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline UpdateIntentRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline UpdateIntentRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline UpdateIntentRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for a response sent to the user before Amazon Lex
     * starts eliciting slots.</p>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const{ return m_initialResponseSetting; }
    inline bool InitialResponseSettingHasBeenSet() const { return m_initialResponseSettingHasBeenSet; }
    inline void SetInitialResponseSetting(const InitialResponseSetting& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = value; }
    inline void SetInitialResponseSetting(InitialResponseSetting&& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = std::move(value); }
    inline UpdateIntentRequest& WithInitialResponseSetting(const InitialResponseSetting& value) { SetInitialResponseSetting(value); return *this;}
    inline UpdateIntentRequest& WithInitialResponseSetting(InitialResponseSetting&& value) { SetInitialResponseSetting(std::move(value)); return *this;}
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
    inline UpdateIntentRequest& WithQnAIntentConfiguration(const QnAIntentConfiguration& value) { SetQnAIntentConfiguration(value); return *this;}
    inline UpdateIntentRequest& WithQnAIntentConfiguration(QnAIntentConfiguration&& value) { SetQnAIntentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

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

    Aws::Vector<SlotPriority> m_slotPriorities;
    bool m_slotPrioritiesHasBeenSet = false;

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
