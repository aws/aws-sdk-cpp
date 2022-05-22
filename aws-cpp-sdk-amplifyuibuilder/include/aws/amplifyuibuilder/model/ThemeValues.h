/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
  class ThemeValue;

  /**
   * <p>A key-value pair that defines a property of a theme.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ThemeValues">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFYUIBUILDER_API ThemeValues
  {
  public:
    ThemeValues();
    ThemeValues(Aws::Utils::Json::JsonView jsonValue);
    ThemeValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the property.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the property.</p>
     */
    inline ThemeValues& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the property.</p>
     */
    inline ThemeValues& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the property.</p>
     */
    inline ThemeValues& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the property.</p>
     */
    const ThemeValue& GetValue() const;

    /**
     * <p>The value of the property.</p>
     */
    bool ValueHasBeenSet() const;

    /**
     * <p>The value of the property.</p>
     */
    void SetValue(const ThemeValue& value);

    /**
     * <p>The value of the property.</p>
     */
    void SetValue(ThemeValue&& value);

    /**
     * <p>The value of the property.</p>
     */
    ThemeValues& WithValue(const ThemeValue& value);

    /**
     * <p>The value of the property.</p>
     */
    ThemeValues& WithValue(ThemeValue&& value);

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    std::shared_ptr<ThemeValue> m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
