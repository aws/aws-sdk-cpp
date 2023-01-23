/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ComponentBindingPropertiesValueProperties.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Represents the data binding configuration for a component at runtime. You can
   * use <code>ComponentBindingPropertiesValue</code> to add exposed properties to a
   * component to allow different values to be entered when a component is reused in
   * different places in an app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentBindingPropertiesValue">AWS
   * API Reference</a></p>
   */
  class ComponentBindingPropertiesValue
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValue();
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline const ComponentBindingPropertiesValueProperties& GetBindingProperties() const{ return m_bindingProperties; }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline void SetBindingProperties(const ComponentBindingPropertiesValueProperties& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline void SetBindingProperties(ComponentBindingPropertiesValueProperties&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline ComponentBindingPropertiesValue& WithBindingProperties(const ComponentBindingPropertiesValueProperties& value) { SetBindingProperties(value); return *this;}

    /**
     * <p>Describes the properties to customize with data at runtime.</p>
     */
    inline ComponentBindingPropertiesValue& WithBindingProperties(ComponentBindingPropertiesValueProperties&& value) { SetBindingProperties(std::move(value)); return *this;}


    /**
     * <p>The default value of the property.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the property.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the property.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the property.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the property.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of the property.</p>
     */
    inline ComponentBindingPropertiesValue& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the property.</p>
     */
    inline ComponentBindingPropertiesValue& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the property.</p>
     */
    inline ComponentBindingPropertiesValue& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


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
    inline ComponentBindingPropertiesValue& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The property type.</p>
     */
    inline ComponentBindingPropertiesValue& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The property type.</p>
     */
    inline ComponentBindingPropertiesValue& WithType(const char* value) { SetType(value); return *this;}

  private:

    ComponentBindingPropertiesValueProperties m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
