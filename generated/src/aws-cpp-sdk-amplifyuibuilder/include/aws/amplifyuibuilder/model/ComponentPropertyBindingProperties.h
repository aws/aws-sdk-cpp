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
   * <p>Associates a component property to a binding property. This enables exposed
   * properties on the top level component to propagate data to the component's
   * property values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentPropertyBindingProperties">AWS
   * API Reference</a></p>
   */
  class ComponentPropertyBindingProperties
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentPropertyBindingProperties() = default;
    AWS_AMPLIFYUIBUILDER_API ComponentPropertyBindingProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentPropertyBindingProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component property to bind to the data field.</p>
     */
    inline const Aws::String& GetProperty() const { return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    template<typename PropertyT = Aws::String>
    void SetProperty(PropertyT&& value) { m_propertyHasBeenSet = true; m_property = std::forward<PropertyT>(value); }
    template<typename PropertyT = Aws::String>
    ComponentPropertyBindingProperties& WithProperty(PropertyT&& value) { SetProperty(std::forward<PropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data field to bind the property to.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    ComponentPropertyBindingProperties& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
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
