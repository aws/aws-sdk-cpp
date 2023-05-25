/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
   * <p>Associates a form property to a binding property. This enables exposed
   * properties on the top level form to propagate data to the form's property
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormInputValuePropertyBindingProperties">AWS
   * API Reference</a></p>
   */
  class FormInputValuePropertyBindingProperties
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormInputValuePropertyBindingProperties();
    AWS_AMPLIFYUIBUILDER_API FormInputValuePropertyBindingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormInputValuePropertyBindingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline const Aws::String& GetProperty() const{ return m_property; }

    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }

    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline void SetProperty(const Aws::String& value) { m_propertyHasBeenSet = true; m_property = value; }

    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline void SetProperty(Aws::String&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }

    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline void SetProperty(const char* value) { m_propertyHasBeenSet = true; m_property.assign(value); }

    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline FormInputValuePropertyBindingProperties& WithProperty(const Aws::String& value) { SetProperty(value); return *this;}

    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline FormInputValuePropertyBindingProperties& WithProperty(Aws::String&& value) { SetProperty(std::move(value)); return *this;}

    /**
     * <p>The form property to bind to the data field.</p>
     */
    inline FormInputValuePropertyBindingProperties& WithProperty(const char* value) { SetProperty(value); return *this;}


    /**
     * <p>The data field to bind the property to.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The data field to bind the property to.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The data field to bind the property to.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The data field to bind the property to.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The data field to bind the property to.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The data field to bind the property to.</p>
     */
    inline FormInputValuePropertyBindingProperties& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The data field to bind the property to.</p>
     */
    inline FormInputValuePropertyBindingProperties& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The data field to bind the property to.</p>
     */
    inline FormInputValuePropertyBindingProperties& WithField(const char* value) { SetField(value); return *this;}

  private:

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
