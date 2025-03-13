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
    AWS_LEXRUNTIMESERVICE_API DialogAction() = default;
    AWS_LEXRUNTIMESERVICE_API DialogAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API DialogAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline DialogActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DialogActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DialogAction& WithType(DialogActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    DialogAction& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::Map<Aws::String, Aws::String>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Map<Aws::String, Aws::String>>
    DialogAction& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsKeyT = Aws::String, typename SlotsValueT = Aws::String>
    DialogAction& AddSlots(SlotsKeyT&& key, SlotsValueT&& value) {
      m_slotsHasBeenSet = true; m_slots.emplace(std::forward<SlotsKeyT>(key), std::forward<SlotsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline const Aws::String& GetSlotToElicit() const { return m_slotToElicit; }
    inline bool SlotToElicitHasBeenSet() const { return m_slotToElicitHasBeenSet; }
    template<typename SlotToElicitT = Aws::String>
    void SetSlotToElicit(SlotToElicitT&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::forward<SlotToElicitT>(value); }
    template<typename SlotToElicitT = Aws::String>
    DialogAction& WithSlotToElicit(SlotToElicitT&& value) { SetSlotToElicit(std::forward<SlotToElicitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline FulfillmentState GetFulfillmentState() const { return m_fulfillmentState; }
    inline bool FulfillmentStateHasBeenSet() const { return m_fulfillmentStateHasBeenSet; }
    inline void SetFulfillmentState(FulfillmentState value) { m_fulfillmentStateHasBeenSet = true; m_fulfillmentState = value; }
    inline DialogAction& WithFulfillmentState(FulfillmentState value) { SetFulfillmentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that should be shown to the user. If you don't specify a message,
     * Amazon Lex will use the message configured for the intent.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DialogAction& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
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
    inline MessageFormatType GetMessageFormat() const { return m_messageFormat; }
    inline bool MessageFormatHasBeenSet() const { return m_messageFormatHasBeenSet; }
    inline void SetMessageFormat(MessageFormatType value) { m_messageFormatHasBeenSet = true; m_messageFormat = value; }
    inline DialogAction& WithMessageFormat(MessageFormatType value) { SetMessageFormat(value); return *this;}
    ///@}
  private:

    DialogActionType m_type{DialogActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_slots;
    bool m_slotsHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;

    FulfillmentState m_fulfillmentState{FulfillmentState::NOT_SET};
    bool m_fulfillmentStateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    MessageFormatType m_messageFormat{MessageFormatType::NOT_SET};
    bool m_messageFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
