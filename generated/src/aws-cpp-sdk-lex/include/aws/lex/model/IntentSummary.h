/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex/model/ConfirmationStatus.h>
#include <aws/lex/model/DialogActionType.h>
#include <aws/lex/model/FulfillmentState.h>
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
   * <p>Provides information about the state of an intent. You can use this
   * information to get the current state of an intent so that you can process the
   * intent, or so that you can return the intent to its previous
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/IntentSummary">AWS
   * API Reference</a></p>
   */
  class IntentSummary
  {
  public:
    AWS_LEXRUNTIMESERVICE_API IntentSummary();
    AWS_LEXRUNTIMESERVICE_API IntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API IntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline IntentSummary& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline IntentSummary& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline IntentSummary& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline const Aws::String& GetCheckpointLabel() const{ return m_checkpointLabel; }

    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline bool CheckpointLabelHasBeenSet() const { return m_checkpointLabelHasBeenSet; }

    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline void SetCheckpointLabel(const Aws::String& value) { m_checkpointLabelHasBeenSet = true; m_checkpointLabel = value; }

    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline void SetCheckpointLabel(Aws::String&& value) { m_checkpointLabelHasBeenSet = true; m_checkpointLabel = std::move(value); }

    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline void SetCheckpointLabel(const char* value) { m_checkpointLabelHasBeenSet = true; m_checkpointLabel.assign(value); }

    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline IntentSummary& WithCheckpointLabel(const Aws::String& value) { SetCheckpointLabel(value); return *this;}

    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline IntentSummary& WithCheckpointLabel(Aws::String&& value) { SetCheckpointLabel(std::move(value)); return *this;}

    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline IntentSummary& WithCheckpointLabel(const char* value) { SetCheckpointLabel(value); return *this;}


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
    inline IntentSummary& WithSlots(const Aws::Map<Aws::String, Aws::String>& value) { SetSlots(value); return *this;}

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& WithSlots(Aws::Map<Aws::String, Aws::String>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& AddSlots(const Aws::String& key, const Aws::String& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& AddSlots(Aws::String&& key, const Aws::String& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& AddSlots(const Aws::String& key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& AddSlots(Aws::String&& key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& AddSlots(const char* key, Aws::String&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& AddSlots(Aws::String&& key, const char* value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of the slots that have been gathered and their values. </p>
     */
    inline IntentSummary& AddSlots(const char* key, const char* value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }


    /**
     * <p>The status of the intent after the user responds to the confirmation prompt.
     * If the user confirms the intent, Amazon Lex sets this field to
     * <code>Confirmed</code>. If the user denies the intent, Amazon Lex sets this
     * value to <code>Denied</code>. The possible values are:</p> <ul> <li> <p>
     * <code>Confirmed</code> - The user has responded "Yes" to the confirmation
     * prompt, confirming that the intent is complete and that it is ready to be
     * fulfilled.</p> </li> <li> <p> <code>Denied</code> - The user has responded "No"
     * to the confirmation prompt.</p> </li> <li> <p> <code>None</code> - The user has
     * never been prompted for confirmation; or, the user was prompted but did not
     * confirm or deny the prompt.</p> </li> </ul>
     */
    inline const ConfirmationStatus& GetConfirmationStatus() const{ return m_confirmationStatus; }

    /**
     * <p>The status of the intent after the user responds to the confirmation prompt.
     * If the user confirms the intent, Amazon Lex sets this field to
     * <code>Confirmed</code>. If the user denies the intent, Amazon Lex sets this
     * value to <code>Denied</code>. The possible values are:</p> <ul> <li> <p>
     * <code>Confirmed</code> - The user has responded "Yes" to the confirmation
     * prompt, confirming that the intent is complete and that it is ready to be
     * fulfilled.</p> </li> <li> <p> <code>Denied</code> - The user has responded "No"
     * to the confirmation prompt.</p> </li> <li> <p> <code>None</code> - The user has
     * never been prompted for confirmation; or, the user was prompted but did not
     * confirm or deny the prompt.</p> </li> </ul>
     */
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }

    /**
     * <p>The status of the intent after the user responds to the confirmation prompt.
     * If the user confirms the intent, Amazon Lex sets this field to
     * <code>Confirmed</code>. If the user denies the intent, Amazon Lex sets this
     * value to <code>Denied</code>. The possible values are:</p> <ul> <li> <p>
     * <code>Confirmed</code> - The user has responded "Yes" to the confirmation
     * prompt, confirming that the intent is complete and that it is ready to be
     * fulfilled.</p> </li> <li> <p> <code>Denied</code> - The user has responded "No"
     * to the confirmation prompt.</p> </li> <li> <p> <code>None</code> - The user has
     * never been prompted for confirmation; or, the user was prompted but did not
     * confirm or deny the prompt.</p> </li> </ul>
     */
    inline void SetConfirmationStatus(const ConfirmationStatus& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }

    /**
     * <p>The status of the intent after the user responds to the confirmation prompt.
     * If the user confirms the intent, Amazon Lex sets this field to
     * <code>Confirmed</code>. If the user denies the intent, Amazon Lex sets this
     * value to <code>Denied</code>. The possible values are:</p> <ul> <li> <p>
     * <code>Confirmed</code> - The user has responded "Yes" to the confirmation
     * prompt, confirming that the intent is complete and that it is ready to be
     * fulfilled.</p> </li> <li> <p> <code>Denied</code> - The user has responded "No"
     * to the confirmation prompt.</p> </li> <li> <p> <code>None</code> - The user has
     * never been prompted for confirmation; or, the user was prompted but did not
     * confirm or deny the prompt.</p> </li> </ul>
     */
    inline void SetConfirmationStatus(ConfirmationStatus&& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = std::move(value); }

    /**
     * <p>The status of the intent after the user responds to the confirmation prompt.
     * If the user confirms the intent, Amazon Lex sets this field to
     * <code>Confirmed</code>. If the user denies the intent, Amazon Lex sets this
     * value to <code>Denied</code>. The possible values are:</p> <ul> <li> <p>
     * <code>Confirmed</code> - The user has responded "Yes" to the confirmation
     * prompt, confirming that the intent is complete and that it is ready to be
     * fulfilled.</p> </li> <li> <p> <code>Denied</code> - The user has responded "No"
     * to the confirmation prompt.</p> </li> <li> <p> <code>None</code> - The user has
     * never been prompted for confirmation; or, the user was prompted but did not
     * confirm or deny the prompt.</p> </li> </ul>
     */
    inline IntentSummary& WithConfirmationStatus(const ConfirmationStatus& value) { SetConfirmationStatus(value); return *this;}

    /**
     * <p>The status of the intent after the user responds to the confirmation prompt.
     * If the user confirms the intent, Amazon Lex sets this field to
     * <code>Confirmed</code>. If the user denies the intent, Amazon Lex sets this
     * value to <code>Denied</code>. The possible values are:</p> <ul> <li> <p>
     * <code>Confirmed</code> - The user has responded "Yes" to the confirmation
     * prompt, confirming that the intent is complete and that it is ready to be
     * fulfilled.</p> </li> <li> <p> <code>Denied</code> - The user has responded "No"
     * to the confirmation prompt.</p> </li> <li> <p> <code>None</code> - The user has
     * never been prompted for confirmation; or, the user was prompted but did not
     * confirm or deny the prompt.</p> </li> </ul>
     */
    inline IntentSummary& WithConfirmationStatus(ConfirmationStatus&& value) { SetConfirmationStatus(std::move(value)); return *this;}


    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>ElicitIntent</code> - The next action is to
     * determine the intent that the user wants to fulfill.</p> </li> <li> <p>
     * <code>ElicitSlot</code> - The next action is to elicit a slot value from the
     * user.</p> </li> </ul>
     */
    inline const DialogActionType& GetDialogActionType() const{ return m_dialogActionType; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>ElicitIntent</code> - The next action is to
     * determine the intent that the user wants to fulfill.</p> </li> <li> <p>
     * <code>ElicitSlot</code> - The next action is to elicit a slot value from the
     * user.</p> </li> </ul>
     */
    inline bool DialogActionTypeHasBeenSet() const { return m_dialogActionTypeHasBeenSet; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>ElicitIntent</code> - The next action is to
     * determine the intent that the user wants to fulfill.</p> </li> <li> <p>
     * <code>ElicitSlot</code> - The next action is to elicit a slot value from the
     * user.</p> </li> </ul>
     */
    inline void SetDialogActionType(const DialogActionType& value) { m_dialogActionTypeHasBeenSet = true; m_dialogActionType = value; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>ElicitIntent</code> - The next action is to
     * determine the intent that the user wants to fulfill.</p> </li> <li> <p>
     * <code>ElicitSlot</code> - The next action is to elicit a slot value from the
     * user.</p> </li> </ul>
     */
    inline void SetDialogActionType(DialogActionType&& value) { m_dialogActionTypeHasBeenSet = true; m_dialogActionType = std::move(value); }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>ElicitIntent</code> - The next action is to
     * determine the intent that the user wants to fulfill.</p> </li> <li> <p>
     * <code>ElicitSlot</code> - The next action is to elicit a slot value from the
     * user.</p> </li> </ul>
     */
    inline IntentSummary& WithDialogActionType(const DialogActionType& value) { SetDialogActionType(value); return *this;}

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>ConfirmIntent</code> - The next
     * action is asking the user if the intent is complete and ready to be fulfilled.
     * This is a yes/no question such as "Place the order?"</p> </li> <li> <p>
     * <code>Close</code> - Indicates that the there will not be a response from the
     * user. For example, the statement "Your order has been placed" does not require a
     * response.</p> </li> <li> <p> <code>ElicitIntent</code> - The next action is to
     * determine the intent that the user wants to fulfill.</p> </li> <li> <p>
     * <code>ElicitSlot</code> - The next action is to elicit a slot value from the
     * user.</p> </li> </ul>
     */
    inline IntentSummary& WithDialogActionType(DialogActionType&& value) { SetDialogActionType(std::move(value)); return *this;}


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
    inline IntentSummary& WithFulfillmentState(const FulfillmentState& value) { SetFulfillmentState(value); return *this;}

    /**
     * <p>The fulfillment state of the intent. The possible values are:</p> <ul> <li>
     * <p> <code>Failed</code> - The Lambda function associated with the intent failed
     * to fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> - The intent
     * has fulfilled by the Lambda function associated with the intent. </p> </li> <li>
     * <p> <code>ReadyForFulfillment</code> - All of the information necessary for the
     * intent is present and the intent ready to be fulfilled by the client
     * application.</p> </li> </ul>
     */
    inline IntentSummary& WithFulfillmentState(FulfillmentState&& value) { SetFulfillmentState(std::move(value)); return *this;}


    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }

    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline bool SlotToElicitHasBeenSet() const { return m_slotToElicitHasBeenSet; }

    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = value; }

    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::move(value); }

    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline void SetSlotToElicit(const char* value) { m_slotToElicitHasBeenSet = true; m_slotToElicit.assign(value); }

    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline IntentSummary& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline IntentSummary& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}

    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline IntentSummary& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}

  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_checkpointLabel;
    bool m_checkpointLabelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_slots;
    bool m_slotsHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus;
    bool m_confirmationStatusHasBeenSet = false;

    DialogActionType m_dialogActionType;
    bool m_dialogActionTypeHasBeenSet = false;

    FulfillmentState m_fulfillmentState;
    bool m_fulfillmentStateHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
