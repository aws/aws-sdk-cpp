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
   * Caption Language Mapping<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsCaptionLanguageMapping">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API HlsCaptionLanguageMapping
  {
  public:
    HlsCaptionLanguageMapping();
    HlsCaptionLanguageMapping(Aws::Utils::Json::JsonView jsonValue);
    HlsCaptionLanguageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Caption channel.
     */
    inline int GetCaptionChannel() const{ return m_captionChannel; }

    /**
     * Caption channel.
     */
    inline bool CaptionChannelHasBeenSet() const { return m_captionChannelHasBeenSet; }

    /**
     * Caption channel.
     */
    inline void SetCaptionChannel(int value) { m_captionChannelHasBeenSet = true; m_captionChannel = value; }

    /**
     * Caption channel.
     */
    inline HlsCaptionLanguageMapping& WithCaptionChannel(int value) { SetCaptionChannel(value); return *this;}


    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }

    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }

    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }

    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }

    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }

    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline HlsCaptionLanguageMapping& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}

    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline HlsCaptionLanguageMapping& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}

    /**
     * Specify the language for this caption channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline HlsCaptionLanguageMapping& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}


    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline HlsCaptionLanguageMapping& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline HlsCaptionLanguageMapping& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * Caption language description.
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }

    /**
     * Caption language description.
     */
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }

    /**
     * Caption language description.
     */
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }

    /**
     * Caption language description.
     */
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }

    /**
     * Caption language description.
     */
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }

    /**
     * Caption language description.
     */
    inline HlsCaptionLanguageMapping& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}

    /**
     * Caption language description.
     */
    inline HlsCaptionLanguageMapping& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}

    /**
     * Caption language description.
     */
    inline HlsCaptionLanguageMapping& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}

  private:

    int m_captionChannel;
    bool m_captionChannelHasBeenSet;

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
