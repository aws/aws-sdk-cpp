/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/FormInputValueProperty.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Associates a complex object with a display value. Use
   * <code>ValueMapping</code> to store how to represent complex objects when they
   * are displayed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ValueMapping">AWS
   * API Reference</a></p>
   */
  class ValueMapping
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ValueMapping();
    AWS_AMPLIFYUIBUILDER_API ValueMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ValueMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value to display for the complex object.</p>
     */
    inline const FormInputValueProperty& GetDisplayValue() const{ return m_displayValue; }

    /**
     * <p>The value to display for the complex object.</p>
     */
    inline bool DisplayValueHasBeenSet() const { return m_displayValueHasBeenSet; }

    /**
     * <p>The value to display for the complex object.</p>
     */
    inline void SetDisplayValue(const FormInputValueProperty& value) { m_displayValueHasBeenSet = true; m_displayValue = value; }

    /**
     * <p>The value to display for the complex object.</p>
     */
    inline void SetDisplayValue(FormInputValueProperty&& value) { m_displayValueHasBeenSet = true; m_displayValue = std::move(value); }

    /**
     * <p>The value to display for the complex object.</p>
     */
    inline ValueMapping& WithDisplayValue(const FormInputValueProperty& value) { SetDisplayValue(value); return *this;}

    /**
     * <p>The value to display for the complex object.</p>
     */
    inline ValueMapping& WithDisplayValue(FormInputValueProperty&& value) { SetDisplayValue(std::move(value)); return *this;}


    /**
     * <p>The complex object.</p>
     */
    inline const FormInputValueProperty& GetValue() const{ return m_value; }

    /**
     * <p>The complex object.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The complex object.</p>
     */
    inline void SetValue(const FormInputValueProperty& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The complex object.</p>
     */
    inline void SetValue(FormInputValueProperty&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The complex object.</p>
     */
    inline ValueMapping& WithValue(const FormInputValueProperty& value) { SetValue(value); return *this;}

    /**
     * <p>The complex object.</p>
     */
    inline ValueMapping& WithValue(FormInputValueProperty&& value) { SetValue(std::move(value)); return *this;}

  private:

    FormInputValueProperty m_displayValue;
    bool m_displayValueHasBeenSet = false;

    FormInputValueProperty m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
