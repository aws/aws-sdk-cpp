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
    AWS_LEXRUNTIMESERVICE_API IntentSummary() = default;
    AWS_LEXRUNTIMESERVICE_API IntentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API IntentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    IntentSummary& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined label that identifies a particular intent. You can use this
     * label to return to a previous intent. </p> <p>Use the
     * <code>checkpointLabelFilter</code> parameter of the
     * <code>GetSessionRequest</code> operation to filter the intents returned by the
     * operation to those with only the specified label.</p>
     */
    inline const Aws::String& GetCheckpointLabel() const { return m_checkpointLabel; }
    inline bool CheckpointLabelHasBeenSet() const { return m_checkpointLabelHasBeenSet; }
    template<typename CheckpointLabelT = Aws::String>
    void SetCheckpointLabel(CheckpointLabelT&& value) { m_checkpointLabelHasBeenSet = true; m_checkpointLabel = std::forward<CheckpointLabelT>(value); }
    template<typename CheckpointLabelT = Aws::String>
    IntentSummary& WithCheckpointLabel(CheckpointLabelT&& value) { SetCheckpointLabel(std::forward<CheckpointLabelT>(value)); return *this;}
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
    IntentSummary& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsKeyT = Aws::String, typename SlotsValueT = Aws::String>
    IntentSummary& AddSlots(SlotsKeyT&& key, SlotsValueT&& value) {
      m_slotsHasBeenSet = true; m_slots.emplace(std::forward<SlotsKeyT>(key), std::forward<SlotsValueT>(value)); return *this;
    }
    ///@}

    ///@{
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
    inline ConfirmationStatus GetConfirmationStatus() const { return m_confirmationStatus; }
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }
    inline void SetConfirmationStatus(ConfirmationStatus value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }
    inline IntentSummary& WithConfirmationStatus(ConfirmationStatus value) { SetConfirmationStatus(value); return *this;}
    ///@}

    ///@{
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
    inline DialogActionType GetDialogActionType() const { return m_dialogActionType; }
    inline bool DialogActionTypeHasBeenSet() const { return m_dialogActionTypeHasBeenSet; }
    inline void SetDialogActionType(DialogActionType value) { m_dialogActionTypeHasBeenSet = true; m_dialogActionType = value; }
    inline IntentSummary& WithDialogActionType(DialogActionType value) { SetDialogActionType(value); return *this;}
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
    inline IntentSummary& WithFulfillmentState(FulfillmentState value) { SetFulfillmentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next slot to elicit from the user. If there is not slot to elicit, the
     * field is blank.</p>
     */
    inline const Aws::String& GetSlotToElicit() const { return m_slotToElicit; }
    inline bool SlotToElicitHasBeenSet() const { return m_slotToElicitHasBeenSet; }
    template<typename SlotToElicitT = Aws::String>
    void SetSlotToElicit(SlotToElicitT&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::forward<SlotToElicitT>(value); }
    template<typename SlotToElicitT = Aws::String>
    IntentSummary& WithSlotToElicit(SlotToElicitT&& value) { SetSlotToElicit(std::forward<SlotToElicitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_checkpointLabel;
    bool m_checkpointLabelHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_slots;
    bool m_slotsHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus{ConfirmationStatus::NOT_SET};
    bool m_confirmationStatusHasBeenSet = false;

    DialogActionType m_dialogActionType{DialogActionType::NOT_SET};
    bool m_dialogActionTypeHasBeenSet = false;

    FulfillmentState m_fulfillmentState{FulfillmentState::NOT_SET};
    bool m_fulfillmentStateHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
