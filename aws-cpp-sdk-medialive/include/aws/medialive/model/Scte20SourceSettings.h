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
#include <aws/medialive/model/Scte20Convert608To708.h>
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
   * Scte20 Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte20SourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte20SourceSettings
  {
  public:
    Scte20SourceSettings();
    Scte20SourceSettings(Aws::Utils::Json::JsonView jsonValue);
    Scte20SourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline const Scte20Convert608To708& GetConvert608To708() const{ return m_convert608To708; }

    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }

    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline void SetConvert608To708(const Scte20Convert608To708& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }

    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline void SetConvert608To708(Scte20Convert608To708&& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = std::move(value); }

    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline Scte20SourceSettings& WithConvert608To708(const Scte20Convert608To708& value) { SetConvert608To708(value); return *this;}

    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline Scte20SourceSettings& WithConvert608To708(Scte20Convert608To708&& value) { SetConvert608To708(std::move(value)); return *this;}


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
    inline Scte20SourceSettings& WithSource608ChannelNumber(int value) { SetSource608ChannelNumber(value); return *this;}

  private:

    Scte20Convert608To708 m_convert608To708;
    bool m_convert608To708HasBeenSet;

    int m_source608ChannelNumber;
    bool m_source608ChannelNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
