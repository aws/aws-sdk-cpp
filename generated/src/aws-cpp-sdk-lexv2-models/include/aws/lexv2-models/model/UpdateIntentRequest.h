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


    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }

    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }

    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }

    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline UpdateIntentRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline UpdateIntentRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the intent to update.</p>
     */
    inline UpdateIntentRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>The new name for the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The new name for the intent.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The new name for the intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The new name for the intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The new name for the intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The new name for the intent.</p>
     */
    inline UpdateIntentRequest& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The new name for the intent.</p>
     */
    inline UpdateIntentRequest& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The new name for the intent.</p>
     */
    inline UpdateIntentRequest& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The new description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description of the intent.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description of the intent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description of the intent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description of the intent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description of the intent.</p>
     */
    inline UpdateIntentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description of the intent.</p>
     */
    inline UpdateIntentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description of the intent.</p>
     */
    inline UpdateIntentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }

    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }

    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = value; }

    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::move(value); }

    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature.assign(value); }

    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline UpdateIntentRequest& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline UpdateIntentRequest& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}

    /**
     * <p>The signature of the new built-in intent to use as the parent of this
     * intent.</p>
     */
    inline UpdateIntentRequest& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}


    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }

    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }

    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }

    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline UpdateIntentRequest& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline UpdateIntentRequest& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline UpdateIntentRequest& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>New utterances used to invoke the intent.</p>
     */
    inline UpdateIntentRequest& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }


    /**
     * <p>The new Lambda function to use between each turn of the conversation with the
     * bot.</p>
     */
    inline const DialogCodeHookSettings& GetDialogCodeHook() const{ return m_dialogCodeHook; }

    /**
     * <p>The new Lambda function to use between each turn of the conversation with the
     * bot.</p>
     */
    inline bool DialogCodeHookHasBeenSet() const { return m_dialogCodeHookHasBeenSet; }

    /**
     * <p>The new Lambda function to use between each turn of the conversation with the
     * bot.</p>
     */
    inline void SetDialogCodeHook(const DialogCodeHookSettings& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = value; }

    /**
     * <p>The new Lambda function to use between each turn of the conversation with the
     * bot.</p>
     */
    inline void SetDialogCodeHook(DialogCodeHookSettings&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::move(value); }

    /**
     * <p>The new Lambda function to use between each turn of the conversation with the
     * bot.</p>
     */
    inline UpdateIntentRequest& WithDialogCodeHook(const DialogCodeHookSettings& value) { SetDialogCodeHook(value); return *this;}

    /**
     * <p>The new Lambda function to use between each turn of the conversation with the
     * bot.</p>
     */
    inline UpdateIntentRequest& WithDialogCodeHook(DialogCodeHookSettings&& value) { SetDialogCodeHook(std::move(value)); return *this;}


    /**
     * <p>The new Lambda function to call when all of the intents required slots are
     * provided and the intent is ready for fulfillment.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const{ return m_fulfillmentCodeHook; }

    /**
     * <p>The new Lambda function to call when all of the intents required slots are
     * provided and the intent is ready for fulfillment.</p>
     */
    inline bool FulfillmentCodeHookHasBeenSet() const { return m_fulfillmentCodeHookHasBeenSet; }

    /**
     * <p>The new Lambda function to call when all of the intents required slots are
     * provided and the intent is ready for fulfillment.</p>
     */
    inline void SetFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = value; }

    /**
     * <p>The new Lambda function to call when all of the intents required slots are
     * provided and the intent is ready for fulfillment.</p>
     */
    inline void SetFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = std::move(value); }

    /**
     * <p>The new Lambda function to call when all of the intents required slots are
     * provided and the intent is ready for fulfillment.</p>
     */
    inline UpdateIntentRequest& WithFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { SetFulfillmentCodeHook(value); return *this;}

    /**
     * <p>The new Lambda function to call when all of the intents required slots are
     * provided and the intent is ready for fulfillment.</p>
     */
    inline UpdateIntentRequest& WithFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { SetFulfillmentCodeHook(std::move(value)); return *this;}


    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline const Aws::Vector<SlotPriority>& GetSlotPriorities() const{ return m_slotPriorities; }

    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline bool SlotPrioritiesHasBeenSet() const { return m_slotPrioritiesHasBeenSet; }

    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline void SetSlotPriorities(const Aws::Vector<SlotPriority>& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities = value; }

    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline void SetSlotPriorities(Aws::Vector<SlotPriority>&& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities = std::move(value); }

    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline UpdateIntentRequest& WithSlotPriorities(const Aws::Vector<SlotPriority>& value) { SetSlotPriorities(value); return *this;}

    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline UpdateIntentRequest& WithSlotPriorities(Aws::Vector<SlotPriority>&& value) { SetSlotPriorities(std::move(value)); return *this;}

    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline UpdateIntentRequest& AddSlotPriorities(const SlotPriority& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities.push_back(value); return *this; }

    /**
     * <p>A new list of slots and their priorities that are contained by the
     * intent.</p>
     */
    inline UpdateIntentRequest& AddSlotPriorities(SlotPriority&& value) { m_slotPrioritiesHasBeenSet = true; m_slotPriorities.push_back(std::move(value)); return *this; }


    /**
     * <p>New prompts that Amazon Lex sends to the user to confirm the completion of an
     * intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const{ return m_intentConfirmationSetting; }

    /**
     * <p>New prompts that Amazon Lex sends to the user to confirm the completion of an
     * intent.</p>
     */
    inline bool IntentConfirmationSettingHasBeenSet() const { return m_intentConfirmationSettingHasBeenSet; }

    /**
     * <p>New prompts that Amazon Lex sends to the user to confirm the completion of an
     * intent.</p>
     */
    inline void SetIntentConfirmationSetting(const IntentConfirmationSetting& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = value; }

    /**
     * <p>New prompts that Amazon Lex sends to the user to confirm the completion of an
     * intent.</p>
     */
    inline void SetIntentConfirmationSetting(IntentConfirmationSetting&& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = std::move(value); }

    /**
     * <p>New prompts that Amazon Lex sends to the user to confirm the completion of an
     * intent.</p>
     */
    inline UpdateIntentRequest& WithIntentConfirmationSetting(const IntentConfirmationSetting& value) { SetIntentConfirmationSetting(value); return *this;}

    /**
     * <p>New prompts that Amazon Lex sends to the user to confirm the completion of an
     * intent.</p>
     */
    inline UpdateIntentRequest& WithIntentConfirmationSetting(IntentConfirmationSetting&& value) { SetIntentConfirmationSetting(std::move(value)); return *this;}


    /**
     * <p>The new response that Amazon Lex sends the user when the intent is
     * closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const{ return m_intentClosingSetting; }

    /**
     * <p>The new response that Amazon Lex sends the user when the intent is
     * closed.</p>
     */
    inline bool IntentClosingSettingHasBeenSet() const { return m_intentClosingSettingHasBeenSet; }

    /**
     * <p>The new response that Amazon Lex sends the user when the intent is
     * closed.</p>
     */
    inline void SetIntentClosingSetting(const IntentClosingSetting& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = value; }

    /**
     * <p>The new response that Amazon Lex sends the user when the intent is
     * closed.</p>
     */
    inline void SetIntentClosingSetting(IntentClosingSetting&& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = std::move(value); }

    /**
     * <p>The new response that Amazon Lex sends the user when the intent is
     * closed.</p>
     */
    inline UpdateIntentRequest& WithIntentClosingSetting(const IntentClosingSetting& value) { SetIntentClosingSetting(value); return *this;}

    /**
     * <p>The new response that Amazon Lex sends the user when the intent is
     * closed.</p>
     */
    inline UpdateIntentRequest& WithIntentClosingSetting(IntentClosingSetting&& value) { SetIntentClosingSetting(std::move(value)); return *this;}


    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline const Aws::Vector<InputContext>& GetInputContexts() const{ return m_inputContexts; }

    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }

    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContextsHasBeenSet = true; m_inputContexts = value; }

    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::move(value); }

    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline UpdateIntentRequest& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}

    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline UpdateIntentRequest& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}

    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline UpdateIntentRequest& AddInputContexts(const InputContext& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(value); return *this; }

    /**
     * <p>A new list of contexts that must be active in order for Amazon Lex to
     * consider the intent.</p>
     */
    inline UpdateIntentRequest& AddInputContexts(InputContext&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline const Aws::Vector<OutputContext>& GetOutputContexts() const{ return m_outputContexts; }

    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }

    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContextsHasBeenSet = true; m_outputContexts = value; }

    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::move(value); }

    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline UpdateIntentRequest& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}

    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline UpdateIntentRequest& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}

    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline UpdateIntentRequest& AddOutputContexts(const OutputContext& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(value); return *this; }

    /**
     * <p>A new list of contexts that Amazon Lex activates when the intent is
     * fulfilled.</p>
     */
    inline UpdateIntentRequest& AddOutputContexts(OutputContext&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>New configuration settings for connecting to an Amazon Kendra index.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }

    /**
     * <p>New configuration settings for connecting to an Amazon Kendra index.</p>
     */
    inline bool KendraConfigurationHasBeenSet() const { return m_kendraConfigurationHasBeenSet; }

    /**
     * <p>New configuration settings for connecting to an Amazon Kendra index.</p>
     */
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = value; }

    /**
     * <p>New configuration settings for connecting to an Amazon Kendra index.</p>
     */
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::move(value); }

    /**
     * <p>New configuration settings for connecting to an Amazon Kendra index.</p>
     */
    inline UpdateIntentRequest& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}

    /**
     * <p>New configuration settings for connecting to an Amazon Kendra index.</p>
     */
    inline UpdateIntentRequest& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline UpdateIntentRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline UpdateIntentRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contains the intent.</p>
     */
    inline UpdateIntentRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateIntentRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateIntentRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the intent. Must be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateIntentRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateIntentRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateIntentRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale where this intent is used. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateIntentRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p/>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const{ return m_initialResponseSetting; }

    /**
     * <p/>
     */
    inline bool InitialResponseSettingHasBeenSet() const { return m_initialResponseSettingHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetInitialResponseSetting(const InitialResponseSetting& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = value; }

    /**
     * <p/>
     */
    inline void SetInitialResponseSetting(InitialResponseSetting&& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = std::move(value); }

    /**
     * <p/>
     */
    inline UpdateIntentRequest& WithInitialResponseSetting(const InitialResponseSetting& value) { SetInitialResponseSetting(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateIntentRequest& WithInitialResponseSetting(InitialResponseSetting&& value) { SetInitialResponseSetting(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
