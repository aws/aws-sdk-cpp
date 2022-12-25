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
   * <p>The value of a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Value">AWS
   * API Reference</a></p>
   */
  class Value
  {
  public:
    AWS_LEXRUNTIMEV2_API Value();
    AWS_LEXRUNTIMEV2_API Value(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Value& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline const Aws::String& GetOriginalValue() const{ return m_originalValue; }

    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline bool OriginalValueHasBeenSet() const { return m_originalValueHasBeenSet; }

    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline void SetOriginalValue(const Aws::String& value) { m_originalValueHasBeenSet = true; m_originalValue = value; }

    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline void SetOriginalValue(Aws::String&& value) { m_originalValueHasBeenSet = true; m_originalValue = std::move(value); }

    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline void SetOriginalValue(const char* value) { m_originalValueHasBeenSet = true; m_originalValue.assign(value); }

    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline Value& WithOriginalValue(const Aws::String& value) { SetOriginalValue(value); return *this;}

    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline Value& WithOriginalValue(Aws::String&& value) { SetOriginalValue(std::move(value)); return *this;}

    /**
     * <p>The text of the utterance from the user that was entered for the slot.</p>
     */
    inline Value& WithOriginalValue(const char* value) { SetOriginalValue(value); return *this;}


    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline const Aws::String& GetInterpretedValue() const{ return m_interpretedValue; }

    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline bool InterpretedValueHasBeenSet() const { return m_interpretedValueHasBeenSet; }

    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline void SetInterpretedValue(const Aws::String& value) { m_interpretedValueHasBeenSet = true; m_interpretedValue = value; }

    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline void SetInterpretedValue(Aws::String&& value) { m_interpretedValueHasBeenSet = true; m_interpretedValue = std::move(value); }

    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline void SetInterpretedValue(const char* value) { m_interpretedValueHasBeenSet = true; m_interpretedValue.assign(value); }

    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline Value& WithInterpretedValue(const Aws::String& value) { SetInterpretedValue(value); return *this;}

    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline Value& WithInterpretedValue(Aws::String&& value) { SetInterpretedValue(std::move(value)); return *this;}

    /**
     * <p>The value that Amazon Lex V2 determines for the slot. The actual value
     * depends on the setting of the value selection strategy for the bot. You can
     * choose to use the value entered by the user, or you can have Amazon Lex V2
     * choose the first value in the <code>resolvedValues</code> list.</p>
     */
    inline Value& WithInterpretedValue(const char* value) { SetInterpretedValue(value); return *this;}


    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResolvedValues() const{ return m_resolvedValues; }

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline bool ResolvedValuesHasBeenSet() const { return m_resolvedValuesHasBeenSet; }

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline void SetResolvedValues(const Aws::Vector<Aws::String>& value) { m_resolvedValuesHasBeenSet = true; m_resolvedValues = value; }

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline void SetResolvedValues(Aws::Vector<Aws::String>&& value) { m_resolvedValuesHasBeenSet = true; m_resolvedValues = std::move(value); }

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline Value& WithResolvedValues(const Aws::Vector<Aws::String>& value) { SetResolvedValues(value); return *this;}

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline Value& WithResolvedValues(Aws::Vector<Aws::String>&& value) { SetResolvedValues(std::move(value)); return *this;}

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline Value& AddResolvedValues(const Aws::String& value) { m_resolvedValuesHasBeenSet = true; m_resolvedValues.push_back(value); return *this; }

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline Value& AddResolvedValues(Aws::String&& value) { m_resolvedValuesHasBeenSet = true; m_resolvedValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of additional values that have been recognized for the slot.</p>
     */
    inline Value& AddResolvedValues(const char* value) { m_resolvedValuesHasBeenSet = true; m_resolvedValues.push_back(value); return *this; }

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
