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
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Description of Caption output<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionDescription">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API CaptionDescription
  {
  public:
    CaptionDescription();
    CaptionDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    CaptionDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline const Aws::String& GetCaptionSelectorName() const{ return m_captionSelectorName; }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline void SetCaptionSelectorName(const Aws::String& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = value; }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline void SetCaptionSelectorName(Aws::String&& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = std::move(value); }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline void SetCaptionSelectorName(const char* value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName.assign(value); }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline CaptionDescription& WithCaptionSelectorName(const Aws::String& value) { SetCaptionSelectorName(value); return *this;}

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline CaptionDescription& WithCaptionSelectorName(Aws::String&& value) { SetCaptionSelectorName(std::move(value)); return *this;}

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline CaptionDescription& WithCaptionSelectorName(const char* value) { SetCaptionSelectorName(value); return *this;}


    
    inline const CaptionDestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }

    
    inline void SetDestinationSettings(const CaptionDestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }

    
    inline void SetDestinationSettings(CaptionDestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }

    
    inline CaptionDescription& WithDestinationSettings(const CaptionDestinationSettings& value) { SetDestinationSettings(value); return *this;}

    
    inline CaptionDescription& WithDestinationSettings(CaptionDestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * Indicates the language of the caption output track.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Indicates the language of the caption output track.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Indicates the language of the caption output track.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Indicates the language of the caption output track.
     */
    inline CaptionDescription& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * Indicates the language of the caption output track.
     */
    inline CaptionDescription& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }

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
    inline CaptionDescription& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline CaptionDescription& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}

    /**
     * Human readable information to indicate captions available for players (eg.
     * English, or Spanish). Alphanumeric characters, spaces, and underscore are legal.
     */
    inline CaptionDescription& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}

  private:

    Aws::String m_captionSelectorName;
    bool m_captionSelectorNameHasBeenSet;

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
