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
    AWS_AMPLIFYUIBUILDER_API FormBindingElement();
    AWS_AMPLIFYUIBUILDER_API FormBindingElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormBindingElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline const Aws::String& GetElement() const{ return m_element; }

    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline bool ElementHasBeenSet() const { return m_elementHasBeenSet; }

    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline void SetElement(const Aws::String& value) { m_elementHasBeenSet = true; m_element = value; }

    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline void SetElement(Aws::String&& value) { m_elementHasBeenSet = true; m_element = std::move(value); }

    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline void SetElement(const char* value) { m_elementHasBeenSet = true; m_element.assign(value); }

    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline FormBindingElement& WithElement(const Aws::String& value) { SetElement(value); return *this;}

    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline FormBindingElement& WithElement(Aws::String&& value) { SetElement(std::move(value)); return *this;}

    /**
     * <p>The name of the component to retrieve a value from.</p>
     */
    inline FormBindingElement& WithElement(const char* value) { SetElement(value); return *this;}


    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline const Aws::String& GetProperty() const{ return m_property; }

    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }

    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline void SetProperty(const Aws::String& value) { m_propertyHasBeenSet = true; m_property = value; }

    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline void SetProperty(Aws::String&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }

    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline void SetProperty(const char* value) { m_propertyHasBeenSet = true; m_property.assign(value); }

    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline FormBindingElement& WithProperty(const Aws::String& value) { SetProperty(value); return *this;}

    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline FormBindingElement& WithProperty(Aws::String&& value) { SetProperty(std::move(value)); return *this;}

    /**
     * <p>The property to retrieve a value from.</p>
     */
    inline FormBindingElement& WithProperty(const char* value) { SetProperty(value); return *this;}

  private:

    Aws::String m_element;
    bool m_elementHasBeenSet = false;

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
