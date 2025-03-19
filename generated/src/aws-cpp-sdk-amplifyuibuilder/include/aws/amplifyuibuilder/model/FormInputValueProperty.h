/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormInputValuePropertyBindingProperties.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for an input field on a form. Use
   * <code>FormInputValueProperty</code> to specify the values to render or bind by
   * default.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormInputValueProperty">AWS
   * API Reference</a></p>
   */
  class FormInputValueProperty
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormInputValueProperty() = default;
    AWS_AMPLIFYUIBUILDER_API FormInputValueProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormInputValueProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value to assign to the input field.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    FormInputValueProperty& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline const FormInputValuePropertyBindingProperties& GetBindingProperties() const { return m_bindingProperties; }
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }
    template<typename BindingPropertiesT = FormInputValuePropertyBindingProperties>
    void SetBindingProperties(BindingPropertiesT&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::forward<BindingPropertiesT>(value); }
    template<typename BindingPropertiesT = FormInputValuePropertyBindingProperties>
    FormInputValueProperty& WithBindingProperties(BindingPropertiesT&& value) { SetBindingProperties(std::forward<BindingPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline const Aws::Vector<FormInputValueProperty>& GetConcat() const { return m_concat; }
    inline bool ConcatHasBeenSet() const { return m_concatHasBeenSet; }
    template<typename ConcatT = Aws::Vector<FormInputValueProperty>>
    void SetConcat(ConcatT&& value) { m_concatHasBeenSet = true; m_concat = std::forward<ConcatT>(value); }
    template<typename ConcatT = Aws::Vector<FormInputValueProperty>>
    FormInputValueProperty& WithConcat(ConcatT&& value) { SetConcat(std::forward<ConcatT>(value)); return *this;}
    template<typename ConcatT = FormInputValueProperty>
    FormInputValueProperty& AddConcat(ConcatT&& value) { m_concatHasBeenSet = true; m_concat.emplace_back(std::forward<ConcatT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    FormInputValuePropertyBindingProperties m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;

    Aws::Vector<FormInputValueProperty> m_concat;
    bool m_concatHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
