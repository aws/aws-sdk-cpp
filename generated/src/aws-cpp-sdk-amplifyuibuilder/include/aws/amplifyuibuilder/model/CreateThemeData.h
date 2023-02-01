/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Represents all of the information that is required to create a
   * theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateThemeData">AWS
   * API Reference</a></p>
   */
  class CreateThemeData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CreateThemeData();
    AWS_AMPLIFYUIBUILDER_API CreateThemeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CreateThemeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the theme.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the theme.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the theme.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the theme.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the theme.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the theme.</p>
     */
    inline CreateThemeData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the theme.</p>
     */
    inline CreateThemeData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the theme.</p>
     */
    inline CreateThemeData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline const Aws::Vector<ThemeValues>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline void SetOverrides(const Aws::Vector<ThemeValues>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline void SetOverrides(Aws::Vector<ThemeValues>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline CreateThemeData& WithOverrides(const Aws::Vector<ThemeValues>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline CreateThemeData& WithOverrides(Aws::Vector<ThemeValues>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline CreateThemeData& AddOverrides(const ThemeValues& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Describes the properties that can be overriden to customize an instance of
     * the theme.</p>
     */
    inline CreateThemeData& AddOverrides(ThemeValues&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the theme data.</p>
     */
    inline CreateThemeData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline const Aws::Vector<ThemeValues>& GetValues() const{ return m_values; }

    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline void SetValues(const Aws::Vector<ThemeValues>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline void SetValues(Aws::Vector<ThemeValues>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline CreateThemeData& WithValues(const Aws::Vector<ThemeValues>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline CreateThemeData& WithValues(Aws::Vector<ThemeValues>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline CreateThemeData& AddValues(const ThemeValues& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that deﬁnes the properties of the theme.</p>
     */
    inline CreateThemeData& AddValues(ThemeValues&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ThemeValues> m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ThemeValues> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
