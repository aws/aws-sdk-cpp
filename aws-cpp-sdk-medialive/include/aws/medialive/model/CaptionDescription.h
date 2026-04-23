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
#include <aws/medialive/model/CaptionDestinationSettings.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionDescription">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CaptionDescription
  {
  public:
    CaptionDescription();
    CaptionDescription(Aws::Utils::Json::JsonView jsonValue);
    CaptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline const Aws::String& GetCaptionSelectorName() const{ return m_captionSelectorName; }

    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline bool CaptionSelectorNameHasBeenSet() const { return m_captionSelectorNameHasBeenSet; }

    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline void SetCaptionSelectorName(const Aws::String& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = value; }

    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline void SetCaptionSelectorName(Aws::String&& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = std::move(value); }

    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline void SetCaptionSelectorName(const char* value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName.assign(value); }

    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline CaptionDescription& WithCaptionSelectorName(const Aws::String& value) { SetCaptionSelectorName(value); return *this;}

    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline CaptionDescription& WithCaptionSelectorName(Aws::String&& value) { SetCaptionSelectorName(std::move(value)); return *this;}

    /**
     * Specifies which input caption selector to use as a caption source when
     * generating output captions. This field should match a captionSelector name.
     */
    inline CaptionDescription& WithCaptionSelectorName(const char* value) { SetCaptionSelectorName(value); return *this;}


    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline const CaptionDestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }

    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }

    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline void SetDestinationSettings(const CaptionDestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }

    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline void SetDestinationSettings(CaptionDestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }

    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline CaptionDescription& WithDestinationSettings(const CaptionDestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Additional settings for captions destination that depend on the destination
     * type.
     */
    inline CaptionDescription& WithDestinationSettings(CaptionDestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline CaptionDescription& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline CaptionDescription& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * ISO 639-2 three-digit code: http://www.loc.gov/standards/iso639-2/
     */
    inline CaptionDescription& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline CaptionDescription& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline CaptionDescription& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish).
     */
    inline CaptionDescription& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}


    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline CaptionDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline CaptionDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of the caption description.  Used to associate a caption description with
     * an output.  Names must be unique within an event.
     */
    inline CaptionDescription& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_captionSelectorName;
    bool m_captionSelectorNameHasBeenSet;

    CaptionDestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
