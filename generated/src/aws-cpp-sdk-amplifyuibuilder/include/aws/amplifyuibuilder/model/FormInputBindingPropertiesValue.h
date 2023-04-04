/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormInputBindingPropertiesValueProperties.h>
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
   * <p>Represents the data binding configuration for a form's input fields at
   * runtime.You can use <code>FormInputBindingPropertiesValue</code> to add exposed
   * properties to a form to allow different values to be entered when a form is
   * reused in different places in an app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormInputBindingPropertiesValue">AWS
   * API Reference</a></p>
   */
  class FormInputBindingPropertiesValue
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormInputBindingPropertiesValue();
    AWS_AMPLIFYUIBUILDER_API FormInputBindingPropertiesValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormInputBindingPropertiesValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The property type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The property type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The property type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The property type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The property type.</p>
     */
    inline FormInputBindingPropertiesValue& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The property type.</p>
     */
    inline FormInputBindingPropertiesValue& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The property type.</p>
     */
    inline FormInputBindingPropertiesValue& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline const FormInputBindingPropertiesValueProperties& GetBindingProperties() const{ return m_bindingProperties; }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline void SetBindingProperties(const FormInputBindingPropertiesValueProperties& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline void SetBindingProperties(FormInputBindingPropertiesValueProperties&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline FormInputBindingPropertiesValue& WithBindingProperties(const FormInputBindingPropertiesValueProperties& value) { SetBindingProperties(value); return *this;}

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline FormInputBindingPropertiesValue& WithBindingProperties(FormInputBindingPropertiesValueProperties&& value) { SetBindingProperties(std::move(value)); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    FormInputBindingPropertiesValueProperties m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
