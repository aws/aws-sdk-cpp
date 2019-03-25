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
#include <aws/mediaconvert/model/EmbeddedConvert608To708.h>
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
   * Settings for embedded captions Source<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EmbeddedSourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API EmbeddedSourceSettings
  {
  public:
    EmbeddedSourceSettings();
    EmbeddedSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    EmbeddedSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When set to UPCONVERT, 608 data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline const EmbeddedConvert608To708& GetConvert608To708() const{ return m_convert608To708; }

    /**
     * When set to UPCONVERT, 608 data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }

    /**
     * When set to UPCONVERT, 608 data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline void SetConvert608To708(const EmbeddedConvert608To708& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }

    /**
     * When set to UPCONVERT, 608 data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline void SetConvert608To708(EmbeddedConvert608To708&& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = std::move(value); }

    /**
     * When set to UPCONVERT, 608 data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline EmbeddedSourceSettings& WithConvert608To708(const EmbeddedConvert608To708& value) { SetConvert608To708(value); return *this;}

    /**
     * When set to UPCONVERT, 608 data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline EmbeddedSourceSettings& WithConvert608To708(EmbeddedConvert608To708&& value) { SetConvert608To708(std::move(value)); return *this;}


    /**
     * Specifies the 608/708 channel number within the video track from which to
     * extract captions. Unused for passthrough.
     */
    inline int GetSource608ChannelNumber() const{ return m_source608ChannelNumber; }

    /**
     * Specifies the 608/708 channel number within the video track from which to
     * extract captions. Unused for passthrough.
     */
    inline bool Source608ChannelNumberHasBeenSet() const { return m_source608ChannelNumberHasBeenSet; }

    /**
     * Specifies the 608/708 channel number within the video track from which to
     * extract captions. Unused for passthrough.
     */
    inline void SetSource608ChannelNumber(int value) { m_source608ChannelNumberHasBeenSet = true; m_source608ChannelNumber = value; }

    /**
     * Specifies the 608/708 channel number within the video track from which to
     * extract captions. Unused for passthrough.
     */
    inline EmbeddedSourceSettings& WithSource608ChannelNumber(int value) { SetSource608ChannelNumber(value); return *this;}


    /**
     * Specifies the video track index used for extracting captions. The system only
     * supports one input video track, so this should always be set to '1'.
     */
    inline int GetSource608TrackNumber() const{ return m_source608TrackNumber; }

    /**
     * Specifies the video track index used for extracting captions. The system only
     * supports one input video track, so this should always be set to '1'.
     */
    inline bool Source608TrackNumberHasBeenSet() const { return m_source608TrackNumberHasBeenSet; }

    /**
     * Specifies the video track index used for extracting captions. The system only
     * supports one input video track, so this should always be set to '1'.
     */
    inline void SetSource608TrackNumber(int value) { m_source608TrackNumberHasBeenSet = true; m_source608TrackNumber = value; }

    /**
     * Specifies the video track index used for extracting captions. The system only
     * supports one input video track, so this should always be set to '1'.
     */
    inline EmbeddedSourceSettings& WithSource608TrackNumber(int value) { SetSource608TrackNumber(value); return *this;}

  private:

    EmbeddedConvert608To708 m_convert608To708;
    bool m_convert608To708HasBeenSet;

    int m_source608ChannelNumber;
    bool m_source608ChannelNumberHasBeenSet;

    int m_source608TrackNumber;
    bool m_source608TrackNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
