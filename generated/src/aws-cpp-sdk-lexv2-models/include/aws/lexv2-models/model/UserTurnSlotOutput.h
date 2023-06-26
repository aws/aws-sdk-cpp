/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains information about a slot output by the test set
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UserTurnSlotOutput">AWS
   * API Reference</a></p>
   */
  class UserTurnSlotOutput
  {
  public:
    AWS_LEXMODELSV2_API UserTurnSlotOutput();
    AWS_LEXMODELSV2_API UserTurnSlotOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnSlotOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline UserTurnSlotOutput& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline UserTurnSlotOutput& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline UserTurnSlotOutput& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline const Aws::Vector<UserTurnSlotOutput>& GetValues() const{ return m_values; }

    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline void SetValues(const Aws::Vector<UserTurnSlotOutput>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline void SetValues(Aws::Vector<UserTurnSlotOutput>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline UserTurnSlotOutput& WithValues(const Aws::Vector<UserTurnSlotOutput>& value) { SetValues(value); return *this;}

    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline UserTurnSlotOutput& WithValues(Aws::Vector<UserTurnSlotOutput>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline UserTurnSlotOutput& AddValues(const UserTurnSlotOutput& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline UserTurnSlotOutput& AddValues(UserTurnSlotOutput&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline const Aws::Map<Aws::String, UserTurnSlotOutput>& GetSubSlots() const{ return m_subSlots; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline bool SubSlotsHasBeenSet() const { return m_subSlotsHasBeenSet; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline void SetSubSlots(const Aws::Map<Aws::String, UserTurnSlotOutput>& value) { m_subSlotsHasBeenSet = true; m_subSlots = value; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline void SetSubSlots(Aws::Map<Aws::String, UserTurnSlotOutput>&& value) { m_subSlotsHasBeenSet = true; m_subSlots = std::move(value); }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& WithSubSlots(const Aws::Map<Aws::String, UserTurnSlotOutput>& value) { SetSubSlots(value); return *this;}

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& WithSubSlots(Aws::Map<Aws::String, UserTurnSlotOutput>&& value) { SetSubSlots(std::move(value)); return *this;}

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& AddSubSlots(const Aws::String& key, const UserTurnSlotOutput& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, value); return *this; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& AddSubSlots(Aws::String&& key, const UserTurnSlotOutput& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& AddSubSlots(const Aws::String& key, UserTurnSlotOutput&& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& AddSubSlots(Aws::String&& key, UserTurnSlotOutput&& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& AddSubSlots(const char* key, UserTurnSlotOutput&& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline UserTurnSlotOutput& AddSubSlots(const char* key, const UserTurnSlotOutput& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, value); return *this; }

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<UserTurnSlotOutput> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Map<Aws::String, UserTurnSlotOutput> m_subSlots;
    bool m_subSlotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
