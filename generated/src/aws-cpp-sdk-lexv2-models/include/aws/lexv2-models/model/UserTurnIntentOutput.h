/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/UserTurnSlotOutput.h>
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
   * <p>Contains information about the intent that is output for the turn by the test
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UserTurnIntentOutput">AWS
   * API Reference</a></p>
   */
  class UserTurnIntentOutput
  {
  public:
    AWS_LEXMODELSV2_API UserTurnIntentOutput();
    AWS_LEXMODELSV2_API UserTurnIntentOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnIntentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline UserTurnIntentOutput& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline UserTurnIntentOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent.</p>
     */
    inline UserTurnIntentOutput& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The slots associated with the intent.</p>
     */
    inline const Aws::Map<Aws::String, UserTurnSlotOutput>& GetSlots() const{ return m_slots; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline void SetSlots(const Aws::Map<Aws::String, UserTurnSlotOutput>& value) { m_slotsHasBeenSet = true; m_slots = value; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline void SetSlots(Aws::Map<Aws::String, UserTurnSlotOutput>&& value) { m_slotsHasBeenSet = true; m_slots = std::move(value); }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& WithSlots(const Aws::Map<Aws::String, UserTurnSlotOutput>& value) { SetSlots(value); return *this;}

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& WithSlots(Aws::Map<Aws::String, UserTurnSlotOutput>&& value) { SetSlots(std::move(value)); return *this;}

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& AddSlots(const Aws::String& key, const UserTurnSlotOutput& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& AddSlots(Aws::String&& key, const UserTurnSlotOutput& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), value); return *this; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& AddSlots(const Aws::String& key, UserTurnSlotOutput&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& AddSlots(Aws::String&& key, UserTurnSlotOutput&& value) { m_slotsHasBeenSet = true; m_slots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& AddSlots(const char* key, UserTurnSlotOutput&& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The slots associated with the intent.</p>
     */
    inline UserTurnIntentOutput& AddSlots(const char* key, const UserTurnSlotOutput& value) { m_slotsHasBeenSet = true; m_slots.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, UserTurnSlotOutput> m_slots;
    bool m_slotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
