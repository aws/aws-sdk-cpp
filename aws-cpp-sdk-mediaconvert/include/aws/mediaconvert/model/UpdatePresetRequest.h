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
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/PresetSettings.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API UpdatePresetRequest : public MediaConvertRequest
  {
  public:
    UpdatePresetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePreset"; }

    Aws::String SerializePayload() const override;


    /**
     * The new category for the preset, if you are changing it.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * The new category for the preset, if you are changing it.
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * The new category for the preset, if you are changing it.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * The new category for the preset, if you are changing it.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * The new category for the preset, if you are changing it.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * The new category for the preset, if you are changing it.
     */
    inline UpdatePresetRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * The new category for the preset, if you are changing it.
     */
    inline UpdatePresetRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * The new category for the preset, if you are changing it.
     */
    inline UpdatePresetRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * The new description for the preset, if you are changing it.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The new description for the preset, if you are changing it.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The new description for the preset, if you are changing it.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The new description for the preset, if you are changing it.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The new description for the preset, if you are changing it.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The new description for the preset, if you are changing it.
     */
    inline UpdatePresetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The new description for the preset, if you are changing it.
     */
    inline UpdatePresetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The new description for the preset, if you are changing it.
     */
    inline UpdatePresetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The name of the preset you are modifying.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the preset you are modifying.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the preset you are modifying.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the preset you are modifying.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the preset you are modifying.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the preset you are modifying.
     */
    inline UpdatePresetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the preset you are modifying.
     */
    inline UpdatePresetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the preset you are modifying.
     */
    inline UpdatePresetRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdatePresetRequest& WithSettings(const PresetSettings& value) { SetSettings(value); return *this;}

    /**
     * Settings for preset
     */
    inline UpdatePresetRequest& WithSettings(PresetSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    PresetSettings m_settings;
    bool m_settingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
