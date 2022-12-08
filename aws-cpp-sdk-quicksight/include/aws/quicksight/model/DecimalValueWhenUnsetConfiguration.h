/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ValueWhenUnsetOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration that defines the default value of a <code>Decimal</code>
   * parameter when a value has not been set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecimalValueWhenUnsetConfiguration">AWS
   * API Reference</a></p>
   */
  class DecimalValueWhenUnsetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DecimalValueWhenUnsetConfiguration();
    AWS_QUICKSIGHT_API DecimalValueWhenUnsetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DecimalValueWhenUnsetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The built-in options for default values. The value can be one of the
     * following:</p> <ul> <li> <p> <code>RECOMMENDED</code>: The recommended
     * value.</p> </li> <li> <p> <code>NULL</code>: The <code>NULL</code> value.</p>
     * </li> </ul>
     */
    inline const ValueWhenUnsetOption& GetValueWhenUnsetOption() const{ return m_valueWhenUnsetOption; }

    /**
     * <p>The built-in options for default values. The value can be one of the
     * following:</p> <ul> <li> <p> <code>RECOMMENDED</code>: The recommended
     * value.</p> </li> <li> <p> <code>NULL</code>: The <code>NULL</code> value.</p>
     * </li> </ul>
     */
    inline bool ValueWhenUnsetOptionHasBeenSet() const { return m_valueWhenUnsetOptionHasBeenSet; }

    /**
     * <p>The built-in options for default values. The value can be one of the
     * following:</p> <ul> <li> <p> <code>RECOMMENDED</code>: The recommended
     * value.</p> </li> <li> <p> <code>NULL</code>: The <code>NULL</code> value.</p>
     * </li> </ul>
     */
    inline void SetValueWhenUnsetOption(const ValueWhenUnsetOption& value) { m_valueWhenUnsetOptionHasBeenSet = true; m_valueWhenUnsetOption = value; }

    /**
     * <p>The built-in options for default values. The value can be one of the
     * following:</p> <ul> <li> <p> <code>RECOMMENDED</code>: The recommended
     * value.</p> </li> <li> <p> <code>NULL</code>: The <code>NULL</code> value.</p>
     * </li> </ul>
     */
    inline void SetValueWhenUnsetOption(ValueWhenUnsetOption&& value) { m_valueWhenUnsetOptionHasBeenSet = true; m_valueWhenUnsetOption = std::move(value); }

    /**
     * <p>The built-in options for default values. The value can be one of the
     * following:</p> <ul> <li> <p> <code>RECOMMENDED</code>: The recommended
     * value.</p> </li> <li> <p> <code>NULL</code>: The <code>NULL</code> value.</p>
     * </li> </ul>
     */
    inline DecimalValueWhenUnsetConfiguration& WithValueWhenUnsetOption(const ValueWhenUnsetOption& value) { SetValueWhenUnsetOption(value); return *this;}

    /**
     * <p>The built-in options for default values. The value can be one of the
     * following:</p> <ul> <li> <p> <code>RECOMMENDED</code>: The recommended
     * value.</p> </li> <li> <p> <code>NULL</code>: The <code>NULL</code> value.</p>
     * </li> </ul>
     */
    inline DecimalValueWhenUnsetConfiguration& WithValueWhenUnsetOption(ValueWhenUnsetOption&& value) { SetValueWhenUnsetOption(std::move(value)); return *this;}


    /**
     * <p>A custom value that's used when the value of a parameter isn't set.</p>
     */
    inline double GetCustomValue() const{ return m_customValue; }

    /**
     * <p>A custom value that's used when the value of a parameter isn't set.</p>
     */
    inline bool CustomValueHasBeenSet() const { return m_customValueHasBeenSet; }

    /**
     * <p>A custom value that's used when the value of a parameter isn't set.</p>
     */
    inline void SetCustomValue(double value) { m_customValueHasBeenSet = true; m_customValue = value; }

    /**
     * <p>A custom value that's used when the value of a parameter isn't set.</p>
     */
    inline DecimalValueWhenUnsetConfiguration& WithCustomValue(double value) { SetCustomValue(value); return *this;}

  private:

    ValueWhenUnsetOption m_valueWhenUnsetOption;
    bool m_valueWhenUnsetOptionHasBeenSet = false;

    double m_customValue;
    bool m_customValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
