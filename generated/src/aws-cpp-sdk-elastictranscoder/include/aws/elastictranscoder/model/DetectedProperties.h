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
    AWS_ELASTICTRANSCODER_API DetectedProperties() = default;
    AWS_ELASTICTRANSCODER_API DetectedProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API DetectedProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The detected width of the input file, in pixels.</p>
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline DetectedProperties& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detected height of the input file, in pixels.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline DetectedProperties& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detected frame rate of the input file, in frames per second.</p>
     */
    inline const Aws::String& GetFrameRate() const { return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    template<typename FrameRateT = Aws::String>
    void SetFrameRate(FrameRateT&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::forward<FrameRateT>(value); }
    template<typename FrameRateT = Aws::String>
    DetectedProperties& WithFrameRate(FrameRateT&& value) { SetFrameRate(std::forward<FrameRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detected file size of the input file, in bytes.</p>
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline DetectedProperties& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detected duration of the input file, in milliseconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline DetectedProperties& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}
  private:

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
