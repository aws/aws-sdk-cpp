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
   * <p>Describes how to bind a component property to form data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormBindingElement">AWS
   * API Reference</a></p>
   */
  class FormBindingElement
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormBindingElement() = default;
    AWS_AMPLIFYUIBUILDER_API FormBindingElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormBindingElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline const Aws::String& GetElement() const { return m_element; }
    inline bool ElementHasBeenSet() const { return m_elementHasBeenSet; }
    template<typename ElementT = Aws::String>
    void SetElement(ElementT&& value) { m_elementHasBeenSet = true; m_element = std::forward<ElementT>(value); }
    template<typename ElementT = Aws::String>
    FormBindingElement& WithElement(ElementT&& value) { SetElement(std::forward<ElementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline const Aws::String& GetProperty() const { return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    template<typename PropertyT = Aws::String>
    void SetProperty(PropertyT&& value) { m_propertyHasBeenSet = true; m_property = std::forward<PropertyT>(value); }
    template<typename PropertyT = Aws::String>
    FormBindingElement& WithProperty(PropertyT&& value) { SetProperty(std::forward<PropertyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_element;
    bool m_elementHasBeenSet = false;

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
