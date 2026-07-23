/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {

/**
 * <p>Contains the width and height dimensions, in pixels, that define the
 * resolution of the stream session's virtual monitor. The total number of pixels
 * (width × height) must not exceed 2,073,600 (equivalent to 1920 ×
 * 1080).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/Resolution">AWS
 * API Reference</a></p>
 */
class Resolution {
 public:
  AWS_GAMELIFTSTREAMS_API Resolution() = default;
  AWS_GAMELIFTSTREAMS_API Resolution(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Resolution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The width of the stream session's virtual monitor, in pixels. The value must
   * be an even number.</p>
   */
  inline int GetWidth() const { return m_width; }
  inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
  inline void SetWidth(int value) {
    m_widthHasBeenSet = true;
    m_width = value;
  }
  inline Resolution& WithWidth(int value) {
    SetWidth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The height of the stream session's virtual monitor, in pixels. The value must
   * be an even number.</p>
   */
  inline int GetHeight() const { return m_height; }
  inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
  inline void SetHeight(int value) {
    m_heightHasBeenSet = true;
    m_height = value;
  }
  inline Resolution& WithHeight(int value) {
    SetHeight(value);
    return *this;
  }
  ///@}
 private:
  int m_width{0};

  int m_height{0};
  bool m_widthHasBeenSet = false;
  bool m_heightHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
