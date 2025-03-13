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
    AWS_AMPLIFYUIBUILDER_API ValueMapping() = default;
    AWS_AMPLIFYUIBUILDER_API ValueMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ValueMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value to display for the complex object.</p>
     */
    inline const FormInputValueProperty& GetDisplayValue() const { return m_displayValue; }
    inline bool DisplayValueHasBeenSet() const { return m_displayValueHasBeenSet; }
    template<typename DisplayValueT = FormInputValueProperty>
    void SetDisplayValue(DisplayValueT&& value) { m_displayValueHasBeenSet = true; m_displayValue = std::forward<DisplayValueT>(value); }
    template<typename DisplayValueT = FormInputValueProperty>
    ValueMapping& WithDisplayValue(DisplayValueT&& value) { SetDisplayValue(std::forward<DisplayValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complex object.</p>
     */
    inline const FormInputValueProperty& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = FormInputValueProperty>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = FormInputValueProperty>
    ValueMapping& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    FormInputValueProperty m_displayValue;
    bool m_displayValueHasBeenSet = false;

    FormInputValueProperty m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
