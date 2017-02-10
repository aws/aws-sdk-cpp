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
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex/model/DialogState.h>
#include <aws/lex/model/ResponseCard.h>

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
namespace LexRuntimeService
{
namespace Model
{
  class AWS_LEXRUNTIMESERVICE_API PostTextResult
  {
  public:
    PostTextResult();
    PostTextResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PostTextResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Intent Amazon Lex inferred from the user input text. This is one of the
     * intents configured for the bot. </p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>Intent Amazon Lex inferred from the user input text. This is one of the
     * intents configured for the bot. </p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentName = value; }

    /**
     * <p>Intent Amazon Lex inferred from the user input text. This is one of the
     * intents configured for the bot. </p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentName = value; }

    /**
     * <p>Intent Amazon Lex inferred from the user input text. This is one of the
     * intents configured for the bot. </p>
     */
    inline void SetIntentName(const char* value) { m_intentName.assign(value); }

    /**
     * <p>Intent Amazon Lex inferred from the user input text. This is one of the
     * intents configured for the bot. </p>
     */
    inline PostTextResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>Intent Amazon Lex inferred from the user input text. This is one of the
     * intents configured for the bot. </p>
     */
    inline PostTextResult& WithIntentName(Aws::String&& value) { SetIntentName(value); return *this;}

