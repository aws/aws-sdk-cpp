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
  class CreateIntentResult
  {
  public:
    AWS_LEXMODELSV2_API CreateIntentResult();
    AWS_LEXMODELSV2_API CreateIntentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateIntentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the intent.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>A unique identifier for the intent.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }

    /**
     * <p>A unique identifier for the intent.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }

    /**
     * <p>A unique identifier for the intent.</p>
     */
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }

    /**
     * <p>A unique identifier for the intent.</p>
     */
    inline CreateIntentResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>A unique identifier for the intent.</p>
     */
    inline CreateIntentResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the intent.</p>
     */
    inline CreateIntentResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}


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
    inline CreateIntentResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name specified for the intent.</p>
     */
    inline CreateIntentResult& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name specified for the intent.</p>
     */
    inline CreateIntentResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The description specified for the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description specified for the intent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description specified for the intent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description specified for the intent.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description specified for the intent.</p>
     */
    inline CreateIntentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description specified for the intent.</p>
     */
    inline CreateIntentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description specified for the intent.</p>
     */
    inline CreateIntentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The signature of the parent intent specified for the intent.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }

    /**
     * <p>The signature of the parent intent specified for the intent.</p>
     */
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignature = value; }

    /**
     * <p>The signature of the parent intent specified for the intent.</p>
     */
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignature = std::move(value); }

    /**
     * <p>The signature of the parent intent specified for the intent.</p>
     */
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignature.assign(value); }

    /**
     * <p>The signature of the parent intent specified for the intent.</p>
     */
    inline CreateIntentResult& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>The signature of the parent intent specified for the intent.</p>
     */
    inline CreateIntentResult& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}

    /**
     * <p>The signature of the parent intent specified for the intent.</p>
     */
    inline CreateIntentResult& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}


    /**
     * <p>The sample utterances specified for the intent.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>The sample utterances specified for the intent.</p>
     */
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterances = value; }

    /**
     * <p>The sample utterances specified for the intent.</p>
     */
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterances = std::move(value); }

    /**
     * <p>The sample utterances specified for the intent.</p>
     */
    inline CreateIntentResult& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>The sample utterances specified for the intent.</p>
     */
    inline CreateIntentResult& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>The sample utterances specified for the intent.</p>
     */
    inline CreateIntentResult& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>The sample utterances specified for the intent.</p>
     */
    inline CreateIntentResult& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterances.push_back(std::move(value)); return *this; }


    /**
     * <p>The dialog Lambda function specified for the intent.</p>
     */
    inline const DialogCodeHookSettings& GetDialogCodeHook() const{ return m_dialogCodeHook; }

    /**
     * <p>The dialog Lambda function specified for the intent.</p>
     */
    inline void SetDialogCodeHook(const DialogCodeHookSettings& value) { m_dialogCodeHook = value; }

    /**
     * <p>The dialog Lambda function specified for the intent.</p>
     */
    inline void SetDialogCodeHook(DialogCodeHookSettings&& value) { m_dialogCodeHook = std::move(value); }

    /**
     * <p>The dialog Lambda function specified for the intent.</p>
     */
    inline CreateIntentResult& WithDialogCodeHook(const DialogCodeHookSettings& value) { SetDialogCodeHook(value); return *this;}

    /**
     * <p>The dialog Lambda function specified for the intent.</p>
     */
    inline CreateIntentResult& WithDialogCodeHook(DialogCodeHookSettings&& value) { SetDialogCodeHook(std::move(value)); return *this;}


    /**
     * <p>The fulfillment Lambda function specified for the intent.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const{ return m_fulfillmentCodeHook; }

    /**
     * <p>The fulfillment Lambda function specified for the intent.</p>
     */
    inline void SetFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { m_fulfillmentCodeHook = value; }

    /**
     * <p>The fulfillment Lambda function specified for the intent.</p>
     */
    inline void SetFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { m_fulfillmentCodeHook = std::move(value); }

    /**
     * <p>The fulfillment Lambda function specified for the intent.</p>
     */
    inline CreateIntentResult& WithFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { SetFulfillmentCodeHook(value); return *this;}

    /**
     * <p>The fulfillment Lambda function specified for the intent.</p>
     */
    inline CreateIntentResult& WithFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { SetFulfillmentCodeHook(std::move(value)); return *this;}


    /**
     * <p>The confirmation setting specified for the intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const{ return m_intentConfirmationSetting; }

    /**
     * <p>The confirmation setting specified for the intent.</p>
     */
    inline void SetIntentConfirmationSetting(const IntentConfirmationSetting& value) { m_intentConfirmationSetting = value; }

    /**
     * <p>The confirmation setting specified for the intent.</p>
     */
    inline void SetIntentConfirmationSetting(IntentConfirmationSetting&& value) { m_intentConfirmationSetting = std::move(value); }

    /**
     * <p>The confirmation setting specified for the intent.</p>
     */
    inline CreateIntentResult& WithIntentConfirmationSetting(const IntentConfirmationSetting& value) { SetIntentConfirmationSetting(value); return *this;}

    /**
     * <p>The confirmation setting specified for the intent.</p>
     */
    inline CreateIntentResult& WithIntentConfirmationSetting(IntentConfirmationSetting&& value) { SetIntentConfirmationSetting(std::move(value)); return *this;}


    /**
     * <p>The closing setting specified for the intent.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const{ return m_intentClosingSetting; }

    /**
     * <p>The closing setting specified for the intent.</p>
     */
    inline void SetIntentClosingSetting(const IntentClosingSetting& value) { m_intentClosingSetting = value; }

    /**
     * <p>The closing setting specified for the intent.</p>
     */
    inline void SetIntentClosingSetting(IntentClosingSetting&& value) { m_intentClosingSetting = std::move(value); }

    /**
     * <p>The closing setting specified for the intent.</p>
     */
    inline CreateIntentResult& WithIntentClosingSetting(const IntentClosingSetting& value) { SetIntentClosingSetting(value); return *this;}

    /**
     * <p>The closing setting specified for the intent.</p>
     */
    inline CreateIntentResult& WithIntentClosingSetting(IntentClosingSetting&& value) { SetIntentClosingSetting(std::move(value)); return *this;}


    /**
     * <p>The list of input contexts specified for the intent.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }

    /**
     * <p>The list of input contexts specified for the intent.</p>
     */
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContexts = value; }

    /**
     * <p>The list of input contexts specified for the intent.</p>
     */
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContexts = std::move(value); }

    /**
     * <p>The list of input contexts specified for the intent.</p>
     */
    inline CreateIntentResult& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}

    /**
     * <p>The list of input contexts specified for the intent.</p>
     */
    inline CreateIntentResult& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}

    /**
     * <p>The list of input contexts specified for the intent.</p>
     */
    inline CreateIntentResult& AddInputContexts(const InputContext& value) { m_inputContexts.push_back(value); return *this; }

    /**
     * <p>The list of input contexts specified for the intent.</p>
     */
    inline CreateIntentResult& AddInputContexts(InputContext&& value) { m_inputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of output contexts specified for the intent.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }

    /**
     * <p>The list of output contexts specified for the intent.</p>
     */
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContexts = value; }

    /**
     * <p>The list of output contexts specified for the intent.</p>
     */
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContexts = std::move(value); }

    /**
     * <p>The list of output contexts specified for the intent.</p>
     */
    inline CreateIntentResult& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}

    /**
     * <p>The list of output contexts specified for the intent.</p>
     */
    inline CreateIntentResult& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}

    /**
     * <p>The list of output contexts specified for the intent.</p>
     */
    inline CreateIntentResult& AddOutputContexts(const OutputContext& value) { m_outputContexts.push_back(value); return *this; }

    /**
     * <p>The list of output contexts specified for the intent.</p>
     */
    inline CreateIntentResult& AddOutputContexts(OutputContext&& value) { m_outputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration for searching a Amazon Kendra index specified for the
     * intent.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }

    /**
     * <p>Configuration for searching a Amazon Kendra index specified for the
     * intent.</p>
     */
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfiguration = value; }

    /**
     * <p>Configuration for searching a Amazon Kendra index specified for the
     * intent.</p>
     */
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfiguration = std::move(value); }

    /**
     * <p>Configuration for searching a Amazon Kendra index specified for the
     * intent.</p>
     */
    inline CreateIntentResult& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}

    /**
     * <p>Configuration for searching a Amazon Kendra index specified for the
     * intent.</p>
     */
    inline CreateIntentResult& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}


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
    inline CreateIntentResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline CreateIntentResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline CreateIntentResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The identifier of the version of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The identifier of the version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The identifier of the version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The identifier of the version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The identifier of the version of the bot associated with the intent.</p>
     */
    inline CreateIntentResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with the intent.</p>
     */
    inline CreateIntentResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with the intent.</p>
     */
    inline CreateIntentResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale that the intent is specified to use.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale that the intent is specified to use.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The locale that the intent is specified to use.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The locale that the intent is specified to use.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The locale that the intent is specified to use.</p>
     */
    inline CreateIntentResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale that the intent is specified to use.</p>
     */
    inline CreateIntentResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale that the intent is specified to use.</p>
     */
    inline CreateIntentResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


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
    inline CreateIntentResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the intent was created.</p>
     */
    inline CreateIntentResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const{ return m_initialResponseSetting; }

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline void SetInitialResponseSetting(const InitialResponseSetting& value) { m_initialResponseSetting = value; }

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline void SetInitialResponseSetting(InitialResponseSetting&& value) { m_initialResponseSetting = std::move(value); }

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline CreateIntentResult& WithInitialResponseSetting(const InitialResponseSetting& value) { SetInitialResponseSetting(value); return *this;}

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline CreateIntentResult& WithInitialResponseSetting(InitialResponseSetting&& value) { SetInitialResponseSetting(std::move(value)); return *this;}

  private:

    Aws::String m_intentId;

    Aws::String m_intentName;

    Aws::String m_description;

    Aws::String m_parentIntentSignature;

    Aws::Vector<SampleUtterance> m_sampleUtterances;

    DialogCodeHookSettings m_dialogCodeHook;

    FulfillmentCodeHookSettings m_fulfillmentCodeHook;

    IntentConfirmationSetting m_intentConfirmationSetting;

    IntentClosingSetting m_intentClosingSetting;

    Aws::Vector<InputContext> m_inputContexts;

    Aws::Vector<OutputContext> m_outputContexts;

    KendraConfiguration m_kendraConfiguration;

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Utils::DateTime m_creationDateTime;

    InitialResponseSetting m_initialResponseSetting;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
