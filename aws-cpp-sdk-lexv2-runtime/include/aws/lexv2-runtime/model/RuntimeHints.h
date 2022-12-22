/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/RuntimeHintDetails.h>
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
   * <p>You can provide Amazon Lex V2 with hints to the phrases that a customer is
   * likely to use for a slot. When a slot with hints is resolved, the phrases in the
   * runtime hints are preferred in the resolution. You can provide hints for a
   * maximum of 100 intents. You can provide a maximum of 100 slots.</p> <p>Before
   * you can use runtime hints with an existing bot, you must first rebuild the
   * bot.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using
   * runtime hints to improve recognition of slot values</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RuntimeHints">AWS
   * API Reference</a></p>
   */
  class RuntimeHints
  {
  public:
    AWS_LEXRUNTIMEV2_API RuntimeHints();
    AWS_LEXRUNTIMEV2_API RuntimeHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API RuntimeHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>& GetSlotHints() const{ return m_slotHints; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline bool SlotHintsHasBeenSet() const { return m_slotHintsHasBeenSet; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline void SetSlotHints(const Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>& value) { m_slotHintsHasBeenSet = true; m_slotHints = value; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline void SetSlotHints(Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>&& value) { m_slotHintsHasBeenSet = true; m_slotHints = std::move(value); }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& WithSlotHints(const Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>& value) { SetSlotHints(value); return *this;}

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& WithSlotHints(Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>>&& value) { SetSlotHints(std::move(value)); return *this;}

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& AddSlotHints(const Aws::String& key, const Aws::Map<Aws::String, RuntimeHintDetails>& value) { m_slotHintsHasBeenSet = true; m_slotHints.emplace(key, value); return *this; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& AddSlotHints(Aws::String&& key, const Aws::Map<Aws::String, RuntimeHintDetails>& value) { m_slotHintsHasBeenSet = true; m_slotHints.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& AddSlotHints(const Aws::String& key, Aws::Map<Aws::String, RuntimeHintDetails>&& value) { m_slotHintsHasBeenSet = true; m_slotHints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& AddSlotHints(Aws::String&& key, Aws::Map<Aws::String, RuntimeHintDetails>&& value) { m_slotHintsHasBeenSet = true; m_slotHints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& AddSlotHints(const char* key, Aws::Map<Aws::String, RuntimeHintDetails>&& value) { m_slotHintsHasBeenSet = true; m_slotHints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the slots in the intent that should have runtime hints added, and
     * the phrases that should be added for each slot.</p> <p>The first level of the
     * <code>slotHints</code> map is the name of the intent. The second level is the
     * name of the slot within the intent. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/using-hints.html">Using hints
     * to improve accuracy</a>.</p> <p>The intent name and slot name must exist.</p>
     */
    inline RuntimeHints& AddSlotHints(const char* key, const Aws::Map<Aws::String, RuntimeHintDetails>& value) { m_slotHintsHasBeenSet = true; m_slotHints.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, RuntimeHintDetails>> m_slotHints;
    bool m_slotHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
