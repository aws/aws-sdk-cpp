/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/RuntimeHintValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides an array of phrases that should be given preference when resolving
   * values for a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/RuntimeHintDetails">AWS
   * API Reference</a></p>
   */
  class RuntimeHintDetails
  {
  public:
    AWS_LEXMODELSV2_API RuntimeHintDetails() = default;
    AWS_LEXMODELSV2_API RuntimeHintDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RuntimeHintDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more strings that Amazon Lex should look for in the input to the bot.
     * Each phrase is given preference when deciding on slot values.</p>
     */
    inline const Aws::Vector<RuntimeHintValue>& GetRuntimeHintValues() const { return m_runtimeHintValues; }
    inline bool RuntimeHintValuesHasBeenSet() const { return m_runtimeHintValuesHasBeenSet; }
    template<typename RuntimeHintValuesT = Aws::Vector<RuntimeHintValue>>
    void SetRuntimeHintValues(RuntimeHintValuesT&& value) { m_runtimeHintValuesHasBeenSet = true; m_runtimeHintValues = std::forward<RuntimeHintValuesT>(value); }
    template<typename RuntimeHintValuesT = Aws::Vector<RuntimeHintValue>>
    RuntimeHintDetails& WithRuntimeHintValues(RuntimeHintValuesT&& value) { SetRuntimeHintValues(std::forward<RuntimeHintValuesT>(value)); return *this;}
    template<typename RuntimeHintValuesT = RuntimeHintValue>
    RuntimeHintDetails& AddRuntimeHintValues(RuntimeHintValuesT&& value) { m_runtimeHintValuesHasBeenSet = true; m_runtimeHintValues.emplace_back(std::forward<RuntimeHintValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of constituent sub slot names inside a composite slot in the intent and
     * the phrases that should be added for each sub slot. Inside each composite slot
     * hints, this structure provides a mechanism to add granular sub slot phrases.
     * Only sub slot hints are supported for composite slots. The intent name,
     * composite slot name and the constituent sub slot names must exist.</p>
     */
    inline const Aws::Map<Aws::String, RuntimeHintDetails>& GetSubSlotHints() const { return m_subSlotHints; }
    inline bool SubSlotHintsHasBeenSet() const { return m_subSlotHintsHasBeenSet; }
    template<typename SubSlotHintsT = Aws::Map<Aws::String, RuntimeHintDetails>>
    void SetSubSlotHints(SubSlotHintsT&& value) { m_subSlotHintsHasBeenSet = true; m_subSlotHints = std::forward<SubSlotHintsT>(value); }
    template<typename SubSlotHintsT = Aws::Map<Aws::String, RuntimeHintDetails>>
    RuntimeHintDetails& WithSubSlotHints(SubSlotHintsT&& value) { SetSubSlotHints(std::forward<SubSlotHintsT>(value)); return *this;}
    template<typename SubSlotHintsKeyT = Aws::String, typename SubSlotHintsValueT = RuntimeHintDetails>
    RuntimeHintDetails& AddSubSlotHints(SubSlotHintsKeyT&& key, SubSlotHintsValueT&& value) {
      m_subSlotHintsHasBeenSet = true; m_subSlotHints.emplace(std::forward<SubSlotHintsKeyT>(key), std::forward<SubSlotHintsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<RuntimeHintValue> m_runtimeHintValues;
    bool m_runtimeHintValuesHasBeenSet = false;

    Aws::Map<Aws::String, RuntimeHintDetails> m_subSlotHints;
    bool m_subSlotHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
