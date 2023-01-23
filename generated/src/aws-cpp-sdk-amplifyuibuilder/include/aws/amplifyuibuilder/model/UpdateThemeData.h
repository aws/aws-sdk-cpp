/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/ThemeValues.h>
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
   * <p>Saves the data binding information for a theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateThemeData">AWS
   * API Reference</a></p>
   */
  class UpdateThemeData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API UpdateThemeData();
    AWS_AMPLIFYUIBUILDER_API UpdateThemeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API UpdateThemeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline UpdateThemeData& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline UpdateThemeData& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the theme to update.</p>
     */
    inline UpdateThemeData& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the theme to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the theme to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the theme to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the theme to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the theme to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the theme to update.</p>
     */
    inline UpdateThemeData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the theme to update.</p>
     */
    inline UpdateThemeData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the theme to update.</p>
     */
    inline UpdateThemeData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline const Aws::Vector<ThemeValues>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline void SetOverrides(const Aws::Vector<ThemeValues>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline void SetOverrides(Aws::Vector<ThemeValues>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline UpdateThemeData& WithOverrides(const Aws::Vector<ThemeValues>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline UpdateThemeData& WithOverrides(Aws::Vector<ThemeValues>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline UpdateThemeData& AddOverrides(const ThemeValues& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Describes the properties that can be overriden to customize the theme.</p>
     */
    inline UpdateThemeData& AddOverrides(ThemeValues&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline const Aws::Vector<ThemeValues>& GetValues() const{ return m_values; }

    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline void SetValues(const Aws::Vector<ThemeValues>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline void SetValues(Aws::Vector<ThemeValues>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline UpdateThemeData& WithValues(const Aws::Vector<ThemeValues>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline UpdateThemeData& WithValues(Aws::Vector<ThemeValues>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline UpdateThemeData& AddValues(const ThemeValues& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that define the theme's properties.</p>
     */
    inline UpdateThemeData& AddValues(ThemeValues&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ThemeValues> m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Vector<ThemeValues> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
