/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the value provided for a slot and Amazon Lex V2's
   * interpretation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Value">AWS
   * API Reference</a></p>
   */
  class Value
  {
  public:
    AWS_LEXRUNTIMEV2_API Value() = default;
    AWS_LEXRUNTIMEV2_API Value(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Value& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The part of the user's response to the slot elicitation that Amazon Lex V2
     * determines is relevant to the slot value.</p>
     */
    inline const Aws::String& GetOriginalValue() const { return m_originalValue; }
    inline bool OriginalValueHasBeenSet() const { return m_originalValueHasBeenSet; }
    template<typename OriginalValueT = Aws::String>
    void SetOriginalValue(OriginalValueT&& value) { m_originalValueHasBeenSet = true; m_originalValue = std::forward<OriginalValueT>(value); }
    template<typename OriginalValueT = Aws::String>
    Value& WithOriginalValue(OriginalValueT&& value) { SetOriginalValue(std::forward<OriginalValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that Amazon Lex V2 determines for the slot, given the user input.
     * The actual value depends on the setting of the value selection strategy for the
     * bot. You can choose to use the value entered by the user, or you can have Amazon
     * Lex V2 choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline const Aws::String& GetInterpretedValue() const { return m_interpretedValue; }
    inline bool InterpretedValueHasBeenSet() const { return m_interpretedValueHasBeenSet; }
    template<typename InterpretedValueT = Aws::String>
    void SetInterpretedValue(InterpretedValueT&& value) { m_interpretedValueHasBeenSet = true; m_interpretedValue = std::forward<InterpretedValueT>(value); }
    template<typename InterpretedValueT = Aws::String>
    Value& WithInterpretedValue(InterpretedValueT&& value) { SetInterpretedValue(std::forward<InterpretedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of values that Amazon Lex V2 determines are possible resolutions for
     * the user input. The first value matches the <code>interpretedValue</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResolvedValues() const { return m_resolvedValues; }
    inline bool ResolvedValuesHasBeenSet() const { return m_resolvedValuesHasBeenSet; }
    template<typename ResolvedValuesT = Aws::Vector<Aws::String>>
    void SetResolvedValues(ResolvedValuesT&& value) { m_resolvedValuesHasBeenSet = true; m_resolvedValues = std::forward<ResolvedValuesT>(value); }
    template<typename ResolvedValuesT = Aws::Vector<Aws::String>>
    Value& WithResolvedValues(ResolvedValuesT&& value) { SetResolvedValues(std::forward<ResolvedValuesT>(value)); return *this;}
    template<typename ResolvedValuesT = Aws::String>
    Value& AddResolvedValues(ResolvedValuesT&& value) { m_resolvedValuesHasBeenSet = true; m_resolvedValues.emplace_back(std::forward<ResolvedValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_originalValue;
    bool m_originalValueHasBeenSet = false;

    Aws::String m_interpretedValue;
    bool m_interpretedValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_resolvedValues;
    bool m_resolvedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