    /**
     * <p>Intent Amazon Lex inferred from the user input text. This is one of the
     * intents configured for the bot. </p>
     */
    inline PostTextResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const{ return m_slots; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline void SetSlots(const Aws::Map<Aws::String, Aws::String>& value) { m_slots = value; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline void SetSlots(Aws::Map<Aws::String, Aws::String>&& value) { m_slots = value; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& WithSlots(const Aws::Map<Aws::String, Aws::String>& value) { SetSlots(value); return *this;}

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& WithSlots(Aws::Map<Aws::String, Aws::String>&& value) { SetSlots(value); return *this;}

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& AddSlots(const Aws::String& key, const Aws::String& value) { m_slots[key] = value; return *this; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& AddSlots(Aws::String&& key, const Aws::String& value) { m_slots[key] = value; return *this; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& AddSlots(const Aws::String& key, Aws::String&& value) { m_slots[key] = value; return *this; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& AddSlots(Aws::String&& key, Aws::String&& value) { m_slots[key] = value; return *this; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& AddSlots(const char* key, Aws::String&& value) { m_slots[key] = value; return *this; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& AddSlots(Aws::String&& key, const char* value) { m_slots[key] = value; return *this; }

    /**
     * <p> Intent slots (name/value pairs) Amazon Lex detected so far from the user
     * input in the conversation. </p>
     */
    inline PostTextResult& AddSlots(const char* key, const char* value) { m_slots[key] = value; return *this; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributes = value; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributes = value; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributes[key] = value; return *this; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributes[key] = value; return *this; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributes[key] = value; return *this; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributes[key] = value; return *this; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributes[key] = value; return *this; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributes[key] = value; return *this; }

    /**
     * <p>Map of key value pairs representing the session specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributes[key] = value; return *this; }

    /**
     * <p> Prompt (or statement) to convey to the user. This is based on the
     * application configuration and context. For example, if Amazon Lex did not
     * understand the user intent, it sends the <code>clarificationPrompt</code>
     * configured for the application. In another example, if the intent requires
     * confirmation before taking the fulfillment action, it sends the
     * <code>confirmationPrompt</code>. Suppose the Lambda function successfully
     * fulfilled the intent, and sent a message to convey to the user. In that
     * situation, Amazon Lex sends that message in the response. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> Prompt (or statement) to convey to the user. This is based on the
     * application configuration and context. For example, if Amazon Lex did not
     * understand the user intent, it sends the <code>clarificationPrompt</code>
     * configured for the application. In another example, if the intent requires
     * confirmation before taking the fulfillment action, it sends the
     * <code>confirmationPrompt</code>. Suppose the Lambda function successfully
     * fulfilled the intent, and sent a message to convey to the user. In that
     * situation, Amazon Lex sends that message in the response. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p> Prompt (or statement) to convey to the user. This is based on the
     * application configuration and context. For example, if Amazon Lex did not
     * understand the user intent, it sends the <code>clarificationPrompt</code>
     * configured for the application. In another example, if the intent requires
     * confirmation before taking the fulfillment action, it sends the
     * <code>confirmationPrompt</code>. Suppose the Lambda function successfully
     * fulfilled the intent, and sent a message to convey to the user. In that
     * situation, Amazon Lex sends that message in the response. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = value; }

    /**
     * <p> Prompt (or statement) to convey to the user. This is based on the
     * application configuration and context. For example, if Amazon Lex did not
     * understand the user intent, it sends the <code>clarificationPrompt</code>
     * configured for the application. In another example, if the intent requires
     * confirmation before taking the fulfillment action, it sends the
     * <code>confirmationPrompt</code>. Suppose the Lambda function successfully
     * fulfilled the intent, and sent a message to convey to the user. In that
     * situation, Amazon Lex sends that message in the response. </p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p> Prompt (or statement) to convey to the user. This is based on the
     * application configuration and context. For example, if Amazon Lex did not
     * understand the user intent, it sends the <code>clarificationPrompt</code>
     * configured for the application. In another example, if the intent requires
     * confirmation before taking the fulfillment action, it sends the
     * <code>confirmationPrompt</code>. Suppose the Lambda function successfully
     * fulfilled the intent, and sent a message to convey to the user. In that
     * situation, Amazon Lex sends that message in the response. </p>
     */
    inline PostTextResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> Prompt (or statement) to convey to the user. This is based on the
     * application configuration and context. For example, if Amazon Lex did not
     * understand the user intent, it sends the <code>clarificationPrompt</code>
     * configured for the application. In another example, if the intent requires
     * confirmation before taking the fulfillment action, it sends the
     * <code>confirmationPrompt</code>. Suppose the Lambda function successfully
     * fulfilled the intent, and sent a message to convey to the user. In that
     * situation, Amazon Lex sends that message in the response. </p>
     */
    inline PostTextResult& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p> Prompt (or statement) to convey to the user. This is based on the
     * application configuration and context. For example, if Amazon Lex did not
     * understand the user intent, it sends the <code>clarificationPrompt</code>
     * configured for the application. In another example, if the intent requires
     * confirmation before taking the fulfillment action, it sends the
     * <code>confirmationPrompt</code>. Suppose the Lambda function successfully
     * fulfilled the intent, and sent a message to convey to the user. In that
     * situation, Amazon Lex sends that message in the response. </p>
     */
    inline PostTextResult& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>Represents the message type to be conveyed to the user. For example: </p>
     * <ul> <li> <p> <code>ElicitIntent</code> – Amazon Lex wants to elicit user
     * intent. For example, Amazon Lex did not understand the first utterances such as
     * "I want to order pizza", which indicates the OrderPizza intent. If Amazon Lex
     * doesn't understand the intent, it returns this <code>dialogState</code>. Another
     * example is when your intent is configured with a follow up prompt. For example,
     * after OrderPizza intent is fulfilled, the intent might have a follow up prompt
     * such as " Do you want to order a drink or desert?" In this case, Amazon Lex
     * returns this <code>dialogState</code>. </p> </li> <li> <p>
     * <code>ConfirmIntent</code> – Amazon Lex is expecting a yes/no response from the
     * user indicating whether to go ahead and fulfill the intent (for example, OK to
     * go ahead and order the pizza). In addition to a yes/no reply, the user might
     * provide a response with additional slot information (either new slot information
     * or changes to the existing slot values). For example, "Yes, but change to thick
     * crust." Amazon Lex understands the additional information and updates the intent
     * slots accordingly. </p> <p> Consider another example. Before fulfilling an
     * order, your application might prompt for confirmation such as "Do you want to
     * place this pizza order?" A user might reply with "No, I want to order a drink."
     * Amazon Lex recognizes the new OrderDrink intent. </p> </li> <li> <p>
     * <code>ElicitSlot</code> – Amazon Lex is expecting a value of a slot for the
     * current intent. For example, suppose Amazon Lex asks, "What size pizza would you
     * like?" A user might reply with "Medium pepperoni pizza." Amazon Lex recognizes
     * the size and the topping as the two separate slot values. </p> </li> <li> <p>
     * <code>Fulfilled</code> – Conveys that the Lambda function has successfully
     * fulfilled the intent. If Lambda function returns a statement/message to convey
     * the fulfillment result, Amazon Lex passes this string to the client. If not,
     * Amazon Lex looks for <code>conclusionStatement</code> that you configured for
     * the intent. </p> <p> If both the Lambda function statement and the
     * <code>conclusionStatement</code> are missing, Amazon Lex throws a bad request
     * exception. </p> </li> <li> <p> <code>ReadyForFulfillment</code> – conveys that
     * the client has to do the fulfillment work for the intent. This is the case when
     * the current intent is configured with <code>ReturnIntent</code> as the
     * <code>fulfillmentActivity </code>, where Amazon Lex returns this state to
     * client. </p> </li> <li> <p> <code>Failed</code> – Conversation with the user
     * failed. Some of the reasons for this <code>dialogState</code> are: after the
     * configured number of attempts the user didn't provide an appropriate response,
     * or the Lambda function failed to fulfill an intent. </p> </li> </ul>
     */
    inline const DialogState& GetDialogState() const{ return m_dialogState; }

    /**
     * <p>Represents the message type to be conveyed to the user. For example: </p>
     * <ul> <li> <p> <code>ElicitIntent</code> – Amazon Lex wants to elicit user
     * intent. For example, Amazon Lex did not understand the first utterances such as
     * "I want to order pizza", which indicates the OrderPizza intent. If Amazon Lex
     * doesn't understand the intent, it returns this <code>dialogState</code>. Another
     * example is when your intent is configured with a follow up prompt. For example,
     * after OrderPizza intent is fulfilled, the intent might have a follow up prompt
     * such as " Do you want to order a drink or desert?" In this case, Amazon Lex
     * returns this <code>dialogState</code>. </p> </li> <li> <p>
     * <code>ConfirmIntent</code> – Amazon Lex is expecting a yes/no response from the
     * user indicating whether to go ahead and fulfill the intent (for example, OK to
     * go ahead and order the pizza). In addition to a yes/no reply, the user might
     * provide a response with additional slot information (either new slot information
     * or changes to the existing slot values). For example, "Yes, but change to thick
     * crust." Amazon Lex understands the additional information and updates the intent
     * slots accordingly. </p> <p> Consider another example. Before fulfilling an
     * order, your application might prompt for confirmation such as "Do you want to
     * place this pizza order?" A user might reply with "No, I want to order a drink."
     * Amazon Lex recognizes the new OrderDrink intent. </p> </li> <li> <p>
     * <code>ElicitSlot</code> – Amazon Lex is expecting a value of a slot for the
     * current intent. For example, suppose Amazon Lex asks, "What size pizza would you
     * like?" A user might reply with "Medium pepperoni pizza." Amazon Lex recognizes
     * the size and the topping as the two separate slot values. </p> </li> <li> <p>
     * <code>Fulfilled</code> – Conveys that the Lambda function has successfully
     * fulfilled the intent. If Lambda function returns a statement/message to convey
     * the fulfillment result, Amazon Lex passes this string to the client. If not,
     * Amazon Lex looks for <code>conclusionStatement</code> that you configured for
     * the intent. </p> <p> If both the Lambda function statement and the
     * <code>conclusionStatement</code> are missing, Amazon Lex throws a bad request
     * exception. </p> </li> <li> <p> <code>ReadyForFulfillment</code> – conveys that
     * the client has to do the fulfillment work for the intent. This is the case when
     * the current intent is configured with <code>ReturnIntent</code> as the
     * <code>fulfillmentActivity </code>, where Amazon Lex returns this state to
     * client. </p> </li> <li> <p> <code>Failed</code> – Conversation with the user
     * failed. Some of the reasons for this <code>dialogState</code> are: after the
     * configured number of attempts the user didn't provide an appropriate response,
     * or the Lambda function failed to fulfill an intent. </p> </li> </ul>
     */
    inline void SetDialogState(const DialogState& value) { m_dialogState = value; }

    /**
     * <p>Represents the message type to be conveyed to the user. For example: </p>
     * <ul> <li> <p> <code>ElicitIntent</code> – Amazon Lex wants to elicit user
     * intent. For example, Amazon Lex did not understand the first utterances such as
     * "I want to order pizza", which indicates the OrderPizza intent. If Amazon Lex
     * doesn't understand the intent, it returns this <code>dialogState</code>. Another
     * example is when your intent is configured with a follow up prompt. For example,
     * after OrderPizza intent is fulfilled, the intent might have a follow up prompt
     * such as " Do you want to order a drink or desert?" In this case, Amazon Lex
     * returns this <code>dialogState</code>. </p> </li> <li> <p>
     * <code>ConfirmIntent</code> – Amazon Lex is expecting a yes/no response from the
     * user indicating whether to go ahead and fulfill the intent (for example, OK to
     * go ahead and order the pizza). In addition to a yes/no reply, the user might
     * provide a response with additional slot information (either new slot information
     * or changes to the existing slot values). For example, "Yes, but change to thick
     * crust." Amazon Lex understands the additional information and updates the intent
     * slots accordingly. </p> <p> Consider another example. Before fulfilling an
     * order, your application might prompt for confirmation such as "Do you want to
     * place this pizza order?" A user might reply with "No, I want to order a drink."
     * Amazon Lex recognizes the new OrderDrink intent. </p> </li> <li> <p>
     * <code>ElicitSlot</code> – Amazon Lex is expecting a value of a slot for the
     * current intent. For example, suppose Amazon Lex asks, "What size pizza would you
     * like?" A user might reply with "Medium pepperoni pizza." Amazon Lex recognizes
     * the size and the topping as the two separate slot values. </p> </li> <li> <p>
     * <code>Fulfilled</code> – Conveys that the Lambda function has successfully
     * fulfilled the intent. If Lambda function returns a statement/message to convey
     * the fulfillment result, Amazon Lex passes this string to the client. If not,
     * Amazon Lex looks for <code>conclusionStatement</code> that you configured for
     * the intent. </p> <p> If both the Lambda function statement and the
     * <code>conclusionStatement</code> are missing, Amazon Lex throws a bad request
     * exception. </p> </li> <li> <p> <code>ReadyForFulfillment</code> – conveys that
     * the client has to do the fulfillment work for the intent. This is the case when
     * the current intent is configured with <code>ReturnIntent</code> as the
     * <code>fulfillmentActivity </code>, where Amazon Lex returns this state to
     * client. </p> </li> <li> <p> <code>Failed</code> – Conversation with the user
     * failed. Some of the reasons for this <code>dialogState</code> are: after the
     * configured number of attempts the user didn't provide an appropriate response,
     * or the Lambda function failed to fulfill an intent. </p> </li> </ul>
     */
    inline void SetDialogState(DialogState&& value) { m_dialogState = value; }

    /**
     * <p>Represents the message type to be conveyed to the user. For example: </p>
     * <ul> <li> <p> <code>ElicitIntent</code> – Amazon Lex wants to elicit user
     * intent. For example, Amazon Lex did not understand the first utterances such as
     * "I want to order pizza", which indicates the OrderPizza intent. If Amazon Lex
     * doesn't understand the intent, it returns this <code>dialogState</code>. Another
     * example is when your intent is configured with a follow up prompt. For example,
     * after OrderPizza intent is fulfilled, the intent might have a follow up prompt
     * such as " Do you want to order a drink or desert?" In this case, Amazon Lex
     * returns this <code>dialogState</code>. </p> </li> <li> <p>
     * <code>ConfirmIntent</code> – Amazon Lex is expecting a yes/no response from the
     * user indicating whether to go ahead and fulfill the intent (for example, OK to
     * go ahead and order the pizza). In addition to a yes/no reply, the user might
     * provide a response with additional slot information (either new slot information
     * or changes to the existing slot values). For example, "Yes, but change to thick
     * crust." Amazon Lex understands the additional information and updates the intent
     * slots accordingly. </p> <p> Consider another example. Before fulfilling an
     * order, your application might prompt for confirmation such as "Do you want to
     * place this pizza order?" A user might reply with "No, I want to order a drink."
     * Amazon Lex recognizes the new OrderDrink intent. </p> </li> <li> <p>
     * <code>ElicitSlot</code> – Amazon Lex is expecting a value of a slot for the
     * current intent. For example, suppose Amazon Lex asks, "What size pizza would you
     * like?" A user might reply with "Medium pepperoni pizza." Amazon Lex recognizes
     * the size and the topping as the two separate slot values. </p> </li> <li> <p>
     * <code>Fulfilled</code> – Conveys that the Lambda function has successfully
     * fulfilled the intent. If Lambda function returns a statement/message to convey
     * the fulfillment result, Amazon Lex passes this string to the client. If not,
     * Amazon Lex looks for <code>conclusionStatement</code> that you configured for
     * the intent. </p> <p> If both the Lambda function statement and the
     * <code>conclusionStatement</code> are missing, Amazon Lex throws a bad request
     * exception. </p> </li> <li> <p> <code>ReadyForFulfillment</code> – conveys that
     * the client has to do the fulfillment work for the intent. This is the case when
     * the current intent is configured with <code>ReturnIntent</code> as the
     * <code>fulfillmentActivity </code>, where Amazon Lex returns this state to
     * client. </p> </li> <li> <p> <code>Failed</code> – Conversation with the user
     * failed. Some of the reasons for this <code>dialogState</code> are: after the
     * configured number of attempts the user didn't provide an appropriate response,
     * or the Lambda function failed to fulfill an intent. </p> </li> </ul>
     */
    inline PostTextResult& WithDialogState(const DialogState& value) { SetDialogState(value); return *this;}

    /**
     * <p>Represents the message type to be conveyed to the user. For example: </p>
     * <ul> <li> <p> <code>ElicitIntent</code> – Amazon Lex wants to elicit user
     * intent. For example, Amazon Lex did not understand the first utterances such as
     * "I want to order pizza", which indicates the OrderPizza intent. If Amazon Lex
     * doesn't understand the intent, it returns this <code>dialogState</code>. Another
     * example is when your intent is configured with a follow up prompt. For example,
     * after OrderPizza intent is fulfilled, the intent might have a follow up prompt
     * such as " Do you want to order a drink or desert?" In this case, Amazon Lex
     * returns this <code>dialogState</code>. </p> </li> <li> <p>
     * <code>ConfirmIntent</code> – Amazon Lex is expecting a yes/no response from the
     * user indicating whether to go ahead and fulfill the intent (for example, OK to
     * go ahead and order the pizza). In addition to a yes/no reply, the user might
     * provide a response with additional slot information (either new slot information
     * or changes to the existing slot values). For example, "Yes, but change to thick
     * crust." Amazon Lex understands the additional information and updates the intent
     * slots accordingly. </p> <p> Consider another example. Before fulfilling an
     * order, your application might prompt for confirmation such as "Do you want to
     * place this pizza order?" A user might reply with "No, I want to order a drink."
     * Amazon Lex recognizes the new OrderDrink intent. </p> </li> <li> <p>
     * <code>ElicitSlot</code> – Amazon Lex is expecting a value of a slot for the
     * current intent. For example, suppose Amazon Lex asks, "What size pizza would you
     * like?" A user might reply with "Medium pepperoni pizza." Amazon Lex recognizes
     * the size and the topping as the two separate slot values. </p> </li> <li> <p>
     * <code>Fulfilled</code> – Conveys that the Lambda function has successfully
     * fulfilled the intent. If Lambda function returns a statement/message to convey
     * the fulfillment result, Amazon Lex passes this string to the client. If not,
     * Amazon Lex looks for <code>conclusionStatement</code> that you configured for
     * the intent. </p> <p> If both the Lambda function statement and the
     * <code>conclusionStatement</code> are missing, Amazon Lex throws a bad request
     * exception. </p> </li> <li> <p> <code>ReadyForFulfillment</code> – conveys that
     * the client has to do the fulfillment work for the intent. This is the case when
     * the current intent is configured with <code>ReturnIntent</code> as the
     * <code>fulfillmentActivity </code>, where Amazon Lex returns this state to
     * client. </p> </li> <li> <p> <code>Failed</code> – Conversation with the user
     * failed. Some of the reasons for this <code>dialogState</code> are: after the
     * configured number of attempts the user didn't provide an appropriate response,
     * or the Lambda function failed to fulfill an intent. </p> </li> </ul>
     */
    inline PostTextResult& WithDialogState(DialogState&& value) { SetDialogState(value); return *this;}

    /**
     * <p>If <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }

    /**
     * <p>If <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicit = value; }

    /**
     * <p>If <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicit = value; }

    /**
     * <p>If <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline void SetSlotToElicit(const char* value) { m_slotToElicit.assign(value); }

    /**
     * <p>If <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline PostTextResult& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>If <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline PostTextResult& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>If <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline PostTextResult& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Amazon Lex sends this in the response only if the <code>dialogState</code> value
     * indicates that a user response is expected. </p>
     */
    inline const ResponseCard& GetResponseCard() const{ return m_responseCard; }

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Amazon Lex sends this in the response only if the <code>dialogState</code> value
     * indicates that a user response is expected. </p>
     */
    inline void SetResponseCard(const ResponseCard& value) { m_responseCard = value; }

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Amazon Lex sends this in the response only if the <code>dialogState</code> value
     * indicates that a user response is expected. </p>
     */
    inline void SetResponseCard(ResponseCard&& value) { m_responseCard = value; }

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Amazon Lex sends this in the response only if the <code>dialogState</code> value
     * indicates that a user response is expected. </p>
     */
    inline PostTextResult& WithResponseCard(const ResponseCard& value) { SetResponseCard(value); return *this;}

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Amazon Lex sends this in the response only if the <code>dialogState</code> value
     * indicates that a user response is expected. </p>
     */
    inline PostTextResult& WithResponseCard(ResponseCard&& value) { SetResponseCard(value); return *this;}

  private:
    Aws::String m_intentName;
    Aws::Map<Aws::String, Aws::String> m_slots;
    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    Aws::String m_message;
    DialogState m_dialogState;
    Aws::String m_slotToElicit;
    ResponseCard m_responseCard;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
