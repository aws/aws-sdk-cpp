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
    AWS_LEXRUNTIMEV2_API Intent();
    AWS_LEXRUNTIMEV2_API Intent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Intent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the intent.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the intent.</p>
     */
    inline Intent& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline Intent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline Intent& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline const Aws::Map<Aws::String, Slot>& GetSlots() const{ return m_slots; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline void SetSlots(const Aws::Map<Aws::String, Slot>& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline void SetSlots(Aws::Map<Aws::String, Slot>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& WithSlots(const Aws::Map<Aws::String, Slot>& value) { SetSlots(value); return *this;}

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& WithSlots(Aws::Map<Aws::String, Slot>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& AddSlots(const Aws::String& key, const Slot& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& AddSlots(Aws::String&& key, const Slot& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& AddSlots(const Aws::String& key, Slot&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& AddSlots(Aws::String&& key, Slot&& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& AddSlots(const char* key, Slot&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all of the slots for the intent. The name of the slot maps to the
     * value of the slot. If a slot has not been filled, the value is null.</p>
     */
    inline Intent& AddSlots(const char* key, const Slot& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }


    /**
     * <p>Contains fulfillment information for the intent. </p>
     */
    inline const IntentState& GetState() const{ return m_state; }

    /**
     * <p>Contains fulfillment information for the intent. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Contains fulfillment information for the intent. </p>
     */
    inline void SetState(const IntentState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Contains fulfillment information for the intent. </p>
     */
    inline void SetState(IntentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Contains fulfillment information for the intent. </p>
     */
    inline Intent& WithState(const IntentState& value) { SetState(value); return *this;}

    /**
     * <p>Contains fulfillment information for the intent. </p>
     */
    inline Intent& WithState(IntentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Contains information about whether fulfillment of the intent has been
     * confirmed.</p>
     */
    inline const ConfirmationState& GetConfirmationState() const{ return m_confirmationState; }

    /**
     * <p>Contains information about whether fulfillment of the intent has been
     * confirmed.</p>
     */
    inline bool ConfirmationStateHasBeenSet() const { return m_confirmationStateHasBeenSet; }

    /**
     * <p>Contains information about whether fulfillment of the intent has been
     * confirmed.</p>
     */
    inline void SetConfirmationState(const ConfirmationState& value) { m_confirmationStateHasBeenSet = true; m_confirmationState = value; }

    /**
     * <p>Contains information about whether fulfillment of the intent has been
     * confirmed.</p>
     */
    inline void SetConfirmationState(ConfirmationState&& value) { m_confirmationStateHasBeenSet = true; m_confirmationState = std::move(value); }

    /**
     * <p>Contains information about whether fulfillment of the intent has been
     * confirmed.</p>
     */
    inline Intent& WithConfirmationState(const ConfirmationState& value) { SetConfirmationState(value); return *this;}

    /**
     * <p>Contains information about whether fulfillment of the intent has been
     * confirmed.</p>
     */
    inline Intent& WithConfirmationState(ConfirmationState&& value) { SetConfirmationState(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Slot> m_slots;
    bool m_slotsHasBeenSet = false;

    IntentState m_state;
    bool m_stateHasBeenSet = false;

    ConfirmationState m_confirmationState;
    bool m_confirmationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
