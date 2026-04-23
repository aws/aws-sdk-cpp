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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CaptionSelectorSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Output groups for this Live Event. Output groups contain information about where
   * streams should be distributed.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionSelector">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CaptionSelector
  {
  public:
    CaptionSelector();
    CaptionSelector(Aws::Utils::Json::JsonView jsonValue);
    CaptionSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline CaptionSelector& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline CaptionSelector& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * When specified this field indicates the three letter language code of the
     * caption track to extract from the source.
     */
    inline CaptionSelector& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline CaptionSelector& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline CaptionSelector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name identifier for a caption selector.  This name is used to associate this
     * caption selector with one or more caption descriptions.  Names must be unique
     * within an event.
     */
    inline CaptionSelector& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Caption selector settings.
     */
    inline const CaptionSelectorSettings& GetSelectorSettings() const{ return m_selectorSettings; }

    /**
     * Caption selector settings.
     */
    inline bool SelectorSettingsHasBeenSet() const { return m_selectorSettingsHasBeenSet; }

    /**
     * Caption selector settings.
     */
    inline void SetSelectorSettings(const CaptionSelectorSettings& value) { m_selectorSettingsHasBeenSet = true; m_selectorSettings = value; }

    /**
     * Caption selector settings.
     */
    inline void SetSelectorSettings(CaptionSelectorSettings&& value) { m_selectorSettingsHasBeenSet = true; m_selectorSettings = std::move(value); }

    /**
     * Caption selector settings.
     */
    inline CaptionSelector& WithSelectorSettings(const CaptionSelectorSettings& value) { SetSelectorSettings(value); return *this;}

    /**
     * Caption selector settings.
     */
    inline CaptionSelector& WithSelectorSettings(CaptionSelectorSettings&& value) { SetSelectorSettings(std::move(value)); return *this;}

  private:

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    CaptionSelectorSettings m_selectorSettings;
    bool m_selectorSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
