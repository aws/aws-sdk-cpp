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
    AWS_AMPLIFYUIBUILDER_API ThemeValue() = default;
    AWS_AMPLIFYUIBUILDER_API ThemeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ThemeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of a theme property.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ThemeValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline const Aws::Vector<ThemeValues>& GetChildren() const { return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    template<typename ChildrenT = Aws::Vector<ThemeValues>>
    void SetChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children = std::forward<ChildrenT>(value); }
    template<typename ChildrenT = Aws::Vector<ThemeValues>>
    ThemeValue& WithChildren(ChildrenT&& value) { SetChildren(std::forward<ChildrenT>(value)); return *this;}
    template<typename ChildrenT = ThemeValues>
    ThemeValue& AddChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children.emplace_back(std::forward<ChildrenT>(value)); return *this; }
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
