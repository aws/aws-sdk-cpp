/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/PresetSettings.h>
#include <aws/mediaconvert/model/Type.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * A preset is a collection of preconfigured media conversion settings that you
   * want MediaConvert to apply to the output during the conversion
   * process.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Preset">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Preset
  {
  public:
    Preset();
    Preset(Aws::Utils::Json::JsonView jsonValue);
    Preset& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Preset& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Preset& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Preset& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * An optional category you create to organize your presets.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * An optional category you create to organize your presets.
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * An optional category you create to organize your presets.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * An optional category you create to organize your presets.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * An optional category you create to organize your presets.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * An optional category you create to organize your presets.
     */
    inline Preset& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * An optional category you create to organize your presets.
     */
    inline Preset& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * An optional category you create to organize your presets.
     */
    inline Preset& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * The timestamp in epoch seconds for preset creation.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The timestamp in epoch seconds for preset creation.
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * The timestamp in epoch seconds for preset creation.
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The timestamp in epoch seconds for preset creation.
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The timestamp in epoch seconds for preset creation.
     */
    inline Preset& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * The timestamp in epoch seconds for preset creation.
     */
    inline Preset& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * An optional description you create for each preset.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * An optional description you create for each preset.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * An optional description you create for each preset.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * An optional description you create for each preset.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * An optional description you create for each preset.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * An optional description you create for each preset.
     */
    inline Preset& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * An optional description you create for each preset.
     */
    inline Preset& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * An optional description you create for each preset.
     */
    inline Preset& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The timestamp in epoch seconds when the preset was last updated.
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * The timestamp in epoch seconds when the preset was last updated.
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * The timestamp in epoch seconds when the preset was last updated.
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * The timestamp in epoch seconds when the preset was last updated.
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * The timestamp in epoch seconds when the preset was last updated.
     */
    inline Preset& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * The timestamp in epoch seconds when the preset was last updated.
     */
    inline Preset& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline Preset& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline Preset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A name you create for each preset. Each name must be unique within your account.
     */
    inline Preset& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Settings for preset
     */
    inline const PresetSettings& GetSettings() const{ return m_settings; }

    /**
     * Settings for preset
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * Settings for preset
     */
    inline void SetSettings(const PresetSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * Settings for preset
     */
    inline void SetSettings(PresetSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * Settings for preset
     */
    inline Preset& WithSettings(const PresetSettings& value) { SetSettings(value); return *this;}

    /**
     * Settings for preset
     */
    inline Preset& WithSettings(PresetSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * A preset can be of two types: system or custom. System or built-in preset can't
     * be modified or deleted by the user.
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * A preset can be of two types: system or custom. System or built-in preset can't
     * be modified or deleted by the user.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * A preset can be of two types: system or custom. System or built-in preset can't
     * be modified or deleted by the user.
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * A preset can be of two types: system or custom. System or built-in preset can't
     * be modified or deleted by the user.
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * A preset can be of two types: system or custom. System or built-in preset can't
     * be modified or deleted by the user.
     */
    inline Preset& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * A preset can be of two types: system or custom. System or built-in preset can't
     * be modified or deleted by the user.
     */
    inline Preset& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    PresetSettings m_settings;
    bool m_settingsHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
