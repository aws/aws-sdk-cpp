/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-runtime/model/IntentState.h>
#include <aws/lexv2-runtime/model/ConfirmationState.h>
#include <aws/lexv2-runtime/model/Slot.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The current intent that Amazon Lex V2 is attempting to fulfill.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Intent">AWS
   * API Reference</a></p>
   */
  class Intent
  {
  public:
    AWS_LEXRUNTIMEV2_API Intent() = default;
    AWS_LEXRUNTIMEV2_API Intent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Intent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Intent& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline const Aws::Map<Aws::String, Slot>& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::Map<Aws::String, Slot>>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::Map<Aws::String, Slot>>
    Intent& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    template<typename SlotsKeyT = Aws::String, typename SlotsValueT = Slot>
    Intent& AddSlots(SlotsKeyT&& key, SlotsValueT&& value) {
      m_slotsHasBeenSet = true; m_slots.emplace(std::forward<SlotsKeyT>(key), std::forward<SlotsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates the fulfillment state for the intent. The meanings of each value
     * are as follows:</p> <ul> <li> <p> <code>Failed</code> – The bot failed to
     * fulfill the intent.</p> </li> <li> <p> <code>Fulfilled</code> – The bot has
     * completed fulfillment of the intent.</p> </li> <li> <p>
     * <code>FulfillmentInProgress</code> – The bot is in the middle of fulfilling the
     * intent.</p> </li> <li> <p> <code>InProgress</code> – The bot is in the middle of
     * eliciting the slot values that are necessary to fulfill the intent.</p> </li>
     * <li> <p> <code>ReadyForFulfillment</code> – The bot has elicited all the slot
     * values for the intent and is ready to fulfill the intent.</p> </li> <li> <p>
     * <code>Waiting</code> – The bot is waiting for a response from the user (limited
     * to streaming conversations).</p> </li> </ul>
     */
    inline IntentState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IntentState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Intent& WithState(IntentState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the intent has been <code>Confirmed</code>,
     * <code>Denied</code>, or <code>None</code> if the confirmation stage has not yet
     * been reached.</p>
     */
    inline ConfirmationState GetConfirmationState() const { return m_confirmationState; }
    inline bool ConfirmationStateHasBeenSet() const { return m_confirmationStateHasBeenSet; }
    inline void SetConfirmationState(ConfirmationState value) { m_confirmationStateHasBeenSet = true; m_confirmationState = value; }
    inline Intent& WithConfirmationState(ConfirmationState value) { SetConfirmationState(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Slot> m_slots;
    bool m_slotsHasBeenSet = false;

    IntentState m_state{IntentState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ConfirmationState m_confirmationState{ConfirmationState::NOT_SET};
    bool m_confirmationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
