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

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
