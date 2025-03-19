/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/RuntimeHintDetails.h>
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
   * <p>You can provide Amazon Lex with hints to the phrases that a customer is
   * likely to use for a slot. When a slot with hints is resolved, the phrases in the
   * runtime hints are preferred in the resolution. You can provide hints for a
   * maximum of 100 intents. You can provide a maximum of 100 slots.</p> <p>Before
   * you can use runtime hints with an existing bot, you must first rebuild the
   * bot.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using
   * runtime hints to improve recognition of slot values</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/RuntimeHints">AWS
   * API Reference</a></p>
   */
  class RuntimeHints
  {
  public:
    AWS_LEXMODELSV2_API RuntimeHints() = default;
    AWS_LEXMODELSV2_API RuntimeHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RuntimeHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>& GetSlotHints() const { return m_slotHints; }
    inline bool SlotHintsHasBeenSet() const { return m_slotHintsHasBeenSet; }
    template<typename SlotHintsT = Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>>
    void SetSlotHints(SlotHintsT&& value) { m_slotHintsHasBeenSet = true; m_slotHints = std::forward<SlotHintsT>(value); }
    template<typename SlotHintsT = Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>>
    RuntimeHints& WithSlotHints(SlotHintsT&& value) { SetSlotHints(std::forward<SlotHintsT>(value)); return *this;}
    template<typename SlotHintsKeyT = Aws::String, typename SlotHintsValueT = Aws::Map<Aws::String, RuntimeHintDetails>>
    RuntimeHints& AddSlotHints(SlotHintsKeyT&& key, SlotHintsValueT&& value) {
      m_slotHintsHasBeenSet = true; m_slotHints.emplace(std::forward<SlotHintsKeyT>(key), std::forward<SlotHintsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>> m_slotHints;
    bool m_slotHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
