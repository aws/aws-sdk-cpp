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


    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }

    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }

    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }

    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline DescribeIntentResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline DescribeIntentResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to the intent when it was created.</p>
     */
    inline DescribeIntentResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>The name specified for the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name specified for the intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentName = value; }

    /**
     * <p>The name specified for the intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentName = std::move(value); }

    /**
     * <p>The name specified for the intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentName.assign(value); }

    /**
     * <p>The name specified for the intent.</p>
     */
    inline DescribeIntentResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name specified for the intent.</p>
     */
    inline DescribeIntentResult& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name specified for the intent.</p>
     */
    inline DescribeIntentResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the intent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the intent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the intent.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the intent.</p>
     */
    inline DescribeIntentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the intent.</p>
     */
    inline DescribeIntentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the intent.</p>
     */
    inline DescribeIntentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }

    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignature = value; }

    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignature = std::move(value); }

    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignature.assign(value); }

    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline DescribeIntentResult& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline DescribeIntentResult& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}

    /**
     * <p>The identifier of the built-in intent that this intent is derived from, if
     * any.</p>
     */
    inline DescribeIntentResult& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}


    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterances = value; }

    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterances = std::move(value); }

    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline DescribeIntentResult& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline DescribeIntentResult& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline DescribeIntentResult& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>User utterances that trigger this intent.</p>
     */
    inline DescribeIntentResult& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterances.push_back(std::move(value)); return *this; }


    /**
     * <p>The Lambda function called during each turn of a conversation with the
     * intent.</p>
     */
    inline const DialogCodeHookSettings& GetDialogCodeHook() const{ return m_dialogCodeHook; }

    /**
     * <p>The Lambda function called during each turn of a conversation with the
     * intent.</p>
     */
    inline void SetDialogCodeHook(const DialogCodeHookSettings& value) { m_dialogCodeHook = value; }

    /**
     * <p>The Lambda function called during each turn of a conversation with the
     * intent.</p>
     */
    inline void SetDialogCodeHook(DialogCodeHookSettings&& value) { m_dialogCodeHook = std::move(value); }

    /**
     * <p>The Lambda function called during each turn of a conversation with the
     * intent.</p>
     */
    inline DescribeIntentResult& WithDialogCodeHook(const DialogCodeHookSettings& value) { SetDialogCodeHook(value); return *this;}

    /**
     * <p>The Lambda function called during each turn of a conversation with the
     * intent.</p>
     */
    inline DescribeIntentResult& WithDialogCodeHook(DialogCodeHookSettings&& value) { SetDialogCodeHook(std::move(value)); return *this;}


    /**
     * <p>The Lambda function called when the intent is complete and ready for
     * fulfillment.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const{ return m_fulfillmentCodeHook; }

    /**
     * <p>The Lambda function called when the intent is complete and ready for
     * fulfillment.</p>
     */
    inline void SetFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { m_fulfillmentCodeHook = value; }

    /**
     * <p>The Lambda function called when the intent is complete and ready for
     * fulfillment.</p>
     */
    inline void SetFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { m_fulfillmentCodeHook = std::move(value); }

    /**
     * <p>The Lambda function called when the intent is complete and ready for
     * fulfillment.</p>
     */
    inline DescribeIntentResult& WithFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { SetFulfillmentCodeHook(value); return *this;}

    /**
     * <p>The Lambda function called when the intent is complete and ready for
     * fulfillment.</p>
     */
    inline DescribeIntentResult& WithFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { SetFulfillmentCodeHook(std::move(value)); return *this;}


    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline const Aws::Vector<SlotPriority>& GetSlotPriorities() const{ return m_slotPriorities; }

    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline void SetSlotPriorities(const Aws::Vector<SlotPriority>& value) { m_slotPriorities = value; }

    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline void SetSlotPriorities(Aws::Vector<SlotPriority>&& value) { m_slotPriorities = std::move(value); }

    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline DescribeIntentResult& WithSlotPriorities(const Aws::Vector<SlotPriority>& value) { SetSlotPriorities(value); return *this;}

    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline DescribeIntentResult& WithSlotPriorities(Aws::Vector<SlotPriority>&& value) { SetSlotPriorities(std::move(value)); return *this;}

    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline DescribeIntentResult& AddSlotPriorities(const SlotPriority& value) { m_slotPriorities.push_back(value); return *this; }

    /**
     * <p>The list that determines the priority that slots should be elicited from the
     * user.</p>
     */
    inline DescribeIntentResult& AddSlotPriorities(SlotPriority&& value) { m_slotPriorities.push_back(std::move(value)); return *this; }


    /**
     * <p>Prompts that Amazon Lex sends to the user to confirm completion of an
     * intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const{ return m_intentConfirmationSetting; }

    /**
     * <p>Prompts that Amazon Lex sends to the user to confirm completion of an
     * intent.</p>
     */
    inline void SetIntentConfirmationSetting(const IntentConfirmationSetting& value) { m_intentConfirmationSetting = value; }

    /**
     * <p>Prompts that Amazon Lex sends to the user to confirm completion of an
     * intent.</p>
     */
    inline void SetIntentConfirmationSetting(IntentConfirmationSetting&& value) { m_intentConfirmationSetting = std::move(value); }

    /**
     * <p>Prompts that Amazon Lex sends to the user to confirm completion of an
     * intent.</p>
     */
    inline DescribeIntentResult& WithIntentConfirmationSetting(const IntentConfirmationSetting& value) { SetIntentConfirmationSetting(value); return *this;}

    /**
     * <p>Prompts that Amazon Lex sends to the user to confirm completion of an
     * intent.</p>
     */
    inline DescribeIntentResult& WithIntentConfirmationSetting(IntentConfirmationSetting&& value) { SetIntentConfirmationSetting(std::move(value)); return *this;}


    /**
     * <p>The response that Amazon Lex sends to when the intent is closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const{ return m_intentClosingSetting; }

    /**
     * <p>The response that Amazon Lex sends to when the intent is closed.</p>
     */
    inline void SetIntentClosingSetting(const IntentClosingSetting& value) { m_intentClosingSetting = value; }

    /**
     * <p>The response that Amazon Lex sends to when the intent is closed.</p>
     */
    inline void SetIntentClosingSetting(IntentClosingSetting&& value) { m_intentClosingSetting = std::move(value); }

    /**
     * <p>The response that Amazon Lex sends to when the intent is closed.</p>
     */
    inline DescribeIntentResult& WithIntentClosingSetting(const IntentClosingSetting& value) { SetIntentClosingSetting(value); return *this;}

    /**
     * <p>The response that Amazon Lex sends to when the intent is closed.</p>
     */
    inline DescribeIntentResult& WithIntentClosingSetting(IntentClosingSetting&& value) { SetIntentClosingSetting(std::move(value)); return *this;}


    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }

    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContexts = value; }

    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContexts = std::move(value); }

    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline DescribeIntentResult& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}

    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline DescribeIntentResult& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}

    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline DescribeIntentResult& AddInputContexts(const InputContext& value) { m_inputContexts.push_back(value); return *this; }

    /**
     * <p>A list of contexts that must be active for the intent to be considered for
     * sending to the user.</p>
     */
    inline DescribeIntentResult& AddInputContexts(InputContext&& value) { m_inputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }

    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContexts = value; }

    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContexts = std::move(value); }

    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline DescribeIntentResult& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}

    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline DescribeIntentResult& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}

    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline DescribeIntentResult& AddOutputContexts(const OutputContext& value) { m_outputContexts.push_back(value); return *this; }

    /**
     * <p>A list of contexts that are activated when the intent is fulfilled.</p>
     */
    inline DescribeIntentResult& AddOutputContexts(OutputContext&& value) { m_outputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfiguration = value; }

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfiguration = std::move(value); }

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline DescribeIntentResult& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent.</p>
     */
    inline DescribeIntentResult& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline DescribeIntentResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline DescribeIntentResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline DescribeIntentResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline DescribeIntentResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline DescribeIntentResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline DescribeIntentResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline DescribeIntentResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline DescribeIntentResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The language and locale specified for the intent.</p>
     */
    inline DescribeIntentResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline DescribeIntentResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline DescribeIntentResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp of the date and time that the intent was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the intent was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the intent was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the intent was last updated.</p>
     */
    inline DescribeIntentResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the intent was last updated.</p>
     */
    inline DescribeIntentResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const{ return m_initialResponseSetting; }

    /**
     * <p/>
     */
    inline void SetInitialResponseSetting(const InitialResponseSetting& value) { m_initialResponseSetting = value; }

    /**
     * <p/>
     */
    inline void SetInitialResponseSetting(InitialResponseSetting&& value) { m_initialResponseSetting = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeIntentResult& WithInitialResponseSetting(const InitialResponseSetting& value) { SetInitialResponseSetting(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeIntentResult& WithInitialResponseSetting(InitialResponseSetting&& value) { SetInitialResponseSetting(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
