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
  class AWS_MEDIACONVERT_API CreatePresetRequest : public MediaConvertRequest
  {
  public:
    CreatePresetRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePreset"; }

    Aws::String SerializePayload() const override;


    /**
     * Optional. A category for the preset you are creating.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * Optional. A category for the preset you are creating.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * Optional. A category for the preset you are creating.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * Optional. A category for the preset you are creating.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * Optional. A category for the preset you are creating.
     */
    inline CreatePresetRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * Optional. A category for the preset you are creating.
     */
    inline CreatePresetRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * Optional. A category for the preset you are creating.
     */
    inline CreatePresetRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * Optional. A description of the preset you are creating.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Optional. A description of the preset you are creating.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * Optional. A description of the preset you are creating.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * Optional. A description of the preset you are creating.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * Optional. A description of the preset you are creating.
     */
    inline CreatePresetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Optional. A description of the preset you are creating.
     */
    inline CreatePresetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Optional. A description of the preset you are creating.
     */
    inline CreatePresetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The name of the preset you are creating.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the preset you are creating.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the preset you are creating.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the preset you are creating.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the preset you are creating.
     */
    inline CreatePresetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the preset you are creating.
     */
    inline CreatePresetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the preset you are creating.
     */
    inline CreatePresetRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const PresetSettings& GetSettings() const{ return m_settings; }

    
    inline void SetSettings(const PresetSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    
    inline void SetSettings(PresetSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    
    inline CreatePresetRequest& WithSettings(const PresetSettings& value) { SetSettings(value); return *this;}

    
    inline CreatePresetRequest& WithSettings(PresetSettings&& value) { SetSettings(std::move(value)); return *this;}

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
