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
    AWS_LEXMODELSV2_API UserTurnSlotOutput() = default;
    AWS_LEXMODELSV2_API UserTurnSlotOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnSlotOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value output by the slot recognition.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    UserTurnSlotOutput& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values that are output by the slot recognition.</p>
     */
    inline const Aws::Vector<UserTurnSlotOutput>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<UserTurnSlotOutput>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<UserTurnSlotOutput>>
    UserTurnSlotOutput& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = UserTurnSlotOutput>
    UserTurnSlotOutput& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of items mapping the name of the subslots to information about those
     * subslots.</p>
     */
    inline const Aws::Map<Aws::String, UserTurnSlotOutput>& GetSubSlots() const { return m_subSlots; }
    inline bool SubSlotsHasBeenSet() const { return m_subSlotsHasBeenSet; }
    template<typename SubSlotsT = Aws::Map<Aws::String, UserTurnSlotOutput>>
    void SetSubSlots(SubSlotsT&& value) { m_subSlotsHasBeenSet = true; m_subSlots = std::forward<SubSlotsT>(value); }
    template<typename SubSlotsT = Aws::Map<Aws::String, UserTurnSlotOutput>>
    UserTurnSlotOutput& WithSubSlots(SubSlotsT&& value) { SetSubSlots(std::forward<SubSlotsT>(value)); return *this;}
    template<typename SubSlotsKeyT = Aws::String, typename SubSlotsValueT = UserTurnSlotOutput>
    UserTurnSlotOutput& AddSubSlots(SubSlotsKeyT&& key, SubSlotsValueT&& value) {
      m_subSlotsHasBeenSet = true; m_subSlots.emplace(std::forward<SubSlotsKeyT>(key), std::forward<SubSlotsValueT>(value)); return *this;
    }
    ///@}
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
