/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The detected properties of the input file. Elastic Transcoder identifies
   * these values from the input file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DetectedProperties">AWS
   * API Reference</a></p>
   */
  class DetectedProperties
  {
  public:
    AWS_ELASTICTRANSCODER_API DetectedProperties();
    AWS_ELASTICTRANSCODER_API DetectedProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API DetectedProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The detected width of the input file, in pixels.</p>
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * <p>The detected width of the input file, in pixels.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>The detected width of the input file, in pixels.</p>
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>The detected width of the input file, in pixels.</p>
     */
    inline DetectedProperties& WithWidth(int value) { SetWidth(value); return *this;}


    /**
     * <p>The detected height of the input file, in pixels.</p>
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * <p>The detected height of the input file, in pixels.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>The detected height of the input file, in pixels.</p>
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>The detected height of the input file, in pixels.</p>
     */
    inline DetectedProperties& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline const Aws::String& GetFrameRate() const{ return m_frameRate; }

    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }

    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline void SetFrameRate(const Aws::String& value) { m_frameRateHasBeenSet = true; m_frameRate = value; }

    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline void SetFrameRate(Aws::String&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::move(value); }

    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline void SetFrameRate(const char* value) { m_frameRateHasBeenSet = true; m_frameRate.assign(value); }

    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline DetectedProperties& WithFrameRate(const Aws::String& value) { SetFrameRate(value); return *this;}

    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline DetectedProperties& WithFrameRate(Aws::String&& value) { SetFrameRate(std::move(value)); return *this;}

    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline DetectedProperties& WithFrameRate(const char* value) { SetFrameRate(value); return *this;}


    /**
     * <p>The detected file size of the input file, in bytes.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }

    /**
     * <p>The detected file size of the input file, in bytes.</p>
     */
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }

    /**
     * <p>The detected file size of the input file, in bytes.</p>
     */
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }

    /**
     * <p>The detected file size of the input file, in bytes.</p>
     */
    inline DetectedProperties& WithFileSize(long long value) { SetFileSize(value); return *this;}


    /**
     * <p>The detected duration of the input file, in milliseconds.</p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }

    /**
     * <p>The detected duration of the input file, in milliseconds.</p>
     */
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }

    /**
     * <p>The detected duration of the input file, in milliseconds.</p>
     */
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }

    /**
     * <p>The detected duration of the input file, in milliseconds.</p>
     */
    inline DetectedProperties& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}

  private:

    int m_width;
    bool m_widthHasBeenSet = false;

    int m_height;
    bool m_heightHasBeenSet = false;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet = false;

    long long m_fileSize;
    bool m_fileSizeHasBeenSet = false;

    long long m_durationMillis;
    bool m_durationMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
