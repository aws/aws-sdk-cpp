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
#include <aws/mediaconvert/model/CaptionDestinationSettings.h>
#include <aws/mediaconvert/model/LanguageCode.h>
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
   * Caption Description for preset<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionDescriptionPreset">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CaptionDescriptionPreset
  {
  public:
    CaptionDescriptionPreset();
    CaptionDescriptionPreset(Aws::Utils::Json::JsonView jsonValue);
    CaptionDescriptionPreset& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }

    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }

    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }

    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }

    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }

    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline CaptionDescriptionPreset& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}

    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline CaptionDescriptionPreset& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}

    /**
     * Indicates the language of the caption output track, using the ISO 639-2 or ISO
     * 639-3 three-letter language code. For most captions output formats, the encoder
     * puts this language information in the output captions metadata. If your output
     * captions format is DVB-Sub or Burn in, the encoder uses this language
     * information to choose the font language for rendering the captions text.
     */
    inline CaptionDescriptionPreset& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}


    /**
     * Specific settings required by destination type. Note that
     * burnin_destination_settings are not available if the source of the caption data
     * is Embedded or Teletext.
     */
    inline const CaptionDestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }

    /**
     * Specific settings required by destination type. Note that
     * burnin_destination_settings are not available if the source of the caption data
     * is Embedded or Teletext.
     */
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }

    /**
     * Specific settings required by destination type. Note that
     * burnin_destination_settings are not available if the source of the caption data
     * is Embedded or Teletext.
     */
    inline void SetDestinationSettings(const CaptionDestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }

    /**
     * Specific settings required by destination type. Note that
     * burnin_destination_settings are not available if the source of the caption data
     * is Embedded or Teletext.
     */
    inline void SetDestinationSettings(CaptionDestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }

    /**
     * Specific settings required by destination type. Note that
     * burnin_destination_settings are not available if the source of the caption data
     * is Embedded or Teletext.
     */
    inline CaptionDescriptionPreset& WithDestinationSettings(const CaptionDestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Specific settings required by destination type. Note that
     * burnin_destination_settings are not available if the source of the caption data
     * is Embedded or Teletext.
     */
    inline CaptionDescriptionPreset& WithDestinationSettings(CaptionDestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline CaptionDescriptionPreset& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline CaptionDescriptionPreset& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline CaptionDescriptionPreset& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline CaptionDescriptionPreset& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline CaptionDescriptionPreset& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}

  private:

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet;

    CaptionDestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
