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
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Information about a video that Amazon Rekognition analyzed.
   * <code>Videometadata</code> is returned in every page of paginated responses from
   * a Amazon Rekognition video operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/VideoMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API VideoMetadata
  {
  public:
    VideoMetadata();
    VideoMetadata(Aws::Utils::Json::JsonView jsonValue);
    VideoMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline const Aws::String& GetCodec() const{ return m_codec; }

    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline void SetCodec(const Aws::String& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline void SetCodec(Aws::String&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline void SetCodec(const char* value) { m_codecHasBeenSet = true; m_codec.assign(value); }

    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline VideoMetadata& WithCodec(const Aws::String& value) { SetCodec(value); return *this;}

    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline VideoMetadata& WithCodec(Aws::String&& value) { SetCodec(std::move(value)); return *this;}

    /**
     * <p>Type of compression used in the analyzed video. </p>
     */
    inline VideoMetadata& WithCodec(const char* value) { SetCodec(value); return *this;}


    /**
     * <p>Length of the video in milliseconds.</p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }

    /**
     * <p>Length of the video in milliseconds.</p>
     */
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }

    /**
     * <p>Length of the video in milliseconds.</p>
     */
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }

    /**
     * <p>Length of the video in milliseconds.</p>
     */
    inline VideoMetadata& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}


    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline VideoMetadata& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline VideoMetadata& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>Format of the analyzed video. Possible values are MP4, MOV and AVI. </p>
     */
    inline VideoMetadata& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>Number of frames per second in the video.</p>
     */
    inline double GetFrameRate() const{ return m_frameRate; }

    /**
     * <p>Number of frames per second in the video.</p>
     */
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }

    /**
     * <p>Number of frames per second in the video.</p>
     */
    inline void SetFrameRate(double value) { m_frameRateHasBeenSet = true; m_frameRate = value; }

    /**
     * <p>Number of frames per second in the video.</p>
     */
    inline VideoMetadata& WithFrameRate(double value) { SetFrameRate(value); return *this;}


    /**
     * <p>Vertical pixel dimension of the video.</p>
     */
    inline long long GetFrameHeight() const{ return m_frameHeight; }

    /**
     * <p>Vertical pixel dimension of the video.</p>
     */
    inline bool FrameHeightHasBeenSet() const { return m_frameHeightHasBeenSet; }

    /**
     * <p>Vertical pixel dimension of the video.</p>
     */
    inline void SetFrameHeight(long long value) { m_frameHeightHasBeenSet = true; m_frameHeight = value; }

    /**
     * <p>Vertical pixel dimension of the video.</p>
     */
    inline VideoMetadata& WithFrameHeight(long long value) { SetFrameHeight(value); return *this;}


    /**
     * <p>Horizontal pixel dimension of the video.</p>
     */
    inline long long GetFrameWidth() const{ return m_frameWidth; }

    /**
     * <p>Horizontal pixel dimension of the video.</p>
     */
    inline bool FrameWidthHasBeenSet() const { return m_frameWidthHasBeenSet; }

    /**
     * <p>Horizontal pixel dimension of the video.</p>
     */
    inline void SetFrameWidth(long long value) { m_frameWidthHasBeenSet = true; m_frameWidth = value; }

    /**
     * <p>Horizontal pixel dimension of the video.</p>
     */
    inline VideoMetadata& WithFrameWidth(long long value) { SetFrameWidth(value); return *this;}

  private:

    Aws::String m_codec;
    bool m_codecHasBeenSet;

    long long m_durationMillis;
    bool m_durationMillisHasBeenSet;

    Aws::String m_format;
    bool m_formatHasBeenSet;

    double m_frameRate;
    bool m_frameRateHasBeenSet;

    long long m_frameHeight;
    bool m_frameHeightHasBeenSet;

    long long m_frameWidth;
    bool m_frameWidthHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
