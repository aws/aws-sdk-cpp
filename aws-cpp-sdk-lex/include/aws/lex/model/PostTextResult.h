/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lex/model/MessageFormatType.h>
#include <aws/lex/model/DialogState.h>
#include <aws/lex/model/ResponseCard.h>
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
namespace LexRuntimeService
{
namespace Model
{
  class AWS_LEXRUNTIMESERVICE_API PostTextResult
  {
  public:
    PostTextResult();
    PostTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PostTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentName = value; }

    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentName = std::move(value); }

    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline void SetIntentName(const char* value) { m_intentName.assign(value); }

    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline PostTextResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline PostTextResult& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The current user intent that Amazon Lex is aware of.</p>
     */
    inline PostTextResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const{ return m_slots; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline void SetSlots(const Aws::Map<Aws::String, Aws::String>& value) { m_slots = value; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline void SetSlots(Aws::Map<Aws::String, Aws::String>&& value) { m_slots = std::move(value); }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& WithSlots(const Aws::Map<Aws::String, Aws::String>& value) { SetSlots(value); return *this;}

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& WithSlots(Aws::Map<Aws::String, Aws::String>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& AddSlots(const Aws::String& key, const Aws::String& value) { m_slots.emplace(key, value); return *this; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& AddSlots(Aws::String&& key, const Aws::String& value) { m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& AddSlots(const Aws::String& key, Aws::String&& value) { m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& AddSlots(Aws::String&& key, Aws::String&& value) { m_slots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& AddSlots(const char* key, Aws::String&& value) { m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& AddSlots(Aws::String&& key, const char* value) { m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p> The intent slots that Amazon Lex detected from the user input in the
     * conversation. </p> <p>Amazon Lex creates a resolution list containing likely
     * values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline PostTextResult& AddSlots(const char* key, const char* value) { m_slots.emplace(key, value); return *this; }


    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributes = value; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributes = std::move(value); }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs representing the session-specific context
     * information.</p>
     */
    inline PostTextResult& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline PostTextResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline PostTextResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message to convey to the user. The message can come from the bot's
     * configuration or from a Lambda function.</p> <p>If the intent is not configured
     * with a Lambda function, or if the Lambda function returned <code>Delegate</code>
     * as the <code>dialogAction.type</code> its response, Amazon Lex decides on the
     * next course of action and selects an appropriate message from the bot's
     * configuration based on the current interaction context. For example, if Amazon
     * Lex isn't able to understand user input, it uses a clarification prompt
     * message.</p> <p>When you create an intent you can assign messages to groups.
     * When messages are assigned to groups Amazon Lex returns one message from each
     * group in the response. The message field is an escaped JSON string containing
     * the messages. For more information about the structure of the JSON string
     * returned, see <a>msg-prompts-formats</a>.</p> <p>If the Lambda function returns
     * a message, Amazon Lex passes it to the client in its response.</p>
     */
    inline PostTextResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format
     * defined by the Lambda function.</p> </li> <li> <p> <code>SSML</code> - The
     * message contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages from the groups that messages were assigned to when the
     * intent was created.</p> </li> </ul>
     */
    inline const MessageFormatType& GetMessageFormat() const{ return m_messageFormat; }

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format
     * defined by the Lambda function.</p> </li> <li> <p> <code>SSML</code> - The
     * message contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages from the groups that messages were assigned to when the
     * intent was created.</p> </li> </ul>
     */
    inline void SetMessageFormat(const MessageFormatType& value) { m_messageFormat = value; }

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format
     * defined by the Lambda function.</p> </li> <li> <p> <code>SSML</code> - The
     * message contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages from the groups that messages were assigned to when the
     * intent was created.</p> </li> </ul>
     */
    inline void SetMessageFormat(MessageFormatType&& value) { m_messageFormat = std::move(value); }

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format
     * defined by the Lambda function.</p> </li> <li> <p> <code>SSML</code> - The
     * message contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages from the groups that messages were assigned to when the
     * intent was created.</p> </li> </ul>
     */
    inline PostTextResult& WithMessageFormat(const MessageFormatType& value) { SetMessageFormat(value); return *this;}

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format
     * defined by the Lambda function.</p> </li> <li> <p> <code>SSML</code> - The
     * message contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages from the groups that messages were assigned to when the
     * intent was created.</p> </li> </ul>
     */
    inline PostTextResult& WithMessageFormat(MessageFormatType&& value) { SetMessageFormat(std::move(value)); return *this;}


    /**
     * <p> Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit user intent. </p> <p>For
     * example, a user might utter an intent ("I want to order a pizza"). If Amazon Lex
     * cannot infer the user intent from this utterance, it will return this
     * dialogState.</p> </li> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is
     * expecting a "yes" or "no" response. </p> <p> For example, Amazon Lex wants user
     * confirmation before fulfilling an intent. </p> <p>Instead of a simple "yes" or
     * "no," a user might respond with additional information. For example, "yes, but
     * make it thick crust pizza" or "no, I want to order a drink". Amazon Lex can
     * process such additional information (in these examples, update the crust type
     * slot value, or change intent from OrderPizza to OrderDrink).</p> </li> <li> <p>
     * <code>ElicitSlot</code> - Amazon Lex is expecting a slot value for the current
     * intent. </p> <p>For example, suppose that in the response Amazon Lex sends this
     * message: "What size pizza would you like?". A user might reply with the slot
     * value (e.g., "medium"). The user might also provide additional information in
     * the response (e.g., "medium thick crust pizza"). Amazon Lex can process such
     * additional information appropriately. </p> </li> <li> <p> <code>Fulfilled</code>
     * - Conveys that the Lambda function configured for the intent has successfully
     * fulfilled the intent. </p> </li> <li> <p> <code>ReadyForFulfillment</code> -
     * Conveys that the client has to fulfill the intent. </p> </li> <li> <p>
     * <code>Failed</code> - Conveys that the conversation with the user failed. </p>
     * <p> This can happen for various reasons including that the user did not provide
     * an appropriate response to prompts from the service (you can configure how many
     * times Amazon Lex can prompt a user for specific information), or the Lambda
     * function failed to fulfill the intent. </p> </li> </ul>
     */
    inline const DialogState& GetDialogState() const{ return m_dialogState; }

    /**
     * <p> Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit user intent. </p> <p>For
     * example, a user might utter an intent ("I want to order a pizza"). If Amazon Lex
     * cannot infer the user intent from this utterance, it will return this
     * dialogState.</p> </li> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is
     * expecting a "yes" or "no" response. </p> <p> For example, Amazon Lex wants user
     * confirmation before fulfilling an intent. </p> <p>Instead of a simple "yes" or
     * "no," a user might respond with additional information. For example, "yes, but
     * make it thick crust pizza" or "no, I want to order a drink". Amazon Lex can
     * process such additional information (in these examples, update the crust type
     * slot value, or change intent from OrderPizza to OrderDrink).</p> </li> <li> <p>
     * <code>ElicitSlot</code> - Amazon Lex is expecting a slot value for the current
     * intent. </p> <p>For example, suppose that in the response Amazon Lex sends this
     * message: "What size pizza would you like?". A user might reply with the slot
     * value (e.g., "medium"). The user might also provide additional information in
     * the response (e.g., "medium thick crust pizza"). Amazon Lex can process such
     * additional information appropriately. </p> </li> <li> <p> <code>Fulfilled</code>
     * - Conveys that the Lambda function configured for the intent has successfully
     * fulfilled the intent. </p> </li> <li> <p> <code>ReadyForFulfillment</code> -
     * Conveys that the client has to fulfill the intent. </p> </li> <li> <p>
     * <code>Failed</code> - Conveys that the conversation with the user failed. </p>
     * <p> This can happen for various reasons including that the user did not provide
     * an appropriate response to prompts from the service (you can configure how many
     * times Amazon Lex can prompt a user for specific information), or the Lambda
     * function failed to fulfill the intent. </p> </li> </ul>
     */
    inline void SetDialogState(const DialogState& value) { m_dialogState = value; }

    /**
     * <p> Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit user intent. </p> <p>For
     * example, a user might utter an intent ("I want to order a pizza"). If Amazon Lex
     * cannot infer the user intent from this utterance, it will return this
     * dialogState.</p> </li> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is
     * expecting a "yes" or "no" response. </p> <p> For example, Amazon Lex wants user
     * confirmation before fulfilling an intent. </p> <p>Instead of a simple "yes" or
     * "no," a user might respond with additional information. For example, "yes, but
     * make it thick crust pizza" or "no, I want to order a drink". Amazon Lex can
     * process such additional information (in these examples, update the crust type
     * slot value, or change intent from OrderPizza to OrderDrink).</p> </li> <li> <p>
     * <code>ElicitSlot</code> - Amazon Lex is expecting a slot value for the current
     * intent. </p> <p>For example, suppose that in the response Amazon Lex sends this
     * message: "What size pizza would you like?". A user might reply with the slot
     * value (e.g., "medium"). The user might also provide additional information in
     * the response (e.g., "medium thick crust pizza"). Amazon Lex can process such
     * additional information appropriately. </p> </li> <li> <p> <code>Fulfilled</code>
     * - Conveys that the Lambda function configured for the intent has successfully
     * fulfilled the intent. </p> </li> <li> <p> <code>ReadyForFulfillment</code> -
     * Conveys that the client has to fulfill the intent. </p> </li> <li> <p>
     * <code>Failed</code> - Conveys that the conversation with the user failed. </p>
     * <p> This can happen for various reasons including that the user did not provide
     * an appropriate response to prompts from the service (you can configure how many
     * times Amazon Lex can prompt a user for specific information), or the Lambda
     * function failed to fulfill the intent. </p> </li> </ul>
     */
    inline void SetDialogState(DialogState&& value) { m_dialogState = std::move(value); }

    /**
     * <p> Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit user intent. </p> <p>For
     * example, a user might utter an intent ("I want to order a pizza"). If Amazon Lex
     * cannot infer the user intent from this utterance, it will return this
     * dialogState.</p> </li> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is
     * expecting a "yes" or "no" response. </p> <p> For example, Amazon Lex wants user
     * confirmation before fulfilling an intent. </p> <p>Instead of a simple "yes" or
     * "no," a user might respond with additional information. For example, "yes, but
     * make it thick crust pizza" or "no, I want to order a drink". Amazon Lex can
     * process such additional information (in these examples, update the crust type
     * slot value, or change intent from OrderPizza to OrderDrink).</p> </li> <li> <p>
     * <code>ElicitSlot</code> - Amazon Lex is expecting a slot value for the current
     * intent. </p> <p>For example, suppose that in the response Amazon Lex sends this
     * message: "What size pizza would you like?". A user might reply with the slot
     * value (e.g., "medium"). The user might also provide additional information in
     * the response (e.g., "medium thick crust pizza"). Amazon Lex can process such
     * additional information appropriately. </p> </li> <li> <p> <code>Fulfilled</code>
     * - Conveys that the Lambda function configured for the intent has successfully
     * fulfilled the intent. </p> </li> <li> <p> <code>ReadyForFulfillment</code> -
     * Conveys that the client has to fulfill the intent. </p> </li> <li> <p>
     * <code>Failed</code> - Conveys that the conversation with the user failed. </p>
     * <p> This can happen for various reasons including that the user did not provide
     * an appropriate response to prompts from the service (you can configure how many
     * times Amazon Lex can prompt a user for specific information), or the Lambda
     * function failed to fulfill the intent. </p> </li> </ul>
     */
    inline PostTextResult& WithDialogState(const DialogState& value) { SetDialogState(value); return *this;}

    /**
     * <p> Identifies the current state of the user interaction. Amazon Lex returns one
     * of the following values as <code>dialogState</code>. The client can optionally
     * use this information to customize the user interface. </p> <ul> <li> <p>
     * <code>ElicitIntent</code> - Amazon Lex wants to elicit user intent. </p> <p>For
     * example, a user might utter an intent ("I want to order a pizza"). If Amazon Lex
     * cannot infer the user intent from this utterance, it will return this
     * dialogState.</p> </li> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is
     * expecting a "yes" or "no" response. </p> <p> For example, Amazon Lex wants user
     * confirmation before fulfilling an intent. </p> <p>Instead of a simple "yes" or
     * "no," a user might respond with additional information. For example, "yes, but
     * make it thick crust pizza" or "no, I want to order a drink". Amazon Lex can
     * process such additional information (in these examples, update the crust type
     * slot value, or change intent from OrderPizza to OrderDrink).</p> </li> <li> <p>
     * <code>ElicitSlot</code> - Amazon Lex is expecting a slot value for the current
     * intent. </p> <p>For example, suppose that in the response Amazon Lex sends this
     * message: "What size pizza would you like?". A user might reply with the slot
     * value (e.g., "medium"). The user might also provide additional information in
     * the response (e.g., "medium thick crust pizza"). Amazon Lex can process such
     * additional information appropriately. </p> </li> <li> <p> <code>Fulfilled</code>
     * - Conveys that the Lambda function configured for the intent has successfully
     * fulfilled the intent. </p> </li> <li> <p> <code>ReadyForFulfillment</code> -
     * Conveys that the client has to fulfill the intent. </p> </li> <li> <p>
     * <code>Failed</code> - Conveys that the conversation with the user failed. </p>
     * <p> This can happen for various reasons including that the user did not provide
     * an appropriate response to prompts from the service (you can configure how many
     * times Amazon Lex can prompt a user for specific information), or the Lambda
     * function failed to fulfill the intent. </p> </li> </ul>
     */
    inline PostTextResult& WithDialogState(DialogState&& value) { SetDialogState(std::move(value)); return *this;}


    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }

    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicit = value; }

    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicit = std::move(value); }

    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline void SetSlotToElicit(const char* value) { m_slotToElicit.assign(value); }

    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline PostTextResult& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline PostTextResult& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}

    /**
     * <p>If the <code>dialogState</code> value is <code>ElicitSlot</code>, returns the
     * name of the slot for which Amazon Lex is eliciting a value. </p>
     */
    inline PostTextResult& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}


    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Response Card can come from the bot configuration (in the Amazon Lex console,
     * choose the settings button next to a slot) or from a code hook (Lambda
     * function). </p>
     */
    inline const ResponseCard& GetResponseCard() const{ return m_responseCard; }

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Response Card can come from the bot configuration (in the Amazon Lex console,
     * choose the settings button next to a slot) or from a code hook (Lambda
     * function). </p>
     */
    inline void SetResponseCard(const ResponseCard& value) { m_responseCard = value; }

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Response Card can come from the bot configuration (in the Amazon Lex console,
     * choose the settings button next to a slot) or from a code hook (Lambda
     * function). </p>
     */
    inline void SetResponseCard(ResponseCard&& value) { m_responseCard = std::move(value); }

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Response Card can come from the bot configuration (in the Amazon Lex console,
     * choose the settings button next to a slot) or from a code hook (Lambda
     * function). </p>
     */
    inline PostTextResult& WithResponseCard(const ResponseCard& value) { SetResponseCard(value); return *this;}

    /**
     * <p>Represents the options that the user has to respond to the current prompt.
     * Response Card can come from the bot configuration (in the Amazon Lex console,
     * choose the settings button next to a slot) or from a code hook (Lambda
     * function). </p>
     */
    inline PostTextResult& WithResponseCard(ResponseCard&& value) { SetResponseCard(std::move(value)); return *this;}

  private:

    Aws::String m_intentName;

    Aws::Map<Aws::String, Aws::String> m_slots;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;

    Aws::String m_message;

    MessageFormatType m_messageFormat;

    DialogState m_dialogState;

    Aws::String m_slotToElicit;

    ResponseCard m_responseCard;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
