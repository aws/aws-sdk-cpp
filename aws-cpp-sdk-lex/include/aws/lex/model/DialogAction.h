/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/model/DialogActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex/model/FulfillmentState.h>
#include <aws/lex/model/MessageFormatType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>Describes the next action that the bot should take in its interaction with
   * the user and provides information about the context in which the action takes
   * place. Use the <code>DialogAction</code> data type to set the interaction to a
   * specific state, or to return the interaction to a previous state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/DialogAction">AWS
   * API Reference</a></p>
   */
  class DialogAction
  {
  public:
    AWS_LEXRUNTIMESERVICE_API DialogAction();
    AWS_LEXRUNTIMESERVICE_API DialogAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API DialogAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>Delegate</code> - The next action is
     * determined by Amazon Lex.</p> </li> <li> <p> <code>ElicitIntent</code> - The
     * next action is to determine the intent that the user wants to fulfill.</p> </li>
     * <li> <p> <code>ElicitSlot</code> - The next action is to elicit a slot value
     * from the user.</p> </li> </ul>
     */
    inline const DialogActionType& GetType() const{ return m_type; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>Delegate</code> - The next action is
     * determined by Amazon Lex.</p> </li> <li> <p> <code>ElicitIntent</code> - The
     * next action is to determine the intent that the user wants to fulfill.</p> </li>
     * <li> <p> <code>ElicitSlot</code> - The next action is to elicit a slot value
     * from the user.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>Delegate</code> - The next action is
     * determined by Amazon Lex.</p> </li> <li> <p> <code>ElicitIntent</code> - The
     * next action is to determine the intent that the user wants to fulfill.</p> </li>
     * <li> <p> <code>ElicitSlot</code> - The next action is to elicit a slot value
     * from the user.</p> </li> </ul>
     */
    inline void SetType(const DialogActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>Delegate</code> - The next action is
     * determined by Amazon Lex.</p> </li> <li> <p> <code>ElicitIntent</code> - The
     * next action is to determine the intent that the user wants to fulfill.</p> </li>
     * <li> <p> <code>ElicitSlot</code> - The next action is to elicit a slot value
     * from the user.</p> </li> </ul>
     */
    inline void SetType(DialogActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>Delegate</code> - The next action is
     * determined by Amazon Lex.</p> </li> <li> <p> <code>ElicitIntent</code> - The
     * next action is to determine the intent that the user wants to fulfill.</p> </li>
     * <li> <p> <code>ElicitSlot</code> - The next action is to elicit a slot value
     * from the user.</p> </li> </ul>
     */
    inline DialogAction& WithType(const DialogActionType& value) { SetType(value); return *this;}

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>Delegate</code> - The next action is
     * determined by Amazon Lex.</p> </li> <li> <p> <code>ElicitIntent</code> - The
     * next action is to determine the intent that the user wants to fulfill.</p> </li>
     * <li> <p> <code>ElicitSlot</code> - The next action is to elicit a slot value
     * from the user.</p> </li> </ul>
     */
    inline DialogAction& WithType(DialogActionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the intent.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline DialogAction& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline DialogAction& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline DialogAction& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const{ return m_slots; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline void SetSlots(const Aws::Map<Aws::String, Aws::String>& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline void SetSlots(Aws::Map<Aws::String, Aws::String>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& WithSlots(const Aws::Map<Aws::String, Aws::String>& value) { SetSlots(value); return *this;}

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& WithSlots(Aws::Map<Aws::String, Aws::String>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& AddSlots(const Aws::String& key, const Aws::String& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& AddSlots(Aws::String&& key, const Aws::String& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& AddSlots(const Aws::String& key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& AddSlots(Aws::String&& key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& AddSlots(const char* key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& AddSlots(Aws::String&& key, const char* value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline DialogAction& AddSlots(const char* key, const char* value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }


    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline bool SlotToElicitHasBeenSet() const { return m_slotToElicitHasBeenSet; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = value; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::move(value); }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetSlotToElicit(const char* value) { m_slotToElicitHasBeenSet = true; m_slotToElicit.assign(value); }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}


    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline const FulfillmentState& GetFulfillmentState() const{ return m_fulfillmentState; }

    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline bool FulfillmentStateHasBeenSet() const { return m_fulfillmentStateHasBeenSet; }

    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline void SetFulfillmentState(const FulfillmentState& value) { m_fulfillmentStateHasBeenSet = true; m_fulfillmentState = value; }

    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline void SetFulfillmentState(FulfillmentState&& value) { m_fulfillmentStateHasBeenSet = true; m_fulfillmentState = std::move(value); }

    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline DialogAction& WithFulfillmentState(const FulfillmentState& value) { SetFulfillmentState(value); return *this;}

    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline DialogAction& WithFulfillmentState(FulfillmentState&& value) { SetFulfillmentState(std::move(value)); return *this;}


    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline DialogAction& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline DialogAction& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline DialogAction& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <ul> <li> <p> <code>PlainText</code> - The message contains plain UTF-8
     * text.</p> </li> <li> <p> <code>CustomPayload</code> - The message is a custom
     * format for the client.</p> </li> <li> <p> <code>SSML</code> - The message
     * contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/howitworks-manage-prompts.html">Message
     * Groups</a>. </p> </li> </ul>
     */
    inline const MessageFormatType& GetMessageFormat() const{ return m_messageFormat; }

    /**
     * <ul> <li> <p> <code>PlainText</code> - The message contains plain UTF-8
     * text.</p> </li> <li> <p> <code>CustomPayload</code> - The message is a custom
     * format for the client.</p> </li> <li> <p> <code>SSML</code> - The message
     * contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/howitworks-manage-prompts.html">Message
     * Groups</a>. </p> </li> </ul>
     */
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }

    /**
     * <ul> <li> <p> <code>PlainText</code> - The message contains plain UTF-8
     * text.</p> </li> <li> <p> <code>CustomPayload</code> - The message is a custom
     * format for the client.</p> </li> <li> <p> <code>SSML</code> - The message
     * contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/howitworks-manage-prompts.html">Message
     * Groups</a>. </p> </li> </ul>
     */
    inline void SetMessageFormat(const MessageFormatType& value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }

    /**
     * <ul> <li> <p> <code>PlainText</code> - The message contains plain UTF-8
     * text.</p> </li> <li> <p> <code>CustomPayload</code> - The message is a custom
     * format for the client.</p> </li> <li> <p> <code>SSML</code> - The message
     * contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/howitworks-manage-prompts.html">Message
     * Groups</a>. </p> </li> </ul>
     */
    inline void SetMessageFormat(MessageFormatType&& value) { m_messageFormatHasBeenSet = true; m_messageFormat = std::move(value); }

    /**
     * <ul> <li> <p> <code>PlainText</code> - The message contains plain UTF-8
     * text.</p> </li> <li> <p> <code>CustomPayload</code> - The message is a custom
     * format for the client.</p> </li> <li> <p> <code>SSML</code> - The message
     * contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/howitworks-manage-prompts.html">Message
     * Groups</a>. </p> </li> </ul>
     */
    inline DialogAction& WithMessageFormat(const MessageFormatType& value) { SetMessageFormat(value); return *this;}

    /**
     * <ul> <li> <p> <code>PlainText</code> - The message contains plain UTF-8
     * text.</p> </li> <li> <p> <code>CustomPayload</code> - The message is a custom
     * format for the client.</p> </li> <li> <p> <code>SSML</code> - The message
     * contains text formatted for voice output.</p> </li> <li> <p>
     * <code>Composite</code> - The message contains an escaped JSON object containing
     * one or more messages. For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/howitworks-manage-prompts.html">Message
     * Groups</a>. </p> </li> </ul>
     */
    inline DialogAction& WithMessageFormat(MessageFormatType&& value) { SetMessageFormat(std::move(value)); return *this;}

  private:

    DialogActionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;

    FulfillmentState m_fulfillmentState;
    bool m_fulfillmentStateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    MessageFormatType m_messageFormat;
    bool m_messageFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
