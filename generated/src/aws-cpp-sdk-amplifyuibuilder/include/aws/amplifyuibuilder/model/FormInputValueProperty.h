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
    AWS_AMPLIFYUIBUILDER_API FormInputValueProperty();
    AWS_AMPLIFYUIBUILDER_API FormInputValueProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormInputValueProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value to assign to the input field.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline FormInputValueProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline FormInputValueProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline FormInputValueProperty& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline const FormInputValuePropertyBindingProperties& GetBindingProperties() const{ return m_bindingProperties; }
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }
    inline void SetBindingProperties(const FormInputValuePropertyBindingProperties& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }
    inline void SetBindingProperties(FormInputValuePropertyBindingProperties&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }
    inline FormInputValueProperty& WithBindingProperties(const FormInputValuePropertyBindingProperties& value) { SetBindingProperties(value); return *this;}
    inline FormInputValueProperty& WithBindingProperties(FormInputValuePropertyBindingProperties&& value) { SetBindingProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline const Aws::Vector<FormInputValueProperty>& GetConcat() const{ return m_concat; }
    inline bool ConcatHasBeenSet() const { return m_concatHasBeenSet; }
    inline void SetConcat(const Aws::Vector<FormInputValueProperty>& value) { m_concatHasBeenSet = true; m_concat = value; }
    inline void SetConcat(Aws::Vector<FormInputValueProperty>&& value) { m_concatHasBeenSet = true; m_concat = std::move(value); }
    inline FormInputValueProperty& WithConcat(const Aws::Vector<FormInputValueProperty>& value) { SetConcat(value); return *this;}
    inline FormInputValueProperty& WithConcat(Aws::Vector<FormInputValueProperty>&& value) { SetConcat(std::move(value)); return *this;}
    inline FormInputValueProperty& AddConcat(const FormInputValueProperty& value) { m_concatHasBeenSet = true; m_concat.push_back(value); return *this; }
    inline FormInputValueProperty& AddConcat(FormInputValueProperty&& value) { m_concatHasBeenSet = true; m_concat.push_back(std::move(value)); return *this; }
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
