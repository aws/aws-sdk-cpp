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


    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline CreateIntentRequest& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline CreateIntentRequest& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent. Intent names must be unique in the locale that
     * contains the intent and cannot match the name of any built-in intent.</p>
     */
    inline CreateIntentRequest& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline CreateIntentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline CreateIntentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the intent. Use the description to help identify the intent
     * in lists.</p>
     */
    inline CreateIntentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline bool ParentIntentSignatureHasBeenSet() const { return m_parentIntentSignatureHasBeenSet; }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = value; }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::move(value); }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature.assign(value); }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline CreateIntentRequest& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline CreateIntentRequest& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the built-in intent to base this intent on.</p>
     */
    inline CreateIntentRequest& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}


    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }

    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }

    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }

    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline CreateIntentRequest& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline CreateIntentRequest& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline CreateIntentRequest& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>An array of strings that a user might say to signal the intent. For example,
     * "I want a pizza", or "I want a {PizzaSize} pizza". </p> <p>In an utterance, slot
     * names are enclosed in curly braces ("{", "}") to indicate where they should be
     * displayed in the utterance shown to the user.. </p>
     */
    inline CreateIntentRequest& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }


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
    inline bool DialogCodeHookHasBeenSet() const { return m_dialogCodeHookHasBeenSet; }

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
    inline void SetDialogCodeHook(const DialogCodeHookSettings& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = value; }

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
    inline void SetDialogCodeHook(DialogCodeHookSettings&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::move(value); }

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
    inline CreateIntentRequest& WithDialogCodeHook(const DialogCodeHookSettings& value) { SetDialogCodeHook(value); return *this;}

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
    inline CreateIntentRequest& WithDialogCodeHook(DialogCodeHookSettings&& value) { SetDialogCodeHook(std::move(value)); return *this;}


    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline const FulfillmentCodeHookSettings& GetFulfillmentCodeHook() const{ return m_fulfillmentCodeHook; }

    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline bool FulfillmentCodeHookHasBeenSet() const { return m_fulfillmentCodeHookHasBeenSet; }

    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline void SetFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = value; }

    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline void SetFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { m_fulfillmentCodeHookHasBeenSet = true; m_fulfillmentCodeHook = std::move(value); }

    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline CreateIntentRequest& WithFulfillmentCodeHook(const FulfillmentCodeHookSettings& value) { SetFulfillmentCodeHook(value); return *this;}

    /**
     * <p>Specifies that Amazon Lex invokes the alias Lambda function when the intent
     * is ready for fulfillment. You can invoke this function to complete the bot's
     * transaction with the user.</p> <p>For example, in a pizza ordering bot, the
     * Lambda function can look up the closest pizza restaurant to the customer's
     * location and then place an order on the customer's behalf.</p>
     */
    inline CreateIntentRequest& WithFulfillmentCodeHook(FulfillmentCodeHookSettings&& value) { SetFulfillmentCodeHook(std::move(value)); return *this;}


    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline const IntentConfirmationSetting& GetIntentConfirmationSetting() const{ return m_intentConfirmationSetting; }

    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline bool IntentConfirmationSettingHasBeenSet() const { return m_intentConfirmationSettingHasBeenSet; }

    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline void SetIntentConfirmationSetting(const IntentConfirmationSetting& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = value; }

    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline void SetIntentConfirmationSetting(IntentConfirmationSetting&& value) { m_intentConfirmationSettingHasBeenSet = true; m_intentConfirmationSetting = std::move(value); }

    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline CreateIntentRequest& WithIntentConfirmationSetting(const IntentConfirmationSetting& value) { SetIntentConfirmationSetting(value); return *this;}

    /**
     * <p>Provides prompts that Amazon Lex sends to the user to confirm the completion
     * of an intent. If the user answers "no," the settings contain a statement that is
     * sent to the user to end the intent.</p>
     */
    inline CreateIntentRequest& WithIntentConfirmationSetting(IntentConfirmationSetting&& value) { SetIntentConfirmationSetting(std::move(value)); return *this;}


    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline const IntentClosingSetting& GetIntentClosingSetting() const{ return m_intentClosingSetting; }

    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline bool IntentClosingSettingHasBeenSet() const { return m_intentClosingSettingHasBeenSet; }

    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline void SetIntentClosingSetting(const IntentClosingSetting& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = value; }

    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline void SetIntentClosingSetting(IntentClosingSetting&& value) { m_intentClosingSettingHasBeenSet = true; m_intentClosingSetting = std::move(value); }

    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline CreateIntentRequest& WithIntentClosingSetting(const IntentClosingSetting& value) { SetIntentClosingSetting(value); return *this;}

    /**
     * <p>Sets the response that Amazon Lex sends to the user when the intent is
     * closed.</p>
     */
    inline CreateIntentRequest& WithIntentClosingSetting(IntentClosingSetting&& value) { SetIntentClosingSetting(std::move(value)); return *this;}


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
    inline bool InputContextsHasBeenSet() const { return m_inputContextsHasBeenSet; }

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
    inline void SetInputContexts(const Aws::Vector<InputContext>& value) { m_inputContextsHasBeenSet = true; m_inputContexts = value; }

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
    inline void SetInputContexts(Aws::Vector<InputContext>&& value) { m_inputContextsHasBeenSet = true; m_inputContexts = std::move(value); }

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
    inline CreateIntentRequest& WithInputContexts(const Aws::Vector<InputContext>& value) { SetInputContexts(value); return *this;}

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
    inline CreateIntentRequest& WithInputContexts(Aws::Vector<InputContext>&& value) { SetInputContexts(std::move(value)); return *this;}

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
    inline CreateIntentRequest& AddInputContexts(const InputContext& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(value); return *this; }

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
    inline CreateIntentRequest& AddInputContexts(InputContext&& value) { m_inputContextsHasBeenSet = true; m_inputContexts.push_back(std::move(value)); return *this; }


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
    inline bool OutputContextsHasBeenSet() const { return m_outputContextsHasBeenSet; }

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
    inline void SetOutputContexts(const Aws::Vector<OutputContext>& value) { m_outputContextsHasBeenSet = true; m_outputContexts = value; }

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
    inline void SetOutputContexts(Aws::Vector<OutputContext>&& value) { m_outputContextsHasBeenSet = true; m_outputContexts = std::move(value); }

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
    inline CreateIntentRequest& WithOutputContexts(const Aws::Vector<OutputContext>& value) { SetOutputContexts(value); return *this;}

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
    inline CreateIntentRequest& WithOutputContexts(Aws::Vector<OutputContext>&& value) { SetOutputContexts(std::move(value)); return *this;}

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
    inline CreateIntentRequest& AddOutputContexts(const OutputContext& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(value); return *this; }

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
    inline CreateIntentRequest& AddOutputContexts(OutputContext&& value) { m_outputContextsHasBeenSet = true; m_outputContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline const KendraConfiguration& GetKendraConfiguration() const{ return m_kendraConfiguration; }

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline bool KendraConfigurationHasBeenSet() const { return m_kendraConfigurationHasBeenSet; }

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline void SetKendraConfiguration(const KendraConfiguration& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = value; }

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline void SetKendraConfiguration(KendraConfiguration&& value) { m_kendraConfigurationHasBeenSet = true; m_kendraConfiguration = std::move(value); }

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline CreateIntentRequest& WithKendraConfiguration(const KendraConfiguration& value) { SetKendraConfiguration(value); return *this;}

    /**
     * <p>Configuration information required to use the
     * <code>AMAZON.KendraSearchIntent</code> intent to connect to an Amazon Kendra
     * index. The <code>AMAZON.KendraSearchIntent</code> intent is called when Amazon
     * Lex can't determine another intent to invoke.</p>
     */
    inline CreateIntentRequest& WithKendraConfiguration(KendraConfiguration&& value) { SetKendraConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline CreateIntentRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline CreateIntentRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with this intent.</p>
     */
    inline CreateIntentRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline CreateIntentRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline CreateIntentRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The identifier of the version of the bot associated with this intent.</p>
     */
    inline CreateIntentRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateIntentRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateIntentRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale where this intent is used. All of
     * the bots, slot types, and slots used by the intent must have the same locale.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateIntentRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline const InitialResponseSetting& GetInitialResponseSetting() const{ return m_initialResponseSetting; }

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline bool InitialResponseSettingHasBeenSet() const { return m_initialResponseSettingHasBeenSet; }

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline void SetInitialResponseSetting(const InitialResponseSetting& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = value; }

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline void SetInitialResponseSetting(InitialResponseSetting&& value) { m_initialResponseSettingHasBeenSet = true; m_initialResponseSetting = std::move(value); }

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline CreateIntentRequest& WithInitialResponseSetting(const InitialResponseSetting& value) { SetInitialResponseSetting(value); return *this;}

    /**
     * <p>Configuration settings for the response that is sent to the user at the
     * beginning of a conversation, before eliciting slot values.</p>
     */
    inline CreateIntentRequest& WithInitialResponseSetting(InitialResponseSetting&& value) { SetInitialResponseSetting(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
