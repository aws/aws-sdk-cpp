/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

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
   * <p>Indicates whether a slot can return multiple values.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/MultipleValuesSetting">AWS
   * API Reference</a></p>
   */
  class MultipleValuesSetting
  {
  public:
    AWS_LEXMODELSV2_API MultipleValuesSetting();
    AWS_LEXMODELSV2_API MultipleValuesSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API MultipleValuesSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether a slot can return multiple values. When <code>true</code>,
     * the slot may return more than one value in a response. When <code>false</code>,
     * the slot returns only a single value.</p> <p>Multi-value slots are only
     * available in the en-US locale. If you set this value to <code>true</code> in any
     * other locale, Amazon Lex throws a <code>ValidationException</code>.</p> <p>If
     * the <code>allowMutlipleValues</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline bool GetAllowMultipleValues() const{ return m_allowMultipleValues; }

    /**
     * <p>Indicates whether a slot can return multiple values. When <code>true</code>,
     * the slot may return more than one value in a response. When <code>false</code>,
     * the slot returns only a single value.</p> <p>Multi-value slots are only
     * available in the en-US locale. If you set this value to <code>true</code> in any
     * other locale, Amazon Lex throws a <code>ValidationException</code>.</p> <p>If
     * the <code>allowMutlipleValues</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline bool AllowMultipleValuesHasBeenSet() const { return m_allowMultipleValuesHasBeenSet; }

    /**
     * <p>Indicates whether a slot can return multiple values. When <code>true</code>,
     * the slot may return more than one value in a response. When <code>false</code>,
     * the slot returns only a single value.</p> <p>Multi-value slots are only
     * available in the en-US locale. If you set this value to <code>true</code> in any
     * other locale, Amazon Lex throws a <code>ValidationException</code>.</p> <p>If
     * the <code>allowMutlipleValues</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline void SetAllowMultipleValues(bool value) { m_allowMultipleValuesHasBeenSet = true; m_allowMultipleValues = value; }

    /**
     * <p>Indicates whether a slot can return multiple values. When <code>true</code>,
     * the slot may return more than one value in a response. When <code>false</code>,
     * the slot returns only a single value.</p> <p>Multi-value slots are only
     * available in the en-US locale. If you set this value to <code>true</code> in any
     * other locale, Amazon Lex throws a <code>ValidationException</code>.</p> <p>If
     * the <code>allowMutlipleValues</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline MultipleValuesSetting& WithAllowMultipleValues(bool value) { SetAllowMultipleValues(value); return *this;}

  private:

    bool m_allowMultipleValues;
    bool m_allowMultipleValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
