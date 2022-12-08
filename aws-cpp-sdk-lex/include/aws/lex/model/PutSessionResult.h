/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/MessageFormatType.h>
#include <aws/lex/model/DialogState.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LexRuntimeService
{
namespace Model
{
  class PutSessionResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PutSessionResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_LEXRUNTIMESERVICE_API PutSessionResult(PutSessionResult&&);
    AWS_LEXRUNTIMESERVICE_API PutSessionResult& operator=(PutSessionResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    PutSessionResult(const PutSessionResult&) = delete;
    PutSessionResult& operator=(const PutSessionResult&) = delete;


    AWS_LEXRUNTIMESERVICE_API PutSessionResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LEXRUNTIMESERVICE_API PutSessionResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline PutSessionResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline PutSessionResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>Content type as specified in the <code>Accept</code> HTTP header in the
     * request.</p>
     */
    inline PutSessionResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The name of the current intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the current intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentName = value; }

    /**
     * <p>The name of the current intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentName = std::move(value); }

    /**
     * <p>The name of the current intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentName.assign(value); }

    /**
     * <p>The name of the current intent.</p>
     */
    inline PutSessionResult& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the current intent.</p>
     */
    inline PutSessionResult& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the current intent.</p>
     */
    inline PutSessionResult& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline const Aws::String& GetSlots() const{ return m_slots; }

    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline void SetSlots(const Aws::String& value) { m_slots = value; }

    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline void SetSlots(Aws::String&& value) { m_slots = std::move(value); }

    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline void SetSlots(const char* value) { m_slots.assign(value); }

    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline PutSessionResult& WithSlots(const Aws::String& value) { SetSlots(value); return *this;}

    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline PutSessionResult& WithSlots(Aws::String&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>Map of zero or more intent slots Amazon Lex detected from the user input
     * during the conversation.</p> <p>Amazon Lex creates a resolution list containing
     * likely values for a slot. The value that it returns is determined by the
     * <code>valueSelectionStrategy</code> selected when the slot type was created or
     * updated. If <code>valueSelectionStrategy</code> is set to
     * <code>ORIGINAL_VALUE</code>, the value provided by the user is returned, if the
     * user value is similar to the slot values. If <code>valueSelectionStrategy</code>
     * is set to <code>TOP_RESOLUTION</code> Amazon Lex returns the first value in the
     * resolution list or, if there is no resolution list, null. If you don't specify a
     * <code>valueSelectionStrategy</code> the default is <code>ORIGINAL_VALUE</code>.
     * </p>
     */
    inline PutSessionResult& WithSlots(const char* value) { SetSlots(value); return *this;}


    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline const Aws::String& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline void SetSessionAttributes(const Aws::String& value) { m_sessionAttributes = value; }

    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline void SetSessionAttributes(Aws::String&& value) { m_sessionAttributes = std::move(value); }

    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline void SetSessionAttributes(const char* value) { m_sessionAttributes.assign(value); }

    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline PutSessionResult& WithSessionAttributes(const Aws::String& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline PutSessionResult& WithSessionAttributes(Aws::String&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Map of key/value pairs representing session-specific context information.</p>
     */
    inline PutSessionResult& WithSessionAttributes(const char* value) { SetSessionAttributes(value); return *this;}


    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline const Aws::String& GetEncodedMessage() const{ return m_encodedMessage; }

    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline void SetEncodedMessage(const Aws::String& value) { m_encodedMessage = value; }

    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline void SetEncodedMessage(Aws::String&& value) { m_encodedMessage = std::move(value); }

    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline void SetEncodedMessage(const char* value) { m_encodedMessage.assign(value); }

    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline PutSessionResult& WithEncodedMessage(const Aws::String& value) { SetEncodedMessage(value); return *this;}

    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline PutSessionResult& WithEncodedMessage(Aws::String&& value) { SetEncodedMessage(std::move(value)); return *this;}

    /**
     * <p>The next message that should be presented to the user.</p> <p>The
     * <code>encodedMessage</code> field is base-64 encoded. You must decode the field
     * before you can use the value.</p>
     */
    inline PutSessionResult& WithEncodedMessage(const char* value) { SetEncodedMessage(value); return *this;}


    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format for
     * the client.</p> </li> <li> <p> <code>SSML</code> - The message contains text
     * formatted for voice output.</p> </li> <li> <p> <code>Composite</code> - The
     * message contains an escaped JSON object containing one or more messages from the
     * groups that messages were assigned to when the intent was created.</p> </li>
     * </ul>
     */
    inline const MessageFormatType& GetMessageFormat() const{ return m_messageFormat; }

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format for
     * the client.</p> </li> <li> <p> <code>SSML</code> - The message contains text
     * formatted for voice output.</p> </li> <li> <p> <code>Composite</code> - The
     * message contains an escaped JSON object containing one or more messages from the
     * groups that messages were assigned to when the intent was created.</p> </li>
     * </ul>
     */
    inline void SetMessageFormat(const MessageFormatType& value) { m_messageFormat = value; }

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format for
     * the client.</p> </li> <li> <p> <code>SSML</code> - The message contains text
     * formatted for voice output.</p> </li> <li> <p> <code>Composite</code> - The
     * message contains an escaped JSON object containing one or more messages from the
     * groups that messages were assigned to when the intent was created.</p> </li>
     * </ul>
     */
    inline void SetMessageFormat(MessageFormatType&& value) { m_messageFormat = std::move(value); }

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format for
     * the client.</p> </li> <li> <p> <code>SSML</code> - The message contains text
     * formatted for voice output.</p> </li> <li> <p> <code>Composite</code> - The
     * message contains an escaped JSON object containing one or more messages from the
     * groups that messages were assigned to when the intent was created.</p> </li>
     * </ul>
     */
    inline PutSessionResult& WithMessageFormat(const MessageFormatType& value) { SetMessageFormat(value); return *this;}

    /**
     * <p>The format of the response message. One of the following values:</p> <ul>
     * <li> <p> <code>PlainText</code> - The message contains plain UTF-8 text.</p>
     * </li> <li> <p> <code>CustomPayload</code> - The message is a custom format for
     * the client.</p> </li> <li> <p> <code>SSML</code> - The message contains text
     * formatted for voice output.</p> </li> <li> <p> <code>Composite</code> - The
     * message contains an escaped JSON object containing one or more messages from the
     * groups that messages were assigned to when the intent was created.</p> </li>
     * </ul>
     */
    inline PutSessionResult& WithMessageFormat(MessageFormatType&& value) { SetMessageFormat(std::move(value)); return *this;}


    /**
     * <p/> <ul> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes"
     * or "no" response to confirm the intent before fulfilling an intent.</p> </li>
     * <li> <p> <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's
     * intent.</p> </li> <li> <p> <code>ElicitSlot</code> - Amazon Lex is expecting the
     * value of a slot for the current intent.</p> </li> <li> <p> <code>Failed</code> -
     * Conveys that the conversation with the user has failed. This can happen for
     * various reasons, including the user does not provide an appropriate response to
     * prompts from the service, or if the Lambda function fails to fulfill the
     * intent.</p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the Lambda
     * function has sucessfully fulfilled the intent.</p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * intent.</p> </li> </ul>
     */
    inline const DialogState& GetDialogState() const{ return m_dialogState; }

    /**
     * <p/> <ul> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes"
     * or "no" response to confirm the intent before fulfilling an intent.</p> </li>
     * <li> <p> <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's
     * intent.</p> </li> <li> <p> <code>ElicitSlot</code> - Amazon Lex is expecting the
     * value of a slot for the current intent.</p> </li> <li> <p> <code>Failed</code> -
     * Conveys that the conversation with the user has failed. This can happen for
     * various reasons, including the user does not provide an appropriate response to
     * prompts from the service, or if the Lambda function fails to fulfill the
     * intent.</p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the Lambda
     * function has sucessfully fulfilled the intent.</p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * intent.</p> </li> </ul>
     */
    inline void SetDialogState(const DialogState& value) { m_dialogState = value; }

    /**
     * <p/> <ul> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes"
     * or "no" response to confirm the intent before fulfilling an intent.</p> </li>
     * <li> <p> <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's
     * intent.</p> </li> <li> <p> <code>ElicitSlot</code> - Amazon Lex is expecting the
     * value of a slot for the current intent.</p> </li> <li> <p> <code>Failed</code> -
     * Conveys that the conversation with the user has failed. This can happen for
     * various reasons, including the user does not provide an appropriate response to
     * prompts from the service, or if the Lambda function fails to fulfill the
     * intent.</p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the Lambda
     * function has sucessfully fulfilled the intent.</p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * intent.</p> </li> </ul>
     */
    inline void SetDialogState(DialogState&& value) { m_dialogState = std::move(value); }

    /**
     * <p/> <ul> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes"
     * or "no" response to confirm the intent before fulfilling an intent.</p> </li>
     * <li> <p> <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's
     * intent.</p> </li> <li> <p> <code>ElicitSlot</code> - Amazon Lex is expecting the
     * value of a slot for the current intent.</p> </li> <li> <p> <code>Failed</code> -
     * Conveys that the conversation with the user has failed. This can happen for
     * various reasons, including the user does not provide an appropriate response to
     * prompts from the service, or if the Lambda function fails to fulfill the
     * intent.</p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the Lambda
     * function has sucessfully fulfilled the intent.</p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * intent.</p> </li> </ul>
     */
    inline PutSessionResult& WithDialogState(const DialogState& value) { SetDialogState(value); return *this;}

    /**
     * <p/> <ul> <li> <p> <code>ConfirmIntent</code> - Amazon Lex is expecting a "yes"
     * or "no" response to confirm the intent before fulfilling an intent.</p> </li>
     * <li> <p> <code>ElicitIntent</code> - Amazon Lex wants to elicit the user's
     * intent.</p> </li> <li> <p> <code>ElicitSlot</code> - Amazon Lex is expecting the
     * value of a slot for the current intent.</p> </li> <li> <p> <code>Failed</code> -
     * Conveys that the conversation with the user has failed. This can happen for
     * various reasons, including the user does not provide an appropriate response to
     * prompts from the service, or if the Lambda function fails to fulfill the
     * intent.</p> </li> <li> <p> <code>Fulfilled</code> - Conveys that the Lambda
     * function has sucessfully fulfilled the intent.</p> </li> <li> <p>
     * <code>ReadyForFulfillment</code> - Conveys that the client has to fulfill the
     * intent.</p> </li> </ul>
     */
    inline PutSessionResult& WithDialogState(DialogState&& value) { SetDialogState(std::move(value)); return *this;}


    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }

    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicit = value; }

    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicit = std::move(value); }

    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline void SetSlotToElicit(const char* value) { m_slotToElicit.assign(value); }

    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline PutSessionResult& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline PutSessionResult& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}

    /**
     * <p>If the <code>dialogState</code> is <code>ElicitSlot</code>, returns the name
     * of the slot for which Amazon Lex is eliciting a value.</p>
     */
    inline PutSessionResult& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}


    /**
     * <p>The audio version of the message to convey to the user.</p>
     */
    inline Aws::IOStream& GetAudioStream() { return m_audioStream.GetUnderlyingStream(); }

    /**
     * <p>The audio version of the message to convey to the user.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>A unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline PutSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline PutSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the session.</p>
     */
    inline PutSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline const Aws::String& GetActiveContexts() const{ return m_activeContexts; }

    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline void SetActiveContexts(const Aws::String& value) { m_activeContexts = value; }

    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline void SetActiveContexts(Aws::String&& value) { m_activeContexts = std::move(value); }

    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline void SetActiveContexts(const char* value) { m_activeContexts.assign(value); }

    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline PutSessionResult& WithActiveContexts(const Aws::String& value) { SetActiveContexts(value); return *this;}

    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline PutSessionResult& WithActiveContexts(Aws::String&& value) { SetActiveContexts(std::move(value)); return *this;}

    /**
     * <p>A list of active contexts for the session.</p>
     */
    inline PutSessionResult& WithActiveContexts(const char* value) { SetActiveContexts(value); return *this;}

  private:

    Aws::String m_contentType;

    Aws::String m_intentName;

    Aws::String m_slots;

    Aws::String m_sessionAttributes;

    Aws::String m_encodedMessage;

    MessageFormatType m_messageFormat;

    DialogState m_dialogState;

    Aws::String m_slotToElicit;

  Aws::Utils::Stream::ResponseStream m_audioStream;

    Aws::String m_sessionId;

    Aws::String m_activeContexts;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
