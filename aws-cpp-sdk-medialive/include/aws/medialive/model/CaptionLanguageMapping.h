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
   * Maps a caption channel to an ISO 693-2 language code
   * (http://www.loc.gov/standards/iso639-2), with an optional description.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionLanguageMapping">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CaptionLanguageMapping
  {
  public:
    CaptionLanguageMapping();
    CaptionLanguageMapping(Aws::Utils::Json::JsonView jsonValue);
    CaptionLanguageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The closed caption channel being described by this CaptionLanguageMapping.  Each
     * channel mapping must have a unique channel number (maximum of 4)
     */
    inline int GetCaptionChannel() const{ return m_captionChannel; }

    /**
     * The closed caption channel being described by this CaptionLanguageMapping.  Each
     * channel mapping must have a unique channel number (maximum of 4)
     */
    inline bool CaptionChannelHasBeenSet() const { return m_captionChannelHasBeenSet; }

    /**
     * The closed caption channel being described by this CaptionLanguageMapping.  Each
     * channel mapping must have a unique channel number (maximum of 4)
     */
    inline void SetCaptionChannel(int value) { m_captionChannelHasBeenSet = true; m_captionChannel = value; }

    /**
     * The closed caption channel being described by this CaptionLanguageMapping.  Each
     * channel mapping must have a unique channel number (maximum of 4)
     */
    inline CaptionLanguageMapping& WithCaptionChannel(int value) { SetCaptionChannel(value); return *this;}


    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline CaptionLanguageMapping& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline CaptionLanguageMapping& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline CaptionLanguageMapping& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * Textual description of language
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }

    /**
     * Textual description of language
     */
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }

    /**
     * Textual description of language
     */
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }

    /**
     * Textual description of language
     */
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }

    /**
     * Textual description of language
     */
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }

    /**
     * Textual description of language
     */
    inline CaptionLanguageMapping& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}

    /**
     * Textual description of language
     */
    inline CaptionLanguageMapping& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}

    /**
     * Textual description of language
     */
    inline CaptionLanguageMapping& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}

  private:

    int m_captionChannel;
    bool m_captionChannelHasBeenSet;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
