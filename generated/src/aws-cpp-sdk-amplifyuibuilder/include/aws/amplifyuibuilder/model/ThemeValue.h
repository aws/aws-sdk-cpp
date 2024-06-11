/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/ThemeValues.h>
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
  class ThemeValues;

  /**
   * <p>Describes the configuration of a theme's properties.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ThemeValue">AWS
   * API Reference</a></p>
   */
  class ThemeValue
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ThemeValue();
    AWS_AMPLIFYUIBUILDER_API ThemeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ThemeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of a theme property.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ThemeValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ThemeValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ThemeValue& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline const Aws::Vector<ThemeValues>& GetChildren() const{ return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    inline void SetChildren(const Aws::Vector<ThemeValues>& value) { m_childrenHasBeenSet = true; m_children = value; }
    inline void SetChildren(Aws::Vector<ThemeValues>&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }
    inline ThemeValue& WithChildren(const Aws::Vector<ThemeValues>& value) { SetChildren(value); return *this;}
    inline ThemeValue& WithChildren(Aws::Vector<ThemeValues>&& value) { SetChildren(std::move(value)); return *this;}
    inline ThemeValue& AddChildren(const ThemeValues& value) { m_childrenHasBeenSet = true; m_children.push_back(value); return *this; }
    inline ThemeValue& AddChildren(ThemeValues&& value) { m_childrenHasBeenSet = true; m_children.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<ThemeValues> m_children;
    bool m_childrenHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
