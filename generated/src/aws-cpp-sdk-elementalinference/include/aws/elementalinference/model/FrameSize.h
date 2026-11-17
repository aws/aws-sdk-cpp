/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>The dimensions, in pixels, of each frame that a function sends. Elemental
 * Inference resizes each frame to exactly this width and height. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FrameSize">AWS
 * API Reference</a></p>
 */
class FrameSize {
 public:
  AWS_ELEMENTALINFERENCE_API FrameSize() = default;
  AWS_ELEMENTALINFERENCE_API FrameSize(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FrameSize& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The width of each frame, in pixels. Valid range: 1 to 1280.</p>
   */
  inline int GetWidthPixels() const { return m_widthPixels; }
  inline bool WidthPixelsHasBeenSet() const { return m_widthPixelsHasBeenSet; }
  inline void SetWidthPixels(int value) {
    m_widthPixelsHasBeenSet = true;
    m_widthPixels = value;
  }
  inline FrameSize& WithWidthPixels(int value) {
    SetWidthPixels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The height of each frame, in pixels. Valid range: 1 to 720.</p>
   */
  inline int GetHeightPixels() const { return m_heightPixels; }
  inline bool HeightPixelsHasBeenSet() const { return m_heightPixelsHasBeenSet; }
  inline void SetHeightPixels(int value) {
    m_heightPixelsHasBeenSet = true;
    m_heightPixels = value;
  }
  inline FrameSize& WithHeightPixels(int value) {
    SetHeightPixels(value);
    return *this;
  }
  ///@}
 private:
  int m_widthPixels{0};

  int m_heightPixels{0};
  bool m_widthPixelsHasBeenSet = false;
  bool m_heightPixelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
