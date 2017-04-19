/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/lex-models/model/Statement.h>
#include <aws/lex-models/model/FollowUpPrompt.h>
#include <aws/lex-models/model/CodeHook.h>
#include <aws/lex-models/model/FulfillmentActivity.h>
#include <aws/lex-models/model/Slot.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API PutIntentRequest : public LexModelBuildingServiceRequest
  {
  public:
    PutIntentRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutIntentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutIntentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent. The name is <i>not</i> case sensitive. </p> <p>The
     * name can't match a built-in intent name, or a built-in intent name with
     * "AMAZON." removed. For example, because there is a built-in intent called
     * <code>AMAZON.HelpIntent</code>, you can't create a custom intent called
     * <code>HelpIntent</code>.</p> <p>For a list of built-in intents, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutIntentRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A description of the intent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the intent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the intent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the intent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the intent.</p>
     */
    inline PutIntentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the intent.</p>
     */
    inline PutIntentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the intent.</p>
     */
    inline PutIntentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * &lt;xref linkend="how-it-works"/&gt;. </p>
     */
    inline const Aws::Vector<Slot>& GetSlots() const{ return m_slots; }

    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * &lt;xref linkend="how-it-works"/&gt;. </p>
     */
    inline void SetSlots(const Aws::Vector<Slot>& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * &lt;xref linkend="how-it-works"/&gt;. </p>
     */
    inline void SetSlots(Aws::Vector<Slot>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * &lt;xref linkend="how-it-works"/&gt;. </p>
     */
    inline PutIntentRequest& WithSlots(const Aws::Vector<Slot>& value) { SetSlots(value); return *this;}

    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * &lt;xref linkend="how-it-works"/&gt;. </p>
     */
    inline PutIntentRequest& WithSlots(Aws::Vector<Slot>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * &lt;xref linkend="how-it-works"/&gt;. </p>
     */
    inline PutIntentRequest& AddSlots(const Slot& value) { m_slotsHasBeenSet = true; m_slots.push_back(value); return *this; }

    /**
     * <p>An array of intent slots. At runtime, Amazon Lex elicits required slot values
     * from the user using prompts defined in the slots. For more information, see
     * &lt;xref linkend="how-it-works"/&gt;. </p>
     */
    inline PutIntentRequest& AddSlots(Slot&& value) { m_slotsHasBeenSet = true; m_slots.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline void SetSampleUtterances(const Aws::Vector<Aws::String>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline void SetSampleUtterances(Aws::Vector<Aws::String>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline PutIntentRequest& WithSampleUtterances(const Aws::Vector<Aws::String>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline PutIntentRequest& WithSampleUtterances(Aws::Vector<Aws::String>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline PutIntentRequest& AddSampleUtterances(const Aws::String& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline PutIntentRequest& AddSampleUtterances(Aws::String&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of utterances (strings) that a user might say to signal the intent.
     * For example, "I want {PizzaSize} pizza", "Order {Quantity} {PizzaSize} pizzas".
     * </p> <p>In each utterance, a slot name is enclosed in curly braces. </p>
     */
    inline PutIntentRequest& AddSampleUtterances(const char* value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p> <note> <p>You you must provide both the
     * <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline const Prompt& GetConfirmationPrompt() const{ return m_confirmationPrompt; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p> <note> <p>You you must provide both the
     * <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline void SetConfirmationPrompt(const Prompt& value) { m_confirmationPromptHasBeenSet = true; m_confirmationPrompt = value; }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p> <note> <p>You you must provide both the
     * <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline void SetConfirmationPrompt(Prompt&& value) { m_confirmationPromptHasBeenSet = true; m_confirmationPrompt = std::move(value); }

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p> <note> <p>You you must provide both the
     * <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline PutIntentRequest& WithConfirmationPrompt(const Prompt& value) { SetConfirmationPrompt(value); return *this;}

    /**
     * <p>Prompts the user to confirm the intent. This question should have a yes or no
     * answer.</p> <p>Amazon Lex uses this prompt to ensure that the user acknowledges
     * that the intent is ready for fulfillment. For example, with the
     * <code>OrderPizza</code> intent, you might want to confirm that the order is
     * correct before placing it. For other intents, such as intents that simply
     * respond to user questions, you might not need to ask the user for confirmation
     * before providing the information. </p> <note> <p>You you must provide both the
     * <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline PutIntentRequest& WithConfirmationPrompt(Prompt&& value) { SetConfirmationPrompt(std::move(value)); return *this;}

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p> <note> <p>You must provide both
     * the <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline const Statement& GetRejectionStatement() const{ return m_rejectionStatement; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p> <note> <p>You must provide both
     * the <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline void SetRejectionStatement(const Statement& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = value; }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p> <note> <p>You must provide both
     * the <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline void SetRejectionStatement(Statement&& value) { m_rejectionStatementHasBeenSet = true; m_rejectionStatement = std::move(value); }

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p> <note> <p>You must provide both
     * the <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline PutIntentRequest& WithRejectionStatement(const Statement& value) { SetRejectionStatement(value); return *this;}

    /**
     * <p>When the user answers "no" to the question defined in
     * <code>confirmationPrompt</code>, Amazon Lex responds with this statement to
     * acknowledge that the intent was canceled. </p> <note> <p>You must provide both
     * the <code>rejectionStatement</code> and the <code>confirmationPrompt</code>, or
     * neither.</p> </note>
     */
    inline PutIntentRequest& WithRejectionStatement(Statement&& value) { SetRejectionStatement(std::move(value)); return *this;}

    /**
     * <p>A user prompt for additional activity after an intent is fulfilled. For
     * example, after the <code>OrderPizza</code> intent is fulfilled (your Lambda
     * function placed an order with a pizzeria), you might prompt the user to find if
     * they want to order a drink (assuming that you have defined an
     * <code>OrderDrink</code> intent in your bot).</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one. For example, your bot may not solicit both
     * the following: </p> <p> Follow up prompt - "<code>$session.FirstName</code>,
     * your pizza order has been placed. Would you like to order a drink or a dessert?"
     * </p> <p> Conclusion statement - "<code>$session.FirstName</code>, your pizza
     * order has been placed." </p> </note>
     */
    inline const FollowUpPrompt& GetFollowUpPrompt() const{ return m_followUpPrompt; }

    /**
     * <p>A user prompt for additional activity after an intent is fulfilled. For
     * example, after the <code>OrderPizza</code> intent is fulfilled (your Lambda
     * function placed an order with a pizzeria), you might prompt the user to find if
     * they want to order a drink (assuming that you have defined an
     * <code>OrderDrink</code> intent in your bot).</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one. For example, your bot may not solicit both
     * the following: </p> <p> Follow up prompt - "<code>$session.FirstName</code>,
     * your pizza order has been placed. Would you like to order a drink or a dessert?"
     * </p> <p> Conclusion statement - "<code>$session.FirstName</code>, your pizza
     * order has been placed." </p> </note>
     */
    inline void SetFollowUpPrompt(const FollowUpPrompt& value) { m_followUpPromptHasBeenSet = true; m_followUpPrompt = value; }

    /**
     * <p>A user prompt for additional activity after an intent is fulfilled. For
     * example, after the <code>OrderPizza</code> intent is fulfilled (your Lambda
     * function placed an order with a pizzeria), you might prompt the user to find if
     * they want to order a drink (assuming that you have defined an
     * <code>OrderDrink</code> intent in your bot).</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one. For example, your bot may not solicit both
     * the following: </p> <p> Follow up prompt - "<code>$session.FirstName</code>,
     * your pizza order has been placed. Would you like to order a drink or a dessert?"
     * </p> <p> Conclusion statement - "<code>$session.FirstName</code>, your pizza
     * order has been placed." </p> </note>
     */
    inline void SetFollowUpPrompt(FollowUpPrompt&& value) { m_followUpPromptHasBeenSet = true; m_followUpPrompt = std::move(value); }

    /**
     * <p>A user prompt for additional activity after an intent is fulfilled. For
     * example, after the <code>OrderPizza</code> intent is fulfilled (your Lambda
     * function placed an order with a pizzeria), you might prompt the user to find if
     * they want to order a drink (assuming that you have defined an
     * <code>OrderDrink</code> intent in your bot).</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one. For example, your bot may not solicit both
     * the following: </p> <p> Follow up prompt - "<code>$session.FirstName</code>,
     * your pizza order has been placed. Would you like to order a drink or a dessert?"
     * </p> <p> Conclusion statement - "<code>$session.FirstName</code>, your pizza
     * order has been placed." </p> </note>
     */
    inline PutIntentRequest& WithFollowUpPrompt(const FollowUpPrompt& value) { SetFollowUpPrompt(value); return *this;}

    /**
     * <p>A user prompt for additional activity after an intent is fulfilled. For
     * example, after the <code>OrderPizza</code> intent is fulfilled (your Lambda
     * function placed an order with a pizzeria), you might prompt the user to find if
     * they want to order a drink (assuming that you have defined an
     * <code>OrderDrink</code> intent in your bot).</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one. For example, your bot may not solicit both
     * the following: </p> <p> Follow up prompt - "<code>$session.FirstName</code>,
     * your pizza order has been placed. Would you like to order a drink or a dessert?"
     * </p> <p> Conclusion statement - "<code>$session.FirstName</code>, your pizza
     * order has been placed." </p> </note>
     */
    inline PutIntentRequest& WithFollowUpPrompt(FollowUpPrompt&& value) { SetFollowUpPrompt(std::move(value)); return *this;}

    /**
     * <p> The statement that you want Amazon Lex to convey to the user after the
     * intent is successfully fulfilled by the Lambda function. </p> <p>This element is
     * relevant only if you provide a Lambda function in the
     * <code>fulfillmentActivity</code>. If you return the intent to the client
     * application, you can't specify this element.</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one.</p> </note>
     */
    inline const Statement& GetConclusionStatement() const{ return m_conclusionStatement; }

    /**
     * <p> The statement that you want Amazon Lex to convey to the user after the
     * intent is successfully fulfilled by the Lambda function. </p> <p>This element is
     * relevant only if you provide a Lambda function in the
     * <code>fulfillmentActivity</code>. If you return the intent to the client
     * application, you can't specify this element.</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one.</p> </note>
     */
    inline void SetConclusionStatement(const Statement& value) { m_conclusionStatementHasBeenSet = true; m_conclusionStatement = value; }

    /**
     * <p> The statement that you want Amazon Lex to convey to the user after the
     * intent is successfully fulfilled by the Lambda function. </p> <p>This element is
     * relevant only if you provide a Lambda function in the
     * <code>fulfillmentActivity</code>. If you return the intent to the client
     * application, you can't specify this element.</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one.</p> </note>
     */
    inline void SetConclusionStatement(Statement&& value) { m_conclusionStatementHasBeenSet = true; m_conclusionStatement = std::move(value); }

    /**
     * <p> The statement that you want Amazon Lex to convey to the user after the
     * intent is successfully fulfilled by the Lambda function. </p> <p>This element is
     * relevant only if you provide a Lambda function in the
     * <code>fulfillmentActivity</code>. If you return the intent to the client
     * application, you can't specify this element.</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one.</p> </note>
     */
    inline PutIntentRequest& WithConclusionStatement(const Statement& value) { SetConclusionStatement(value); return *this;}

    /**
     * <p> The statement that you want Amazon Lex to convey to the user after the
     * intent is successfully fulfilled by the Lambda function. </p> <p>This element is
     * relevant only if you provide a Lambda function in the
     * <code>fulfillmentActivity</code>. If you return the intent to the client
     * application, you can't specify this element.</p> <note> <p>The
     * <code>followUpPrompt</code> and <code>conclusionStatement</code> are mutually
     * exclusive. You can specify only one.</p> </note>
     */
    inline PutIntentRequest& WithConclusionStatement(Statement&& value) { SetConclusionStatement(std::move(value)); return *this;}

    /**
     * <p> Specifies a Lambda function to invoke for each user input. You can invoke
     * this Lambda function to personalize user interaction. </p> <p>For example,
     * suppose your bot determines that the user is John. Your Lambda function might
     * retrieve John's information from a backend database and prepopulate some of the
     * values. For example, if you find that John is gluten intolerant, you might set
     * the corresponding intent slot, <code>GlutenIntolerant</code>, to true. You might
     * find John's phone number and set the corresponding session attribute. </p>
     */
    inline const CodeHook& GetDialogCodeHook() const{ return m_dialogCodeHook; }

    /**
     * <p> Specifies a Lambda function to invoke for each user input. You can invoke
     * this Lambda function to personalize user interaction. </p> <p>For example,
     * suppose your bot determines that the user is John. Your Lambda function might
     * retrieve John's information from a backend database and prepopulate some of the
     * values. For example, if you find that John is gluten intolerant, you might set
     * the corresponding intent slot, <code>GlutenIntolerant</code>, to true. You might
     * find John's phone number and set the corresponding session attribute. </p>
     */
    inline void SetDialogCodeHook(const CodeHook& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = value; }

    /**
     * <p> Specifies a Lambda function to invoke for each user input. You can invoke
     * this Lambda function to personalize user interaction. </p> <p>For example,
     * suppose your bot determines that the user is John. Your Lambda function might
     * retrieve John's information from a backend database and prepopulate some of the
     * values. For example, if you find that John is gluten intolerant, you might set
     * the corresponding intent slot, <code>GlutenIntolerant</code>, to true. You might
     * find John's phone number and set the corresponding session attribute. </p>
     */
    inline void SetDialogCodeHook(CodeHook&& value) { m_dialogCodeHookHasBeenSet = true; m_dialogCodeHook = std::move(value); }

    /**
     * <p> Specifies a Lambda function to invoke for each user input. You can invoke
     * this Lambda function to personalize user interaction. </p> <p>For example,
     * suppose your bot determines that the user is John. Your Lambda function might
     * retrieve John's information from a backend database and prepopulate some of the
     * values. For example, if you find that John is gluten intolerant, you might set
     * the corresponding intent slot, <code>GlutenIntolerant</code>, to true. You might
     * find John's phone number and set the corresponding session attribute. </p>
     */
    inline PutIntentRequest& WithDialogCodeHook(const CodeHook& value) { SetDialogCodeHook(value); return *this;}

    /**
     * <p> Specifies a Lambda function to invoke for each user input. You can invoke
     * this Lambda function to personalize user interaction. </p> <p>For example,
     * suppose your bot determines that the user is John. Your Lambda function might
     * retrieve John's information from a backend database and prepopulate some of the
     * values. For example, if you find that John is gluten intolerant, you might set
     * the corresponding intent slot, <code>GlutenIntolerant</code>, to true. You might
     * find John's phone number and set the corresponding session attribute. </p>
     */
    inline PutIntentRequest& WithDialogCodeHook(CodeHook&& value) { SetDialogCodeHook(std::move(value)); return *this;}

    /**
     * <p> Describes how the intent is fulfilled. For example, after a user provides
     * all of the information for a pizza order, <code>fulfillmentActivity</code>
     * defines how the bot places an order with a local pizza store. </p> <p> You might
     * configure Amazon Lex to return all of the intent information to the client
     * application, or direct it to invoke a Lambda function that can process the
     * intent (for example, place an order with a pizzeria). </p>
     */
    inline const FulfillmentActivity& GetFulfillmentActivity() const{ return m_fulfillmentActivity; }

    /**
     * <p> Describes how the intent is fulfilled. For example, after a user provides
     * all of the information for a pizza order, <code>fulfillmentActivity</code>
     * defines how the bot places an order with a local pizza store. </p> <p> You might
     * configure Amazon Lex to return all of the intent information to the client
     * application, or direct it to invoke a Lambda function that can process the
     * intent (for example, place an order with a pizzeria). </p>
     */
    inline void SetFulfillmentActivity(const FulfillmentActivity& value) { m_fulfillmentActivityHasBeenSet = true; m_fulfillmentActivity = value; }

    /**
     * <p> Describes how the intent is fulfilled. For example, after a user provides
     * all of the information for a pizza order, <code>fulfillmentActivity</code>
     * defines how the bot places an order with a local pizza store. </p> <p> You might
     * configure Amazon Lex to return all of the intent information to the client
     * application, or direct it to invoke a Lambda function that can process the
     * intent (for example, place an order with a pizzeria). </p>
     */
    inline void SetFulfillmentActivity(FulfillmentActivity&& value) { m_fulfillmentActivityHasBeenSet = true; m_fulfillmentActivity = std::move(value); }

    /**
     * <p> Describes how the intent is fulfilled. For example, after a user provides
     * all of the information for a pizza order, <code>fulfillmentActivity</code>
     * defines how the bot places an order with a local pizza store. </p> <p> You might
     * configure Amazon Lex to return all of the intent information to the client
     * application, or direct it to invoke a Lambda function that can process the
     * intent (for example, place an order with a pizzeria). </p>
     */
    inline PutIntentRequest& WithFulfillmentActivity(const FulfillmentActivity& value) { SetFulfillmentActivity(value); return *this;}

    /**
     * <p> Describes how the intent is fulfilled. For example, after a user provides
     * all of the information for a pizza order, <code>fulfillmentActivity</code>
     * defines how the bot places an order with a local pizza store. </p> <p> You might
     * configure Amazon Lex to return all of the intent information to the client
     * application, or direct it to invoke a Lambda function that can process the
     * intent (for example, place an order with a pizzeria). </p>
     */
    inline PutIntentRequest& WithFulfillmentActivity(FulfillmentActivity&& value) { SetFulfillmentActivity(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline const Aws::String& GetParentIntentSignature() const{ return m_parentIntentSignature; }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetParentIntentSignature(const Aws::String& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = value; }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetParentIntentSignature(Aws::String&& value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature = std::move(value); }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline void SetParentIntentSignature(const char* value) { m_parentIntentSignatureHasBeenSet = true; m_parentIntentSignature.assign(value); }

    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutIntentRequest& WithParentIntentSignature(const Aws::String& value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutIntentRequest& WithParentIntentSignature(Aws::String&& value) { SetParentIntentSignature(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the built-in intent to base this intent on. To find
     * the signature for an intent, see <a
     * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/standard-intents">Standard
     * Built-in Intents</a> in the <i>Alexa Skills Kit</i>.</p>
     */
    inline PutIntentRequest& WithParentIntentSignature(const char* value) { SetParentIntentSignature(value); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutIntentRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutIntentRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Identifies a specific revision of the <code>$LATEST</code> version.</p>
     * <p>When you create a new intent, leave the <code>checksum</code> field blank. If
     * you specify a checksum you get a <code>BadRequestException</code> exception.</p>
     * <p>When you want to update a intent, set the <code>checksum</code> field to the
     * checksum of the most recent revision of the <code>$LATEST</code> version. If you
     * don't specify the <code> checksum</code> field, or if the checksum does not
     * match the <code>$LATEST</code> version, you get a
     * <code>PreconditionFailedException</code> exception.</p>
     */
    inline PutIntentRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Slot> m_slots;
    bool m_slotsHasBeenSet;
    Aws::Vector<Aws::String> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet;
    Prompt m_confirmationPrompt;
    bool m_confirmationPromptHasBeenSet;
    Statement m_rejectionStatement;
    bool m_rejectionStatementHasBeenSet;
    FollowUpPrompt m_followUpPrompt;
    bool m_followUpPromptHasBeenSet;
    Statement m_conclusionStatement;
    bool m_conclusionStatementHasBeenSet;
    CodeHook m_dialogCodeHook;
    bool m_dialogCodeHookHasBeenSet;
    FulfillmentActivity m_fulfillmentActivity;
    bool m_fulfillmentActivityHasBeenSet;
    Aws::String m_parentIntentSignature;
    bool m_parentIntentSignatureHasBeenSet;
    Aws::String m_checksum;
    bool m_checksumHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
