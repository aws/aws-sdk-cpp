﻿/**
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
   * <p>Associates a component property to a binding property. This enables exposed
   * properties on the top level component to propagate data to the component's
   * property values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentPropertyBindingProperties">AWS
   * API Reference</a></p>
   */
  class ComponentPropertyBindingProperties
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentPropertyBindingProperties();
    AWS_AMPLIFYUIBUILDER_API ComponentPropertyBindingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentPropertyBindingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component property to bind to the data field.</p>
     */
    inline const Aws::String& GetProperty() const{ return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    inline void SetProperty(const Aws::String& value) { m_propertyHasBeenSet = true; m_property = value; }
    inline void SetProperty(Aws::String&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }
    inline void SetProperty(const char* value) { m_propertyHasBeenSet = true; m_property.assign(value); }
    inline ComponentPropertyBindingProperties& WithProperty(const Aws::String& value) { SetProperty(value); return *this;}
    inline ComponentPropertyBindingProperties& WithProperty(Aws::String&& value) { SetProperty(std::move(value)); return *this;}
    inline ComponentPropertyBindingProperties& WithProperty(const char* value) { SetProperty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data field to bind the property to.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }
    inline ComponentPropertyBindingProperties& WithField(const Aws::String& value) { SetField(value); return *this;}
    inline ComponentPropertyBindingProperties& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}
    inline ComponentPropertyBindingProperties& WithField(const char* value) { SetField(value); return *this;}
    ///@}
  private:

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
