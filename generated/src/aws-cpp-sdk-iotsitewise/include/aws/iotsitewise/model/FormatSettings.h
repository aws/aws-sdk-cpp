/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * &lt;p&gt;Contains the output format configuration for video
 * processing.&lt;/p&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/FormatSettings">AWS
 * API Reference</a></p>
 */
class FormatSettings {
 public:
  AWS_IOTSITEWISE_API FormatSettings() = default;
  AWS_IOTSITEWISE_API FormatSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API FormatSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;The target frame rate for the output.&lt;/p&gt;
   */
  inline int GetFramesPerSecond() const { return m_framesPerSecond; }
  inline bool FramesPerSecondHasBeenSet() const { return m_framesPerSecondHasBeenSet; }
  inline void SetFramesPerSecond(int value) {
    m_framesPerSecondHasBeenSet = true;
    m_framesPerSecond = value;
  }
  inline FormatSettings& WithFramesPerSecond(int value) {
    SetFramesPerSecond(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The target width of the output, in pixels.&lt;/p&gt;
   */
  inline int GetWidthInPixels() const { return m_widthInPixels; }
  inline bool WidthInPixelsHasBeenSet() const { return m_widthInPixelsHasBeenSet; }
  inline void SetWidthInPixels(int value) {
    m_widthInPixelsHasBeenSet = true;
    m_widthInPixels = value;
  }
  inline FormatSettings& WithWidthInPixels(int value) {
    SetWidthInPixels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The target height of the output, in pixels.&lt;/p&gt;
   */
  inline int GetHeightInPixels() const { return m_heightInPixels; }
  inline bool HeightInPixelsHasBeenSet() const { return m_heightInPixelsHasBeenSet; }
  inline void SetHeightInPixels(int value) {
    m_heightInPixelsHasBeenSet = true;
    m_heightInPixels = value;
  }
  inline FormatSettings& WithHeightInPixels(int value) {
    SetHeightInPixels(value);
    return *this;
  }
  ///@}
 private:
  int m_framesPerSecond{0};

  int m_widthInPixels{0};

  int m_heightInPixels{0};
  bool m_framesPerSecondHasBeenSet = false;
  bool m_widthInPixelsHasBeenSet = false;
  bool m_heightInPixelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
