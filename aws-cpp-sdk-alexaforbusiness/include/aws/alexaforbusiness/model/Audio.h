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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/Locale.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The audio message. There is a 1 MB limit on the audio file input and the only
   * supported format is MP3. To convert your MP3 audio files to an Alexa-friendly,
   * </p> <p>required codec version (MPEG version 2) and bit rate (48 kbps), you
   * might use converter software. One option for this is a command-line tool,
   * FFmpeg. For more information, see <a href="https://www.ffmpeg.org/">FFmpeg</a>.
   * The following command converts the provided &lt;input-file&gt; to an MP3 file
   * that is played in the announcement:</p> <p> <code>ffmpeg -i &lt;input-file&gt;
   * -ac 2 -codec:a libmp3lame -b:a 48k -ar 16000 &lt;output-file.mp3&gt;</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Audio">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API Audio
  {
  public:
    Audio();
    Audio(Aws::Utils::Json::JsonView jsonValue);
    Audio& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The locale of the audio message. Currently, en-US is supported.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale of the audio message. Currently, en-US is supported.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale of the audio message. Currently, en-US is supported.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale of the audio message. Currently, en-US is supported.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale of the audio message. Currently, en-US is supported.</p>
     */
    inline Audio& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale of the audio message. Currently, en-US is supported.</p>
     */
    inline Audio& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline Audio& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline Audio& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the audio file. Currently, S3 URLs are supported. Only S3
     * locations comprised of safe characters are valid. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#Safe%20Characters">Safe
     * Characters</a>.</p>
     */
    inline Audio& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Locale m_locale;
    bool m_localeHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
