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


    /**
     * <p>The value to assign to the input field.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to assign to the input field.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to assign to the input field.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to assign to the input field.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to assign to the input field.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to assign to the input field.</p>
     */
    inline FormInputValueProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to assign to the input field.</p>
     */
    inline FormInputValueProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to assign to the input field.</p>
     */
    inline FormInputValueProperty& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline const FormInputValuePropertyBindingProperties& GetBindingProperties() const{ return m_bindingProperties; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline void SetBindingProperties(const FormInputValuePropertyBindingProperties& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline void SetBindingProperties(FormInputValuePropertyBindingProperties&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline FormInputValueProperty& WithBindingProperties(const FormInputValuePropertyBindingProperties& value) { SetBindingProperties(value); return *this;}

    /**
     * <p>The information to bind fields to data at runtime.</p>
     */
    inline FormInputValueProperty& WithBindingProperties(FormInputValuePropertyBindingProperties&& value) { SetBindingProperties(std::move(value)); return *this;}


    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline const Aws::Vector<FormInputValueProperty>& GetConcat() const{ return m_concat; }

    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline bool ConcatHasBeenSet() const { return m_concatHasBeenSet; }

    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline void SetConcat(const Aws::Vector<FormInputValueProperty>& value) { m_concatHasBeenSet = true; m_concat = value; }

    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline void SetConcat(Aws::Vector<FormInputValueProperty>&& value) { m_concatHasBeenSet = true; m_concat = std::move(value); }

    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline FormInputValueProperty& WithConcat(const Aws::Vector<FormInputValueProperty>& value) { SetConcat(value); return *this;}

    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline FormInputValueProperty& WithConcat(Aws::Vector<FormInputValueProperty>&& value) { SetConcat(std::move(value)); return *this;}

    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline FormInputValueProperty& AddConcat(const FormInputValueProperty& value) { m_concatHasBeenSet = true; m_concat.push_back(value); return *this; }

    /**
     * <p>A list of form properties to concatenate to create the value to assign to
     * this field property.</p>
     */
    inline FormInputValueProperty& AddConcat(FormInputValueProperty&& value) { m_concatHasBeenSet = true; m_concat.push_back(std::move(value)); return *this; }

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
