/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
   * <p>The value to set in a slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotValue">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELSV2_API SlotValue
  {
  public:
    SlotValue();
    SlotValue(Aws::Utils::Json::JsonView jsonValue);
    SlotValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline const Aws::String& GetInterpretedValue() const{ return m_interpretedValue; }

    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline bool InterpretedValueHasBeenSet() const { return m_interpretedValueHasBeenSet; }

    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline void SetInterpretedValue(const Aws::String& value) { m_interpretedValueHasBeenSet = true; m_interpretedValue = value; }

    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline void SetInterpretedValue(Aws::String&& value) { m_interpretedValueHasBeenSet = true; m_interpretedValue = std::move(value); }

    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline void SetInterpretedValue(const char* value) { m_interpretedValueHasBeenSet = true; m_interpretedValue.assign(value); }

    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline SlotValue& WithInterpretedValue(const Aws::String& value) { SetInterpretedValue(value); return *this;}

    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline SlotValue& WithInterpretedValue(Aws::String&& value) { SetInterpretedValue(std::move(value)); return *this;}

    /**
     * <p>The value that Amazon Lex determines for the slot. The actual value depends
     * on the setting of the value selection strategy for the bot. You can choose to
     * use the value entered by the user, or you can have Amazon Lex choose the first
     * value in the <code>resolvedValues</code> list.</p>
     */
    inline SlotValue& WithInterpretedValue(const char* value) { SetInterpretedValue(value); return *this;}

  private:

    Aws::String m_interpretedValue;
    bool m_interpretedValueHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
