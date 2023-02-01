/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/SlotValueOverride.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Override settings to configure the intent state.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentOverride">AWS
   * API Reference</a></p>
   */
  class IntentOverride
  {
  public:
    AWS_LEXMODELSV2_API IntentOverride();
    AWS_LEXMODELSV2_API IntentOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline IntentOverride& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline IntentOverride& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent. Only required when you're switching intents.</p>
     */
    inline IntentOverride& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline const Aws::Map<Aws::String, SlotValueOverride>& GetSlots() const{ return m_slots; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline void SetSlots(const Aws::Map<Aws::String, SlotValueOverride>& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline void SetSlots(Aws::Map<Aws::String, SlotValueOverride>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& WithSlots(const Aws::Map<Aws::String, SlotValueOverride>& value) { SetSlots(value); return *this;}

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& WithSlots(Aws::Map<Aws::String, SlotValueOverride>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& AddSlots(const Aws::String& key, const SlotValueOverride& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& AddSlots(Aws::String&& key, const SlotValueOverride& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& AddSlots(const Aws::String& key, SlotValueOverride&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& AddSlots(Aws::String&& key, SlotValueOverride&& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& AddSlots(const char* key, SlotValueOverride&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all of the slot value overrides for the intent. The name of the slot
     * maps to the value of the slot. Slots that are not included in the map aren't
     * overridden.,</p>
     */
    inline IntentOverride& AddSlots(const char* key, const SlotValueOverride& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, SlotValueOverride> m_slots;
    bool m_slotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
