/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/DialogCodeHookSettings.h>
#include <aws/lexv2-models/model/FulfillmentCodeHookSettings.h>
#include <aws/lexv2-models/model/IntentConfirmationSetting.h>
#include <aws/lexv2-models/model/IntentClosingSetting.h>
#include <aws/lexv2-models/model/KendraConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/InitialResponseSetting.h>
#include <aws/lexv2-models/model/QnAIntentConfiguration.h>
#include <aws/lexv2-models/model/QInConnectIntentConfiguration.h>
#include <aws/lexv2-models/model/SampleUtterance.h>
#include <aws/lexv2-models/model/SlotPriority.h>
#include <aws/lexv2-models/model/InputContext.h>
#include <aws/lexv2-models/model/OutputContext.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class DescribeIntentResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeIntentResult() = default;
    AWS_LEXMODELSV2_API DescribeIntentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeIntentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    DescribeIntentResult& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name specified for the intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    DescribeIntentResult& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeIntentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const { return m_parentIntentSignature; }
    template<typename ParentIntentSignatureT = Aws::String>
    void SetParentIntentSignature(ParentIntentSignatureT&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::forward<ParentIntentSignatureT>(value); }
    template<typename ParentIntentSignatureT = Aws::String>
    DescribeIntentResult& WithParentIntentSignature(ParentIntentSignatureT&& value) { SetParentIntentSignature(std::forward<ParentIntentSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const { return m_sampleUtterances; }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    void SetSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::forward<SampleUtterancesT>(value); }
    template<typename SampleUtterancesT = Aws::Vector<SampleUtterance>>
    DescribeIntentResult& WithSampleUtterances(SampleUtterancesT&& value) { SetSampleUtterances(std::forward<SampleUtterancesT>(value)); return *this;}
    template<typename SampleUtterancesT = SampleUtterance>
    DescribeIntentResult& AddSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.emplace_back(std::forward<SampleUtterancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Lambda function called during each turn of a conversation with the
     * intent.</p>
     */
    inline const DialogCodeHookSettings& GetDialogCodeHook() const { return m_dialogCodeHook; }
    template<typename DialogCodeHookT = DialogCodeHookSettings>
    void SetDialogCodeHook(DialogCodeHookT&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::forward<DialogCodeHookT>(value); }
    template<typename DialogCodeHookT = DialogCodeHookSettings>
    DescribeIntentResult& WithDialogCodeHook(DialogCodeHookT&& value) { SetDialogCodeHook(std::forward<DialogCodeHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lambda function called when the intent is complete and ready for
     * fulfillment.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const { return m_fulfillmentCodeHook; }
    template<typename FulfillmentCodeHookT = FulfillmentCodeHookSettings>
    void SetFulfillmentCodeHook(FulfillmentCodeHookT&& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = std::forward<FulfillmentCodeHookT>(value); }
    template<typename FulfillmentCodeHookT = FulfillmentCodeHookSettings>
    DescribeIntentResult& WithFulfillmentCodeHook(FulfillmentCodeHookT&& value) { SetFulfillmentCodeHook(std::forward<FulfillmentCodeHookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline const Aws::Vector<SlotPriority>& GetSlotPriorities() const { return m_slotPriorities; }
    template<typename SlotPrioritiesT = Aws::Vector<SlotPriority>>
    void SetSlotPriorities(SlotPrioritiesT&& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities = std::forward<SlotPrioritiesT>(value); }
    template<typename SlotPrioritiesT = Aws::Vector<SlotPriority>>
    DescribeIntentResult& WithSlotPriorities(SlotPrioritiesT&& value) { SetSlotPriorities(std::forward<SlotPrioritiesT>(value)); return *this;}
    template<typename SlotPrioritiesT = SlotPriority>
    DescribeIntentResult& AddSlotPriorities(SlotPrioritiesT&& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities.emplace_back(std::forward<SlotPrioritiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Prompts that Amazon Lex sends to the user to confirm completion of an
     * intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const { return m_intentConfirmationSetting; }
    template<typename IntentConfirmationSettingT = IntentConfirmationSetting>
    void SetIntentConfirmationSetting(IntentConfirmationSettingT&& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = std::forward<IntentConfirmationSettingT>(value); }
    template<typename IntentConfirmationSettingT = IntentConfirmationSetting>
    DescribeIntentResult& WithIntentConfirmationSetting(IntentConfirmationSettingT&& value) { SetIntentConfirmationSetting(std::forward<IntentConfirmationSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response that Amazon Lex sends to when the intent is closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const { return m_intentClosingSetting; }
    template<typename IntentClosingSettingT = IntentClosingSetting>
    void SetIntentClosingSetting(IntentClosingSettingT&& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = std::forward<IntentClosingSettingT>(value); }
    template<typename IntentClosingSettingT = IntentClosingSetting>
    DescribeIntentResult& WithIntentClosingSetting(IntentClosingSettingT&& value) { SetIntentClosingSetting(std::forward<IntentClosingSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const { return m_inputContexts; }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    void SetInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::forward<InputContextsT>(value); }
    template<typename InputContextsT = Aws::Vector<InputContext>>
    DescribeIntentResult& WithInputContexts(InputContextsT&& value) { SetInputContexts(std::forward<InputContextsT>(value)); return *this;}
    template<typename InputContextsT = InputContext>
    DescribeIntentResult& AddInputContexts(InputContextsT&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.emplace_back(std::forward<InputContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const { return m_outputContexts; }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    void SetOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::forward<OutputContextsT>(value); }
    template<typename OutputContextsT = Aws::Vector<OutputContext>>
    DescribeIntentResult& WithOutputContexts(OutputContextsT&& value) { SetOutputContexts(std::forward<OutputContextsT>(value)); return *this;}
    template<typename OutputContextsT = OutputContext>
    DescribeIntentResult& AddOutputContexts(OutputContextsT&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.emplace_back(std::forward<OutputContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const { return m_kendraConfiguration; }
    template<typename KendraConfigurationT = KendraConfiguration>
    void SetKendraConfiguration(KendraConfigurationT&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::forward<KendraConfigurationT>(value); }
    template<typename KendraConfigurationT = KendraConfiguration>
    DescribeIntentResult& WithKendraConfiguration(KendraConfigurationT&& value) { SetKendraConfiguration(std::forward<KendraConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeIntentResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeIntentResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    DescribeIntentResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeIntentResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the intent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeIntentResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration setting for a response sent to the user before Amazon Lex
     * starts eliciting slots.</p>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const { return m_initialResponseSetting; }
    template<typename InitialResponseSettingT = InitialResponseSetting>
    void SetInitialResponseSetting(InitialResponseSettingT&& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = std::forward<InitialResponseSettingT>(value); }
    template<typename InitialResponseSettingT = InitialResponseSetting>
    DescribeIntentResult& WithInitialResponseSetting(InitialResponseSettingT&& value) { SetInitialResponseSetting(std::forward<InitialResponseSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the configuration of the built-in
     * <code>Amazon.QnAIntent</code>.</p>
     */
    inline const QnAIntentConfiguration& GetQnAIntentConfiguration() const { return m_qnAIntentConfiguration; }
    template<typename QnAIntentConfigurationT = QnAIntentConfiguration>
    void SetQnAIntentConfiguration(QnAIntentConfigurationT&& value) { m_qnAIntentConfigurationHasBeenSet = true; m_qnAIntentConfiguration = std::forward<QnAIntentConfigurationT>(value); }
    template<typename QnAIntentConfigurationT = QnAIntentConfiguration>
    DescribeIntentResult& WithQnAIntentConfiguration(QnAIntentConfigurationT&& value) { SetQnAIntentConfiguration(std::forward<QnAIntentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Qinconnect intent configuration details for the describe intent response.</p>
     */
    inline const QInConnectIntentConfiguration& GetQInConnectIntentConfiguration() const { return m_qInConnectIntentConfiguration; }
    template<typename QInConnectIntentConfigurationT = QInConnectIntentConfiguration>
    void SetQInConnectIntentConfiguration(QInConnectIntentConfigurationT&& value) { m_qInConnectIntentConfigurationHasBeenSet = true; m_qInConnectIntentConfiguration = std::forward<QInConnectIntentConfigurationT>(value); }
    template<typename QInConnectIntentConfigurationT = QInConnectIntentConfiguration>
    DescribeIntentResult& WithQInConnectIntentConfiguration(QInConnectIntentConfigurationT&& value) { SetQInConnectIntentConfiguration(std::forward<QInConnectIntentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIntentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    InitialResponseSetting m_initialResponseSetting;
    bool m_initialResponseSettingHasBeenSet = false;

    QnAIntentConfiguration m_qnAIntentConfiguration;
    bool m_qnAIntentConfigurationHasBeenSet = false;

    QInConnectIntentConfiguration m_qInConnectIntentConfiguration;
    bool m_qInConnectIntentConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
