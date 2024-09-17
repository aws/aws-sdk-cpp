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
    AWS_LEXMODELSV2_API DescribeIntentResult();
    AWS_LEXMODELSV2_API DescribeIntentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeIntentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }
    inline DescribeIntentResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}
    inline DescribeIntentResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}
    inline DescribeIntentResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name specified for the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }
    inline void SetIntentName(const Aws::String& value) { m_intentName = value; }
    inline void SetIntentName(Aws::String&& value) { m_intentName = std::move(value); }
    inline void SetIntentName(const char* value) { m_intentName.assign(value); }
    inline DescribeIntentResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}
    inline DescribeIntentResult& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}
    inline DescribeIntentResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeIntentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeIntentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeIntentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignature = value; }
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignature = std::move(value); }
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignature.assign(value); }
    inline DescribeIntentResult& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}
    inline DescribeIntentResult& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}
    inline DescribeIntentResult& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterances = value; }
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterances = std::move(value); }
    inline DescribeIntentResult& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}
    inline DescribeIntentResult& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}
    inline DescribeIntentResult& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterances.push_back(value); return *this; }
    inline DescribeIntentResult& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Lambda function called during each turn of a conversation with the
     * intent.</p>
     */
    inline const DialogCodeHookSettings& GetDialogCodeHook() const{ return m_dialogCodeHook; }
    inline void SetDialogCodeHook(const DialogCodeHookSettings& value) { m_dialogCodeHook = value; }
    inline void SetDialogCodeHook(DialogCodeHookSettings&& value) { m_dialogCodeHook = std::move(value); }
    inline DescribeIntentResult& WithDialogCodeHook(const DialogCodeHookSettings& value) { SetDialogCodeHook(value); return *this;}
    inline DescribeIntentResult& WithDialogCodeHook(DialogCodeHookSettings&& value) { SetDialogCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lambda function called when the intent is complete and ready for
     * fulfillment.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const{ return m_fulfillmentCodeHook; }
    inline void SetFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { m_fulfillmentCodeHook = value; }
    inline void SetFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { m_fulfillmentCodeHook = std::move(value); }
    inline DescribeIntentResult& WithFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { SetFulfillmentCodeHook(value); return *this;}
    inline DescribeIntentResult& WithFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { SetFulfillmentCodeHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline const Aws::Vector<SlotPriority>& GetSlotPriorities() const{ return m_slotPriorities; }
    inline void SetSlotPriorities(const Aws::Vector<SlotPriority>& value) { m_slotPriorities = value; }
    inline void SetSlotPriorities(Aws::Vector<SlotPriority>&& value) { m_slotPriorities = std::move(value); }
    inline DescribeIntentResult& WithSlotPriorities(const Aws::Vector<SlotPriority>& value) { SetSlotPriorities(value); return *this;}
    inline DescribeIntentResult& WithSlotPriorities(Aws::Vector<SlotPriority>&& value) { SetSlotPriorities(std::move(value)); return *this;}
    inline DescribeIntentResult& AddSlotPriorities(const SlotPriority& value) { m_slotPriorities.push_back(value); return *this; }
    inline DescribeIntentResult& AddSlotPriorities(SlotPriority&& value) { m_slotPriorities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Prompts that Amazon Lex sends to the user to confirm completion of an
     * intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const{ return m_intentConfirmationSetting; }
    inline void SetIntentConfirmationSetting(const IntentConfirmationSetting& value) { m_intentConfirmationSetting = value; }
    inline void SetIntentConfirmationSetting(IntentConfirmationSetting&& value) { m_intentConfirmationSetting = std::move(value); }
    inline DescribeIntentResult& WithIntentConfirmationSetting(const IntentConfirmationSetting& value) { SetIntentConfirmationSetting(value); return *this;}
    inline DescribeIntentResult& WithIntentConfirmationSetting(IntentConfirmationSetting&& value) { SetIntentConfirmationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response that Amazon Lex sends to when the intent is closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const{ return m_intentClosingSetting; }
    inline void SetIntentClosingSetting(const IntentClosingSetting& value) { m_intentClosingSetting = value; }
    inline void SetIntentClosingSetting(IntentClosingSetting&& value) { m_intentClosingSetting = std::move(value); }
    inline DescribeIntentResult& WithIntentClosingSetting(const IntentClosingSetting& value) { SetIntentClosingSetting(value); return *this;}
    inline DescribeIntentResult& WithIntentClosingSetting(IntentClosingSetting&& value) { SetIntentClosingSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContexts = value; }
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContexts = std::move(value); }
    inline DescribeIntentResult& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}
    inline DescribeIntentResult& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}
    inline DescribeIntentResult& AddInputContexts(const InputContext& value) { m_inputContexts.push_back(value); return *this; }
    inline DescribeIntentResult& AddInputContexts(InputContext&& value) { m_inputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContexts = value; }
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContexts = std::move(value); }
    inline DescribeIntentResult& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}
    inline DescribeIntentResult& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}
    inline DescribeIntentResult& AddOutputContexts(const OutputContext& value) { m_outputContexts.push_back(value); return *this; }
    inline DescribeIntentResult& AddOutputContexts(OutputContext&& value) { m_outputContexts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfiguration = value; }
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfiguration = std::move(value); }
    inline DescribeIntentResult& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}
    inline DescribeIntentResult& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline DescribeIntentResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DescribeIntentResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DescribeIntentResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline DescribeIntentResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline DescribeIntentResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline DescribeIntentResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline DescribeIntentResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline DescribeIntentResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline DescribeIntentResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeIntentResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeIntentResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the intent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeIntentResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeIntentResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration setting for a response sent to the user before Amazon Lex
     * starts eliciting slots.</p>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const{ return m_initialResponseSetting; }
    inline void SetInitialResponseSetting(const InitialResponseSetting& value) { m_initialResponseSetting = value; }
    inline void SetInitialResponseSetting(InitialResponseSetting&& value) { m_initialResponseSetting = std::move(value); }
    inline DescribeIntentResult& WithInitialResponseSetting(const InitialResponseSetting& value) { SetInitialResponseSetting(value); return *this;}
    inline DescribeIntentResult& WithInitialResponseSetting(InitialResponseSetting&& value) { SetInitialResponseSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the configuration of the built-in
     * <code>Amazon.QnAIntent</code>.</p>
     */
    inline const QnAIntentConfiguration& GetQnAIntentConfiguration() const{ return m_qnAIntentConfiguration; }
    inline void SetQnAIntentConfiguration(const QnAIntentConfiguration& value) { m_qnAIntentConfiguration = value; }
    inline void SetQnAIntentConfiguration(QnAIntentConfiguration&& value) { m_qnAIntentConfiguration = std::move(value); }
    inline DescribeIntentResult& WithQnAIntentConfiguration(const QnAIntentConfiguration& value) { SetQnAIntentConfiguration(value); return *this;}
    inline DescribeIntentResult& WithQnAIntentConfiguration(QnAIntentConfiguration&& value) { SetQnAIntentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeIntentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeIntentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeIntentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_intentId;

    Aws::String m_intentName;

    Aws::String m_description;

    Aws::String m_parentIntentSignature;

    Aws::Vector<SampleUtterance> m_sampleUtterances;

    DialogCodeHookSettings m_dialogCodeHook;

    FulfillmentCodeHookSettings m_fulfillmentCodeHook;

    Aws::Vector<SlotPriority> m_slotPriorities;

    IntentConfirmationSetting m_intentConfirmationSetting;

    IntentClosingSetting m_intentClosingSetting;

    Aws::Vector<InputContext> m_inputContexts;

    Aws::Vector<OutputContext> m_outputContexts;

    KendraConfiguration m_kendraConfiguration;

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    InitialResponseSetting m_initialResponseSetting;

    QnAIntentConfiguration m_qnAIntentConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
